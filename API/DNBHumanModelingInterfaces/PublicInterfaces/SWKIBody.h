// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef _SWKIBody_h
#define _SWKIBody_h

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
//
//    This interface provides non-IDL body services.
//    A pointer to this interface can be obtained via
//    a call to method <code>SWKIManikin::GetBody()</code>.
//
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
//    SetPosition
//    ResetPositionInVertical
//    GetPositionAsFrame
//    SetPositionAsFrame
//    ApplyTransformation
//    SetInternalBody
//    GetNumberOfSegments
//    GetSegmentAtIndex
//    GetSegment
//    GetRootSegment
//    GetElementByName
//    GetEllipse
//    GetCenterOfGravity
//    GetMemo
//    SetMemo
//    RefreshColoring
//    GetAnalysisTypeValueForColoring
//    SetAnalysisTypeValueForColoring
//    GetShowColorsValue
//    SetShowColorsValue
//    IsMaxScoreColoringEnabled
//    GetPosturalScoreDOFColoredValue
//    SetPosturalScoreDOFColoredValue
//    GetRULATypeColoring
//    SetRULATypeColoring
//    GetObjectToColor
//    SetObjectToColor
//    SetPosture
//    SetToBestPosture
//    GetNumberOfDOFs
//    GetDOFValues
//    SetDOFValues
//    GetPositionDOFs
//    SetPositionDOFs
//    GetInternalDOFValues
//    SetInternalDOFValues
//    GetDOFIndicesForSegment
//    ActivatePosture
//    DeactivatePosture
//    IsPostureActive
//    ResetAttaches
//    ResetPosture
//    SwapPosture
//    ResetIKOffsets
//    ResetPrefAngles
//    SwapPrefAngles
//    ResetAngLims
//    SwapAngLims
//    LockPosture
//    IsBalanced
//    EnableCoupling
//    DisableCoupling
//    GetMeshResolution
//    GetMinMeshResolution
//    GetMaxMeshResolution
//    SetMeshResolution
//    BuildReachEnvelope
//    GetSubDBaseMesh
//    GetSubDSubdividedMesh
//    GetSubDVerticesAtDirectIndex
//    GetSubDVerticesAtHierarchyIndex
//    GetNbUniqueVertices
//    GetNbHierarchies
//    GetSegmentAtIndexSafe
//    BuildISegmentsArray
//    GetHierarchyVertexPos
//    SetHierarchyVertexPos
//    GetComputedVertexAtHierarchyIndex
//    SetComputedVertexAtHierarchyIndex
//    GetHierarchyOwnerSegmentForVisu
//    RefreshSubDRep
//    GetHairFacesIndexes
//    GetEyebrowsFacesIndexes
//    GetEyelidsFacesIndexes
//    GetEyesWhiteFacesIndexes
//    GetEyesColorFacesIndexes
//    GetPupilsFacesIndexes
//    GetLipsFacesIndexes
//    GetBasisOfSupport
//    GetBasisOfSupport
//    GetLineOfSightNode
//    PublishPostureChangedEvent
// *****************************************************************************
//  History
//  -------
//
//  Author: Jean-Guy AUGUSTIN
//  Date  : 00/02/25
//  Goal  : Creation
//
//  Author: Jean-Guy AUGUSTIN
//  Date  : 00/09/26
//  Goal  : Revision
// *****************************************************************************
//
// --- DNBHumanModelingInterfaces
#include "SWKEnums.h"
#include "SWKIBodyElement.h"
#include "SWKPostureSpec.h"
//
// --- System
#include "CATListOfDouble.h"
//
// --- DNBHumanModeling
class SWBody;
class SWFrame;
class SWMesh;
class SWSegment;
class SWSubDVertex;
//
// --- DNBHumanModelingInterfaces
class SWKICenterOfGravity;
class SWKIEllipse;
class SWKILineOfSightNode;
class SWKISegment;
//
// --- Mathematics
class CATMathTransformation;
//
// --- System
class CATString;
class CATUnicodeString;
//
// --- CATSubdivisionObjects
class CATSobMesh;
//

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
extern ExportedBySWKHumanModelingItf IID IID_SWKIBody;
#else
extern "C" const IID IID_SWKIBody;
#endif

