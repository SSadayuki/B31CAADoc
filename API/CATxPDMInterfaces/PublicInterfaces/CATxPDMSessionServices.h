#ifndef CATxPDMSessionServices_H
#define CATxPDMSessionServices_H
//COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATBaseUnknown.h" 
#include "ExportedByCATxPDMInterfaces.h"
#include "CATListOfCATUnicodeString.h" 
#include "CATListOfCATString.h" 
#include "CATListOfCATIxPDMItem.h" 

class CATIxPDMItem_var;
class CATDocument;
class CATIReporter;

/**
* Class for PDM services working on items loaded in session. 
* <b>Role</b>: This class is used for external File PDM system integration.
* <p>All the methods pre-requisites the PX1 license </p>
* @see CATIxPDMItem , CATIxPDMSession
*/
class ExportedByCATxPDMInterfaces CATxPDMSessionServices
{
 public:
    /**
    * Retrieves an item from a document loaded in session.
    * <br><b>Role:</b>This method retrieves a handler to a @href CATIxPDMItem interface
    * from a @href CATDocument.
    * 
    * @param iInputDocument
    *   The document loaded in session
    * @param oPDMItem
    *   The returned item
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: The item is successfully returned. </li> 
    *   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *       The PX1 licence is not available.
    *      <li><tt>InputERR_1002:</tt></li>
    *       The input document is NULL.
    *  </ul>
    *  </ul>
    */
    static HRESULT GetItemFromDocument(const CATDocument* iInputDocument,CATIxPDMItem_var & oPDMItem);

    /**
    * Retrieves an item from a feature loaded in session.
    * <br><b>Role:</b>This method retrieves a handler to a @href CATIxPDMItem interface
    * from a feature ('CATISpecObject').
    * 
    * @param iInputFeature
    *   The feature loaded in session
    * @param oPDMItem
    *   The returned item
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: The item is successfully returned. </li> 
    *   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *       The PX1 licence is not available.
    *      <li><tt>InputERR_1002:</tt></li>
    *       The input feature is NULL.
    *  </ul>
    *  </ul>
    */
    static HRESULT GetItemFromFeature(const CATBaseUnknown_var& iInputFeature,CATIxPDMItem_var & oPDMItem);

    /**
    * Loads an item in session.
    * <br><b>Role:</b>This method loads an item is session.
    * If item is already loaded in session, this method just returns a handler on already loaded item.
    * 
    * @param iItemToLoad
    *   The item to load.
    * @param oLoadedItem
    *   The loaded item. It can be same as <tt>iItemToLoad</tt> if item was already loaded.
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: The item is successfully loaded. </li> 
    *   <li><tt>S_FALSE</tt>: The item is already loaded. </li> 
    *   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *      The PX1 licence is not available.
    *      <li><tt>InputERR_1004:</tt></li>
    *       Internal error.
    *      <li><tt>InputERR_1121:</tt></li>
    *       The file associated with the item is not on the disk.
    *      <li><tt>InputERR_1123:</tt></li>
    *      This non CATIA document can never be loaded</li>
    *  </ul>
    *  </ul>
    */
    static HRESULT LoadItemInSession(const CATIxPDMItem_var& iItemToLoad, CATIxPDMItem_var& oLoadedItem);

    /**
    * Retrieves all items loaded in session.
    * <br><b>Role:</b>This method retrieves all items loaded in session.
    * This list is especially useful to rename items by the @href #SaveSessionToDirectory method.
    * 
    * @param oListOfLoadedItem
    *   The list of loaded items in session. This list will be NULL if no item is loaded in session.
    *   The caller has to delete the list.
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: The list is successfully returned. </li> 
    *   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *       The PX1 licence is not available.
    *  </ul>
    *  </ul>
    */
    static HRESULT GetxPDMItemsInSession(CATListValCATIxPDMItem_var* &oListOfLoadedItem);

