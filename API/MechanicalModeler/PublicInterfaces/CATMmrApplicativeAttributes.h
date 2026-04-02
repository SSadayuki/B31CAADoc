#ifndef  CATMmrApplicativeAttributes_H  
#define  CATMmrApplicativeAttributes_H

// COPYRIGHT Dassault Systemes 2005
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include  "CATBaseUnknown.h"
#include  "CATMechanicalModeler.h"

#include "CATListOfCATUnicodeString.h"
#include "CATICkeRelationForwards.h"
#include "CATListOfInt.h"
#include "CATIBRepAccess.h"

   
/**
* Class to manage applicative attributes and colors on BRep features.
* This class offers services for setting and retrieving applicative attributes and colors on BRep features. @href CATIPersistentSubElement methods are still available but those new methods are more efficient for setting and getting colors and applicative attributes on faces of large models because they use list of faces in input.
*/
class  ExportedByCATMechanicalModeler CATMmrApplicativeAttributes
{  
  public:  
		

		/** 
		* Sets lists of applicative attributes on a list of faces.
		*
		* <br><b>Role</b>: this method sets lists of applicative attributes on a list of faces.
		* <br>You can set different attributes on different faces: the face <tt>i</tt> will have the attribute name list <tt>i</tt> and attribute value list <tt>i</tt>.
		* @param iFacesList [in]
		*   The list of faces attributes and colors will be set on.
    *		A face must appear only once in the <tt>iFacesList</tt>, otherwise the stability of applicative attributes is not guaranted. 
    *		No check is done inside this method to verify a face doesn't appear twice or more, you have to do it before calling this method.	
		* @param iAttributNameList [in]
		*   The name of the attributes.
    *   <br> This is an <b>array</b> of <b>pointers</b> to lists containing  the names of the attributes.
    *   <br><b>Legal values</b>:
    *       No check is done to test this array has the same size as <tt>iFacesList</tt>. However it's a necessary condition.
		*       <tt>i</tt> attribute name list has the same size as <tt>i</tt> attribute value list.
		* @param iCkeAttrValList [in]
		*   The value of the attributes.
    *   <br>This is an <b>array</b> of <b>pointers</b> to list containing values of the attributes.
    *   <br><b>Legal values</b>:
    *       No check is done to test this array has the same size as <tt>iFacesList</tt>. However it's a necessary condition.
		*       <tt>i</tt> attribute value list has the same size as <tt>i</tt> attribute name list.
		* @param oFailedFacesIndex [out]
		*    The index list of faces on which setting attributes failed.
		*
		* @return
    *   <dl>
    *   <dt><tt>S_OK</tt>          <dd>All attributes or all colors have successfully been set.
    *   <dt><tt>S_FALSE</tt>       <dd>One of the attribute list have not been properly set. If none have been set on any face, returns <tt>E_FAIL</tt>.
    *   <dt><tt>E_INVALIDARG</tt>  <dd><tt>iFacesList</tt> is NULL or empty.
    *   <dt><tt>E_INVALIDARG</tt>  <dd>One of <tt>iAttrNameList</tt> and <tt>iCkeAttrValList</tt> is NULL while the other is not NULL.
    *   <dt><tt>E_INVALIDARG</tt>  <dd>For the <tt>i</tt> face, the <tt>i</tt> attribute name list and the <tt>i</tt> attribute value list have different sizes.
		*   <dt><tt>E_FAIL</tt>        <dd>No attribute has been set.
		*   </dl>
    */

		static HRESULT SetAttributesOnFaces(CATLISTP(CATIBRepAccess) & iFacesList, CATListOfCATUnicodeString ** iAttributNameList, CATCkeListOfParm * iCkeAttrValList,CATListOfInt & oFailedFacesIndex);
   