class ExportedBySWKHumanModelingItf SWKIBody : public SWKIBodyElement
{
	CATDeclareInterface;

 public:

	/**
	  * Set the global position of the manikin.
	  *
	  * @param piNewPosition The new position, which will be applied to the<br>
	  * manikin as a whole.  To move individual segments of the manikin,<br>
	  * please refer to interface <code>SWKIDOF</code>.
	  *
	  * @return A status code indicating success or failure.
	  **/
	virtual HRESULT SetPosition(const CATMathAxis & piNewPosition) = 0;

	/**
	  * Set the global position of the manikin in apppication's vertical position.
	  *
	  * @return A status code indicating success or failure.
	  **/

	virtual HRESULT ResetPositionInVertical() = 0;

	/**
	  * Get the global body position in an SWFrame.
	  **/
	virtual void GetPositionAsFrame(SWFrame & poFrame) const = 0;

	/**
	  * Set the global body position with an SWFrame.
	  **/
	virtual void SetPositionAsFrame(const SWFrame & piFrame) = 0;

	/**
	  * Apply a transformation to the manikin.
	  *
	  * @param piTransfoToApply The transformation, which will be applied to the<br>
	  * manikin's current matrix.  This operation will transform the manikin<br>
	  * as a whole.  To move individual segments of the manikin, please refer<br>
	  * to interface <code>SWKIDOF</code>.
	  *
	  * @return A status code indicating success or failure.
	  **/
	virtual HRESULT ApplyTransformation(const CATMathTransformation & piTransfoToApply) = 0;

	/**
	  * Initialize the internal body.
	  * <strong>This method is to be called by the system only</strong>.
	  **/
	virtual HRESULT SetInternalBody(SWBody * piInternalBody) = 0;

	/**
	  * @return The number of segments of the body.
	  **/
	virtual unsigned GetNumberOfSegments() const = 0;

	/**
	  * Retrieve a segment at a specified index.
	  *
	  * @param piIndex The index of the desired segment. First segment is at index 0.
	  *
	  * @return The corresponding segment, or <code>NULL</code>, if the index
	  * goes out of bounds.
	  **/
	virtual SWKISegment * GetSegmentAtIndex(unsigned piIndex) const = 0;

	/**
	  * Retrieve the segment with the specified short name.
	  *
	  * @param piShortName A string identifying the short name<br>
	  * of the desired segment.
	  *
	  * @return The corresponding segment, or <code>NULL</code>,<br>
	  * if a segment with the given short name does not exist.
	  **/
	virtual SWKISegment * GetSegment(const CATString & piShortName) const = 0;

	/**
	  * Retrieve the segment with the specified short name.
	  *
	  * @param piShortName The short name of the desired segment
	  * (see file <code>SWShortNames.h</code>).
	  *
	  * @return The corresponding segment, or <code>NULL</code>,<br>
	  * if a segment with the given short name does not exist.
	  **/
	virtual SWKISegment * GetSegment(SWShortName piShortName) const = 0;

	/**
	  * Retrieve the root segment of the manikin.
	  **/
	virtual SWKISegment * GetRootSegment() const = 0;

	/**
	  * Return an element by its name.
	  * The element returned is either the body itself,
	  * a segment, an ellipse or the center of gravity.
	  *
	  * @param piShortName The short name of the desired element.
	  *
	  * @return The element with the corresponding short name,
	  * of NULL, if there is no body element with such a name.
	  **/
	virtual SWKIBodyElement * GetElementByName(SWShortName piShortName) const = 0;

	/**
	  * Retrieve the ellipse with the specified short name.
	  *
	  * @param piShortName The short name of the desired ellipse
	  * (see file <code>SWShortNames.h</code>).
	  *
	  * @return The corresponding ellipse, or <code>NULL</code>,<br>
	  * if an ellipse with the given short name does not exist.
	  **/
	virtual SWKIEllipse * GetEllipse(SWShortName piShortName) const = 0;

	/**
	  * Retrieve the center of gravity of the manikin.
	  **/
	virtual SWKICenterOfGravity * GetCenterOfGravity() const = 0;

	/**
	  * @return The memo previously assigned to the posture.
	  **/
	virtual CATUnicodeString GetMemo() const = 0;

