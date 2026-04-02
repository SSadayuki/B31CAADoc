#ifndef CATIPersistentSubElement_H
#define CATIPersistentSubElement_H

// COPYRIGHT Dassault Systemes 2002
/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIPersistentSubElement;
#else
extern "C" const IID IID_CATIPersistentSubElement ;
#endif

//------------------------------------------------------------------

#include "CATListOfCATUnicodeString.h"
#include "CATICkeRelationForwards.h"

class CATICkeParm;
class CATIVisProperties;
class CATISpecObject;
class CATICkeParmFactory;

 /** 
  * 
  *  @deprecated V5R23 CATMmrApplicativeAttributes
  *  Interface allowing the manipulation of Applicative Attributes.<br>
  *  This interface provides a convenient mechanism for adding, setting, retrieving and removing Applicative Attributes (i.e. basic, user-defined and persistent parameters) on feature sub-elements.<br>
  *  This interface can be retrieved directly from a @href CATIBRepAccess.<br>
  * <br>
  *  Note:<br>
  *       <ul>              
  *         <li>An Applicative Attribute consists of a unique name, and an associated value, which can only belong to one of the following types: a @href CATUnicodeString , an <tt>int</tt>, or a <tt>double</tt>.</li>
  *         <li>The only valid selection objects for retrieving a <tt>CATIPersistentSubElement</tt> interface are the ones corresponding to: a face (@href CATIRSur ), an edge (@href CATIWireREdge , @href CATIBorderREdge ) or a vertex (@href CATIBorderFVertex ).</li>
  *       </ul>
  *       <br>
  *  <br>
  *  @see CATIBRepAccess, CATICkeParmFactory, CATIMmiBRepAttributeSynchronize
  */

