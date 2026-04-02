#ifndef CATIVariableManagement_H
#define CATIVariableManagement_H
//
// COPYRIGHT Dassault Systemes 2001
//
/**
* @CAA2Level L1
* @CAA2Usage U3
*/
// module declaration
#include "CATOBMItfCPP.h"
// inherited from
#include "CATBaseUnknown.h"
// forward declarations
#include "CATVariableTCIO.h"
#include "CATBooleanDef.h"
#include "CATJHNTypeLib.h"
#include "CATCollec.h" 
class CATUnicodeString;
class CATIValue;
class CATIType;
// OLE iid
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATOBMItfCPP IID IID_CATIVariableManagement;
#else
extern "C" const IID IID_CATIVariableManagement ;
#endif

//------------------------------------------------------------------

/**
* Interface to manage the variables of behaviors and Dynamic Types (Tecnological Objects).<br>
*
*		The variables are defined by several properties :<br>
*		<ul><b>	<li>a name.</b><br>
*		<b>		<li>a quality </b>: Input, output or neutral as defined via @href TCIO.<br>
*		<b>		<li>a Knowledgeware Type describing the type of the variable</b>. In the following methods, it is refered as "VarType".<br>
*						ex : Volume, Length, Pointer, List, ...<br>
*		<b>		<li>a Knowledgeware Type for the pointed object by the variable</b>. In the following methods, it is refered as "PointedVarType"<br>
*			This type is necessary only for the list and pointer variables. In that case, you can specify the Knowledware type of the objects pointed by the Pointer or stored in the List. The default value is "ObjectType" and it can be overloaded by using @href #SetVariableType.<br>
*			For other variables, this notion is not used and "PointedVarType" should be set to NULL.
*		</ul>
*	<br>see @href CATIType
*/
class ExportedByCATOBMItfCPP CATIVariableManagement: public CATBaseUnknown
{
    CATDeclareInterface;
    
public:
    //
    /**
    * Rights defined on a variable.
    * Used to define how a parameter can be used through BKT.<br>
    *  @param <tt>NotSeen</tt> this parameter is not seen by the user.<br>
    *  @param <tt>ReadOnly</tt> the parameter will be seen but won't be modified, may be used as input of a relation.<br>
    *  @param <tt>ReadWrite</tt> Default value:the parameter can be modified, and used as output of a relation<br>
    */
    enum UserAccessMode  
    {
        NotSeen  	= 0,   
        ReadOnly    = 1,  
        ReadWrite	= 3         
    }; 
    
    /**    
    *   Returns the variables names matching given criterion.
    *   @param iQuality
    *      Quality of the required variables
    *   @param iVarType
    *      Knowledgeware type of the required variables.
    *   @param iPointedVarType
    *      if any, Knowledgeware type of the object pointed by the variable
    *   @param oVariables
    *       List of variables names.
    *   @return
    *       An HRESULT.
	*    <br><b>Legal values</b>:
	*    <dl>
	*      <dt>S_OK
	*      <dd>The method has been executed successfully.
	*      <dt>E_FAIL
	*      <dd>An error has been encountered during the execution of the method. 
	*    </dl>      
    */
	

    virtual HRESULT GetVariablesNames (const TCIO iQuality, const CATIType* iVarType, const CATIType* iPointedVarType, CATListOfCATUnicodeString** oVariables)=0;  
  
    /**    
    *   Retreives the characteristics of a variable of a given quality.
    *   @param iName
    *      name of the variable.
    *   @param iQuality
    *      Quality of the required variable.
    *   @param oVarType
    *       Knowledgeware type of the retreived variable.
	*	@param oPointedVarType
	*		if any, Knowledgeware type of the object pointed by the variable.
    *   @param oUserAccessMode
    *       User Access Mode retreived.
	*	@param oIsLocal
	*		<b>CATTrue</b> if the variable iName is local.<br>
	*       <b>CATFalse</b> if not.
   *   @return
    *       An HRESULT.
	*    <br><b>Legal values</b>:
	*    <dl>
	*      <dt>S_OK
	*      <dd>The method has been executed successfully.
	*      <dt>E_FAIL
	*      <dd>An error has been encountered during the execution of the method. 
	*    </dl>      
    */
    virtual HRESULT GetVariableInfos (const CATUnicodeString *iName, const TCIO iQuality,  
		CATIType** oVarType, CATIType** oPointedVarType, CATIVariableManagement::UserAccessMode &oUserAccessMode, CATBoolean &oIsLocal)=0;
        
    
    /**    
    *   Retreives the value of a variable of a given quality.
    *   @param iName
    *      Name of the variable.
    *   @param iQuality
    *      Quality of the required variable.
    *   @param oValue
    *      Value of the variable.    
   *   @return
    *       An HRESULT.
	*    <br><b>Legal values</b>:
	*    <dl>
	*      <dt>S_OK
	*      <dd>The method has been executed successfully.
	*      <dt>E_FAIL
	*      <dd>An error has been encountered during the execution of the method. 
	*    </dl>      
    */

