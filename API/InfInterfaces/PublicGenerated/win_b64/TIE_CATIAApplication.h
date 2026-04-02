#ifndef __TIE_CATIAApplication
#define __TIE_CATIAApplication

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAApplication.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAApplication */
#define declare_TIE_CATIAApplication(classe) \
 \
 \
class TIECATIAApplication##classe : public CATIAApplication \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAApplication, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Documents(CATIADocuments *& oDocuments); \
      virtual HRESULT __stdcall get_ActiveDocument(CATIADocument *& oDocument); \
      virtual HRESULT __stdcall get_Windows(CATIAWindows *& oWindows); \
      virtual HRESULT __stdcall get_ActiveWindow(CATIAWindow *& oWindow); \
      virtual HRESULT __stdcall get_Printers(CATIAPrinters *& oPrinters); \
      virtual HRESULT __stdcall get_ActivePrinter(CATIAPrinter *& oPrinter); \
      virtual HRESULT __stdcall put_ActivePrinter(CATIAPrinter * iPrinter); \
      virtual HRESULT __stdcall get_FileSystem(CATIAFileSystem *& oFileSystem); \
      virtual HRESULT __stdcall get_SystemService(CATIASystemService *& oService); \
      virtual HRESULT __stdcall get_FullName(CATBSTR & oFullNameBSTR); \
      virtual HRESULT __stdcall get_Path(CATBSTR & oPathBSTR); \
      virtual HRESULT __stdcall get_FileSearchOrder(CATBSTR & oDefaultFilePathBSTR); \
      virtual HRESULT __stdcall put_FileSearchOrder(const CATBSTR & iDefaultFilePathBSTR); \
      virtual HRESULT __stdcall get_LocalCache(CATBSTR & oLocalCachePathBSTR); \
      virtual HRESULT __stdcall put_LocalCache(const CATBSTR & iLocalCachePathBSTR); \
      virtual HRESULT __stdcall get_CacheSize(CATLONG & oLocalCacheSize); \
      virtual HRESULT __stdcall put_CacheSize(CATLONG iLocalCacheSize); \
      virtual HRESULT __stdcall get_Visible(CAT_VARIANT_BOOL & oVisible); \
      virtual HRESULT __stdcall put_Visible(CAT_VARIANT_BOOL iVisible); \
      virtual HRESULT __stdcall get_Interactive(CAT_VARIANT_BOOL & oInteractive); \
      virtual HRESULT __stdcall put_Interactive(CAT_VARIANT_BOOL iInteractive); \
      virtual HRESULT __stdcall get_DisplayFileAlerts(CAT_VARIANT_BOOL & oDisplayFileAlerts); \
      virtual HRESULT __stdcall put_DisplayFileAlerts(CAT_VARIANT_BOOL iDisplayFileAlerts); \
      virtual HRESULT __stdcall get_UndoRedoLock(CAT_VARIANT_BOOL & oUndoRedoLock); \
      virtual HRESULT __stdcall put_UndoRedoLock(CAT_VARIANT_BOOL iUndoRedoLock); \
      virtual HRESULT __stdcall DisableNewUndoRedoTransaction(); \
      virtual HRESULT __stdcall EnableNewUndoRedoTransaction(); \
      virtual HRESULT __stdcall get_Caption(CATBSTR & oCaptionBSTR); \
      virtual HRESULT __stdcall put_Caption(const CATBSTR & iCaptionBSTR); \
      virtual HRESULT __stdcall get_StatusBar(CATBSTR & oStatusBarBSTR); \
      virtual HRESULT __stdcall put_StatusBar(const CATBSTR & iStatusBarBSTR); \
      virtual HRESULT __stdcall get_Width(float & oWidth); \
      virtual HRESULT __stdcall put_Width(float iWidth); \
      virtual HRESULT __stdcall get_Height(float & oHeight); \
      virtual HRESULT __stdcall put_Height(float iHeight); \
      virtual HRESULT __stdcall get_Batch(CATIABatch *& oBatch); \
      virtual HRESULT __stdcall put_Batch(CATIABatch * iBatch); \
      virtual HRESULT __stdcall get_Left(float & oLeft); \
      virtual HRESULT __stdcall put_Left(float iLeft); \
      virtual HRESULT __stdcall get_Top(float & oTop); \
      virtual HRESULT __stdcall put_Top(float iTop); \
      virtual HRESULT __stdcall Help(const CATBSTR & iHelpID); \
      virtual HRESULT __stdcall Quit(); \
      virtual HRESULT __stdcall CreateMail(CATIAMail *& oMail); \
      virtual HRESULT __stdcall CreateSendTo(CATIASendToService *& oMail); \
      virtual HRESULT __stdcall MsgBox(const CATBSTR & iPrompt, short iButtons, const CATBSTR & iTitle, const CATBSTR & iHelpFile, CATLONG iContext, short & oClickedButton); \
      virtual HRESULT __stdcall InputBox(const CATBSTR & iPrompt, const CATBSTR & iTitle, const CATBSTR & iDefault, short iXPos, short iYPos, const CATBSTR & iHelpFile, CATLONG iContext, CATBSTR & oInputText); \
      virtual HRESULT __stdcall FileSelectionBox(const CATBSTR & iTitle, const CATBSTR & iExtension, CatFileSelectionMode iMode, CATBSTR & oFilePath); \
      virtual HRESULT __stdcall StartCommand(const CATBSTR & iCommandId); \
      virtual HRESULT __stdcall StartWorkbench(const CATBSTR & iworkbenchId); \
      virtual HRESULT __stdcall GetWorkbenchId(CATBSTR & oworkbenchId); \
      virtual HRESULT __stdcall get_Settings(CATIASettings *& oSettings); \
      virtual HRESULT __stdcall get_SettingControllers(CATIASettingControllers *& oCtrl); \
      virtual HRESULT __stdcall get_SystemConfiguration(CATIASystemConfiguration *& oConfiguration); \
      virtual HRESULT __stdcall get_RefreshDisplay(CAT_VARIANT_BOOL & oRefreshIsEnabled); \
      virtual HRESULT __stdcall put_RefreshDisplay(CAT_VARIANT_BOOL iRefreshIsEnabled); \
      virtual HRESULT __stdcall get_HSOSynchronized(CAT_VARIANT_BOOL & oHSOSynchronized); \
      virtual HRESULT __stdcall put_HSOSynchronized(CAT_VARIANT_BOOL iHSOSynchronized); \
      virtual HRESULT __stdcall BeginURConcatenation(); \
      virtual HRESULT __stdcall StopURConcatenation(const CATBSTR & iUndoStepNameBSTR); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAApplication(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Documents(CATIADocuments *& oDocuments); \
virtual HRESULT __stdcall get_ActiveDocument(CATIADocument *& oDocument); \
virtual HRESULT __stdcall get_Windows(CATIAWindows *& oWindows); \
virtual HRESULT __stdcall get_ActiveWindow(CATIAWindow *& oWindow); \
virtual HRESULT __stdcall get_Printers(CATIAPrinters *& oPrinters); \
virtual HRESULT __stdcall get_ActivePrinter(CATIAPrinter *& oPrinter); \
virtual HRESULT __stdcall put_ActivePrinter(CATIAPrinter * iPrinter); \
virtual HRESULT __stdcall get_FileSystem(CATIAFileSystem *& oFileSystem); \
virtual HRESULT __stdcall get_SystemService(CATIASystemService *& oService); \
virtual HRESULT __stdcall get_FullName(CATBSTR & oFullNameBSTR); \
virtual HRESULT __stdcall get_Path(CATBSTR & oPathBSTR); \
virtual HRESULT __stdcall get_FileSearchOrder(CATBSTR & oDefaultFilePathBSTR); \
virtual HRESULT __stdcall put_FileSearchOrder(const CATBSTR & iDefaultFilePathBSTR); \
virtual HRESULT __stdcall get_LocalCache(CATBSTR & oLocalCachePathBSTR); \
virtual HRESULT __stdcall put_LocalCache(const CATBSTR & iLocalCachePathBSTR); \
virtual HRESULT __stdcall get_CacheSize(CATLONG & oLocalCacheSize); \
virtual HRESULT __stdcall put_CacheSize(CATLONG iLocalCacheSize); \
virtual HRESULT __stdcall get_Visible(CAT_VARIANT_BOOL & oVisible); \
virtual HRESULT __stdcall put_Visible(CAT_VARIANT_BOOL iVisible); \
virtual HRESULT __stdcall get_Interactive(CAT_VARIANT_BOOL & oInteractive); \
virtual HRESULT __stdcall put_Interactive(CAT_VARIANT_BOOL iInteractive); \
virtual HRESULT __stdcall get_DisplayFileAlerts(CAT_VARIANT_BOOL & oDisplayFileAlerts); \
virtual HRESULT __stdcall put_DisplayFileAlerts(CAT_VARIANT_BOOL iDisplayFileAlerts); \
virtual HRESULT __stdcall get_UndoRedoLock(CAT_VARIANT_BOOL & oUndoRedoLock); \
virtual HRESULT __stdcall put_UndoRedoLock(CAT_VARIANT_BOOL iUndoRedoLock); \
virtual HRESULT __stdcall DisableNewUndoRedoTransaction(); \
virtual HRESULT __stdcall EnableNewUndoRedoTransaction(); \
virtual HRESULT __stdcall get_Caption(CATBSTR & oCaptionBSTR); \
virtual HRESULT __stdcall put_Caption(const CATBSTR & iCaptionBSTR); \
virtual HRESULT __stdcall get_StatusBar(CATBSTR & oStatusBarBSTR); \
virtual HRESULT __stdcall put_StatusBar(const CATBSTR & iStatusBarBSTR); \
virtual HRESULT __stdcall get_Width(float & oWidth); \
virtual HRESULT __stdcall put_Width(float iWidth); \
virtual HRESULT __stdcall get_Height(float & oHeight); \
virtual HRESULT __stdcall put_Height(float iHeight); \
virtual HRESULT __stdcall get_Batch(CATIABatch *& oBatch); \
virtual HRESULT __stdcall put_Batch(CATIABatch * iBatch); \
virtual HRESULT __stdcall get_Left(float & oLeft); \
virtual HRESULT __stdcall put_Left(float iLeft); \
virtual HRESULT __stdcall get_Top(float & oTop); \
virtual HRESULT __stdcall put_Top(float iTop); \
virtual HRESULT __stdcall Help(const CATBSTR & iHelpID); \
virtual HRESULT __stdcall Quit(); \
virtual HRESULT __stdcall CreateMail(CATIAMail *& oMail); \
virtual HRESULT __stdcall CreateSendTo(CATIASendToService *& oMail); \
virtual HRESULT __stdcall MsgBox(const CATBSTR & iPrompt, short iButtons, const CATBSTR & iTitle, const CATBSTR & iHelpFile, CATLONG iContext, short & oClickedButton); \
virtual HRESULT __stdcall InputBox(const CATBSTR & iPrompt, const CATBSTR & iTitle, const CATBSTR & iDefault, short iXPos, short iYPos, const CATBSTR & iHelpFile, CATLONG iContext, CATBSTR & oInputText); \
virtual HRESULT __stdcall FileSelectionBox(const CATBSTR & iTitle, const CATBSTR & iExtension, CatFileSelectionMode iMode, CATBSTR & oFilePath); \
virtual HRESULT __stdcall StartCommand(const CATBSTR & iCommandId); \
virtual HRESULT __stdcall StartWorkbench(const CATBSTR & iworkbenchId); \
virtual HRESULT __stdcall GetWorkbenchId(CATBSTR & oworkbenchId); \
virtual HRESULT __stdcall get_Settings(CATIASettings *& oSettings); \
virtual HRESULT __stdcall get_SettingControllers(CATIASettingControllers *& oCtrl); \
virtual HRESULT __stdcall get_SystemConfiguration(CATIASystemConfiguration *& oConfiguration); \
virtual HRESULT __stdcall get_RefreshDisplay(CAT_VARIANT_BOOL & oRefreshIsEnabled); \
virtual HRESULT __stdcall put_RefreshDisplay(CAT_VARIANT_BOOL iRefreshIsEnabled); \
virtual HRESULT __stdcall get_HSOSynchronized(CAT_VARIANT_BOOL & oHSOSynchronized); \
virtual HRESULT __stdcall put_HSOSynchronized(CAT_VARIANT_BOOL iHSOSynchronized); \
virtual HRESULT __stdcall BeginURConcatenation(); \
virtual HRESULT __stdcall StopURConcatenation(const CATBSTR & iUndoStepNameBSTR); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAApplication(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Documents(CATIADocuments *& oDocuments) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_Documents(oDocuments)); \
} \
HRESULT __stdcall  ENVTIEName::get_ActiveDocument(CATIADocument *& oDocument) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_ActiveDocument(oDocument)); \
} \
HRESULT __stdcall  ENVTIEName::get_Windows(CATIAWindows *& oWindows) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_Windows(oWindows)); \
} \
HRESULT __stdcall  ENVTIEName::get_ActiveWindow(CATIAWindow *& oWindow) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_ActiveWindow(oWindow)); \
} \
HRESULT __stdcall  ENVTIEName::get_Printers(CATIAPrinters *& oPrinters) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_Printers(oPrinters)); \
} \
HRESULT __stdcall  ENVTIEName::get_ActivePrinter(CATIAPrinter *& oPrinter) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_ActivePrinter(oPrinter)); \
} \
HRESULT __stdcall  ENVTIEName::put_ActivePrinter(CATIAPrinter * iPrinter) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)put_ActivePrinter(iPrinter)); \
} \
HRESULT __stdcall  ENVTIEName::get_FileSystem(CATIAFileSystem *& oFileSystem) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_FileSystem(oFileSystem)); \
} \
HRESULT __stdcall  ENVTIEName::get_SystemService(CATIASystemService *& oService) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_SystemService(oService)); \
} \
HRESULT __stdcall  ENVTIEName::get_FullName(CATBSTR & oFullNameBSTR) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_FullName(oFullNameBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::get_Path(CATBSTR & oPathBSTR) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_Path(oPathBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::get_FileSearchOrder(CATBSTR & oDefaultFilePathBSTR) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_FileSearchOrder(oDefaultFilePathBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::put_FileSearchOrder(const CATBSTR & iDefaultFilePathBSTR) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)put_FileSearchOrder(iDefaultFilePathBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::get_LocalCache(CATBSTR & oLocalCachePathBSTR) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_LocalCache(oLocalCachePathBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::put_LocalCache(const CATBSTR & iLocalCachePathBSTR) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)put_LocalCache(iLocalCachePathBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::get_CacheSize(CATLONG & oLocalCacheSize) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_CacheSize(oLocalCacheSize)); \
} \
HRESULT __stdcall  ENVTIEName::put_CacheSize(CATLONG iLocalCacheSize) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)put_CacheSize(iLocalCacheSize)); \
} \
HRESULT __stdcall  ENVTIEName::get_Visible(CAT_VARIANT_BOOL & oVisible) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_Visible(oVisible)); \
} \
HRESULT __stdcall  ENVTIEName::put_Visible(CAT_VARIANT_BOOL iVisible) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)put_Visible(iVisible)); \
} \
HRESULT __stdcall  ENVTIEName::get_Interactive(CAT_VARIANT_BOOL & oInteractive) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_Interactive(oInteractive)); \
} \
HRESULT __stdcall  ENVTIEName::put_Interactive(CAT_VARIANT_BOOL iInteractive) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)put_Interactive(iInteractive)); \
} \
HRESULT __stdcall  ENVTIEName::get_DisplayFileAlerts(CAT_VARIANT_BOOL & oDisplayFileAlerts) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_DisplayFileAlerts(oDisplayFileAlerts)); \
} \
HRESULT __stdcall  ENVTIEName::put_DisplayFileAlerts(CAT_VARIANT_BOOL iDisplayFileAlerts) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)put_DisplayFileAlerts(iDisplayFileAlerts)); \
} \
HRESULT __stdcall  ENVTIEName::get_UndoRedoLock(CAT_VARIANT_BOOL & oUndoRedoLock) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_UndoRedoLock(oUndoRedoLock)); \
} \
HRESULT __stdcall  ENVTIEName::put_UndoRedoLock(CAT_VARIANT_BOOL iUndoRedoLock) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)put_UndoRedoLock(iUndoRedoLock)); \
} \
HRESULT __stdcall  ENVTIEName::DisableNewUndoRedoTransaction() \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)DisableNewUndoRedoTransaction()); \
} \
HRESULT __stdcall  ENVTIEName::EnableNewUndoRedoTransaction() \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)EnableNewUndoRedoTransaction()); \
} \
HRESULT __stdcall  ENVTIEName::get_Caption(CATBSTR & oCaptionBSTR) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_Caption(oCaptionBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::put_Caption(const CATBSTR & iCaptionBSTR) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)put_Caption(iCaptionBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::get_StatusBar(CATBSTR & oStatusBarBSTR) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_StatusBar(oStatusBarBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::put_StatusBar(const CATBSTR & iStatusBarBSTR) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)put_StatusBar(iStatusBarBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::get_Width(float & oWidth) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_Width(oWidth)); \
} \
HRESULT __stdcall  ENVTIEName::put_Width(float iWidth) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)put_Width(iWidth)); \
} \
HRESULT __stdcall  ENVTIEName::get_Height(float & oHeight) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_Height(oHeight)); \
} \
HRESULT __stdcall  ENVTIEName::put_Height(float iHeight) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)put_Height(iHeight)); \
} \
HRESULT __stdcall  ENVTIEName::get_Batch(CATIABatch *& oBatch) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_Batch(oBatch)); \
} \
HRESULT __stdcall  ENVTIEName::put_Batch(CATIABatch * iBatch) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)put_Batch(iBatch)); \
} \
HRESULT __stdcall  ENVTIEName::get_Left(float & oLeft) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_Left(oLeft)); \
} \
HRESULT __stdcall  ENVTIEName::put_Left(float iLeft) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)put_Left(iLeft)); \
} \
HRESULT __stdcall  ENVTIEName::get_Top(float & oTop) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_Top(oTop)); \
} \
HRESULT __stdcall  ENVTIEName::put_Top(float iTop) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)put_Top(iTop)); \
} \
HRESULT __stdcall  ENVTIEName::Help(const CATBSTR & iHelpID) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)Help(iHelpID)); \
} \
HRESULT __stdcall  ENVTIEName::Quit() \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)Quit()); \
} \
HRESULT __stdcall  ENVTIEName::CreateMail(CATIAMail *& oMail) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)CreateMail(oMail)); \
} \
HRESULT __stdcall  ENVTIEName::CreateSendTo(CATIASendToService *& oMail) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)CreateSendTo(oMail)); \
} \
HRESULT __stdcall  ENVTIEName::MsgBox(const CATBSTR & iPrompt, short iButtons, const CATBSTR & iTitle, const CATBSTR & iHelpFile, CATLONG iContext, short & oClickedButton) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)MsgBox(iPrompt,iButtons,iTitle,iHelpFile,iContext,oClickedButton)); \
} \
HRESULT __stdcall  ENVTIEName::InputBox(const CATBSTR & iPrompt, const CATBSTR & iTitle, const CATBSTR & iDefault, short iXPos, short iYPos, const CATBSTR & iHelpFile, CATLONG iContext, CATBSTR & oInputText) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)InputBox(iPrompt,iTitle,iDefault,iXPos,iYPos,iHelpFile,iContext,oInputText)); \
} \
HRESULT __stdcall  ENVTIEName::FileSelectionBox(const CATBSTR & iTitle, const CATBSTR & iExtension, CatFileSelectionMode iMode, CATBSTR & oFilePath) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)FileSelectionBox(iTitle,iExtension,iMode,oFilePath)); \
} \
HRESULT __stdcall  ENVTIEName::StartCommand(const CATBSTR & iCommandId) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)StartCommand(iCommandId)); \
} \
HRESULT __stdcall  ENVTIEName::StartWorkbench(const CATBSTR & iworkbenchId) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)StartWorkbench(iworkbenchId)); \
} \
HRESULT __stdcall  ENVTIEName::GetWorkbenchId(CATBSTR & oworkbenchId) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)GetWorkbenchId(oworkbenchId)); \
} \
HRESULT __stdcall  ENVTIEName::get_Settings(CATIASettings *& oSettings) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_Settings(oSettings)); \
} \
HRESULT __stdcall  ENVTIEName::get_SettingControllers(CATIASettingControllers *& oCtrl) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_SettingControllers(oCtrl)); \
} \
HRESULT __stdcall  ENVTIEName::get_SystemConfiguration(CATIASystemConfiguration *& oConfiguration) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_SystemConfiguration(oConfiguration)); \
} \
HRESULT __stdcall  ENVTIEName::get_RefreshDisplay(CAT_VARIANT_BOOL & oRefreshIsEnabled) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_RefreshDisplay(oRefreshIsEnabled)); \
} \
HRESULT __stdcall  ENVTIEName::put_RefreshDisplay(CAT_VARIANT_BOOL iRefreshIsEnabled) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)put_RefreshDisplay(iRefreshIsEnabled)); \
} \
HRESULT __stdcall  ENVTIEName::get_HSOSynchronized(CAT_VARIANT_BOOL & oHSOSynchronized) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_HSOSynchronized(oHSOSynchronized)); \
} \
HRESULT __stdcall  ENVTIEName::put_HSOSynchronized(CAT_VARIANT_BOOL iHSOSynchronized) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)put_HSOSynchronized(iHSOSynchronized)); \
} \
HRESULT __stdcall  ENVTIEName::BeginURConcatenation() \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)BeginURConcatenation()); \
} \
HRESULT __stdcall  ENVTIEName::StopURConcatenation(const CATBSTR & iUndoStepNameBSTR) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)StopURConcatenation(iUndoStepNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAApplication,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAApplication(classe)    TIECATIAApplication##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAApplication(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAApplication, classe) \
 \
 \
CATImplementTIEMethods(CATIAApplication, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAApplication, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAApplication, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAApplication, classe) \
 \
HRESULT __stdcall  TIECATIAApplication##classe::get_Documents(CATIADocuments *& oDocuments) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oDocuments); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Documents(oDocuments); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oDocuments); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::get_ActiveDocument(CATIADocument *& oDocument) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oDocument); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ActiveDocument(oDocument); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oDocument); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::get_Windows(CATIAWindows *& oWindows) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oWindows); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Windows(oWindows); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oWindows); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::get_ActiveWindow(CATIAWindow *& oWindow) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oWindow); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ActiveWindow(oWindow); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oWindow); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::get_Printers(CATIAPrinters *& oPrinters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oPrinters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Printers(oPrinters); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oPrinters); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::get_ActivePrinter(CATIAPrinter *& oPrinter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oPrinter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ActivePrinter(oPrinter); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oPrinter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::put_ActivePrinter(CATIAPrinter * iPrinter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iPrinter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ActivePrinter(iPrinter); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iPrinter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::get_FileSystem(CATIAFileSystem *& oFileSystem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oFileSystem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FileSystem(oFileSystem); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oFileSystem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::get_SystemService(CATIASystemService *& oService) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oService); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SystemService(oService); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oService); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::get_FullName(CATBSTR & oFullNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oFullNameBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FullName(oFullNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oFullNameBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::get_Path(CATBSTR & oPathBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oPathBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Path(oPathBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oPathBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::get_FileSearchOrder(CATBSTR & oDefaultFilePathBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oDefaultFilePathBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FileSearchOrder(oDefaultFilePathBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oDefaultFilePathBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::put_FileSearchOrder(const CATBSTR & iDefaultFilePathBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iDefaultFilePathBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FileSearchOrder(iDefaultFilePathBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iDefaultFilePathBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::get_LocalCache(CATBSTR & oLocalCachePathBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oLocalCachePathBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LocalCache(oLocalCachePathBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oLocalCachePathBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::put_LocalCache(const CATBSTR & iLocalCachePathBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iLocalCachePathBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LocalCache(iLocalCachePathBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iLocalCachePathBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::get_CacheSize(CATLONG & oLocalCacheSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oLocalCacheSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CacheSize(oLocalCacheSize); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oLocalCacheSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::put_CacheSize(CATLONG iLocalCacheSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iLocalCacheSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CacheSize(iLocalCacheSize); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iLocalCacheSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::get_Visible(CAT_VARIANT_BOOL & oVisible) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oVisible); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Visible(oVisible); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oVisible); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::put_Visible(CAT_VARIANT_BOOL iVisible) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iVisible); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Visible(iVisible); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iVisible); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::get_Interactive(CAT_VARIANT_BOOL & oInteractive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oInteractive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Interactive(oInteractive); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oInteractive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::put_Interactive(CAT_VARIANT_BOOL iInteractive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iInteractive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Interactive(iInteractive); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iInteractive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::get_DisplayFileAlerts(CAT_VARIANT_BOOL & oDisplayFileAlerts) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oDisplayFileAlerts); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DisplayFileAlerts(oDisplayFileAlerts); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oDisplayFileAlerts); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::put_DisplayFileAlerts(CAT_VARIANT_BOOL iDisplayFileAlerts) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iDisplayFileAlerts); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DisplayFileAlerts(iDisplayFileAlerts); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iDisplayFileAlerts); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::get_UndoRedoLock(CAT_VARIANT_BOOL & oUndoRedoLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oUndoRedoLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UndoRedoLock(oUndoRedoLock); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oUndoRedoLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::put_UndoRedoLock(CAT_VARIANT_BOOL iUndoRedoLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iUndoRedoLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_UndoRedoLock(iUndoRedoLock); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iUndoRedoLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::DisableNewUndoRedoTransaction() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DisableNewUndoRedoTransaction(); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::EnableNewUndoRedoTransaction() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EnableNewUndoRedoTransaction(); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::get_Caption(CATBSTR & oCaptionBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oCaptionBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Caption(oCaptionBSTR); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oCaptionBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::put_Caption(const CATBSTR & iCaptionBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iCaptionBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Caption(iCaptionBSTR); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iCaptionBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::get_StatusBar(CATBSTR & oStatusBarBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oStatusBarBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StatusBar(oStatusBarBSTR); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oStatusBarBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::put_StatusBar(const CATBSTR & iStatusBarBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iStatusBarBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_StatusBar(iStatusBarBSTR); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iStatusBarBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::get_Width(float & oWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Width(oWidth); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::put_Width(float iWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Width(iWidth); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::get_Height(float & oHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Height(oHeight); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::put_Height(float iHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&iHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Height(iHeight); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&iHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::get_Batch(CATIABatch *& oBatch) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&oBatch); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Batch(oBatch); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&oBatch); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::put_Batch(CATIABatch * iBatch) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&iBatch); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Batch(iBatch); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&iBatch); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::get_Left(float & oLeft) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&oLeft); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Left(oLeft); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&oLeft); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::put_Left(float iLeft) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&iLeft); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Left(iLeft); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&iLeft); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::get_Top(float & oTop) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&oTop); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Top(oTop); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&oTop); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::put_Top(float iTop) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&iTop); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Top(iTop); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&iTop); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::Help(const CATBSTR & iHelpID) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&iHelpID); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Help(iHelpID); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&iHelpID); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::Quit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Quit(); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::CreateMail(CATIAMail *& oMail) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&oMail); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateMail(oMail); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&oMail); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::CreateSendTo(CATIASendToService *& oMail) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&oMail); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateSendTo(oMail); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&oMail); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::MsgBox(const CATBSTR & iPrompt, short iButtons, const CATBSTR & iTitle, const CATBSTR & iHelpFile, CATLONG iContext, short & oClickedButton) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&iPrompt,&iButtons,&iTitle,&iHelpFile,&iContext,&oClickedButton); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MsgBox(iPrompt,iButtons,iTitle,iHelpFile,iContext,oClickedButton); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&iPrompt,&iButtons,&iTitle,&iHelpFile,&iContext,&oClickedButton); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::InputBox(const CATBSTR & iPrompt, const CATBSTR & iTitle, const CATBSTR & iDefault, short iXPos, short iYPos, const CATBSTR & iHelpFile, CATLONG iContext, CATBSTR & oInputText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&iPrompt,&iTitle,&iDefault,&iXPos,&iYPos,&iHelpFile,&iContext,&oInputText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InputBox(iPrompt,iTitle,iDefault,iXPos,iYPos,iHelpFile,iContext,oInputText); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&iPrompt,&iTitle,&iDefault,&iXPos,&iYPos,&iHelpFile,&iContext,&oInputText); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::FileSelectionBox(const CATBSTR & iTitle, const CATBSTR & iExtension, CatFileSelectionMode iMode, CATBSTR & oFilePath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&iTitle,&iExtension,&iMode,&oFilePath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FileSelectionBox(iTitle,iExtension,iMode,oFilePath); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&iTitle,&iExtension,&iMode,&oFilePath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::StartCommand(const CATBSTR & iCommandId) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&iCommandId); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->StartCommand(iCommandId); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&iCommandId); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::StartWorkbench(const CATBSTR & iworkbenchId) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&iworkbenchId); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->StartWorkbench(iworkbenchId); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&iworkbenchId); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::GetWorkbenchId(CATBSTR & oworkbenchId) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&oworkbenchId); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetWorkbenchId(oworkbenchId); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&oworkbenchId); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::get_Settings(CATIASettings *& oSettings) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&oSettings); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Settings(oSettings); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&oSettings); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::get_SettingControllers(CATIASettingControllers *& oCtrl) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&oCtrl); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SettingControllers(oCtrl); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&oCtrl); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::get_SystemConfiguration(CATIASystemConfiguration *& oConfiguration) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&oConfiguration); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SystemConfiguration(oConfiguration); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&oConfiguration); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::get_RefreshDisplay(CAT_VARIANT_BOOL & oRefreshIsEnabled) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&oRefreshIsEnabled); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RefreshDisplay(oRefreshIsEnabled); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&oRefreshIsEnabled); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::put_RefreshDisplay(CAT_VARIANT_BOOL iRefreshIsEnabled) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&iRefreshIsEnabled); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RefreshDisplay(iRefreshIsEnabled); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&iRefreshIsEnabled); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::get_HSOSynchronized(CAT_VARIANT_BOOL & oHSOSynchronized) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&oHSOSynchronized); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HSOSynchronized(oHSOSynchronized); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&oHSOSynchronized); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::put_HSOSynchronized(CAT_VARIANT_BOOL iHSOSynchronized) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&iHSOSynchronized); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_HSOSynchronized(iHSOSynchronized); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&iHSOSynchronized); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::BeginURConcatenation() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BeginURConcatenation(); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAApplication##classe::StopURConcatenation(const CATBSTR & iUndoStepNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,60,&_Trac2,&iUndoStepNameBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->StopURConcatenation(iUndoStepNameBSTR); \
   ExitAfterCall(this,60,_Trac2,&_ret_arg,&iUndoStepNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAApplication##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,61,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,61,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAApplication##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,62,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,62,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAApplication##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,63,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,63,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAApplication##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,64,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,64,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAApplication##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,65,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,65,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAApplication(classe) \
 \
 \
declare_TIE_CATIAApplication(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAApplication##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAApplication,"CATIAApplication",CATIAApplication::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAApplication(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAApplication, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAApplication##classe(classe::MetaObject(),CATIAApplication::MetaObject(),(void *)CreateTIECATIAApplication##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAApplication(classe) \
 \
 \
declare_TIE_CATIAApplication(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAApplication##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAApplication,"CATIAApplication",CATIAApplication::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAApplication(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAApplication, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAApplication##classe(classe::MetaObject(),CATIAApplication::MetaObject(),(void *)CreateTIECATIAApplication##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAApplication(classe) TIE_CATIAApplication(classe)
#else
#define BOA_CATIAApplication(classe) CATImplementBOA(CATIAApplication, classe)
#endif

#endif
