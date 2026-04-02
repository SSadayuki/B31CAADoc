// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
//
// CATIOptGoal.h
// Define the CATIOptGoal interface
//
/** 
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#ifndef CATIOptGoal_H
#define CATIOptGoal_H

#include "OptimizationItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"

class CATICkeParm_var;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByOptimizationItfCPP IID IID_CATIOptGoal ;
#else
extern "C" const IID IID_CATIOptGoal ;
#endif

/**
* This interface encapsulates an optimization goal : it has mainly a goal parameter, an objective (minimum, maximum, target value) and a priority
* (used only in multigoals optimization).
*/
class ExportedByOptimizationItfCPP CATIOptGoal: public CATBaseUnknown
{
	CATDeclareInterface;
	
public:

	/**
	* Goal possible types: 
	* @param Minimum for mimization type of optimization.
	* @param Maximum for maximization type of optimization.
	* @param TargetValue for target value type of optimization.
	* @param CstOnly is for problems that do not have any goal and only constraints to be satisfied.
	* @param NoGoal when the type is not defined.
	* @param OnlyBoundedVariation
	*/
	enum Type 
	{
		Minimum,
		Maximum,
		TargetValue,
		OnlyBoundedVariation,
		NoGoal,
		CstOnly
	};
	

	/**
	* Sets the goal parameter.
	* @param iParm
	* The parameter that must be considered as the goal parameter (i.e. the parameter
	* to optimize) by the optimization algorithm.
	* @return
	* - S_OK if the link is set to the parameter "iParm" 
	* - E_FAIL if the link is not set because something failed.
	*/
	virtual HRESULT SetGoalParameter(const CATICkeParm_var &iParm) = 0;

	/**
	* Sets the goal parameter with the care of selective loading capability.
	* It means that if the parameter "parm" is in a document different from
	* the document were the optimization is, this method will keep the link
	* with the parameter (thanks to a proxy), whereas the SetGoalParameter()
	* does not (the parameter will not be found).
	* In other cases, behavior is the same between the two methods.
	* => This method allows the optimization to works in Visu Mode.
	* WARNING : if you call this method with the parameter "p1"in argument,
	* by calling the GetGoalParameter() method just after, you may not get
	* the given p1 (but its proxy).
	* @param iParm
	* The parameter that must be considered as the goal parameter (i.e. the parameter
	* to optimize) by the optimization algorithm.
	* @return
	* - S_OK if the link is set to the parameter "iParm" 
	*   => parameter not concerned by selective loading context.
	* - S_FALSE if the link is set to the proxy of the parameter "iParm"
	*   => the GetGoalParameter() method will not return "iParm", but its proxy.
	* - E_FAIL if the link is not set because something failed.
	*/
	virtual HRESULT SetGoalParameterOrItsProxy(const CATICkeParm_var &iParm) = 0;

	/**
	* Gets the final goal parameter.
	* @return
	*   The final goal parameter.
	* - If you called SetGoalParameter or SetGoalParameterOrItsProxy by giving
	*   a publication of parameter in argument, this method will return the 
	*   parameter pointed by the publication : 
	*	For instance, you called one of the
	*	Setxxx method with the publication "...!Part.1!PubOfReal.1" of the parameter Real.1
	*	of Part.1
	*	=> This method will return "Part.1\Real.1" and not exactly what you set
	* - In other cases, it will return :
	*	# The proxy of the proxiable parameter you gave while calling SetGoalParameterOrItsProxy(), if one has been linked.
	*	# The non-proxiable parameter you gave while calling SetGoalParameterOrItsProxy() or SetGoalParameter().
	*/
	virtual CATICkeParm_var GetGoalParameter() const = 0;

	/**
	* Gets the goal publication or the goal parameter.
	* @return
	*   The goal publication or the goal parameter.
	* - If you called SetGoalParameter or SetGoalParameterOrItsProxy by giving
	*   a publication of parameter in argument, this method will return the 
	*   the publication.
	*   WARNING : in publication case (the CATICkeParm object returned by GetGoalParameterOrPub() is
	*   different from the one returned by GetGoalParameter()), 2 successive calls to this method 
	*   will not return the same CATICkeParm !!!
	* - In other cases, it will return :
	*	# The proxy of the proxiable parameter you gave while calling SetGoalParameterOrItsProxy(), if one has been linked.
	*	# The non-proxiable parameter you gave while calling SetGoalParameterOrItsProxy() or SetGoalParameter().
	*/
	virtual CATICkeParm_var GetGoalParameterOrPub() const = 0;


	/**
	* Sets the goal type.
	* @param iType
	* The goal type to set. Must be one of the types given by the "enum" described above.
	* @return
	* S_OK if succeeded, E_FAIL else.
	*/
	virtual HRESULT SetGoalType(CATIOptGoal::Type iType) = 0;
	/**
	* Gets the goal type.
	* @return
	* The goal type.
	*/
	virtual CATIOptGoal::Type GetGoalType() const = 0;


	/**
	* Sets the value of the target value parameter (when the goal type is TargetValue).
	* This parameter is always shown in f(x) and equation editors.
	* @param iParmValueMKS
	* The MKS value to set.
	* @return
	* S_OK if succeeded, E_FAIL else.
	*/
	virtual HRESULT SetTargetValue(double iParmValueMKS) = 0;
	/**
	* Gets the target value parameter.
	* @return
	* The target value parameter.
	*/
	virtual CATICkeParm_var GetTargetValue() const = 0;


