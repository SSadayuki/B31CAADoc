// COPYRIGHT Dassault Systemes 2001
//===================================================================
//
// CATIMeasurable.h
//   This interface defines measurability of an object.
//
//===================================================================
#ifndef CATIMeasurable_H
#define CATIMeasurable_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
 
#include "CATMeasureGeometryInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATMeasurableModes.h"
class CATMathAxis;
class CATMathPoint;

extern ExportedByCATMeasureGeometryInterfaces IID IID_CATIMeasurable;

//------------------------------------------------------------------


/**
 * Classification of geometry according to its shape
 */
enum CATMeasurableName {CATMeasurableUnknown,
                        CATMeasurable, CATMeasurableVolume,
                        CATMeasurableSurface, CATMeasurableCylinder,CATMeasurableSphere, CATMeasurableCone, CATMeasurablePlane,
                        CATMeasurableCurve, CATMeasurableCircle, CATMeasurableLine,
                        CATMeasurablePoint,
                        CATMeasurableAxisSystem};

/**
 * Type of object.
 */
enum CATIMeasurableType {CATIMeasurableTypeExact,
                         CATIMeasurableTypeFacetted,
                         CATIMeasurableTypeUnknown};

/**
 * Mode of extention .
 * Finite planar or linear object can be extented into infinite plane or line.
 */
enum CATExtend{ CATFiniteExtend, CATInfiniteExtend};

/**
 * Classification of an edge.
 */
enum CATSiMeasureEdgeType { CATLineEdge, CATArcEdge, CATCurveEdge,
                            CATEllipseEdge, CATParabolaEdge, CATHyperbolaEdge,CATAxisEdge, 
                            CATUnknownEdge };

/**
 * Classification of a surface.
 */
enum CATSiMeasureSurfaceType { CATPlaneSurface, CATCylinderSurface, CATSphereSurface, 
                               CATTorusSurface, CATConeSurface,     CATUnknownSurface };

/**
 * Resulting computation mode.
 */
enum CATSiCalculationType { ExactCalculation, ApproximateCalculation, UnknownCalculation, MixedCalculation}; 

/**
 * Mode to get better information about resulting computation mode.
 */
enum CATMeasResultData {CATMeasGlobalResults, CATMeasRadiusResult, CATMeasAxisResult,
                        CATMeasPlaneResult, CATMeasCenterResult};

/**
 * Get measurements on the object.
 * <p>
 * One type of measurement can be done:
 * <ul>
 * <li> itself : gives dimensions related to the object itself (ex the radius of a circle).
 * </ul>
 */
class ExportedByCATMeasureGeometryInterfaces CATIMeasurable: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Get the classname of higher interface of the object.
     * @param oClassName
     *    The name of the interface
     * @return
     *    HRESULT
     */
    virtual HRESULT GetShapeName (CATMeasurableName & oClassName) const=0;

    /**
     * Get the classname of higher interface of the object.
     * @param oClassName
     *    The name of the interface
     * @return
     *    HRESULT
     */
    virtual HRESULT GetShapeName (const char *& oClassName) const=0;

    /**
     * @deprecated V5R16.
     * Use @href HRESULT#GetEntityType instead.
     */
    virtual HRESULT GetType (const char *& oClassName) const=0;

    /**
     * Get the type of measured object.
     * @param oObjectType
     *    The type of the object : Exact or facetted.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetEntityType (CATIMeasurableType & oObjectType) const=0;

    /**
     * Get the resulting mode of computation of the object.
     * @param oComputationMode
     *    The computation mode of the object : Exact or Approximate.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetResultComputationMode (CATSiCalculationType & oComputationMode, 
                                              CATMeasResultData      iResultData = CATMeasGlobalResults) const=0;

    /**
    * @deprecated V5R16
    * The management of axis system will be deleted in CATIMeasurable.
    * Use instead the interface @href CATIMeasurableInContext
    */
    virtual HRESULT GetInstance (CATMathAxis & iAxis, CATIMeasurable *& oInstance) const=0;

    /**
    * @deprecated V5R16
    * The management of axis system will be deleted in CATIMeasurable.
    * Use instead the interface @href CATIMeasurableInContext
    */
    virtual HRESULT GetAxisSystem (CATMathAxis & ioAxis) const=0;

    /**
    * @deprecated V5R16
    * The management of axis system will be deleted in CATIMeasurable.
    * Use instead the interface @href CATIMeasurableInContext
    */
    virtual HRESULT SetAxisSystem (CATMathAxis & iAxis) const=0;

    /**
    * @deprecated V5R16
    * The computation of Minimum distance have been deleted in CATIMeasurable.
    * Use instead the interface @href CATIMeasurableInContext
    */
    virtual HRESULT MinimumDistance (
      CATIMeasurable * iOtherObject,
      double & oDistance,
      CATMathPoint & ioPointOnObject,
      CATMathPoint & ioPointOnOtherObject) const=0;

    /**
    * @deprecated V5R16
    * The computation of Angle have been deleted in CATIMeasurable.
    * Use instead the interface @href CATIMeasurableInContext
    */
    virtual HRESULT Angle (CATIMeasurable * iOtherObject,
                           double         & oAngle,
                           CATMathPoint   * iPointOnOtherObject = NULL,
                           CATMathPoint   * iPointOnObject = NULL) = 0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATIMeasurable, CATBaseUnknown );

#endif
