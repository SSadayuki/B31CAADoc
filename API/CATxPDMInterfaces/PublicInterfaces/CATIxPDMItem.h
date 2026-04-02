/* -*-c++-*- */
#ifndef CATIxPDMItem_h
#define CATIxPDMItem_h
// COPYRIGHT DASSAULT SYSTEMES 2004
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#include "CATBaseUnknown.h"
#include "CATLISTP_CATMathTransformation.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "ExportedByCATxPDMInterfaces.h"

class CATUnicodeString;
class CATIDocId;
class CATIxPDMItem_var;
class CATListValCATIxPDMItem_var;

/**
 * Interface to access any V5 item that can be stored in an external File PDM system.
 * <b>Role</b>: This interface proposes an unified view of any V5 item
 * that can be stored in an external File PDM system.
 * <p>An item is a C++ object, handled by the current interface, which is associated with a file. This file can:
 * <ul>
 * <li><b>Exist</b> in a CATIA V5 session. Two cases to consider: </li>
 *   <ul>
 *      <li>The file already exists on the disk: i.e. the file has been loaded in session</li>
 *      <li>The file does not yet exist on the disk: i.e. a new file</li>
 *   </ul>
 * <li><b>Not Exist</b> in a CATIA V5 session. Two cases to consider: </li>
 *    <ul>
 *       <li>The file exists on the disk</li>
 *       <li>The file does not exist on the disk. It appends when the item is created by the @href CATIxPDMItem#GetChildrenItems method and
 *            the file associated with the child item does not exist on the disk ( i.e broken link with a pointed file)</li>
 *     </ul>
 * </ul> 
 * <p>To retrieve a first item instance: 
 *  <ul>
 *    <li>From a batch session use these two methods: </li>
 * <ul>
 * <li>@href CATxPDMFileServices#GetItemFromFile : the method does not load in session the file.
 * <li>@href CATxPDMSessionServices#GetItemFromDocument : the file is already loaded in session.
 *  </ul>
 *    <li>From a CATIA V5 interactive command, use the @href CATIxPDMSession interface. This interface being only implemented on 
 *        the interactive session. You can also use the two above methods.</li>
 * </ul> 
 *  </ul> </p>
 * <p>Once you have an item instance, use the <tt>CATIxPDMItem</tt> methods to get all needed information. Then use the @href CATIxPDMItem#GetChildrenItems method 
 *  to navigate between various items.</p>
 * <p>Never compare two item pointers or handlers, because you can have several instances of item 
 * representing the same file (loaded in session or not for example), always use the @href #Compare method.</p>
 * <p>Some methods work only on loaded items. To load an item, use the @href CATxPDMSessionServices#LoadItemInSession method.</p>
 * <p>All the methods pre-requisites the PX1 license </p>
  * @see CATIxPDMSession, CATxPDMFileServices , CATxPDMSessionServices
 */
extern ExportedByCATxPDMInterfaces IID IID_CATIxPDMItem;

class ExportedByCATxPDMInterfaces CATIxPDMItem : public CATBaseUnknown
{
  CATDeclareInterface;
  
public:

	/**
	* Retrieves the full path of the item.
   * <br><b>Role:</b>This method retrieves the full path of the file associated with the item. It does not require that the file 
   * is loaded in session.  
	* @param oDocFilePathName
	*   The full path of the file associated with the item (with directory name and file extension, 
   *   for example C:\Temp\Part1.CATPart). If the file has never been saved, the default name of the file is returned. 
   * @return 
   *  <ul>
   *  <li>S_OK: The full path is successfully returned. </li>
   *	<li>E_FAIL: Impossible to retrieve the full path</li>
   *  </ul>
	*/
	virtual HRESULT GetDocFileName(CATUnicodeString &oDocFilePathName) = 0;

