// COPYRIGHT Dassault Systemes 2006
//===================================================================

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */
//
// CATIGSMAttributes.h
// Define the CATIGSMAttributes interface
//
//===================================================================
//
// Usage notes:
//  Interface to manage attribute settings of type CATISpecObject on feature derivating from GSMGeom
//
//===================================================================
#ifndef CATIGSMAttributes_H
#define CATIGSMAttributes_H

#include "CATGitInterfacesExportedBy.h"

#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATISpecAttrKey.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID IID_CATIGSMAttributes;
#else
extern "C" const IID IID_CATIGSMAttributes ;
#endif


class CATISpecObject_var;
class CATListValCATBaseUnknown_var;

/**
* Interface to manage attribute settings of type CATISpecObject on feature derivating from GSMGeom.
* <br><b>Role</b>:  Handle the different rules to set up attributes on GSMGeom late Type Features.
* <p><b> Following inputs used can be:</b> 
* <ul>
* <li>BRep Features  </li>
* <li>Contextual features   </li>
* <li>Literal features   </li>
* <li>Non already aggregated features  </li>
* </ul>
* </p>
* 
* <p><b> Workflow : Setting attribute strategy  Setting / Remove / Replace :</b>   
* <pre>
* - First ( Setting / Remove / Replace) : 
*    --> Identify if attribute was previously setted 
*    If No  ?  Continue 
*    If Yes ?  "Remove previous Input" :   Perform acurate modifications,handling on the previous object if needed 
* - Second (Setting / Replace) :
*    "Add an input" taking into account different context of the input 
* </pre>
* </p> 
* 
* <p> <b>Algorithm</b>  
* <br> When adding a CATISpecObject attributes as input of a GSMGeom type feature, this interface will check the input 
* and perform data model management that make feature implementation consistant with GSMGeom generic behaviors:
* <pre> 
* Check Inputs : 
* - All input feature should be aggregated somewhere in data model (at list under a  tk_component attributes type) 
* -> If Input feature is  not already aggregated previously,  the current interface aggregates  it under current feature 
* -> If Input feature is  a contextual feature and identified as to be re-aggregate: aggregate it under current feature 
* 
* GSMGeom generic behaviors  : 
* 1/  Display/no display  of aggregate features in graph and in 3D (default implemetation of CATINavigateObject, CATIVisuChildren)
*  -> BRep feature are not seen neither in graph nor in 3D 
*  -> Contextual feature are displayed in Graph and in 3D can be selected and reused in other feature 
*  -> Aggregated feature on the fly are not seen neither in graph nor in 3D, considered as private to the current feature 
* 2/ Management the change of an input if the attribute was previously seted, and replace by new ones
*  -> Old BRep are removed 
*  -> Contextual input are extracted  and reaggregate under the current tool 
*  -> Private feature deleted , if not used elsewhere 
* </pre> 
* <br>"Add An Input": 
* <pre>
*   Case BREP Feature :  
*        BRep feature can be used  as input for GSMGeom derivate type features 
*        BRep feature are automatic generated feature by selection agent CATFeatureImportAgent when a subelement is selected
*        BRep feature are "exclusive" inputs  for the current feature , 
*        - They cannot be re-used elsewhere
*        - They are aggregated to the current feature , not seen in 3D nor in Graph 
*        BREP feature are aggregated to the feature using  GSMGeom private attribut name "Component" name (type tk_list of tk_component)  
*   Case Contextual feature : 
*        Contextual feature are aggregated under feature list , Feature list is the standard attribut for all 
*        mechanical feature and is handle by the CATIDescendant interface 
*        Contextual feature are input identified  as "IsFtrToAggregate" by CATIMmiContextualManager Interfaces when there a setted 
*        At attribute setting, the input feature aggregation is modified : He is re-aggregate under current feature on the feature list 
*   Case of non-already aggregated 
*        It can occured that input feature is not already aggregated 
*        To avoid to reference in "key" a feature non aggregated , and is automatically aggregated when set 
*        using GSMGeom private attribut name "Component" name (type tk_list of tk_component)  
*        Note : Typically this case is reserved to CAA specific design 
*        CAA command may need to have internal feature aggregated not necessary seen in 3D and/or in Graph
*            (Display in graph and 3D is managed by CATINavigateObject and CATIVisuChildren  respectively ) 
* </pre>
* <br>"Remove previous Input":  
* <pre>
*   Case BREP Feature : 
*        Is not and cannot be re- used, thus it is deleted and remove freom "Component" private attribute 
*   Case Contextual feature : 
*        Contextual feature are aggregated under feature list, but can be used in other features  
*        Contextual feature are automatically re-aggregated in the tool of current feature
*        It is re-aggregated tool at a position just before current feature 
*   Case of non aggregated  
*        Either it is already used by another feature :
*             Need to keep it for associativity ,
*             it is then reaggregated under the current tool at a position just before current
*        Or is not used : 
*             it is removed from "component" attribute, and is deleted 
* </pre>
* </p>
* @example
*  <pre> 
*  CATISpecObject_var spCurrent = ...; 
*  CATISpecAttrAccess_var spCurrentAttrAccess = spCurrent;
*  CATISpecAttrKey_var pInputSpecObjectKey  = NULL_var ;
*  if (!!spCurrentAttrAccess) {
*     pInputSpecObjectKey = spCurrentAttrAccess ->GetAttrKey("MyKeyName");
*     if (!!pInputSpecObjectKey) {
*        CATIGSMAttributes* pGsmSpecAttrMngt  = NULL;
*         rc = spCurrent->QueryInterface(IID_CATIGSMAttributes,(void**) &amp;pGsmSpecAttrMngt );
*         if (NULL!=  pGsmSpecAttrMngt) { 
*           rc = pGsmSpecAttrMngt -> SetAttrSpecObject(pInputSurfaceSpecAttrKey,ispCurveRef);
*           pGsmSpecAttrMngt -> Release () ; pGsmSpecAttrMngt=NULL: 
*         } 
*      }
*   }
* </pre>
* @see CATINavigateObject,CATIVisuChildren,CATIMmiContextualManager,CATIDescendants
*/
class ExportedByCATGitInterfaces CATIGSMAttributes: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

 //----------------------------------------------------------------
 // Sets or Gets Attribute value 
 //----------------------------------------------------------------
 /** 
  * Sets an object on a given "key"  attribute.
  * @param ikey
  *  Attribut key 
  * @param ispSpecObj 
  *  Object  
  * @param ispSpecObj 
  *  index   of the object (default =0 : insert at first position , or for no list type attribute) 
  * @see CATIAttrSpecAccess 
  */ 
 virtual HRESULT SetAttrSpecObject(const CATISpecAttrKey * ikey, const CATISpecObject_var & ispSpecObj, int iIndex = 0) = 0;
 /** 
  * Gets an object on a "key" attribute. 
  * @param ikey
  *  Attribut key 
  * @param ospSpecObj 
  *  Object  
  * @param iIndex 
  *  index   of the object (default =0 : insert at first position , or for no list type attribute) 
  */ 
 virtual HRESULT GetAttrSpecObject(const CATISpecAttrKey * ikey, CATISpecObject_var & ospSpecObj, int iIndex = 0) = 0;

 //----------------------------------------------------------------
 // Attribute Remove 
 //----------------------------------------------------------------
 /** 
  * Removes all valuated objects of a "key" attribute. 
  * @param ikey
  *  Attribut key 
  */ 
 virtual HRESULT RemoveAttrAll(const CATISpecAttrKey * ikey) = 0;
 /** 
  * Removes object  of a "key" attribute at a given position.  
  * @param ikey
  *  Attribut key 
  * @param iIndex 
  *  index  of the object (index =0 : for non list type attribute) 
  */ 
 virtual HRESULT RemoveAttrPosition(const CATISpecAttrKey * ikey, int iIndex) = 0;

 /** 
  * Removes object of a "key" attribute. 
  * @param ikey
  *  Attribut key 
  * @param ispSpecObj 
  *  Object  
  */ 
 virtual HRESULT RemoveAttrSpecObject(const CATISpecAttrKey * ikey, const CATISpecObject_var & ispSpecObj) = 0;

 /** 
  * Unsets  object of a "key" attribute. 
  * @param ikey
  *  Attribut key 
  */ 
 virtual HRESULT UnsetAttrValue(const CATISpecAttrKey * ikey) = 0;

 //----------------------------------------------------------------
 // Attributes of type List management 
 //----------------------------------------------------------------
 
 /** 
  * Gets list Size for a "key" attribute. 
  * @param ikey
  *  Attribut key 
  * @param  oSize  
  *    list Size 
  */ 
 virtual HRESULT GetAttrListSize(const CATISpecAttrKey * ikey,int & oSize) = 0;

 /** 
  * Gets object at  a position for a "key" attribute. 
  * @param ikey
  *  Attribut key 
  * @param ispSpecObj 
  *  Object  
  * @param oIndex 
  *    position 
  */ 
 virtual HRESULT GetAttrPosition(const CATISpecAttrKey * ikey, const CATISpecObject_var & ispSpecObj, int & oIndex ) = 0;
 /** 
  * Inserts before a position an object for a "key" attribute. 
  * @param ikey
  *  Attribut key 
  * @param ispSpecObj 
  *  Object  
  * @param iPos   
  *    last position before inserting  
  */ 
 virtual HRESULT InsertAttrBeforePos(const CATISpecAttrKey * ikey, const CATISpecObject_var & ispSpecObj, int iPos) = 0;
 /** 
  * Inserts after a position an object for a "key" attribute. 
  * @param ikey
  *  Attribut key 
  * @param ispSpecObj 
  *  Object  
  * @param iPos   
  *    insert after position
  */ 
 virtual HRESULT InsertAttrAfterPos(const CATISpecAttrKey * ikey, const CATISpecObject_var & ispSpecObj, int iPos) = 0;
 /** 
  * Replaces at a position an object for a "key" attribute. 
  * @param ikey
  *  Attribut key 
  * @param ispSpecObj 
  *  Object  
  * @param iPos   
  *    replace at position
  */ 
 virtual HRESULT ReplaceAttrPos(const CATISpecAttrKey * ikey, const CATISpecObject_var & ispSpecObj, int iPos) = 0;
 /** 
  * Changes position of an object for a "key" attribute.
  * @param ikey
  *  Attribut key 
  * @param ispSpecObj 
  *  Object  
  * @param iNewPos   
  *    new position 
  */ 
 virtual HRESULT ChangeAttrPosition(const CATISpecAttrKey * ikey, const CATISpecObject_var & ispSpecObj, int iNewPos) = 0;



  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};
CATDeclareHandler(CATIGSMAttributes, CATBaseUnknown);
//------------------------------------------------------------------

#endif
