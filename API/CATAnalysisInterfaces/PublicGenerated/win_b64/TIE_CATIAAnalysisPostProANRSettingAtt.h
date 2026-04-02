#ifndef __TIE_CATIAAnalysisPostProANRSettingAtt
#define __TIE_CATIAAnalysisPostProANRSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAnalysisPostProANRSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnalysisPostProANRSettingAtt */
#define declare_TIE_CATIAAnalysisPostProANRSettingAtt(classe) \
 \
 \
class TIECATIAAnalysisPostProANRSettingAtt##classe : public CATIAAnalysisPostProANRSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnalysisPostProANRSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_DMUPlayerDeformation(CATLONG & oDMUPlayerDeformation); \
      virtual HRESULT __stdcall put_DMUPlayerDeformation(CATLONG iDMUPlayerDeformation); \
      virtual HRESULT __stdcall GetDMUPlayerDeformationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDMUPlayerDeformationLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DMUPlayerMode(CATLONG & oDMUPlayerMode); \
      virtual HRESULT __stdcall put_DMUPlayerMode(CATLONG iDMUPlayerMode); \
      virtual HRESULT __stdcall GetDMUPlayerModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDMUPlayerModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DMUPlayerStepsNumber(CATLONG & oDMUPlayerStepsNumber); \
      virtual HRESULT __stdcall put_DMUPlayerStepsNumber(CATLONG iDMUPlayerStepsNumber); \
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



#define ENVTIEdeclare_CATIAAnalysisPostProANRSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_DMUPlayerDeformation(CATLONG & oDMUPlayerDeformation); \
virtual HRESULT __stdcall put_DMUPlayerDeformation(CATLONG iDMUPlayerDeformation); \
virtual HRESULT __stdcall GetDMUPlayerDeformationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDMUPlayerDeformationLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DMUPlayerMode(CATLONG & oDMUPlayerMode); \
virtual HRESULT __stdcall put_DMUPlayerMode(CATLONG iDMUPlayerMode); \
virtual HRESULT __stdcall GetDMUPlayerModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDMUPlayerModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DMUPlayerStepsNumber(CATLONG & oDMUPlayerStepsNumber); \
virtual HRESULT __stdcall put_DMUPlayerStepsNumber(CATLONG iDMUPlayerStepsNumber); \
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


#define ENVTIEdefine_CATIAAnalysisPostProANRSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_DMUPlayerDeformation(CATLONG & oDMUPlayerDeformation) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProANRSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DMUPlayerDeformation(oDMUPlayerDeformation)); \
} \
HRESULT __stdcall  ENVTIEName::put_DMUPlayerDeformation(CATLONG iDMUPlayerDeformation) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProANRSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DMUPlayerDeformation(iDMUPlayerDeformation)); \
} \
HRESULT __stdcall  ENVTIEName::GetDMUPlayerDeformationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProANRSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDMUPlayerDeformationInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDMUPlayerDeformationLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProANRSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDMUPlayerDeformationLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DMUPlayerMode(CATLONG & oDMUPlayerMode) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProANRSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DMUPlayerMode(oDMUPlayerMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_DMUPlayerMode(CATLONG iDMUPlayerMode) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProANRSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DMUPlayerMode(iDMUPlayerMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetDMUPlayerModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProANRSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDMUPlayerModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDMUPlayerModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProANRSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDMUPlayerModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DMUPlayerStepsNumber(CATLONG & oDMUPlayerStepsNumber) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProANRSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DMUPlayerStepsNumber(oDMUPlayerStepsNumber)); \
} \
HRESULT __stdcall  ENVTIEName::put_DMUPlayerStepsNumber(CATLONG iDMUPlayerStepsNumber) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProANRSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DMUPlayerStepsNumber(iDMUPlayerStepsNumber)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAAnalysisPostProANRSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAAnalysisPostProANRSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAAnalysisPostProANRSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProANRSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAAnalysisPostProANRSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProANRSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProANRSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProANRSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProANRSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAnalysisPostProANRSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnalysisPostProANRSettingAtt(classe)    TIECATIAAnalysisPostProANRSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnalysisPostProANRSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnalysisPostProANRSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnalysisPostProANRSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnalysisPostProANRSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnalysisPostProANRSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnalysisPostProANRSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAAnalysisPostProANRSettingAtt##classe::get_DMUPlayerDeformation(CATLONG & oDMUPlayerDeformation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oDMUPlayerDeformation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DMUPlayerDeformation(oDMUPlayerDeformation); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oDMUPlayerDeformation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProANRSettingAtt##classe::put_DMUPlayerDeformation(CATLONG iDMUPlayerDeformation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iDMUPlayerDeformation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DMUPlayerDeformation(iDMUPlayerDeformation); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iDMUPlayerDeformation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProANRSettingAtt##classe::GetDMUPlayerDeformationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDMUPlayerDeformationInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProANRSettingAtt##classe::SetDMUPlayerDeformationLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDMUPlayerDeformationLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProANRSettingAtt##classe::get_DMUPlayerMode(CATLONG & oDMUPlayerMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oDMUPlayerMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DMUPlayerMode(oDMUPlayerMode); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oDMUPlayerMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProANRSettingAtt##classe::put_DMUPlayerMode(CATLONG iDMUPlayerMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iDMUPlayerMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DMUPlayerMode(iDMUPlayerMode); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iDMUPlayerMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProANRSettingAtt##classe::GetDMUPlayerModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDMUPlayerModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProANRSettingAtt##classe::SetDMUPlayerModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDMUPlayerModeLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProANRSettingAtt##classe::get_DMUPlayerStepsNumber(CATLONG & oDMUPlayerStepsNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oDMUPlayerStepsNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DMUPlayerStepsNumber(oDMUPlayerStepsNumber); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oDMUPlayerStepsNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProANRSettingAtt##classe::put_DMUPlayerStepsNumber(CATLONG iDMUPlayerStepsNumber) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iDMUPlayerStepsNumber); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DMUPlayerStepsNumber(iDMUPlayerStepsNumber); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iDMUPlayerStepsNumber); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProANRSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProANRSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProANRSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProANRSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisPostProANRSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisPostProANRSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisPostProANRSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisPostProANRSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisPostProANRSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisPostProANRSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnalysisPostProANRSettingAtt(classe) \
 \
 \
declare_TIE_CATIAAnalysisPostProANRSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisPostProANRSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisPostProANRSettingAtt,"CATIAAnalysisPostProANRSettingAtt",CATIAAnalysisPostProANRSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisPostProANRSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnalysisPostProANRSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisPostProANRSettingAtt##classe(classe::MetaObject(),CATIAAnalysisPostProANRSettingAtt::MetaObject(),(void *)CreateTIECATIAAnalysisPostProANRSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnalysisPostProANRSettingAtt(classe) \
 \
 \
declare_TIE_CATIAAnalysisPostProANRSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisPostProANRSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisPostProANRSettingAtt,"CATIAAnalysisPostProANRSettingAtt",CATIAAnalysisPostProANRSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisPostProANRSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnalysisPostProANRSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisPostProANRSettingAtt##classe(classe::MetaObject(),CATIAAnalysisPostProANRSettingAtt::MetaObject(),(void *)CreateTIECATIAAnalysisPostProANRSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnalysisPostProANRSettingAtt(classe) TIE_CATIAAnalysisPostProANRSettingAtt(classe)
#else
#define BOA_CATIAAnalysisPostProANRSettingAtt(classe) CATImplementBOA(CATIAAnalysisPostProANRSettingAtt, classe)
#endif

#endif
