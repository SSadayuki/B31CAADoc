/* -*-c++-*- */
#ifndef CATIGSMUsePointOnCurve_H
#define CATIGSMUsePointOnCurve_H
 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"
#include "CATIMmiMechanicalFeature.h"
#include "CATICkeParm.h"
#include "CATGSMOrientation.h"
#include "CATIGSMUseDirection.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUsePointOnCurve;
#else
extern "C" const IID IID_CATIGSMUsePointOnCurve;
#endif
/**
 * Interface to point on a curve feature.  
 * <b>Role</b>: Allows you to access data of the point feature created with
 * a curvilinear distance to an existing point or an extremity on a curve.  
 * @see CATIGSMUseFactory#CreatePoint
 */
class ExportedByCATGSMUseItf CATIGSMUsePointOnCurve : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

 /**
  * Different kinds of distance types.
  *   @param Geodesic
  *     geodesic computation
  *   @param Euclidean Geodesic
  *     euclidean  computation
  */
        enum DistanceType { Geodesic, Euclidean };

 /**
  * Gets the curve.
  *   @param oSupport 
  *      reference curve
  */
 virtual HRESULT GetSupport(CATIMmiMechanicalFeature_var& oSupport) = 0;

  /**
  * Sets the curve.
  *   @param iSupport 
  *      reference curve
  */
 virtual HRESULT SetSupport(const CATIMmiMechanicalFeature_var iSupport) = 0;
 
 /**
  * Gets the reference point.
  * If the point does not lie on the curve, the point on the curve 
  * with the smallest distance to this point is taken.
  *   @Param oRefPoint
  * RefPoint can be equal to NULL_var, then no reference point is taken,
  * in that case, the extremity of the curve is this reference point.
  * (RefPoint = NULL_var is allowed).
  */
 virtual HRESULT GetReferencePoint(CATIMmiMechanicalFeature_var& oRefPoint) = 0;

 /**
  * Sets the reference point.
  * If the point does not lie on the curve, the point on the curve 
  * with the smallest distance to this point is taken.
  *   @Param iRefPoint
  * RefPoint can be equal to NULL_var, then no reference point is taken,
  * in that case, the extremity of the curve is this reference point.
  * (RefPoint = NULL_var is allowed).
  */
 virtual HRESULT SetReferencePoint(const CATIMmiMechanicalFeature_var iRefPoint) = 0;

 /**
  * Gets the distance.
  *   @Param oDistance
  * This distance can be either a distance in a length unit, or a ratio
  * (which corresponds to a ratio of the total length of the curve).
  *     Distance can be equal to NULL_var, then the extremity defined by 
  *     Orientation parameter is taken.
  */
 virtual HRESULT GetLength(CATICkeParm_var& oDistance) = 0;

 /**
  * Sets the distance.
  *   @Param iDistance
  *     this distance can be either a distance in a length unit, or a ratio
  *     (which corresponds to a ratio of the total length of the curve).
  *     If no Distance is given, the extremity defined by Orientation parameter 
  *     is taken (Distance = NULL_var is allowed).

  */
 virtual HRESULT SetLength(const CATICkeParm_var iDistance) = 0;

 /**
  * Gets the orientation.
  * Orientation = TRUE means that distance (length or ratio) is measured :
  * - in the other orientation of the curve, when a reference point has been set,
  * - in the other orientation of the curve and from the other extremity, when no reference point has been set.
  *   @param oOrientation
  *      orientation 

  */
 virtual HRESULT GetOrientation(CATGSMOrientation & oOrientation) = 0;

 /**
  * Sets the orientation.
  * Orientation = TRUE means that distance (length or ratio) is measured :
  * - in the other orientation of the curve, when a reference point has been set,
  * - in the other orientation of the curve and from the other extremity, when no reference point has been set.
  *   @param iOrientation
  *      orientation
  */
 virtual HRESULT SetOrientation(const CATGSMOrientation iOrientation) = 0;

 /**
  * Inverts the orientation.
  */
 virtual HRESULT InvertOrientation() = 0;

 /**
  * Gets the distance type : geodesic or euclidean.
  * Default is Geodesic.
  * Geodesic means that the distance is measured with a curvilinear abscissa
  * Euclidean means that the point is created by intersection between the reference curve and a circle
  *         (whose radius is the length defined above).
  *   @param oType
  *    distance type  enum {Geodesic, Euclidean}
  */
 virtual HRESULT GetDistanceType(DistanceType & oType) = 0;

 /**
  * Sets the distance type : geodesic or euclidean.
  *   @param iType
  *    distance type:   enum {Geodesic, Euclidean}
  */
 virtual HRESULT SetDistanceType(const DistanceType iType) = 0;
 /**
  * Sets the direction from the reference point.
  *   @Param iDirection
  *      direction 
  *    @see CATIGSMUseDirection
 */
 virtual HRESULT SetDirection(const CATIGSMUseDirection_var & iDirection) = 0;
 /**
  * Gets the direction from the reference point.
  *   @Param oDirection
  *      direction 
  *      @see CATIGSMUseDirection
 */
 virtual HRESULT GetDirection(CATIGSMUseDirection_var & oDirection) = 0;
 /**
  * Gets the type for point created on curve.
  *   @Param oOnCurveType
  *      0 = Distance on curve
  *      1 = Distance along direction
	*      2 = Ratio of Curve length
 */
 virtual HRESULT GetOnCurveType(int &oOnCurveType) = 0;
  /**
  * Sets the type for point created on curve.
  *   @Param oOnCurveType
  *      0 = Distance on curve
  *      1 = Distance along direction
	*      2 = Ratio of Curve length
 */
 virtual HRESULT SetOnCurveType(const int & iOnCurveType) = 0;

};
CATDeclareHandler (CATIGSMUsePointOnCurve, CATBaseUnknown);
#endif
