/* -*-c++-*- */
#ifndef CATICatalogDescription_H_
#define CATICatalogDescription_H_
// COPYRIGHT DASSAULT SYSTEMES 2000
/**
* @CAA2Level L1
* @CAA2Usage U3
*/


#include "CATCclInterfaces.h"
#include "IUnknown.h"
#include "CATBaseUnknown.h"
#include "booleanDef.h"
#include "CATBooleanDef.h"

class CATUnicodeString ;
class CATILinkableObject ;
class CATIDocId;
class CATICatalogChapter ;
class CATPixelImage ;
class CATICatalogBrowser;
class CATICatalogKeyword;
class CATICatalogLink;
class CATICatalogBrowser;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATCclInterfaces IID IID_CATICatalogDescription ;
#else
extern "C" const IID IID_CATICatalogDescription ;
#endif

/**
* @nodoc
* Enum to describe different kind of description link to objects.
* <br>
* DOCUMENT    : link on a document.
* FEATURE     : link on a feature in a document.
* UNSET       : no link.
* DOCUMENTV4  : link on a V4 .model document.
* </br>
*/
#ifdef _WINDOWS_SOURCE
extern ExportedByCATCclInterfaces enum COMPONENT_KINDOF
#else
enum COMPONENT_KINDOF
#endif
{
   DOCUMENT=0,
      FEATURE=1,
      UNSET=2, 
      DOCUMENTV4=3,
      DESCRIPTION=4
} ;

/**
* Interface to inquire and define catalog descriptions.
* <b>Role</b>: A description is a link between a chapter and:
* <ul>
*  <li>a chapter, </li>
*  <li>a document (CATPart, ...), </li>
*  <li>a feature in a document </li>
* <li> or nothing. </li>
* </ul>
* <p>To create descriptions there are three ways:
* <ul>
* <li>Part Family, see @href CATICatalogChapter#AddFamilyDescriptionsFromDesignTable </li>
* <li>Persistent Query, see @href CATICatalogChapter#AddPersistentQuery </li>
* <li>Other, see @href CATICatalogChapter#AddDescription </li>
* </ul>
*/
class ExportedByCATCclInterfaces CATICatalogDescription : public CATBaseUnknown
{
   CATDeclareInterface;
public :
   /**
   * Enumeration to describe differents kinds of descriptions links to objects.
   * @param CATCatalogDocument
   *     The description is linked with a document.
   * @param CATCatalogFeature
   *     The description is linked with a feature in a document.
   * @param CATCatalogUnset
   *     The description has no link.
   * @param CATCatalogDescription
   *     The description is linked with a description (Persistent Query).
   */
   enum CATCatalogDescriptionType
   {
      CATCatalogDocument=0,
      CATCatalogFeature=1,
      CATCatalogUnset=2, 
      CATCatalogDescription=4
   } ;

   /**
   *   Retrieves the chapter containing this description.
   *   @param oChapter [out, CATBaseUnknown#Release]
   *      The chapter of current description.
   */
   virtual HRESULT GetChapter (CATICatalogChapter*& oChapter) = 0 ;
   
   /**
   *   Retrieves the subchapter from current description.
   *   @param oSubChapter [out, CATBaseUnknown#Release]
   *      The chapter pointed by the current description.
   *   @result
   *      S_OK if the description point on a chapter.<br>
   *      E_FAIL otherwise.
   */
   virtual HRESULT GetSubChapter (CATICatalogChapter*& oSubChapter) = 0 ;
   
   /**
   *   Retrieves the name of the description.
   *   @param oName
   *      The name of the description, displayed in catalog editor and browser.
   */
   virtual HRESULT GetName(CATUnicodeString& oName) = 0 ;
   
   /**
   *   Sets the name for the description.
   *   @param iName
   *      The new name of the description.
   */
   virtual HRESULT SetName (const CATUnicodeString& iName) = 0 ;
   
