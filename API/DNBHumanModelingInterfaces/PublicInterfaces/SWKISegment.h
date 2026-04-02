// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef SWKISegment_h
#define SWKISegment_h

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

// *****************************************************************************
// Framework DNBHumanModelingInterfaces
// Copyright Safework Inc.
// *****************************************************************************
//  Abstract:
//  ---------
//    SWKISegment interface.
//    This interface offers non-IDL segment services.
// *****************************************************************************
//  Usage:
//  ------
//
// *****************************************************************************
//  Inheritance:
//  ------------
//
//    SWKIBodyElement
//
// *****************************************************************************
//  Main Methods:
//  -------------
//
//    SetInternalSegment
//    GetNumberOfChildren
//    GetChildAtIndex
//    GetNumberOfEllipses
//    GetEllipseAtIndex
//    GetEllipse
//    GetBody
//    GetChild
//    GetAncestor
//    GetSpineSegment
//    IsAncestor
//    IsDescendant
//    IsOnLeftSide
//    IsOnRightSide
//    IsPartOfSpine
//    IsPartOfCervical
//    GetMirrorSegment
//    GetNumberOfDOFs
//    GetDOFAtIndex
//    GetBeginPoint
//    GetEndPoint
//    GetBeginPointInGlobal
//    GetEndPointInGlobal
//    ResetPosture
//    MirrorCopyPosture
//    SwapPosture
//    ResetPrefAngles
//    MirrorCopyPrefAngles
//    SwapPrefAngles
//    RemoveLimits
//    ResetAngularLimitations
//    MirrorCopyAngularLimitations
//    SwapAngularLimitations
//    LockPosture
//    Optimize
//    SetPercentage
//    KeepLockStateForPasteFrom
//    GetDirection
//    GetDirectionInGlobal
//    GetLength
//    GetNumberOfMeshes
//    GetMeshAtIndex
//    GetWorstPosturalScoreDOF
//    SetFatherNode
//    GetFatherNode
//    GetIKPositionInGlobal
//    GetDefaultIKOffset
//    GetIKOffset
//    GetSegmentOffset
//    HasIKOffset
//    IsSAEHPointOffset
//    InitializeEllipses
//    InternalSettings
//    GetNameWithoutSide
//    FindStartSegment
//    GetNbHierarchies
//    GetHierarchyAtIndex
//    GetHierarchiesIndexes
//    GetPathToTexture
//    GetTextureScale
//    GetTextureOffset
//    SetSubDMode
//    GetSubDMode
//    RefreshSubDRep
//    GetPreviousPosition
//    MarkAncestors
//    MarkChildren
// *****************************************************************************
//  History
//  -------
//
//  Author: Jean-Guy AUGUSTIN
//  Date  : 00/02/18
//  Goal  : Creation
// *****************************************************************************
//
// --- DNBHumanModelingInterfaces
#include "SWKEnums.h"
#include "SWKIBodyElement.h"
//
// --- System
#include "CATListOfInt.h"
//
// --- DNBHumanModeling
class SWSegment;
class SWMesh;
//
// --- DNBHumanModelingInterfaces
class SWKIBody;
class SWKIDOF;
class SWKIEllipse;
class SWKISegmentNode;
class SWKISegmentOffset;
//
// --- ObjectModelerBase
class CATIContainer;
//
// --- ObjectSpecsModeler
class CATISpecObject;
//
// --- Mathematics
class CATMathDirection;
class CATMathPoint;

#ifdef _WINDOWS_SOURCE
#ifdef __SWKHumanModelingItf
#define ExportedBySWKHumanModelingItf __declspec(dllexport)
#else
#define ExportedBySWKHumanModelingItf __declspec(dllimport)
#endif
#else
#define ExportedBySWKHumanModelingItf
#endif

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySWKHumanModelingItf IID IID_SWKISegment;
#else
extern "C" const IID IID_SWKISegment;
#endif

/**
  * This interface provides non-IDL segment services.<br>
  * The 'segment' term used in anatomy to designate<br>
  * a member of the body, whether it is mobile or not.<br>
  * It is the element that links joints together.<br>
  * A mobile segment always rotates around its anchor point,<br>
  * using its degrees of freedoms (DOFs).
  **/