class ExportedByMecModItfCPP CATIPersistentSubElement: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    // Methods used to set, get and remove Applicative Attributes.
    //------------------------------------------------------------
     
   /**  
    *  Retrieves the names of all the attributes.<br>
    *  <br>
    *  <b>Role</b>: This method retrieves the names of all the attributes corresponding to the current <tt>CATIBRepAccess</tt>.<br>          
    *  <br>          
    *  Note:<br>
    *       <ul>          
    *         <li>The name of an attribute is unique for a given selection object. It can therefore be considered as the identifier of the attribute.</li>
    *         <li>If the name of an attribute is already defined in a parent of the <tt>CATIPersistentSubElement</tt>, then the corresponding value is the one of the child, i.e. the value on the latest design-level.</li>
    *         <li>If you need to retrieve all attributes as well as their respective values, use @href #GetAttributes for faster performance.</li>         
    *       </ul>
    *       <br>
    *  <br>
    *  @param   oAttributNameList
    *         The names of the attributes.<br>
    *         This is a list containing the names of the attributes, each one being stored as a <b><tt>CATUnicodeString</tt></b>.<br>   
    *  <br>          
    *  @return 
    *         <ul>
    *           <li>S_OK if the names of the attributes have been properly found.</li>
    *           <li>E_FAIL no attribute names could be retrieved.</li>
    *           <li>E_UNEXPECTED if the current selecting object is invalid .</li>    
    *         </ul>
    */  
    virtual HRESULT GetListAttributesName(CATListOfCATUnicodeString** oAttributNameList) = 0;
         
   /**  
    *  Adds a new attribute.<br>
    *  <br>
    *  <b>Role</b>: This method creates an attribute given a name and a value.<br>          
    *  <br>          
    *  Note:<br>
    *       <ul>              
    *         <li>Although the attribute will be visible from the current selection object, the user does not have any control on the design-level on which the attribute will be effectively added. Indeed, the attribute will be added to the last feature where the element corresponding to the current <tt>CATIBRepAccess</tt> had the same connexity, for stability reasons.</li>
    *         <li>It is not possible to add an attribute if an attribute with the same name has been added previously.</li>
    *       </ul>
    *       <br>
    *  <br>
    *  @param   iName
    *         The name of the attribute.<br>
    *         This is the name of the attribute, stored as a <b><tt>CATUnicodeString</tt></b>.<br>
    *         Note:<br>
    *         <ul>
    *           <li>This name is unique, as it is used as the identifier of the attribute.</li>
    *         </ul>
    *         <br>
    *  <br>
    *  @param   iAttributeValue
    *         The value of the attribute.<br>
    *         This is the value of the attribute, which can be either a <tt>CATUnicodeString</tt>, an <tt>int</tt>, or a <tt>double</tt>, stored as a <b><tt>CATICkeParm_var</tt></b>.<br>
    *         Note:<br>
    *         <ul>
    *           <li>A convenient way of creating the value of an attribute is by using the <b><tt>CATICkeParmFactory</tt></b> interface.</li>    
    *         </ul>
    *         <br>
    *  <br>          
    *  @return 
    *         <ul>
    *           <li>S_OK if the attribute has been succesfully added.</li>
    *           <li>E_FAIL if the attribute could not be added. In general, this happens when an attribute with the same name already exists. If this is the case, the value of the attribute can be modified using @href #SetAttribute .</li>
    *           <li>E_UNEXPECTED if the current selecting object is invalid .</li>
    *           <li>E_INVALIDARG if <tt>iName</tt> is an empty string.</li>
    *           <li>E_INVALIDARG if <tt>iAttributeValue</tt> is NULL, or if the its type is neither a <tt>CATParmDictionary::StringType</tt>, a <tt>CATParmDictionary::IntegerType</tt>, nor a <tt>CATParmDictionary::RealType</tt>.</li>
    *         </ul>
    *         <br>
    *         Note:<br>
    *         <ul>
    *           <li>If the method fails for any of the above reasons, the attribute will not be added.</li>
    *         </ul>
    *         <br>
    */  
    virtual HRESULT AddAttribute(const CATUnicodeString& iName, const CATICkeParm* iAttributeValue) = 0;
         
   /**  
    *  Retrieves the value of an attribute.<br>
    *  <br>
    *  <b>Role</b>: This method retrieves the value of an attribute, given its name.<br>          
    *  <br>          
    *  Note:<br>
    *       <ul>              
    *         <li>The retrieved value is the latest added one as seen from the current design-level.</li>    
    *       </ul>
    *       <br>
    *  <br>
    *  @param   iName
    *         The name of the attribute.<br>
    *         This is the name of the attribute, stored as a <b><tt>CATUnicodeString</tt></b>.<br>
    *         Note:<br>
    *         <ul>
    *           <li>This name is unique, as it is used as the identifier of the attribute.</li>
    *         </ul>
    *         <br>
    *  <br>
    *  @param   oAttributeValue
    *         The retrieved value of the attribute.<br>
    *         This is the value of the attribute, which can be either a <tt>CATUnicodeString</tt>, an <tt>int</tt>, or a <tt>double</tt>, stored as a <b><tt>CATICkeParm_var</tt></b>.<br>
    *         <br>
    *  <br>          
    *  @return 
    *         <ul>
    *           <li>S_OK if the value of the attribute has been succesfully retrieved.</li>
    *           <li>E_FAIL if the value of the attribute could not be retrieved. This can happen if the name of the attribute does not exist.</li>
    *           <li>E_UNEXPECTED if the current selecting object is invalid.</li>
    *           <li>E_UNEXPECTED if the retrieved value is not a valid data type. See @href #SetAttribute and @href #AddAttribute for valid data types.</li>
    *           <li>E_INVALIDARG if <tt>iName</tt> is an empty string.</li>
    *           <li>E_INVALIDARG if <tt>oAttributeValue</tt> is NULL or if <tt>*oAttributeValue</tt> is not NULL.</li>
    *         </ul>
    *         <br>
    */  
    virtual HRESULT GetAttributeValue(const CATUnicodeString& iName, CATICkeParm** oAttributeValue) = 0;

   /**  
    *  Sets a new value to an existing attribute.<br>
    *  <br>
    *  <b>Role</b>: This method modifies the value of an existing attribute, given the existing attribute's name and the new value.<br>          
    *  <br>          
    *  
    *  @param   iName
    *         The name of the attribute.<br>
    *         This is the name of the attribute, stored as a <b><tt>CATUnicodeString</tt></b>.<br>
    *  <br>
    *  @param   iAttributeValue
    *         The value of the attribute.<br>
    *         This is the value of the attribute, which can be either a <tt>CATUnicodeString</tt>, an <tt>int</tt>, or a <tt>double</tt>, stored as a <b><tt>CATICkeParm_var</tt></b>.<br>
    *         Note:<br>
    *         <ul>
    *           <li>A convenient way of creating the value of an attribute is by using the <b><tt>CATICkeParmFactory</tt></b> interface.    *           <li>A convenient way of creating the value of an attribute is by using the <b><tt>CATICkeParmFactory</tt></b> interface.</li>
    *         </ul>
    *         <br>
    *  <br>          
    *  @return 
    *         <ul>
    *           <li>S_OK if the attribute has been succesfully set.</li>
    *           <li>E_FAIL if the attribute could not be set.</li>
    *           <li>E_UNEXPECTED if the current selecting object is invalid .</li>
    *           <li>E_INVALIDARG if <tt>iName</tt> is an empty string.</li>
    *           <li>E_INVALIDARG if <tt>iAttributeValue</tt> is NULL, or if the its type is neither a <tt>CATParmDictionary::StringType</tt>, a <tt>CATParmDictionary::IntegerType</tt>, nor a <tt>CATParmDictionary::RealType</tt>.</li>
    *         </ul>
    *         <br>
    *         Note:<br>
    *         <ul>
    *           <li>If the method fails for any of the above reasons, the attribute will not be modified.</li>
    *         </ul>
    *         <br>
    */  
    virtual HRESULT SetAttributeValue(const CATUnicodeString& iName, const CATICkeParm* iAttributeValue) = 0;          
        
   /**  
    *  Removes an attribute.<br>
    *  <br>
    *  <b>Role</b>: This method removes an attribute given its name.<br>          
    *  <br>          
    *  Note:<br>
    *       <ul>                 
    *         <li>If an attribute has been defined at many different design levels, only one will be removed.</li>
    *         <li>Attributes transferred to a <tt>CATIMmiBRepAttributeSynchronize</tt> after a synchronisation (see @href CATIMmiBRepAttributeSynchronize#SynchronizeBRepAttributes ) cannot be removed. Remove them or change their value before synchronisation if needed.</li>
    *       </ul>
    *       <br>
    *  <br>
    *  @param   iName
    *         The name of the attribute to remove.<br>
    *         <br>
    *  <br>
    *  @return 
    *         <ul>
    *           <li>S_OK if all the specified attribute has been properly removed.</li>
    *           <li>E_FAIL if the attribute could not be properly removed.</li>    
    *           <li>S_FALSE if the attribute has not been removed because it was part of an import.</li>
    *           <li>E_UNEXPECTED if the current selecting object is invalid .</li>
    *           <li>E_INVALIDARG if <tt>iName</tt> is an empty string.</li>
    *         </ul>
    */
    virtual HRESULT RemoveAttribute(const CATUnicodeString& iName) = 0;
        
   /**  
    *  Retrieves the names of all attributes which rely on a specific feature.<br>
    *  <br>
    *  <b>Role</b>: This method retrieves the names of all the attributes on a specific feature.<br>          
    *  <br> 
    *  Note:<br>
    *       <ul>          
    *         <li>If you need to retrieve all direct attributes as well as their respective values, use @href #GetDirectAttributes for faster performance.</li>         
    *       </ul>
    *       <br>
    *  
    *  @param   iMechanicalFeature
    *         The feature used in order to retrieve the attributes.<br>
    *         This can be seen as the design-level where the attributes are being looked for.<br>
    *  <br>
    *  @param   oAttributNameList
    *         The names of the attributes.<br>
    *         This is a list containing the names of the attributes, each one being stored as a <b><tt>CATUnicodeString</tt></b>.<br>
    *         Note:<br>
    *         <ul>
    *           <li>This list has the same size as <tt>oCkeAttrValList</tt> .</li>
    *         </ul>
    *         <br>
    *  <br>
    *  @return 
    *         <ul>
    *           <li>S_OK if the names and the values of the attributes have been properly found.</li>
    *           <li>E_FAIL no attribute names could be retrieved.</li>
    *           <li>E_UNEXPECTED if the current selecting object is invalid .</li>
    *           <li>E_INVALIDARG if <tt>iMechanicalFeature</tt> is not a valid ancestor for the <tt>CATIPersistentSubElement</tt>.</li>           
    *           <li>E_INVALIDARG if <tt>oAttrNameList</tt> is NULL (invalid list) or if the list is not empty. In that case, the list will be emptied before exiting.</li>              
    *         </ul>
    */
    virtual HRESULT GetListOfDirectAttributesName(const CATISpecObject *iMechanicalFeature , CATListOfCATUnicodeString** oAttributNameList) = 0;

      
    // Method used to access the visual properties corresponding to the current selection object.
    // ------------------------------------------------------------------------------------------
    
   /**  
    *  Provides access to the visual properties of the current sub-element.<br>
    *  <br>
    *  <b>Role</b>: This method retrieves a @href CATIVisProperties interface from the current sub-element.<br>          
    *  <br>              
    * @param   oVisPropertiesAccess
    *         The retrieved <tt>CATIVisProperties</tt> interface.<br>
    *  <br>
    *  @return 
    *         <ul>
    *           <li>S_OK if the <tt>CATIVisProperties</tt> interface has been sucessfully retrieved.</li>
    *           <li>E_FAIL if the retrieval of <tt>CATIVisProperties</tt> interface failed.</li>    
    *           <li>E_UNEXPECTED if the current selecting object is invalid .</li>
    *           <li>E_INVALIDARG if <tt>oVisPropertiesAccess</tt> is not NULL.</li>    
    *         </ul>
    */
    virtual HRESULT GetVisPropertiesAccess(CATIVisProperties* &oVisPropertiesAccess) = 0;


    // Methods similar to the ones above, but using lists as parameters for faster performance.
    //-----------------------------------------------------------------------------------------     

   /**  
    *  Retrieves the names and the respective values of all attributes.<br>
    *  <br>
    *  <b>Role</b>: This method retrieves the names of all the attributes, as well as their respective values.<br>          
    *  <br>          
    *  Note:<br>
    *       <ul>          
    *         <li>The value of attribute <tt>i</tt> in <tt>oAttrNameList</tt> is stored as element <tt>i</tt> in <tt>oCkeAttrValList</tt>.</li>
    *         <li>If the name of an attribute is already defined in a parent of the <tt>CATIPersistentSubElement</tt>, then the corresponding value is the one of the child, i.e. the value on the latest design-level.</li>
    *       </ul>
    *       <br>
    *  <br>
    *  @param   oAttrNameList
    *         The names of the attributes.<br>
    *         This is a list containing the names of the attributes, each one being stored as a <b><tt>CATUnicodeString</tt></b>.<br>
    *         Note:<br>
    *         <ul>
    *           <li>This list has the same size as <tt>oCkeAttrValList</tt> .</li>
    *         </ul>
    *         <br>
    *  <br>
    *  @param   oCkeAttrValList
    *         The values of the attributes.<br>
    *         Contrary to <tt>oAttrNameList</tt>This is a <b>pointer</b> to a list containing the values of the attributes. Each value is stored as a <b><tt>CATICkeParm_var</tt></b>.<br>
    *         Note:<br>
    *         <ul>
    *           <li>The list <tt>oCkeAttrValList</tt> is actually a <b>pointer</b> to <tt>CATLISTV(CATBaseUnknown_var)</tt> ( see <tt> CATICkeRelationForwards.h </tt> for more details ). Because of the presence of a pointer in this definition, some extra care must be taken when calling this method.</li>
    *           <li>This list has the same size as <tt>oAttrNameList</tt>.</li>
    *         </ul>
    *         <br>
    *  <br>          
    *  @return 
    *         <ul>
    *           <li>S_OK if the names and the values of the attributes have been properly found.</li>
    *           <li>E_FAIL if <tt>oAttrNameList</tt> and <tt>oCkeAttrValList</tt> do not have the same size. In that case, both lists will be emptied before exiting.</li>
    *           <li>E_UNEXPECTED if the current selecting object is invalid .</li>
    *           <li>E_INVALIDARG if <tt>oAttrNameList</tt> is NULL (invalid list) or if the list is not empty. In that case, the list will be emptied before exiting.</li>
    *           <li>E_INVALIDARG if <tt>oCkeAttrValList</tt> is NULL (invalid list) or if the list is not empty. In that case, the list will be emptied before exiting.</li>    
    *         </ul>
    */  
    virtual HRESULT GetAttributes( CATListOfCATUnicodeString** oAttrNameList, CATCkeListOfParm * oCkeAttrValList ) = 0;
    

   /**  
    *  Retrieves the names and the respective values of all attributes which rely on a specific feature.<br>
    *  <br>
    *  <b>Role</b>: This method retrieves the names of all the attributes on a specific feature, as well as their respective values.<br>          
    *  <br>          
    *  Note:<br>
    *       <ul>          
    *         <li>The value of attribute <tt>i</tt> in <tt>oAttrNameList</tt> is stored as element <tt>i</tt> in <tt>oCkeAttrValList</tt>.</li>
    *       </ul>
    *       <br>
    *  <br>
    *  @param   iMechanicalFeature
    *         The feature used in order to retrieve the attributes.<br>
    *         This can be seen as the design-level where the attributes are being looked for.<br>
    *  <br>
    *  @param   oAttrNameList
    *         The names of the attributes.<br>
    *         This is a list containing the names of the attributes, each one being stored as a <b><tt>CATUnicodeString</tt></b>.<br>
    *         Note:<br>
    *         <ul>
    *           <li>This list has the same size as <tt>oCkeAttrValList</tt> .</li>
    *         </ul>
    *         <br>
    *  <br>
    *  @param   oCkeAttrValList
    *         The values of the attributes.<br>
    *         This is a <b>pointer</b> to a list containing the values of the attributes, each one being stored as a <b><tt>CATICkeParm_var</tt></b>.<br>
    *         Note:<br>
    *         <ul>
    *           <li>The list <tt>oCkeAttrValList</tt> is actually a <b>pointer</b> to <tt>CATLISTV(CATBaseUnknown_var)</tt> ( see <tt> CATICkeRelationForwards.h </tt> for more details ). Because of the presence of a pointer in this definition, some extra care must be taken when calling this method.</li>
    *           <li>This list has the same size as <tt>oAttrNameList</tt> .</li>
    *         </ul>
    *         <br>
    *  <br>          
    *  @return 
    *         <ul>
    *           <li>S_OK if the names and the values of the attributes have been properly found.</li>
    *           <li>E_FAIL if <tt>oAttrNameList</tt> and <tt>oCkeAttrValList</tt> do not have the same size. In that case, both lists will be emptied before exiting.</li>
    *           <li>E_UNEXPECTED if the current selecting object is invalid .</li>
    *           <li>E_INVALIDARG if <tt>iMechanicalFeature</tt> is not a valid ancestor for the <tt>CATIPersistentSubElement</tt>.</li>           
    *           <li>E_INVALIDARG if <tt>oAttrNameList</tt> is NULL (invalid list) or if the list is not empty. In that case, the list will be emptied before exiting.</li>
    *           <li>E_INVALIDARG if <tt>oCkeAttrValList</tt> is NULL (invalid list) or if the list is not empty. In that case, the list will be emptied before exiting.</li>    
    *         </ul>
    */  
    virtual HRESULT GetDirectAttributes(const CATISpecObject *iMechanicalFeature, CATListOfCATUnicodeString** oAttrNameList, CATCkeListOfParm * oCkeAttrValList ) = 0;


   /**  
    *  Sets the values of every attribute in a list.<br>
    *  <br>
    *  <b>Role</b>: This method sets each attribute of a list to a given value.<br>          
    *  <br>          
    *  Note:<br>
    *       <ul>          
    *         <li>Attribute <tt>i</tt> in <tt>iAttrNameList</tt> will be set to the value corresponding to element <tt>i</tt> in <tt>iCkeAttrValList</tt>.</li>
    *         <li>If the name of the attribute does not already exist, it is created and its value is set.</li>
    *       </ul>
    *       <br>
    *  <br>
    *  @param   iAttrNameList
    *         The names of the attributes.<br>
    *         This is a list containing the names of the attributes, each one being stored as a <b><tt>CATUnicodeString</tt></b>.<br>
    *         Note:<br>
    *         <ul>
    *           <li>This list has the same size as <tt>iCkeAttrValList</tt> .</li>
    *         </ul>
    *         <br>
    *  <br>
    *  @param   iCkeAttrValList
    *         The values of the attributes.<br>
    *         This is a <b>pointer</b> to a list containing the values of the attributes, each one being stored as a <b><tt>CATICkeParm_var</tt></b>.<br>
    *         Note:<br>
    *         <ul>
    *           <li>The list <tt>iCkeAttrValList</tt> is actually a <b>pointer</b> to <tt>CATLISTV(CATBaseUnknown_var)</tt> ( see <tt>  CATICkeRelationForwards.h </tt> for more details ). Because of the presence of a pointer in this definition, some extra care must be taken when calling this method.</li>
    *           <li>This list has the same size as <tt>iAttrNameList</tt> .</li>
    *         </ul>
    *         <br>
    *  <br>          
    *  @return 
    *         <ul>
    *           <li>S_OK if the values of the attributes have been properly set.</li>
    *           <li>E_FAIL if the value of an attribute belonging to <tt>iAttrNameList</tt> could not be retrieved, set or added.</li>
    *           <li>E_UNEXPECTED if the current selecting object is invalid .</li>
    *           <li>E_INVALIDARG if <tt>iAttrNameList</tt> is NULL (invalid list) or if the list is empty.</li>
    *           <li>E_INVALIDARG if <tt>iCkeAttrValList</tt> is NULL (invalid list) or if the list is empty.</li>
    *           <li>E_INVALIDARG if <tt>iAttrNameList</tt> and <tt>iCkeAttrValList</tt> do not have the same size.</li>    
    *         </ul>
    *         <br>
    *         Note:<br>
    *         <ul>
    *           <li>If the method fails for any of the above reasons, none of the attributes in <tt>iAttrNameList</tt> will be set or added.</li>
    *         </ul>
    *         <br>
    */  
    virtual HRESULT SetAttributes(const CATListOfCATUnicodeString* iAttrNameList, const CATCkeListOfParm iCkeAttrValList ) = 0;
    

   /**  
    *  Removes multiple attributes at once.<br>
    *  <br>
    *  <b>Role</b>: This method removes each attribute of a list from a given design level.<br>          
    *  <br>          
    *  Note:<br>
    *       <ul>                 
    *         <li>As with the <tt>RemoveAttribute</tt> method, if an attribute has been defined at many different design levels, only one will be removed.</li>
    *         <li>As with the <tt>RemoveAttribute</tt> method, attributes transferred to a <tt>CATIMmiBRepAttributeSynchronize</tt> after a synchronisation 
    *             (see @href CATIMmiBRepAttributeSynchronize#SynchronizeBRepAttributes ) cannot be removed. 
    *             Remove them or change their value before synchronisation if needed.</li>
    *       </ul>
    *       <br>
    *  <br>
    *  @param   iAttrNameList
    *         The names of the attributes to remove.<br>
    *         This is a list containing the names of the attributes, each one being stored as a <b><tt>CATUnicodeString</tt></b>.<br>
    *         Note:<br>
    *         <ul>
    *           <li>When set to NULL, all attributes will be removed at once from the specified design-level.</li>
    *         </ul>
    * <br>
    *         <br>
    *  @param   iMechanicalFeature
    *         The feature where the attributes will be removed from.<br>
    *         This can be seen as the design-level, where the attributes are actually stored.<br>
    *         Note:<br>
    *         <ul>
    *           <li>When set to NULL, the attributes will be removed from the current design-level.</li>
    *         </ul>
    *  <br>
    *  @return 
    *         <ul>
    *           <li>S_OK if all the specified attributes have been properly removed.</li>
    *           <li>E_FAIL if one or more attributes in <tt>iAttrNameList</tt> have not been properly removed.</li>    
    *           <li>S_FALSE if one or more attributes in <tt>iAttrNameList</tt> have not been removed because they were part of an import.</li>
    *           <li>E_UNEXPECTED if the current selecting object is invalid .</li>
    *           <li>E_INVALIDARG if <tt>iAttrNameList</tt> is not NULL and empty.</li>
    *           <li>E_INVALIDARG if the specified <tt>iMechanicalFeature</tt> is invalid.</li>
    *           <li>E_INVALIDARG if <tt>iAttrNameList</tt> and <tt>iMechanicalFeature</tt> are both not NULL at the same time.</li>    
    *         </ul>
    */
    virtual HRESULT RemoveAttributes(const CATListOfCATUnicodeString* iAttrNameList = NULL, const CATISpecObject *iMechanicalFeature = NULL ) = 0;

  
    // No constructors or destructors on this pure virtual base class
    // --------------------------------------------------------------

};

//------------------------------------------------------------------
CATDeclareHandler(CATIPersistentSubElement, CATBaseUnknown);
#endif
