/* -*-c++-*- */
#ifndef CATIGSMUseConic_H
#define CATIGSMUseConic_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATGSMUseItfExportedBy.h"
#include "CATBaseUnknown.h"
#include "CATIMmiMechanicalFeature.h"
#include "CATGSMConicDef.h"
//
class CATICkeParm_var;
class CATIGSMUseCurveCst_var;
class CATIGSMUseDirection_var;
class CATMathVector;
class CATPlane_var;
class CATPoint_var;
//


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID IID_CATIGSMUseConic;
#else
extern "C" const IID   IID_CATIGSMUseConic;
#endif

/**
* Conic Curve.
* <b>Role</b>: Allows to access data of the Conic feature created by using
* five feature that can be points, tangents or one parameter. There is 
* always two extremity points and a planar support. 
* @see CATIGSMUseFactory#CreateConic
*/
class ExportedByCATGSMUseItf CATIGSMUseConic: public CATBaseUnknown
{
	CATDeclareInterface;

public:

	/**
	* Gets the Type of the Conic Curve.
	* 
	*   @param oType
	*   @param oPointIndexWhereTangentIsSet 
	*      = 1 if Tangent is set at the  Conic Start point location
	*      = 2 if Tangent is set at the  second Conic  point location
	*      = 3 if Tangent is set at the  third Conic point location
	*      = 4 if Tangent is set at the  Conic end  point location
	*       (makes sense only for the Conic curve type "TwoIntermediatePassingPointsPlusOneTangent")
	*/
	virtual HRESULT GetGSMConicType (CATGSMConicType & oType) = 0;


	/**
	* Gets the Unique Point index where a tangent constraint is set.
	* 
	*   @param iType
	*   @param oPointIndexWhereTangentIsSet 
	*      = 1 if Tangent is set at the  Conic Start point location
	*      = 2 if Tangent is set at the  second Conic  point location
	*      = 3 if Tangent is set at the  third Conic point location
	*      = 4 if Tangent is set at the  Conic end  point location
	*       (makes sense only for the Conic curve type "TwoIntermediatePassingPointsPlusOneTangent")
	*/
	virtual HRESULT GetUniquePointIndexWhereTangentIsSet (CATGSMConicType iType, int & oPointIndexWhereTangentIsSet) = 0;


	/**
	* Gets the Support Plane of the Conic Curve.
	* 
	*   @param oSupport
	*       
	* @see CATIMmiMechanicalFeature
	*/
	virtual HRESULT GetSupport(CATIMmiMechanicalFeature_var & oSupport) = 0;

	/**
	* Sets the Support Plane of the Conic Curve.
	* 
	*   @param iSupport
	*       
	* @see CATIMmiMechanicalFeature
	*/
	virtual HRESULT SetSupport(const CATIMmiMechanicalFeature_var iSupport) = 0;


	/**
	* Gets the Starting Constraint Point of the Conic Curve.
	* 
	*   @param oStartCst
	*       
	* @see CATIGSMUseCurveCst
	*/
	virtual HRESULT GetStartCst(CATIGSMUseCurveCst_var & oStartCst) = 0;

	/**
	* Sets the Starting Constraint Point of the Conic Curve.
	* 
	*   @param iStartCst
	*       
	* @see CATIGSMUseCurveCst
	*/
	virtual HRESULT SetStartCst(const CATIGSMUseCurveCst_var iStartCst) = 0;

	/**
	* Gets the End Constraint Point of the Conic Curve.
	* 
	*   @param oEndCst
	*       
	* @see CATIGSMUseCurveCst
	*/
	virtual HRESULT GetEndCst(CATIGSMUseCurveCst_var & oEndCst) = 0;

	/**
	* Sets the  End Constraint Point of the Conic Curve.
	* 
	*   @param iStartCst
	*       
	* @see CATIGSMUseCurveCst
	*/
	virtual HRESULT SetEndCst(const CATIGSMUseCurveCst_var iEndCst) = 0;


	/**
	* Gets the Intermediate CSt at Position Pos   (1<= Pos <=3 ).
	* 
	*   @param oInterCst
	*       
	* @see CATIGSMUseCurveCst
	*/
	virtual HRESULT GetIntermediateCst(CATIGSMUseCurveCst_var & oInterCst, int Pos) = 0;

	/**
	* Sets the  Intermediate Conic CSt at Position Pos   (1<= Pos <=3 ).
	* 
	*   @param iInterCst
	*   @param iPos
	*       
	* @see CATIGSMUseCurveCst
	*/
	virtual HRESULT SetIntermediateCst(const CATIGSMUseCurveCst_var iInterCst, int iPos) = 0;


	/**
	* Gets the Tangent Intersection Point.
	* 
	*   @param oTgtIntPt
	*       
	* @see CATIMmiMechanicalFeature
	*/
	virtual HRESULT GetTgtIntPoint(CATIMmiMechanicalFeature_var & oTgtIntPt) = 0;

