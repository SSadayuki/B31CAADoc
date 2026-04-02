//===================================================================
// COPYRIGHT DASSAULT SYSTEMES 2009
//===================================================================
//
// CATIMfgMultiAxisCurveMachining.h
//
//===================================================================

#ifndef CATIMfgMultiAxisCurveMachining_H
#define CATIMfgMultiAxisCurveMachining_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "SmgItfEnv.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySmgItfEnv IID IID_CATIMfgMultiAxisCurveMachining;
#else
extern "C" const IID IID_CATIMfgMultiAxisCurveMachining ;
#endif

/**
 * Interface for multi axis curve machining operations.
 */

class ExportedBySmgItfEnv CATIMfgMultiAxisCurveMachining: public CATBaseUnknown
{
    CATDeclareInterface;

    public:

	/**
	* Sets the Part geometry of the operation.
	*
	* @param iReference
	*		the geometry referenced as a Part by the operation
	* @param iProduct
	*		the belonging product of the referenced geometry
	*/
	virtual HRESULT SetPartsGeometry (const CATBaseUnknown_var & iReference, const CATBaseUnknown_var & iProduct) = 0;

   /**
	* Resets all the Parts geometry of the operation.
	*/
	virtual HRESULT RemovePartsGeometries () = 0;

   /**
	* Sets the Guide geometry of the operation.
	*
	* @param iReference
	*		the geometry referenced as a guide by the operation
	* @param iProduct
	*		the belonging product of the referenced geometry
	*/
	virtual HRESULT SetGuidesGeometry (const CATBaseUnknown_var & iReference, const CATBaseUnknown_var & iProduct) = 0;

   /**
	* Resets all the Guides geometry of the operation.
	*/
	virtual HRESULT RemoveGuidesGeometries () = 0;

   /**
    * Connect all the guides of the operation.
	*
	* @param iConnectionMode
	*			Connection mode to use. 0 -> Insert Line
	*									1 -> Extrapolate Guide
	*/
	virtual HRESULT ConnectAllGuidesGeometries (int iConnectionMode) = 0;

	/**
	* Sets the auxiliary Guide geometry of the operation.
	*
	* @param iReference
	*		the geometry referenced as a guide by the operation
	* @param iProduct
	*		the belonging product of the referenced geometry
	*/
	virtual HRESULT SetAuxiliaryGuidesGeometry (const CATBaseUnknown_var & iReference, const CATBaseUnknown_var & iProduct) = 0;

   /**
	* Resets all the auxiliary Guides geometry of the operation.
	*/
	virtual HRESULT RemoveAuxiliaryGuidesGeometries () = 0;

   /**
	* Sets the Check geometry of the operation.
	*
	* @param iReference
	*		the geometry referenced as a Check by the operation
	* @param iProduct
	*		the belonging product of the referenced geometry
	*/
	virtual HRESULT SetChecksGeometry (const CATBaseUnknown_var & iReference, const CATBaseUnknown_var & iProduct) = 0;

   /**
	* Resets all the Checks geometry of the operation.
	*/
	virtual HRESULT RemoveChecksGeometries () = 0;

   /**
	* Sets the start element geometry of the operation.
	*
	* @param iReference
	*		the geometry referenced as the start element by the operation
	* @param iProduct
	*		the belonging product of the referenced geometry
	*
	* Returns S_FALSE if a geometry is already defined 
	*/
	virtual HRESULT SetStartElementGeometry (const CATBaseUnknown_var & iReference, const CATBaseUnknown_var & iProduct) = 0;

   /**
	* Resets the start element geometry of the operation.
	*/
	virtual HRESULT RemoveStartElementGeometry () = 0;
	
   /**
	* Sets the end element geometry of the operation.
	*
	* @param iReference
	*		the geometry referenced as the end element by the operation
	* @param iProduct
	*		the belonging product of the referenced geometry
	*
	* Returns S_FALSE if a geometry is already defined 
	*/
	virtual HRESULT SetEndElementGeometry (const CATBaseUnknown_var & iReference, const CATBaseUnknown_var & iProduct) = 0;

   /**
	* Resets the end element geometry of the operation.
	*/
	virtual HRESULT RemoveEndElementGeometry () = 0;
	
	/**
	* Sets the 'Tool Axis' geometry to the operation.
	* <br> This will also force the definition mode of this direction as 'Selection'.
	* @param iReference
	*		the geometry referenced as Tool Axis by the operation
	*
	* @param iProduct
	*		the belonging product of the referenced geometry
	*/
    virtual HRESULT SetToolAxisGeometry (const CATBaseUnknown_var & iReference, const CATBaseUnknown_var & iProduct) = 0;	
	
	/**
	* Resets the 'Tool Axis' geometry of the operation.
	* <br> This will also reset the definition mode of this direction as 'Manual'.
	*/
	virtual HRESULT RemoveToolAxisGeometry () = 0 ;

};

CATDeclareHandler( CATIMfgMultiAxisCurveMachining, CATBaseUnknown) ;

#endif
