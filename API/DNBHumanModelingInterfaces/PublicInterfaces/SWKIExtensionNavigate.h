// COPYRIGHT DASSAULT SYSTEMES 2003

#ifndef SWKIExtensionNavigate_h
#define SWKIExtensionNavigate_h

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
//    SWKIExtensionNavigate interface.
//    All manikins will adhere to this interface, so that MHT Tasks can be shown
//    int the context of a Process
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
//    GetIdentificators
//    GetChildren
// *****************************************************************************
//  History
//  -------
//
//  Author: Vikas GUJRAL
//          Jean-Francois VEAUX-LOGEAT
//  Date  : 02/06/12
//  Goal  : Creation
// *****************************************************************************
//
// --- System
#include "CATBaseUnknown.h"
// 
// --- System
class CATListValCATBaseUnknown_var;
class CATListValCATUnicodeString;
class CATIGraphNode_var;

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
extern ExportedBySWKHumanModelingItf IID IID_SWKIExtensionNavigate;
#else
extern "C" const IID IID_SWKIExtensionNavigate;
#endif

/**
  * Interface to navigate in the graph of specifications tree.
  * <br><b> Role:</b> The specification tree is displayed within the document window. 
  * By clicking one of the objects ( nodes )of the specification tree, children 
  * of this object are displayed.
  **/
class ExportedBySWKHumanModelingItf SWKIExtensionNavigate: public CATBaseUnknown
{
	CATDeclareInterface;
 public:

	/**
	  * Returns nodes identificators.
	  **/
	virtual CATListValCATUnicodeString * GetIdentificators()=0;
		
	/**
	  * Returns list of direct children in the tree.
	  **/
	virtual CATListValCATBaseUnknown_var * GetChildren()=0;

	/**
	  * Displays the 'Active Task' in the Process tree
	  **/
	virtual void DisplayActiveTask(CATBaseUnknown_var spReference, 
									CATIGraphNode_var spNode) = 0;
};

CATDeclareHandler(SWKIExtensionNavigate, CATBaseUnknown);
#endif