    /**
    * Check rules necessary for PDM before Save.
    * <br><b>Role:</b>This method checks a customized list of rules necessary for PDM before Save.
    * The list to choose depends of what is allowed in targeted PDM. These rules work also on items  
	* coming from ENOVIA V5 (with the exception of rule READONLY_CONSISTENCY, which is specific to file items).
    * 
    * @param iListOfRulesToCheck
    *   List of string describing rules to check on all items in session.
    *   Authorized values are:
    *   <ul>
    *   <li><tt>"RESOLVED_IMPORT"</tt>: Check that all imports (geometry and parameters) are resolved.
    *     If you activate this check, this method will load pointed items to check the link. So number
    *     of items loaded in session could increase after this call.</li> 
    *   <li><tt>"SYNCHRONIZED_IMPORT"</tt>: Check that all imports (geometry and parameters) are synchronized.
    *     If you activate this check, this method will load pointed items to check the link. So number
    *     of items loaded in session could increase after this call.</li> 
    *   <li><tt>"NESTED_LEVEL=x"</tt>: Check number of levels of links. x is the maximum authorized value.
    *     If PartA imports geometry from PartB and PartB import parameter from PartC, there is 3 levels of links.
    *     If DrawingA has a link to ProductB and ProductB contains PartD, there is 3 levels of links.
    *     If you activate this check, this method will load pointed items to check the link. So number
    *     of items loaded in session could increase after this call.</li> 
    *   <li><tt>"NESTED_IMPORT=x"</tt>: Check number of levels of import. x is the maximum authorized value.
    *     If PartA imports geometry from PartB and PartB import parameter from PartC, there is 3 levels of imports.
    *     This check is a restriction of NESTED_LEVEL to geometrical and knowledge links between CATPart and CATShape.
    *     If you activate this check, this method will load pointed items to check the link. So number
    *     of items loaded in session could increase after this call.</li> 
    *   <li><tt>"CYCLES"</tt>: Check that there is no cycle between items. All kind of links are checked.
    *     Notice that 'Context' link from CATPart to CATProduct is not considered as a cycle.
    *     If you activate this check, this method will load pointed items to check the link. So number
    *     of items loaded in session could increase after this call.</li> 
    *   <li><tt>"ONLY_PUBLICATIONS"</tt>: Check that all imports are using publications.
    *     This check perform verification without loading pointed data.</li> 
    *   <li><tt>"READONLY_CONSISTENCY"</tt>: Check that all Read Only and Read Write status of item loaded
    *     is consistent. Inconsistent status could lead to Product Structure desynchronization in case of Save
    *     (SYN_1 and SYN_2 errors in CATDUA).</li> 
    *   </ul>
    * @param oItemsWithError
    *   List of items with associated errors. Items can be duplicated in this list if there is several errors on one item.
    * @param oReporter
    *   List of errors. Use CATIReporter#GetListReporterInfo to retrieve all errors.
    *   Authorized values are:
    *   <ul>
    *      <li><tt>InputERR_1301:</tt></li>
    *       An import is not synchronized.
    *      <li><tt>InputERR_1302:</tt></li>
    *       Impossible to find pointed object by an import.
    *      <li><tt>InputERR_1303:</tt></li>
    *       Too many level of imports.
    *      <li><tt>InputERR_1304:</tt></li>
    *       Too many level of links.
    *      <li><tt>InputERR_1305:</tt></li>
    *       There is a cycle between items.
    *      <li><tt>InputERR_1306:</tt></li>
    *       There is a import without publication.
    *  </ul>
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: The check runs successfully whithout any error. </li> 
    *   <li><tt>S_FALSE</tt>: The check runs successfully and detects some errors, use oReporter to retrieve them. </li> 
    *   <li><tt>E_FAIL</tt>: The check fails with an internal error. The possible <b>returned errors </b> (listed by their identifier) are:</li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *       The PX1 licence is not available.
    *      <li><tt>InputERR_1004:</tt></li>
    *       Internal error.
    *      <li><tt>InputERR_1251:</tt></li>
    *       Requested rule is unknown.
    *      <li><tt>InputERR_1252:</tt></li>
    *       No item loaded in session.
    *  </ul>
    *  </ul>
    */
    static HRESULT CheckDesignRules(const CATListOfCATString& iListOfRulesToCheck,
            CATListValCATIxPDMItem_var* & oItemsWithError,
            CATIReporter* & oReporter);

