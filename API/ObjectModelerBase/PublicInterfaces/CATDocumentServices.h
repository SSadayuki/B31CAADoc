#ifndef CATDocumentServices_H
#define CATDocumentServices_H
/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */



#include "AC0XXLNK.h"
#include "CATBaseUnknown.h"
#include "booleanDef.h"
#include "CATUnicodeString.h"
#include "CATDocumentsInSession.h"
#include "CATListOfCATUnicodeString.h"
class CATDocument;
class CATUuid;
class CATIDocId;

/**
* Services to create, open and close documents.
* <b>Role:</b>All methods of this class must be used to create, open or close a document when <b>no
* visualization is necessary</b>. This is always the case in batch mode, but it is also possible 
* in interactive mode. 
* <br>If you want to visualize the document, use the <i>CATIIniInteractiveSession</i>
* interface. This last interface is defined in the InteractiveInterfaces Framework.
* <br>Please notice that Open, Save and SaveAs methods perform the same action on model data using either CATDocumentServices or CATIIniInteractiveSession.
* <br><br>There are three methods for creating a (or several) new document(s) in the current session:
* <ul>
* <li>@href #New </li>
* <li>@href #OpenDocument </li>
* <li>@href #NewFrom </li>
* </ul>
* There are three methods for saving a document:
* <ul>
* <li>@href #Save (to use only in interactive mode)</li>
* <li>@href #SaveAs </li>
* <li>@href #SaveAsNew </li>
* </ul>
*  There is one method for closing a document:
* <ul>
* <li>@href #Remove </li>
* </ul>
* There is one method for retrieving a document by its filename:
* <ul>
* <li>@href #GetDocumentInSession
* </ul>
* <b>Life cycle of the document:</b>
* <br>
* <br><i>The AddRef/Release mechanism is not used:</i>
* <br>All methods which return a CATDocument pointer have not performed an Addref on the pointer. So
* there is no need to release it. 
* <br> A CATDocument object created by <tt>New</tt>, <tt>Open</tt>(*), or <tt>NewFrom</tt> must 
* be removed from the session by the <tt>Remove</tt> method. 
* <br>(*)Note that if the "open" is actually a "reopen", only one call to <tt>Remove</tt> must be done.
* <br>
* <br><i>The Lock/Unlock mechanism is used</i>
* <br>Look at this example:
* <br>1)Open a CATProduct which contains a CATPart
* <br>2)Open independently the same CATPart too 
* <br>You should <tt>Remove</tt> the 2 documents, but when the CATProduct document will be closed, 
* the CATPart will be also. So a specific call to <tt>Remove</tt> for the independent CATPart 
* will end in an error. 
* <br>So a multi-reference mechanism is necessary: @href CATLockDocument and
* @href CATUnLockDocument. 
* <br><br><i>When do you lock a document ?</i>
* <br> In batch mode, if you are not sure of the relation between each model opened, 
* lock the model after each open, and unlock it to remove it. 
* <br> In interactive mode, if your class keeps a pointer on a document, lock it and 
* unlock it when the pointer is no longer needed. 
* @see CATDocument 
*/

class ExportedByAC0XXLNK CATDocumentServices
{
 public:

  /**
  * Test if a given document type is meant to be CATIA loadable.
  * <br><b>Role:</b> Provide support to know if a given document type can be or not 
  * loaded in session memory as a CATDocument 
  * <br>Being a loadable document requires CATIPersistent implementation on the given type
  * @param iType
  *     The string to define the kind of document to test. 
  *     it returns S_OK otherwise E_FAIL
  */
  static HRESULT IsKnownAsAPersistentType(const CATUnicodeString& iType);

  /**
  * Test if a given document alias is meant to be CATIA creatable.
  * <br><b>Role:</b> Provide support to know if a given document alias can be or not 
  * provided to be created in session memory as a CATDocument (See New) 
  * <br>Being a creatable document requires CATIDocAlias or CATIPersistent implementation on the given alias
  * @param iAliasType
  *     The string to define the kind of document to test. 
  *     it returns S_OK, this can be used as a creation alias
  *     it returns E_FAIL, this is not.
  */
  static HRESULT IsKnownAsAnAliasType(const CATUnicodeString& iAliasType);

