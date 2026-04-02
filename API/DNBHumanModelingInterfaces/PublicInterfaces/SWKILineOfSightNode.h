// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef SWKILineOfSightNode_h
#define SWKILineOfSightNode_h

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
//    SWKILineOfSightNode interface.
//    This interface offers non-IDL line of sights node services.
//
// *****************************************************************************
//  Usage:
//  ------
//
// *****************************************************************************
//  Inheritance:
//  ------------
//
//    CATBaseUnknown
//
// *****************************************************************************
//  Main Methods:
//  -------------
//
//    GetManikin
//    GetName
//    GetShortName
//    GetVision
//    GetLineOfSight
//    GetDOFAtIndex
//    GetNumberOfDOFs
//    RebuildRep
//    RefreshRep
//    DisableRepUpdate
//    EnableRepUpdate
//    IsRepUpdateEnabled
//    ResetPosture
//    LockPosture
//    ResetPrefAngles
//    ResetAngularLimitations
//    Optimize
//    SetPercentage
// *****************************************************************************
//  History
//  -------
//
//  Author: Julie GUEVREMONT
//  Date  : 03/10/31
//  Goal  : Creation
// *****************************************************************************
//
// --- System
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
//
// --- DNBHumanModelingInterfaces
#include "SWKEnums.h"
#include "SWShortNames.h"
//
// --- AppplicationFrame
#include "CATListOfCATBaseUnknown.h"
//
// --- DNBHumanModelingInterfaces
class SWKIDOF;
class SWKILineOfSight;
class SWKIManikin;
class SWKIVision;

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
extern ExportedBySWKHumanModelingItf IID IID_SWKILineOfSightNode;
#else
extern "C" const IID IID_SWKILineOfSightNode;
#endif

class ExportedBySWKHumanModelingItf SWKILineOfSightNode : public CATBaseUnknown
{
	CATDeclareInterface;

 public:

	/**
	  * Get the manikin owner of the properties.
	  **/
	virtual SWKIManikin * GetManikin() const = 0;

	/**
	  * @return The name of this node, as it appears 
	  * in the specification tree.
	  **/
	virtual CATUnicodeString GetName() const = 0;

	/**
	  * @return The vision related to the line of sight node.
	  **/
	virtual SWKIVision * GetVision() const = 0;

	/**
	  * @return The short name of this node (the central line).
	  **/
	virtual SWShortName GetShortName() const = 0;

	/**
	  * @return The line of sight related to the line of sight node depending of
	  * the param piSide (Left, Right, Neutral or Current)
	  **/
	virtual SWKILineOfSight * GetLineOfSight(const SWKESide & piSide) const = 0;

	/**
	  * Return The degree of freedom at a specified index of the central LineOfSight.<br>
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
	virtual SWKIDOF * GetDOFAtIndex(unsigned piIndex) const = 0;

	/**
	  * @return The number of degrees of freedom on the line of sight.<br>
	  * <strong>N.B.</strong>: A line of sight has extactly two degrees of freedom,<br>
	  * so this method will always return 2.
	  **/
	virtual unsigned GetNumberOfDOFs() const = 0;

	/**
	  * Rebuild the representation of the line of sight
	  **/
	virtual HRESULT RebuildRep() = 0;
	virtual HRESULT RefreshRep() = 0;

	/**
	  * Disable the update of the visual model.<br>
	  * When this method is called, all events to update the visual model,<br>
	  * via methods <code>RebuildRep()</code> or <code>RefreshRep()</code>,
	  * will be ignored.
	  *
	  * The update can be switched back on by a call to <code>EnableRepUpdate()</code>.
	  **/
	virtual void DisableRepUpdate() = 0;

	/**
	  * Enable the representation update.<br>
	  * When this method is called, all events sent to update<br>
	  * the visual model via methods <code>RebuildRep()</code> or
	  * <code>RefreshRep()</code> will be taken into account.<br>
	  * This is the default behavior when a manikin is created.<br>
	  * This update process can be disabled using method <code>DisableRepUpdate()</code>.
	  **/
	virtual void EnableRepUpdate() = 0;

	/**
	  * Determines whether the representation update is enabled or not.
	  **/
	virtual boolean IsRepUpdateEnabled() const = 0;

	/**
	  * Reset the posture of the line of sight node.
	  **/
	virtual HRESULT ResetPosture(int piDOFId = -1) = 0;

	/**
	  * Lock the posture of the line of sight node.
	  **/
	virtual HRESULT LockPosture(int piDOFId = -1) = 0;

	/**
	  * Reset the pref angles of the line of sight node.
	  **/
	virtual HRESULT ResetPrefAngles(int piDOFId = -1) = 0;

	/**
	  * Resets the angular limitations depending on the param piReset
	  * SWKEResetDefault  -> SWKEResetLock OR SWKEResetNoLimits OR SWKEResetLimits
	  *                      depending of the first encountered.
	  * SWKEResetAll      -> SWKEResetLock AND SWKEResetNoLimits AND SWKEResetLimits
	  * SWKEResetLock     -> Unlock the value
	  * SWKEResetNoLimits -> Restore the angular limitations
	  * SWKEResetLimits   -> Set back the angular limitations to 50.0%
	  **/
	virtual HRESULT ResetAngularLimitations(int piDOFId = -1, SWKEReset piReset = SWKEResetDefault) = 0;

	/**
	  * Sets the limits to match the best PrefAngle for the DOF piDOFId
	  **/
	virtual HRESULT Optimize(int piDOFId = -1) = 0;

	/**
	  * Sets the angular limitations to a percentage for the DOF piDOFId
	  **/
	virtual HRESULT SetPercentage(double piPercentage, int piDOFId = -1) = 0;
};

CATDeclareHandler(SWKILineOfSightNode, CATBaseUnknown);

#endif