	/**
	* Retrieves the real type of the item.
   * <br><b>Role:</b>This method retrieves the real of the file associated with the item. It allows you checking if a 
   * file with a V5 extension is really a V5 file.
   * <p>This method does not require that the file is loaded in session. </p>
	* @param oFileType
	*   The type of the file associated with the item. The returned string can be:  
   *  <ul>
   *  <li>For a file with a V5 extension:</li>
   *    <ul>
   *        <li>For a "right" V5 file : <tt>CATPart, CATProduct, CATDrawing,....</tt> </li>
   *         <p>It is the <i>real</i> type of the file that is returned. Even if you change the extension 
   *             (renaming xx.CATPart in yy.CATProduct), the real type (CATPart) will be returned.</p>
   *        <li>Otherwise, not a "right" V5 file: <tt>NotAV5File</tt> </li>
   *             <p>For example, suppose a txt file renamed myTextFile.CATPart. In this case, the string <tt>NotAV5File</tt> is returned,
   *                and not <tt>CATPart</tt></p>
   *     </ul>
   *
   *  <li>Otherwise, a file without a V5 extension: the file extension without any check.</li>
   *       <ul>
   *        <li>For a "right" V5 file : <tt>CATPart, CATProduct, CATDrawing,....</tt> </li>
   *             <p>Ex: for  Part3 and Part3.titi, two Part documents, <tt>CATPart</tt> will be returned </p>
   *        <li>Otherwise, not a "right" V5 file: The file extension without any check </li>
   *        </ul>
   *  </ul>
   *  
   * @return 
   *  <ul>
   *  <li>S_OK: A V5 file type is successfully returned. </li>
   *	<li>S_FALSE: The <tt>NotAV5File</tt> type is successfully returned.</li>
   *	<li>E_FAIL: The file is without extension and the file is not a V5 file.</li>
   *	<li>E_FAIL: The file is not loaded in session, and it does not exist on disk. </li>
   *  </ul>
	*/
	virtual HRESULT GetItemType(CATUnicodeString &oFileType) = 0;

	/**
	* Retrieves the identifier of the item.
   * <br><b>Role:</b>This method retrieves the identifier of the file associated with the item. It does not require that 
   *  the file is loaded in session.  
	* @param oDocId
	*   The identifier of the file associated with the item. The caller must release <tt>oDocId</tt> after its usage.
   * @return 
   *  <ul>
   *  <li>S_OK: The identifier is successfully returned. </li>
   *	<li>E_FAIL: The file is not loaded in session, and it does not exist on disk.</li>
	*/
	virtual HRESULT GetDocId(CATIDocId* &oDocId) = 0;

	/**
	* Retrieves the path used during the last save of an item.
   * <br><b>Role:</b>This method retrieves the full path of the file associated with the item used during the last 
   * save operation. It does not require that the file is loaded in session. 
	* @param oSavePath
	*   The full path of the file associated with the item during the last save. The file must be a V5 file.   
   *   <p>This path can be a Windows path, a Unix path (it depends on the last save has been performed on Unix or Windows), 
   *    or a DLName. For a DLName, this is the displayed name of the DLName. </p>
   *   <p>The returned path does not change if 
   *    <ul>
   *      <li>The file is renamed or moved directly on disk.</li>
   *      <li>The file is renamed or copied during Send To operations </li>
   *    </ul> 
   *    </p>
   * @return 
   *  <ul>
   *  <li>S_OK: The path is successfully returned. </li>
   *	<li>S_FALSE: The file has never been saved. </li>
   *	<li>E_FAIL: The file is not loaded in session, and it does not exist or there is no read access right.</li>
   *	<li>E_FAIL: The file is not a V5 file.</li>
   *  </ul>
   */
	virtual HRESULT GetLastSavePath(CATUnicodeString& oSavePath) = 0;