   /**
    * Saves a session to a specific directory.
    * <br><b>Role:</b>This method allows you save a session to a specific directory 
    * (in interactive or batch) while keeping links consistency between all documents if some are renamed. 
    *
    * <p>As soon as you work on several documents, you have to use this method instead of the
    *  <tt>SaveAs</tt> method of the <tt>CATDocumentServices</tt> class to keep link consistency
    *  especially when renaming documents.</p>
    *
    * <p>Item is saved in the targeted directory only if:
    * <ul>
    *    <li>Item is loaded in session (see @href #GetxPDMItemsInSession )</li>
    *    <li>Item has status New or Modified (see @href CATIxPDMItem#NeedToBeSaved )</li>  
    *    <li>Item has been loaded from another location than the targeted directory </li>
    *    <li>Item being renamed or impacted by a rename (renaming Item with the same name is not supported) </li>
    * </ul>
    *
    * <p>This method allows also to export data coming from ENOVIA V5 or ENOVIA VPM V4 to a File directory.
	*
	* <p>Item not processed by this method:
    * <ul>
    *    <li>cgr loaded in Session</li>
    * </ul>
    *
    * <p>This method performs a complete export if the targeted directory doesn't contain any of 
    * documents in session. This means that all items will be saved in the targeted
    * directory even if they are not modified in session. 
    * <p>
    * <b>Notes</b> 
    * <ul>
    *    <li>This method does not consider pointing/pointed documents that are not loaded in session. </li>
    *    <li>if a Part is in Visualization mode in an assembly, it means that it is not loaded in session. 
    *        So Part will not be saved in the targeted directory.</li>
    * </ul>  
    * </p>
    * 
    * @param iDirectoryPath
    *   The path where all session items will be saved.
    *   This path could be a directory path or a DLName.
    *   It must be accessible with write access.
    * @param oErrorMessage
    *   The detailled error message filled if result is <tt>E_FAIL</tt> with the error <tt>InputERR_1108</tt>.
    *   <p>For other errors, same content as message associaded to returned error.</p>
    * @param iListItemToRename
    *   The list of items to rename. The list of new names is the <tt>iListOfNewNames</tt>. The two lists must
    *   have the same size. 
    *   <p> If an item of the directory is not added in this list, the used default name will be the CATIA display name.</p>
    *   <p>If items are not file based, but VPM or ENOVIA items, you must fill up <tt>iListItemToRename</tt> and
    *     <tt>iListOfNewNames</tt>. </p>
    *</p>
    * @param iListOfNewNames
    *   The list of new name for documents of <tt>iListItemToRename</tt>. Name should be file name (no DBCS) with correct extension
    *   and without any path. For example 'Part1.CATPart' or 'Part1'. 'C:\Part1.CATPart', 'Part\1' or 'Part*.Part' are not supported.
    *   If there is no extension, it is automatically added.
    *   <p>The size of <tt>iListDocToRename</tt> and <tt>iListOfNewNames</tt> must be exactly the same.
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: All items are successfully saved. </li> 
    *   <li><tt>S_FALSE</tt>: Some items have not been saved (item modified by synchro and read only),
    *                         warning message available in oErrorMessage parameter. </li> 
    *   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *       The PX1 licence is not available.
    *      <li><tt>InputERR_1009:</tt></li>
    *       List of documents to rename and list of new names must have the same size.
    *      <li><tt>InputERR_1106:</tt></li>
    *       Invalid input directory.
    *      <li><tt>InputERR_1107:</tt></li>
    *       Some documents cannot been saved, impossible to process.
    *      <li><tt>InputERR_1108:</tt></li>
    *       Internal error, see oErrorMessage for more details.
    *      <li><tt>InputERR_1110:</tt></li>
    *       Two documents with same display name exist in session. Duplicated name is available in error message.
    *      <li><tt>InputERR_1111:</tt></li>
    *       Invalid file name, check that name does not contain specific characters and that extension is correct.
    *       Invalid name and item are available in error message.
    *      <li><tt>InputERR_1118:</tt></li>
    *       One item of <tt>iListItemToRename</tt> is not loaded. Item name is available in error message.
    *      <li><tt>InputERR_1201:</tt></li>
    *		   File already exist, overwriten with different file is not allowed.
    *  </ul>
    *  </ul>
    *
    */
    static HRESULT SaveSessionToDirectory(const char* iDirectoryPath, CATUnicodeString& oErrorMessage,
         CATListValCATIxPDMItem_var* iListItemToRename=NULL,CATListOfCATUnicodeString* iListOfNewNames=NULL);

