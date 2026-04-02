// COPYRIGHT DASSAULT SYSTEMES 2003

#ifndef _SWKIAnthroVariable_h
#define _SWKIAnthroVariable_h

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

// *****************************************************************************
// Framework DNBHumanModelingInterfaces
// Copyright Safework Inc.
// *****************************************************************************
//  Abstract:
//  ---------
//
//    SWKIAnthroVariable interface.
//    This interface offers services related to an anthropometric variable.
//
// *****************************************************************************
//  Usage:
//  ------
//
// *****************************************************************************
//  Inheritance:
//  ------------
//
//    SWKIManikinPart
//
// *****************************************************************************
//  Main Methods:
//  -------------
//
//    Init
//    GetOwner
//    GetManikin
//    SetManagementToAutomatic
//    SetManagementToUser
//    IsAutomatic
//    GetLiteralParameter
//    GetReferenceNumber
//    GetAcronym
//    GetName
//    GetValue
//    GetValueAsPercentile
//    SetUserValue
//    SetUserValueFromPercentile
//    GetMean
//    GetStdDev
//    GetCorrelationValue
//    GetMinValue
//    GetMaxValue
//    GetAnchorPointPosture
//    GetAnchorPointSide
//    GetFirstAnchorPointTranslation
//    GetSecondAnchorPointTranslation
//    GetBodyPart
//    GetFirstAnchorPoint
//    GetSecondAnchorPoint
//    IsACircumference
//    IsAHeight
//    IsALength
//    IsABreadth
//    IsADepth
//    IsAMass
//    HasAGraphicalRep
//    GetCircEllipse
//    GetArrowRep
// *****************************************************************************
//  History
//  -------
//
//  Author: Jean-Guy AUGUSTIN
//  Date  : 00/03/01
//  Goal  : Creation
// *****************************************************************************
//
// --- DNBHumanModelingInterfaces
#include "SWKIManikinPart.h"
#include "SWKPostureSpec.h"
//
// --- DNBHumanModeling
#include "SWShortNames.h"
//
// --- System
#include "CATBooleanDef.h"
//
// --- DNBHumanModeling
class SWAnthroVariable;
//
// --- DNBHumanModelingInterfaces
class SWKIAnthro;
class SWKIArrowRepresentation;
class SWKIManikin;
//
// --- LiteralFeatures
class CATICkeParm;
//
// --- Mathematics
class CATMathPoint;
class CATMathVector;
//
// --- System
class CATString;
class CATUnicodeString;

#ifndef SW_ANTHRO_FLAGS_DEFINED
#	define SW_ANTHRO_FLAGS_DEFINED

/* Sex of manikin */
#ifndef SW_ANTHRO_SEX_FEMALE
#	define SW_ANTHRO_SEX_FEMALE		0x0	/* female */
#endif

#ifndef SW_ANTHRO_SEX_MALE
#	define SW_ANTHRO_SEX_MALE		0x1	/* male */
#endif

/* Variable value type */
#ifndef SW_ANTHRO_VAR_VALUE
#	define SW_ANTHRO_VAR_VALUE		0x0	/* Real-world format */
#endif

#ifndef SW_ANTHRO_VAR_PERC
#	define SW_ANTHRO_VAR_PERC		0x1	/* Percentile format */
#endif

/* Variable management */
#ifndef SW_ANTHRO_VAR_SYSTEM
#	define SW_ANTHRO_VAR_SYSTEM		0x0	/* The variable is managed by the system */
#endif

#ifndef SW_ANTHRO_VAR_USER
#	define SW_ANTHRO_VAR_USER		0x1	/* The variable is user set */
#endif

/* The side under which the anchor points are best viewed */
enum SWSideSpec
{
	SWSideSpecNone  = 0,
	SWSideSpecFront = 1,
	SWSideSpecBack  = 2,
	SWSideSpecRight = 3
};