    virtual HRESULT GetVariableValue (const CATUnicodeString *iName, const TCIO iQuality, 
        CATIValue** oValue)=0;
    
    /**    
    *   Valuates a variable of a given quality.
    *   @param iName
    *      Name of the variable.
    *   @param iQuality
    *      Quality of the variable.
    *   @param iValue
    *      New value for the variable.    
    *   @return
    *       An HRESULT.
	*    <br><b>Legal values</b>:
	*    <dl>
	*      <dt>S_OK
	*      <dd>The method has been executed successfully.
	*      <dt>E_FAIL
	*      <dd>An error has been encountered during the execution of the method. 
	*    </dl>      
    */
    virtual HRESULT SetVariableValue (const CATUnicodeString* iName, const TCIO iQuality, const CATIValue* iValue)=0;
    

     /**    
    *   Sets the expected knowledgeware type of the object pointed by a variable of a given quality.
	*	Relevant only for pointer and list variables. For other variables, the Knowledge type is set at creation
	*   and cannot be changed afterwards.
    *   @param iName
    *      Name of the variable.
    *   @param iQuality
    *      Quality of the variable.
    *   @param iType
    *      New knowledge type for the object pointed by the variable.   
   *   @return
    *       An HRESULT.
	*    <br><b>Legal values</b>:
	*    <dl>
	*      <dt>S_OK
	*      <dd>The method has been executed successfully.
	*      <dt>E_FAIL
	*      <dd>An error has been encountered during the execution of the method. 
	*    </dl>      
    */
    virtual HRESULT SetVariableType (const CATUnicodeString *iName, const TCIO iQuality, const CATIType * iType )=0;
    
    /**    
    *   Retreives the Knowledgeware type of the object pointed by a variable of a given quality.
    *   @param iName
    *      Name of the variable.
    *   @param iQuality
    *      Quality of the variable.
    *   @param oVarType
    *      Knowledgeware type of the retreived variable.  
    *   @param oPointedVarType
    *      if any, Knowledgeware type of the object pointed by the variable.
    *   @return
    *       An HRESULT.
	*    <br><b>Legal values</b>:
	*    <dl>
	*      <dt>S_OK
	*      <dd>The method has been executed successfully.
	*      <dt>E_FAIL
	*      <dd>An error has been encountered during the execution of the method. 
	*    </dl>      
    */
    virtual HRESULT GetVariableType (const CATUnicodeString* iName, const TCIO iQuality,
        CATIType** oVarType,CATIType** oPointedVarType )=0;    

	/**    
	*   Indicates if a variable of a given quality is local to this object.
	*   @param iName
	*      Name of the variable.
	*   @param iQuality
	*      Quality of the variable.
	*   @param oIsLocal
	*       <b>CATTrue</b> if the variable iName is local.<br>
	*       <b>CATFalse</b> if not.
	*   @return
    *       An HRESULT.
	*    <br><b>Legal values</b>:
	*    <dl>
	*      <dt>S_OK
	*      <dd>The method has been executed successfully.
	*      <dt>E_FAIL
	*      <dd>An error has been encountered during the execution of the method. 
	*    </dl>      
    */
    virtual HRESULT IsLocalVariable (const CATUnicodeString *iName, const TCIO iQuality, CATBoolean & oIsLocal)=0;  