    /**
    * Item information to refresh in session.
    * @param All
    *        All attributes will be refreshed, see next values for details.
    * @param ReadWrite
    *        Read/Write or Read/Only status will be recomputed from file information.
    *        ReadOnly status is read at item opening and kept during the session, a ReadOnly item cannot be saved
    *        so this information should be refreshed in session before saving if you modify file right access.
    * @param UnresolvedLinks
    *        To optimize performances, V5 try to resolved a link only once. So if pointed item is not found, link
    *        will keep broken status during all the session. If you add the necessary file on disk during session,
    *        refreshing this information will allow to solve link.
    *        <br> This method is equivalent to 'Refresh' button in Edit/Links.
    *        <br> Notice that this call doesn't refresh all applicative information so display status could still be
    *        wrong in some cases.
    * @see CATxPDMSessionServices#RefreshItemInformation
    */
   enum ItemRefresh {All, ReadWrite, UnresolvedLinks};

    /**
    * Refreshes some session information on a loaded item.
    * <br><b>Role:</b>This method refreshes session information like Read/Write status or Unresolved link status.
    * This method should be called when some information changes on file system to update V5 session.
    * <br>Notice that only a very limited set of modification directly on file are supported when
    * item is loaded in V5 session.
    * V5 is not a database and does not support concurrent engineering in a File Base environment.
    * 
    * @param iPDMItem
    *   The item to refresh from file system.
    * @param iToRefresh
    *   The kind of information to refresh.
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: The information is successfully refreshed. </li> 
    *   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *       The PX1 licence is not available.
    *      <li><tt>InputERR_1005:</tt></li>
    *       The item is not loaded.
    *  </ul>
    *  </ul>
    *
    */
    static HRESULT RefreshItemInformation(CATIxPDMItem_var & iPDMItem,ItemRefresh& iToRefresh);

    /**
    * Sets an initial file name on an item.
    * <br><b>Role:</b>This method valuate the initial item name.
    * This method is available on item with "New" status, other items could be renamed only through CATxPDMSessionServices::SaveSessionToDirectory
    * 
    * @param iPDMItem
    *   The item to set .
    * @param iInitialFileName
    *   The initial file name to set on item.
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: The information is successfully refreshed. </li> 
    *   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *       The PX1 licence is not available.
    *      <li><tt>InputERR_1005:</tt></li>
    *       The item is not loaded.
    *      <li><tt>InputERR_1013:</tt></li>
    *       The item has already been saved.
    *  </ul>
    *  </ul>
    *
    */
    static HRESULT SetInitialDocFileName(CATIxPDMItem_var & iPDMItem,const CATUnicodeString& iInitialFileName);

    /**
    * Synchronizes external links of an item.
    * <br><b>Role:</b>This method retrieves all the external links of the
    * given document, and synchronizes them if they are loaded in session.
    * <br>Only activated links are synchronized.
    * <p>Notice that this API is equivalent to Synchronize button in Edit/Links panel.</p> 
    * <p>Save is necessary after a synchronization.</p> 
    * 
    * @param iPDMItem
    *   The item to synchonize its external links.
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: All external links of the given item are successfully synchronized. </li> 
    *   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *       The PX1 licence is not available.
    *      <li><tt>InputERR_1002:</tt></li>
    *       The input item pointer is NULL.
    *      <li><tt>InputERR_1003:</tt></li>
    *       Error during the synchronisation of one specific link.
    *      <li><tt>InputERR_1004:</tt></li>
    *       Internal error during the synchronisation process.
    *      <li><tt>InputERR_1005:</tt></li>
    *       The pointed item is not loaded.
    *  </ul>
    *  </ul>
    *
    */
    static HRESULT SynchronizeAllExternalLinks(CATIxPDMItem_var & iPDMItem);