	/**
	* Sets the Tangent Intersection Point.
	* 
	*   @param iTgtIntPt
	*       
	* @see CATIMmiMechanicalFeature
	*/
	virtual HRESULT SetTgtIntPoint(const CATIMmiMechanicalFeature_var iTgtIntPt) = 0;

	/**
	* Gets the Conic Parameter ( As a literal ).
	*   @param oConicParm
	*      
	* @see CATICkeParm
	*/ 
	virtual    HRESULT GetConicParm  (CATICkeParm_var & oConicParm) = 0;

	/**
	* Gets the Conic Parameter value ( As a Double ).
	*   @param oConicParm
	*      
	*/ 
	virtual    HRESULT GetConicParm  (double & oConicParm) = 0;


	/**
	* Sets the Conic Parameter.
	*   @param iConicParm
	*      
	* @see CATICkeParm
	*/ 
	virtual    HRESULT SetConicParm (const CATICkeParm_var iConicParm) = 0;

	/**
	* Sets the Conic Parameter.
	*   @param iConicParm ( As a Double )
	*      
	*/ 
	virtual    HRESULT SetConicParm (const double iConicParm) = 0;

	/**
	* Gets the Conic User Tolerance.
	*   @param oConicUserTol
	*      
	* @see CATICkeParm
	*/ 
	virtual    HRESULT GetConicUserTol  (CATICkeParm_var & oConicUserTol) = 0;

	/**
	* Sets the Conic User Tolerance.
	*   @param iConicTol
	*      
	* @see CATICkeParm
	*/ 
	virtual    HRESULT SetConicUserTol (const CATICkeParm_var iConicTol) = 0;


	/**
	* Gets a Conic Passing Point.
	* 
	*   @param iPointNumber
	*       Order Number ( From 1 to 5 ) of the Point to get
	*        iPointNumber = 1 must be set to retrieve the Start Point
	*        iPointNumber = 5 must be set to retrieve the End Point
	*        iPointNumber = 2, 3, or 4 must be set to retrieve 
	*            respectively the first,second, third intermediate passing point
	*   @param oSpecPt     
	*        Retrieved Passing Point    
	*/
	virtual  HRESULT GetPassingPoint   ( int                 iPointNumber,                                                     
		CATIMmiMechanicalFeature_var  & oSpecPt) = 0;


	/**
	* Checks the validity of a Conic Passing point.
	*   @param iPoint       
	*       Passing Point to check
	*   @param iSupportPlane       
	*        Support Plane of the Conic curve
	*   @param iStartPoint          
	*       if specified, StartPoint of the conic curve 
	*   @param iEndPoint            
	*       if specified, End  Point of the conic curve 
	*   @param oStatus             
	*        = -1 if the method failed to analyse 
	*        = 0  Point is OK 
	*        = 1  Point to  check is not set in the support Plane
	*        = 2  Point to  check is aligned with the Start and End Points (makes
	*            sense if iStartPoint and iEndPoint were set)
	* @see CATIGSMUseConic#CheckPoint
	*/
	virtual  HRESULT CheckPoint ( const CATIMmiMechanicalFeature_var  iPoint,
		const CATIMmiMechanicalFeature_var  iSupportPlane,
		int                     & oStatus,
		const CATIMmiMechanicalFeature_var  iStartPoint = NULL_var, 
		const CATIMmiMechanicalFeature_var  iEndPoint   = NULL_var ) = 0;                                                 

	/**
	* Gets the  Tangent direction specifactions at a conic passing Point.
	* 
	*   @param iPointNumber 
	*     Order Number ( From 1 to 5 ) of the Point to get:
	*       iPointNumber = 1 must be set to retrieve the Start Point
	*       iPointNumber = 5 must be set to retrieve the End Point
	*       iPointNumber = 2, 3, or 4 must be set to retrieve 
	*      respectively the first,second, third intermediate  passing point
	*   @param oTgtDir        
	*       Retrieved CATIGSMUse Direction specification
	*   @param oInvertDirFlag 
	*       Flag value must be set to -1 to reverse  the CATIGSMUse Direction specification
	*/
	virtual HRESULT  GetTangentDirectionAtPassingPoint (          int  iPointNumber,
		CATIGSMUseDirection_var &  oTgtDir, 
		int &  oInvertDirFlag ) = 0;
	/**
	* Gets the Direction vector that corresponds to the Direction specifications.
	*   
	*   @param iTgtDir        
	*      CATIGSMUse Direction specification
	*   @param iInvertDirFlag 
	*      Flag value must be set to -1 to reverse  the CATIGSMUse Direction  specification.
	*   @param oMDir         
	*      CATMathVector Direction 
	*/
	virtual  HRESULT GetDirectionVector ( const  CATIGSMUseDirection_var &  iTgtDir, 
		const  int                     iInvertDirFlag,
		CATMathVector               &  oMDir   ) = 0; 



