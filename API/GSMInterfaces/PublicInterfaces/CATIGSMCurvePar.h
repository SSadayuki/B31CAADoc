/* -*-c++-*- */
#ifndef CATIGSMCurvePar_H
#define CATIGSMCurvePar_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"
#include "CATICkeParm.h"
#include "CATGSMCurveParDef.h"
#include "CATGSMTolerantModelingDef.h"
#include "CATGSMBasicLawDef.h"


class CATICkeLaw_var;

class CATMathVector;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMCurvePar;
#else
extern "C" const IID   IID_CATIGSMCurvePar;
#endif

/**
* Parallel Curve.
* <b>Role</b>: Allows to access data of the Parallel Curve feature created by using
* a curve, a support, an orientation and an offset value
*  Gets, sets the Curve Offset definition elements
* @see CATIGSMFactory#CreateCurvePar
*/

class ExportedByCATGitInterfaces CATIGSMCurvePar : public CATBaseUnknown
{
	CATDeclareInterface;

public:

	/**
	* Gets the reference curve.
	*   @param oElem
	*      new reference curve
	*/
	virtual    HRESULT GetProfil(CATISpecObject_var & oElem) = 0;

	/**
	* Gets the support of the curve.
	*   @param oSupport
	*      new curve support
	*/
	virtual    HRESULT GetSupport(CATISpecObject_var & oSupport) = 0;

	/**
	* Gets the offset value.
	*   @param oOffValue
	*      Offset value
	*/
	virtual    HRESULT   GetCurveParValue(double & oOffValue) = 0;

	/**
	* Gets the offset value.
	*   @param oOffValue
	*      Offset value
	*/
	virtual    HRESULT   GetCkeCurveParValue(CATICkeParm_var & oOffValue) = 0;
	/**
	* Gets the offset value.
	*   @param oOffValue
	*      Offset value
	*/
	virtual    HRESULT   GetCurveParValue2(double & oOffValue) = 0;

	/**
	* Gets the offset value.
	*   @param oOffValue
	*      Offset value
	*/
	virtual    HRESULT   GetCkeCurveParValue2(CATICkeParm_var & oOffValue) = 0;
	/**
	* Gets the offset value.
	*   @param oOffValue
	*      Offset value
	*/
	virtual    HRESULT   GetCurveParValue1(double & oOffValue) = 0;

	/**
	* Gets the offset value.
	*   @param oOffValue
	*      Offset value
	*/
	virtual    HRESULT   GetCkeCurveParValue1(CATICkeParm_var & oOffValue) = 0;
	/**
	* Gets the offset law.
	*   @param oOffLaw
	*      Offset law
	*/
	virtual    HRESULT   GetCurveParLaw(CATICkeLaw_var & oOffLaw) = 0;

	/**
	* Gets the orientation.
	*   @param oInvert
	*     : False means that there is no invertion of the curve orientation
	*   (orientation is the vector product of the tangent of the curve  by the normal on the support)
	*     : True to invert this orientation
	*/
	virtual    HRESULT      GetInvertDirection(CATBoolean & oInvert) = 0;

	/**
	* Gets the Geodesic mode.
	*   @param oGeodesic
	*     False : Euclidian mode
	*     True : Geodesic mode
	*/
	virtual    HRESULT  GetGeodesic(CATBoolean & oGeodesic) = 0;

	/**
	* Gets the Corner type .
	*   @param oCornerType
	*     CATGSMCurvePar_Sharp = 0 : Sharp corner
	*     CATGSMCurvePar_Round = 1 : Round corner
	*/
	virtual    HRESULT GetCurveParType(enum CATGSMCurveParCornerType & oCornerType) = 0;

	/**
	* Gets the mapping orientation of the law
	* (if offset is specified by a law).
	*   @param oInvert
	*     False : Law is applied from the beginning to the end of the curve (mapping is not inverted).
	*     True :  Law is applied from the end to the beginning of the curve (mapping is inverted).
	*/
	virtual    HRESULT  GetInvertMappingLaw(CATBoolean & oInvert) = 0;


	/**
	* Get the Normal of the plane created when the Support of the curve is not specified.
	*   @param oNormal
	*    CATMathVector
	*/
	virtual    HRESULT  GetPlaneNormal(CATMathVector & oNormal) = 0;

	/**
	* Set the Normal of the plane created when the Support of the curve is not specified.
	*   @param iNormal
	*    CATMathVector
	*/
	virtual    HRESULT  SetPlaneNormal(CATMathVector & iNormal) = 0;


