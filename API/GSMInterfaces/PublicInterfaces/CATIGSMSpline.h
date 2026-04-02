/* -*-c++-*- */
#ifndef CATIGSMSpline_H
#define CATIGSMSpline_H
//
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATBaseUnknown.h"
class CATISpecObject_var;
class CATIGSMDirection_var;
class CATICkeParm_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMSpline;
#else
extern "C" const IID IID_CATIGSMSpline;
#endif

/**
 * Spline feature.
 * <b>Role</b>:Allows to access data of the spline feature.
 *
 * @see CATIGSMFactory#CreateSplinePoints
 */

class ExportedByCATGitInterfaces CATIGSMSpline : public CATBaseUnknown
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
        enum CATIGSMSplineType    { Cubic, WilsonFowler};

 /**
    * Different kinds of constraint specified by a curve.
    *   @param Tangency
    *      Tangency continuity
    *   @param Curvature
    *      Curvature continuity
    */
        enum CATIGSMConstraintFromCurveType    { Tangency, Curvature};

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
        enum CATIGSMConstraintType    {GSMSpline_None, GSMSpline_Explicit, GSMSpline_FromCurve};

  /**
    * Adds a point to the spline.
    * The point is added at the end of the list.
    *   @param iPoint
    *     Point

    */
        virtual HRESULT Add(const CATISpecObject_var iPoint) = 0;

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
 virtual HRESULT InsertAfterPosition(const CATISpecObject_var iPoint,int iPos) = 0;

  /**
    * Inserts a point before another at a given position.
    *   @param iPoint
    *      Point
    *   @param iPos
    *      Insert before position
    */
 virtual HRESULT InsertBeforePosition(const CATISpecObject_var iPoint,int iPos) = 0;
  /**
    * Gets the position of an element in the list.
    *   @param iPoint
    *      Point
    *   @param oPos
    *      position in spline
   */
        virtual HRESULT GetPosition(const CATISpecObject_var iPoint,int & oPos) = 0;
  /**
    * Gets the point which is at the given position.
    *                   First Position is 1
    *                   Position 0 return E_FAIL
    *   @param oPoint
    *      Point
    *   @param iPos
    *      Insert position
   */
 virtual HRESULT GetPointAtPosition(CATISpecObject_var& oPoint,int iPos) = 0;
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
 virtual HRESULT ReplacePointAtPosition(CATISpecObject_var & oPoint,int iPos) = 0;
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
 virtual HRESULT GetSplineType(CATIGSMSplineType & oType) = 0;
  /**
    * Sets the spline type.
    *   @param iType
    *      Set spline Type
    */
 virtual HRESULT SetSplineType(const CATIGSMSplineType iType) = 0;
  /**
    * Gets the support surface.
    *   @param oSupport
    *      Supporting surface for spline (if exist)
    */
 virtual HRESULT GetSupport(CATISpecObject_var& oSupport) = 0;
  /**
    * Sets the support surface.
    * With support we recommand to have your "tangent direction"
    *     tangent to this support
    *   @param iSupport
    *      Set Supporting surface for spline (if exist)
    */
 virtual HRESULT SetSupport(const CATISpecObject_var iSupport) = 0;
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
    *   @see CATIGSMDirection
 */
 virtual HRESULT AddTangentDirection(const CATIGSMDirection_var & iTgtDir,int iPos) = 0 ;
  /**
    * Gets tangent Direction (norme is not use) for each point of the spline.
    *                   First Position is 1
    *                   Position 0 return E_FAIL
    *   @param iTgtDir
    *      Tangent direction
    *   @param iPos
    *      Position of point in spline
 *   @see CATIGSMDirection
    */
 virtual HRESULT GetTangentDirection(CATIGSMDirection_var& oTgtDir,int iPos) = 0 ;
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
 *   @see CATIGSMDirection
    */
 virtual HRESULT AddCurvatureRadiusDirection(const CATIGSMDirection_var & iCrDir,int iPos) = 0 ;
  /**
    * Gets Curvature Radius  Direction (norme is not use) for each point of the spline.
    * A tangent direction AND Norm are Necessary
    *                   First Position is 1
    *                   Position 0 return E_FAIL
    *   @param oCrDir
    *      Curvature radius
    *   @param iPos
    *      Position of point in spline
    *   @see CATIGSMDirection
 */
 virtual HRESULT GetCurvatureRadiusDirection(CATIGSMDirection_var& oCrDir,int iPos) = 0 ;
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
 virtual HRESULT GetConstraintType(CATIGSMConstraintType & oType,int iPos) = 0;

  /**
    * Sets curve specifying a tangent or curvature constraint at a given position of the spline.
    *   @param iCrv
    *      Curve
    *   @param iPos
    *      Position of point in spline
	*/
 virtual HRESULT SetCurveConstraint (const CATISpecObject_var iCrv,int iPos) = 0 ;

  /**
    * Gets curve specifiying a tangent or curvature constraint at a given position of the spline.
    *   @param oCrv
    *      Curve
    *   @param iPos
    *      Position of point in spline
    */
 virtual HRESULT GetCurveConstraint(CATISpecObject_var& oCrv,int iPos) = 0 ;

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
 virtual HRESULT GetCurveConstraintType(CATIGSMConstraintFromCurveType & oType,int iPos) = 0;

  /**
    * Sets the type of a constraint specified by a curve at a given position of the spline.
    *   @param iType
    *      Constraint from curve  Type
    *   @param iPos
    *      Position of point in spline
    */
 virtual HRESULT SetCurveConstraintType(const CATIGSMConstraintFromCurveType iType,int iPos) = 0;

   /**
    * Sets the semi-closure point of the closed spline.
    *   @param iPoint
    *      Semi-closure point
    */
 virtual HRESULT SetSemiClosure(const CATISpecObject_var iPoint) = 0;

   /**
    * Gets the semi-closure point of the closed spline.
    *   @param oPoint
    *      Semi-closure point
    */
 virtual HRESULT GetSemiClosure(CATISpecObject_var & oPoint) = 0;

};
CATDeclareHandler (CATIGSMSpline, CATBaseUnknown);
#endif