	/**
	  * Assign a user-defined memo to the posture.
	  *
	  * @param piMemo The text of the memo.
	  **/
	virtual HRESULT SetMemo(const CATUnicodeString & piMemo) = 0;

	/**
	  * Refresh the body reps to display coloring settings.
	  **/
	virtual void RefreshColoring() = 0;

	/**
	  * Get the Analysis Type of this manikin.
	  * The type of analysis the segment must listen to in order to update its color.
	  * Only one analysis type can be activated at a time.
	  * @return <code><font color="blue"><strong>type of analysis</strong></font></code>
	  * the manikin must listen to.
	  **/
	virtual SWKEAnalysisType GetAnalysisTypeValueForColoring() const = 0;

	/**
	  * Set the Analysis Type of this manikin.
	  * Only one analysis type can be activated at a time.
	  * @param  piAnalysisType The type of analysis the manikin must listen to
	  * in order to update its color.  Each call to this method with a new
	  * analysis type disables the last call with a different analysis type.
	  * Only one analysis type can be activated at a time.
	  * @return An error code indicating success or failure.
	  **/
	virtual HRESULT SetAnalysisTypeValueForColoring(const SWKEAnalysisType & piAnalysisType) = 0;

	/**
	  * Get the show Colors status for this manikin at the defined parameter.
	  * This is only possible if the Analysis Type on this manikin is 
	  * SWKEAnalysisTypePosturalScore or SWKEAnalysisTypeRULA.
	  * @param  piAnalysisType The type of analysis the manikin must listen to
	  * in order to update its color.
	  **/
	virtual SWKEShowColors GetShowColorsValue(const SWKEAnalysisType & piAnalysisType) const = 0;

	/**
	  * Set the value for the Pref. Angles show colors status.
	  * @param  piAnalysisType The type of analysis the manikin must listen to
	  * in order to update its color.
	  * @param piShowColors  This parameter specifies the status of the colors display for this
	  * manikin.
	  * Accepted values :
	  * 0 == No Pref. Angles colors, if defined, are showed on the manikin.
	  * 1 == All Pref. Angles colors, if defined, are showed on the manikin.
	  * 2 == All Pref. Angles colors, if defined, are showed EXCEPT if the postural score is
	  *      maximum.  Then no colors are showed.
	  * @return An error code indicating success or failure.
	  **/
	virtual HRESULT SetShowColorsValue(const SWKEAnalysisType & piAnalysisType,
									   const SWKEShowColors & piShowColors) = 0;

	/**
	  * @param  piAnalysisType The type of analysis the manikin must listen to
	  * in order to update its color.
	  * @return true</strong></font></code>
	  * if max score coloring is activated and<br>
	  * <code><font color="blue"><strong>false
	  * otherwise.
	  **/
	virtual boolean IsMaxScoreColoringEnabled(const SWKEAnalysisType & piAnalysisType) const = 0;

	/**
	  * Get the DOF to be showed, if defined so, on this manikin.
	  * @return which Degree Of Freedom has been valuated to be showed.
	  * possible returned values :
	  * SWKDOF1 (flexion/extension)
	  * SWKDOF2 (adduction/ abduction)
	  * SWKDOF3 (rotation)
	  * SWKWorstDOF (meaning the DOF with the postural score on each segment
	  *                 defined with preferential angles).
	  **/
	virtual SWKEPosturalScoreDOF GetPosturalScoreDOFColoredValue() const = 0;

	/**
	  * Set the DOF to be showed, if defined so, on this manikin.
	  * @param piDOFColored holds the value of the DOF to be showed.
	  * @return An error code indicating success or failure.
	  **/
	virtual HRESULT SetPosturalScoreDOFColoredValue(const SWKEPosturalScoreDOF & piDOFColored) = 0;

	/**
	  * Get the level of details to be shown, if defined so, on this manikin.
	  * @return which level of details has been valuated to be showed.
	  * possible returned values :
	  * General (Posture B / Wrist And Arm)
	  * Details (UpperArm, worst between Forearm and WristTwist, Wrist,
	  *          Neck, Trunk, Leg)
	  **/
	virtual SWKERULATypeColoring GetRULATypeColoring() const = 0;

	/**
	  * Set the level of details to be shown, if defined so, on this manikin.
	  * @param piRULAColored holds the value of the level of details to be shown.
	  * @return An error code indicating success or failure.
	  **/
	virtual HRESULT SetRULATypeColoring(const SWKERULATypeColoring & piRULAColored) = 0;

