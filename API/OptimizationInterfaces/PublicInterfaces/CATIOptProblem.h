// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
//
// CATIOptProblem.h
// Define the CATIOptProblem interface
//
//===================================================================
/** 
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#ifndef CATIOptProblem_H
#define CATIOptProblem_H

#include "OptimizationItfCPP.h"
#include "CATBaseUnknown.h"

#include "CATLISTV_CATBaseUnknown.h"
#include "CATUnicodeString.h"

class CATIOptGoal_var;
class CATIOptConstraint_var;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByOptimizationItfCPP IID IID_CATIOptProblem ;
#else
extern "C" const IID IID_CATIOptProblem ;
#endif

//------------------------------------------------------------------

/**
* Interface to encapsulate the data access to an optimization problem definition.
*/
class ExportedByOptimizationItfCPP CATIOptProblem: public CATBaseUnknown
{
	CATDeclareInterface;
	
public:
	
	/**
	* Returns the list of goals defined for the problem optimization definition.
	* This list mustn't be destroyed.
	*/
	virtual CATLISTV(CATBaseUnknown_var)* GetGoals() = 0;
	/**
	* Adds a goal.
	* @param goal : the goal to be added.
	*/
	virtual void AddGoal(const CATIOptGoal_var &goal) = 0;
	/**
	* Removes a goal.
	* @param goal : the pointer on the goal to remove.
	* @param index : the index of the goal to remove.
	*/
	virtual void RemoveGoal(const CATIOptGoal_var &goal, int index) = 0;


	/**
	* Returns the list of constraints defined for the problem optimization definition.
	* This list mustn't be destroyed.
	*/
	virtual CATLISTV(CATBaseUnknown_var)* GetConstraints() = 0;
	/**
	* Adds a constraint.
	* @param constraint : the constraint to be added.
	*/
	virtual void AddConstraint(const CATIOptConstraint_var &constraint) = 0;
	/**
	* Removes a constraint.
	* @param constraint : the pointer on the constraint to remove.
	* @param index : the index of the constraint to remove.
	*/
	virtual void RemoveConstraint(const CATIOptConstraint_var &constraint, int index) = 0;


	/**
	* @nodoc Use KnowledgeInterfaces CATIAllowUserInfo::SetComment method.  
	* Gets the comment of the problem definition
	*/
	virtual CATUnicodeString GetComment() const = 0;
	/**
	* @nodoc Use KnowledgeInterfaces CATIAllowUserInfo::GetComment method.  
	* Sets the comment of the problem definition
	*/
	virtual HRESULT SetComment(const CATUnicodeString &comment) = 0;

};

CATDeclareHandler( CATIOptProblem, CATBaseUnknown );

#endif
