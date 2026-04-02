/* -*-c++-*- */
#ifndef CATICatalogBrowser_H
#define CATICatalogBrowser_H
// COPYRIGHT DASSAULT SYSTEMES 2000
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


#include "CATCclInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATListOfCATUnicodeString.h"

class CATUnicodeString;
class CATNotification;
class CATICatalogQueryResult;
class CATICatalogChapter;
class CATICatalogDescription;
class CATDlgDialog;
class CATIDocId;
class CATICatalogLink;

#ifndef LOCAL_DEFINITION_FOR_IID

extern ExportedByCATCclInterfaces IID IID_CATICatalogBrowser ;
#else
extern "C" const IID IID_CATICatalogBrowser ;
#endif

/**
 * Interface to manipulate the Catalog Browser.
 * <b>Role:</b> The Catalog Browser is a Dialog box to browse and 
 * instantiate component in context. 
 * <pr>The @href CATICatalogBrowserFactory interface enables to create and display 
 * an instance of this Dialog box.</p>
 * <p>This catalog browser will be created inside a @href CATCommand. After the creation,
 * you must retrieve the window of the Dialob box, thanks
 * to the @href #GetFatherWindow, and sets as parent for this window the command which
 * has instantiate it. It enables to your command to receive the notifications sent by 
 * the Catalog Browser:
 * <ul>
 * <li>@href #GetOKNotification </li>
 * <li>@href #GetCloseNotification </li>
 * <li>@href #GetCancelNotification </li>
 * <li>@href #GetSelectDescriptionNotification </li>
 * <li>@href #GetChangeChapterNotification </li>
 * </ul>
 * and in case of Dialog box closing use the @href #CloseBrowser to close it.</p>
 * <p>On the catalog browser you can impose to the end user a type of behavior:
 * <ul>
 * <li>@href #AuthorizeInstantiation </li>
 * <br>To authorize or not instantiation by contextual menu or double click on descriptions
 * <li>@href #AuthorizeDragDrop </li>
 * <br>To authorize or not instantiation by drag and drop. 
 * <li>@href #AuthorizeChangeCatalog </li>
 * <br>To authorize or not catalog change 
 * <li>@href #SetCurrentCatalogDocId </li>
 * <br>Propose a default Catalog path at the beginning
 * </ul></p>
 * <p>The last part concerning the catalog browser is the filtering. You can retrieve the end user filter or
 * impose it a filtering. There are two kinds of filter:
 * <ul>
 * <li>The internal filter: you impose it to the end user on a chapter, the end
 * user cannot change it.</li>
 * <li>The end user filter: those enter by the end user in the Filter editor, or
 * by the @href #SetCurrentQuery method you can set a end user filter</li>
 * </ul>
 * The filter applied to a chapter is the internal filter and the end user filter.
 */
class ExportedByCATCclInterfaces CATICatalogBrowser: public CATBaseUnknown
{
   CATDeclareInterface;

   public:

   // --------------------------------------------------------------
   //        Current catalog management
   // --------------------------------------------------------------
   /**
    * @deprecated V5R15
    * use GetCurrentCatalogDocId
    */
   virtual HRESULT GetCurrentCatalogPath(CATUnicodeString& iName) = 0;

   /**
    * @deprecated V5R15
    * use SetCurrentCatalogDocId
    */
   virtual HRESULT SetCurrentCatalogPath(CATUnicodeString iName) = 0;

   /**
    *  Sets the chapter to activate in the browser.
    *   @param iChapter
    *      The chapter to activate. It must be a chapter of the current CATICatalogQueryResult.
    *   @param iSendevent
    *      Send a event for updating the browser.     
    */
   virtual HRESULT SetCurrentChapter(const CATICatalogChapter* iChapter,const int iSendevent=0) = 0;
   
   /**
    * Builds a CATUnicodeString to store the current chapter.<br>
    * <br><b>Role</b>:This method is usefull if you want to be able to reopen Catalog browser with
    * same chapter. You need to store catalog path (with GetCurrentCatalogDocId) and
    * chapter path (with BuildCurrentChapterString).<br>
    * To restore current catalog and chapter, you need to call @href #SetCurrentCatalogDocId and after
    * @href #SetCurrentChapter.
    *   @param listpath
    *      A list of string to store and to use in SetCurrentChapter method.
    */
   virtual HRESULT BuildCurrentChapterString(CATListOfCATUnicodeString*& oListpath) = 0;
   
   /**
    * Sets a current sub-chapter in the catalog browser.
    *   @param Chapter
    *      The list of string describing the current chapter.
    */
   virtual HRESULT SetCurrentChapter(const CATListOfCATUnicodeString* iListpath) = 0;

   // --------------------------------------------------------------
   //        Browser management
   // --------------------------------------------------------------
   /**
    * Authorizes the instantiation with drag&drop.
    *   @param iEnable
    *      If iEnable is 1 then the functionality drag&drop is enable.
    *      Else 0 and the functionality is disable.
    *      <br>Attention, the Drag and Drop is only possible if the current command is the Select
    *       command. So if the catalog browser is launched from a command which is exclusive,
    *       or shared, the instantiation by drag and drop is unavailable. 
    */
   virtual HRESULT AuthorizeDragDrop(int iEnable) = 0;
   
