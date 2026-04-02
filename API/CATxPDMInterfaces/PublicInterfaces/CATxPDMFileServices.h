#ifndef CATxPDMFileServices_H
#define CATxPDMFileServices_H
//COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATBaseUnknown.h" 
#include "CATListOfCATUnicodeString.h" 
#include "CATUnicodeString.h" 
#include "CATListOfCATIxPDMItem.h" 
#include "ExportedByCATxPDMInterfaces.h"

class CATIxPDMItem_var;
class CATIxPDMSendToService_var;

/**
  * Class for PDM services working directly on files not necessary loaded in session.
  * <b>Role:</b> Except the @href #CheckItemCompatibility method, all the methods of the class retrieve or create items. All the 
  *  methods do not load in session the files associated with the returned items. 
  * <p>Before using these methods in a batch, a @href CATSession must be created even no documents will be loaded. </p>
  * <p>All the static methods of the class pre-requisites the PX1 license. </p>
  * @see CATIxPDMItem
  */
class ExportedByCATxPDMInterfaces CATxPDMFileServices
{
 public:
    /**
    * Retrieves an item from a file path.
    * <br><b>Role:</b>This method creates,or retrieves in session, an item 
    * from a file path. This method does not load the file in session.
    * 
    * @param iInputFilePath
    *   The path of the input file 
    * @param oPDMItem
    *   The returned item. 
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: method successful, <tt>oPDMItem</tt> is correctly returned. </li> 
    *   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *       The PX1 licence is not available.
    *      <li><tt>InputERR_1113:</tt></li>
    *       <tt>iInputFilePath </tt> not found on disk.
    *  </ul>
    *  </ul>
    *
    */
    static HRESULT GetItemFromFile(const CATUnicodeString& iInputFilePath,CATIxPDMItem_var & oPDMItem);

    /**
    * Compatibility status between two items.
    * @param FullCompatible
    *        The two items are fully compatible.
    * @param CompatibleExeptFileName
    *        The two items are compatible except file name. Rename one file on your disk to be <tt>FullCompatible</tt>
    * @param NotCompatible
    *        The two items are not compatible.
    * @see CATxPDMFileServices#CheckItemCompatibility
    */
   enum ItemCompatibility {FullCompatible, CompatibleExeptFileName, NotCompatible};

    /**
    * Checks that two items are compatible.
    * <br><b>Role:</b>This method checks that two items are compatible.
    * This check is the mandatory condition to replace the first item by the second one.
    * <p>Notice that this test is not enough to insure that links put on first item will
    * solve on second item, but this is the minimum condition (it does not insure that pointed
    * geometry is available in document for example). </p>
    * <p>This method does not require that the two files associated with the items are loaded in session. </p>
    * @param iFirstItem
    *   The first item to compare.
    * @param iSecondItem
    *   The second item to compare.
    * @param oCompatibility
    *   The result of comparison.
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: The comparison is successfully done </li> 
    *   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *       The PX1 licence is not available.
    *      <li><tt>InputERR_1002:</tt></li>
    *       One input item is invalid.    
    *  </ul>
    *  </ul>
    */
    static HRESULT CheckItemCompatibility(CATIxPDMItem_var & iFirstItem,CATIxPDMItem_var & iSecondItem,ItemCompatibility& oCompatibility);


    /**
    * Searches root items in a list of directories.
    * <br><b>Role:</b>This method scans all files in the input directories to find which one
    * are root files. Root file means not pointed by another file contained into a directory of the input list.
    * <p>For example, a file A1 in directory A is pointed by another file B1 in directory B. If you call
    * this method with directory A and B, only B1 will be returned as root. </p>
    *  <p>The item associated with a root file is
    * either created or retrieved in session, and added in the output list. </p>
    * @param iListOfDirectory
    *   The list of directories to scan. Each element of the list must be the absolute path of a directory. 
    *   Like C:\tmp\MyDir(Windows) or
    *   /home/temp/MyDir (Unix).
    * @param iScanRecursively
    *   If <tt>TRUE</tt>, sub-directoryies will be scanned also.
    * @param oListOfRootItem
    *   The list of root items.
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: The root list is successfully computed. </li> 
    *   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *       The PX1 licence is not available.
    *      <li><tt>InputERR_1008:</tt></li>
    *       The input directory list is empty.
    *      <li><tt>InputERR_1112:</tt></li>
    *       Impossible to open a directory. The directory path name available in error message.
    *      <li><tt>InputERR_1113:</tt></li>
    *       A file could not be read ( no read access right for example ). The file name available in error message. 
    *      <li><tt>InputERR_1122:</tt></li>
    *       Some files are involved in a cycle, no roots can be found for those files. In this case, this method return
    *       E_FAIL with list of file involved in cycle in error message but other roots are (without cycle) are computed
    *       and returned normally in oListOfRootItem.
    *  </ul>
    *  </ul>
    */
    static HRESULT SearchRootItems(const CATListOfCATUnicodeString& iListOfDirectory,const CATBoolean iScanRecursively,
         CATListValCATIxPDMItem_var& oListOfRootItem);