  /**
  * Creates a document of a given type.
  * <br><b>Role:</b> Creates and initializes data of a document of the given type. The
  * initialization is done thanks to the @href CATInit#init method.
  * <br>The document must be removed from the session before exiting or when it is
  * no longer needed. See explanations, at the top of this page, about the life 
  * cycle of the document.
  * <br>The name of the document is <tt>iType + Number + suffix</tt>. The suffix 
  * is dedicated to iType such as <tt>.CATPart</tt> for the type <tt>Part</tt>.  
  * <br>As long as the document is not saved, the storage name ( @href CATDocument#StorageName ),
  * is equal to the name. 
  * @param iType
  *     The string to define the kind of document to create. 
  *     <br> The string is the one which appears in the panel File/New.
  * @param oNewDoc 
  *     The document created.
  */
  static HRESULT New (const CATUnicodeString& iType, CATDocument*& oNewDoc);
  
  /**
  * @nodoc
  *
  * Opens a given document.
  * <br><b>Role:</b> If the file already exists in the session, it will not be re-loaded.
  * <br>The document must be removed from the session before exiting or when it is no 
  * longer needed. See explanations at the top of this page about the life 
  * cycle of the document.
  * @param iStorageName
  *      The complete access name of the file to open (path + name of the file ). 
  *      <br>See @href CATDocument#StorageName for more information about the storage name.
  * @param oOpenedDoc 
  *      The opened document.
  *      <br>If the "open" is a "re-open", the pointer is not a new pointer. Do not remove 
  *      the pointer twice.
  * @param iReadOnly
  *      FALSE: Default value, the document will be in read/write mode.
  *  <br> TRUE: The document is in read only mode.
  *  <br>In case of a re-opening, the mode of the document is defined by the first open.
  * @return
  *		 S_OK : The document was opened sucessfully.
  *	<br> S_FALSE : The document has already been loaded. The returned oOpenedDoc pointer 
  * points to this document.
  *	<br> E_FAIL : The open operation failed.
  */
  static HRESULT Open ( const CATUnicodeString& iStorageName, CATDocument*& oOpenedDoc, CATBoolean iReadOnly=FALSE);

  /** @nodoc */
  static HRESULT Open ( const CATUnicodeString& storageName, CATDocument*& oOpenedDoc, const CATUnicodeString& type, CATBoolean ReadOnly=FALSE);

  /** @nodoc */
  static HRESULT Open ( CATIDocId* iDocId, CATDocument*& oOpenedDoc, CATBoolean ReadOnly=FALSE);

  
  /**
  * Opens a given document.
  * <br><b>Role:</b> If the file already exists in the session, it will not be re-loaded.
  * <br>The document must be removed from the session before exiting or when it is no 
  * longer needed. See explanations at the top of this page about the life 
  * cycle of the document.
  * <br><b>Note:</b> This method does not allow opening .feat or .CATfct catalogs. It is not possible to access .feat
  * catalogs because they contain Dassault Systemes private data. To open a .CATfct catalog, see <i>CATCatalogFactoryServices</i>
  * (ObjectSpecsModeler framework). 
  * @param iStorageName
  *      The complete access name of the file to open ( path + name of the file ). 
  *      <br>See @href CATDocument#StorageName for more information about the storage name.
  * @param oOpenedDoc 
  *      The opened document.
  *      <br>If the "open" is a "re-open", the pointer is not a new pointer. Do not remove 
  *      the pointer twice.
  * @param iReadOnly
  *      FALSE: Default value, the document will be in read/write mode.
  *  <br> TRUE: The document is in read only mode.
  *  <br>In case of a re-opening, the mode of the document is defined by the first open.
  * @return
  *		 S_OK : The document was opened sucessfully.
  *	<br> S_FALSE : The document has already been loaded. The returned oOpenedDoc pointer 
  * points to this document.
  *	<br> E_FAIL : The open operation failed.
  */
  static HRESULT OpenDocument ( const CATUnicodeString& iStorageName, CATDocument*& oOpenedDoc, CATBoolean iReadOnly=FALSE);

  /**
  * Retrieves a document in session by its complete access name.
  * @param iStorageName
  *      The complete access name to the searched file (path + name of the file ).
  *      <br>See @href CATDocument#StorageName for more information about the storage name.
  * @param oOpenedDoc
  *      The found document.
  */
  static HRESULT GetDocumentInSession ( const CATUnicodeString& iStorageName, CATDocument*& oOpenedDoc);

  /** @nodoc */
  static HRESULT GetDocumentInSession ( const CATUnicodeString& fileName, const CATUuid& fileUuid, CATDocument*& oOpenedDoc);
	
