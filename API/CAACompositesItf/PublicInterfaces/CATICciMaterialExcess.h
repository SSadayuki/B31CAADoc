// COPYRIGHT Dassault Systemes 2007
//===================================================================
//
// CATICciMaterialExcess.h
// Define the CATICciMaterialExcess interface
//
//===================================================================
//
// Usage notes:
//    Interface to manage MaterialExcess feature.
//
//===================================================================
//  Inheritance : CATICciMaterialExcess (CAACompositesItf FW)
//                 CATICciBaseContour (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//===================================================================
#ifndef CATICciMaterialExcess_H
#define CATICciMaterialExcess_H
/**
* @CAA2Level L0
* @CAA2Usage U0
*/

#include "CAACompositesItf.h"
#include "CATICciBaseContour.h"
#include "CATICciEdgeOfPart.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesItf IID IID_CATICciMaterialExcess;
#else
extern "C" const IID IID_CATICciMaterialExcess ;
#endif

class CATISpecObject_var;
class CATICciEdgeOfPart_var;
class CATIMmiMechanicalFeature_var;

/**
 * Interface to MaterialExcess.
 * <b>Role</b>: Allows to manage a Composites MaterialExcess feature.
 */
//------------------------------------------------------------------
class ExportedByCAACompositesItf CATICciMaterialExcess: public CATICciBaseContour
{
  CATDeclareInterface;

  public:

     /**
     * Gets engineering EOP of Material Excess feature.
     * @param oEOP
     *    The engineering EOP.
     */
     virtual HRESULT GetEngineeringEOP ( CATIMmiMechanicalFeature_var & oEOP ) = 0;

     /**
     * Gets manufacturing EOP of Material Excess feature.
     * @param oEOP
     *    The manufacturing EOP.
     */
     virtual HRESULT GetManufacturingEOP ( CATIMmiMechanicalFeature_var & oEOP ) = 0;
	 /**
     * Sets Engineering EOP of Material Excess feature.
     * @param iEEOP
     *    The Engineering EOP.
     */
	 virtual HRESULT SetEEOP (const CATICciEdgeOfPart_var  iEEOP) = 0;
	 /**
     * Sets manufacturing EOP of Material Excess feature.
     * @param iMEOP
     *    The manufacturing EOP.
     */
	 virtual HRESULT SetMEOP (const CATICciEdgeOfPart_var iMEOP) = 0;
	 /*
	 *Get EEOP of the Material Excess
	 * @param oEEOP
     *    The Engineering EOP.
	 */
	 virtual HRESULT GetEEOP (CATICciEdgeOfPart_var &oEEOP) = 0 ;
	 /*
	 *Get MEOP of the Material Excess.
	 * @param oMEOP
     *    The Manufacturing EOP.
	 */
	 virtual HRESULT GetMEOP (CATICciEdgeOfPart_var &oMEOP) = 0 ;
	 
     /**
	 * @deprecated V5R26 
	 * Use @see #GetEngineeringEOP(CATIMmiMechanicalFeature_var&) method instead.
     * Gets engineering EOP of Material Excess feature.
     * @param oEOP
     *    The engineering EOP.
     */
     virtual HRESULT GetEngineeringEOP ( CATISpecObject_var & oEOP ) = 0;

     /**
	 * @deprecated V5R26 
	 * Use @see #GetManufacturingEOP(CATIMmiMechanicalFeature_var&) method instead.
     * Gets manufacturing EOP of Material Excess feature.
     * @param oEOP
     *    The manufacturing EOP.
     */
     virtual HRESULT GetManufacturingEOP ( CATISpecObject_var & oEOP ) = 0;

     // No constructors or destructors on this pure virtual base class
     // --------------------------------------------------------------
};

CATDeclareHandler(CATICciMaterialExcess, CATICciBaseContour);
//------------------------------------------------------------------

#endif