   /**
    * Authorizes the instantiation with double click or the contextual menu.
    *   @param iEnable
    *      1: instantiation enable, 0: instantiation disable
    */
   virtual HRESULT AuthorizeInstantiation(int iEnable) = 0;
                                         
   /**
    * Authorizes or not user to change of current catalog. 
    *   @param iEnable
    *      0: OK available only for description in end chapters. File Selection Box Icon is Disable.<br>
    *      1: OK available for all description, default mode.  File Selection Box Icon is Enable. 
    */
   virtual HRESULT AuthorizeChangeCatalog(int iEnable) = 0;
   
   /**
    * Activates OK button only for end chapters, not for sub-chapters.
    *   @param iEnable
    *      1: OK available for all description, default mode <br>
    *      0: OK available only for description in end chapters.
    */
   virtual HRESULT OKActivationMode(int iEnable) = 0;

   // --------------------------------------------------------------
   //        Current query management
   // --------------------------------------------------------------
   /**
    * Retrieves the current query result.
    *   @param oQueryresult [out, CATBaseUnknown#Release]
    *      The current query result which is displayed.
    */
   virtual HRESULT GetCurrentQueryResult(CATICatalogQueryResult*& oQueryresult) = 0;
   
   /**
    * Sets the current query result.
    *   @param iQuery
    *      Add your own query
    *   @param iUserquery
    *      A user query is displayed in the browser, user can modify it.
    *      An internal quey allow you to hide some descriptions.
    */
   virtual HRESULT SetCurrentQuery(const CATUnicodeString& iQuery,int iUserquery=1) = 0;
   
   /**
    * Sets the selected description as the current in the browser.
    *   @param iDesc
    *      The selected description.
    */
   virtual HRESULT SetSelectedDescription(const CATICatalogDescription* iDesc) = 0;
   
   /**
    * Retrieves the selected description.
    *   @param oDesc [out, CATBaseUnknown#Release]
    *      The selected description.
    */
   virtual HRESULT GetSelectedDescription(CATICatalogDescription*& oDesc) = 0;

   
   // --------------------------------------------------------------
   //        Notifications
   // --------------------------------------------------------------
   /**
    * Retrieves the window to add notification.
    *   @param oWindow
    *      The current CATDlgDialog of browser.
    */
   virtual HRESULT GetFatherWindow(CATDlgDialog*& oWindow) = 0;
   
   /**
    * Retrieves a notification on the selected description.
    *   @param oNotif
    *      The notification which must be send when the user select a description (in the case of end-chapter only).
    */
   virtual HRESULT GetSelectDescriptionNotification(CATNotification*& oNotif) = 0;
   
   /**
    * Retrieves the notification when a modification on the current chapter has be done.
    *   @param oNotif
    *      The notification which must be send when the user change the current chapter.
    */
   virtual HRESULT GetChangeChapterNotification(CATNotification*& oNotif) = 0;
   
   /**
    * Retrieves the notification on the "OK" button (a final description need to be selected).
    * Available only if browser is built with mode OKCancel
    *   @param oNotif
    *      The notification which must be send when the user select the "OK" button.
    */
   virtual HRESULT GetOKNotification(CATNotification*&oNotif) = 0;
   
   /**
    * Retrieves the notification on the "Cancel" button.
    * Available only if browser is built with mode OKCancel
    *   The notification which must be send when the user select the "Cancel" button
    */
   virtual HRESULT GetCancelNotification(CATNotification*&oNotif) = 0;
   
   /**
    * Retrieves the notification when the browser is closed.
    * Available only if browser is built with mode Close
    *   @param oNotif
    *      The notification which must be send when the user close the panel.
    *   @return
    *      Error code of function.
    */
   virtual HRESULT GetCloseNotification(CATNotification*&oNotif) = 0;

   // --------------------------------------------------------------
   //        Close
   // --------------------------------------------------------------
   /**
    * Closes the current browser.
    */
   virtual HRESULT CloseBrowser() = 0;

   /**
    * Retrieves the current catalog.
    *   @param oDocId
    *      The current Catalog docid
    */
   virtual HRESULT GetCurrentCatalogDocId(CATIDocId** oDocId) = 0;

   /**
    * Sets the current catalog.
    *   @param oDocId
    *      The current Catalog docid
    
    */
   virtual HRESULT SetCurrentCatalogDocId(CATIDocId* iDocId) = 0;

   // No constructors or destructors on this pure virtual base class
   // --------------------------------------------------------------

   /**
    * @nodoc
    * 
    */
   virtual HRESULT GetPointedDescription(CATICatalogLink*& oDesc) = 0;
   
};

//------------------------------------------------------------------

CATDeclareHandler( CATICatalogBrowser, CATBaseUnknown );

#endif