#ifndef SWHierarchyInfluenceZone
#	define	SWHierarchyInfluenceZone	1
#endif
#ifndef SWHierarchyVisu
#	define	SWHierarchyVisu			2
#endif

class ExportedBySWKHumanModelingItf SWKISegment : public SWKIBodyElement
{
	CATDeclareInterface;

 public:
	/**
	  * Recnstruction mode:
	  * - SubDInvalidParam: internally used (as a default argument check). Should not be used
	  * - SubDNothing: the segment subd surface should not be updated in any way
	  * - XXXUpdateXXX: the segment subd surface only need to be "updated", it has not undergone
	                geometry changes, but only rotations and translation in its whole
	  * - XXXRebuildXXX: the segment subd surface has undergone geometry modification (some vertices have moved)
	  *             it needs to be fully rebuilt
	  * - XXXIfNecessary: we only perform the operation if the segment position has changed
	  * - ForceXXXX: we perform the operation whatever the segment has moved or not
	  *
	  * for performance purposes, we can use the binary represenation (except for SubDInvalidParam)
	  * 4 bits having the following signification, from MSB to LSB:
	  * - 4: MSB bit not used
	  * - 3: if 1, indicates that we want to "Force" update; if 0, we do a "if necessary" check
	  * - 2: if 1, indicates that we want to "Rebuild"
	  * - 1: if 1, indicates that we want to (at least) "Update"
	  * so, the more bits are "on", the more the flag is "strong".
	  **/
	 enum SubDMode
	 {
		 SubDInvalidParam		= -1,
		 SubDNothing			= 0x0,
		 
		 SubDUpdateIfNecessary	= 0x1,	// 0001
		 SubDForceUpdate		= 0x5,	// 0101
		 
		 SubDRebuildIfNecessary	= 0x3,	// 0011
		SubDForceRebuild		= 0x7   // 0111
	 };

	/**
	  * Initialize the internal segment.<br>
	  * <strong>This method is to be used by the system only</strong>.
	  **/
	virtual HRESULT SetInternalSegment(SWSegment * piInternalSegment,
							CATISpecObject * piSegmentStartUp,
							CATIContainer * piRootContainer) = 0;

	/**
	  * Return the number of children of the segment.<br>
	  * The manikin is built in such a way that each segment<br>
	  * can have one or more children, thus constituting a <strong>segment<br>
	  * hierarchy</strong>.<br>
	  * The top segment of that hierarchy is the <strong>root</strong> segment,<br>
	  * accessible from a call to method <code>GetRootSegment()</code> of<br>
	  * interface <code>SWKIBody</code>.
	  **/
	virtual unsigned GetNumberOfChildren() const = 0;

	/**
	  * Retrieve a child segment at the specified index.
	  *
	  * @param piIndex The index of the desired child.<br>
	  * First child segment is at index 0.
	  * @return The corresponding segment, or <code>NULL</code>,
	  * if the index goes out of bounds.
	  **/
	virtual SWKISegment * GetChildAtIndex(unsigned piIndex) = 0;

	/**
	  * @return The number of ellipses on the segment.
	  **/
	virtual unsigned GetNumberOfEllipses() const = 0;

	/**
	  * Retrieve an ellipse at a specified index.
	  *
	  * @param piIndex The index of the desired ellipse.<br>
	  * First ellipse is at index 0.
	  * @return The corresponding ellipse, or <code>NULL</code>,
	  * if the index goes out of bounds.
	  **/
	virtual SWKIEllipse * GetEllipseAtIndex(unsigned piIndex) = 0;

	/**
	  * Retrieve an ellipse from its short name.
	  *
	  * @param piShortName The short name of the desired ellipse.
	  * @return The corresponding ellipse, or <code>NULL</code>,
	  * if no ellipse with the given short name exists.
	  **/
	virtual SWKIEllipse * GetEllipse(SWShortName piShortName) = 0;

	/**
	  * @return The body owning the segment.
	  **/
	virtual SWKIBody * GetBody() = 0;

