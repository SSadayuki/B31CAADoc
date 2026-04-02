// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef _SWKILoadNode_h
#define _SWKILoadNode_h
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
//    SWKILoadNode interface.
//    This interface offers non-IDL Load node services.
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
//    GetManikin
//    GetLoad
//    GetChildrenLoads
//    RedrawNode
//    GetNumberOfLoads
//    AddLoad
//    GetLoadAtIndex
//    RemoveLoad
//    RemoveLoadAtIndex
//    RemoveAllLoads
//    RebuildRep
// *****************************************************************************
//  History
//  -------
//
//  Author: Jean-Francois LEBEAU
//  Date  : 03/10/19
//  Goal  : Creation
// *****************************************************************************
//
// --- DNBHumanModelingInterfaces
#include "CATBaseUnknown.h"
//
// --- AppplicationFrame
#include "CATListOfCATBaseUnknown.h"
//
// --- DNBHumanModelingInterfaces
class SWKILoad;
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
extern ExportedBySWKHumanModelingItf IID IID_SWKILoadNode;
#else
extern "C" const IID IID_SWKILoadNode;
#endif

/**
  * This interface is the main interface for a Load node.<br>
  * It is the node that is represented in the V5 specification tree<br>
  **/

class ExportedBySWKHumanModelingItf SWKILoadNode : public CATBaseUnknown
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
	  * @return The manikin this node belongs to.
	  **/
	virtual SWKIManikin * GetManikin()  = 0;

	/**
	  * Get the load of the load node with the ID piID.
	  **/
	virtual SWKILoad * GetLoad(const CATString & piID) = 0;

	/**
	  * Get the children Loads of this node.
	  **/
	virtual void GetChildrenLoads(CATListValCATBaseUnknown_var & pioChildren) = 0;

	/**
	  *  Redraw the the node in the tree.
	  **/
	virtual void RedrawNode() = 0;
	
	/**
	  *  Get the number of loads under the load node.
	  **/
	virtual int GetNumberOfLoads() const = 0;

	/**
	  * Add a Load under the load node.
	  **/
	virtual HRESULT AddLoad(SWKILoad *& poCreatedLoad) = 0;

	/**
	  * Get the load at the index piIndex
	  **/
	virtual SWKILoad * GetLoadAtIndex(const int & piIndex) const = 0;

	/**
	  * Add a copy of the load piSourceLoad under load node and return the created load 
	  * poCreatedLoad.
	  **/
	virtual HRESULT AddLoad(const SWKILoad * piSourceLoad, SWKILoad *& poCreatedLoad) = 0;

	/**
	  * Remove the load with the corresponding ID piID.
	  **/
	virtual HRESULT RemoveLoad(const CATString & piID) = 0;

	/**
	  * Remove the load at the index piIndex in the Load node.
	  **/
	virtual HRESULT RemoveLoadAtIndex(const int piIndex) = 0;

	/**
	  * Remove all the loads of the load node.
	  **/
	virtual HRESULT RemoveAllLoads() = 0;

	/**
	  * Rebuild the graphical representation of the current load.<br>
	  **/
	virtual HRESULT RebuildRep() = 0;
};

CATDeclareHandler(SWKILoadNode, CATBaseUnknown);

#endif