    /**
    * Breaks external links of an item.
    * <br><b>Role:</b>This method retrieves all the external links of the
    * given document, and breaks them.
    * <br>Only few links can be broken (like geometrical or parameter imports).
    * <p>Notice that this API is equivalent to Isolate button in Edit/Links panel.</p> 
    * <p>Save is necessary after a break.</p> 
    * 
    * @param iPDMItem
    *   The item to break its external links.
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: All external links of the given item are successfully broken. </li> 
    *   <li><tt>S_FALSE</tt>: There is no more external links to break. </li> 
    *   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *       The PX1 licence is not available.
    *      <li><tt>InputERR_1002:</tt></li>
    *       The input item pointer is NULL.
    *      <li><tt>InputERR_1012:</tt></li>
    *       Error during the break of one specific link.
    *      <li><tt>InputERR_1004:</tt></li>
    *       Internal error during the break process.
    *  </ul>
    *  </ul>
    *
    */
    static HRESULT BreakAllExternalLinks(CATIxPDMItem_var & iPDMItem);

    /**
    * Manages links activity of an item.
    * <br><b>Role:</b>This method retrieves all the external links of the
    * given document, and activates (or deactivates) them.
    * <p>Notice that only geometrical links support this activation notion. A deactivated link
    * means that geometrical modifications are no more propagated through this link. The link still exists
    *  and is still taken into account in SendTo, @href CATxPDMFileServices#GetConsistentSet or @href CATxPDMFileServices#SearchRootItems .</p> 
    * <p>Notice that this API is equivalent to Activate/Deactivate buttons in Edit/Links panel.</p> 
    * <p>Save is necessary after a link status modification.</p> 
    * 
    * @param iPDMItem
    *   The item to activate/deactivate its external links.
    * @param iActivated
    *   The activation/deactivation status to set on links.
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: All external links of the given item are successfully activated/deactivated. </li>
    *   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *       The PX1 licence is not available.
    *      <li><tt>InputERR_1002:</tt></li>
    *       The input item pointer is NULL.
    *      <li><tt>InputERR_1004:</tt></li>
    *       Internal error during the activation process.
    *      <li><tt>InputERR_1007:</tt></li>
    *       Error during the activation process of one specific link.
    *  </ul>
    *  </ul>
    *
    */
    static HRESULT SetExternalLinksStatus(CATIxPDMItem_var & iPDMItem,const CATBoolean iActivated);

    /**
    * Checks that two features are compatible.
    * <br><b>Role:</b>This method checks that two features are compatible.
    * If two features are compatible, a link put on the first feature will be able to 
    * solve on second feature if you replace first document by second one.
    *
    * @param iFirstFeature
    *   The first feature to compare.
    * @param iSecondFeature
    *   The second feature to compare.
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: Features are compatible </li> 
    *   <li><tt>E_FAIL</tt>: There are two raisons: </li>
    *     <ul> 
    *       <li>The features are not compatible: no @href CATError class instance is generated. The static @href CATError#CATGetLastError 
    *       method returns <tt>NULL</tt></li>
    *      <li>The method has failed. A @href CATError class instance is generated. The possible <b>returned errors </b> (listed by their identifier) are:</li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *       The PX1 licence is not available.
    *      <li><tt>InputERR_1002:</tt></li>
    *       At least one input pointer is NULL.
    *  </ul>
    *  </ul>
    */
    static HRESULT CheckFeatureCompatibility(CATBaseUnknown *iFirstFeature ,CATBaseUnknown *iSecondFeature ) ;
    
    /**
    * Retrieves publications from an instance not imported in a specific item.
    * <br><b>Role:</b>This method verifies that all objects published by an instance are 
    * imported in a specific item.
    * 
    * @param iItemWithImportedPublications
    *   Item where we check that all objects published by 
    *  <tt>iDocumentInstanceWithPublications</tt> are imported.
    *   This item has always a CATPart type.
    * @param iDocumentInstanceWithPublications
    *    This is an instance of a Part in a Product (implementing CATIProduct interface).
    * @param oNonImportedPublications
    *    List of publications existing in <tt>iDocumentInstanceWithPublications</tt> 
    *    and not imported in iDocumentToCheck. If all publications are imported, this list
    *    is empty and return is <tt>S_OK</tt>.
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: The list is successfully computed.</li> 
    *   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *       The PX1 licence is not available.
    *      <li><tt>InputERR_1002:</tt></li>
    *       At least one input parameter is invalid.
    *  </ul>
    *  </ul>
    */
    static HRESULT FindNonImportedPublications(const CATIxPDMItem_var & iItemWithImportedPublications,
       CATBaseUnknown   *iDocumentInstanceWithPublications,
       CATListOfCATUnicodeString** oNonImportedPublications) ;