	/**
 	* @nodoc
	* Use KnowledgeInterfaces CATIAllowUserInfo::SetComment method.  
	* Sets the comment.
	*/
	virtual HRESULT SetComment(const CATUnicodeString &comment) = 0;
	/**
	* @nodoc
	* Use KnowledgeInterfaces CATIAllowUserInfo::GetComment method.  
	* Gets the comment.
	*/
	virtual CATUnicodeString GetComment() const = 0;


	/**  
    * Sets the wanted precision (when the goal type is TargetValue).
	* This value tells the algorithm if they succeeded to find ojective.
    * (double in MKS unit).
	* @param iPrecision
	* The precision to set.
	* @return
	* S_OK if succeeded, E_FAIL else.
	*/
	virtual HRESULT SetPrecision(double iPrecision) = 0;
	/**
	* Gets the wanted precision.
	* @return
	* The precision.
	*/
	virtual double GetPrecision() const = 0;

	/**
	* Sets the Goal weight.
	* @param iWeight
	* The double weight to set.
	* @return
	* S_OK if succeeded, E_FAIL else.
	*/
	virtual HRESULT SetWeight(double iWeight) = 0;
	/**
	* Gets the Goal weight.
	* @param ioWeight
	* The current weight assigned to the goal. Default value is 1.0.
	* @return
	* S_OK if succeeded, E_FAIL else.
	*/
	virtual HRESULT GetWeight(double& ioWeight) const = 0;

	/**
    * @nodoc
	* Sets the priority.
	*/
	virtual HRESULT SetPriority(int priority) = 0;
	/**
    * @nodoc
	* Gets the priority.
	*/
	virtual int GetPriority() const = 0;


	/**
	* Get the low flag attribute value.
	* @param oHasLowValue
	* is set to 1 if the goal has a low bound and 0 else.
	* @return
	* S_OK if reading attribute succeeded, E_FAIL else.
	*/
	virtual HRESULT GetLowFlag(int& oHasLowValue) = 0;
	/**
	* Valuate the low flag attribute.
	* @param iHasLowValue
	* set it to 1 to indicate that the goal has a low bound and 0 else.
	* @return
	* S_OK if writing attribute succeeded, E_FAIL else.
	*/
	virtual HRESULT SetLowFlag(int iHasLowValue) = 0;

	/**
	* Get the high flag attribute value.
	* @param oHasLowValue
	* is set to 1 if the goal has a high bound and 0 else.
	* @return
	* S_OK if the reading of the attribute succeeded, E_FAIL else.
	*/
	virtual HRESULT GetHighFlag(int& oHasHighValue) = 0;
	/**
	* Valuate the high flag attribute.
	* @param iHasHighValue
	* set it to 1 to indicate that the goal has a high bound and 0 else.
	* @return
	* S_OK if succeeded, E_FAIL else.
	*/
	virtual HRESULT SetHighFlag(int iHasHighValue) = 0;

	/**
	* Get the parameter used to defined the low bound.
	* @param oLowParm
	* The low parameter, or NULL_var if the low flag is set to 0.
	* Notice that, if you changed the goal parameter (call to SetGoalParameter()) since
	* your last call to GetLowParm(), the low parameter may have change. Indeed, if
	* the type of the goal parameter has changed, the old low parameter has been replaced by
	* a new one (whose type is the same as the new goal parameter type).
	* @return
	* S_OK if oLowParm != NULL_var, E_FAIL else.
	*/
	virtual HRESULT GetLowParm(CATICkeParm_var& oLowParm) = 0;

	/**
	* Get the parameter used to defined the high bound.
	* @param oHighParm
	* The high parameter, or NULL_var if the high flag is set to 0.
	* Notice that, if you changed the goal parameter (call to SetGoalParameter()) since
	* your last call to GetHighParm(), the high parameter may have change. Indeed, if
	* the type of the goal parameter has changed, the old high parameter has been replaced by
	* a new one (whose type is the same as the new goal parameter type).
	* @return
	* S_OK if oHighParm != NULL_var, E_FAIL else.
	*/
	virtual HRESULT GetHighParm(CATICkeParm_var& oHighParm) = 0;

	/**
	* Get the value of the low parameter if the low flag is equal to 1.
	* @param oMksLowParmValue
	* the mks value of the low parameter if the low flag is equal to 1, 0.0 else.
	* @return
	* S_OK if the low flag is equal to 1, E_FAIL else.
	*/
	virtual HRESULT GetLowParmValue(double& oMksLowParmValue) = 0;
	/**
	* Get the value of the high parameter if the high flag is equal to 1.
	* @param oMksHighParmValue
	* the mks value of the high parameter if if the high flag is equal to 1, 0.0 else.
	* @return
	* S_OK if the high flag is equal to 1, E_FAIL else.
	*/
	virtual HRESULT GetHighParmValue(double& oMksHighParmValue) = 0;

	/**
	* If the low flag is equal to 1, this method sets the value of the low parameter.
	* @param iMksLowParmValue
	* The mks value to give to the low parameter.
	* @return
	* S_OK if low parameter is valuated, E_FAIL else.
	*/
	virtual HRESULT SetLowParmValue(double iMksLowParmValue) = 0;

	/**
	* If the high flag is equal to 1, this method sets the value of the high parameter.
	* @param iMksHighParmValue
	* The mks value to give to the high parameter.
	* @return
	* S_OK if high parameter is valuated, E_FAIL else.
	*/
	virtual HRESULT SetHighParmValue(double iMksHighParmValue) = 0;
};

//------------------------------------------------------------------

CATDeclareHandler( CATIOptGoal, CATBaseUnknown );

#endif