	/**
	  * Get the element to be showed, if defined so, on this manikin.
	  * @return which element has been valuated to be showed.
	  **/
	virtual SWKEObjectToColor GetObjectToColor(const SWKEAnalysisType & piAnalysisType) const = 0;

	/**
	  * Set the element to be showed, if defined so, on this manikin.
	  * @param piObjectToColor holds the type of element to be showed.
	  * @return An error code indicating success or failure.
	  **/
	virtual HRESULT SetObjectToColor(const SWKEAnalysisType & piAnalysisType,
									 const SWKEObjectToColor & piObjectToColor) = 0;

	/**
	  * Set the manikin to a specific pre-defined posture.
	  * @param piPostureSpec The chosen pre-defined posture.
	  **/
	virtual HRESULT SetPosture(SWKPostureSpec piPostureSpec,
							   boolean piRefreshRep = TRUE, 
							   boolean piKeepReferential = TRUE) = 0;

	/**
	  * Change the posture of the body in order to maximize the postural score.
	  **/
	virtual HRESULT SetToBestPosture() = 0;

	/**
	  * @return The total number of DOFs under the body
	  * (excluding the vision DOFs).
	  **/
	virtual unsigned GetNumberOfDOFs() const = 0 ;

	/**
	  * Get the values of every degree of freedom of the body.
	  *
	  * @param poDOFValues The output list that will contain
	  * the <strong>signed</strong> values of every DOF for
	  * every segment.
	  *
	  * The order in which the DOF values are put into the list
	  * is the same as the order in which the segments and DOFs
	  * appear under their indices, when traversing the body.
	  *
	  * Index 7 holds the value of DOF 0 of segment at index 0 (if it exists);
	  * Index 8 holds the value of DOF 1 of segment at index 0 (if it exists);
	  * Index 9 holds the value of DOF 2 of segment at index 0 (if it exists);
	  * Index 10 holds the value of DOF 0 of segment at index 1 (if it exists);
	  * Index 11 holds the value of DOF 1 of segment at index 1 (if it exists);
	  * etc...
	  *
	  * The first six values of the list are reserved for the relative
	  * manikin position (x, y and z in positions 1, 2 and 3), and for the
	  * relative manikin orientation (roll, pitch and yaw in positions 4, 5 and 6).
	  *
	  * @return A status code indicating success or failure.
	  **/
	virtual HRESULT GetDOFValues(CATListOfDouble & poDOFValues) const = 0;

	
	/**
	  * Set the values of every degree of freedom of the body and set
	  * the position of the manikin.
	  *
	  * @param piDOFValues The input list that contains
	  * the <strong>signed</strong> values of every DOF for
	  * every segment.
	  *
	  * The order in which the DOF values are put into the list
	  * is the same as the order in which the segments and DOFs
	  * appear under their indices, when traversing the body.
	  *
	  * Index 7 holds the value of DOF 0 of segment at index 0 (if it exists);
	  * Index 8 holds the value of DOF 1 of segment at index 0 (if it exists);
	  * Index 9 holds the value of DOF 2 of segment at index 0 (if it exists);
	  * Index 10 holds the value of DOF 0 of segment at index 1 (if it exists);
	  * Index 11 holds the value of DOF 1 of segment at index 1 (if it exists);
	  * etc...
	  *
	  * The first six values of the list are reserved for the global
	  * manikin position (x, y and z in positions 1, 2 and 3), and for the
	  * global manikin orientation (roll, pitch and yaw in positions 4, 5 and 6).
	  *
	  * @param piWithoutLimitations When this value is TRUE, the manikin
	  * takes the exact posture (same if some segment were locked on the 
	  * angular limitations were too small).  If the value is FALSE,
	  * the locked segment or angular limitations that are too small do not
	  * take the new posture.
	  *
	  * @param piWithAnimation When this value is TRUE, the posture
	  * is applied and an update is made at each step, giving the
	  * impression of an animation.
	  *
	  * @return A status code indicating success or failure.
	  **/
	virtual HRESULT SetDOFValues(const CATListOfDouble & piDOFValues,
								 boolean piWithoutLimitations = FALSE,
								 boolean piWithAnimation = FALSE) = 0;

