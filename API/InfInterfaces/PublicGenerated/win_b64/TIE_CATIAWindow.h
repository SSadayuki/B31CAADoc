#ifndef __TIE_CATIAWindow
#define __TIE_CATIAWindow

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAWindow.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAWindow */
#define declare_TIE_CATIAWindow(classe) \
 \
 \
class TIECATIAWindow##classe : public CATIAWindow \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAWindow, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ActiveViewer(CATIAViewer *& oViewer); \
      virtual HRESULT __stdcall get_Viewers(CATIAViewers *& oViewers); \
      virtual HRESULT __stdcall get_WindowState(CatWindowState & oWindowState); \
      virtual HRESULT __stdcall put_WindowState(CatWindowState iWindowState); \
      virtual HRESULT __stdcall get_Caption(CATBSTR & oCaption); \
      virtual HRESULT __stdcall put_Caption(const CATBSTR & iCaption); \
      virtual HRESULT __stdcall get_Width(CATLONG & oWidth); \
      virtual HRESULT __stdcall put_Width(CATLONG iWidth); \
      virtual HRESULT __stdcall get_Height(CATLONG & oHeight); \
      virtual HRESULT __stdcall put_Height(CATLONG iHeight); \
      virtual HRESULT __stdcall get_Left(CATLONG & oLeft); \
      virtual HRESULT __stdcall put_Left(CATLONG iLeft); \
      virtual HRESULT __stdcall get_Top(CATLONG & oTop); \
      virtual HRESULT __stdcall put_Top(CATLONG iTop); \
      virtual HRESULT __stdcall get_PageSetup(CATIAPageSetup *& oPageSetup); \
      virtual HRESULT __stdcall put_PageSetup(CATIAPageSetup * iPageSetup); \
      virtual HRESULT __stdcall NewWindow(CATIAWindow *& oWindow); \
      virtual HRESULT __stdcall Activate(); \
      virtual HRESULT __stdcall ActivateNext(); \
      virtual HRESULT __stdcall ActivatePrevious(); \
      virtual HRESULT __stdcall PrintOut(); \
      virtual HRESULT __stdcall PrintToFile(const CATBSTR & fileName); \
      virtual HRESULT __stdcall Close(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAWindow(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ActiveViewer(CATIAViewer *& oViewer); \
virtual HRESULT __stdcall get_Viewers(CATIAViewers *& oViewers); \
virtual HRESULT __stdcall get_WindowState(CatWindowState & oWindowState); \
virtual HRESULT __stdcall put_WindowState(CatWindowState iWindowState); \
virtual HRESULT __stdcall get_Caption(CATBSTR & oCaption); \
virtual HRESULT __stdcall put_Caption(const CATBSTR & iCaption); \
virtual HRESULT __stdcall get_Width(CATLONG & oWidth); \
virtual HRESULT __stdcall put_Width(CATLONG iWidth); \
virtual HRESULT __stdcall get_Height(CATLONG & oHeight); \
virtual HRESULT __stdcall put_Height(CATLONG iHeight); \
virtual HRESULT __stdcall get_Left(CATLONG & oLeft); \
virtual HRESULT __stdcall put_Left(CATLONG iLeft); \
virtual HRESULT __stdcall get_Top(CATLONG & oTop); \
virtual HRESULT __stdcall put_Top(CATLONG iTop); \
virtual HRESULT __stdcall get_PageSetup(CATIAPageSetup *& oPageSetup); \
virtual HRESULT __stdcall put_PageSetup(CATIAPageSetup * iPageSetup); \
virtual HRESULT __stdcall NewWindow(CATIAWindow *& oWindow); \
virtual HRESULT __stdcall Activate(); \
virtual HRESULT __stdcall ActivateNext(); \
virtual HRESULT __stdcall ActivatePrevious(); \
virtual HRESULT __stdcall PrintOut(); \
virtual HRESULT __stdcall PrintToFile(const CATBSTR & fileName); \
virtual HRESULT __stdcall Close(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAWindow(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ActiveViewer(CATIAViewer *& oViewer) \
{ \
return (ENVTIECALL(CATIAWindow,ENVTIETypeLetter,ENVTIELetter)get_ActiveViewer(oViewer)); \
} \
HRESULT __stdcall  ENVTIEName::get_Viewers(CATIAViewers *& oViewers) \
{ \
return (ENVTIECALL(CATIAWindow,ENVTIETypeLetter,ENVTIELetter)get_Viewers(oViewers)); \
} \
HRESULT __stdcall  ENVTIEName::get_WindowState(CatWindowState & oWindowState) \
{ \
return (ENVTIECALL(CATIAWindow,ENVTIETypeLetter,ENVTIELetter)get_WindowState(oWindowState)); \
} \
HRESULT __stdcall  ENVTIEName::put_WindowState(CatWindowState iWindowState) \
{ \
return (ENVTIECALL(CATIAWindow,ENVTIETypeLetter,ENVTIELetter)put_WindowState(iWindowState)); \
} \
HRESULT __stdcall  ENVTIEName::get_Caption(CATBSTR & oCaption) \
{ \
return (ENVTIECALL(CATIAWindow,ENVTIETypeLetter,ENVTIELetter)get_Caption(oCaption)); \
} \
HRESULT __stdcall  ENVTIEName::put_Caption(const CATBSTR & iCaption) \
{ \
return (ENVTIECALL(CATIAWindow,ENVTIETypeLetter,ENVTIELetter)put_Caption(iCaption)); \
} \
HRESULT __stdcall  ENVTIEName::get_Width(CATLONG & oWidth) \
{ \
return (ENVTIECALL(CATIAWindow,ENVTIETypeLetter,ENVTIELetter)get_Width(oWidth)); \
} \
HRESULT __stdcall  ENVTIEName::put_Width(CATLONG iWidth) \
{ \
return (ENVTIECALL(CATIAWindow,ENVTIETypeLetter,ENVTIELetter)put_Width(iWidth)); \
} \
HRESULT __stdcall  ENVTIEName::get_Height(CATLONG & oHeight) \
{ \
return (ENVTIECALL(CATIAWindow,ENVTIETypeLetter,ENVTIELetter)get_Height(oHeight)); \
} \
HRESULT __stdcall  ENVTIEName::put_Height(CATLONG iHeight) \
{ \
return (ENVTIECALL(CATIAWindow,ENVTIETypeLetter,ENVTIELetter)put_Height(iHeight)); \
} \
HRESULT __stdcall  ENVTIEName::get_Left(CATLONG & oLeft) \
{ \
return (ENVTIECALL(CATIAWindow,ENVTIETypeLetter,ENVTIELetter)get_Left(oLeft)); \
} \
HRESULT __stdcall  ENVTIEName::put_Left(CATLONG iLeft) \
{ \
return (ENVTIECALL(CATIAWindow,ENVTIETypeLetter,ENVTIELetter)put_Left(iLeft)); \
} \
HRESULT __stdcall  ENVTIEName::get_Top(CATLONG & oTop) \
{ \
return (ENVTIECALL(CATIAWindow,ENVTIETypeLetter,ENVTIELetter)get_Top(oTop)); \
} \
HRESULT __stdcall  ENVTIEName::put_Top(CATLONG iTop) \
{ \
return (ENVTIECALL(CATIAWindow,ENVTIETypeLetter,ENVTIELetter)put_Top(iTop)); \
} \
HRESULT __stdcall  ENVTIEName::get_PageSetup(CATIAPageSetup *& oPageSetup) \
{ \
return (ENVTIECALL(CATIAWindow,ENVTIETypeLetter,ENVTIELetter)get_PageSetup(oPageSetup)); \
} \
HRESULT __stdcall  ENVTIEName::put_PageSetup(CATIAPageSetup * iPageSetup) \
{ \
return (ENVTIECALL(CATIAWindow,ENVTIETypeLetter,ENVTIELetter)put_PageSetup(iPageSetup)); \
} \
HRESULT __stdcall  ENVTIEName::NewWindow(CATIAWindow *& oWindow) \
{ \
return (ENVTIECALL(CATIAWindow,ENVTIETypeLetter,ENVTIELetter)NewWindow(oWindow)); \
} \
HRESULT __stdcall  ENVTIEName::Activate() \
{ \
return (ENVTIECALL(CATIAWindow,ENVTIETypeLetter,ENVTIELetter)Activate()); \
} \
HRESULT __stdcall  ENVTIEName::ActivateNext() \
{ \
return (ENVTIECALL(CATIAWindow,ENVTIETypeLetter,ENVTIELetter)ActivateNext()); \
} \
HRESULT __stdcall  ENVTIEName::ActivatePrevious() \
{ \
return (ENVTIECALL(CATIAWindow,ENVTIETypeLetter,ENVTIELetter)ActivatePrevious()); \
} \
HRESULT __stdcall  ENVTIEName::PrintOut() \
{ \
return (ENVTIECALL(CATIAWindow,ENVTIETypeLetter,ENVTIELetter)PrintOut()); \
} \
HRESULT __stdcall  ENVTIEName::PrintToFile(const CATBSTR & fileName) \
{ \
return (ENVTIECALL(CATIAWindow,ENVTIETypeLetter,ENVTIELetter)PrintToFile(fileName)); \
} \
HRESULT __stdcall  ENVTIEName::Close() \
{ \
return (ENVTIECALL(CATIAWindow,ENVTIETypeLetter,ENVTIELetter)Close()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAWindow,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAWindow,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAWindow,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAWindow,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAWindow,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAWindow(classe)    TIECATIAWindow##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAWindow(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAWindow, classe) \
 \
 \
CATImplementTIEMethods(CATIAWindow, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAWindow, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAWindow, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAWindow, classe) \
 \
HRESULT __stdcall  TIECATIAWindow##classe::get_ActiveViewer(CATIAViewer *& oViewer) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oViewer); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ActiveViewer(oViewer); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oViewer); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWindow##classe::get_Viewers(CATIAViewers *& oViewers) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oViewers); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Viewers(oViewers); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oViewers); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWindow##classe::get_WindowState(CatWindowState & oWindowState) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oWindowState); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_WindowState(oWindowState); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oWindowState); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWindow##classe::put_WindowState(CatWindowState iWindowState) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iWindowState); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_WindowState(iWindowState); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iWindowState); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWindow##classe::get_Caption(CATBSTR & oCaption) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oCaption); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Caption(oCaption); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oCaption); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWindow##classe::put_Caption(const CATBSTR & iCaption) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iCaption); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Caption(iCaption); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iCaption); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWindow##classe::get_Width(CATLONG & oWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Width(oWidth); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWindow##classe::put_Width(CATLONG iWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Width(iWidth); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWindow##classe::get_Height(CATLONG & oHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Height(oHeight); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWindow##classe::put_Height(CATLONG iHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Height(iHeight); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWindow##classe::get_Left(CATLONG & oLeft) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oLeft); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Left(oLeft); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oLeft); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWindow##classe::put_Left(CATLONG iLeft) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLeft); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Left(iLeft); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLeft); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWindow##classe::get_Top(CATLONG & oTop) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oTop); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Top(oTop); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oTop); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWindow##classe::put_Top(CATLONG iTop) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iTop); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Top(iTop); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iTop); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWindow##classe::get_PageSetup(CATIAPageSetup *& oPageSetup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oPageSetup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PageSetup(oPageSetup); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oPageSetup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWindow##classe::put_PageSetup(CATIAPageSetup * iPageSetup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iPageSetup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PageSetup(iPageSetup); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iPageSetup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWindow##classe::NewWindow(CATIAWindow *& oWindow) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oWindow); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->NewWindow(oWindow); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oWindow); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWindow##classe::Activate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Activate(); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWindow##classe::ActivateNext() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ActivateNext(); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWindow##classe::ActivatePrevious() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ActivatePrevious(); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWindow##classe::PrintOut() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PrintOut(); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWindow##classe::PrintToFile(const CATBSTR & fileName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&fileName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PrintToFile(fileName); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&fileName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAWindow##classe::Close() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Close(); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAWindow##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAWindow##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAWindow##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAWindow##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAWindow##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAWindow(classe) \
 \
 \
declare_TIE_CATIAWindow(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAWindow##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAWindow,"CATIAWindow",CATIAWindow::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAWindow(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAWindow, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAWindow##classe(classe::MetaObject(),CATIAWindow::MetaObject(),(void *)CreateTIECATIAWindow##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAWindow(classe) \
 \
 \
declare_TIE_CATIAWindow(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAWindow##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAWindow,"CATIAWindow",CATIAWindow::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAWindow(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAWindow, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAWindow##classe(classe::MetaObject(),CATIAWindow::MetaObject(),(void *)CreateTIECATIAWindow##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAWindow(classe) TIE_CATIAWindow(classe)
#else
#define BOA_CATIAWindow(classe) CATImplementBOA(CATIAWindow, classe)
#endif

#endif