    /**
    * Searches list of pointed items.
    * <br><b>Role:</b>This method allows identify  recursively all pointed items
    * by a given root item. The result is divided into two lists:
    *  <ul>
    *    <li>The <b>existing</b> pointed items</li>
    *    <p>It is the list of items whose the associated file exists on the disk. 
    *        The root item itself is included into this list.</p>
    *    <li>The <b>missing</b> pointed items</li>
    *    <p>It is the list of items whose the associated file does not exist on the disk. 
    *   </ul>
    * <p>The concatenation of these two lists is the same list as those computed by the Send To services. In other words it 
    *  is the <b>consistent set of files</b> for a file. This is
    * the mandatory files list to insure that all links will be resolved.  </p>
    * <p>Links between items are resolved with current activated locators. It means that result of
    * this method will be greatly impacted by your current locator settings (See Tools/Options/General, Documents Tab). </p>
    * 
    * @param iRootItem
    *   The root item to compute the consistent set of files from.
    * @param oListOfExistingPointedItem
    *   The list of existing  pointed items.
    *   An existing item has a file found on disk
    *   using current locators (Relative Folder, Other Folders...).
    *   There is no garanty on this list order, it could be change at any time.
    *   <tt>iRootItem</tt> is always in this list.
    * @param oListOfMissingPointedItem
    *   The list of missing pointed items. A missing item has a file not found on disk
    *   using current locators (Relative Folder, Other Folders...).
    *   There is no garanty on this list order, it could be change at any time.
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: The consistent set of items is successfully computed. </li> 
    *   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *       The PX1 licence is not available.
    *      <li><tt>InputERR_1006:</tt></li>
    *       Error during the process.
    *      <li><tt>InputERR_1119:</tt></li>
    *       An item is loaded and modified in session, it should be saved before. Item name (the 
    *       @href CATIxPDMItem#GetDocFileName string ) is available in message. 
    *              
    *  </ul>
    *  </ul>
    */
    static HRESULT GetConsistentSetOfItems(const CATIxPDMItem_var & iRootItem, 
                                           CATListValCATIxPDMItem_var& oListOfExistingPointedItem,
                                           CATListValCATIxPDMItem_var& oListOfMissingPointedItem);

    /**
    * Searches list of pointed items in a specific list of directories.
    * <br><b>Role:</b>This method allows identify  recursively all pointed items
    * by a given root item. The result is divided into two lists:
    *  <ul>
    *    <li>The <b>existing</b> pointed items</li>
    *    <p>It is the list of items whose the associated file exists on the disk. 
    *        The root item itself is included into this list.</p>
    *    <li>The <b>missing</b> pointed items</li>
    *    <p>It is the list of items whose the associated file does not exist on the disk. 
    *   </ul>
    * <p>The concatenation of these two lists is the same list as those computed by the Send To services. In other words it 
    *  is the <b>consistent set of files</b> for a file. This is
    * the mandatory files list to insure that all links will be resolved.  </p>
    * <p>Links between items are resolved inside list of directories provided as input. </p>
    * 
    * @param iRootItem
    *   The root item to compute the consistent set of files from.
    * @param iListOfDirectory
    *   The list of directories to scan. Each element of the list must be the absolute path of a directory. 
    *   Like C:\tmp\MyDir(Windows) or /home/temp/MyDir (Unix).
    * @param iScanRecursively
    *   If <tt>TRUE</tt>, sub-directoryies will be scanned also.
    * @param oListOfExistingPointedItem
    *   The list of existing  pointed items.
    *   An existing item has a file found on disk
    *   using current locators (Relative Folder, Other Folders...).
    *   There is no garanty on this list order, it could be change at any time.
    *   <tt>iRootItem</tt> is always in this list.
    * @param oListOfMissingPointedItem
    *   The list of missing pointed items. A missing item has a file not found on disk
    *   using current locators (Relative Folder, Other Folders...).
    *   There is no garanty on this list order, it could be change at any time.
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: The consistent set of items is successfully computed. </li> 
    *   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *       The PX1 licence is not available.
    *      <li><tt>InputERR_1006:</tt></li>
    *       Error during the process.
    *      <li><tt>InputERR_1112:</tt></li>
    *       Impossible to open a directory. The directory path name available in error message.
    *      <li><tt>InputERR_1119:</tt></li>
    *       An item is loaded and modified in session, it should be saved before. Item name (the 
    *       @href CATIxPDMItem#GetDocFileName string ) is available in message. 
    *              
    *  </ul>
    *  </ul>
    */
    static HRESULT GetConsistentSetOfItemsFromDirectory(const CATIxPDMItem_var & iRootItem, 
       const CATListOfCATUnicodeString iListOfDirectory,
       const CATBoolean iScanRecursively,
       CATListValCATIxPDMItem_var& oListOfExistingPointedItem,
       CATListValCATIxPDMItem_var& oListOfMissingPointedItem);