	/**
	  * Retrieve a child segment from its short name.
	  *
	  * @param piShortName The short name of the desired child.
	  * @return The corresponding segment, or <code>NULL</code>,
	  * if no child segment with the given short name exists.
	  **/
	virtual SWKISegment * GetChild(SWShortName piShortName) = 0;

	/**
	  * @return The ancestor of the segment in the hierarchy, or
	  * <code>NULL</code>, if this segment has no ancestor.
	  **/
	virtual SWKISegment * GetAncestor() = 0;

	/**
	  * @return The spine segment which is the basic segment for spine sections manipulation
	  * <code>NULL</code>, if this segment is not part of Spine or Cervical
	**/
	virtual SWKISegment* GetSpineSegment() = 0;
	
	/**
	  * @return <code><font color="blue"><strong>true</strong></font></code>
	  * if this segment is an ancestor of the one passed<br>
	  * as a parameter,
	  * <code><font color="blue"><strong>false</strong></font></code>
	  * otherwise.  We consider that a segment<br>
	  * not an ancestor of itself.
	  **/
	virtual boolean IsAncestor(SWShortName piOtherSegment) const = 0;

	/**
	  * @return <code><font color="blue"><strong>true</strong></font></code>
	  * if this segment is a descendant of the one passed<br>
	  * as a parameter,
	  * <code><font color="blue"><strong>false</strong></font></code>
	  * otherwise.  We consider that a segment<br>
	  * not a descendant of itself.
	  **/
	virtual boolean IsDescendant(SWShortName piOtherSegment) const = 0;

	/**
	  * @return <code><font color="blue"><strong>true</strong></font></code>
	  * if this segment is on the left side<br>
	  * <code><font color="blue"><strong>false</strong></font></code>
	  * otherwise.
	  **/
	virtual boolean IsOnLeftSide() const = 0;

	/**
	  * @return <code><font color="blue"><strong>true</strong></font></code>
	  * if this segment is on the right side<br>
	  * <code><font color="blue"><strong>false</strong></font></code>
	  * otherwise.
	  **/
	virtual boolean IsOnRightSide() const = 0;

	/**
	  * @return <code><font color="blue"><strong>true</strong></font></code>
	  * if this segment is on the spine<br>
	  * <code><font color="blue"><strong>false</strong></font></code>
	  * otherwise.
	  **/
	virtual boolean IsPartOfSpine() const = 0;

	/**
	  * @return <code><strong><font color="blue">true</font></strong></code>
	  * if the segment belongs to the cervical part of the manikin,
	  * <code><strong><font color="blue">false</font></strong></code> otherwise.
	  **/
	virtual boolean IsPartOfCervical() const = 0;

	/**
	  * @return The segment equivalent to this one but on the opposite
	  * side (ex.: right leg <-> left leg).
	  **/
	virtual SWKISegment * GetMirrorSegment() = 0;

	/**
	  * @return The number of degrees of freedom on the segment.
	  **/
	virtual unsigned GetNumberOfDOFs() const = 0;

	/**
	  * Return the degree of freedom at the specified index.<br>
	  * <br>
	  * <strong>N.B.</strong>: A segment may have up to three degrees of freedom,<br>
	  * and these are numbered from 0 to 2.<br>
	  * <br>
	  * However, the degrees of freedom do not always have<br>
	  * consecutive indexes.  For instance, the forearm<br>
	  * has 2 DOFs, but these are numbered 0 and 2.<br>
	  * That is why the set of DOFs under a segment cannot<br>
	  * be properly accessed as if it was a continuous vector.<br>
	  * When looping through the degrees of freedom of a segment,<br>
	  * the application should always test whether the DOF retrieved is not<br>
	  * <code>NULL</code>.<br>
	  *
	  * @param piIndex  The index of the DOF to retrieve.
	  * This parameter must be either <code>0</code>, <code>1</code> or <code>2</code>.
	  *
	  * @return The desired DOF, or <code>NULL</code> if<br>
	  * the segment does not have a DOF at that position.
	  **/
	virtual SWKIDOF * GetDOFAtIndex(unsigned piIndex) = 0;

	/**
	  * @return The beginning point of the segment in local coordinates,<br>
	  * that is, with respect to the manikin's root segment.
	  **/
	virtual CATMathPoint GetBeginPoint() = 0;

