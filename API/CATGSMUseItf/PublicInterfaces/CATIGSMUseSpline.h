/* -*-c++-*- */
#ifndef CATIGSMUseSpline_H
#define CATIGSMUseSpline_H
//
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"
#include "CATBaseUnknown.h"
class CATIMmiMechanicalFeature_var;
class CATIGSMUseDirection_var;
class CATICkeParm_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUseSpline;
#else
extern "C" const IID IID_CATIGSMUseSpline;
#endif

/**
 * Spline feature.
 * <b>Role</b>:Allows to access data of the spline feature.
 *
 * @see CATIGSMUseFactory#CreateSplinePoints
 */

class ExportedByCATGSMUseItf CATIGSMUseSpline : public CATBaseUnknown
{
   CATDeclareInterface;
   public:

  /**
    * Different kinds of spline.
    *   @param Cubic
    *      Cubic spline
    *   @param WilsonFowler
    *      WilsonFowler spline
    */
        enum CATIGSMUseSplineType    { Cubic, WilsonFowler};

 /**
    * Different kinds of constraint specified by a curve.
    *   @param Tangency
    *      Tangency continuity
    *   @param Curvature
    *      Curvature continuity
    */
        enum CATIGSMUseConstraintFromCurveType    { Tangency, Curvature};

 /**
    * Different kinds of constraint specified at a given position of the spline.
	*   @param None
	*	   No constraint is specified
    *   @param Explicit
    *      Constraint specified by a tangent direction, a tangent norm (tension parameter), a curvature direction,
	*      a curvature radius.
    *   @param From curve
	*	   Constraint (tangency or curvature) specified by a curve and a tension parameter.
    *
    */
        enum CATIGSMUseConstraintType    {GSMSpline_None, GSMSpline_Explicit, GSMSpline_FromCurve};

  /**
    * Adds a point to the spline.
    * The point is added at the end of the list.
    *   @param iPoint
    *     Point

    */
        virtual HRESULT Add(const CATIMmiMechanicalFeature_var iPoint) = 0;

  /**
    * Inserts a point after another at a given position.
    *                   First Position is 1
    *
    *  <li> InsertAfterPosition(MyPoint,0) Add at the begining of the spline</li>
    *
    *  <li> InsertAfterPosition(MyPoint,SplineSize) Add at the end of the spline</li>
    *   @param iPoint
    *      Point
    *   @param iPos
    *      Insert after position
    */
 virtual HRESULT InsertAfterPosition(const CATIMmiMechanicalFeature_var iPoint,int iPos) = 0;

  /**
    * Inserts a point before another at a given position.
    *   @param iPoint
    *      Point
    *   @param iPos
    *      Insert before position
    */
 virtual HRESULT InsertBeforePosition(const CATIMmiMechanicalFeature_var iPoint,int iPos) = 0;
  /**
    * Gets the position of an element in the list.
    *   @param iPoint
    *      Point
    *   @param oPos
    *      position in spline
   */
        virtual HRESULT GetPosition(const CATIMmiMechanicalFeature_var iPoint,int & oPos) = 0;
  /**
    * Gets the point which is at the given position.
    *                   First Position is 1
    *                   Position 0 return E_FAIL
    *   @param oPoint
    *      Point
    *   @param iPos
    *      Insert position
   */
 virtual HRESULT GetPointAtPosition(CATIMmiMechanicalFeature_var& oPoint,int iPos) = 0;
  /**
    * Removes the points at the given position.
    *   @param iPos
    *      Insert position
    */
 virtual HRESULT RemovePointAtPosition(int iPos) = 0;
  /**
    * Removes all elements in the list of points.
    */
 virtual HRESULT RemoveAll() = 0;
  /**
    * Replaces a point in the list at the given position.
    *   @param oPoint
    *      Point
    *   @param iPos
    *      Replace position
    */
 virtual HRESULT ReplacePointAtPosition(CATIMmiMechanicalFeature_var & oPoint,int iPos) = 0;
  /**
    * Gets the size of the list (number of points).
    *   @param oSize
    *      number of points
    */
 virtual HRESULT GetSize(int & oSize) = 0;
  /**
    * Gets the spline type.
    *   @param oType
    *      Spline Type
    */
 virtual HRESULT GetSplineType(CATIGSMUseSplineType & oType) = 0;
  /**
    * Sets the spline type.
    *   @param iType
    *      Set spline Type
    */
 virtual HRESULT SetSplineType(const CATIGSMUseSplineType iType) = 0;
  /**
    * Gets the support surface.
    *   @param oSupport
    *      Supporting surface for spline (if exist)
    */
 virtual HRESULT GetSupport(CATIMmiMechanicalFeature_var& oSupport) = 0;
  /**
    * Sets the support surface.
    * With support we recommand to have your "tangent direction"
    *     tangent to this support
    *   @param iSupport
    *      Set Supporting surface for spline (if exist)
    */
 virtual HRESULT SetSupport(const CATIMmiMechanicalFeature_var iSupport) = 0;
  /**
    * Removes the support surface.
    */
 virtual HRESULT RemoveSupport() = 0;