  /** @nodoc */
  static HRESULT GetDocumentInSession ( CATIDocId* iDocId, CATDocument*& oOpenedDoc);

  /**
  * Saves a given document in interactive mode.
  * <br><b>Role:</b>To save a document two cases:
  * <ul>
  * <li>In interactive mode, use this method or the method  
  * <i>CATIIniInteractiveSession::Save</i> twice are equal</li>
  * <li>In batch mode, use @href #SaveAs in using the current storage name of your document @href CATDocument#StorageName</li>
  * <pre>
  *     CATUnicodeString StorageNameDocument ;
  *     StorageNameDocument = pDocument->StorageName();
  *     ::SaveAs(pDocument,StorageNameDocument);
  * </pre>
  * </ul>
  * @param iDocument
  *       The document to save.
  * @param iSavePointedIfNecessary
  *       TRUE : default value, to save all documents referred to by iDocument if they have 
  *              been modified during the session.
  *       <br> FALSE: only iDocument will be saved.
  * @return
  *		 S_OK : The document was saved successfully.
  *	<br> S_FALSE : The document does not need to be saved.
  *	<br> E_FAIL : The document save operation failed.
  */
  static HRESULT  Save ( CATDocument& iDocument, CATBoolean iSavePointedIfNecessary = TRUE);
  
  /**
  * Saves a document with a different name.
  * <br><b>Role:</b>Save the document in the file specified by iStorageName. 
  * <br> Please note that no thumbnail for the document is generated or updated in batch mode. 
  * @param iDocument
  *       The document to save.
  * @param iStorageName
  *       The complete access name of the file.
  *       <br>The format of this argument is: path + name of the file.
  *       <br>It is the new storage name of the document. 
  *       <br>See @href CATDocument#StorageName to have more information about the storage name.
  * @param iFormat
  *       To save the document with a specific format. (recognized by iDocument).
  *     <br> The string is the one which appears in the "Format" combo of the panel
  *        File/Save or File/SaveAs.
  * @param SavePointedIfNecessary
  *      TRUE : default value, to save all documents referred by iDocument if they 
  *             have been modified during the session.
  *       <br> FALSE: only iDocument will be saved.
  */
  static HRESULT  SaveAs ( CATDocument& iDocument,const CATUnicodeString& iStorageName,const CATUnicodeString& iFormat="", CATBoolean iSavePointedIfNecessary = TRUE);

  /** @nodoc */
  static HRESULT  SaveAs ( CATDocument& iDocument, CATIDocId *iDocId );

  /**
  * Removes a document.
  * <br><b>Role:</b>This method closes the document in the session.  
  * <br><b>Caution</b>This method is without effect if the document has been previously
  * locked. If you have locked your document, a call to this method is not necessary, the last
  * unlock closes it. 
  * <br>Read information at the top of the page about the life cycle of the document.  
  * @param iDoc
  *       The document to remove.
  * @param iEmptyClipbordIfNecessary
  *       TRUE : will remove all the links from clipboard to iDoc.
  */
  static HRESULT  Remove ( CATDocument& iDoc, short iEmptyClipbordIfNecessary=TRUE);

  /**
  * Creates documents from an existing file.
  * <br><b>Role:</b>This method allows you to create, in the current session, a new document 
  * from an existing one. But if the original document is already opened in session, no new 
  * document is generated.
  * <br>The method processes separately each document. But if an error occurs during the process of
  * one document the method is stopped and returns the error code about the last processing. So the 
  * output list of new document can be shorter than the input list of storage name. 
  * @param iListOfStorageName
  *        The list of complete access file names.
  * @param oListOfDocuments
  *        The list of new documents.
  *        <br>The length of this output list is equal to correct processed document. 
  * @param iIndividualNewFrom
  *        Useless
  * @return 
  *     The result of the last processed storage name:
  *     <ul>
  *     <li>S_OK: All documents are created. The lenght of iListOfStorageName is equal to
  *                   oListOfDocument </li>
  *	<li>S_FALSE : The last processed document was already loaded. The lenght of oListOfDocument
  *                    is equal to correct document previously processed.</li>
  *	<li>E_FAIL :  An error is occured during the last document processed. The lenght of 
  *                  oListOfDocument is equal to correct document previously processed.</li>
  *     </ul>
  */
  static HRESULT  NewFrom ( CATLISTV(CATUnicodeString)* iListOfStorageName, CATLISTP(CATDocument)* oListOfDocuments, short iIndividualNewFrom=TRUE);


