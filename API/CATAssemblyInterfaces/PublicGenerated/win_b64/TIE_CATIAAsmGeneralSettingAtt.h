#ifndef __TIE_CATIAAsmGeneralSettingAtt
#define __TIE_CATIAAsmGeneralSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAsmGeneralSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAsmGeneralSettingAtt */
#define declare_TIE_CATIAAsmGeneralSettingAtt(classe) \
 \
 \
class TIECATIAAsmGeneralSettingAtt##classe : public CATIAAsmGeneralSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAsmGeneralSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_AutoUpdateMode(CatAsmUpdateMode & oAutoUpdateMode); \
      virtual HRESULT __stdcall put_AutoUpdateMode(CatAsmUpdateMode iAutoUpdateMode); \
      virtual HRESULT __stdcall GetAutoUpdateModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAutoUpdateModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_UpdateStatusMode(CatAsmUpdateStatusComputeMode & oUpdateStatusMode); \
      virtual HRESULT __stdcall put_UpdateStatusMode(CatAsmUpdateStatusComputeMode iUpdateStatusMode); \
      virtual HRESULT __stdcall GetUpdateStatusModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetUpdateStatusModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AutoSwitchToDesignMode(CatAsmAutoSwitchToDesignMode & oAutoSwitchToDesignMode); \
      virtual HRESULT __stdcall put_AutoSwitchToDesignMode(CatAsmAutoSwitchToDesignMode iAutoSwitchToDesignMode); \
      virtual HRESULT __stdcall GetAutoSwitchToDesignModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAutoSwitchToDesignModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_MoveWithFixTExtendMode(CatAsmExtendMoveToFixT & oMoveWithFixTExtendMode); \
      virtual HRESULT __stdcall put_MoveWithFixTExtendMode(CatAsmExtendMoveToFixT iMoveWithFixTExtendMode); \
      virtual HRESULT __stdcall GetMoveWithFixTExtendModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMoveWithFixTExtendModeLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIAAsmGeneralSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_AutoUpdateMode(CatAsmUpdateMode & oAutoUpdateMode); \
