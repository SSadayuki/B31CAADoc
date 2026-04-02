// COPYRIGHT Dassault Systemes 2007
//===================================================================
//
// CATICciDart.h
// Define the CATICciDart interface
//
//===================================================================
//
// Usage notes:
//   Interface to manage dart feature.
//
//===================================================================
//  Inheritance : CATICciDart (CAACompositesItf FW)
//                 CATICciBaseContour (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//===================================================================
#ifndef CATICciDart_H
#define CATICciDart_H
/**
* @CAA2Level L0
* @CAA2Usage U0
*/

#include "CAACompositesItf.h"
#include "CATICciBaseContour.h"
#include "CATIMmiMechanicalFeature.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesItf IID IID_CATICciDart;
#else
extern "C" const IID IID_CATICciDart ;
#endif

/**
 * The dart feature type.
 * <b>Role:</b> This type defines the type of a Composites dart feature, created
 * from 2 points or a curve.
 * @param CATCciLineDart
 *    The dart feature is a Line dart.   
 *
 * @param CATCciCurveDart
 *    The dart feature is a Curvilinear dart.
 */
enum CATCciDartType
{
   CATCciLineDart          = 0,  
   CATCciCurveDart         = 1
};

/**
 * Interface to Dart.
 * <b>Role</b>: Allows to manage a Composites Dart feature.
 */
//------------------------------------------------------------------
class ExportedByCAACompositesItf CATICciDart: public CATICciBaseContour
{
  CATDeclareInterface;

  public:

     /**
     * Gets the dart type.
     * @param oType
     *    The dart type (CATCciLineDart or CATCciCurveDart).
     */
     virtual HRESULT GetType (CATCciDartType & oType) = 0;

     /**
     * Gets the dart points.
     * <br> WARNING: If dart is defined by point indication, user @href #GetPoint1Coord and @href #GetPoint2Coord.
     *               Only available for line dart.
     * @param oDartPoint1
     *    The first dart point.
     * @param oDartPoint2
     *    The second dart point.
     */
     virtual HRESULT GetDartPoints(CATIMmiMechanicalFeature_var & oDartPoint1, CATIMmiMechanicalFeature_var & oDartPoint2) = 0;
     
     /**
     * Gets the first dart point coordinates.
     * @param oXCoord
     *   The coordinate along X axis of the dart point1.
     * @param oYCoord
     *   The coordinate along Y axis of the dart point1.
     * @param oZCoord
     *   The coordinate along Z axis of the dart point1.
     */
     virtual HRESULT GetPoint1Coord (double & oXCoord, double & oYCoord, double & oZCoord) = 0;
     
     /**
     * Gets the second dart point coordinates.
     * @param oXCoord
     *   The coordinate along X axis of the dart point2.
     * @param oYCoord
     *   The coordinate along Y axis of the dart point2.
     * @param oZCoord
     *   The coordinate along Z axis of the dart point2.
     */
     virtual HRESULT GetPoint2Coord (double & oXCoord, double & oYCoord, double & oZCoord) = 0;

     /**
     * Gets the dart curve.
     * <br> WARNING: only available for curve dart.
     * @param oDartCurve
     *    The dart curve.
     */
     virtual HRESULT GetDartCurve (CATIMmiMechanicalFeature_var & oDartCurve) = 0;

	 //--------------------------------------------------------------------------------------------------
    //------------------------- METHODS NOT TO BE USED: will be removed in future release --------------
    //--------------------------------------------------------------------------------------------------
     /**
     * @deprecated V5R26 
	 * Use @see #GetDartPoints overloaded method instead.
     * Gets the dart points.
     * <br> WARNING: If dart is defined by point indication, user @href #GetPoint1Coord and @href #GetPoint2Coord.
     *               Only available for line dart.
     * @param oDartPoint1
     *    The first dart point.
     * @param oDartPoint2
     *    The second dart point.
     */
     virtual HRESULT GetDartPoints(CATISpecObject_var & oDartPoint1, CATISpecObject_var & oDartPoint2) = 0;
     
     /**
	 * @deprecated V5R26 
	 * Use @see #GetDartCurve overloaded method instead.
     * Gets the dart curve.
     * <br> WARNING: only available for curve dart.
     * @param oDartCurve
     *    The dart curve.
     */
     virtual HRESULT GetDartCurve (CATISpecObject_var & oDartCurve) = 0;

     // No constructors or destructors on this pure virtual base class
     // --------------------------------------------------------------
};

CATDeclareHandler(CATICciDart, CATICciBaseContour);
//------------------------------------------------------------------

#endif