    /** 
		* Sets lists of applicative attributes on a list of faces.
		*
		* <br><b>Role</b>: this method sets lists of applicative attributes on a list of faces.
		* <br>You can set different attributes on different faces: the face <tt>i</tt> will have the attribute name list <tt>i</tt> and attribute value list <tt>i</tt>.
		* @param iFacesList [in]
		*   The list of faces attributes and colors will be set on.
    *		A face must appear only once in the <tt>iFacesList</tt>, otherwise the stability of applicative attributes is not guaranted. 
    *		No check is done inside this method to verify a face doesn't appear twice or more, you have to do it before calling this method.	
		* @param iAttributNameList [in]
		*   The name of the attributes.
    *   <br> This is an <b>array</b> of <b>pointers</b> to lists containing  the names of the attributes.
    *   <br><b>Legal values</b>:
    *       No check is done to test this array has the same size as <tt>iFacesList</tt>. However it's a necessary condition.
		*       <tt>i</tt> attribute name list has the same size as <tt>i</tt> attribute value list.
		* @param iCkeAttrValList [in]
		*   The value of the attributes.
    *   <br>This is an <b>array</b> of <b>pointers</b> to list containing values of the attributes.
    *   <br><b>Legal values</b>:
    *       No check is done to test this array has the same size as <tt>iFacesList</tt>. However it's a necessary condition.
		*       <tt>i</tt> attribute value list has the same size as <tt>i</tt> attribute name list.
		* @param oFailedFacesIndex [out]
		*    The index list of faces on which setting attributes failed.
		*
		* @return
    *   <dl>
    *   <dt><tt>S_OK</tt>          <dd>All attributes or all colors have successfully been set.
    *   <dt><tt>S_FALSE</tt>       <dd>One of the attribute list have not been properly set. If none have been set on any face, returns <tt>E_FAIL</tt>.
    *   <dt><tt>E_INVALIDARG</tt>  <dd><tt>iFacesList</tt> is NULL or empty.
    *   <dt><tt>E_INVALIDARG</tt>  <dd>One of <tt>iAttrNameList</tt> and <tt>iCkeAttrValList</tt> is NULL while the other is not NULL.
    *   <dt><tt>E_INVALIDARG</tt>  <dd>For the <tt>i</tt> face, the <tt>i</tt> attribute name list and the <tt>i</tt> attribute value list have different sizes.
		*   <dt><tt>E_FAIL</tt>        <dd>No attribute has been set.
		*   </dl>
    */

		static HRESULT SetAttributesOnFaces(CATLISTV(CATBaseUnknown_var) & iFacesList, CATListOfCATUnicodeString ** iAttributNameList, CATCkeListOfParm * iCkeAttrValList,CATListOfInt & oFailedFacesIndex);

    /** 
		* Sets lists of applicative attributes on a list of subelements.
		*
		* <br><b>Role</b>: this method sets lists of applicative attributes on a list of subelements.
		* <br>You can set different attributes on different subelement: the subelement <tt>i</tt> will have the attribute name list <tt>i</tt> and attribute value list <tt>i</tt>.
		* @param iSubelementList [in]
		*   The list of subelements attributes  will be set on.
    *		A subelement must appear only once in the <tt>iSubelementList</tt>, otherwise the stability of applicative attributes is not guaranted. 
    *		No check is done inside this method to verify a subelement doesn't appear twice or more, you have to do it before calling this method.	
    *   SubElement can be Faces, Wire Edges, Border Edges and Border Vertex.
		* @param iAttributNameList [in]
		*   The name of the attributes.
    *   <br> This is an <b>array</b> of <b>pointers</b> to lists containing  the names of the attributes.
    *   <br><b>Legal values</b>:
    *       No check is done to test this array has the same size as <tt>iSubelementList</tt>. However it's a necessary condition.
		*       <tt>i</tt> attribute name list has the same size as <tt>i</tt> attribute value list.
		* @param iCkeAttrValList [in]
		*   The value of the attributes.
    *   <br>This is an <b>array</b> of <b>pointers</b> to list containing values of the attributes.
    *   <br><b>Legal values</b>:
    *       No check is done to test this array has the same size as <tt>iSubelementList</tt>. However it's a necessary condition.
		*       <tt>i</tt> attribute value list has the same size as <tt>i</tt> attribute name list.
		* @param oFailedSubElemIndex [out]
		*    The index list of subelements on which setting attributes failed.
		*
		* @return
    *   <dl>
    *   <dt><tt>S_OK</tt>          <dd>All attributes or all colors have successfully been set.
    *   <dt><tt>S_FALSE</tt>       <dd>One of the attribute list have not been properly set. If none have been set on any subelement, returns <tt>E_FAIL</tt>.
    *   <dt><tt>E_INVALIDARG</tt>  <dd><tt>iSubelementList</tt> is NULL or empty.
    *   <dt><tt>E_INVALIDARG</tt>  <dd>One of <tt>iAttrNameList</tt> and <tt>iCkeAttrValList</tt> is NULL while the other is not NULL.
    *   <dt><tt>E_INVALIDARG</tt>  <dd>For the <tt>i</tt> subelement, the <tt>i</tt> attribute name list and the <tt>i</tt> attribute value list have different sizes.
		*   <dt><tt>E_FAIL</tt>        <dd>No attribute has been set.
		*   </dl>
    */

		static HRESULT SetAttributesOnSubElements(CATLISTV(CATBaseUnknown_var) & iSubelementList, CATListOfCATUnicodeString ** iAttributNameList, CATCkeListOfParm * iCkeAttrValList,CATListOfInt & oFailedSubElemIndex);

    
   
