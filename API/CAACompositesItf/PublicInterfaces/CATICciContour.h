// COPYRIGHT Dassault Systemes 2007
//===================================================================
//
// CATICciContour.h
// Define the CATICciContour interface
//
//===================================================================
//
// Usage notes:
//   Interface to manage a Composites standard contour.
//
//===================================================================
//  Inheritance : CATICciContour (CAACompositesItf FW)
//                 CATICciBaseContour (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//===================================================================
#ifndef CATICciContour_H
#define CATICciContour_H
/**
* @CAA2Level L0
* @CAA2Usage U0
*/

#include "CAACompositesItf.h"
#include "CATICciBaseContour.h"
#include "CATLISTV_CATISpecObject.h"
#include "CATLISTV_CATIMmiMechanicalFeature.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesItf IID IID_CATICciContour;
#else
extern "C" const IID IID_CATICciContour ;
#endif

/**
 * Interface to Composites standard contour.
 * <b>Role</b>: Allows to access data of Composites standard feature, especially defined curves
 * of the contour.
 */
//------------------------------------------------------------------
class ExportedByCAACompositesItf CATICciContour: public CATICciBaseContour
{
  CATDeclareInterface;

  public:

     /**
     * Get curves of standard contour.
     * @param oListOfCurves
     *   The list of curves.
     */
     virtual HRESULT GetCurves (CATLISTV(CATIMmiMechanicalFeature_var)& oListOfCurves) = 0;

     /**
     * Set the curves of standard contour.
	  * <br> WARNING: This methods removes already defined curves for this contour.
     *               Input curves must define a closed contour. 
     * @param iListOfCurves
     *   The list of curves.
     */
     virtual HRESULT SetCurves (const CATLISTV(CATIMmiMechanicalFeature_var) & iListOfCurves) = 0;

     //--------------------------------------------------------------------------------------------------
    //------------------------- METHODS NOT TO BE USED: will be removed in future release --------------
    //--------------------------------------------------------------------------------------------------
     /**
	 * @deprecated V5R26
	 * Use @see #GetCurves overloaded method instead.
     * Get curves of standard contour.
     * @param oListOfCurves
     *   The list of curves.
     */
     virtual HRESULT GetCurves (CATLISTV(CATISpecObject_var)& oListOfCurves) = 0;

     /**
	 * @deprecated V5R26
	 * Use @see #SetCurves overloaded method instead.
     * Set the curves of standard contour.
	 * <br> WARNING: This methods removes already defined curves for this contour.
     *               Input curves must define a closed contour. 
     * @param iListOfCurves
     *   The list of curves.
     */
     virtual HRESULT SetCurves (const CATLISTV(CATISpecObject_var) & iListOfCurves) = 0;
     
     // No constructors or destructors on this pure virtual base class
     // --------------------------------------------------------------
};

CATDeclareHandler(CATICciContour, CATICciBaseContour);
//------------------------------------------------------------------

#endif
