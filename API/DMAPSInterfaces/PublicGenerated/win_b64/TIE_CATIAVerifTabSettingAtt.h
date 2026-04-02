#ifndef __TIE_CATIAVerifTabSettingAtt
#define __TIE_CATIAVerifTabSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAVerifTabSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAVerifTabSettingAtt */
#define declare_TIE_CATIAVerifTabSettingAtt(classe) \
 \
 \
class TIECATIAVerifTabSettingAtt##classe : public CATIAVerifTabSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAVerifTabSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_AutoReframeFilter(CATLONG & oAutoReframe); \
      virtual HRESULT __stdcall put_AutoReframeFilter(CATLONG iAutoReframe); \
      virtual HRESULT __stdcall GetAutoReframeFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAutoReframeFilterLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ImpliedResourceFilter(CATLONG & oImplRes); \
      virtual HRESULT __stdcall put_ImpliedResourceFilter(CATLONG iImplRes); \
      virtual HRESULT __stdcall GetImpliedResourceFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetImpliedResourceFilterLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AllResourceFilter(CATLONG & oAllRes); \
      virtual HRESULT __stdcall put_AllResourceFilter(CATLONG iAllRes); \
      virtual HRESULT __stdcall GetAllResourceFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAllResourceFilterLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIAVerifTabSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_AutoReframeFilter(CATLONG & oAutoReframe); \
virtual HRESULT __stdcall put_AutoReframeFilter(CATLONG iAutoReframe); \
virtual HRESULT __stdcall GetAutoReframeFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAutoReframeFilterLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ImpliedResourceFilter(CATLONG & oImplRes); \
virtual HRESULT __stdcall put_ImpliedResourceFilter(CATLONG iImplRes); \
virtual HRESULT __stdcall GetImpliedResourceFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetImpliedResourceFilterLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AllResourceFilter(CATLONG & oAllRes); \
virtual HRESULT __stdcall put_AllResourceFilter(CATLONG iAllRes); \
virtual HRESULT __stdcall GetAllResourceFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAllResourceFilterLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIAVerifTabSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_AutoReframeFilter(CATLONG & oAutoReframe) \
{ \
return (ENVTIECALL(CATIAVerifTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AutoReframeFilter(oAutoReframe)); \
} \
HRESULT __stdcall  ENVTIEName::put_AutoReframeFilter(CATLONG iAutoReframe) \
{ \
return (ENVTIECALL(CATIAVerifTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AutoReframeFilter(iAutoReframe)); \
} \
HRESULT __stdcall  ENVTIEName::GetAutoReframeFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVerifTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAutoReframeFilterInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAutoReframeFilterLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVerifTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAutoReframeFilterLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ImpliedResourceFilter(CATLONG & oImplRes) \
{ \
return (ENVTIECALL(CATIAVerifTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ImpliedResourceFilter(oImplRes)); \
} \
HRESULT __stdcall  ENVTIEName::put_ImpliedResourceFilter(CATLONG iImplRes) \
{ \
return (ENVTIECALL(CATIAVerifTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ImpliedResourceFilter(iImplRes)); \
} \
HRESULT __stdcall  ENVTIEName::GetImpliedResourceFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVerifTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetImpliedResourceFilterInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetImpliedResourceFilterLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVerifTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetImpliedResourceFilterLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AllResourceFilter(CATLONG & oAllRes) \
{ \
return (ENVTIECALL(CATIAVerifTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AllResourceFilter(oAllRes)); \
} \
HRESULT __stdcall  ENVTIEName::put_AllResourceFilter(CATLONG iAllRes) \
{ \
return (ENVTIECALL(CATIAVerifTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AllResourceFilter(iAllRes)); \
} \
HRESULT __stdcall  ENVTIEName::GetAllResourceFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAVerifTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAllResourceFilterInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAllResourceFilterLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAVerifTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAllResourceFilterLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAVerifTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAVerifTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAVerifTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAVerifTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAVerifTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAVerifTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAVerifTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAVerifTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAVerifTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAVerifTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAVerifTabSettingAtt(classe)    TIECATIAVerifTabSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAVerifTabSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAVerifTabSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAVerifTabSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAVerifTabSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAVerifTabSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAVerifTabSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAVerifTabSettingAtt##classe::get_AutoReframeFilter(CATLONG & oAutoReframe) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oAutoReframe); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AutoReframeFilter(oAutoReframe); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oAutoReframe); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVerifTabSettingAtt##classe::put_AutoReframeFilter(CATLONG iAutoReframe) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iAutoReframe); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AutoReframeFilter(iAutoReframe); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iAutoReframe); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVerifTabSettingAtt##classe::GetAutoReframeFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAutoReframeFilterInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVerifTabSettingAtt##classe::SetAutoReframeFilterLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAutoReframeFilterLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVerifTabSettingAtt##classe::get_ImpliedResourceFilter(CATLONG & oImplRes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oImplRes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ImpliedResourceFilter(oImplRes); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oImplRes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVerifTabSettingAtt##classe::put_ImpliedResourceFilter(CATLONG iImplRes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iImplRes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ImpliedResourceFilter(iImplRes); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iImplRes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVerifTabSettingAtt##classe::GetImpliedResourceFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetImpliedResourceFilterInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVerifTabSettingAtt##classe::SetImpliedResourceFilterLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetImpliedResourceFilterLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVerifTabSettingAtt##classe::get_AllResourceFilter(CATLONG & oAllRes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oAllRes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AllResourceFilter(oAllRes); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oAllRes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVerifTabSettingAtt##classe::put_AllResourceFilter(CATLONG iAllRes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iAllRes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AllResourceFilter(iAllRes); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iAllRes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVerifTabSettingAtt##classe::GetAllResourceFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAllResourceFilterInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVerifTabSettingAtt##classe::SetAllResourceFilterLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAllResourceFilterLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVerifTabSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVerifTabSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVerifTabSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVerifTabSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAVerifTabSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAVerifTabSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAVerifTabSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAVerifTabSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAVerifTabSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAVerifTabSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAVerifTabSettingAtt(classe) \
 \
 \
declare_TIE_CATIAVerifTabSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAVerifTabSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAVerifTabSettingAtt,"CATIAVerifTabSettingAtt",CATIAVerifTabSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAVerifTabSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAVerifTabSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAVerifTabSettingAtt##classe(classe::MetaObject(),CATIAVerifTabSettingAtt::MetaObject(),(void *)CreateTIECATIAVerifTabSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAVerifTabSettingAtt(classe) \
 \
 \
declare_TIE_CATIAVerifTabSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAVerifTabSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAVerifTabSettingAtt,"CATIAVerifTabSettingAtt",CATIAVerifTabSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAVerifTabSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAVerifTabSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAVerifTabSettingAtt##classe(classe::MetaObject(),CATIAVerifTabSettingAtt::MetaObject(),(void *)CreateTIECATIAVerifTabSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAVerifTabSettingAtt(classe) TIE_CATIAVerifTabSettingAtt(classe)
#else
#define BOA_CATIAVerifTabSettingAtt(classe) CATImplementBOA(CATIAVerifTabSettingAtt, classe)
#endif

#endif