    /** 
		* Sets lists of colors on a list of faces.
		*
		* <br><b>Role</b>: this method sets colors on a list of faces.
		* <br>You can set different color on different faces: the face <tt>i</tt> will have the red/green/blue component <tt>i</tt>
		* @param iFacesList [in]
		*   The list of faces attributes and colors will be set on.
    *		A face must appear only once in the <tt>iFacesList</tt>, otherwise the stability of colors is not guaranted. 
    *		No check is done inside this method to verify a face doesn't appear twice or more, you have to do it before calling this method.	
		* @param iRedList [in]
		*   The Red color component list.
    *   <br><b>Legal values</b>:
    *       This list should have the same size as <tt>iFacesList</tt>, <tt>iGreenList</tt> and <tt>iBlueList</tt>.
   	* @param iGreenList [in]
		*   The Green color component list.
    *   <br><b>Legal values</b>:
    *       This list has the same size as <tt>iFacesList</tt>, <tt>iRedList</tt> and <tt>iBlueList</tt>.
    * @param iBlueList [in]
		*   The Blue color component list.
    *   <br><b>Legal values</b>:
    *       This list has the same size as <tt>iFacesList</tt>, <tt>iRedList</tt> and <tt>iGreenList</tt>.
   	* @param oFailedFacesIndex [out]
		*    The index list of faces on which setting color component failed.
		*
		* @return
    *   <dl>
    *   <dt><tt>S_OK</tt>          <dd>All attributes or all colors have successfully been set.
    *   <dt><tt>S_FALSE</tt>       <dd>One of the color list have not been properly set. If none have been set on any face, returns <tt>E_FAIL</tt>.
    *   <dt><tt>E_INVALIDARG</tt>  <dd><tt>iFacesList</tt> is NULL or empty.
    *   <dt><tt>E_INVALIDARG</tt>  <dd><tt>iFacesList</tt>, <tt>iRedList</tt>, <tt>iGreenList</tt> and <tt>iBlueList</tt> have different size.
		*   <dt><tt>E_FAIL</tt>        <dd>No color has been set.
		*   </dl>
    */
		static HRESULT SetColorsOnFaces(CATLISTP(CATIBRepAccess) & iFacesList, CATListOfInt & iRedList, CATListOfInt & iGreenList, CATListOfInt & iBlueList,CATListOfInt & oFailedFacesIndex);
		
    /** 
		* Sets lists of colors on a list of faces.
		*
		* <br><b>Role</b>: this method sets colors on a list of faces.
		* <br>You can set different color on different faces: the face <tt>i</tt> will have the red/green/blue component <tt>i</tt>
		* @param iFacesList [in]
		*   The list of faces attributes and colors will be set on.
    *		A face must appear only once in the <tt>iFacesList</tt>, otherwise the stability of colors is not guaranted. 
    *		No check is done inside this method to verify a face doesn't appear twice or more, you have to do it before calling this method.	
		* @param iRedList [in]
		*   The Red color component list.
    *   <br><b>Legal values</b>:
    *       This list should have the same size as <tt>iFacesList</tt>, <tt>iGreenList</tt> and <tt>iBlueList</tt>.
   	* @param iGreenList [in]
		*   The Green color component list.
    *   <br><b>Legal values</b>:
    *       This list has the same size as <tt>iFacesList</tt>, <tt>iRedList</tt> and <tt>iBlueList</tt>.
    * @param iBlueList [in]
		*   The Blue color component list.
    *   <br><b>Legal values</b>:
    *       This list has the same size as <tt>iFacesList</tt>, <tt>iRedList</tt> and <tt>iGreenList</tt>.
   	* @param oFailedFacesIndex [out]
		*    The index list of faces on which setting color component failed.
		*
		* @return
    *   <dl>
    *   <dt><tt>S_OK</tt>          <dd>All attributes or all colors have successfully been set.
    *   <dt><tt>S_FALSE</tt>       <dd>One of the color list have not been properly set. If none have been set on any face, returns <tt>E_FAIL</tt>.
    *   <dt><tt>E_INVALIDARG</tt>  <dd><tt>iFacesList</tt> is NULL or empty.
    *   <dt><tt>E_INVALIDARG</tt>  <dd><tt>iFacesList</tt>, <tt>iRedList</tt>, <tt>iGreenList</tt> and <tt>iBlueList</tt> have different size.
		*   <dt><tt>E_FAIL</tt>        <dd>No color has been set.
		*   </dl>
    */
		static HRESULT SetColorsOnFaces(CATLISTV(CATBaseUnknown_var) & iFacesList, CATListOfInt & iRedList, CATListOfInt & iGreenList, CATListOfInt & iBlueList,CATListOfInt & oFailedFacesIndex);
		