   /**
   *   Return the type of the pointed chapter.
   *   @return
   *      TRUE if pointed object is a sub-chapter, or FALSE if it's a EndChapter.
   */
   virtual CATBoolean IsObjectASubchapter () = 0 ;
   
   /**
   *   Retrieves the type of the description (for description on objects).
   *      To known if description has a link on document, feature, V4 model or unset</br>
   *   @param ocomponentKindof
   *      Value to describe different kind of description link to objects.</br>
   */
   virtual HRESULT GetDescriptionType(CATICatalogDescription::CATCatalogDescriptionType& ocomponentKindof)=0;

   /**
   *   Create a link on current description from a file name.
   *   <br><b>Role:</b>To associate a document with the description there
   *   is two ways:
   *    <ul>
   *    <li>@href #SetObject : you give the @href CATILinkableObject interface pointer on
   *        the document</li>
   *    <li><tt>SetDocumentName</tt> : you give only the complete path of the document. In this case, 
   *        the document is not opened. </li>
   *     </ul>
   *   @param iFileName
   *      File name of the document to link to the description.
   *
   */
   virtual HRESULT SetDocumentName (const CATUnicodeString& iFileName) = 0 ;

   /**
   *   Creates a link on the current description.
   *   @param iExternalObject
   *      The external object to link, it could be any CATILinkable object (document or feature).</br>
   *      NULL to unset current link.
   */
   virtual HRESULT SetObject (CATILinkableObject* iExternalObject) = 0 ;
   
   /**
   *   Retrieves the object linked to the current description.
   *   @param oExternalObject [out, CATBaseUnknown#Release]
   *      The linked external object.
   */
   virtual HRESULT GetObject (CATBaseUnknown*& oExternalObject) = 0 ;
   
   /**
   *   Associates an embedded image to the current description.</br>
   *   This image is always use if it exist for display in editor and browser.
   *   @param iImage
   *      The pixel image to store in catalog, NULL to unset.
   */
   virtual HRESULT SetPreview (CATPixelImage* iImage) = 0 ;
   
   /**
   *   Retrieves an embedded image to current description.</br>
   *   This image is always use if it exist for display in editor and browser.
   *   @param oImage  [out, CATBaseUnknown#Release]
   *      The pixel image retrieving in catalog, NULL to unset.
   */   
   virtual HRESULT GetPreview (CATPixelImage** oImage) = 0 ;
   
   /**
   *   Associates an preview file to current description.</br>
   *   This image is use if no embedded preview is available.
   *   @param iexternalObjectName
   *      The name of file to use a preview (.bmp, .jpg).
   */
   virtual HRESULT SetPreviewName (const CATUnicodeString& iexternalObjectName) = 0 ;
   
   /**
   *   Retrieves a preview file to current description.</br>
   *   This image is use if no embedded preview is available.
   *   @param oexternalObjectName
   *      The name of file to use a preview (.bmp, .jpg).
   */
   virtual HRESULT GetPreviewName (CATUnicodeString& oexternalObjectName) = 0 ;
   
   /**
   *   Sets the keyword value on the current description.
   *   @param iName
   *      The keyword to valuate.
   *   @param iValue
   *      The value to set on selected keyword, for example "3mm".
   */
   virtual HRESULT SetValue (const CATUnicodeString& iName, const CATUnicodeString& iValue) = 0 ;
   
   /**
   *   Sets the keyword value on the current description (real).
   *   @param iName
   *      The keyword to valuate.
   *   @param iValue
   *      The real value to set on selected keyword.
   */
   virtual HRESULT SetDouble (const CATUnicodeString& iName, double iValue) = 0 ;
   
   /**
   *   Sets the keyword value on the current description (integer).
   *   @param iName
   *      The keyword to valuate.
   *   @param iValue
   *      The integer value to set on selected keyword.
   */
   virtual HRESULT SetInteger (const CATUnicodeString& iName, int iValue) = 0 ;  
   