	/**
	  * Get the position of the manikin.
	  *
	  * @param piX,piY,piZ,piRoll,piPitch,piYaw The output values that will contain
	  * <strong>signed</strong> values of every DOF define the postion.
	  *
	  * @return A status code indicating success or failure.
	  **/

	virtual HRESULT GetPositionDOFs(double & poX,double & poY,double & poZ,
									double & poRoll,double & poPitch,double & poYaw,
									boolean piPosIsWorld = TRUE) const = 0;
	/**
	  * Set the position of the manikin.
	  *
	  * @param piX,piY,piZ,piRoll,piPitch,piYaw The
	  * <strong>signed</strong> values of every DOF define the postion.
	  *
	  * @return A status code indicating success or failure.
	  **/

	virtual HRESULT SetPositionDOFs(const double piX, const double piY, const double piZ,
						const double piRoll, const double piPitch, const double piYaw,
                        boolean piPosIsWorld = TRUE) = 0;

	/**
      * Get the values of every degree of freedom of the internal body. The
      * total number of DOFs will be 131. 
      *
      * @param poDOFValues The output list that will contain
      * the <strong>signed</strong> values of every DOF for
      * every segment.
      *
      * The order in which the DOF values are put into the list
      * is the same as the order in which the segments and DOFs
      * appear under their indices, when traversing the body.
      *
      * Index 1 holds the value of DOF 0 of segment at index 0 (if it exists);
      * Index 2 holds the value of DOF 1 of segment at index 0 (if it exists);
      * Index 3 holds the value of DOF 2 of segment at index 0 (if it exists);
      * Index 4 holds the value of DOF 0 of segment at index 1 (if it exists);
      * Index 5 holds the value of DOF 1 of segment at index 1 (if it exists);
      * etc...
      *
      * @return A status code indicating success or failure.
      **/
    virtual HRESULT GetInternalDOFValues(CATListOfDouble & poDOFValues) const = 0;

    /**
      * Set the values of every degree (131) of freedom of the internal body 
      *
      * @param piDOFValues The input list that contains
      * the <strong>signed</strong> values of every DOF for
      * every segment.
      *
      * The order in which the DOF values are put into the list
      * is eiher the same as the order in which the segments and DOFs
      * appear under their indices, when traversing the body, or the
      * reverse order in which the segments and DOFs appear.  This is
      * controlled by the third parameter (piReverseOrder).
      *
      * When the order is the same, we have the following:
      * Index 1 holds the value of DOF 0 of segment at index 0 (if it exists);
      * Index 2 holds the value of DOF 1 of segment at index 0 (if it exists);
      * Index 3 holds the value of DOF 2 of segment at index 0 (if it exists);
      * Index 4 holds the value of DOF 0 of segment at index 1 (if it exists);
      * Index 5 holds the value of DOF 1 of segment at index 1 (if it exists);
      * etc...
      *
      * When the order is reversed, we have the following:
      * The last element of piDOFValues holds the value of DOF 0 of segment at index 0 (if it exists);
      * The penultimate element holds the value of DOF 1 of segment at index 0 (if it exists);
      * etc...
      *
      *
      * @param piWithoutLimitations When this value is TRUE, the manikin
      * takes the exact posture (same if some segments were locked on the 
      * angular limitations were too small).  If the value is FALSE,
      * the locked segment or angular limitations that are too small do not
      * take the new posture.
      *
      * @param piReverseOrder By default, the list of values (piDOFValues)
      * is read in reverse order (it is read from the last element to the first).
      * If the list of DOF values must be read from the first element to the last,
      * set this parameter to FALSE.
      *
      * @return A status code indicating success or failure.
      **/
    virtual HRESULT SetInternalDOFValues(const CATListOfDouble & piDOFValues,
                                 boolean piWithoutLimitations = FALSE,
                                 boolean piReverseOrder = TRUE) = 0;