	/**
	* Checks the validity and provides a status of the tangent directions at the start and end points.
	*
	*   @param iPtTgtInt 
	*      Tangent Intersection Point 
	*      ( Note : Can be NULL if iStartMDir and EndMDir are specified)
	*      It specifies the tangents directions as the intersections of the line (iStartPoint, iPtTgtInt) with
	*      the line (iEndPoint,iPtTgtInt)
	*   @param iStartMDir
	*      Explicit specification of the Tangent Direction at the Start Point 
	*   @param iEndMDir
	*      Explicit specification of the Tangent Direction at the End   Point
	*   @param iStartPoint
	*      Conic curve Start Point 
	*   @param iEndPoint
	*      Conic curve End Point               
	*   @param iConicParm
	*      Conic Parameter specification
	*   @param iPassingPoint
	*      Any Intermediate Pasing point of the conic curve (must differs from the start point or the end point)
	*   @param ostatus       
	*       Output status about the start and end tangent orientations
	*         ostatus =  0: The start and end tangent directions intersect themselves and are
	*                         correctly oriented according to the conic curve orientation from
	*                         StartPoint to EndPoint       
	*         ostatus =  1: the 2 tangents intersect themselves  : only starting tangent has to be inverted  
	*         ostatus =  2: the 2 tangents intersect themselves  : only ending tangent has to be inverted        
	*         ostatus =  3: the 2 tTangents intersect themselves : both tangentes has to be inverted  
	*         ostatus = 10: the 2 tangents are parallel and correctly oriented 
	*         ostatus = 11: the 2 tangents are parallel : only starting tangent has to be inverted
	*         ostatus = 12: the 2 tangents are parallel : only ending tangent has to be inverted 
	*         ostatus = 13: the 2 tangents are parallel :  both tangentes has to be inverted  
	*
	*         ostatus = -10: the 2 tangents are parallel and are detected not valid 
	because a passing point returns by a parameter requires 2 intersecting trangents 
	*         ostatus = -1 : Input specifications are incomplete in order to perform tangent direction checks 
	*/
	virtual  HRESULT CheckStartAndEndTangentDirections (
		const  CATIMmiMechanicalFeature_var iPtTgtInt,
		const  CATMathVector   &  iStartMDir,
		const  CATMathVector   &  iEndMDir,
		const  CATIMmiMechanicalFeature_var iStartPoint,   
		const  CATIMmiMechanicalFeature_var iEndPoint,       
		const  CATICkeParm_var    iConicParm,                                  
		const  CATIMmiMechanicalFeature_var iPassingPoint,
		int                  &    ostatus ) = 0;
	/**
	* Check conic parametrer value.
	*
	*   @param iPtTgtInt 
	*      Tangent Intersection Point 
	*      ( Note : Can be NULL if iStartMDir and EndMDir are specified)
	*   @param iStartMDir
	*      Explicit specification of the Tangent Direction at the Start Point 
	*   @param iEndMDir
	*      Explicit specification of the Tangent Direction at the End   Point
	*   @param iStartPoint
	*      Conic curve Start Point 
	*   @param iEndPoint
	*      Conic curve End Point               
	*   @param iConicParmValue
	*      Conic Parameter specification
	*   @param iConicParmResol 
	*      Conic Resolution 
	*   @param iPassingPoint
	*      Any Intermediate Pasing point of the conic curve (must differs from the start point or the end point)
	*   @param ostatus       
	*       Output status about conic parameter value 
	*         ostatus =  ... 
	* Implements a function from an interface.
	* @see CATIGSMUseConic#CheckConicParameterValue
	*/
	virtual HRESULT CheckConicParameterValue (  const  CATIMmiMechanicalFeature_var      iPtTgtInt,
		const  CATMathVector        &  iStartMDir,         
		const  CATMathVector        &  iEndMDir, 
		const  CATIMmiMechanicalFeature_var      iStartPoint,   
		const  CATIMmiMechanicalFeature_var      iStartEnd,       
		double                       & iConicParmValue,  
		double                       & oConicParmResol,                           
		int                          & ostatus )= 0;
	/**
  * Get the requirement for default Parabolic Result
  * @param oDefParabol 
	*     oDefParabol = 1, for default parabolic behaviour
  *     oDefParabol = 0, for behvaiour obtained as in V4.
	*/
	virtual HRESULT GetDefParabol(int &oDefParabol) = 0;
	/**
	* Set the requirement for default Parabolic Result
  * @param iDefParabol 
	*     iDefParabol = 1, for default parabolic behaviour
  *     iDefParabol = 0, for behvaiour obtained as in V4.
	*/
	virtual HRESULT SetDefParabol(const int &iDefParabol) = 0;

	// No constructors or destructors on this pure virtual base class
	// --------------------------------------------------------------
};

//------------------------------------------------------------------

CATDeclareHandler( CATIGSMUseConic, CATBaseUnknown );

#endif