  /**
    * Adds tangent Direction (norme is not use) for each point of the spline .
    *                   First Position is 1
    *                   Position 0 return E_FAIL
    *   @param iTgtDir
    *      Tangent direction
    *   @param iPos
    *      Position of point in spline
    *   @see CATIGSMUseDirection
 */
 virtual HRESULT AddTangentDirection(const CATIGSMUseDirection_var & iTgtDir,int iPos) = 0 ;
  /**
    * Gets tangent Direction (norme is not use) for each point of the spline.
    *                   First Position is 1
    *                   Position 0 return E_FAIL
    *   @param iTgtDir
    *      Tangent direction
    *   @param iPos
    *      Position of point in spline
 *   @see CATIGSMUseDirection
    */
 virtual HRESULT GetTangentDirection(CATIGSMUseDirection_var& oTgtDir,int iPos) = 0 ;
  /**
    * Removes tangent Direction (norme is not use) for each point of the spline.
    *                   First Position is 1
    *                   Position 0 return E_FAIL
    *   @param iPos
    *      Position of point in spline
    */
        virtual HRESULT RemoveTangentDirection(int iPos) = 0 ;


  /**
    * Sets the Tension (Tangent Norme) for each point of the spline.
    *   A tangent direction is necessary
    *                   First Position is 1
    *                   Position 0 return E_FAIL
    *   @param iTgtNm
    *      Tension
    *   @param iPos
    *      Position of point in spline
 *   @see CATICkeParm
    */
 virtual HRESULT SetTangentNorm(const CATICkeParm_var & iTgtNm,int iPos) = 0 ;
  /**
    * Gets the Tension (Tangent Norme) for each point of the spline.
    *   A tangent direction is necessary
    *                   First Position is 1
    *                   Position 0 return E_FAIL
    *   @param oTgtNm
    *      Tension
    *   @param iPos
    *      Position of point in spline
 *   @see CATICkeParm
    */
 virtual HRESULT GetTangentNorm(CATICkeParm_var& oTgtNm,int iPos) = 0 ;
  /**
    * Removes  the Tension (Tangent Norme) for each point of the spline.
    *   A tangent direction is necessary
    *                   First Position is 1
    *                   Position 0 return E_FAIL
    *   @param iPos
    *      Position of point in spline
    */
 virtual HRESULT RemoveTangentNorm(int iPos) = 0 ;


  /**
    * Adds Curvature Radius  Direction (norme is not use) for each point of the spline.
    * A tangent direction AND Norm are Necessary
    *                   First Position is 1
    *                   Position 0 return E_FAIL
    *   @param iCrDir
    *      Curvature radius
    *   @param iPos
    *      Position of point in spline
 *   @see CATIGSMUseDirection
    */
 virtual HRESULT AddCurvatureRadiusDirection(const CATIGSMUseDirection_var & iCrDir,int iPos) = 0 ;
  /**
    * Gets Curvature Radius  Direction (norme is not use) for each point of the spline.
    * A tangent direction AND Norm are Necessary
    *                   First Position is 1
    *                   Position 0 return E_FAIL
    *   @param oCrDir
    *      Curvature radius
    *   @param iPos
    *      Position of point in spline
    *   @see CATIGSMUseDirection
 */
 virtual HRESULT GetCurvatureRadiusDirection(CATIGSMUseDirection_var& oCrDir,int iPos) = 0 ;
  /**
    * Removes Curvature Radius  Direction (norme is not use) for each point of the spline.
    * A tangent direction AND Radius are Necessary
    *                   First Position is 1
    *                   Position 0 return E_FAIL
    *   @param iPos
    *      Position of point in spline
    */
 virtual HRESULT RemoveCurvatureRadiusDirection(int iPos) = 0 ;

  /**
    * Sets Curvature Radius  Value for each point of the spline.
    * A tangent direction AND Norm are Necessary
    * A Curvature Radius  Direction is Necessary
    *                   First Position is 1
    *                   Position 0 return E_FAIL
    *   @param iCrVal
    *      Curvature value
    *   @param iPos
    *      Position of point in spline
    *   @see CATICkeParm
 */
 virtual HRESULT SetCurvatureRadiusValue(const CATICkeParm_var & iCrVal,int iPos) = 0 ;