    /**
      * Compute the DOF indices of this segment inside the 131-size array.
      * This method considers all DOFs of the manikin as a single array, and
      * computes the indices of the DOFs of current segment inside that array.
      *
      * If the segment has a DOF at index 0, then poDOFIndices[0] will contain
      * this DOF's index inside the array (between 1 and 131), otherwise 
      * poArrOf3Ints[0] will contain -1.
      *
      * If the segment has a DOF at index 1, then poDOFIndices[1] will contain
      * this DOF's index inside the array (between 1 and 131), otherwise 
      * poArrOf3Ints[1] will contain -1.
      *
      * If the segment has a DOF at index 2, then poDOFIndices[2] will contain
      * this DOF's index inside the array (between 1 and 131), otherwise 
      * poArrOf3Ints[2] will contain -1.
      *
      * @param piSegment The segment whose DOF indices must be computed.
      *
      * @param poDOFIndices The output list that will contain the DOF indices
      * for the given segment.
      *
      * @return <code>S_OK</code> on success, and an error code if there is an
      * internal error or if the first parameter is invalid.
      **/
    virtual HRESULT GetDOFIndicesForSegment(SWKISegment * piSegment, int poDOFIndices[3]) = 0;

	/**
	  * Indicates that the posture edition window has become active
	  * (i&#x2e;ei&#x2e; has been opened).
	  **/
	virtual void ActivatePosture() = 0;

	/**
	  * Indicates that the posture edition window has become inactive
	  * (i&#x2e;ei&#x2e; has been closed).
	  **/
	virtual void DeactivatePosture() = 0;

	/**
	  * Indicates whether the posture edition window is active or not.<br>
	  * Being active means that the posture edition window
	  * is enabled and visible (i&#x2e;ei&#x2e; the user has activated the posture command).
	  **/
	virtual boolean IsPostureActive() const = 0;

	/**
	  * Reset all the attachs.
	  **/
	virtual void ResetAttaches() = 0;

	/**
	  * Reset the manikin's posture to the default (standing) posture.
	  **/
	virtual HRESULT ResetPosture() = 0;

	/**
	  * Swaps the posture of all segments of the body.
	  **/
	virtual void SwapPosture() = 0;

	/**
	  * Reset the manikin's IKOffsets to their defaults values.
	  **/
	virtual void ResetIKOffsets() = 0;

	/**
	  * Resets the preferred angles of all segments of the body.
	  **/
	virtual void ResetPrefAngles(int piDOFId = -1) = 0;

	/**
	  * Swaps the preferred angles of all segments of the body.
	  **/
	virtual void SwapPrefAngles(int piDOFId = -1) = 0;

	/**
	  * Resets the angular limitations of all segments of the body depending on piReset:
	  * SWKEResetDefault  -> SWKEResetLock OR SWKEResetNoLimits OR SWKEResetLimits
	  *                      depending of the first encountered.
	  * SWKEResetAll      -> SWKEResetLock AND SWKEResetNoLimits AND SWKEResetLimits
	  * SWKEResetLock     -> Unlock the value
	  * SWKEResetNoLimits -> Restore the angular limitations
	  * SWKEResetLimits   -> Set back the angular limitations to 50.0%
	  **/
	virtual void ResetAngLims(int piDOFId = -1, SWKEReset piReset = SWKEResetDefault) = 0;

	/**
	  * Swaps the angular limitations of all segments of the body.
	  **/
	virtual void SwapAngLims(int piDOFId = -1) = 0;

	/**
	  * Lock all segments of the body in the given DOF
	  **/
	virtual void LockPosture(int piDOFId = -1) = 0;

	/**
	  * Determine whether the manikin is well-balanced, i&#x2e;ei&#x2e;<br>
	  * whether the projection of the center of gravity<br>
	  * falls inside the <strong>basis of support</strong>, given the manikin's<br>
	  * current posture.
	  **/
	virtual boolean IsBalanced() const = 0;

	/**
	  * Activate the coupled joint motion.
	  *
	  * @param piSaveDOFLimitations This parameter must be set to
	  * <code>TRUE</code> if the method must save the current limitations
	  * on every DOF.  These limitations will be applied back to the
	  * DOF when the coupling is disabled
	  * (cf. method <code>DisableCoupling()</code>).
	  *
	  * If the parameter is set to <code>FALSE</code>, the limitations set 
	  * by the coupling behavior will remain on the DOFs after the coupling
	  * is disabled.
	  **/
	virtual void EnableCoupling(boolean piSaveDOFLimitations = FALSE) = 0;