		/** 
		* Retrieves colors of a list of faces.
		*
		* <br><b>Role</b>: this method returns RGB component values of a list of faces in three different lists.
		* the three ouput lists are cleaned inside this method.
		* Excepting E_INVALIDARG returned value, the three list will always have the same size. 
		* If a color couldn't be successfully retrieved on face <tt>i</tt>, the red/green/blue component list have for this face a component value equal to -1.
		* @param iFacesList [in]
    * The list of faces colors will be researched on.
		* @param oRedList [out]
		*   The list of Red Colors.
		* @param oGreenList [out]
		*   The list of Green Colors.
		* @param oBlueList [out]
		*   The list of Blue Colors.
		*
		* @return
    *   <dl>
    *   <dt><tt>S_OK</tt>          <dd>The colors have been properly retrieved on every faces.
    *   <dt><tt>S_FALSE</tt>       <dd>A color hasn't be successfully retrieved on one or more face. -1 is set at position <tt>i</tt> in the three list to indicate the color couldn't be retrieved for face <tt>i</tt>. If none have been retrieved on any face, returns <tt>E_FAIL</tt>.
    *   <dt><tt>E_INVALIDARG</tt>  <dd><tt>iFacesList</tt> is NULL or empty.
		*   <dt><tt>E_FAIL</tt>        <dd>No color can be retrieved.
		*   </dl>
		*/
		static HRESULT GetColorsOnFaces(CATLISTP(CATIBRepAccess) & iFacesList, CATListOfInt & oRedList, CATListOfInt & oGreenList, CATListOfInt & oBlueList);
  
    /** 
		* Retrieves colors of a list of faces.
		*
		* <br><b>Role</b>: this method returns RGB component values of a list of faces in three different lists.
		* the three ouput lists are cleaned inside this method.
		* Excepting E_INVALIDARG returned value, the three list will always have the same size. 
		* If a color couldn't be successfully retrieved on face <tt>i</tt>, the red/green/blue component list have for this face a component value equal to -1.
		* @param iFacesList [in]
    * The list of faces colors will be researched on.
		* @param oRedList [out]
		*   The list of Red Colors.
		* @param oGreenList [out]
		*   The list of Green Colors.
		* @param oBlueList [out]
		*   The list of Blue Colors.
		*
		* @return
    *   <dl>
    *   <dt><tt>S_OK</tt>          <dd>The colors have been properly retrieved on every faces.
    *   <dt><tt>S_FALSE</tt>       <dd>A color hasn't be successfully retrieved on one or more face. -1 is set at position <tt>i</tt> in the three list to indicate the color couldn't be retrieved for face <tt>i</tt>. If none have been retrieved on any face, returns <tt>E_FAIL</tt>.
    *   <dt><tt>E_INVALIDARG</tt>  <dd><tt>iFacesList</tt> is NULL or empty.
		*   <dt><tt>E_FAIL</tt>        <dd>No color can be retrieved.
		*   </dl>
		*/
		static HRESULT GetColorsOnFaces(CATLISTV(CATBaseUnknown_var) & iFacesList, CATListOfInt & oRedList, CATListOfInt & oGreenList, CATListOfInt & oBlueList);

    /** 
		* Retrieves colors and opacity of a list of faces.
		*
		* <br><b>Role</b>: this method returns RGB component values and opacity value of a list of faces in four different lists.
		* the four ouput lists are cleaned inside this method.
		* Excepting E_INVALIDARG returned value, the four list will always have the same size. 
		* If a color couldn't be successfully retrieved on face <tt>i</tt>, the red/green/blue component list have for this face a component value equal to -1.
		* @param iFacesList [in]
    * The list of faces colors will be researched on.
		* @param oRedList [out]
		*   The list of Red Colors.
		* @param oGreenList [out]
		*   The list of Green Colors.
		* @param oBlueList [out]
		*   The list of Blue Colors.
		* @param oOpacityList [out]
		*   The list of Opacity.
		*
		* @return
    *   <dl>
    *   <dt><tt>S_OK</tt>          <dd>The colors and the opacity have been properly retrieved on every faces.
    *   <dt><tt>S_FALSE</tt>       <dd>A color or an opacity hasn't be successfully retrieved on one or more face. -1 is set at position <tt>i</tt> in the three list to indicate the color couldn't be retrieved for face <tt>i</tt>. If none have been retrieved on any face, returns <tt>E_FAIL</tt>.
    *   <dt><tt>E_INVALIDARG</tt>  <dd><tt>iFacesList</tt> is NULL or empty.
		*   <dt><tt>E_FAIL</tt>        <dd>No color can be retrieved.
		*   </dl>
		*/
    static HRESULT GetColorsAndOpacityOnFaces(CATLISTV(CATBaseUnknown_var) & iFacesList, CATListOfInt & oRedList, CATListOfInt & oGreenList, CATListOfInt & oBlueList, CATListOfInt & oOpacityList);
		