   /**
   *   Sets the keyword value on the current description (boolean).
   *   @param iName
   *      The keyword to valuate.
   *   @param iValue
   *      The boolean value to set on selected keyword.
   */
   virtual HRESULT SetBoolean (const CATUnicodeString& iName, CATBoolean iValue) = 0 ;
   
   /**
   *   Sets the keyword value on the current description (string).
   *   @param iName
   *      The keyword to valuate.
   *   @param iValue
   *      The string value to set on selected keyword.
   */
   virtual HRESULT SetString (const CATUnicodeString& iName, const CATUnicodeString& iValue) = 0 ;
   
   /**
   *   Suppresses the keyword value on current description. The default value will be used.
   *   @param iName
   *      The keyword to unset.
   */
   virtual HRESULT UnsetKeyword (const CATUnicodeString& iName) = 0 ;
   
   /**
   *   Retrieves the keyword value on the current description.
   *   @param iName
   *      The keyword to read.
   *   @param oValue
   *      The value of the keyword, for example "3mm".
   */
   virtual HRESULT GetValue (const CATUnicodeString& iName, CATUnicodeString& oValue) = 0 ;
   
   /**
   *   Retrieves the keyword value on the current description (real).
   *   @param iName
   *      The keyword to read.
   *   @param oValue
   *      The real value of the keyword.
   */
   virtual HRESULT GetDouble (const CATUnicodeString& iName, double& oValue) = 0 ;  
   
   /**
   *   Retrieves the keyword value on the current description (integer).
   *   @param iName
   *      The keyword to read.
   *   @param oValue
   *      The integer value of the keyword.
   */
   virtual HRESULT GetInteger (const CATUnicodeString& iName, int& oValue) = 0 ;  
   
   /**
   *   Retrieves the keyword value on the current description (CATBoolean).
   *   @param iName
   *      The keyword to read.
   *   @param oValue
   *      The boolean value of the keyword.
   */
   virtual HRESULT GetBoolean (const CATUnicodeString& iName, CATBoolean& oValue) = 0 ;  
   
   /**
   *   Retrieves the keyword value on the current description (string).
   *   @param iName
   *      The keyword to read.
   *   @param oValue
   *      The string value of the keyword.
   */
   virtual HRESULT GetString (const CATUnicodeString& iName, CATUnicodeString& oValue) = 0 ;

   /**
   *   Resolves the current description.
   *   <br><b>Role:</b>When a description is linked with a CATPart which contain a Design Table, the description can be resolved.<br> 
   *   In this case, a new CATPart document is created with the right configuration and the description is linked with this new document.<br> 
   *   In the new document, the link with the Design Table is deleted.<br> 
   */
   virtual HRESULT ResolvedDocumentFromDesignTable() =0;

   /**
   *   Retrieves if the description is resolved or not.
   *   @param oAnswer
   *      1 if the description is resolved, 0 otherwise.
   */
   virtual HRESULT IsResolvedObjectComputed(int & oAnswer) =0;

   /**
   *  Launches an instantiation.
   *  @param iBrowser
   *    The interface pointer on the current Catalog Browser (it can be NULL)
   *  @param iInstantiateMode
   *    The mode of the instantiation is useful for a document instantiation:
   *    <ul>
   *    <li><tt>0</tt>: The document in the destination document is created by new From</li>
   *    <li><tt>1</tt>: The document in the destination document is linked 
   *              towards the component  </li>
   *    </ul>
   *    otherwise, it is useless.
   *  @param iRepeatMode
   *
   */
   virtual HRESULT RunInstantiationCmd(const CATICatalogBrowser* iBrowser, int iInstantiateMode, int iRepeatMode) = 0;

   //-----------------------------------------------------------------------------------------------
   // NODOC or DEPRECATED
   //-----------------------------------------------------------------------------------------------
   /**
   *  @nodoc
   *   Retrieve a link object display name  on current description.
   *   @param oExternalObjectDisplayName
   *      Name of external linked document. For a feature, this is the name of document containing feature.
   *   @return
   *      Error code of function.<br>
   */
   virtual HRESULT GetObjectDisplayName (CATUnicodeString& oExternalObjectDisplayName) = 0;
   