	/**
	  * Deactivate the coupled joint motion.
	  *
	  * @param piApplyDOFLimitations This parameter must be set to
	  * <code>TRUE</code> if the method must re-apply the current limitations
	  * on every DOF.  These limitations must have been previously saved
	  * by method <code>EnableCoupling()</code>.
	  *
	  * If the parameter is set to <code>FALSE</code>, the limitations set 
	  * by the coupling behavior will remain on the DOFs after the coupling
	  * is disabled.
	  **/
	virtual void DisableCoupling(boolean piApplyDOFLimitations = FALSE) = 0;

	/**
	  * Return whether the coupled motion is active or inactive.
	  **/
	virtual boolean IsCouplingEnabled() const = 0;

	/**
	  * @return The resolution currently used to create<br>
	  * the manikin's meshes.  The mesh resolution is the number<br>
	  * of points taken from each ellipse, which are used to create<br>
	  * the polygons.
	  **/
	virtual unsigned GetMeshResolution() const = 0;

	/**
	  * Return the minimum resolution of the manikin meshes.
	  **/
	virtual unsigned GetMinMeshResolution() const = 0;

	/**
	  * Return the maximum resolution of the manikin meshes.
	  **/
	virtual unsigned GetMaxMeshResolution() const = 0;

	/**
	  * Assign a new mesh resolution.
	  * Upon a call to this method, the manikin's meshes will<br>
	  * be reconstructed, according to the new resolution.<br>
	  *
	  * @param piNew Resolution The new mesh resolution.<br>
	  * This paramter's value must lie between the value returned<br>
	  * by <code>GetMinMeshResolution()</code> and  the<br>
	  * value returned by <code>GetMaxMeshResolution()</code>.<br>
	  * Otherwise it is rejected.
	  *
	  * @return <code>S_OK</code> on success, and an error code if there is an
	  * internal error or if the parameter is invalid.
	  **/
	virtual HRESULT SetMeshResolution(unsigned piNewResolution) = 0;

	/**
	  * Build a reach envelope from the end effector to the start.
	  * segment specified.  This method will create a mesh which
	  * represents all positions that are reachable by the chain
	  * <start segment-end effector>.
	  * <br>
	  * The result of this reach envelope will be stored as a skin
	  * element of segment <code>SWLSBoTst</code> (if the end effector
	  * belongs to the left side), or as a skin element of segment
	  * <code>SWRSBoTst</code> (if the end effector belongs to the right
	  * side).
	  *
	  * @param piEndEffector The short name of the end effector, from which
	  * the reach positions will be calculated. This end effector must
	  * mandatorily belong to the hand, that is, it must be a descendant of
	  * either <code>SWLSArFAr</code> or <code>SWRSArFAr</code>.
	  *
	  * @param piStartSegment The short name of the start segment of the
	  * chain.  This start segment must be an ancestor of the end effector.
	  **/
	virtual HRESULT BuildReachEnvelope(SWShortName piEndEffector, SWShortName piStartSegment) = 0;

	/**
	  * Get a pointer to the Subdivision objects
	  **/ 
	virtual CATSobMesh * GetSubDBaseMesh() const = 0;
	virtual CATSobMesh * GetSubDSubdividedMesh() const = 0;

	/**
	  * Get the vertex stored in a SKN format at the specified index
	  * This method gives access to the vertices in their storage order, that
	  * is not representative of the faces structure. Still, this method is provided
	  * to allow a fast access when looping thru the array.
	  * @param piIndex The index of the vertex
	  **/
	virtual SWSubDVertex * GetSubDVerticesAtDirectIndex(int piIndex) const = 0;

	/**
	  * Get the stored vertex in a SKN format, by specifiing the face index and
	  * the vertex index in the face
	  * @param piFaceIndex The face index
	  * @param piVertexIndex The vertex index in the face (0 up to 3)
	  **/
	virtual SWSubDVertex * GetSubDVerticesAtHierarchyIndex(int piFaceIndex, int piVertexIndex) const = 0;

	/**
	  * Get the number of vertices in the base mesh.
	  * A vertex owned by many different faces is counted only once
	  **/
	virtual int GetNbUniqueVertices() const = 0;

	/**
	  * Get the number of faces in the base mesh
	  **/
	virtual int GetNbHierarchies() const = 0;