/* The body part on which the anthro variable is measured */
enum SWAnthroPart
{
	SWAnthroPartNone = 0,
	SWAnthroPartBody = 1,
	SWAnthroPartHead = 2,
	SWAnthroPartTorso = 3,
	SWAnthroPartArm = 4,
	SWAnthroPartHand = 5,
	SWAnthroPartLeg = 6,
	SWAnthroPartFoot = 7
};

#endif  /* SW_ANTHRO_FLAGS_DEFINED */

#ifdef _WINDOWS_SOURCE
#ifdef __SWKHumanModelingItf
#define ExportedBySWKHumanModelingItf __declspec(dllexport)
#else
#define ExportedBySWKHumanModelingItf __declspec(dllimport)
#endif
#else
#define ExportedBySWKHumanModelingItf
#endif

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySWKHumanModelingItf IID IID_SWKIAnthroVariable;
#else
extern "C" const IID IID_SWKIAnthroVariable;
#endif

/**
  *  This interface offers services related to an anthropometric variable.<br>
  *  Each anthropometric variable represents a body dimension on the manikin.<br>
  *  The anthropometric variable can be managed by the system (in which case<br>
  *  they are said to be <i>automatic</i> variables) or by the user (in which case<br>
  *  they are said to be <i>user</i> variables).
  **/

class ExportedBySWKHumanModelingItf SWKIAnthroVariable : public SWKIManikinPart
{
	CATDeclareInterface;

  public:

	/**
	  * Initialize the internal anthropometric variable.<br>
	  * <strong>This method is to be used by the system only</strong>.
	  **/
	virtual HRESULT Init(SWAnthroVariable * piInternalAnthroVariable) = 0;

	/**
	  * Return the pointer to the anthropometry which owns this variable.
	  **/
	virtual SWKIAnthro * GetOwner() = 0;

	/**
	  * Return the pointer to the manikin which owns this variable.
	  **/
	virtual SWKIManikin * GetManikin() = 0;

	/**
	  * Return the acronym of the variable.<br>
	  * The acronym is an abbreviation of the name of<br>
	  * the variable that uniquely identifies the variables<br>
	  * The reference number also uniquely identifies an<br>
	  * anthropometric variable<br>
	  * (see method <code>GetReferenceNumber()</code>).
	  **/
	virtual CATString GetAcronym() const = 0;

	/** 
	  * Return the reference number of the variable,<br>
	  * in a <strong>US Army Natick</strong> sense<br>
	  * (e.g. 2 for us2, 100 for us100, etc.).
	  * Each variable has a unique reference number and a<br>
	  * uniqe acronym.
	  **/
	virtual unsigned GetReferenceNumber() const = 0;

	/**
	  * Return the full name of this anthropometric variable.
	  * See document "<i>Managing SWManikin Databases</i>" for more
	  * information.
	  **/
	virtual CATUnicodeString GetName() const = 0;

	/**
	  * Return the value of this anthropometric variable.<br>
	  * The value returned is in kilograms if the variable<br>
	  * is a mass (cf. method <code>IsAMass()</code>),<br>
	  * and in centimeters otherwise.
	  **/
	virtual double GetValue() const = 0;

	/** 
	  * Return a number between 0 and 100, representing the percentile<br>
	  * corresponding to the variable's current value.
	  **/
	virtual double GetValueAsPercentile() const = 0;

	/** 
	  * Set the management of this variable to user.<br>
	  * After the call to this method, the variable's<br>
	  * value will not be changed, until the variable<br>
	  * is changed again by the user or reset to system.
	  **/
	virtual void SetManagementToUser() = 0;

	/** 
	  * Set the management of this variable to system.<br>
	  * After the call to this method, the variable's<br>
	  * value will be updated by the system whenever<br>
	  * the anthropometry is updated.
	  **/
	virtual void SetManagementToAutomatic() = 0;