   /**
   * Retrieves the last save version of an item.
   * <br><b>Role:</b>This method retrieves the version used during the last save operation on the file associated with
   * the item. It does not require that the file is loaded in session.
   *  
   * @param oVersion
   *        The last save version of the file. This information is only accessible for V5 files, and those created from V5R10 and after. 
   *        The version is a none NLS string with the following format: 
   *        <p><tt>
   *            &lt<b>Version</b>&gtV&lt<b>/Version</b>&gt&lt<b>Release</b>&gtR&lt<b>/Release</b>&gt&lt<b>ServicePack</b>&gtSP&lt<b>/ServicePack</b>&gt&lt<b>HotFix</b>&gtHF&lt<b>/HotFix</b>&gt
   *        </tt></p>
   *          <p> where:
   *         <ul> 
   *            <li><tt>V</tt> is the version number.</li>
   *            <li><tt>R</tt> is the release number. </li>
   *            <li><tt>SP</tt> is the service pack number. If zero, it a GA level</li>
   *            <li><tt>HF</tt> is the hotfix number; If zero it is not an hotfix. 
   *                    The sub string <tt>&ltHotFix&gtHF&lt/HotFix&gt</tt></li> is returned only in V5R14 and upper level. </li>
   *         </ul></p>
   *         <p>First example: V5R11 : 
   *        <br><tt>
   *            &ltVersion&gt5&lt/Version&gt&ltRelease&gt11&lt/Release&gt&ltServicePack&gt0&lt/ServicePack&gt 
   *        </tt> </p>
   *        <p>Second example: V5R14SP3 : 
   *        <br><tt>
   *            &ltVersion&gt5&lt/Version&gt&ltRelease&gt14&lt/Release&gt&ltServicePack&gt13&lt/ServicePack&gt&ltHotFix&gt0&lt/HotFix&gt
   *        </tt></p>
   *        <p>For a file saved before the V5R10, the returned string is empty.</p>
   *     <p>The returned path does not change if:
   *    <ul>
   *      <li>The file is renamed or moved directly on disk.</li>
   *      <li>The file is renamed or copied during Send To operations </li>
   *    </ul> 
   *    </p>
   * @return 
   *     <ul>
   *     <li>S_OK: The version has been successfully retrieved. </li>
   *     <li>S_FALSE: The version is not available on the V5 file (previous to V5R10).</li>
   *     <li>S_FALSE: The file has never been saved. </li>
   *	   <li>E_FAIL: The file is not loaded in session, and it does not exist or there is no read access right.</li>
   *	   <li>E_FAIL: The file is not a V5 file.</li>
   *    
   *     </ul>
   */
	virtual HRESULT GetLastSaveVersion(CATUnicodeString& oVersion) = 0;

	/**
	* Reads the access status (Read Only or Read/Write) of the item.
   * <br><b>Role:</b>This method retrieves the access status of the file associated with the item. The status is based on the 
   * file access right read on the disk. This method does not require that the file is loaded in session. 
   * <p>During the session, if the status is changed on disk, the status returned by this method does not take into account the new right. 
   * If you need the "real" status, invoke the @href CATxPDMSessionServices#RefreshItemInformation method before the current one. 
   * @param oIsReadOnly
	*   The read only status. If the file is 'Read Only' the returned value is <tt>TRUE</tt> otherwise <tt>FALSE</tt>. 
   *   <p>If the file does not exist yet on the disk, but exists in session (a new V5 file), the right is 'Read/Write'. </p>
   *   <p>Caution: Interactively, if the 'Read Only' check button has been selected in the 'File/Open' 
   * dialog box, the returned value is <tt>TRUE</tt> whathever the file access right on the disk.</p>
   * @return 
   *  <ul>
   *  <li>S_OK: The access status is successfully returned. </li>
   *	<li>E_FAIL: The file is not loaded in session, and it does not exist on disk. </li>
   *  </ul>
	*/
	virtual HRESULT GetReadOnlyStatus(CATBoolean& oIsReadOnly) = 0;

	/**
	* Checks if the item needs to be saved.
   * <br><b>Role:</b>This method enables you to know if the file associated with the item needs to be saved or not. This method requires
   *  that the file exists in session.  
	* @param oNeedToBeSaved
	*   The returned status. The value is <tt>TRUE</tt> if the file has been modified in the session after the last save operation, 
   *   or if it is a new file never saved. Otherwise, the returned value is <tt>FALSE</tt>. 
   * @return 
   *  <ul>
   *  <li>S_OK: The status is successfully returned. </li>
   *	<li>E_FAIL: The file does not exist in session.</li>
   *  </ul>
	*/
	virtual HRESULT NeedToBeSaved(CATBoolean& oNeedToBeSaved) = 0;

