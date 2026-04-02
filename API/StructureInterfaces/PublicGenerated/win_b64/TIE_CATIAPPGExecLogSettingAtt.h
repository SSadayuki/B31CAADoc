#ifndef __TIE_CATIAPPGExecLogSettingAtt
#define __TIE_CATIAPPGExecLogSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPPGExecLogSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPPGExecLogSettingAtt */
#define declare_TIE_CATIAPPGExecLogSettingAtt(classe) \
 \
 \
class TIECATIAPPGExecLogSettingAtt##classe : public CATIAPPGExecLogSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPPGExecLogSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ExecLogPath(CATBSTR & oPath); \
      virtual HRESULT __stdcall get_GenExecLog(CAT_VARIANT_BOOL & oFlag); \
      virtual HRESULT __stdcall put_ExecLogPath(const CATBSTR & iPath); \
      virtual HRESULT __stdcall put_GenExecLog(CAT_VARIANT_BOOL iFlag); \
      virtual HRESULT __stdcall GetExecLogPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall GetGenExecLogInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetExecLogPathLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall SetGenExecLogLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIAPPGExecLogSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ExecLogPath(CATBSTR & oPath); \
virtual HRESULT __stdcall get_GenExecLog(CAT_VARIANT_BOOL & oFlag); \
virtual HRESULT __stdcall put_ExecLogPath(const CATBSTR & iPath); \
virtual HRESULT __stdcall put_GenExecLog(CAT_VARIANT_BOOL iFlag); \
virtual HRESULT __stdcall GetExecLogPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall GetGenExecLogInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetExecLogPathLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall SetGenExecLogLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIAPPGExecLogSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ExecLogPath(CATBSTR & oPath) \
{ \
return (ENVTIECALL(CATIAPPGExecLogSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ExecLogPath(oPath)); \
} \
HRESULT __stdcall  ENVTIEName::get_GenExecLog(CAT_VARIANT_BOOL & oFlag) \
{ \
return (ENVTIECALL(CATIAPPGExecLogSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_GenExecLog(oFlag)); \
} \
HRESULT __stdcall  ENVTIEName::put_ExecLogPath(const CATBSTR & iPath) \
{ \
return (ENVTIECALL(CATIAPPGExecLogSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ExecLogPath(iPath)); \
} \
HRESULT __stdcall  ENVTIEName::put_GenExecLog(CAT_VARIANT_BOOL iFlag) \
{ \
return (ENVTIECALL(CATIAPPGExecLogSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_GenExecLog(iFlag)); \
} \
HRESULT __stdcall  ENVTIEName::GetExecLogPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPPGExecLogSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetExecLogPathInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::GetGenExecLogInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPPGExecLogSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetGenExecLogInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetExecLogPathLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPPGExecLogSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetExecLogPathLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::SetGenExecLogLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPPGExecLogSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetGenExecLogLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAPPGExecLogSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAPPGExecLogSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAPPGExecLogSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAPPGExecLogSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAPPGExecLogSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPPGExecLogSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPPGExecLogSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPPGExecLogSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPPGExecLogSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPPGExecLogSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPPGExecLogSettingAtt(classe)    TIECATIAPPGExecLogSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPPGExecLogSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPPGExecLogSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAPPGExecLogSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPPGExecLogSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPPGExecLogSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPPGExecLogSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAPPGExecLogSettingAtt##classe::get_ExecLogPath(CATBSTR & oPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExecLogPath(oPath); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPPGExecLogSettingAtt##classe::get_GenExecLog(CAT_VARIANT_BOOL & oFlag) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oFlag); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GenExecLog(oFlag); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oFlag); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPPGExecLogSettingAtt##classe::put_ExecLogPath(const CATBSTR & iPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ExecLogPath(iPath); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPPGExecLogSettingAtt##classe::put_GenExecLog(CAT_VARIANT_BOOL iFlag) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iFlag); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GenExecLog(iFlag); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iFlag); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPPGExecLogSettingAtt##classe::GetExecLogPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetExecLogPathInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPPGExecLogSettingAtt##classe::GetGenExecLogInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGenExecLogInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPPGExecLogSettingAtt##classe::SetExecLogPathLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetExecLogPathLock(iLocked); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPPGExecLogSettingAtt##classe::SetGenExecLogLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGenExecLogLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPPGExecLogSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPPGExecLogSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPPGExecLogSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPPGExecLogSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPPGExecLogSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPPGExecLogSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPPGExecLogSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPPGExecLogSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPPGExecLogSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPPGExecLogSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPPGExecLogSettingAtt(classe) \
 \
 \
declare_TIE_CATIAPPGExecLogSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPPGExecLogSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPPGExecLogSettingAtt,"CATIAPPGExecLogSettingAtt",CATIAPPGExecLogSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPPGExecLogSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPPGExecLogSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPPGExecLogSettingAtt##classe(classe::MetaObject(),CATIAPPGExecLogSettingAtt::MetaObject(),(void *)CreateTIECATIAPPGExecLogSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPPGExecLogSettingAtt(classe) \
 \
 \
declare_TIE_CATIAPPGExecLogSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPPGExecLogSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPPGExecLogSettingAtt,"CATIAPPGExecLogSettingAtt",CATIAPPGExecLogSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPPGExecLogSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPPGExecLogSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPPGExecLogSettingAtt##classe(classe::MetaObject(),CATIAPPGExecLogSettingAtt::MetaObject(),(void *)CreateTIECATIAPPGExecLogSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPPGExecLogSettingAtt(classe) TIE_CATIAPPGExecLogSettingAtt(classe)
#else
#define BOA_CATIAPPGExecLogSettingAtt(classe) CATImplementBOA(CATIAPPGExecLogSettingAtt, classe)
#endif

#endif
