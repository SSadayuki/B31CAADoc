// COPYRIGHT DASSAULT SYSTEMES 2003

#ifndef _SWKIBodyElement_h
#define _SWKIBodyElement_h

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
//    SWKIBodyElement interface.
//    This interface provides non-IDL body element services.
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
//    GetPosition
//    GetWorldPosition
//    GetName
//    GetShortName
//    GetShortNameAsString
//    GetManikin
//    RefreshRep
//    RebuildRep
//    DisableRepUpdate
//    EnableRepUpdate
//    IsRepUpdateEnabled
// *****************************************************************************
//  History
//  -------
//
//  Author: Jean-Guy AUGUSTIN
//  Date  : 00/02/28
//  Goal  : Creation
// *****************************************************************************
//
// --- System
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
//
// --- DNBHumanModelingInterfaces
#include "SWShortNames.h"
//
// --- DNBHumanModelingInterfaces
class SWKIManikin;
//
// --- Mathematics
class CATMathAxis;
//
// --- System
class CATUnicodeString;
class CATString;

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
extern ExportedBySWKHumanModelingItf IID IID_SWKIBodyElement;
#else
extern "C" const IID IID_SWKIBodyElement;
#endif

/**
  * This interface provides non-IDL body element services.<br>
  * A body element is an element entering in the constitution<br>
  * of the body of the manikin.  Segments, ellipses and lines<br>
  * of sight are examples of body elements.<br>
  * All the common functionality related to body elements are<br>
  * put in this interface. Not that the body of the manikin itself<br>
  * is a body element.
  **/

class ExportedBySWKHumanModelingItf SWKIBodyElement : public CATBaseUnknown
{
	CATDeclareInterface;

 public:

	/**
	  * @return The position of the body element with respect to the manikin's root.<br>
	  * The position returned will be as if the root of the manikin was the<br>
	  * origin of the world.  To get the real position of the manikin in the world,<br>
	  * please refer to method <code>GetWorldPosition()</code><br>
	  **/
	virtual CATMathAxis GetPosition() const = 0;

	/**
	  * @return The global position of the body element in world coordinates.
	  **/
	virtual CATMathAxis GetWorldPosition() const = 0;

	/**
	  * @return The full name of the body element.
	  **/
	virtual CATUnicodeString GetName() const = 0;

	/**
	  * @return The short name of the body element.<br>
	  * Each body element can be uniquely identified by this
	  * short name.
	  **/
	virtual SWShortName GetShortName() const = 0;

	/**
	  * @return The short name of the body element in a string format.<br>
	  * Each body element can be uniquely identified by this
	  * short name.
	  **/
	virtual CATString GetShortNameAsString() const = 0;

	/**
	  * @return The manikin owning this body element.
	  **/
	virtual SWKIManikin * GetManikin() const = 0;

	/**
	  * Update the graphical representation of the current body element.<br>
	  * This needs to be done when the body element's position changes<br>
	  * (i.e. when a segment moves or when the position of the body changes).
          *  2 arguments have been added:
	  * @param piMasterCall Since RefreshRep is recursive, MasterCall==true indicates
	  * that the call has been made from 'outside'.
	  * @param piRefSegment Since RefreshRep is sometimes called from a segment that isn't
	  * directly the modified segment, indicates the segment that has really changed (-1 indicates
	  * to use this segment)
	  * @return <code>S_OK</code> on success, or an error code on failure.
	  *
	  **/
	virtual HRESULT RefreshRep(boolean piMasterCall = TRUE, int piRefSegment = -1) = 0;

	/**
	  * Rebuild the graphical representation of the current body element.<br>
	  * This needs to be done when the anthropometry changes, for example.
	  **/
	virtual HRESULT RebuildRep() = 0;

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
};

CATDeclareHandler(SWKIBodyElement, CATBaseUnknown);

#endif