    /**
    * Retrieves if an object from an instance is imported in a specific item.
    * <br><b>Role:</b>This method verifies that an object in an instance context is 
    * imported in a specific item.The object can be a geometry, parameter or a publication.
    * 
    * @param iItemWithImport
    *   Item where we check that <tt>ipRefObject</tt> in context of Product
    *  <tt>iDocumentInstance</tt> is imported.
    *   This item has always a CATPart type.
    * @param ipRefObject
    *    Search object (geometry, parameter, publication).
    *    Use result of <tt>CATIPrdObjectPublisher::GetFinalObject</tt> as imput for publications.
    * @param iDocumentInstance
    *    This is an instance of a Part in a Product (implementing CATIProduct interface).
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: Object is imported.</li> 
    *   <li><tt>S_FALSE</tt>: Object is not imported.</li> 
    *   <li>Search failed: <b>Returned errors </b> (listed by their identifier) </li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *       The PX1 licence is not available.
    *      <li><tt>InputERR_1002:</tt></li>
    *       One input pointer is NULL.
    *  </ul>
    *  </ul>
    */
    static HRESULT IsImported (const CATIxPDMItem_var & iItemWithImport,
       CATBaseUnknown* ipRefObject,
       CATBaseUnknown* iDocumentInstance) ;

   /**
    * Unloads an item from session.
    * <br><b>Role:</b>This method unloads an item from session.
    * <p>This unload method can be used only is specific cases
    *   <ul>
    *      <li>If you are in batch mode, only root items can be unloaded. It means that you can't unload
    *      an item in a Product Structure, only root can be unloaded, Unloading root will automatically
    *      unload all pointed items.</li>
    *      <li>In interactive mode, same rules apply. There is one specific rule: an item associated
    *      to an editor cannot be unloaded, you have to close the interactive editor to unload it.</li>
    *  </ul>
    * </p>
    * <p>In short, this method can be used only to clean a session, not for selective unloading in a Product Structure.</p>
    * @param iItemToUnLoad
    *   The item to unload from session.
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: Item successfully unloaded. </li> 
   *   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *       The PX1 licence is not available.
    *      <li><tt>InputERR_1002:</tt></li>
    *       Not available on non loaded item.
    *      <li><tt>InputERR_1004:</tt></li>
    *       Internal error.
    *  </ul>
    *  </ul>
    */
    static HRESULT UnLoadItemFromSession(const CATIxPDMItem_var& iItemToUnLoad);

   /**
    * Check contents of item to verify if CATDUA will improve link status.
    * <br><b>Role:</b>This method verifies if some CATDUA rules about links (a sub-set of CATDUA rules) are detected
    * in the selected item. Only check is performed, no correction, no modification, this is the CATDUA jobs.
    * <p>If some rules are detected, it means that after CATDUA links status will be different. Some links will
    * potentially disappears and ConsistentSet could be very different.</p>
    * @param iItemToCheck
    *   The item to check.
    * @param iNeedToLaunchCATDUA
    *   TRUE if CATDUA can be launch to improve links status, FALSE otherwise.
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: Check successfully performed. </li> 
   *   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *       The PX1 licence is not available.
    *      <li><tt>InputERR_1002:</tt></li>
    *       Not available on non loaded item.
    *      <li><tt>InputERR_1004:</tt></li>
    *       Internal error.
    *  </ul>
    *  </ul>
    */
    static HRESULT NeedToLaunchCATDUAForLinksAnalysis(const CATIxPDMItem_var& iItemToCheck,CATBoolean& oNeedToLaunchCATDUA);
};
#endif

