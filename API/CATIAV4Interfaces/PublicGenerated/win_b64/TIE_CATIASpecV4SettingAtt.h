#ifndef __TIE_CATIASpecV4SettingAtt
#define __TIE_CATIASpecV4SettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASpecV4SettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASpecV4SettingAtt */
#define declare_TIE_CATIASpecV4SettingAtt(classe) \
 \
 \
class TIECATIASpecV4SettingAtt##classe : public CATIASpecV4SettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASpecV4SettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_StepByStepUpdateAndReroute(CAT_VARIANT_BOOL & oSpecUpdate); \
      virtual HRESULT __stdcall put_StepByStepUpdateAndReroute(CAT_VARIANT_BOOL iSpecUpdate); \
      virtual HRESULT __stdcall GetStepByStepUpdateAndRerouteInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetStepByStepUpdateAndRerouteLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall get_DraftFeatureMigrationMode(CATV4IV4V5SpecDraftMigrationEnum & oDraftMode); \
      virtual HRESULT __stdcall put_DraftFeatureMigrationMode(CATV4IV4V5SpecDraftMigrationEnum iDraftMode); \
      virtual HRESULT __stdcall GetDraftFeatureMigrationModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDraftFeatureMigrationModeLock(CAT_VARIANT_BOOL iLock); \
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



#define ENVTIEdeclare_CATIASpecV4SettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_StepByStepUpdateAndReroute(CAT_VARIANT_BOOL & oSpecUpdate); \
virtual HRESULT __stdcall put_StepByStepUpdateAndReroute(CAT_VARIANT_BOOL iSpecUpdate); \
virtual HRESULT __stdcall GetStepByStepUpdateAndRerouteInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetStepByStepUpdateAndRerouteLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall get_DraftFeatureMigrationMode(CATV4IV4V5SpecDraftMigrationEnum & oDraftMode); \
virtual HRESULT __stdcall put_DraftFeatureMigrationMode(CATV4IV4V5SpecDraftMigrationEnum iDraftMode); \
virtual HRESULT __stdcall GetDraftFeatureMigrationModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDraftFeatureMigrationModeLock(CAT_VARIANT_BOOL iLock); \
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


#define ENVTIEdefine_CATIASpecV4SettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_StepByStepUpdateAndReroute(CAT_VARIANT_BOOL & oSpecUpdate) \
{ \
return (ENVTIECALL(CATIASpecV4SettingAtt,ENVTIETypeLetter,ENVTIELetter)get_StepByStepUpdateAndReroute(oSpecUpdate)); \
} \
HRESULT __stdcall  ENVTIEName::put_StepByStepUpdateAndReroute(CAT_VARIANT_BOOL iSpecUpdate) \
{ \
return (ENVTIECALL(CATIASpecV4SettingAtt,ENVTIETypeLetter,ENVTIELetter)put_StepByStepUpdateAndReroute(iSpecUpdate)); \
} \
HRESULT __stdcall  ENVTIEName::GetStepByStepUpdateAndRerouteInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIASpecV4SettingAtt,ENVTIETypeLetter,ENVTIELetter)GetStepByStepUpdateAndRerouteInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetStepByStepUpdateAndRerouteLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIASpecV4SettingAtt,ENVTIETypeLetter,ENVTIELetter)SetStepByStepUpdateAndRerouteLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::get_DraftFeatureMigrationMode(CATV4IV4V5SpecDraftMigrationEnum & oDraftMode) \
{ \
return (ENVTIECALL(CATIASpecV4SettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DraftFeatureMigrationMode(oDraftMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_DraftFeatureMigrationMode(CATV4IV4V5SpecDraftMigrationEnum iDraftMode) \
{ \
return (ENVTIECALL(CATIASpecV4SettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DraftFeatureMigrationMode(iDraftMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetDraftFeatureMigrationModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIASpecV4SettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDraftFeatureMigrationModeInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDraftFeatureMigrationModeLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIASpecV4SettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDraftFeatureMigrationModeLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIASpecV4SettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIASpecV4SettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIASpecV4SettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIASpecV4SettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIASpecV4SettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASpecV4SettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASpecV4SettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASpecV4SettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASpecV4SettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASpecV4SettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASpecV4SettingAtt(classe)    TIECATIASpecV4SettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASpecV4SettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASpecV4SettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIASpecV4SettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASpecV4SettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASpecV4SettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASpecV4SettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIASpecV4SettingAtt##classe::get_StepByStepUpdateAndReroute(CAT_VARIANT_BOOL & oSpecUpdate) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oSpecUpdate); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StepByStepUpdateAndReroute(oSpecUpdate); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oSpecUpdate); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASpecV4SettingAtt##classe::put_StepByStepUpdateAndReroute(CAT_VARIANT_BOOL iSpecUpdate) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iSpecUpdate); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_StepByStepUpdateAndReroute(iSpecUpdate); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iSpecUpdate); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASpecV4SettingAtt##classe::GetStepByStepUpdateAndRerouteInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStepByStepUpdateAndRerouteInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASpecV4SettingAtt##classe::SetStepByStepUpdateAndRerouteLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetStepByStepUpdateAndRerouteLock(iLock); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASpecV4SettingAtt##classe::get_DraftFeatureMigrationMode(CATV4IV4V5SpecDraftMigrationEnum & oDraftMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oDraftMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DraftFeatureMigrationMode(oDraftMode); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oDraftMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASpecV4SettingAtt##classe::put_DraftFeatureMigrationMode(CATV4IV4V5SpecDraftMigrationEnum iDraftMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iDraftMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DraftFeatureMigrationMode(iDraftMode); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iDraftMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASpecV4SettingAtt##classe::GetDraftFeatureMigrationModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDraftFeatureMigrationModeInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASpecV4SettingAtt##classe::SetDraftFeatureMigrationModeLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDraftFeatureMigrationModeLock(iLock); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASpecV4SettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASpecV4SettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASpecV4SettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASpecV4SettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASpecV4SettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASpecV4SettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASpecV4SettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASpecV4SettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASpecV4SettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASpecV4SettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASpecV4SettingAtt(classe) \
 \
 \
declare_TIE_CATIASpecV4SettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASpecV4SettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASpecV4SettingAtt,"CATIASpecV4SettingAtt",CATIASpecV4SettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASpecV4SettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASpecV4SettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASpecV4SettingAtt##classe(classe::MetaObject(),CATIASpecV4SettingAtt::MetaObject(),(void *)CreateTIECATIASpecV4SettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASpecV4SettingAtt(classe) \
 \
 \
declare_TIE_CATIASpecV4SettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASpecV4SettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASpecV4SettingAtt,"CATIASpecV4SettingAtt",CATIASpecV4SettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASpecV4SettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASpecV4SettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASpecV4SettingAtt##classe(classe::MetaObject(),CATIASpecV4SettingAtt::MetaObject(),(void *)CreateTIECATIASpecV4SettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASpecV4SettingAtt(classe) TIE_CATIASpecV4SettingAtt(classe)
#else
#define BOA_CATIASpecV4SettingAtt(classe) CATImplementBOA(CATIASpecV4SettingAtt, classe)
#endif

#endif