  /**
    * Gets Curvature Radius  Value for each point of the spline.
    * A tangent direction AND Norm are Necessary
    * A Curvature Radius  Direction is Necessary
    *                   First Position is 1
    *                   Position 0 return E_FAIL
    *   @param oCrVal
    *      Curvature value
    *   @param iPos
    *      Position of point in spline
    *   @see CATICkeParm
 */
 virtual HRESULT GetCurvatureRadiusValue(CATICkeParm_var& oCrVal,int iPos) = 0 ;

 /**
    * Removes Curvature Radius  Value for each point of the spline.
    * A tangent direction AND Norm is Necessary
    * A Curvature Radius  Direction is Necessary
    *                   First Position is 1
    *                   Position 0 return E_FAIL
    *   @param iPos
    *      Position of point in spline
    */
 virtual HRESULT RemoveCurvatureRadiusValue(int iPos) = 0 ;

  /**
    * Inverts the orientation of the tangent direction .
    *   @param iPos
    *                   First Position is 1
    *                   Position 0 return E_FAIL
    *   @return
    *      S_OK if OK, E_FAIL if fail
    */
 virtual HRESULT InvertDirection(int iPos) = 0;

  /**
    * Gets the orientation of the tangent direction .
    * Value iPos
    *                   First Position is 1
    *                   Position 0 return E_FAIL
    *   @param oInvertFlag
    *      invert flag
    *    = 1  No Inversion
    *    = -1 Invert
    *   @param iPos
    *      Position of point in spline
    */
 virtual HRESULT GetDirectionInversion(int & oInvertFlag, int iPos) = 0;

  /**
    * Sets whether the curve is closed.
    *   @param iClosed
    *       Closing flag
    *<dl><dt>1</dt><dd> for a closed curve</dd>
    *    <dt>0</dt><dd> for an open curve</dd>
    *</dl>
    */
  virtual HRESULT SetClosure(int iClosed)= 0;

  /**
    * Gets whether the curve is closed.
    *   @param oClosed
    *       Closing flag
    *<dl><dt>1</dt><dd> for a closed curve</dd>
    *    <dt>0</dt><dd> for an open curve</dd>
    *</dl>
    */
  virtual HRESULT GetClosure(int & oClosed)= 0;

  /**
    * Gets the type of a constraint at a given position of the spline.
    *   @param oType
    *      Constraint type (explicit or specified from curve)
    *   @param iPos
    *      Position of point in spline
    */
 virtual HRESULT GetConstraintType(CATIGSMUseConstraintType & oType,int iPos) = 0;

  /**
    * Sets curve specifying a tangent or curvature constraint at a given position of the spline.
    *   @param iCrv
    *      Curve
    *   @param iPos
    *      Position of point in spline
	*/
 virtual HRESULT SetCurveConstraint (const CATIMmiMechanicalFeature_var iCrv,int iPos) = 0 ;

  /**
    * Gets curve specifiying a tangent or curvature constraint at a given position of the spline.
    *   @param oCrv
    *      Curve
    *   @param iPos
    *      Position of point in spline
    */
 virtual HRESULT GetCurveConstraint(CATIMmiMechanicalFeature_var& oCrv,int iPos) = 0 ;

  /**
    * Removes curve specifiying a tangent or curvature constraint at a given position of the spline.
    *   @param iPos
    *      Position of point in spline
    */
 virtual HRESULT RemoveCurveConstraint(int iPos) = 0 ;

  /**
    * Gets the type of a constraint specified by a curve at a given position of the spline.
    *   @param oType
    *      Constraint from curve type
    *   @param iPos
    *      Position of point in spline
    */
 virtual HRESULT GetCurveConstraintType(CATIGSMUseConstraintFromCurveType & oType,int iPos) = 0;

  /**
    * Sets the type of a constraint specified by a curve at a given position of the spline.
    *   @param iType
    *      Constraint from curve  Type
    *   @param iPos
    *      Position of point in spline
    */
 virtual HRESULT SetCurveConstraintType(const CATIGSMUseConstraintFromCurveType iType,int iPos) = 0;

   /**
    * Sets the semi-closure point of the closed spline.
    *   @param iPoint
    *      Semi-closure point
    */
 virtual HRESULT SetSemiClosure(const CATIMmiMechanicalFeature_var iPoint) = 0;

   /**
    * Gets the semi-closure point of the closed spline.
    *   @param oPoint
    *      Semi-closure point
    */
 virtual HRESULT GetSemiClosure(CATIMmiMechanicalFeature_var & oPoint) = 0;

};
CATDeclareHandler (CATIGSMUseSpline, CATBaseUnknown);
#endif