  /**
  * Creates documents from existing files.
  * <br><b>Role:</b>This method allows you to create, in the current session, new documents 
  * from existing ones. The links between the original documents are reported accordingly
  * between the new documents. 
  * <br>If an error occurs during the process of one document or if one the original documents 
  * is already opened in session, a NULL pointer is put in oListOfDocuments and the method 
  * continues and returns the corresponding error code. So the output list of new documents has 
  * the same length as the input list of storage names. 
  * @param oListOfDocuments
  *        The list of new documents.
  *        <br>The length of this output list is equal to the length of the input list but it can contain
  * NULL pointers if the method has failed for one of the input paths.
  * @param iListOfPaths
  *        The list of complete access file names.
  * @param iListOfNewFileNames
  *        The list of the new file names (optional).
  *		   <br>NULL : default value, new names will be computed automatically for the new documents.
  * @return 
  *     <li>S_OK: All documents are created. 
  *	<li>S_FALSE : One of the processed document was already loaded.</li>
  *	<li>E_FAIL :  An error has occurred during for at least one of the documents.</li>
  *     </ul>
  */
  static HRESULT  NewFrom ( CATLISTP(CATDocument)* oListOfDocuments, const CATLISTV(CATUnicodeString)*& iListOfPaths, const CATLISTV(CATUnicodeString)* iListOfNewFileNames=NULL);

  /**
  * Creates a new document from an existing one and saves it.
  * <br><b>Role:</b>The new document is identical to the original except for its UUIDs. 
  * The original document, iDocument, remains unchanged.  
  * <br>The new document does not exist in the session,it is just created in a file. 
  * @param iDocument
  *        The original document from which the new document will be generated and saved 
  *        with different UUIDs.
  * @param iStorageName
  *        The name under which the new document will be saved.
  * @param iSaveRecursively 
  *        Not used.  FALSE by default.
  */
  static HRESULT  SaveAsNew ( CATDocument& iDocument, const CATUnicodeString& iStorageName, CATBoolean iSaveRecursively=FALSE);

  /**
  * Retrieves the last save version of a document by its identifier.
  * @param iDocId
  *        The identifier of the document.
  * @param oVersion
  *        The last save version of the document (this information is only accessible for documents created from V5R10 and after. 
  *        <br>(for example : &lt Version &gt 5/ &lt Version &gt &lt Release &gt 10/ &lt Release&gt &lt ServicePack&gt 1/&lt ServicePack &gt &lt BuildDate &gt mm-dd-yyyy.hh.mm/ &lt BuildDate &gt).
  * @return 
  *     <li>S_OK: The version has been correctly retrieved, 
  *	    <li>E_FAIL : The version could not be retrieved. </li>
  *     </ul>
  */
  static HRESULT GetDocumentLastSaveVersion ( CATIDocId* iDocId, CATUnicodeString& oVersion);


/**
 * Retrieves the minimal version to open a document by its identifier.
 * @param iDocId
 *        The identifier of the document.
 * @param oVersion
 *        The minimal version needed to open the document (this information is only accessible for documents created from V5R8 and after). 
 *        <br>(for example : &lt Version &gt 5/ &lt Version &gt &lt Release &gt 10/ &lt Release&gt).
 * <br>Due to service pack compatibility, no service pack number is specified. 
 * <br>Document can be opened on any service pack of the oVersion version.
 * @return 
 *     <li>S_OK: The version has been correctly retrieved, 
 *     <li>E_FAIL : The version could not be retrieved. </li>
 *     </ul>
 */
 static HRESULT GetMinimalVersionToOpenDocument ( CATIDocId* iDocId, CATUnicodeString& oVersion);


  /**
  * Check if a document has been saved with an educational licence.
  * @param iDocId
  *        The identifier of the document.
  * @param iEducational
  *     <li>0: This is a standard document. </li>
  *	    <li>Otherwise : This document has been saved with an educational license. </li>
  * @return 
  *     <li>S_OK: The check has been successfully done. 
  *	<li>E_INVALIDARG: Null input iDocId. </li>
  *	<li>E_FAIL: Impossible to perform this check. </li>
  *     </ul>
  */
  static HRESULT HasDocumentEducationalFlag ( CATIDocId* iDocId, int& iEducational);

};
#endif