	/**
	  * @return The ending point of the segment in local coordinates,<br>
	  * that is, with respect to the manikin's root.
	  **/
	virtual CATMathPoint GetEndPoint() = 0;

	/**
	  * @return The beginning point of the segment in global (world) coordinates.
	  **/
	virtual CATMathPoint GetBeginPointInGlobal() = 0;

	/**
	  * @return The ending point of the segment in global (world) coordinates.
	  **/
	virtual CATMathPoint GetEndPointInGlobal() = 0;

	/**
	  * Set the segment back to its default position.
	  *
	  * @param piKeepReferential If this parameter is set to TRUE
	  * (default value), the referential coordinates are kept.
	  * @param piDOFNumberToReset If this parameter is set to -1
	  * (default value), all DOFs will be reset, otherwise only the DOF number
	  * specified will be reset.
	  **/
	virtual void ResetPosture(boolean piKeepReferential = TRUE, const int piDOFNumberToReset = -1) = 0;

	/**
	  * Copy the posture on the equivalent segment, on the other side
	  * of the manikin. For instance, it copies the posture from the
	  * right leg to the left leg.
	  *
	  * @param piKeepReferential If this parameter is set to TRUE
	  * (default value), the referential coordinates are kept.
	  **/
	virtual void MirrorCopyPosture(boolean piKeepReferential = TRUE) = 0;

	/**
	  * Swap the posture with the equivalent segment, on the other side
	  * of the manikin. For instance, the right leg takes the posture of
	  * the left leg, and vice versa.
	  *
	  * @param piKeepReferential If this parameter is set to TRUE
	  * (default value), the referential coordinates are kept.
	  **/
	virtual void SwapPosture(boolean piKeepReferential = TRUE) = 0;

	/**
	  * Set the preferred angles back to its default value.
	  **/
	virtual void ResetPrefAngles(int piDOFId = -1) = 0;

	/**
	  * Copy the preferred angles on the equivalent segment, on the other side
	  * of the manikin. For instance, it copies the preferred angles from the
	  * right leg to the left leg.
	  **/
	virtual void MirrorCopyPrefAngles(int piDOFId = -1) = 0;

	/**
	  * Swap the preferred angles with the equivalent segment, on the other side
	  * of the manikin. For instance, the right leg takes the preferred angles of
	  * the left leg, and vice versa.
	  **/
	virtual void SwapPrefAngles(int piDOFId = -1) = 0;

	/**
	  * Removes the angular limitation on a specified DOF
	  **/
	virtual void RemoveLimits(int piDOFId = -1) = 0;

	/**
	  * Resets the angular limitations depending on the param piReset
	  * SWKEResetDefault  -> SWKEResetLock OR SWKEResetNoLimits OR SWKEResetLimits
	  *                      depending of the first encountered.
	  * SWKEResetAll      -> SWKEResetLock AND SWKEResetNoLimits AND SWKEResetLimits
	  * SWKEResetLock     -> Unlock the value
	  * SWKEResetNoLimits -> Restore the angular limitations
	  * SWKEResetLimits   -> Set back the angular limitations to 50.0%
	  **/
	virtual void ResetAngularLimitations(int piDOFId = -1, SWKEReset piReset = SWKEResetDefault) = 0;

	/**
	  * Copy the angular limitations on the equivalent segment, on the other side
	  * of the manikin. For instance, it copies the angular limitations  from the
	  * right leg to the left leg.
	  **/
	virtual void MirrorCopyAngularLimitations(int piDOFId = -1) = 0;

	/**
	  * Swap the angular limitations with the equivalent segment, on the other side
	  * of the manikin. For instance, the right leg takes the angular limitations of
	  * the left leg, and vice versa.
	  **/
	virtual void SwapAngularLimitations(int piDOFId = -1) = 0;

	/**
	  * Lock the value of one of all DOFs on this segment.
	  *
	  * @param piDOFId The index of the DOF whose value must
	  * be locked.  If this parameter is omitted, or if its value
	  * is higher than 2 or negative, all DOFs are locked.
	  **/
	virtual void LockPosture(int piDOFId = -1) = 0;

	/**
	  * Sets the limits to match the best PrefAngle for the DOF piDOFId
	  **/
	virtual void Optimize(int piDOFId = -1) = 0;

