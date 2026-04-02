#ifndef __TIE_CATIAAnalysisPostProSettingAtt
#define __TIE_CATIAAnalysisPostProSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAnalysisPostProSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnalysisPostProSettingAtt */
#define declare_TIE_CATIAAnalysisPostProSettingAtt(classe) \
 \
 \
class TIECATIAAnalysisPostProSettingAtt##classe : public CATIAAnalysisPostProSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnalysisPostProSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_AutoPreviewMode(CAT_VARIANT_BOOL & oAutoPreviewMode); \
      virtual HRESULT __stdcall put_AutoPreviewMode(CAT_VARIANT_BOOL iAutoPreviewMode); \
      virtual HRESULT __stdcall GetAutoPreviewModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAutoPreviewModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SaveAsNewTemplateDirectory(CATBSTR & oSaveAsNewTemplateDirectory); \
      virtual HRESULT __stdcall put_SaveAsNewTemplateDirectory(const CATBSTR & iSaveAsNewTemplateDirectory); \
      virtual HRESULT __stdcall GetSaveAsNewTemplateDirectoryInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSaveAsNewTemplateDirectoryLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ModeImageTextSize(CAT_VARIANT_BOOL & oModeImageTextSize); \
      virtual HRESULT __stdcall put_ModeImageTextSize(CAT_VARIANT_BOOL iModeImageTextSize); \
      virtual HRESULT __stdcall GetModeImageTextSizeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetModeImageTextSizeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ImageTextSize(float & oImageTextSize); \
      virtual HRESULT __stdcall put_ImageTextSize(float iImageTextSize); \
      virtual HRESULT __stdcall GetImageTextSizeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetImageTextSizeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ImageTextStacking(CATLONG & oImageTextStacking); \
      virtual HRESULT __stdcall put_ImageTextStacking(CATLONG iImageTextStacking); \
      virtual HRESULT __stdcall GetImageTextStackingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetImageTextStackingLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIAAnalysisPostProSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_AutoPreviewMode(CAT_VARIANT_BOOL & oAutoPreviewMode); \
