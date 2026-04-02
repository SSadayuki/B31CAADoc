// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef _SWKIConstraintNode_h
#define _SWKIConstraintNode_h
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
//    SWKIConstraintNode interface.
//    This interface offers non-IDL constraint node services.
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
//    GetIconName
//    GetName
//    GetChildrenConstraints
//    GetNumberOfConstraints
//    GetManikin
//    RebuildRep
// *****************************************************************************
//  History
//  -------
//
//  Author: Julie GUEVREMONT
//  Date  : 01/12/11
//  Goal  : Creation
// *****************************************************************************
//
// --- DNBHumanModelingInterfaces
#include "CATBaseUnknown.h"
//
// --- AppplicationFrame
#include "CATListOfCATBaseUnknown.h"
//
// --- System
#include "CATBooleanDef.h"
//
// --- DNBHumanModelingInterfaces
class SWKIIKConstraint;
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
extern ExportedBySWKHumanModelingItf IID IID_SWKIConstraintNode;
#else
extern "C" const IID IID_SWKIConstraintNode;
#endif

/**
  * This interface is the main interface for a constraint node.<br>
  * It is the node that is represented in the V5 specification tree<br>
  **/

class ExportedBySWKHumanModelingItf SWKIConstraintNode : public CATBaseUnknown
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
	  * Get the children constraints of this node.
	  **/
	virtual void GetChildrenConstraints(CATListValCATBaseUnknown_var & pioChildren) = 0;

	/**
	  * Get the number of constraints under this node.
	  **/
	virtual int GetNumberOfConstraints() const = 0;

	/**
	  * @return The manikin this node belongs to.
	  **/
	virtual SWKIManikin * GetManikin() = 0;

	/**
	  * Rebuild the graphical representation of the current constraint.<br>
	  **/
	virtual HRESULT RebuildRep() = 0;
};

CATDeclareHandler(SWKIConstraintNode, CATBaseUnknown);

#endif