	/**
	  * Sets the angular limitations to a percentage for the DOF piDOFId
	  **/
	virtual void SetPercentage(double piPercentage, int piDOFId = -1) = 0;
	
	/**
	  * @param piKeep The PasteFrom function will never changes the state of the
	  * lock if the piKeep value is TRUE.
	  **/
	virtual void KeepLockStateForPasteFrom(boolean piKeep) = 0;

	/**
	  * @return The direction of the segment in local coordinates,<br>
	  * that is, with respect to the manikin's root.
	  **/
	virtual CATMathDirection GetDirection() = 0;

	/**
	  * @return The direction of the segment in global (world) coordinates.
	  **/
	virtual CATMathDirection GetDirectionInGlobal() = 0;

	/**
	  * @return The length of the segment, in centimeters.
	  **/
	virtual double GetLength() const = 0;

	/**
	  * @return The number of meshes (surface of skin) on the segment.
	  **/
	virtual unsigned GetNumberOfMeshes() const = 0;

	/**
	  * Retrieve a mesh at the specified index.
	  *
	  * @param piIndex The index of the mesh to return.<br>
	  * First mesh is at index 0.
	  * @return The mesh at the specified index, or <code>NULL</code><br>
	  * if the index goes out of bounds.
	  **/
	virtual const SWMesh * GetMeshAtIndex(unsigned piIndex) const = 0;

	/**
	  * @return The DOF having the worst postural score on the current segment.
	  **/
	virtual SWKIDOF * GetWorstPosturalScoreDOF() = 0;

	/**
	  * Set the segment node that will be the father of this segment in the
	  * V5 specification tree.
	  *
	  * This method is to be used by the system only.
	  **/
	virtual HRESULT SetFatherNode(SWKISegmentNode * piSegmentNode) = 0;

	/**
	  * @return the node that is the parent of this segment in the V5 specification tree.
	  **/
	virtual SWKISegmentNode * GetFatherNode() = 0;

	/**
	  * @return The IK end effector matrix position for this segment.
	  **/

	virtual CATMathAxis GetIKPositionInGlobal() = 0;
	
	/**
	  * Get the default value of the offset.
	  **/
	virtual void GetDefaultIKOffset(CATMathAxis & poAxis) = 0;

	/**
	  * @return the axis of the active offset for this segment.
	  **/
	virtual CATMathAxis GetIKOffset() = 0;

	/**
	  * @return the active offset for this segment.
	  **/
	virtual SWKISegmentOffset * GetSegmentOffset() = 0;

	/**
	  * @return true if the segment has an active offset 
	  **/
	virtual boolean HasIKOffset() = 0;

	/**
	  * Ask HPoint IK offset is HPoint of SAE (J826).
	  **/
	virtual boolean IsSAEHPointOffset() = 0;

	/**
	  * @nodoc
	  */
	virtual void InitializeEllipses() = 0;

	/**
	  * @nodoc
	  */
	virtual void * InternalSettings(void * piInternalData = NULL) = 0;
	
	/**
	  * @return The full name of the segment without the "left" or "right" part.
	  **/
	virtual CATUnicodeString GetNameWithoutSide() const = 0;

	/**
	  *	Returns the start segment of the given segment
	  */
	virtual SWShortName FindStartSegment(SWShortName piSegment) const = 0;

	/**
	  * Get the number of faces "owned" by this segment
	  * The returned value depends on the specified parameter
	  * @param piMode Indicates which information should be retrieved
	  * legal values:
	  *	- SWHierarchyInfluenceZone: the returned value is the number of faces influenced by
	  * this segment. The influenced faces are the ones that have at least one vertex 
	  * influenced by an ellipse owned by this segment
	  *	- SWHierarchyVisu: the returned value is the number of faces displayed by this
	  * segment. The "visu" faces are the ones whose higher influence coefficient is relative
	  * to an ellipse owned by this segment
	  **/
	virtual int  GetNbHierarchies(int piMode)  const = 0;