	/**
	  * Get a pointer to a segment interface by specifiing its index
	  * This method is actually the former implementation of GetSegmentAtIndex
	  * It loops thru all segments, making it quite slow
	  **/
	virtual SWKISegment * GetSegmentAtIndexSafe(unsigned piIndex) = 0;

	/**
	  * Construct an array of pointers to the various segments interfaces
	  * This is done to speed up (a lot!) the process of getting a segment
	  * from its index.
	  * Note that this array is initialized by the method GetSegmentAtIndexSafe
	  **/
	virtual void BuildISegmentsArray() = 0;

	/**
	  * Get the index of a vertex in the vertices array
	  * @param piFaceIndex The index of the face the vertex belongs to
	  * @param piVertexIndex The index of the vertex in the face (0 up to 3)
	  **/
	virtual int GetHierarchyVertexPos(int piFaceIndex, int piVertexIndex) const = 0;

	/**
	  * Set the index of a vertex in the vertices array
	  * @param piFaceIndex The index of the face the vertex belongs to
	  * @param piVertexIndex The index of the vertex in the face (0 up to 3)
	  * @param piValue The value to set
	  **/
	virtual void SetHierarchyVertexPos(int piFaceIndex, int piVertexIndex, int piValue) const = 0;

	/**
	  * Get a pointer to the array containing the coordinates of an
	  * already computed vertex.
	  * If we note pCoord the returned pointer, then:
	  *    pCoord[0], pCoord[1], pCoord[2] are respectively the X, Y, Z coordinates
	  * @param piFaceIndex The index of the face the vertex belongs to
	  * @param piVertexIndex The index of the vertex in the face (0 up to 3)
	  **/
	virtual double * GetComputedVertexAtHierarchyIndex(int piFaceIndex, int piVertexIndex) const = 0;

	/**
	  * Set the XYZ coordinates of a vertex
	  * @param piFaceIndex The index of the face the vertex belongs to
	  * @param piVertexIndex The index of the vertex in the face (0 up to 3)
	  * @param piValue A pointer to a 3 element array (double ComputedCoord[3]) containing
	  * the computed coordinates
	  **/
	virtual void SetComputedVertexAtHierarchyIndex(int piFaceIndex, int piVertexIndex, double * piValue) = 0;

	/**
	  * Get the index of the segment owning the specified face for display
	  * (Each face is displayed by one and only segment)
	  * @param piFaceIndex The index if the face
	  **/
	virtual int GetHierarchyOwnerSegmentForVisu(int piFaceIndex) = 0;

	/**
	  * Update the base mesh
	  **/
	virtual void RefreshSubDRep() = 0;

	/**
	  * Get a pointer to the specified array for hair
	  **/
	virtual CATListOfInt * GetHairFacesIndexes() = 0;

	/**
	  * Get a pointer to the specified array for eyebrows
	  **/
	virtual CATListOfInt * GetEyebrowsFacesIndexes() = 0;

	/**
	  * Get a pointer to the specified array for eyelids
	  **/
	virtual CATListOfInt * GetEyelidsFacesIndexes() = 0;

	/**
	  * Get a pointer to the specified array for eyes (white sides)
	  **/
	virtual CATListOfInt * GetEyesWhiteFacesIndexes() = 0;

	/**
	  * Get a pointer to the specified array for eyes (iris)
	  **/
	virtual CATListOfInt * GetEyesColorFacesIndexes() = 0;

	/**
	  * Get a pointer to the specified array for pupils
	  **/
	virtual CATListOfInt * GetPupilsFacesIndexes() = 0;

	/**
	  * Get a pointer to the specified array for lips
	  **/
	virtual CATListOfInt * GetLipsFacesIndexes() = 0;

	/**
	  * Retrieve the aera within the feets.
	  *
	  **/
	virtual HRESULT GetBasisOfSupport(CATListOfDouble &poPointList) const = 0;
	virtual HRESULT GetBasisOfSupport(SWMesh &poMesh) const = 0;

	/**
	  * Get the line of sight node.
	  **/
	virtual SWKILineOfSightNode * GetLineOfSightNode() const = 0;

	/**
	  * Called to publish a posture changed event on the body.
	  **/
	virtual void PublishPostureChangedEvent() = 0;
};

CATDeclareHandler(SWKIBody, SWKIBodyElement);
#endif
