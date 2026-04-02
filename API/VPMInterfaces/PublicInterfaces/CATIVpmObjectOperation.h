#ifndef CATIVpmObjectOperation_H
#define CATIVpmObjectOperation_H
//  COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U6
 */
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"
#include "GUIDVPMInterfaces.h"
//
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmObjectOperation ;
#else
extern "C" const IID IID_CATIVpmObjectOperation ;
#endif
/**
 * A Graph operation.
 * An operation is a transition from one state of the lifecycle graph to another.
 */
class ExportedByGUIDVPMInterfaces CATIVpmObjectOperation: public CATBaseUnknown 
{
	//
	CATDeclareInterface;
	//
	public:
	/**
	 * Run the user Condition related to a terminal.
	 * @param iConditionName
	 * 	name of the condition to evaluate
	 * 	@param iGraphPredicatList
	 * 	list of graph predicate used to evaluate the condition
	 * 	@param iObject
	 * 	the object whose lifecycle is controlled by the graph, the condition 
	 * 	evaluation will be done relative to this object
	 *	@param iSimulateMode
	 * iSimulateMode  = 0  ->  the system could be modify by the evaluating the
	 * 							condition
	 * iSimulateMode  > 0  ->  the simulate mode is activated the system 
	 * 							will not be modified by evaluating the condition 

	 *
	 * 
	 * @return
	 * An HRESULT value.
	 *   <br><b>Legal values</b>:
	 *   <dl>
	 *     <dt>S_OK</dt>
	 *     <dd>the condition is true</dd>
	 *     <dt>S_FALSE</dt>
	 *     <dd>the condition is false</dd>
	 *     <dt>E_FAIL</dt>
	 *     <dd>Unknown internal error</dd>
	 *   </dl>
	 */ 
	virtual HRESULT  RunUserCondition 
		( const CATUnicodeString&              iConditionName     ,
		  const CATLISTV(CATBaseUnknown_var)&  iGraphPredicatList ,
		  const CATBaseUnknown_var&            iObject            ,
		  const long&                          iSimulateMode  ) const = 0;


	/**
	* Runs the user command related to a terminal.
	*
	*@param iOperationName
	*	name of the operation to run.
	*@param iCommandName
	*	name of the command to run.
	*	@param iCommandPredicateList
	*	list of command predicate
	*	@param iCommandParameters
	*	list of command parameters
	*	@param iConditionName
	*	name of the condition
	*	@param iConditionPredicatList
	*	list of predicate for the condition
	*	@param iObject
	* 	the object whose lifecycle is controlled by the graph, the command 
	* 	evaluation will be done relative to this object
	*
	* @param iConditionPredicatList 
	* 	 If a condition is related by the command,
	*                          a list of associated predicats is given 
	*
	*
	*                          
	*	@param iSimulateMode
	* iSimulateMode  = 0  ->  the system could be modify by the evaluating the
	* 							condition
	* iSimulateMode  > 0  ->  the simulate mode is activated the system 
	* 							will not be modified by evaluating the condition 	
	*
	*
	*  @return 
	* An HRESULT value.
	*   <br><b>Legal values</b>:
	*   <dl>
	*     <dt>S_OK</dt>
	*     <dd>the condition is true</dd>
	*     <dt>S_FALSE</dt>
	*     <dd>the condition is false</dd>
	*     <dt>E_FAIL</dt>
	*     <dd>Unknown internal error</dd>
	*   </dl>	
	*/
		virtual HRESULT  RunUserCommand 
		( const CATUnicodeString&      iOperationName                ,
		  const CATUnicodeString&      iCommandName                  ,
		  const CATLISTV(CATBaseUnknown_var)& iCommandPredicatList   ,
		  const CATUnicodeString&      iCommandParameters            ,
		  const CATUnicodeString&      iConditionName                ,
		  const CATLISTV(CATBaseUnknown_var)& iConditionPredicatList ,
		  const CATBaseUnknown_var&    iObject                       ,
		  const long&                  iSimulateMode     ) const = 0;
	//
};
//-----------------------------------------------------------------
// Handler definition 
//-----------------------------------------------------------------
CATDeclareHandler(CATIVpmObjectOperation, CATBaseUnknown);
//
#endif