    /** 
		* Retrieves applicative attributes of a list of faces.
		*
		* <br><b>Role</b>: this method returns an array of list of names and values corresponding to the face list. No performance enhancement with <tt>CATIPersistentSubElement</tt>. The following code is a template to use this method correctly.
		* <pre>
		* HRESULT rc = E_FAIL;
		* int NbBreps= iFacesList.Size(); //list of BRepAccess
		* CATListOfCATUnicodeString * oAttributNameList = new CATListOfCATUnicodeString[NbBreps];
    * CATCkeListOfParm  oCkeAttrValList = new CATListValCATBaseUnknown_var[NbBreps];
    * rc = CATMmrApplicativeAttributes::GetAttributesOnFaces(iFacesList, oAttributNameList, oCkeAttrValList );
    * if (SUCCEEDED(rc))
    * {
    *  CATListOfCATUnicodeString templiststring;
    *  CATListValCATBaseUnknown_var tempCke;
    *  for (int k=1;k<=NbBreps;k++)
    *  {
    *   //retrieve a list a position k (arrays start at position zero).
    *   templiststring =  (oAttributNameList)[k-1];
    *   tempCke = (oCkeAttrValList)[k-1];
    *   //......
    *  }
    * }
    * //deallocation :
    * for  (int i=0; i < NbBreps;i++)
    * {
    *  oAttributNameList[i].RemoveAll();
    *  oCkeAttrValList[i].RemoveAll();
    * }
    * delete [] oAttributNameList;	oAttributNameList = NULL;
    * delete [] oCkeAttrValList;	oCkeAttrValList = NULL;
	  * </pre>
		* @param iFacesList [in]
    * The list of faces colors will be researched on.
		* @param oAttributNameList [out]
		*   The list of attribute names list.
		* @param oCkeAttrValList [out]
		*   The list of attribute values list.
		*
		* @return
    *   <dl>
    *   <dt><tt>S_OK</tt>          <dd>Applicative attributes have been properly retrieved on every faces.
    *   <dt><tt>S_FALSE</tt>       <dd>Applicative attributes have not be successfully retrieved on one or more face. If none have been retrieved on any face, returns <tt>E_FAIL</tt>.
    *   <dt><tt>E_INVALIDARG</tt>  <dd><tt>iFacesList</tt> is NULL or empty.
		*   <dt><tt>E_INVALIDARG</tt>  <dd><tt>oAttributNameList</tt> or <tt>oAttributNameList</tt> are NULL.
		*   <dt><tt>E_FAIL</tt>        <dd>No attributes can be retrieved.
		*   </dl>
		*/
		
		static HRESULT GetAttributesOnFaces(CATLISTP(CATIBRepAccess) & iFacesList, CATListOfCATUnicodeString * oAttributNameList, CATCkeListOfParm oCkeAttrValList);

    /** 
		* Retrieves applicative attributes of a list of faces.
		*
		* <br><b>Role</b>: this method returns an array of list of names and values corresponding to the face list. No performance enhancement with <tt>CATIPersistentSubElement</tt>. The following code is a template to use this method correctly.
		* <pre>
		* HRESULT rc = E_FAIL;
		* int NbBreps= iFacesList.Size(); //list of BRepAccess
		* CATListOfCATUnicodeString * oAttributNameList = new CATListOfCATUnicodeString[NbBreps];
    * CATCkeListOfParm  oCkeAttrValList = new CATListValCATBaseUnknown_var[NbBreps];
    * rc = CATMmrApplicativeAttributes::GetAttributesOnFaces(iFacesList, oAttributNameList, oCkeAttrValList );
    * if (SUCCEEDED(rc))
    * {
    *  CATListOfCATUnicodeString templiststring;
    *  CATListValCATBaseUnknown_var tempCke;
    *  for (int k=1;k<=NbBreps;k++)
    *  {
    *   //retrieve a list a position k (arrays start at position zero).
    *   templiststring =  (oAttributNameList)[k-1];
    *   tempCke = (oCkeAttrValList)[k-1];
    *   //......
    *  }
    * }
    * //deallocation :
    * for  (int i=0; i < NbBreps;i++)
    * {
    *  oAttributNameList[i].RemoveAll();
    *  oCkeAttrValList[i].RemoveAll();
    * }
    * delete [] oAttributNameList;	oAttributNameList = NULL;
    * delete [] oCkeAttrValList;	oCkeAttrValList = NULL;
	  * </pre>
		* @param iFacesList [in]
    * The list of faces colors will be researched on.
		* @param oAttributNameList [out]
		*   The list of attribute names list.
		* @param oCkeAttrValList [out]
		*   The list of attribute values list.
		*
		* @return
    *   <dl>
    *   <dt><tt>S_OK</tt>          <dd>Applicative attributes have been properly retrieved on every faces.
    *   <dt><tt>S_FALSE</tt>       <dd>Applicative attributes have not be successfully retrieved on one or more face. If none have been retrieved on any face, returns <tt>E_FAIL</tt>.
    *   <dt><tt>E_INVALIDARG</tt>  <dd><tt>iFacesList</tt> is NULL or empty.
		*   <dt><tt>E_INVALIDARG</tt>  <dd><tt>oAttributNameList</tt> or <tt>oAttributNameList</tt> are NULL.
		*   <dt><tt>E_FAIL</tt>        <dd>No attributes can be retrieved.
		*   </dl>
		*/
		
