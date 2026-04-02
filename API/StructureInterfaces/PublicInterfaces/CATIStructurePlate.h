
//*****************************************************************************
// CATIA Version 5 Release 13 Framework StructureInterfaces
// Copyright Dassault Systemes 2003
//*****************************************************************************
//  Abstract:
//  ---------
//
//*****************************************************************************
//  Usage:
//  ------
// 
//
//
//*****************************************************************************
//  Inheritance:
//  ------------
//  
//*****************************************************************************
//  Main Methods:
//  -------------
//
//*****************************************************************************
//  Historic
//  --------
//
//  Author: Christophe Daguet
//  Date  : 07/29/03
//  Goal  : Define the CATIStructurePlate interface
//
//*****************************************************************************
#ifndef CATIStructurePlate_H
#define CATIStructurePlate_H

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

// StructureInterfaces Framework
#include "CATIStructureObject.h"
 
class CATISpecObject;
class CATMathDirection;
class CATIMaterialFeature;
class CATListValCATMathPoint;

extern "C" const IID IID_CATIStructurePlate ;

//------------------------------------------------------------------

/**
 * Interface to manage the plate information.
 * <b>Role</b>: To retrieve data from a plate such as
 * plate attributes, materials, thickness and support.
 */

class CATIStructurePlate : public CATIStructureObject
{

   public:

	/**
	* Get thickness of the plate. (in MKS)
	*   @param oThickness
	*      Thickness of the plate.
	*   @return
	*   An HRESULT value.
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>S_OK</dt>
	*     <dd>operation is successful</dd>
	*     <dt>E_FAIL</dt>
	*     <dd>operation failed</dd>
	*   </dl>
	*/
	virtual HRESULT GetThickness(double &oThickness)=0;

	/**
	* Set thickness of the plate. (in MKS)
	*   @param iThickness
	*      Thickness of the plate.
	*   @return
	*   An HRESULT value.
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>S_OK</dt>
	*     <dd>operation is successful</dd>
	*     <dt>E_FAIL</dt>
	*     <dd>operation failed</dd>
	*   </dl>
	*/
	virtual HRESULT SetThickness(const double &iThickness)=0;
	/**
	* Get internal offset of the plate.(in MKS)
	* Offset is based on the support, opposite to the extrusion direction.
	*   @param oOffset
	*      Offset of the plate.
	*   @return
	*   An HRESULT value.
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>S_OK</dt>
	*     <dd>operation is successful</dd>
	*     <dt>E_FAIL</dt>
	*     <dd>operation failed</dd>
	*   </dl>
	*/
	virtual HRESULT GetInternalOffset(double &oOffset)=0;

	/**
	* Set internal offset of the plate. (in MKS)
	* Offset is based on the support, opposite to the extrusion direction.
	*   @param iOffset
	*      Offset of the plate.
	*   @return
	*   An HRESULT value.
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>S_OK</dt>
	*     <dd>operation is successful</dd>
	*     <dt>E_FAIL</dt>
	*     <dd>operation failed</dd>
	*   </dl>
	*/
	virtual HRESULT SetInternalOffset(const double &iOffset)=0;

	/**
	* Get the list of vertices.
	*   @param oListOfVertices
	*      List of vertices.
	*   @return
	*   An HRESULT value.
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>S_OK</dt>
	*     <dd>operation is successful</dd>
	*     <dt>E_FAIL</dt>
	*     <dd>operation failed</dd>
	*   </dl>
	*/
	virtual HRESULT GetListOfVertices(CATListValCATMathPoint &oListOfVertices)=0;

	/**
	* Get the contour.
	*   @param opContour
	*      Contour.
	*   @return
	*   An HRESULT value.
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>S_OK</dt>
	*     <dd>operation is successful</dd>
	*     <dt>E_FAIL</dt>
	*     <dd>operation failed</dd>
	*   </dl>
	*/
	virtual HRESULT GetContour(CATISpecObject **opContour)=0;

	/**
	* Set the contour.
	*   @param ipContour
	*      Contour.
	*   @return
	*   An HRESULT value.
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>S_OK</dt>
	*     <dd>operation is successful</dd>
	*     <dt>E_FAIL</dt>
	*     <dd>operation failed</dd>
	*   </dl>
	*/
	virtual HRESULT SetContour(const CATISpecObject *ipContour)=0;

	/**
	* Get the support.
	*   @param opSupport
	*      Support.
	*   @return
	*   An HRESULT value.
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>S_OK</dt>
	*     <dd>operation is successful</dd>
	*     <dt>E_FAIL</dt>
	*     <dd>operation failed</dd>
	*   </dl>
	*/
	virtual HRESULT GetSupport(CATISpecObject **opSupport)=0;

	/**
	* Set the support.
	*   @param ipSupport
	*      Support.
	*   @return
	*   An HRESULT value.
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>S_OK</dt>
	*     <dd>operation is successful</dd>
	*     <dt>E_FAIL</dt>
	*     <dd>operation failed</dd>
	*   </dl>
	*/
	virtual HRESULT SetSupport(const CATISpecObject *ipSupport)=0;

	/**
	* Get the extrusion direction.
	* It's a normal to the support oriented according to the extrusion direction.
	*   @param oExtrusionDirection
	*      Extrusion Direction.
	*   @return
	*   An HRESULT value.
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>S_OK</dt>
	*     <dd>operation is successful</dd>
	*     <dt>E_FAIL</dt>
	*     <dd>operation failed</dd>
	*   </dl>
	*/
	virtual HRESULT GetExtrusionDirection(CATMathDirection &oExtrusionDirection)=0;
	
	/**
	* Reverse the extrusion direction.
	*   @return
	*   An HRESULT value.
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>S_OK</dt>
	*     <dd>operation is successful</dd>
	*     <dt>E_FAIL</dt>
	*     <dd>operation failed</dd>
	*   </dl>
	*/
	virtual HRESULT ReverseDirection()=0;

	/**
	* Compute.
	* Compute the plate object.
	*   @return
	*   An HRESULT value.
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>S_OK</dt>
	*     <dd>operation is successful</dd>
	*     <dt>E_FAIL</dt>
	*     <dd>operation failed</dd>
	*   </dl>
	*/
	virtual HRESULT Compute()=0;
};

//------------------------------------------------------------------

#endif
