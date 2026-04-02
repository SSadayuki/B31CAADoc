#ifndef __TIE_CATIAGeneralSessionSettingAtt
#define __TIE_CATIAGeneralSessionSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAGeneralSessionSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAGeneralSessionSettingAtt */
#define declare_TIE_CATIAGeneralSessionSettingAtt(classe) \
 \
 \
class TIECATIAGeneralSessionSettingAtt##classe : public CATIAGeneralSessionSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAGeneralSessionSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_UIStyle(CATGenUIStyle & oUIStyle); \
      virtual HRESULT __stdcall put_UIStyle(CATGenUIStyle iUIStyle); \
      virtual HRESULT __stdcall GetUIStyleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetUIStyleLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AutoSave(CATGenDataSave & oAutoSave); \
      virtual HRESULT __stdcall put_AutoSave(CATGenDataSave iAutoSave); \
      virtual HRESULT __stdcall GetAutoSaveInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAutoSaveLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_TimeRoll(CATLONG & oTimeRoll); \
      virtual HRESULT __stdcall put_TimeRoll(CATLONG iTimeRoll); \
      virtual HRESULT __stdcall get_RefDoc(CAT_VARIANT_BOOL & oRefDoc); \
      virtual HRESULT __stdcall put_RefDoc(CAT_VARIANT_BOOL iRefDoc); \
      virtual HRESULT __stdcall GetRefDocInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetRefDocLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_Conferencing(CATGenConferencing & oConf); \
      virtual HRESULT __stdcall put_Conferencing(CATGenConferencing iConf); \
      virtual HRESULT __stdcall GetConferencingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetConferencingLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DragDrop(CAT_VARIANT_BOOL & oDragDrop); \
      virtual HRESULT __stdcall put_DragDrop(CAT_VARIANT_BOOL iDragDrop); \
      virtual HRESULT __stdcall GetDragDropInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDragDropLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall Commit(); \
      virtual HRESULT __stdcall Rollback(); \
      virtual HRESULT __stdcall ResetToAdminValues(); \
      virtual HRESULT __stdcall ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList); \
      virtual HRESULT __stdcall SaveRepository(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAGeneralSessionSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_UIStyle(CATGenUIStyle & oUIStyle); \
virtual HRESULT __stdcall put_UIStyle(CATGenUIStyle iUIStyle); \
virtual HRESULT __stdcall GetUIStyleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetUIStyleLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AutoSave(CATGenDataSave & oAutoSave); \
virtual HRESULT __stdcall put_AutoSave(CATGenDataSave iAutoSave); \
virtual HRESULT __stdcall GetAutoSaveInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAutoSaveLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_TimeRoll(CATLONG & oTimeRoll); \
virtual HRESULT __stdcall put_TimeRoll(CATLONG iTimeRoll); \
virtual HRESULT __stdcall get_RefDoc(CAT_VARIANT_BOOL & oRefDoc); \
virtual HRESULT __stdcall put_RefDoc(CAT_VARIANT_BOOL iRefDoc); \
virtual HRESULT __stdcall GetRefDocInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetRefDocLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_Conferencing(CATGenConferencing & oConf); \
virtual HRESULT __stdcall put_Conferencing(CATGenConferencing iConf); \
virtual HRESULT __stdcall GetConferencingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetConferencingLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DragDrop(CAT_VARIANT_BOOL & oDragDrop); \
virtual HRESULT __stdcall put_DragDrop(CAT_VARIANT_BOOL iDragDrop); \
virtual HRESULT __stdcall GetDragDropInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDragDropLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall Commit(); \
virtual HRESULT __stdcall Rollback(); \
virtual HRESULT __stdcall ResetToAdminValues(); \
virtual HRESULT __stdcall ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList); \
virtual HRESULT __stdcall SaveRepository(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAGeneralSessionSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_UIStyle(CATGenUIStyle & oUIStyle) \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_UIStyle(oUIStyle)); \
} \
HRESULT __stdcall  ENVTIEName::put_UIStyle(CATGenUIStyle iUIStyle) \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_UIStyle(iUIStyle)); \
} \
HRESULT __stdcall  ENVTIEName::GetUIStyleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetUIStyleInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetUIStyleLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetUIStyleLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AutoSave(CATGenDataSave & oAutoSave) \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AutoSave(oAutoSave)); \
} \
HRESULT __stdcall  ENVTIEName::put_AutoSave(CATGenDataSave iAutoSave) \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AutoSave(iAutoSave)); \
} \
HRESULT __stdcall  ENVTIEName::GetAutoSaveInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAutoSaveInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAutoSaveLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAutoSaveLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_TimeRoll(CATLONG & oTimeRoll) \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_TimeRoll(oTimeRoll)); \
} \
HRESULT __stdcall  ENVTIEName::put_TimeRoll(CATLONG iTimeRoll) \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_TimeRoll(iTimeRoll)); \
} \
HRESULT __stdcall  ENVTIEName::get_RefDoc(CAT_VARIANT_BOOL & oRefDoc) \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_RefDoc(oRefDoc)); \
} \
HRESULT __stdcall  ENVTIEName::put_RefDoc(CAT_VARIANT_BOOL iRefDoc) \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_RefDoc(iRefDoc)); \
} \
HRESULT __stdcall  ENVTIEName::GetRefDocInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetRefDocInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetRefDocLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetRefDocLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_Conferencing(CATGenConferencing & oConf) \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Conferencing(oConf)); \
} \
HRESULT __stdcall  ENVTIEName::put_Conferencing(CATGenConferencing iConf) \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Conferencing(iConf)); \
} \
HRESULT __stdcall  ENVTIEName::GetConferencingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetConferencingInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetConferencingLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetConferencingLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DragDrop(CAT_VARIANT_BOOL & oDragDrop) \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DragDrop(oDragDrop)); \
} \
HRESULT __stdcall  ENVTIEName::put_DragDrop(CAT_VARIANT_BOOL iDragDrop) \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DragDrop(iDragDrop)); \
} \
HRESULT __stdcall  ENVTIEName::GetDragDropInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDragDropInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDragDropLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDragDropLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAGeneralSessionSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAGeneralSessionSettingAtt(classe)    TIECATIAGeneralSessionSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAGeneralSessionSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAGeneralSessionSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAGeneralSessionSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAGeneralSessionSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAGeneralSessionSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAGeneralSessionSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAGeneralSessionSettingAtt##classe::get_UIStyle(CATGenUIStyle & oUIStyle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oUIStyle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UIStyle(oUIStyle); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oUIStyle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGeneralSessionSettingAtt##classe::put_UIStyle(CATGenUIStyle iUIStyle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iUIStyle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_UIStyle(iUIStyle); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iUIStyle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGeneralSessionSettingAtt##classe::GetUIStyleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUIStyleInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGeneralSessionSettingAtt##classe::SetUIStyleLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUIStyleLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGeneralSessionSettingAtt##classe::get_AutoSave(CATGenDataSave & oAutoSave) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oAutoSave); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AutoSave(oAutoSave); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oAutoSave); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGeneralSessionSettingAtt##classe::put_AutoSave(CATGenDataSave iAutoSave) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iAutoSave); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AutoSave(iAutoSave); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iAutoSave); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGeneralSessionSettingAtt##classe::GetAutoSaveInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAutoSaveInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGeneralSessionSettingAtt##classe::SetAutoSaveLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAutoSaveLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGeneralSessionSettingAtt##classe::get_TimeRoll(CATLONG & oTimeRoll) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oTimeRoll); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TimeRoll(oTimeRoll); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oTimeRoll); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGeneralSessionSettingAtt##classe::put_TimeRoll(CATLONG iTimeRoll) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iTimeRoll); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TimeRoll(iTimeRoll); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iTimeRoll); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGeneralSessionSettingAtt##classe::get_RefDoc(CAT_VARIANT_BOOL & oRefDoc) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oRefDoc); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RefDoc(oRefDoc); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oRefDoc); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGeneralSessionSettingAtt##classe::put_RefDoc(CAT_VARIANT_BOOL iRefDoc) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iRefDoc); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RefDoc(iRefDoc); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iRefDoc); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGeneralSessionSettingAtt##classe::GetRefDocInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRefDocInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGeneralSessionSettingAtt##classe::SetRefDocLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRefDocLock(iLocked); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGeneralSessionSettingAtt##classe::get_Conferencing(CATGenConferencing & oConf) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oConf); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Conferencing(oConf); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oConf); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGeneralSessionSettingAtt##classe::put_Conferencing(CATGenConferencing iConf) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iConf); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Conferencing(iConf); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iConf); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGeneralSessionSettingAtt##classe::GetConferencingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConferencingInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGeneralSessionSettingAtt##classe::SetConferencingLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetConferencingLock(iLocked); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGeneralSessionSettingAtt##classe::get_DragDrop(CAT_VARIANT_BOOL & oDragDrop) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oDragDrop); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DragDrop(oDragDrop); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oDragDrop); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGeneralSessionSettingAtt##classe::put_DragDrop(CAT_VARIANT_BOOL iDragDrop) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iDragDrop); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DragDrop(iDragDrop); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iDragDrop); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGeneralSessionSettingAtt##classe::GetDragDropInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDragDropInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGeneralSessionSettingAtt##classe::SetDragDropLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDragDropLock(iLocked); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGeneralSessionSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGeneralSessionSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGeneralSessionSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGeneralSessionSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGeneralSessionSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAGeneralSessionSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAGeneralSessionSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAGeneralSessionSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAGeneralSessionSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAGeneralSessionSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAGeneralSessionSettingAtt(classe) \
 \
 \
declare_TIE_CATIAGeneralSessionSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAGeneralSessionSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAGeneralSessionSettingAtt,"CATIAGeneralSessionSettingAtt",CATIAGeneralSessionSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAGeneralSessionSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAGeneralSessionSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAGeneralSessionSettingAtt##classe(classe::MetaObject(),CATIAGeneralSessionSettingAtt::MetaObject(),(void *)CreateTIECATIAGeneralSessionSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAGeneralSessionSettingAtt(classe) \
 \
 \
declare_TIE_CATIAGeneralSessionSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAGeneralSessionSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAGeneralSessionSettingAtt,"CATIAGeneralSessionSettingAtt",CATIAGeneralSessionSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAGeneralSessionSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAGeneralSessionSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAGeneralSessionSettingAtt##classe(classe::MetaObject(),CATIAGeneralSessionSettingAtt::MetaObject(),(void *)CreateTIECATIAGeneralSessionSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAGeneralSessionSettingAtt(classe) TIE_CATIAGeneralSessionSettingAtt(classe)
#else
#define BOA_CATIAGeneralSessionSettingAtt(classe) CATImplementBOA(CATIAGeneralSessionSettingAtt, classe)
#endif

#endif