		static HRESULT GetAttributesOnFaces(CATLISTV(CATBaseUnknown_var) & iFacesList, CATListOfCATUnicodeString * oAttributNameList, CATCkeListOfParm oCkeAttrValList);

        /** 
		* Retrieves applicative attributes of a list of faces.
		*
		* <br><b>Role</b>: this method returns an array of list of names and values corresponding to the subelement list. No performance enhancement with <tt>CATIPersistentSubElement</tt>. The following code is a template to use this method correctly.
		* <pre>
		* HRESULT rc = E_FAIL;
		* int NbSublement= iSubelementList.Size(); //list of BRepAccess
		* CATListOfCATUnicodeString * oAttributNameList = new CATListOfCATUnicodeString[NbBreps];
    * CATCkeListOfParm  oCkeAttrValList = new CATListValCATBaseUnknown_var[NbBreps];
    * rc = CATMmrApplicativeAttributes::GetAttributesSubElements(iSubelementList, oAttributNameList, oCkeAttrValList );
    * if (SUCCEEDED(rc))
    * {
    *  CATListOfCATUnicodeString templiststring;
    *  CATListValCATBaseUnknown_var tempCke;
    *  for (int k=1;k<=NbSublement;k++)
    *  {
    *   //retrieve a list a position k (arrays start at position zero).
    *   templiststring =  (oAttributNameList)[k-1];
    *   tempCke = (oCkeAttrValList)[k-1];
    *   //......
    *  }
    * }
    * //deallocation :
    * for  (int i=0; i < NbSublement;i++)
    * {
    *  oAttributNameList[i].RemoveAll();
    *  oCkeAttrValList[i].RemoveAll();
    * }
    * delete [] oAttributNameList;	oAttributNameList = NULL;
    * delete [] oCkeAttrValList;	oCkeAttrValList = NULL;
	  * </pre>
		* @param iSubelementList [in]
    * The list of subelements applicative attributes will be researched on.
    * SubElement can be Faces, Wire Edges, Border Edges and Border Vertex.
		* @param oAttributNameList [out]
		*   The list of attribute names list.
		* @param oCkeAttrValList [out]
		*   The list of attribute values list.
		*
		* @return
    *   <dl>
    *   <dt><tt>S_OK</tt>          <dd>Applicative attributes have been properly retrieved on every subelements.
    *   <dt><tt>S_FALSE</tt>       <dd>Applicative attributes have not be successfully retrieved on one or more subelement. If none have been retrieved on any subelement, returns <tt>E_FAIL</tt>.
    *   <dt><tt>E_INVALIDARG</tt>  <dd><tt>iSubelementList</tt> is NULL or empty.
		*   <dt><tt>E_INVALIDARG</tt>  <dd><tt>oAttributNameList</tt> or <tt>oAttributNameList</tt> are NULL.
		*   <dt><tt>E_FAIL</tt>        <dd>No attributes can be retrieved.
		*   </dl>
		*/
		
		static HRESULT GetAttributesOnSubElements(CATLISTV(CATBaseUnknown_var) & iSubelementList, CATListOfCATUnicodeString * oAttributNameList, CATCkeListOfParm oCkeAttrValList);