	/**
	* Sets the reference curve.
	*   @param iElem
	*      new reference curve
	*/
	virtual    HRESULT SetProfil(const CATISpecObject_var iElem) = 0;

	/**
	* Sets the reference support.
	*   @param iSupport
	*      new curve support
	*/
	virtual    HRESULT SetSupport(const CATISpecObject_var iSupport) = 0;

	/**
	* Sets the offset value.
	*   @param iOffValue
	*      Offset value
	*/
	virtual    HRESULT SetCurveParValue(double iOffValue) = 0;

	/**
	* Sets the offset value.
	*   @param iOffValue
	*      Offset value
	*/
	virtual    HRESULT SetCurveParValue(const CATICkeParm_var iOffValue) = 0;


	/**
	* Sets the offset value.
	*   @param iOffValue
	*      Offset value
	*/
	virtual    HRESULT SetCurveParValue2(double iOffValue) = 0;

	/**
	* Sets the offset value.
	*   @param iOffValue
	*      Offset value
	*/
	virtual    HRESULT SetCurveParValue2(const CATICkeParm_var iOffValue) = 0;
	/**
	* Sets the offset value.
	*   @param iOffValue
	*      Offset value
	*/
	virtual    HRESULT SetCurveParValue1(double iOffValue) = 0;

	/**
	* Sets the offset value.
	*   @param iOffValue
	*      Offset value
	*/
	virtual    HRESULT SetCurveParValue1(const CATICkeParm_var iOffValue) = 0;

	/**
	* Sets the offset law.
	*   @param iOffLaw
	*      Offset law
	*/
	virtual    HRESULT SetCurveParLaw(const CATICkeLaw_var iOffLaw) = 0;

	/**
	* Sets the orientation.
	*   @param Invert
	*      False means that there is no invertion of the curve orientation
	*   (orientation is the vector product of the tangent of the curve  by the normal on the support)
	*      True to invert this orientation
	*/
	virtual    HRESULT SetInvertDirection(CATBoolean Invert) = 0;

	/**
	* Sets the Geodesic mode.
	*   @param iGeodesic
	*     False : Euclidian mode
	*     True : Geodesic mode
	*/
	virtual    HRESULT SetGeodesic(CATBoolean iGeodesic) = 0;

	/**
	* Sets the mapping orientation of the law
	* (if offset is specified by a law).
	*   @param iInvert
	*     False : Law is applied from the beginning to the end of the curve (mapping is not inverted).
	*     True :  Law is applied from the end to the beginning of the curve (mapping is inverted).
	*/
	virtual    HRESULT  SetInvertMappingLaw(CATBoolean iInvert) = 0;

	/**
	* Queries wether the offset of curve parallel is specified by a law or a constant value.
	*   @param oLaw
	*     : False means that the offset of curve parallel is specified by a law.
	*     : True  means that the offset of curve parallel is specified by a constant value.
	*/
	virtual    HRESULT IsOffsetSpecifiedByALaw(CATBoolean & oIsLaw) = 0;

	/**
	* Sets the Corner type .
	*   @param ioCornerType
	*     CATGSMCurvePar_Sharp = 0 : Sharp corner
	*     CATGSMCurvePar_Round = 1 : Round corner
	*/
	virtual    HRESULT SetCurveParType(enum CATGSMCurveParCornerType iCornerType) = 0;


	/**
	* Gets pitch law type.
	*   @param oType
	*      Type of law (from CATGSMBasicLawType enumeration).
	*   @see CATGSMBasicLawType
	*/
	virtual HRESULT GetPitchLawType(enum CATGSMBasicLawType & oType) = 0;

	/**
	* Sets pitch law type.
	*   @param iType
	*      Type of law (from CATGSMBasicLawType enumeration): <BR>
	*       - CATGSMBasicLawType_Constant, <BR>
	*       - CATGSMBasicLawType_SType.
	*   @see CATGSMBasicLawType
	*/
	virtual HRESULT SetPitchLawType(const enum CATGSMBasicLawType iType) = 0;


	/**
	* Sets Smoothing Type.
	* <br>
	*   @param iType
	*      Smoothing type
	*       : TM_None -> No Smoothing
	*       : TM_G1 -> G1 Smoothing : Enhance current continuity to tangent continuity
	*		: TM_G2 -> G2 Smoothing : Enhance current continuity to curvature continuity
	*   @see CATGSMTolerantModelingSmoothingType
	*/
	virtual    HRESULT SetSmoothingType(CATGSMTolerantModelingSmoothingType iType) = 0;

