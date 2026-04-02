// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef SWKISegmentNode_h
#define SWKISegmentNode_h

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
//       SWKISegmentNode interface.
//       This interface offers non-IDL segment node services.
// *****************************************************************************
//  Usage:
//  ------
//
// *****************************************************************************
//  Inheritance:
//  ------------
//
//  CATBaseUnknown
//
// *****************************************************************************
//  Main Methods:
//  -------------
//
//    GetIconName
//    GetName
//    GetKey
//    GetParent
//    GetManikin
//    GetBody
//    IsBodyNode
//    ResetPosture
//    MirrorCopyPosture
//    SwapPosture
//    ResetPrefAngles
//    MirrorCopyPrefAngles
//    SwapPrefAngles
//    ResetAngularLimitations
//    MirrorCopyAngularLimitations
//    SwapAngularLimitations
//    LockPosture
//    GetMasterSegment
//    GetDirectChildrenSegments
//    GetAllChildrenSegments
//    GetDirectChildrenNodeSegments
//    GetAllChildrenNodeSegments
//    IsOnRightSide
//    IsOnLeftSide
//    IsPartOfSpine
//    IsPartOfCervical
//    KeepLockStateForPasteFrom
//    GetNode
//    GetLineOfSightNode
// *****************************************************************************
//  History
//  -------
//
//  Author: Jean-Guy AUGUSTIN
//  Date  : 00/06/15
//  Goal  : Creation
// *****************************************************************************
//
// --- AppplicationFrame
#include "CATListOfCATBaseUnknown.h"
//
// --- DNBHumanModelingInterfaces
#include "SWKEnums.h"
//
// --- System
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
//
// --- DNBHumanModelingInterfaces
class SWKIBody;
class SWKILineOfSightNode;
class SWKIManikin;
class SWKISegment;

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
extern ExportedBySWKHumanModelingItf IID IID_SWKISegmentNode;
#else
extern "C" const IID IID_SWKISegmentNode;
#endif

/**
  * This interface is the main interface for a segment node.<br>
  * It is the node that is represented in the V5 specification tree<br>
  * and that gathers several related segments together
  * (Trunk, Cervical, Body, Arm...).
  **/

class ExportedBySWKHumanModelingItf SWKISegmentNode : public CATBaseUnknown
{
	CATDeclareInterface;

 public:

	/**
	  * @return The name of the icon appearing beside this node
	  * in the specification tree.
	  **/
	virtual CATUnicodeString GetIconName() const = 0;

	/**
	  * @return The name of this node, as it appears 
	  * in the specification tree.
	  **/
	virtual CATUnicodeString GetName() const = 0;

	/**
	  * @return The key identifying this node.
	  * This key can be used as an internal name to recognize the node.
	  **/
	virtual CATString GetKey() const = 0;

	/**
	  * Get the parent of this node.
	  **/
	virtual SWKISegmentNode * GetParent() const = 0;

	/**
	  * @return The manikin this node belongs to.
	  **/
	virtual SWKIManikin * GetManikin() const = 0;

	/**
	  * @return The body this node belongs to.
	  **/
	virtual SWKIBody * GetBody() const = 0;

	/**
	  * This segment node is it the body node?
	  **/
	virtual boolean IsBodyNode() const = 0;

	/**
	  * Resets the posture of all child segments.
	  **/
	virtual void ResetPosture() = 0;

	/**
	  * Mirror copies the posture of all child segments.
	  **/
	virtual void MirrorCopyPosture() = 0;

	/**
	  * Swaps the posture of all child segments.
	  **/
	virtual void SwapPosture() = 0;

	/**
	  * Resets the preferred angles of all child segments.
	  **/
	virtual void ResetPrefAngles() = 0;

	/**
	  * Mirror copies the preferred angles of all child segments.
	  **/
	virtual void MirrorCopyPrefAngles() = 0;

	/**
	  * Swaps the preferred angles of all child segments.
	  **/
	virtual void SwapPrefAngles() = 0;

	/**
	  * Resets the angular limitations of all child segments depending on the param piReset:
	  * SWKEResetDefault  -> SWKEResetLock OR SWKEResetNoLimits OR SWKEResetLimits
	  *                      depending of the first encountered.
	  * SWKEResetAll      -> SWKEResetLock AND SWKEResetNoLimits AND SWKEResetLimits
	  * SWKEResetLock     -> Unlock the value
	  * SWKEResetNoLimits -> Restore the angular limitations
	  * SWKEResetLimits   -> Set back the angular limitations to 50.0%
	  **/
	virtual void ResetAngularLimitations(int piDOFId = -1, SWKEReset piReset = SWKEResetDefault) = 0;

	/**
	  * Mirror copies the angular limitations of all child segments.
	  **/
	virtual void MirrorCopyAngularLimitations() = 0;

	/**
	  * Swaps the angular limitations of all child segments.
	  **/
	virtual void SwapAngularLimitations() = 0;

	/**
	  * Locks the posture of all child segments.
	  **/
	virtual void LockPosture(int piDOFId = -1) = 0;

	/**
	  * Get the master segment of this node. The master segment is the
	  * main segment characterizing the node, and which can be used to
	  * delegate an operation on a segment (i.e. Attach).
	  **/
	virtual SWKISegment * GetMasterSegment() const = 0;

	/**
	  * Get the first-level children segments of this node.
	  **/
	virtual void GetDirectChildrenSegments(CATListValCATBaseUnknown_var & pioDirectChildren) const = 0;

	/**
	  * Get all the children segments of this node, recursively.
	  * if piAddInertSegments is true, you will also get back the phantom and the 2 segments of the feet that weren't returned before.
	  **/
	virtual void GetAllChildrenSegments(CATListValCATBaseUnknown_var & pioDirectChildren, boolean piAddInertSegments = FALSE) const = 0;

	/**
	  * Get the first-level children noes of this node.
	  **/
	virtual void GetDirectChildrenNodeSegments(CATListValCATBaseUnknown_var & pioDirectNodeChildren) const = 0;

	/**
	  * Get all the children noes of this node, recursively.
	  **/
	virtual void GetAllChildrenNodeSegments(CATListValCATBaseUnknown_var & pioAllNodeChildren) const = 0;

	/**
	  * The node is on the right side if it contains at least one sub-node
	  * or one child segment on the right side.
	  **/
	virtual boolean IsOnRightSide() const = 0;

	/**
	  * The node is on the left side if it contains at least one sub-node
	  * or one child segment on the left side.
	  **/
	virtual boolean IsOnLeftSide() const = 0;

	/**
	  * The node is part of the spine if it contains at least one sub-node or one
	  * child segment that is part of the spine.
	  **/
	virtual boolean IsPartOfSpine() const = 0;

	/**
	  * The node is part of the cervical if it contains at least one sub-node or one
	  * child segment that is part of the cervical (i&#x2e;ei&#x2e; neck).
	  **/
	virtual boolean IsPartOfCervical() const = 0;

	/**
	  * @param piKeep The PasteFrom function will never changes the state of the
	  * lock if the piKeep value is TRUE.
	  **/
	virtual void KeepLockStateForPasteFrom(boolean piKeep) = 0;

	/**
	  * @nodoc
	  **/
	virtual void * GetNode() const = 0;

	/**
	  * Get the node of the line of sight if the segment node is the body.
	  **/
	virtual SWKILineOfSightNode * GetLineOfSightNode() const = 0;
};

CATDeclareHandler(SWKISegmentNode, CATBaseUnknown);
#endif