    /** 
		* Removes overloaded colors from a list of faces.
		*
		* <br><b>Role</b>: this method remove overloaded color from a list of faces.
		* <br>This method also removes color issued of synchronization through copy paste as result with link or synchronization via @href CATIMmiBRepAttributeSynchronize if imported part has no more link with its reference part.
		* @param iFacesList [in]
    * The list of faces colors will be removed from.
		* @return
    *   <dl>
    *   <dt><tt>S_OK</tt>          <dd>At least one color has been properly removed on every faces.
    *   <dt><tt>S_FALSE</tt>       <dd>no color has been removed on at least one face because no colors were found on these faces
    *   <dt><tt>E_INVALIDARG</tt>  <dd><tt>iFacesList</tt> is NULL or empty.
		*   <dt><tt>E_FAIL</tt>        <dd>An error occured while removing colors.The method can return a @href CATError class,
    *   that you retrieve thanks the @href CATError#CATGetLastError global function. The possible case of error are:
    * <ul>
    *   <li><tt>AttributesERR_1012</tt>:  If no color has been removed , this error indicates that one or more faces belong to an imported feature  where color inherited from synchronization can be found and this feature still has link with its reference feature.</li></ul>
    * </ul>
		*   </dl>
		*/
		static HRESULT RemoveColorsOnFaces(CATLISTV(CATBaseUnknown_var) & iFacesList);

    /** 
    * Removes Applicative Attributes from a list of faces.
    *
    * <br><b>Role</b>: this method remove Applicative Attributes from a list of faces.
    * <br>You can remove different attributes on different faces: the attribute name list <tt>i</tt> will be removed from the face <tt>i</tt>. If the attribute name list <tt>i</tt> is empty, all attributes will be removed from the face <tt>i</tt>.
    * This method also removes applicative attributes issued of synchronization through copy paste as result with link or synchronization via @href CATIMmiBRepAttributeSynchronize if imported part has no more link with its reference part.
    * @param iFacesList [in]
    *   The list of faces attributes will be removed from.
    *		A face must appear only once in the <tt>iFacesList</tt>, otherwise the stability of applicative attributes is not guaranted. 
    *		No check is done inside this method to verify a face doesn't appear twice or more, you have to do it before calling this method.	
    * @param iAttributNameList [in]
    *   The name of the attributes.
    *   <br> This is an <b>array</b> of <b>pointers</b> to lists containing  the names of the attributes.
    *   <br><b>Legal values</b>:
    *       Can't be NULL and must have the same size as iFacesList
    *
    * @return
    *   <dl>
    *   <dt><tt>S_OK</tt>          <dd>At least one applicative attribute has been removed on every face
    *   <dt><tt>S_FALSE</tt>       <dd>no applicative attribute has been removed on at least one face because no attributes were found on these faces
    *   <dt><tt>E_INVALIDARG</tt>  <dd><tt>iFacesList</tt> is empty or <tt>iAttributNameList</tt> is NULL
    *   <dt><tt>E_FAIL</tt>        <dd> An error occured while removing attributes. The method can return a @href CATError class,
    *   that you retrieve thanks the @href CATError#CATGetLastError global function. The possible case of error are:
    * <ul>
    *   <li><tt>AttributesERR_1011</tt>:  If no applicative attribute has been removed , this error indicates that one or more faces belong to an imported feature  where applicative attribute inherited from synchronization can be found and this feature still has link with its reference feature.</li></ul>
    * </ul>
    * </dl>
    */
    static HRESULT RemoveAttributesOnFaces(CATLISTV(CATBaseUnknown_var) & iFacesList,CATListOfCATUnicodeString ** iAttributNameList);

