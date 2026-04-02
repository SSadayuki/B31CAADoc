#ifndef __TIE_CATIAEndCutESSObjectSettingAtt
#define __TIE_CATIAEndCutESSObjectSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAEndCutESSObjectSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAEndCutESSObjectSettingAtt */
#define declare_TIE_CATIAEndCutESSObjectSettingAtt(classe) \
 \
 \
class TIECATIAEndCutESSObjectSettingAtt##classe : public CATIAEndCutESSObjectSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAEndCutESSObjectSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_MemberEndCut(CATBSTR & oMemberEndCut); \
      virtual HRESULT __stdcall put_MemberEndCut(const CATBSTR & iMemberEndCut); \
      virtual HRESULT __stdcall GetMemberEndCutInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMemberEndCutLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_StiffenerEndCut(CATBSTR & oStiffenerEndCut); \
      virtual HRESULT __stdcall put_StiffenerEndCut(const CATBSTR & iStiffenerEndCut); \
      virtual HRESULT __stdcall GetStiffenerEndCutInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetStiffenerEndCutLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SFEEndCut(CATBSTR & oSFEEndCut); \
      virtual HRESULT __stdcall put_SFEEndCut(const CATBSTR & iSFEEndCut); \
      virtual HRESULT __stdcall GetSFEEndCutInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSFEEndCutLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIAEndCutESSObjectSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_MemberEndCut(CATBSTR & oMemberEndCut); \