	/**
	  * Get the index of the face in the base mesh
	  * The returned value depends on the specified parameter
	  * @param piMode Indicates which information should be retrieved
	  * legal values:
	  *	- SWHierarchyInfluenceZone: the returned value is the number of faces influenced by
	  * this segment. The influenced faces are the ones that have at least one vertex 
	  * influenced by an ellipse owned by this segment
	  *	- SWHierarchyVisu: the returned value is the number of faces displayed by this
	  * segment. The "visu" faces are the ones whose higher influence coefficient is relative
	  * to an ellipse owned by this segment
	  * @param piModeIndex The index of the face in the array specified by piMode
	  **/
	virtual int  GetHierarchyAtIndex(int piMode, int piModeIndex) = 0;

	/**
	  * Set the index of the face in the base mesh
	  * @param piMode Indicates which information should be retrieved
	  * legal values:
	  *	- SWHierarchyInfluenceZone: the returned value is the number of faces influenced by
	  * this segment. The influenced faces are the ones that have at least one vertex 
	  * influenced by an ellipse owned by this segment
	  *	- SWHierarchyVisu: the returned value is the number of faces displayed by this
	  * segment. The "visu" faces are the ones whose higher influence coefficient is relative
	  * to an ellipse owned by this segment
	  * @param piModeIndex The index of the face in the array specified by Mode
	  * @param piValue The value to set
	  **/
	virtual void SetHierarchyAtIndex(int piMode, int piModeIndex, int piValue) = 0;

	/**
	  * Get a pointer to the specified array
	  * The returned value depends on the specified parameter
	  * @param piMode Indicates which information should be retrieved
	  * legal values:
	  *	- SWHierarchyInfluenceZone: the returned value is the number of faces influenced by
	  * this segment. The influenced faces are the ones that have at least one vertex 
	  * influenced by an ellipse owned by this segment
	  *	- SWHierarchyVisu: the returned value is the number of faces displayed by this
	  * segment. The "visu" faces are the ones whose higher influence coefficient is relative
	  * to an ellipse owned by this segment
	  **/
	virtual CATListOfInt *GetHierarchiesIndexes(int piMode) = 0;

	/**
	  * Get the path of the file mapped as texture on this segment
	  **/
	virtual CATUnicodeString GetPathToTexture() = 0;

	/**
	  * Get the scale factor for the texture (float [2], along U and V)
	  **/
	virtual float *GetTextureScale() = 0;

	/**
	  * Get the offset factor for the texture (float [2], along U and V)
	  **/
	virtual float *GetTextureOffset() = 0;

	/**
	  * Set the flag SubDMode, indicating the way the subd surface should be updated/rebuilt
	  * available modes:
	  * - SubDNothing
	  * - SubDForceRebuild
	  * - SubDForceUpdate
	  * - SubDRebuildIfNecessary
	  * - SubDUpdateIfNecessary
	  * there are many options:
	  * - piMode: the mode the segment should be switched to
	  * - piSetToStrongest: if TRUE, the "strongest" mode of the segment's current mode and piMode set as parameter is used
	  * - piRecursive: if TRUE, the flag is set down to children
	  * - piRecursiveMode: the mode to switch the children to
	  *       if piRecursive is set to TRUE and piRecursiveMode is not specified, then the children are set to the same kind of
	  *       reconstruction (Rebuild or Update) but it is limited to a "XXXIfNecessary" reconstruction
	  **/
	virtual SWKISegment::SubDMode SetSubDMode(SWKISegment::SubDMode piMode,
											  boolean piSetToStrongest = FALSE,
											  boolean piRecursive = FALSE,
											  SWKISegment::SubDMode piRecursiveMode = SWKISegment::SubDInvalidParam) = 0;
	virtual SWKISegment::SubDMode GetSubDMode() = 0;

	/**
	  *
	  **/
	virtual void RefreshSubDRep() = 0;
	
	/**
	  * Get the previous position of this segment
	  **/
	virtual CATMathAxis GetPreviousPosition() = 0;

	/**
	  * Those two methods put the flag SubDRebuildIfNecessary on all
	  * ancestors & children until a segment that has an influence zone
	  * is found.
	  **/
	virtual int MarkAncestors() = 0;
	virtual int MarkChildren() = 0;
};

CATDeclareHandler(SWKISegment, SWKIBodyElement);
#endif