     /** 
    * Removes Applicative Attributes from a list of subelements.
    *
    * <br><b>Role</b>: this method remove Applicative Attributes from a list of subelements.
    * <br>You can remove different attributes on different subelements: the attribute name list <tt>i</tt> will be removed from the subelement <tt>i</tt>. If the attribute name list <tt>i</tt> is empty, all attributes will be removed from the subelements <tt>i</tt>.
    * This method also removes applicative attributes issued of synchronization through copy paste as result with link or synchronization via @href CATIMmiBRepAttributeSynchronize if imported part has no more link with its reference part.
    * @param iSubelementList [in]
    *   The list of subelements attributes will be removed from.
    *		A subelement must appear only once in the <tt>iSubelementList</tt>, otherwise the stability of applicative attributes is not guaranted. 
    *		No check is done inside this method to verify a subelement doesn't appear twice or more, you have to do it before calling this method.	
    *   SubElement can be Faces, Wire Edges, Border Edges and Border Vertex.
    * @param iAttributNameList [in]
    *   The name of the attributes.
    *   <br> This is an <b>array</b> of <b>pointers</b> to lists containing  the names of the attributes.
    *   <br><b>Legal values</b>:
    *       Can't be NULL and must have the same size as iSubelementList
    *
    * @return
    *   <dl>
    *   <dt><tt>S_OK</tt>          <dd>At least one applicative attribute has been removed on every subelements
    *   <dt><tt>S_FALSE</tt>       <dd>no applicative attribute has been removed on at least one subelement because no attributes were found on these subelements
    *   <dt><tt>E_INVALIDARG</tt>  <dd><tt>iSubelementList</tt> is empty or <tt>iAttributNameList</tt> is NULL
    *   <dt><tt>E_FAIL</tt>        <dd> An error occured while removing attributes. The method can return a @href CATError class,
    *   that you retrieve thanks the @href CATError#CATGetLastError global function. The possible case of error are:
    * <ul>
    *   <li><tt>AttributesERR_1011</tt>:  If no applicative attribute has been removed , this error indicates that one or more subelements belong to an imported feature  where applicative attribute inherited from synchronization can be found and this feature still has link with its reference feature.</li></ul>
    * </ul>
    * </dl>
    */
    static HRESULT RemoveAttributesOnSubElements(CATLISTV(CATBaseUnknown_var) & iSubelementList,CATListOfCATUnicodeString ** iAttributNameList);

 /** 
		* Sets lists of colors and opacity on a list of faces.
		*
		* <br><b>Role</b>: this method sets colors on a list of faces.
		* <br>You can set different color on different faces: the face <tt>i</tt> will have the ColorAndOpacityValues component <tt>i</tt>
		* @param iSubElemList [in]
		*   The list of faces and colors will be set on.
    *		A face must appear only once in the <tt>iFacesList</tt>, otherwise the stability of colors is not guaranted. 
    *		No check is done inside this method to verify a face doesn't appear twice or more, you have to do it before calling this method.	
		* @param iColorAndOpacityValues [in]
		*   The Red color component list.
    *   <br><b>Legal values</b>:
    *       This list should have the same size as <tt>iSubElemList</tt>.
    *       This must be a CATListPV of CATVisPropertiesValues pointers.
    *       Sample code show one of the many ways to create this list
    *<pre>
    * HRESULT rc = E_FAIL;
    * int size = mySubElemList.Size();
    * int i(0);
    * CATListPV * mySublElemColorAndOpacityValues = new CATListPV;
    * //creates the color and opacity list of properties
    * for (i=1;i<=size;i++)
    * {
    *   CATVisPropertiesValues * mycolorandopacity = new CATVisPropertiesValues;
    *   //not mandatory : if you want to set a color
    *   mycolorandopacity->SetColor(myred,mygreenmyblue);
    *   //not mandatory : if you want to set an opacity
    *   mycolorandopacity->SetOpacity(myopacity);
    *   // mandatory: append the value to have the same list size as iSubElemList
    *   mySublElemColorAndOpacityValues->Append(mycolorandopacity);
    * }
    * // call the API
    * rc= CATMmrApplicativeAttributes::SetColorAndOpacityOnSubElement(mySubElemList,mySublElemColorAndOpacityValues);
    *
    * //cleanup
    * for (i=1;i<=size;i++)
    * {
    *    CATVisPropertiesValues *pCATVisPropertiesValues = (CATVisPropertiesValues*)(*mySublElemColorAndOpacityValues)[i];
    *    CATSysDeletePtr(pCATVisPropertiesValues);
    * }
    * CATSysDeletePtr(mySublElemColorAndOpacityValues);
    *</pre>
    *
		* @return
    *   <dl>
    *   <dt><tt>S_OK</tt>          <dd>All colors have successfully been set.
    *   <dt><tt>S_FALSE</tt>       <dd>One of the color list have not been properly set. If none have been set on any face, returns <tt>E_FAIL</tt>.
    *   <dt><tt>E_INVALIDARG</tt>  <dd><tt>iSubElemList</tt> is NULL or empty.
    *   <dt><tt>E_INVALIDARG</tt>  <dd><tt>iColorAndOpacityValues</tt> is NULL or empty.
    *   <dt><tt>E_INVALIDARG</tt>  <dd><tt>iSubElemList</tt> and <tt>iSubElemList</tt> have different size.
		*   <dt><tt>E_FAIL</tt>        <dd>No color has been set.
		*   </dl>
    */
    static HRESULT SetColorAndOpacityOnSubElements(CATLISTV(CATBaseUnknown_var) & iSubElemList,CATListPV *&iColorAndOpacityValues);


  private:  
         CATMmrApplicativeAttributes();  
         ~CATMmrApplicativeAttributes();     
   };  
     
     
#endif  
     