	/** 
	  * Reset the management of this variable to system.<br>
	  * After the call to this method, the variable's<br>
	  * value will be updated by the system whenever<br>
	  * the anthropometry is updated. The diffrence between 
	  * this function and about is not to rebuild everything.
	  **/
	virtual void ResetManagementType() = 0;

	/** 
	  * Query the management of this variable.
	  *
	  * @return <strong><font color="blue">TRUE</font></strong>
	  * if the variable is managed by the system,
	  * <strong><font color="blue">FALSE</font></strong> otherwise.
	  **/
	virtual boolean IsAutomatic() const = 0;

	/**
	  * Return the litereal feature that is associated to
	  * this anthropometric variable.<br>
	  * <br>
	  * This literal parameter is bound to the anthropometric<br>
	  * variable, and has the same type as the anthropometric<br>
	  * variable.  It can be used the present the anthropometric<br>
	  * variable in the user interface of an application.<br>
	  * The literal <strong>is always synchronized with<br>
	  * its associated variable</strong>; that is when this<br>
	  * literal is changed, the underlying anthropometric variable<br>
	  * is updated, and vice versa.<br>
	  **/
	virtual CATICkeParm * GetLiteralParameter() = 0;

	/**
	  * Set the value of the variable.
	  *
	  * @param piValue The new value to give the variable.<br>
	  * This value must be expressed in kilograms (kg)<br>
	  * if the variable is a mass (cf. method <code>IsAMass()</code>)<br>
	  * or in cenitmeters (cm) otherwise.<br>
	  * The value given to the variable must be within<br>
	  * the statistical limits (which are provided by<br>
	  * the methods <code>GetMinValue()</code> and <code>GetMaxValue()</code>),<br>
	  * unless the interpolation of the anthropometry<br>
	  * has been disabled (cf. <code>SWKIAnthro::SetInterpolationMethod()</code>).<br>
	  * <br>
	  * <br>
	  * If it is the case, then any positive value will be<br>
	  * accepted, <strong>even if the value is not realistic.</strong><br>
	  *
	  * @return <code>S_OK</code> on succes, <code>S_FALSE</code>
	  * if the value entered is rejected.
	  **/
	virtual HRESULT SetUserValue(double piValue) = 0;

	/**
	  * Set the value of the variable, in a percentile format.
	  *
	  * @param piPercentileValue The percentile value that
	  * the real value of the variable will reflect. That
	  * paramter's value must lie in the range [0.0, 100.0].
	  *
	  * @return <code>S_OK</code> on success, <code>E_INVALIDARG</code>
	  * if the value has been rejected.
	  **/
	virtual HRESULT SetUserValueFromPercentile(double piPercentileValue) = 0;

	/**
	  * @return The mean of the variable.<br>
	  * The value returned is in kilograms if the variable<br>
	  * is a mass (cf. method <code>IsAMass()</code>),<br>
	  * and in centimeters otherwise.
	  **/
	virtual double GetMean() const = 0;

	/**
	  * @return The Standard Deviation of the variable.<br>
	  * The value returned is in kilograms if the variable<br>
	  * is a mass (cf. method <code>IsAMass()</code>),<br>
	  * and in centimeters otherwise.
	  **/
	virtual double GetStdDev() const = 0;

	/**
	  * Return the correlation value with the variable at index piVarNb.
	  *
	  * @param piVariableIndex The variable number with which the correlation
	  * should be retrieved.
	  *
	  * @return The correlation value with the variable <code>piVarNb</code>, or
	  * <code>0.0</code> if the variable is not found.
	  **/
	virtual double GetCorrelationValue(unsigned piVariableIndex) const = 0;

	/**
	  * @return The minimum variable that the variable can take,<br>
	  * according to the statistics.<br>
	  * The value returned is in kilograms if the variable<br>
	  * is a mass (cf. method <code>IsAMass()</code>),<br>
	  * and in centimeters otherwise.
	  **/
	virtual double GetMinValue() const = 0;