	/**
	* Gets Smoothing Type.
	* <br>
	*   @param oType
	*      Smoothing type
	*       : TM_None -> No Smoothing
	*       : TM_G1 -> G1 Smoothing : Enhance current continuity to tangent continuity
	*		: TM_G2 -> G2 Smoothing : Enhance current continuity to curvature continuity
	*   @see CATGSMTolerantModelingSmoothingType
	*/
	virtual    HRESULT GetSmoothingType(CATGSMTolerantModelingSmoothingType & oType) = 0;

	/**
	* Sets the maximum deviation allowed for smoothing operation.
	* <br> Sets in  distance unit, it corresponds to the radius of a
	* pipe around the input curve in which the result is allowed to be.
	*   @param Elem
	*      Maximum deviation literal feature
	*/
	virtual    HRESULT SetDeviationValue(const CATICkeParm_var & iDeviation) = 0;

	/**
	* Sets the maximum deviation allowed for smoothing operation.
	* <br> Sets in distance unit, it corresponds to the radius of a
	* pipe around the input curve in which the result is allowed to be.
	*   @param val
	*      Maximum deviation value
	*/
	virtual    HRESULT SetDeviationValue(const double iDeviation) = 0;

	/**
	* Gets the maximum deviation allowed for smoothing operation.
	* <br> Gets in distance unit, it corresponds to the radius of a
	* pipe around the input curve in which the result is allowed to be.
	*   @param Elem
	*      Maximum deviation literal feature
	*/
	virtual    HRESULT GetDeviationValue(CATICkeParm_var& oDeviation) = 0;

	/**
	* Gets the maximum deviation allowed for smoothing operation.
	* <br> Gets in distance unit, it corresponds to the radius of a
	* pipe around the input curve in which the result is allowed to be.
	*   @param val
	*      Maximum deviation value
	*/
	virtual    HRESULT GetDeviationValue(double& oDeviation) = 0;


	/**
	* Gets the passing point.
	*   @param oPassingPoint
	*      new passing point
	*/
	virtual    HRESULT GetPassingPoint(CATISpecObject_var & oPassingPoint) = 0;

	/**
	* Sets the passing point.
	*   @param iPassingPoint
	*      new passing point
	*/
	virtual    HRESULT SetPassingPoint(const CATISpecObject_var iPassingPoint) = 0;


	/**
	* Sets or unsets the computation of both sides.
	*   @param iMode
	*      Computation option on (TRUE) or off (FALSE)
	*/
	virtual    HRESULT  SetBothSidesMode(CATBoolean iMode) = 0;

	/**
	* Queries whether both sides are computed or not.
	*   @param oMode
	*      Computation option on (TRUE) or off (FALSE)
	*/
	virtual    HRESULT GetBothSidesMode(CATBoolean & oMode) = 0;

	/**
	* Gets the other side.
	*   @param oElem
	*      Other side
	*/
	virtual    HRESULT GetOtherSide(CATISpecObject_var & oElem) = 0;

	/**
	* Sets or unsets the '3D Smoothing' activation for smoothing operation.
	* Available only for tangent or curvature smoothing type
	*   @param i3DSmoothing
	*      TRUE  : Smoothing performed without specifying support
	*      FALSE : Smoothing performed with specific support (retrieved by GetSupport)
	*/
	virtual    HRESULT Set3DSmoothing(CATBoolean i3DSmoothing) = 0;

	/**
	* Queries whether '3D Smoothing' for smoothing operation is activated or not.
	* Available only for tangent or curvature smoothing type
	*   @param o3DSmoothing
	*      TRUE  : Smoothing performed without specifying support
	*      FALSE : Smoothing performed with specific support (retrieved by GetSupport)
	*/
	virtual    HRESULT Get3DSmoothing(CATBoolean & o3DSmoothing) = 0;

	//Curve Result extrapolation up to support.
	/**
	* Sets the extrapolate up to support option.
	*   @param iValue
	*      0 : Curve result will not be extrapolated up to support
	*      1 : Curve result will be extrapolated up to support
	*/
	virtual    HRESULT SetExtrapolateUpToSupportOption(const int iValue) = 0;

	/**
	*  Gets extrapolate up to support option.
	*  @param oValue
	*      0 : Curve result is not extrapolated up to support
	*      1 : Curve result is extrapolated up to support
	*    If this parameter is not set, default value is 0
	**/
	virtual    HRESULT GetExtrapolateUpToSupportOption(int & oValue) = 0;

};
CATDeclareHandler(CATIGSMCurvePar, CATBaseUnknown);
#endif // CATIGSMCurvePar_H