virtual HRESULT __stdcall put_MemberEndCut(const CATBSTR & iMemberEndCut); \
virtual HRESULT __stdcall GetMemberEndCutInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMemberEndCutLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_StiffenerEndCut(CATBSTR & oStiffenerEndCut); \
virtual HRESULT __stdcall put_StiffenerEndCut(const CATBSTR & iStiffenerEndCut); \
virtual HRESULT __stdcall GetStiffenerEndCutInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetStiffenerEndCutLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SFEEndCut(CATBSTR & oSFEEndCut); \
virtual HRESULT __stdcall put_SFEEndCut(const CATBSTR & iSFEEndCut); \
virtual HRESULT __stdcall GetSFEEndCutInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSFEEndCutLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIAEndCutESSObjectSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_MemberEndCut(CATBSTR & oMemberEndCut) \
{ \
return (ENVTIECALL(CATIAEndCutESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_MemberEndCut(oMemberEndCut)); \
} \
HRESULT __stdcall  ENVTIEName::put_MemberEndCut(const CATBSTR & iMemberEndCut) \
{ \
return (ENVTIECALL(CATIAEndCutESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_MemberEndCut(iMemberEndCut)); \
} \
HRESULT __stdcall  ENVTIEName::GetMemberEndCutInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAEndCutESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMemberEndCutInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMemberEndCutLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAEndCutESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMemberEndCutLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_StiffenerEndCut(CATBSTR & oStiffenerEndCut) \
{ \
return (ENVTIECALL(CATIAEndCutESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_StiffenerEndCut(oStiffenerEndCut)); \
} \
HRESULT __stdcall  ENVTIEName::put_StiffenerEndCut(const CATBSTR & iStiffenerEndCut) \
{ \
return (ENVTIECALL(CATIAEndCutESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_StiffenerEndCut(iStiffenerEndCut)); \
} \
HRESULT __stdcall  ENVTIEName::GetStiffenerEndCutInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAEndCutESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetStiffenerEndCutInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetStiffenerEndCutLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAEndCutESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetStiffenerEndCutLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SFEEndCut(CATBSTR & oSFEEndCut) \
{ \
return (ENVTIECALL(CATIAEndCutESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SFEEndCut(oSFEEndCut)); \
} \
HRESULT __stdcall  ENVTIEName::put_SFEEndCut(const CATBSTR & iSFEEndCut) \
{ \
return (ENVTIECALL(CATIAEndCutESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SFEEndCut(iSFEEndCut)); \
} \
HRESULT __stdcall  ENVTIEName::GetSFEEndCutInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAEndCutESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSFEEndCutInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSFEEndCutLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAEndCutESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSFEEndCutLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAEndCutESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAEndCutESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAEndCutESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAEndCutESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAEndCutESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAEndCutESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAEndCutESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAEndCutESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAEndCutESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAEndCutESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAEndCutESSObjectSettingAtt(classe)    TIECATIAEndCutESSObjectSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAEndCutESSObjectSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAEndCutESSObjectSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAEndCutESSObjectSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAEndCutESSObjectSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAEndCutESSObjectSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAEndCutESSObjectSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAEndCutESSObjectSettingAtt##classe::get_MemberEndCut(CATBSTR & oMemberEndCut) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oMemberEndCut); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MemberEndCut(oMemberEndCut); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oMemberEndCut); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAEndCutESSObjectSettingAtt##classe::put_MemberEndCut(const CATBSTR & iMemberEndCut) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iMemberEndCut); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MemberEndCut(iMemberEndCut); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iMemberEndCut); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAEndCutESSObjectSettingAtt##classe::GetMemberEndCutInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMemberEndCutInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAEndCutESSObjectSettingAtt##classe::SetMemberEndCutLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMemberEndCutLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAEndCutESSObjectSettingAtt##classe::get_StiffenerEndCut(CATBSTR & oStiffenerEndCut) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oStiffenerEndCut); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StiffenerEndCut(oStiffenerEndCut); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oStiffenerEndCut); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAEndCutESSObjectSettingAtt##classe::put_StiffenerEndCut(const CATBSTR & iStiffenerEndCut) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iStiffenerEndCut); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_StiffenerEndCut(iStiffenerEndCut); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iStiffenerEndCut); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAEndCutESSObjectSettingAtt##classe::GetStiffenerEndCutInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStiffenerEndCutInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAEndCutESSObjectSettingAtt##classe::SetStiffenerEndCutLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetStiffenerEndCutLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAEndCutESSObjectSettingAtt##classe::get_SFEEndCut(CATBSTR & oSFEEndCut) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oSFEEndCut); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SFEEndCut(oSFEEndCut); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oSFEEndCut); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAEndCutESSObjectSettingAtt##classe::put_SFEEndCut(const CATBSTR & iSFEEndCut) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iSFEEndCut); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SFEEndCut(iSFEEndCut); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iSFEEndCut); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAEndCutESSObjectSettingAtt##classe::GetSFEEndCutInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSFEEndCutInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAEndCutESSObjectSettingAtt##classe::SetSFEEndCutLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSFEEndCutLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAEndCutESSObjectSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAEndCutESSObjectSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAEndCutESSObjectSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAEndCutESSObjectSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAEndCutESSObjectSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAEndCutESSObjectSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAEndCutESSObjectSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAEndCutESSObjectSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAEndCutESSObjectSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAEndCutESSObjectSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAEndCutESSObjectSettingAtt(classe) \
 \
 \
declare_TIE_CATIAEndCutESSObjectSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAEndCutESSObjectSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAEndCutESSObjectSettingAtt,"CATIAEndCutESSObjectSettingAtt",CATIAEndCutESSObjectSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAEndCutESSObjectSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAEndCutESSObjectSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAEndCutESSObjectSettingAtt##classe(classe::MetaObject(),CATIAEndCutESSObjectSettingAtt::MetaObject(),(void *)CreateTIECATIAEndCutESSObjectSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAEndCutESSObjectSettingAtt(classe) \
 \
 \
declare_TIE_CATIAEndCutESSObjectSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAEndCutESSObjectSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAEndCutESSObjectSettingAtt,"CATIAEndCutESSObjectSettingAtt",CATIAEndCutESSObjectSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAEndCutESSObjectSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAEndCutESSObjectSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAEndCutESSObjectSettingAtt##classe(classe::MetaObject(),CATIAEndCutESSObjectSettingAtt::MetaObject(),(void *)CreateTIECATIAEndCutESSObjectSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAEndCutESSObjectSettingAtt(classe) TIE_CATIAEndCutESSObjectSettingAtt(classe)
#else
#define BOA_CATIAEndCutESSObjectSettingAtt(classe) CATImplementBOA(CATIAEndCutESSObjectSettingAtt, classe)
#endif

#endif