virtual HRESULT __stdcall put_AutoUpdateMode(CatAsmUpdateMode iAutoUpdateMode); \
virtual HRESULT __stdcall GetAutoUpdateModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAutoUpdateModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_UpdateStatusMode(CatAsmUpdateStatusComputeMode & oUpdateStatusMode); \
virtual HRESULT __stdcall put_UpdateStatusMode(CatAsmUpdateStatusComputeMode iUpdateStatusMode); \
virtual HRESULT __stdcall GetUpdateStatusModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetUpdateStatusModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AutoSwitchToDesignMode(CatAsmAutoSwitchToDesignMode & oAutoSwitchToDesignMode); \
virtual HRESULT __stdcall put_AutoSwitchToDesignMode(CatAsmAutoSwitchToDesignMode iAutoSwitchToDesignMode); \
virtual HRESULT __stdcall GetAutoSwitchToDesignModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAutoSwitchToDesignModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_MoveWithFixTExtendMode(CatAsmExtendMoveToFixT & oMoveWithFixTExtendMode); \
virtual HRESULT __stdcall put_MoveWithFixTExtendMode(CatAsmExtendMoveToFixT iMoveWithFixTExtendMode); \
virtual HRESULT __stdcall GetMoveWithFixTExtendModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMoveWithFixTExtendModeLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIAAsmGeneralSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_AutoUpdateMode(CatAsmUpdateMode & oAutoUpdateMode) \
{ \
return (ENVTIECALL(CATIAAsmGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AutoUpdateMode(oAutoUpdateMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_AutoUpdateMode(CatAsmUpdateMode iAutoUpdateMode) \
{ \
return (ENVTIECALL(CATIAAsmGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AutoUpdateMode(iAutoUpdateMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetAutoUpdateModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAAsmGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAutoUpdateModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAutoUpdateModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAAsmGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAutoUpdateModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_UpdateStatusMode(CatAsmUpdateStatusComputeMode & oUpdateStatusMode) \
{ \
return (ENVTIECALL(CATIAAsmGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_UpdateStatusMode(oUpdateStatusMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_UpdateStatusMode(CatAsmUpdateStatusComputeMode iUpdateStatusMode) \
{ \
return (ENVTIECALL(CATIAAsmGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_UpdateStatusMode(iUpdateStatusMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetUpdateStatusModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAAsmGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetUpdateStatusModeInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetUpdateStatusModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAAsmGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetUpdateStatusModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AutoSwitchToDesignMode(CatAsmAutoSwitchToDesignMode & oAutoSwitchToDesignMode) \
{ \
return (ENVTIECALL(CATIAAsmGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AutoSwitchToDesignMode(oAutoSwitchToDesignMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_AutoSwitchToDesignMode(CatAsmAutoSwitchToDesignMode iAutoSwitchToDesignMode) \
{ \
return (ENVTIECALL(CATIAAsmGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AutoSwitchToDesignMode(iAutoSwitchToDesignMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetAutoSwitchToDesignModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAAsmGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAutoSwitchToDesignModeInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAutoSwitchToDesignModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAAsmGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAutoSwitchToDesignModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_MoveWithFixTExtendMode(CatAsmExtendMoveToFixT & oMoveWithFixTExtendMode) \
{ \
return (ENVTIECALL(CATIAAsmGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_MoveWithFixTExtendMode(oMoveWithFixTExtendMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_MoveWithFixTExtendMode(CatAsmExtendMoveToFixT iMoveWithFixTExtendMode) \
{ \
return (ENVTIECALL(CATIAAsmGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_MoveWithFixTExtendMode(iMoveWithFixTExtendMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetMoveWithFixTExtendModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAAsmGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMoveWithFixTExtendModeInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMoveWithFixTExtendModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAAsmGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMoveWithFixTExtendModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAAsmGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAAsmGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAAsmGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAAsmGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAAsmGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAsmGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAsmGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAsmGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAsmGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAsmGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAsmGeneralSettingAtt(classe)    TIECATIAAsmGeneralSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAsmGeneralSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAsmGeneralSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAAsmGeneralSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAsmGeneralSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAsmGeneralSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAsmGeneralSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAAsmGeneralSettingAtt##classe::get_AutoUpdateMode(CatAsmUpdateMode & oAutoUpdateMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oAutoUpdateMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AutoUpdateMode(oAutoUpdateMode); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oAutoUpdateMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmGeneralSettingAtt##classe::put_AutoUpdateMode(CatAsmUpdateMode iAutoUpdateMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iAutoUpdateMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AutoUpdateMode(iAutoUpdateMode); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iAutoUpdateMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmGeneralSettingAtt##classe::GetAutoUpdateModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAutoUpdateModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmGeneralSettingAtt##classe::SetAutoUpdateModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAutoUpdateModeLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmGeneralSettingAtt##classe::get_UpdateStatusMode(CatAsmUpdateStatusComputeMode & oUpdateStatusMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oUpdateStatusMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UpdateStatusMode(oUpdateStatusMode); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oUpdateStatusMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmGeneralSettingAtt##classe::put_UpdateStatusMode(CatAsmUpdateStatusComputeMode iUpdateStatusMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iUpdateStatusMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_UpdateStatusMode(iUpdateStatusMode); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iUpdateStatusMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmGeneralSettingAtt##classe::GetUpdateStatusModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUpdateStatusModeInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmGeneralSettingAtt##classe::SetUpdateStatusModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUpdateStatusModeLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmGeneralSettingAtt##classe::get_AutoSwitchToDesignMode(CatAsmAutoSwitchToDesignMode & oAutoSwitchToDesignMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oAutoSwitchToDesignMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AutoSwitchToDesignMode(oAutoSwitchToDesignMode); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oAutoSwitchToDesignMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmGeneralSettingAtt##classe::put_AutoSwitchToDesignMode(CatAsmAutoSwitchToDesignMode iAutoSwitchToDesignMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iAutoSwitchToDesignMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AutoSwitchToDesignMode(iAutoSwitchToDesignMode); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iAutoSwitchToDesignMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmGeneralSettingAtt##classe::GetAutoSwitchToDesignModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAutoSwitchToDesignModeInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmGeneralSettingAtt##classe::SetAutoSwitchToDesignModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAutoSwitchToDesignModeLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmGeneralSettingAtt##classe::get_MoveWithFixTExtendMode(CatAsmExtendMoveToFixT & oMoveWithFixTExtendMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oMoveWithFixTExtendMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MoveWithFixTExtendMode(oMoveWithFixTExtendMode); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oMoveWithFixTExtendMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmGeneralSettingAtt##classe::put_MoveWithFixTExtendMode(CatAsmExtendMoveToFixT iMoveWithFixTExtendMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iMoveWithFixTExtendMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MoveWithFixTExtendMode(iMoveWithFixTExtendMode); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iMoveWithFixTExtendMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmGeneralSettingAtt##classe::GetMoveWithFixTExtendModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMoveWithFixTExtendModeInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmGeneralSettingAtt##classe::SetMoveWithFixTExtendModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMoveWithFixTExtendModeLock(iLocked); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmGeneralSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmGeneralSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmGeneralSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmGeneralSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAsmGeneralSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAsmGeneralSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAsmGeneralSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAsmGeneralSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAsmGeneralSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAsmGeneralSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAsmGeneralSettingAtt(classe) \
 \
 \
declare_TIE_CATIAAsmGeneralSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAsmGeneralSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAsmGeneralSettingAtt,"CATIAAsmGeneralSettingAtt",CATIAAsmGeneralSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAsmGeneralSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAsmGeneralSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAsmGeneralSettingAtt##classe(classe::MetaObject(),CATIAAsmGeneralSettingAtt::MetaObject(),(void *)CreateTIECATIAAsmGeneralSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAsmGeneralSettingAtt(classe) \
 \
 \
declare_TIE_CATIAAsmGeneralSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAsmGeneralSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAsmGeneralSettingAtt,"CATIAAsmGeneralSettingAtt",CATIAAsmGeneralSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAsmGeneralSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAsmGeneralSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAsmGeneralSettingAtt##classe(classe::MetaObject(),CATIAAsmGeneralSettingAtt::MetaObject(),(void *)CreateTIECATIAAsmGeneralSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAsmGeneralSettingAtt(classe) TIE_CATIAAsmGeneralSettingAtt(classe)
#else
#define BOA_CATIAAsmGeneralSettingAtt(classe) CATImplementBOA(CATIAAsmGeneralSettingAtt, classe)
#endif

#endif
