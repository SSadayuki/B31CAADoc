#ifndef __TIE_CATIAAnalysisGeneralSettingAtt
#define __TIE_CATIAAnalysisGeneralSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAnalysisGeneralSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnalysisGeneralSettingAtt */
#define declare_TIE_CATIAAnalysisGeneralSettingAtt(classe) \
 \
 \
class TIECATIAAnalysisGeneralSettingAtt##classe : public CATIAAnalysisGeneralSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnalysisGeneralSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_DefaultAnalysisFlag(CATLONG & oIdAllowed); \
      virtual HRESULT __stdcall put_DefaultAnalysisFlag(CATLONG iIdAllowed); \
      virtual HRESULT __stdcall GetDefaultAnalysisFlagInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDefaultAnalysisFlagLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DefaultAnalysisTemplate(CATBSTR & oIdTemplate); \
      virtual HRESULT __stdcall put_DefaultAnalysisTemplate(const CATBSTR & iIdTemplate); \
      virtual HRESULT __stdcall GetDefaultAnalysisTemplateInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDefaultAnalysisTemplateLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ViewAnalysisParameter(CATLONG & oIdVisibility); \
      virtual HRESULT __stdcall put_ViewAnalysisParameter(CATLONG iIdVisibility); \
      virtual HRESULT __stdcall GetViewAnalysisParameterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetViewAnalysisParameterLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ViewAnalysisRelation(CATLONG & oIdVisibility); \
      virtual HRESULT __stdcall put_ViewAnalysisRelation(CATLONG iIdVisibility); \
      virtual HRESULT __stdcall GetViewAnalysisRelationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetViewAnalysisRelationLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AnalysisLoadMode(CATLONG & oIdLoadMode); \
      virtual HRESULT __stdcall put_AnalysisLoadMode(CATLONG iIdLoadMode); \
      virtual HRESULT __stdcall GetAnalysisLoadModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAnalysisLoadModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AnalysisCacheMode(CATLONG & oIdCacheMode); \
      virtual HRESULT __stdcall put_AnalysisCacheMode(CATLONG iIdCacheMode); \
      virtual HRESULT __stdcall GetAnalysisCacheModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAnalysisCacheModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AnalysisNamingAuto(CATLONG & oIdCacheMode); \
      virtual HRESULT __stdcall put_AnalysisNamingAuto(CATLONG iIdCacheMode); \
      virtual HRESULT __stdcall GetAnalysisNamingAutoInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAnalysisNamingAutoLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIAAnalysisGeneralSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_DefaultAnalysisFlag(CATLONG & oIdAllowed); \
