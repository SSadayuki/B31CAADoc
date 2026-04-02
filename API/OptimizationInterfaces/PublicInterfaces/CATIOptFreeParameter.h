// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
//
// CATIOptFreeParameter.h
// Define the CATIOptFreeParameter interface
//
//===================================================================
/** 
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#ifndef CATIOptFreeParameter_H
#define CATIOptFreeParameter_H

#include "OptimizationItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATListOfDouble.h"
#include "CATListOfCATUnicodeString.h"

class CATICkeParm_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByOptimizationItfCPP IID IID_CATIOptFreeParameter ;
#else
extern "C" const IID IID_CATIOptFreeParameter ;
#endif

//------------------------------------------------------------------

/**
* Interface dedicatedto the free parameter of the optimization.
* (a parameter that can be changed by algorithms to find a better solution to the optimization problem).
* A free parameter can be created through the CATIOptFactory interface.
* @see CATICkeParm, CATIOptFactory.
*/class ExportedByOptimizationItfCPP CATIOptFreeParameter: public CATBaseUnknown
{
	CATDeclareInterface;
	
public:
	
	/**
	* Sets the parameter that the free parameter will represent.
    * @param iParm
	* The parameter that must be considered as a free parameter (i.e. a variable)
    * by the optimization algorithm.
	* @return
	* - S_OK if the link is set to the parameter "iParm" 
	* - E_FAIL if the link is not set because something failed.
	*/
	virtual HRESULT SetParameter(const CATICkeParm_var &iParm) = 0;
	
	/**
	* Sets the free parameter that the free parameter will represent
	* with the care of selective loading capability.
	* It means that if the parameter "parm" is in a document different from
	* the document were the optimization is, this method will allow to keep the link
	* with the parameter (thanks to a proxy), whereas the SetParameter()
	* method does not (the parameter will not be found).
	* In other cases, behavior is the same between the two methods.
	* WARNING : if you call this method with the parameter "p1"in argument,
	* by calling the GetParameter() method just after, you may not get
	* the given p1 (but its proxy).
	* @param iParm
	* The parameter that must be considered as a free parameter (i.e. a variable)
    * by the optimization algorithm.
	* @return
	* - S_OK if the link is set to the parameter "iParm" 
	*   => parameter not concerned by selective loading context.
	* - S_FALSE if the link is set to the proxy of the parameter "iParm"
	*   => the GetGoalParameter() method will not return "iParm", but its proxy.
	* - E_FAIL if the link is not set because something failed.
	*/
	virtual HRESULT SetParameterOrItsProxy(const CATICkeParm_var &iParm) = 0;

	/**
	* Gets the final free parameter.
	* @return
	*   The final free parameter.
	* - If you called SetParameter or SetParameterOrItsProxy by giving
	*   a publication of parameter in argument, this method will return the 
	*   parameter pointed by the publication : 
	*	For instance, you called one of the
	*	Setxxx method with the publication "...!Part.1!PubOfReal.1" of the parameter Real.1
	*	of Part.1
	*	=> This method will return "Part.1\Real.1" and not exactly what you set
	* - In other cases, it will return :
	*	# The proxy of the proxiable parameter you gave while calling SetParameterOrItsProxy(), if one has been linked.
	*	# The non-proxiable parameter you gave while calling SetParameterOrItsProxy() or SetParameter().
	*/
	virtual CATICkeParm_var GetParameter() const = 0;

	/**
	* Gets the publication or the free parameter.
	* @return
	*   The publication or the free parameter.
	* - If you called SetParameter or SetParameterOrItsProxy by giving
	*   a publication of parameter in argument, this method will return the 
	*   the publication.
	*   WARNING : in publication case (the CATICkeParm object returned by GetParameterOrPub() is
	*   different from the one returned by GetParameter()), 2 successive calls to this method 
	*   will not return the same CATICkeParm !!!
	* - In other cases, it will return :
	*	# The proxy of the proxiable parameter you gave while calling SetParameterOrItsProxy(), if one has been linked.
	*	# The non-proxiable parameter you gave while calling SetParameterOrItsProxy() or SetParameter().
	*/
	virtual CATICkeParm_var GetParameterOrPub() const = 0;
	
	/**
	* Sets the ranges and booleans that say if the free parameter has inf range and sup range.
	* @param iHasInfRange
	* Set this flag to 1 to indicate that the free parameter has an Inf. range, and to 0 else.
	* @param iInfRange
	* The Inf. range to be set if the given corresponding flag is equal to 1.
	* @param iHasSupRange
	* Set this flag to 1 to indicate that the free parameter has a Sup. range, and to 0 else.
	* @param iSupRange
	* The Sup. range to be set if the given corresponding flag is equal to 1.
	* @return
	* E_FAIL if you try to valuate the Inf. and/or the Sup. Range parameter(s) whereas it(they)
	* is(are) already driven by a Relation (Formula, Check etc ..), S_OK if succeeded.
	*/
	virtual HRESULT SetRanges(int iHasInfRange, double iInfRange, int iHasSupRange, double iSupRange) = 0;
	
	/**
	* Sets the step and the boolean if the free parameter has a step.
	* Steps are used by the algorithms to get an order of magnitude for small search moves in the variable space.
	* @param iHasStep
	* Set this flag to 1 to indicate that the free parameter has a step, and to 0 else.
	* @param iStep
	* The Step to be set if the given corresponding flag is equal to 1.
	* @return
	* E_FAIL if you try to valuate the step parameter whereas it
	* is already driven by a Relation (Formula, Check etc ..), S_OK if succeeded.
	*/
	virtual HRESULT SetStep(int iHasStep, double iStep) = 0;
	
	/**
	* Gets the ranges if the parameter has some.
	* ### WARNING ###
	* Since V5R14, it is possible to define a relation (formula, rule etc...) on the parameters which
	* give the range/step
	* => the value of the range/step may vary during the run of an optimization method.
	* In PEO native algorithms, the initial values of range/step are used, that means that as soon as you choose
	* to run the method, the current values a kept by the algorithm and considered as constant during the run.
	* If you use your own optimization method, you may have to implement this behavior.
	* ###############
	* @param ioHasInfRange
	* This flag is set to 1 if the free parameter has an Inf. range, and to 0 else.
	* @param ioInfRange
	* Gives the Inf. range value.
	* @param ioHasSupRange
	* This flag is set to 1 if the free parameter has a Sup. range, and to 0 else.
	* @param ioSupRange
	* Gives the Sup. range value.
	*/
	virtual void GetRanges(int &ioHasInfRange, double &ioInfRange, int &ioHasSupRange, double &ioSupRange) const = 0;
	
	/**
	* Returns the step if the parameter has one. 
	* Steps are used by the algorithms to get an order of magnitude for small search moves in the variable space.
    * @param ioHasStep
	* is valuated to 1 if the free parameter has a step and 0 else.
	* @return
	* Returns the step if the parameter has one.
	*/
	virtual double GetStep(int &ioHasStep) const = 0;


	/**
	* Since V5R14, it is possible to define a relation (formula, rule etc...) on the parameters which
	* give the range/step so that those parameters have to be accessible.
	* @param ioHasInfRange
	* return the value of the Inf. Bound flag : 1 if free parameter has one, 0 else
	* @param ioInfRangeParm
	* return the parameter which gives the value of the Inf. Bound (may be driven by a relation).
	* If working on an old model, the parameter is created.
	* @return
	* S_OK if operation succeeded, E_FAIL else.
	*/
	virtual HRESULT GetInfRangeParm(int& ioHasInfRange, CATICkeParm_var& ioInfRangeParm) = 0;

	/**
	* Since V5R14, it is possible to define a relation (formula, rule etc...) on the parameters which
	* give the range/step so that those parameters have to be accessible.
	* @param ioHasSupBound
	* return the value of the Sup. Bound flag : 1 if free parameter has one, 0 else
	* @param ioSupRangeParm
	* return the parameter which gives the value of the Sup. Bound (may be driven by a relation).
	* If working on an old model, the parameter is created.
	* @return
	* S_OK if operation succeeded, E_FAIL else.
	*/
	virtual HRESULT GetSupRangeParm(int& ioHasSupRange, CATICkeParm_var& ioSupRangeParm) = 0;

	/**
	* Since V5R14, it is possible to define a relation (formula, rule etc...) on the parameters which
	* give the range/step so that those parameters have to be accessible.
	* @param ioHasStep
	* return the value of the Step flag : 1 if free parameter has one, 0 else
	* @param ioInfBoundParm
	* return the parameter which gives the value of the Step (may be driven by a relation).
	* If working on an old model, the parameter is created.
	* @return
	* S_OK if operation succeeded, E_FAIL else.
	*/
	virtual HRESULT GetStepParm(int& ioHasStep, CATICkeParm_var& ioStepParm) =0;

	/**
	* Sets the list of strings allowed to valuate the parameter (if the parameter given 
	* by the GetParameter() method is of type "String").
	* @param iStringValues
	* The list of strings to set
	* @return
	* E_FAIL if the parameter type is not "String", S_OK if succeeded.
	*/
	virtual HRESULT SetStringValues(const CATListOfCATUnicodeString& iStringValues) = 0;

	/**
	* Gets the list of strings allowed to valuate the parameter given by the GetParameter() method.
	* @param oStringValues
	* The list of allowed strings : this list must be destroyed.
	* @return
	* E_FAIL if the parameter type is not a "String", S_OK if succeeded (even if the returned oStringValues is NULL
	* because no list has been set).	
	*/
	virtual HRESULT GetStringValues(CATListOfCATUnicodeString*& oStringValues) = 0;

	/**
	* Sets the list of double (= mks values) allowed to valuate the parameter (if the parameter given
	* by the GetParameter() method is numerical (= NOT of type "String")).
	* @param iDoubleValues
	* The list of double to set
	* @return
	* E_FAIL if the parameter type is not "numerical, S_OK if succeeded.
	*/
	virtual HRESULT SetDoubleValues(const CATListOfDouble& iDoubleValues) = 0;

	/**
	* Gets the list of double (= mks values) allowed to valuate the parameter given by the GetParameter() method.
	* @param oDoubleValues
	* The list of allowed double : this list must be destroyed.
	* @return
	* E_FAIL if the parameter type is not numerical, S_OK if succeeded (even if the returned oDoubleValues is NULL
	* because no list has been set).		
	*/
	virtual HRESULT GetDoubleValues(CATListOfDouble*& oDoubleValues) = 0;

	/**
	* Gets the parameter which contains the nominal value. If the free parameter is NOT in "variable mode",
	* the referenced parameter (get by GetParameter()) is kept to the nominal value during the optimization methods.
	* Notice that : this parameter is destroy and rebuilt as soon as you call the SetParameter() method with a
	* parameter whose type is different from the current one, so that there is no SetNominalValueParameter() method.
	* By default, the nominal value is set to the current referenced parameter value.
	* @param oNominalValueParm
	* The parameter that contains the nominal value. It has the same type as the GetParameter().
	* This parameter is created :
	* - in the SetParameter() method in order to always match the referenced parameter type.
	* - if working on old CATIA models for which SetParameter() method has already been called without
	*   creating this parameter, the nominal parameter is created here.
	* @return
	* S_OK if operation succeeded, E_FAIL else.
	*/
	virtual HRESULT GetNominalValueParameter(CATICkeParm_var& oNominalValueParm) = 0;

	/**
	* Sets the variable mode according to the given value. This flag may be used by optimization methods
	* to know in which mode the input is.
	* Notice that, it is the optimization method that decides to use this value to modify its behavior.
	* @param iIsVariable
	*  You can give :
	* - 0 if you want to force the free parameter to keep its nominal value during the optimization methods.
	* - Other, if you want the free parameter to be free from varying (in the possible given range).
	* @return
	* S_OK if operation succeeded, E_FAIL else.
	*/
	virtual HRESULT SetVariableFlag(int iIsVariable) = 0;

	/**
	* Gets the variable mode. This flag may be used by optimization methods to know in which mode the input is.
	* By default, an input variable is in variable mode (ioIsVariable = 1).
	* Notice that, it is the optimization method that decides to use this value to modify its behavior.
	* @param ioIsVariable
	*  You can get :
	* - 0 : the free parameter will keep its nominal value during the optimization methods.
	* - Other : the free parameter will be free from varying (in the possible given range).
	* @return
	* S_OK if operation succeeded, E_FAIL else.
	*/
	virtual HRESULT GetVariableFlag(int& ioIsVariable) = 0;

	/**
	* Sets the relaxed flag according to the given value. This flag may be used if the referenced parameter
	* (get by GetParameter()) is a real defined with discrete values thanks to :
	* - a list of values
	* - a range (inf. + sup. bound) AND a step
	* to indicate that during an optimization method, values that are not in the set of discrete values can
	* not be used.
	* Notice that, it is the optimization method that decides to use this value to modify its behavior.
	* @param iIsRelaxed
	*  You can give :
	* - 0 if you want to force the free parameter to keep a discrete value during the optimization methods.
	* - Other, if you want the free parameter to be free from varying (in the possible given range).
	* @return
	* S_OK if operation succeeded, E_FAIL else.
	*/
	virtual HRESULT SetRelaxedFlag(int iIsRelaxed) = 0;

	/**
	* Gets the relaxed flag. This flag may be used if the referenced parameter
	* (get by GetParameter()) is a real defined with discrete values thanks to :
	* - a list of values
	* - a range (inf. + sup. bound) and a step
	* to indicate that during an optimization method, values that are not in the set of discrete values can
	* not be used.
	* By default, an input variable is not in relaxed mode (ioIsRelaxed = 0).
	* Notice that, it is the optimization method that decides to use this value to modify its behavior.
	* @param ioIsRelaxed
	*  You can get :
	* - 0 : the free parameter will keep a discrete value during the optimization methods.
	* - Other : the free parameter will be free from varying (in the possible given range).
	* @return
	* S_OK if operation succeeded, E_FAIL else.
	*/
	virtual HRESULT GetRelaxedFlag(int& ioIsRelaxed) = 0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATIOptFreeParameter, CATBaseUnknown );

#endif