	/**
	* Checks if the item can be loaded in session.
   * <br><b>Role:</b>This method checks if the file associated with the item can be loaded in session. There is no check on compatibility
   * with pointing items already loaded in session.  
	* @param oCanBeLoaded
	*   The returned status. The value is:
   *    <ul>
   *    <li><tt>TRUE:</tt> If the file is already loaded in session, or otherwise, if the file exists on the disk. </li>
   *    <li><tt>FALSE:</tt> If the file is not loaded, and the file does not exist on the disk.</li>
   *    </ul>
   *   <p>The method does not guaranty that in case of <tt>TRUE</tt> answser, the file could be effectively loaded in session. </p>
   * @return 
   *  <ul>
   *  <li>S_OK: The status is successfully returned. <tt>oCanBeLoaded</tt> can be <tt>TRUE</tt> or <tt>FALSE</tt> </li>
   *	<li>S_FALSE: The file is already loaded in session. In this case it it not necessary to check <tt>oCanBeLoaded</tt>, its
   *       value is always <tt>TRUE</tt> </li>
   *   <ul>
   *      <li><tt>InputERR_1123:</tt>: This non CATIA document can never be loaded</li>
   *  </ul>
   *  </ul>
	*/
	virtual HRESULT CanBeLoaded(CATBoolean& oCanBeLoaded) = 0;

   /**
	* Reads a property value.  
   * <br><b>Role:</b>This method reads a property defined in the file associated with the item. This method requires that the file exists in session. 
	* @param iPropName
	*   The property name. 
	* <br>The standard properties are:
	* <ul>
	*   <li>CN_PART_NUMBER</li>
	*   <li>CN_REVISION</li>
	*   <li>CN_DEFINITION</li>
	*   <li>CN_NOMENCLATURE</li>
	*   <li>CN_DESCRIPTIONREF</li>
	*   <li>CN_SOURCE</li>
	*   <li>CN_VOLUME</li>
	*   <li>CN_MASS</li>
	*   <li>CN_SURFACE</li>
	* </ul>
	* <br>Other properties are user defined properties.
	* @param oPropValue
	*   The property value
   * @return
   *   <ul>
   *   <li>S_OK: The property value is successfully computed. </li>
   *   <li>E_FAIL: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
   *   <ul>
   *      <li><tt>InputERR_1116:</tt>: The file is not loaded in session</li>
   *      <li><tt>InputERR_1120:</tt>: The property name has not been found</li>
   *  </ul>
   *  </ul>
	*/
	virtual HRESULT GetProperty(const CATUnicodeString &iPropName, CATUnicodeString &oPropValue) = 0;

   /**
	* Retrieves the property name list for the item.
   * <br><b>Role:</b>This method returns the list of available properties on this item including
   * standard properties (CN_PART_NUMBER...) and user properties. The file associated with the item needs to be loaded before.
	* @param oListPropertyNames
	*   The list of property names. 
   * @return
   *   <ul>
   *   <li>S_OK: The property name list is successfully computed. </li>
   *   <li>E_FAIL: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
   *   <ul>
   *      <li><tt>InputERR_1116:</tt>: The file is not loaded in session</li>
   *  </ul>
   *  </ul>
	*/
	virtual HRESULT GetPropertyNames(CATListOfCATUnicodeString & oListPropertyNames) = 0;

	/**
	* Sets a property value.  
   * <br><b>Role:</b>This method modifies a property defined in the file associated with the item. This method requires that the file exists in session.
   * Do not forget, after one or several property value modifications to save the items using the @href CATxPDMSessionServices#SaveSessionToDirectory
   *  method. 
	* @param iPropName
	*   The property name
	* <br>Standard properties are:
	* <ul>
	*   <li>CN_PART_NUMBER</li>
	*   <li>CN_REVISION</li>
	*   <li>CN_DEFINITION</li>
	*   <li>CN_NOMENCLATURE</li>
	*   <li>CN_DESCRIPTIONREF</li>
	*   <li>CN_SOURCE</li>
	* </ul>
	* <br>Other properties are user defined properties.
	* @param iPropValue
	*	The property value
   * @return
   *   <ul>
   *   <li>S_OK: Property names successfully valuated. </li>
   *   <li>E_FAIL: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
   *   <ul>
   *      <li><tt>InputERR_1116:</tt> The file is not loaded in session</li>
   *      <li><tt>InputERR_1120:</tt> The property name has not been found or cannot be modified.</li>
   *  </ul>
   *  </ul>
	*/
	virtual HRESULT SetProperty(const CATUnicodeString &iPropName, const CATUnicodeString &iPropValue) = 0;

