// COPYRIGHT DASSAULT SYSTEMES 2003

#ifndef _SWKILineOfSight_h
#define _SWKILineOfSight_h

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
//       SWKILineOfSight interface.
//       This interface offers non-IDL Line of sight services.
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
//    SetInternalLineOfSight
//    GetBody
//    GetVision
//    GetAncestor
//    GetNumberOfDOFs
//    GetDOFAtIndex
//    Activate
//    GetBeginPoint
//    GetEndPoint
//    GetBeginPointInGlobal
//    GetEndPointInGlobal
//    LockPosture
//    Optimize
//    SetPercentage
//    ResetAngularLimitations
//    ResetPosture
//    ResetPrefAngles
//    KeepLockStateForPasteFrom
//    GetWorstPosturalScoreDOF
//    GetLength
//    GetDirection
//    GetDirectionInGlobal
//    GetCentralCone
//    GetPeripheralCone
// *****************************************************************************
//  History
//  -------
//
//  Author: Jean-Guy AUGUSTIN
//  Date  : 00/03/29
//  Goal  : Creation
// *****************************************************************************
//
// --- DNBHumanModelingInterfaces
#include "SWKEnums.h"
#include "SWKIBodyElement.h"
//
// --- DNBHumanModeling
class SWLineOfSight;
class SWMesh;
class SWBagOfSWMesh;
//
// --- DNBHumanModelingInterfaces
class SWKIBody;
class SWKIDOF;
class SWKISegment;
class SWKIVision;
//
// --- Mathematics
class CATMathPoint;
class CATMathDirection;

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
extern ExportedBySWKHumanModelingItf IID IID_SWKILineOfSight;
#else
extern "C" const IID IID_SWKILineOfSight;
#endif

enum SWKProjectionStyle
{
	SWKProjectionStylePlanar = 0,
	SWKProjectionStyleSpherical = 1
};

/**
  * This interface provides non-IDL line of sight services.<br>
  * The lines of sight give the direction of the manikin's vision.
  **/

class ExportedBySWKHumanModelingItf SWKILineOfSight : public SWKIBodyElement
{
	CATDeclareInterface;

 public:
	
	/**
	  * Initialize the internal line of sight.<br>
	  * <strong>This method is to be used by the system only.<strong>
	  **/
	virtual HRESULT SetInternalLineOfSight(SWKISegment * piAncestor,
										SWLineOfSight * piInternalLineOfSight) = 0;

	/**
	  * @return The body owning this line of sight.
	  **/
	virtual SWKIBody * GetBody() = 0;

	/**
	  * @return The vision owning this line of sight.
	  **/
	virtual SWKIVision * GetVision() = 0;

	/**
	  * @return The segment which is the ancestor of this line of sight.
	  **/
	virtual SWKISegment * GetAncestor() = 0;

	/**
	  * @return The number of degrees of freedom on the line of sight.<br>
	  * <strong>N.B.</strong>: A line of sight has extactly two degrees of freedom,<br>
	  * so this method will always return 2.
	  **/
	virtual unsigned GetNumberOfDOFs() const = 0;

	/**
	  * Return The degree of freedom at a specified index.<br>
	  * <br>
	  * <strong>N.B.</strong>: A line of sight has extactly two degrees of freedom,<br>
	  * and these are numbered <code>0</code> and <code>1</code>.
	  *
	  * @param piIndex  The index of the DOF to retrieve.<br>
	  * This parameter must be either <code>0</code> or <code>1</code>.
	  *
	  * @return The desired DOF, or <code>NULL</code> if<br>
	  * the line of sight does not have a DOF at that position.
	  **/
	virtual SWKIDOF * GetDOFAtIndex(unsigned piIndex) = 0;

	/**
	  * Activate this line of sight.
	  **/
	virtual void Activate() = 0;

	/**
	  * @return The beginning point of the line of sight in local coordinates,<br>
	  * that is, with respect to the manikin's root.
	  **/
	virtual CATMathPoint GetBeginPoint() = 0;

