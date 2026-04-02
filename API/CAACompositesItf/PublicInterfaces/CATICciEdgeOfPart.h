// COPYRIGHT Dassault Systemes 2009
//===================================================================
//
// CATICciEdgeOfPart.h
// Define the CATICciEdgeOfPart interface
//
//===================================================================
//
// Usage notes:
//   Interface to manage composites edge of part objects 
//
//===================================================================
//
//===================================================================
#ifndef CATICciEdgeOfPart_H
#define CATICciEdgeOfPart_H
/**
  * @CAA2Level L0
  * @CAA2Usage U1
  */

#include "CAACompositesItf.h"
#include "CATBaseUnknown.h"
#include "CATICciContour.h"
#include "CATIMmiMechanicalFeature.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesItf IID IID_CATICciEdgeOfPart;
#else
extern "C" const IID IID_CATICciEdgeOfPart ;
#endif

//------------------------------------------------------------------

/**
* Interface representing edge of part.
* <br><b>Role</b>: Allows to manage a composites edge of part object.
* <br>Note: Edge of part object implement CATICciCompositesGeometry interface 
* @see CATICciCompositesGeometry,CATICciMaterialExcess,CATICciCompositesDataFactory#CreateEEOP, CATICciCompositesDataFactory#CreateMEOP,
*/
class ExportedByCAACompositesItf CATICciEdgeOfPart: public CATBaseUnknown
{
	CATDeclareInterface;

public:

	/**
	* Types for Edge Of Part ( EOP).
	* <b>Role</b>:  Used Edge Of part interface,  specifies type of the edge 
	* @param EEOP 
	*    Engineering Edge Of Part 
	* @param MEOP 
	*    Manufacturing  Edge Of Part 
	*/
	enum CATCciEOPType{EEOP = 1,MEOP = 2};

	/**
	* Gets the EOP type.
	* @param oType
	*   The EOP type : either EEOP or MEOP.
	*/
	virtual HRESULT GetType(CATCciEOPType &oType) = 0;

	/**
	* Sets the EOP type.
	* @param iType
	*   The EOP type : either EEOP or MEOP.
	*/
	virtual HRESULT SetType(const CATCciEOPType iType) = 0;

	/**
	* Gets the surface of the Edge of Part.
	* @param oSupportSurface
	*   The Surface on which EOP has been defined.
	*/
	virtual HRESULT GetSurface(CATIMmiMechanicalFeature_var &oSupportSurface) = 0;

	/**
	* Sets the surface of the Edge of Part.
	* @param iSupportSurface
	*   The Surface on which EOP resides.
	*/
	virtual HRESULT SetSurface(const CATIMmiMechanicalFeature_var iSupportSurface) = 0;

	/**
	* Gets the EOP Contour.
	* @param oEOPContour
	*   The EOP contour.
	*/
	virtual HRESULT GetContour(CATICciContour_var &oEOPContour) = 0;

	//--------------------------------------------------------------------------------------------------
    //------------------------- METHODS NOT TO BE USED: will be removed in future release --------------
    //--------------------------------------------------------------------------------------------------
	/**
	* @deprecated V5R26 
	* Use @see #GetSurface(CATIMmiMechanicalFeature_var&) method instead.
	* Gets the surface of the Edge of Part.
	* @param oSupportSurface
	*   The Surface on which EOP has been defined.
	*/
	virtual HRESULT GetSurface(CATISpecObject_var &oSupportSurface) = 0;

	/**
	* @deprecated V5R26 
	* Use @see #SetSurface(CATIMmiMechanicalFeature_var) method instead.
	* Sets the surface of the Edge of Part.
	* @param iSupportSurface
	*   The Surface on which EOP resides.
	*/
	virtual HRESULT SetSurface(const CATISpecObject_var iSupportSurface) = 0;

};

//------------------------------------------------------------------

CATDeclareHandler(CATICciEdgeOfPart, CATBaseUnknown);

#endif