    /**
    * Searches list of impacted Drawings.
    * <br><b>Role:</b>This method retrieves CATDrawings impacted by one item.
    * <p>Drawings are searched inside list of directories provided as input. </p>
    * <p>If some CATDrawing are still loaded and modified in session, API will fail because it will not be able
    *    to check its links correctly. </p>
    * 
    * @param iRootItem
    *   The root item to compute the consistent set of files from. This item should be a CATPart or a CATProduct.
    * @param iListOfDirectory
    *   The list of directories to scan. Each element of the list must be the absolute path of a directory. 
    *   Like C:\tmp\MyDir(Windows) or /home/temp/MyDir (Unix).
    * @param iScanRecursively
    *   If <tt>TRUE</tt>, sub-directoryies will be scanned also.
    * @param oListOfImpactedDrawingsItem
    *   The list of impacted CATDrawing by iRootItem.
    *   There is no garanty on this list order, it could be change at any time.
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: The list has been successfully computed (it could be empty). </li> 
    *   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *       The PX1 licence is not available.
    *      <li><tt>InputERR_1006:</tt></li>
    *       Error during the process.
    *      <li><tt>InputERR_1112:</tt></li>
    *       Impossible to open a directory. The directory path name available in error message.
    *      <li><tt>InputERR_1132:</tt></li>
    *       A CATDrawing is still opened and modified in session, CATDrawing name available in error message.
    *  </ul>
    *  </ul>
    */
    static HRESULT GetImpactedDrawingsFromDirectory(const CATIxPDMItem_var & iRootItem, 
       const CATListOfCATUnicodeString& iListOfDirectory,
       const CATBoolean iScanRecursively,
       CATListValCATIxPDMItem_var& oListOfImpactedDrawingsItem);

    /**
    * Creates a Send To service pointer.
    * @param iTargetDirectory
    *   The destination directory where the sent files will be copied.
    *   The target directory must already exist on disk.
    * @param iKeepDirectory
    *   The option to control the tree structure creation in the target directory. 
    *   <ul><li><tt>iKeepDirectory=1:</tt> to preserve the relative tree structure of the files.
    *       This option will be effective only if there is a common root directory for all files.</li>
    *       <li><tt>iKeepDirectory=0:</tt> this is the default value. The files are directly copied in the destination directory. 
    *   </ul>
    * @param iReportFile
    *   Localization of the report file. If the null string value ("") is used, no report is done. Null string is the default value.
    * @param oSendToServices
    *   The pointer to a new instance of Send To service.
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: if Send To service is successfully created. </li> 
    *   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *       The PX1 licence is not available.
    *      <li><tt>InputERR_2000:</tt></li>
    *       Invalid Input.
   *       <li><tt>InputERR_2001:</tt></li>
    *       The target directory doesn't exist.
    *      <li><tt>InputERR_2003:</tt></li>
    *       The report file path does not exist.
    *   </ul>
    */

    static HRESULT CreateSendToService(CATIxPDMSendToService_var &oSendToServices,
                                       const CATUnicodeString &iTargetDirectory, 
                                       const CATBoolean iKeepDirectory = CATFalse, 
                                       const CATUnicodeString &iReportFile = CATUnicodeString(""));
};
#endif