virtual HRESULT __stdcall put_AutoPreviewMode(CAT_VARIANT_BOOL iAutoPreviewMode); \
virtual HRESULT __stdcall GetAutoPreviewModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAutoPreviewModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SaveAsNewTemplateDirectory(CATBSTR & oSaveAsNewTemplateDirectory); \
virtual HRESULT __stdcall put_SaveAsNewTemplateDirectory(const CATBSTR & iSaveAsNewTemplateDirectory); \
virtual HRESULT __stdcall GetSaveAsNewTemplateDirectoryInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSaveAsNewTemplateDirectoryLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ModeImageTextSize(CAT_VARIANT_BOOL & oModeImageTextSize); \
virtual HRESULT __stdcall put_ModeImageTextSize(CAT_VARIANT_BOOL iModeImageTextSize); \
virtual HRESULT __stdcall GetModeImageTextSizeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetModeImageTextSizeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ImageTextSize(float & oImageTextSize); \
virtual HRESULT __stdcall put_ImageTextSize(float iImageTextSize); \
virtual HRESULT __stdcall GetImageTextSizeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetImageTextSizeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ImageTextStacking(CATLONG & oImageTextStacking); \
virtual HRESULT __stdcall put_ImageTextStacking(CATLONG iImageTextStacking); \
virtual HRESULT __stdcall GetImageTextStackingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetImageTextStackingLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIAAnalysisPostProSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_AutoPreviewMode(CAT_VARIANT_BOOL & oAutoPreviewMode) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AutoPreviewMode(oAutoPreviewMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_AutoPreviewMode(CAT_VARIANT_BOOL iAutoPreviewMode) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AutoPreviewMode(iAutoPreviewMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetAutoPreviewModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAutoPreviewModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAutoPreviewModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAutoPreviewModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SaveAsNewTemplateDirectory(CATBSTR & oSaveAsNewTemplateDirectory) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SaveAsNewTemplateDirectory(oSaveAsNewTemplateDirectory)); \
} \
HRESULT __stdcall  ENVTIEName::put_SaveAsNewTemplateDirectory(const CATBSTR & iSaveAsNewTemplateDirectory) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SaveAsNewTemplateDirectory(iSaveAsNewTemplateDirectory)); \
} \
HRESULT __stdcall  ENVTIEName::GetSaveAsNewTemplateDirectoryInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSaveAsNewTemplateDirectoryInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSaveAsNewTemplateDirectoryLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSaveAsNewTemplateDirectoryLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ModeImageTextSize(CAT_VARIANT_BOOL & oModeImageTextSize) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ModeImageTextSize(oModeImageTextSize)); \
} \
HRESULT __stdcall  ENVTIEName::put_ModeImageTextSize(CAT_VARIANT_BOOL iModeImageTextSize) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ModeImageTextSize(iModeImageTextSize)); \
} \
HRESULT __stdcall  ENVTIEName::GetModeImageTextSizeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetModeImageTextSizeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetModeImageTextSizeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetModeImageTextSizeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ImageTextSize(float & oImageTextSize) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ImageTextSize(oImageTextSize)); \
} \
HRESULT __stdcall  ENVTIEName::put_ImageTextSize(float iImageTextSize) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ImageTextSize(iImageTextSize)); \
} \
HRESULT __stdcall  ENVTIEName::GetImageTextSizeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetImageTextSizeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetImageTextSizeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetImageTextSizeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ImageTextStacking(CATLONG & oImageTextStacking) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ImageTextStacking(oImageTextStacking)); \
} \
HRESULT __stdcall  ENVTIEName::put_ImageTextStacking(CATLONG iImageTextStacking) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ImageTextStacking(iImageTextStacking)); \
} \
HRESULT __stdcall  ENVTIEName::GetImageTextStackingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetImageTextStackingInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetImageTextStackingLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetImageTextStackingLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAAnalysisPostProSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAAnalysisPostProSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAAnalysisPostProSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAAnalysisPostProSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnalysisPostProSettingAtt(classe)    TIECATIAAnalysisPostProSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnalysisPostProSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnalysisPostProSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnalysisPostProSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnalysisPostProSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnalysisPostProSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnalysisPostProSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAAnalysisPostProSettingAtt##classe::get_AutoPreviewMode(CAT_VARIANT_BOOL & oAutoPreviewMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oAutoPreviewMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AutoPreviewMode(oAutoPreviewMode); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oAutoPreviewMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProSettingAtt##classe::put_AutoPreviewMode(CAT_VARIANT_BOOL iAutoPreviewMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iAutoPreviewMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AutoPreviewMode(iAutoPreviewMode); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iAutoPreviewMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProSettingAtt##classe::GetAutoPreviewModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAutoPreviewModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProSettingAtt##classe::SetAutoPreviewModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAutoPreviewModeLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProSettingAtt##classe::get_SaveAsNewTemplateDirectory(CATBSTR & oSaveAsNewTemplateDirectory) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oSaveAsNewTemplateDirectory); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SaveAsNewTemplateDirectory(oSaveAsNewTemplateDirectory); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oSaveAsNewTemplateDirectory); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProSettingAtt##classe::put_SaveAsNewTemplateDirectory(const CATBSTR & iSaveAsNewTemplateDirectory) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iSaveAsNewTemplateDirectory); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SaveAsNewTemplateDirectory(iSaveAsNewTemplateDirectory); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iSaveAsNewTemplateDirectory); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProSettingAtt##classe::GetSaveAsNewTemplateDirectoryInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSaveAsNewTemplateDirectoryInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProSettingAtt##classe::SetSaveAsNewTemplateDirectoryLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSaveAsNewTemplateDirectoryLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProSettingAtt##classe::get_ModeImageTextSize(CAT_VARIANT_BOOL & oModeImageTextSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oModeImageTextSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ModeImageTextSize(oModeImageTextSize); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oModeImageTextSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProSettingAtt##classe::put_ModeImageTextSize(CAT_VARIANT_BOOL iModeImageTextSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iModeImageTextSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ModeImageTextSize(iModeImageTextSize); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iModeImageTextSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProSettingAtt##classe::GetModeImageTextSizeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetModeImageTextSizeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProSettingAtt##classe::SetModeImageTextSizeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetModeImageTextSizeLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProSettingAtt##classe::get_ImageTextSize(float & oImageTextSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oImageTextSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ImageTextSize(oImageTextSize); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oImageTextSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProSettingAtt##classe::put_ImageTextSize(float iImageTextSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iImageTextSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ImageTextSize(iImageTextSize); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iImageTextSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProSettingAtt##classe::GetImageTextSizeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetImageTextSizeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProSettingAtt##classe::SetImageTextSizeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetImageTextSizeLock(iLocked); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProSettingAtt##classe::get_ImageTextStacking(CATLONG & oImageTextStacking) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oImageTextStacking); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ImageTextStacking(oImageTextStacking); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oImageTextStacking); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProSettingAtt##classe::put_ImageTextStacking(CATLONG iImageTextStacking) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iImageTextStacking); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ImageTextStacking(iImageTextStacking); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iImageTextStacking); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProSettingAtt##classe::GetImageTextStackingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetImageTextStackingInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProSettingAtt##classe::SetImageTextStackingLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetImageTextStackingLock(iLocked); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisPostProSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisPostProSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisPostProSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisPostProSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisPostProSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnalysisPostProSettingAtt(classe) \
 \
 \
declare_TIE_CATIAAnalysisPostProSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisPostProSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisPostProSettingAtt,"CATIAAnalysisPostProSettingAtt",CATIAAnalysisPostProSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisPostProSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnalysisPostProSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisPostProSettingAtt##classe(classe::MetaObject(),CATIAAnalysisPostProSettingAtt::MetaObject(),(void *)CreateTIECATIAAnalysisPostProSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnalysisPostProSettingAtt(classe) \
 \
 \
declare_TIE_CATIAAnalysisPostProSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisPostProSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisPostProSettingAtt,"CATIAAnalysisPostProSettingAtt",CATIAAnalysisPostProSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisPostProSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnalysisPostProSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisPostProSettingAtt##classe(classe::MetaObject(),CATIAAnalysisPostProSettingAtt::MetaObject(),(void *)CreateTIECATIAAnalysisPostProSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnalysisPostProSettingAtt(classe) TIE_CATIAAnalysisPostProSettingAtt(classe)
#else
#define BOA_CATIAAnalysisPostProSettingAtt(classe) CATImplementBOA(CATIAAnalysisPostProSettingAtt, classe)
#endif

#endif