	/**
	  * @return The ending point of the line of sight in local coordinates,<br>
	  * that is, with respect to the manikin's root.
	  **/
	virtual CATMathPoint GetEndPoint() = 0;

	/**
	  * @return The beginning point of the line of sight in global (world) coordinates.
	  **/
	virtual CATMathPoint GetBeginPointInGlobal() = 0;

	/**
	  * @return The ending point of the line of sight in global (world) coordinates.
	  **/
	virtual CATMathPoint GetEndPointInGlobal() = 0;

	/**
	  * Lock the value of one of all DOFs on this line of sight.
	  *
	  * @param piDOFId The index of the DOF whose value must
	  * be locked.  If this parameter is omitted, or if its value
	  * is higher than 1 or negative, all DOFs are locked.
	  **/
	virtual void LockPosture(int piDOFId) = 0;

	/**
	  * Sets the limits to match the best PrefAngle for the DOF piDOFId
	  **/
	virtual void Optimize(int piDOFId = -1) = 0;

	/**
	  * Sets the angular limitations to a percentage for the DOF piDOFId
	  **/
	virtual void SetPercentage(double piPercentage, int piDOFId = -1) = 0;

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
	  * Reset the posture of the line of sight.
	  **/
	virtual void ResetPosture(int piDOFId = -1) = 0;

	/**
	  * Reset the pref angles of the line of sight.
	  **/
	virtual void ResetPrefAngles(int piDOFId = -1) = 0;

	/**
	  * @param piKeep The PasteFrom function will never changes the state of the
	  * lock if the piKeep value is TRUE.
	  **/
	virtual void KeepLockStateForPasteFrom(boolean piKeep) = 0;

	/**
	  * Retrieve the DOF on which the actual postural score has the worst value among all DOFs.
	  **/
	virtual SWKIDOF * GetWorstPosturalScoreDOF() = 0;

	/**
	  * @return The length of the line of sight, in centimeters.
	  **/
	virtual double GetLength() const = 0;

	/**
	  * @return The direction of the line of sight in local coordinates,<br>
	  * that is, with respect to the manikin's root.
	  **/
	virtual CATMathDirection GetDirection() = 0;

	/**
	  * @return The direction of the line of sight in global (world) coordinates.
	  **/
	virtual CATMathDirection GetDirectionInGlobal() = 0;

	/**
	  * @param piProjectionStyle The projection style of the peripheral cone.<br>
	  * If this parameter is <code>SWKProjectionStylePlanar</code>, then<br>
	  * the cone returned will have a planar section, whose normal vector is<br>
	  * the line of sight itself.<br>
	  *
	  * If this parameter is<code>SWKProjectionStyleSpherical</code>, then<br>
	  * the cone returned will have a spherical section.  The sphere in question<br>
	  * will be centered at the beginning of the line of sight and will have the<br>
	  * length of the line of sight as its radius.
	  *
	  * @return The central cone associated to this line of sight.
	  **/
	virtual const SWBagOfSWMesh *  GetCentralCone(SWKProjectionStyle
			piProjectionStyle = SWKProjectionStylePlanar) const = 0;

	/**
	  * @param piProjectionStyle The projection style of the peripheral cone.<br>
	  * If this parameter is <code>SWKProjectionStylePlanar</code>, then<br>
	  * the cone returned will have a planar section, whose normal vector is<br>
	  * the line of sight itself.<br>
	  *
	  * If this parameter is<code>SWKProjectionStyleSpherical</code>, then<br>
	  * the cone returned will have a spherical section.  The sphere in question<br>
	  * will be centered at the beginning of the line of sight and will have the<br>
	  * length of the line of sight as its radius.
	  *
	  * @return The peripheral cone associated to this line of sight.<br>
	  * This peripheral cone represents the delimitation of<br>
	  * the field of view of the manikin.
	  **/
	virtual const SWBagOfSWMesh * GetPeripheralCone(SWKProjectionStyle
			piProjectionStyle = SWKProjectionStylePlanar) const = 0;
};

CATDeclareHandler(SWKILineOfSight, SWKIBodyElement);

#endif