	/**
	  * @return The maximum variable that the variable can take,<br>
	  * according to the statistics.<br>
	  * The value returned is in kilograms if the variable<br>
	  * is a mass (cf. method <code>IsAMass()</code>),<br>
	  * and in centimeters otherwise.
	  **/
	virtual double GetMaxValue() const = 0;

	/**
	  * @return The posture that goes with the anchor points on that
	  * variable.
	  **/
	virtual SWKPostureSpec GetAnchorPointPosture() const = 0;

	/**
	  * @return The side under which the anchor points on that
	  * variable are best viewed.
	  **/
	virtual SWSideSpec GetAnchorPointSide() const = 0;

	/**
	  * @return The translation vector that has to be applied to the first
	  * anchor point for visualization pruposes.
	  **/
	virtual CATMathVector GetFirstAnchorPointTranslation() const = 0;

	/**
	  * @return The translation vector that has to be applied to the second
	  * anchor point for visualization pruposes.
	  **/
	virtual CATMathVector GetSecondAnchorPointTranslation() const = 0;

	/**
	  * @return <strong><font color="blue">TRUE</font></strong>
	  * if this variable is a circumference.
	  **/
	virtual boolean IsACircumference() const = 0;

	/**
	  * @return <strong><font color="blue">TRUE</font></strong>
	  * if this variable is a height.
	  **/
	virtual boolean IsAHeight() const = 0;

	/**
	  * @return <strong><font color="blue">TRUE</font></strong>
	  * if this variable is a length.
	  **/
	virtual boolean IsALength() const = 0;

	/**
	  * @return <strong><font color="blue">TRUE</font></strong>
	  * if this variable is a breadth.
	  **/
	virtual boolean IsABreadth() const = 0;

	/**
	  * @return <strong><font color="blue">TRUE</font></strong>
	  * if this variable is a depth.
	  **/
	virtual boolean IsADepth() const = 0;

	/**
	  * @return <strong><font color="blue">TRUE</font></strong>
	  * if this variable is a mass.
	  **/
	virtual boolean IsAMass() const = 0;

	/**
	  * @return <strong><font color="blue">TRUE</font></strong>
	  * if this variable has a graphical representation.
	  **/
	virtual boolean HasAGraphicalRep() const = 0;

	/**
	  * @return The body part that anthro variable is measured on.
	  **/
	virtual SWAnthroPart GetBodyPart() const = 0;


	/* Body site to attach the variable */

	/**
	  * @return The first anchor point for variable mesurement.<br>
	  * If one would want to measure this anthropometric variable<br>
	  * (which is a body dimension) on a real manikin, then this<br>
	  * point would be the first point to attach the ruler.
	  **/
	virtual CATMathPoint GetFirstAnchorPoint() const = 0;

	/**
	  * @return The second anchor point for variable mesurement.<br>
	  * If one would want to measure this anthropometric variable<br>
	  * (which is a body dimension) on a real manikin, then this<br>
	  * point would be the second point to attach the ruler.
	  **/
	virtual CATMathPoint GetSecondAnchorPoint() const = 0;

	/**
	  * @return The short name of the ellipse which that variable<br>
	  * goes around.  This method returns a valid ellipse value<br>
	  * only if it is a circumference (i.e. if mehod <code>IsACircumference()</code><br>
	  * returned <strong><font color="blue">TRUE</font></strong>).
	  * If the variable is not a circumference, the method will return<br>
	  * <code>SWNoShortName</code>.
	  **/
	virtual SWShortName GetCircEllipse() const = 0;

	/**
	  * @return The arrow representting the anthropometric variable, or<br>
	  * <code>NULL</code>, if the variable has no graphical representation.
	  **/
	virtual SWKIArrowRepresentation * GetArrowRep() = 0;
};

CATDeclareHandler(SWKIAnthroVariable, SWKIManikinPart);

#endif