   /**
   *  @nodoc
   *   Create a link on current description.
   *   @param iExternalObjectDocId 
   *      DocId of external linked document. For a feature, this is the name of document containing feature.
   *   @return
   *      Error code of function.<br>
   */
   virtual HRESULT SetObjectDocId (CATIDocId* iExternalObjectDocId) = 0;

   /**
   *  @nodoc
   *   Retrieve a link on current description.
   *   @param oExternalObjectDocId [out, CATBaseUnknown#Release]
   *      DocId of external linked document. For a feature, this is the name of document containing feature.
   *   @return
   *      Error code of function.<br>
   */
   virtual HRESULT GetObjectDocId (CATIDocId*& oExternalObjectDocId) = 0;
   
   /**
   * @nodoc
   *   Create a link on current description from a file name.
   *   @param iExternalObjectName
   *      Name of external file to link.
   *   @param itIsAChapter
   *      For internal use only.
   *   @return
   *      Error code of function.<br>
   */
   virtual HRESULT SetObjectName (const CATUnicodeString& iExternalObjectName, int itIsAChapter=0) = 0 ;
   
   /**
   * @nodoc
   *   Retrieve a link on current description.
   *   @param oExternalObjectName
   *      Name of external linked document. For a feature, this is the name of document containing feature.
   *   @return
   *      Error code of function.<br>
   */
   virtual HRESULT GetObjectName (CATUnicodeString& oExternalObjectName) = 0 ;
   
   /**
   * @nodoc
   * Returns TRUE if description value is a computed value, result of a formula
   */
   virtual CATBoolean IsAComputedValue(const CATUnicodeString& keywordName) = 0 ;
   
   /**
   * @nodoc
   * Obsolet method, do not use
   */
   virtual HRESULT SetObjectFilter (const CATUnicodeString& expression) = 0 ;
   
   /**
   * @nodoc
   * Obsolet method, do not use
   */
   virtual CATUnicodeString GetObjectFilter () = 0 ;
   
   /**
   * @nodoc
   * Obsolet method, do not use
   */
   
   virtual HRESULT SetPreview (CATILinkableObject* externalObject) = 0 ;
   
   /**
   * @nodoc
   * Obsolet method, do not use
   */
   virtual HRESULT GetPreview (CATILinkableObject*& externalObject) = 0 ;
   
   /**
   * @nodoc
   * Obsolete method, do not use
   * @return  CATBaseUnknown#Release
   */
   virtual CATICatalogChapter* GetChapter () = 0 ;
   
   /**
   * @nodoc
   * Obsolete method, do not use
   * @return  CATBaseUnknown#Release
   */
   virtual CATICatalogChapter* GetSubChapter () = 0 ;

      /**
   * @nodoc 
   * call GetDescriptionType
   */
   virtual HRESULT KindOf (COMPONENT_KINDOF& componentKindof) = 0 ;

   /**
   * Checks if the link to the document is correct or not.
   * 
   * @return
   <ul>
   *<li>  S_OK : pointed document is available (without loading)</li>
   *<li>  S_FALSE :pointed document is not available or the description does not point to a document</li>
   *<li>  E_FAIL in case of error or if there is no pointed object associated to the catalog description</li>
   */
   virtual HRESULT IsPointedDocumentAvailable()=0;
  /**
   * Releases the pointing document if possible.
   * 
   * @return
   <ul>
   *<li>  S_OK :   pointed document has been released and removed from memory </li>
   *<li> E_FAIL : unable to remove pointed document, several possible reason:</li>
   *<li>          There is another link in session to this document</li>
   *<li>          The pointed document has been modified in session, impossible to unload it without data loss</li>
   */
   virtual HRESULT ResetLinkToPointedDocument()=0;





};



CATDeclareHandler( CATICatalogDescription, CATBaseUnknown );

#endif