	/**
	* Generates a preview file according to the given format.
	* <br><b>Role:</b>This method generates a file containing an image of the file associated with the item. This image 
   *  is a preview of the file. 
   * <p>This method does not require that the file is loaded in session. </p>
	* @param iFormat
	*   The generated file format. You can only use one among those:
	* <ul>
	*   <li>jpg</li>
	*   <li>bmp</li>
	*   <li>tif</li>
	*   <li>png</li>
	* </ul>	
   * @param oPreviewFileName
	*   The output file name of the generated preview file. The output file is generated at the same location as the
   *   file associated with the item. The name of the preview file is the name of the file 
   *   file associated with the item + extension of the format.
   *   <p><b>Example</b>: If the file associated with the item is 
   *    <ul> <li>Windows: <tt>c:\temp\Design\MyDesign.CATPart</tt>   </li>
   *   <li>Unix: <tt>/temp/Design/MyDesign.CATPart</tt> . </li>
   *    </ul>
   *    The output preview file ( with jpeg format) will be  
   *    <ul>
   *    <li>Windows:<tt>c:\temp\Design\MyDesign.CATPart.jpg</tt>   </li>
   *   <li>Unix:<tt>/temp/Design/MyDesign.CATPart.jpg</tt>  </li>
   *    </ul>
   * @return
   *   <ul>
   *   <li>S_OK: The preview file is successfully generated. </li>
   *   <li>E_FAIL: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
   *   <ul>
   *      <li><tt>InputERR_1002:</tt></li>
   *       Internal error.
   *      <li><tt>InputERR_1004:</tt></li>
   *       Internal error.
   *      <li><tt>InputERR_1114:</tt></li>
   *       Requested format is not supported.
   *      <li><tt>InputERR_1115:</tt></li>
   *       Impossible to write file.
   *      <li><tt>InputERR_1116:</tt></li>
   *       The file is not loaded in session, and it does not exist on disk.
   *      <li><tt>InputERR_1117:</tt></li>
   *       Not available on V4 data.
   *  </ul>
   *  </ul>
	*/
	virtual HRESULT GeneratePreview(const CATUnicodeString &iFormat, CATUnicodeString &oPreviewFileName) = 0;

	/**
	* Returns all children of the item. 
   * <br><b>Role:</b>This method retrieves all the child items from the current one. This method requires that the file associated with the
   * current item is loaded in session. 
	* @param oChildrenList
	*   The children list, those items could be loaded or not.
	* @param oChildrenLocationList
	*   The list of positioning matrix for Product Structure children. The size of this list is always equal to
   *    the size of the children list. If an element of  <tt>oChildrenList</tt> is not a Product the corresponding 
   *     matrix pointer is null.
   *   <p><b>Caution:</b>After calling the method, and in all cases you must check all elements of 
   *    the <tt>oChildrenLocationList</tt>. If one is non null, the pointer must be released. </p>
   *    
   * @return
   *   <ul>
   *   <li>S_OK: The children list is successfully computed. </li>
  *   <li>E_FAIL: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
   *   <ul>
   *      <li><tt>InputERR_1004:</tt></li>
   *       Internal error.
   *      <li><tt>InputERR_1116:</tt></li>
   *       The file is not loaded in session.
   *  </ul>
   *  </ul>
	*/
	virtual HRESULT GetChildrenItems(CATListValCATIxPDMItem_var &oChildrenList, CATLISTP(CATMathTransformation) &oChildrenLocationList) = 0; 

	/**
	* Checks if two items are describing the same file.
	* <br><b>Role:</b>Direct handler comparison can not be used because you can have an item representing the non loaded file
   * and another for the item loaded in session.
	* @param ixPDMItemToCompare
	*   This item to compare with the current one.
   * @return 
   *  <ul>
   *  <li>S_OK: The items are exactly the same. </li>
   *  <li>S_FALSE: The items are representing the same file with different status (loaded or not for example). </li>
   *	<li>E_FAIL: The items are different.</li>
   *  </ul>
	*/
	virtual HRESULT Compare(const CATIxPDMItem_var& ixPDMItemToCompare) = 0;

};

CATDeclareHandler(CATIxPDMItem, CATBaseUnknown);

#endif
