// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef SWKINode_h
#define SWKINode_h

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
//    SWKINode interface.
//    This interface offers non-IDL node services.
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
//    GetParent
//    GetIconName
//    GetName
// *****************************************************************************
//  History
//  -------
//
//  Author: Julie GUEVREMONT
//  Date  : 04/01/12
//  Goal  : Creation
// *****************************************************************************
//
// --- System
#include "CATBaseUnknown.h"
//
// --- DNBHumanModelingInterfaces
#include "SWPartID.h"
//
// --- AppplicationFrame
#include "CATListOfCATBaseUnknown.h"
//
// --- DNBHumanModelingInterfaces
class SWKIManikin;

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
extern ExportedBySWKHumanModelingItf IID IID_SWKINode;
#else
extern "C" const IID IID_SWKINode;
#endif

/**
  * This interface is the main interface for a node of a manikin.<br>
  * It is the node that is represented in the V5 specification tree<br>
  **/

class ExportedBySWKHumanModelingItf SWKINode : public CATBaseUnknown
{
	CATDeclareInterface;

  public:

	/**
	  * Get the owner manikin.
	  **/
	virtual SWKIManikin * GetManikin() const = 0;

	/**
	  * Get the parent of this node and NULL otherwise
	  **/
	virtual SWKINode * GetParent()  const = 0;

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
	  * @return The part ID related to this node.  The
	  * SWPartID is used for the Human Catalog Load/Save.
	  **/
	virtual SWPartID GetPartID() const = 0;
};

CATDeclareHandler(SWKINode, CATBaseUnknown);

#endif