virtual HRESULT __stdcall put_DefaultAnalysisFlag(CATLONG iIdAllowed); \
virtual HRESULT __stdcall GetDefaultAnalysisFlagInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDefaultAnalysisFlagLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DefaultAnalysisTemplate(CATBSTR & oIdTemplate); \
virtual HRESULT __stdcall put_DefaultAnalysisTemplate(const CATBSTR & iIdTemplate); \
virtual HRESULT __stdcall GetDefaultAnalysisTemplateInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDefaultAnalysisTemplateLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ViewAnalysisParameter(CATLONG & oIdVisibility); \
virtual HRESULT __stdcall put_ViewAnalysisParameter(CATLONG iIdVisibility); \
virtual HRESULT __stdcall GetViewAnalysisParameterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetViewAnalysisParameterLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ViewAnalysisRelation(CATLONG & oIdVisibility); \
virtual HRESULT __stdcall put_ViewAnalysisRelation(CATLONG iIdVisibility); \
virtual HRESULT __stdcall GetViewAnalysisRelationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetViewAnalysisRelationLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AnalysisLoadMode(CATLONG & oIdLoadMode); \
virtual HRESULT __stdcall put_AnalysisLoadMode(CATLONG iIdLoadMode); \
virtual HRESULT __stdcall GetAnalysisLoadModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAnalysisLoadModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AnalysisCacheMode(CATLONG & oIdCacheMode); \
virtual HRESULT __stdcall put_AnalysisCacheMode(CATLONG iIdCacheMode); \
virtual HRESULT __stdcall GetAnalysisCacheModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAnalysisCacheModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AnalysisNamingAuto(CATLONG & oIdCacheMode); \
virtual HRESULT __stdcall put_AnalysisNamingAuto(CATLONG iIdCacheMode); \
virtual HRESULT __stdcall GetAnalysisNamingAutoInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAnalysisNamingAutoLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIAAnalysisGeneralSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_DefaultAnalysisFlag(CATLONG & oIdAllowed) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DefaultAnalysisFlag(oIdAllowed)); \
} \
HRESULT __stdcall  ENVTIEName::put_DefaultAnalysisFlag(CATLONG iIdAllowed) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DefaultAnalysisFlag(iIdAllowed)); \
} \
HRESULT __stdcall  ENVTIEName::GetDefaultAnalysisFlagInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDefaultAnalysisFlagInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDefaultAnalysisFlagLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDefaultAnalysisFlagLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DefaultAnalysisTemplate(CATBSTR & oIdTemplate) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DefaultAnalysisTemplate(oIdTemplate)); \
} \
HRESULT __stdcall  ENVTIEName::put_DefaultAnalysisTemplate(const CATBSTR & iIdTemplate) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DefaultAnalysisTemplate(iIdTemplate)); \
} \
HRESULT __stdcall  ENVTIEName::GetDefaultAnalysisTemplateInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDefaultAnalysisTemplateInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDefaultAnalysisTemplateLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDefaultAnalysisTemplateLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ViewAnalysisParameter(CATLONG & oIdVisibility) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ViewAnalysisParameter(oIdVisibility)); \
} \
HRESULT __stdcall  ENVTIEName::put_ViewAnalysisParameter(CATLONG iIdVisibility) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ViewAnalysisParameter(iIdVisibility)); \
} \
HRESULT __stdcall  ENVTIEName::GetViewAnalysisParameterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetViewAnalysisParameterInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetViewAnalysisParameterLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetViewAnalysisParameterLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ViewAnalysisRelation(CATLONG & oIdVisibility) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ViewAnalysisRelation(oIdVisibility)); \
} \
HRESULT __stdcall  ENVTIEName::put_ViewAnalysisRelation(CATLONG iIdVisibility) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ViewAnalysisRelation(iIdVisibility)); \
} \
HRESULT __stdcall  ENVTIEName::GetViewAnalysisRelationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetViewAnalysisRelationInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetViewAnalysisRelationLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetViewAnalysisRelationLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnalysisLoadMode(CATLONG & oIdLoadMode) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AnalysisLoadMode(oIdLoadMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_AnalysisLoadMode(CATLONG iIdLoadMode) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AnalysisLoadMode(iIdLoadMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetAnalysisLoadModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAnalysisLoadModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAnalysisLoadModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAnalysisLoadModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnalysisCacheMode(CATLONG & oIdCacheMode) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AnalysisCacheMode(oIdCacheMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_AnalysisCacheMode(CATLONG iIdCacheMode) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AnalysisCacheMode(iIdCacheMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetAnalysisCacheModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAnalysisCacheModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAnalysisCacheModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAnalysisCacheModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnalysisNamingAuto(CATLONG & oIdCacheMode) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AnalysisNamingAuto(oIdCacheMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_AnalysisNamingAuto(CATLONG iIdCacheMode) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AnalysisNamingAuto(iIdCacheMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetAnalysisNamingAutoInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAnalysisNamingAutoInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAnalysisNamingAutoLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAnalysisNamingAutoLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAnalysisGeneralSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnalysisGeneralSettingAtt(classe)    TIECATIAAnalysisGeneralSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnalysisGeneralSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnalysisGeneralSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnalysisGeneralSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnalysisGeneralSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnalysisGeneralSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnalysisGeneralSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::get_DefaultAnalysisFlag(CATLONG & oIdAllowed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oIdAllowed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DefaultAnalysisFlag(oIdAllowed); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oIdAllowed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::put_DefaultAnalysisFlag(CATLONG iIdAllowed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIdAllowed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DefaultAnalysisFlag(iIdAllowed); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIdAllowed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::GetDefaultAnalysisFlagInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDefaultAnalysisFlagInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::SetDefaultAnalysisFlagLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDefaultAnalysisFlagLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::get_DefaultAnalysisTemplate(CATBSTR & oIdTemplate) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oIdTemplate); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DefaultAnalysisTemplate(oIdTemplate); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oIdTemplate); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::put_DefaultAnalysisTemplate(const CATBSTR & iIdTemplate) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIdTemplate); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DefaultAnalysisTemplate(iIdTemplate); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIdTemplate); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::GetDefaultAnalysisTemplateInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDefaultAnalysisTemplateInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::SetDefaultAnalysisTemplateLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDefaultAnalysisTemplateLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::get_ViewAnalysisParameter(CATLONG & oIdVisibility) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oIdVisibility); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ViewAnalysisParameter(oIdVisibility); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oIdVisibility); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::put_ViewAnalysisParameter(CATLONG iIdVisibility) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iIdVisibility); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ViewAnalysisParameter(iIdVisibility); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iIdVisibility); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::GetViewAnalysisParameterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetViewAnalysisParameterInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::SetViewAnalysisParameterLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetViewAnalysisParameterLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::get_ViewAnalysisRelation(CATLONG & oIdVisibility) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oIdVisibility); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ViewAnalysisRelation(oIdVisibility); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oIdVisibility); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::put_ViewAnalysisRelation(CATLONG iIdVisibility) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iIdVisibility); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ViewAnalysisRelation(iIdVisibility); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iIdVisibility); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::GetViewAnalysisRelationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetViewAnalysisRelationInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::SetViewAnalysisRelationLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetViewAnalysisRelationLock(iLocked); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::get_AnalysisLoadMode(CATLONG & oIdLoadMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oIdLoadMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnalysisLoadMode(oIdLoadMode); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oIdLoadMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::put_AnalysisLoadMode(CATLONG iIdLoadMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iIdLoadMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AnalysisLoadMode(iIdLoadMode); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iIdLoadMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::GetAnalysisLoadModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAnalysisLoadModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::SetAnalysisLoadModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAnalysisLoadModeLock(iLocked); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::get_AnalysisCacheMode(CATLONG & oIdCacheMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oIdCacheMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnalysisCacheMode(oIdCacheMode); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oIdCacheMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::put_AnalysisCacheMode(CATLONG iIdCacheMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iIdCacheMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AnalysisCacheMode(iIdCacheMode); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iIdCacheMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::GetAnalysisCacheModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAnalysisCacheModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::SetAnalysisCacheModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAnalysisCacheModeLock(iLocked); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::get_AnalysisNamingAuto(CATLONG & oIdCacheMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oIdCacheMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnalysisNamingAuto(oIdCacheMode); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oIdCacheMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::put_AnalysisNamingAuto(CATLONG iIdCacheMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iIdCacheMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AnalysisNamingAuto(iIdCacheMode); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iIdCacheMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::GetAnalysisNamingAutoInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAnalysisNamingAutoInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::SetAnalysisNamingAutoLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAnalysisNamingAutoLock(iLocked); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisGeneralSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnalysisGeneralSettingAtt(classe) \
 \
 \
declare_TIE_CATIAAnalysisGeneralSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisGeneralSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisGeneralSettingAtt,"CATIAAnalysisGeneralSettingAtt",CATIAAnalysisGeneralSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisGeneralSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnalysisGeneralSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisGeneralSettingAtt##classe(classe::MetaObject(),CATIAAnalysisGeneralSettingAtt::MetaObject(),(void *)CreateTIECATIAAnalysisGeneralSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnalysisGeneralSettingAtt(classe) \
 \
 \
declare_TIE_CATIAAnalysisGeneralSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisGeneralSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisGeneralSettingAtt,"CATIAAnalysisGeneralSettingAtt",CATIAAnalysisGeneralSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisGeneralSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnalysisGeneralSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisGeneralSettingAtt##classe(classe::MetaObject(),CATIAAnalysisGeneralSettingAtt::MetaObject(),(void *)CreateTIECATIAAnalysisGeneralSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnalysisGeneralSettingAtt(classe) TIE_CATIAAnalysisGeneralSettingAtt(classe)
#else
#define BOA_CATIAAnalysisGeneralSettingAtt(classe) CATImplementBOA(CATIAAnalysisGeneralSettingAtt, classe)
#endif

#endif