    /**    
    *   Retreives the user acces mode of a variable of a given quality.
    *   @param iName
    *      Name of the variable.
    *   @param iQuality
    *      Quality of the variable.
    *   @param oUserAccessMode
    *       User Access Mode of the variable
   *   @return
    *       An HRESULT.
	*    <br><b>Legal values</b>:
	*    <dl>
	*      <dt>S_OK
	*      <dd>The method has been executed successfully.
	*      <dt>E_FAIL
	*      <dd>An error has been encountered during the execution of the method. 
	*    </dl>      
    */
    virtual HRESULT GetUserAccess (const CATUnicodeString *iName, const TCIO iQuality, CATIVariableManagement::UserAccessMode & oUserAccess )=0;
    /**    
    *   Retreives a variable of a given quality.
    *   @param iName
    *      Name of the variable.
    *   @param iQuality
    *      Quality of the variable.
    *   @param oVariable
    *      The variable of the given name and quality found on the behavior. It can be a literal, a list or a pointer.
    *   @return
     *       An HRESULT.
	*    <br><b>Legal values</b>:
	*    <dl>
	*      <dt>S_OK
	*      <dd>The method has been executed successfully.
	*      <dt>E_FAIL
	*      <dd>An error has been encountered during the execution of the method. 
	*    </dl>      
    */
    virtual HRESULT GetVariable ( const CATUnicodeString* iName, const TCIO iQuality, CATBaseUnknown** oVariable)=0; 
    /**    
    *   Creates a link between two variables.
    *   @param iName
    *      Name of the pointing variable. Must belong to this object.
    *   @param iQuality 
    *      Quality of the variable.
    *   @param iVariable
    *      Pointed object. It can be another variable (literal, list or pointer) or a feature.
    *   @return
    *       An HRESULT.
	*    <br><b>Legal values</b>:
	*    <dl>
	*      <dt>S_OK
	*      <dd>The method has been executed successfully.
	*      <dt>E_FAIL
	*      <dd>An error has been encountered during the execution of the method. 
	*    </dl>      
    */ 
    virtual HRESULT LinkVariables (const CATUnicodeString* iName, const TCIO iQuality, const CATBaseUnknown* iVariable)=0; 
    /**    
    *   Retrieves the variable or the feature pointed via the link.
    *   @param iName
    *      Name of the pointing variable. Must belong to this object.
    *   @param iQuality
    *      Quality of variable.
    *   @param oVariable
	*		The variable or the feature linked with the one, of name iName,  belonging to this behavior.
    *   @return
     *       An HRESULT.
	*    <br><b>Legal values</b>:
	*    <dl>
	*      <dt>S_OK
	*      <dd>The method has been executed successfully.
	*      <dt>E_FAIL
	*      <dd>An error has been encountered during the execution of the method. 
	*    </dl>      
    */
    virtual HRESULT GetLinkedVariable (const CATUnicodeString* iName, const TCIO iQuality, CATBaseUnknown** oVariable)=0;
    /**    
    *   Unsets a variable.
    *   @param iName
    *      Name of the variable to unset.
    *   @param iQuality 
    *      Quality of the variable.    
   *   @return
    *       An HRESULT.
	*    <br><b>Legal values</b>:
	*    <dl>
	*      <dt>S_OK
	*      <dd>The method has been executed successfully.
	*      <dt>E_FAIL
	*      <dd>An error has been encountered during the execution of the method. 
	*    </dl>      
    */
    virtual HRESULT Unset (const CATUnicodeString* iName, const TCIO iQuality)=0; 
    
    /**    
    *   Retreives the name and quality of a variable.
    *   @param iVariable
    *      Pointer to a variable
    *   @param oName 
    *      Name of the variable
    *   @param oQuality
    *      Quality of the variable    
    *   @return
    *       An HRESULT.
	*    <br><b>Legal values</b>:
	*    <dl>
	*      <dt>S_OK
	*      <dd>The method has been executed successfully.
	*      <dt>E_FAIL
	*      <dd>An error has been encountered during the execution of the method. 
	*    </dl>      
    */
    virtual HRESULT GetVariableAccess (CATBaseUnknown* iVariable, CATUnicodeString& oName, TCIO& oQuality )=0 ;
    
    
};
CATDeclareHandler(CATIVariableManagement, CATBaseUnknown);
//------------------------------------------------------------------

#endif
