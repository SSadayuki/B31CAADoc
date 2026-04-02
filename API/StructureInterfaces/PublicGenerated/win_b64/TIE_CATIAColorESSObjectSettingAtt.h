#ifndef __TIE_CATIAColorESSObjectSettingAtt
#define __TIE_CATIAColorESSObjectSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAColorESSObjectSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAColorESSObjectSettingAtt */
#define declare_TIE_CATIAColorESSObjectSettingAtt(classe) \
 \
 \
class TIECATIAColorESSObjectSettingAtt##classe : public CATIAColorESSObjectSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAColorESSObjectSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetMemberColor(CATLONG & oMemberColorR, CATLONG & oMemberColorG, CATLONG & oMemberColorB); \
      virtual HRESULT __stdcall SetMemberColor(CATLONG iMemberColorR, CATLONG iMemberColorG, CATLONG iMemberColorB); \
      virtual HRESULT __stdcall GetMemberColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMemberColorLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetPlateColor(CATLONG & oPlateColorR, CATLONG & oPlateColorG, CATLONG & oPlateColorB); \
      virtual HRESULT __stdcall SetPlateColor(CATLONG iPlateColorR, CATLONG iPlateColorG, CATLONG iPlateColorB); \
      virtual HRESULT __stdcall GetPlateColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetPlateColorLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIAColorESSObjectSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetMemberColor(CATLONG & oMemberColorR, CATLONG & oMemberColorG, CATLONG & oMemberColorB); \
virtual HRESULT __stdcall SetMemberColor(CATLONG iMemberColorR, CATLONG iMemberColorG, CATLONG iMemberColorB); \
virtual HRESULT __stdcall GetMemberColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMemberColorLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetPlateColor(CATLONG & oPlateColorR, CATLONG & oPlateColorG, CATLONG & oPlateColorB); \
virtual HRESULT __stdcall SetPlateColor(CATLONG iPlateColorR, CATLONG iPlateColorG, CATLONG iPlateColorB); \
virtual HRESULT __stdcall GetPlateColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetPlateColorLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIAColorESSObjectSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetMemberColor(CATLONG & oMemberColorR, CATLONG & oMemberColorG, CATLONG & oMemberColorB) \
{ \
return (ENVTIECALL(CATIAColorESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMemberColor(oMemberColorR,oMemberColorG,oMemberColorB)); \
} \
HRESULT __stdcall  ENVTIEName::SetMemberColor(CATLONG iMemberColorR, CATLONG iMemberColorG, CATLONG iMemberColorB) \
{ \
return (ENVTIECALL(CATIAColorESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMemberColor(iMemberColorR,iMemberColorG,iMemberColorB)); \
} \
HRESULT __stdcall  ENVTIEName::GetMemberColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAColorESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMemberColorInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMemberColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAColorESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMemberColorLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetPlateColor(CATLONG & oPlateColorR, CATLONG & oPlateColorG, CATLONG & oPlateColorB) \
{ \
return (ENVTIECALL(CATIAColorESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPlateColor(oPlateColorR,oPlateColorG,oPlateColorB)); \
} \
HRESULT __stdcall  ENVTIEName::SetPlateColor(CATLONG iPlateColorR, CATLONG iPlateColorG, CATLONG iPlateColorB) \
{ \
return (ENVTIECALL(CATIAColorESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPlateColor(iPlateColorR,iPlateColorG,iPlateColorB)); \
} \
HRESULT __stdcall  ENVTIEName::GetPlateColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAColorESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPlateColorInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetPlateColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAColorESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPlateColorLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAColorESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAColorESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAColorESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAColorESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAColorESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAColorESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAColorESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAColorESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAColorESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAColorESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAColorESSObjectSettingAtt(classe)    TIECATIAColorESSObjectSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAColorESSObjectSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAColorESSObjectSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAColorESSObjectSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAColorESSObjectSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAColorESSObjectSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAColorESSObjectSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAColorESSObjectSettingAtt##classe::GetMemberColor(CATLONG & oMemberColorR, CATLONG & oMemberColorG, CATLONG & oMemberColorB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oMemberColorR,&oMemberColorG,&oMemberColorB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMemberColor(oMemberColorR,oMemberColorG,oMemberColorB); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oMemberColorR,&oMemberColorG,&oMemberColorB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAColorESSObjectSettingAtt##classe::SetMemberColor(CATLONG iMemberColorR, CATLONG iMemberColorG, CATLONG iMemberColorB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iMemberColorR,&iMemberColorG,&iMemberColorB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMemberColor(iMemberColorR,iMemberColorG,iMemberColorB); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iMemberColorR,&iMemberColorG,&iMemberColorB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAColorESSObjectSettingAtt##classe::GetMemberColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMemberColorInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAColorESSObjectSettingAtt##classe::SetMemberColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMemberColorLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAColorESSObjectSettingAtt##classe::GetPlateColor(CATLONG & oPlateColorR, CATLONG & oPlateColorG, CATLONG & oPlateColorB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oPlateColorR,&oPlateColorG,&oPlateColorB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPlateColor(oPlateColorR,oPlateColorG,oPlateColorB); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oPlateColorR,&oPlateColorG,&oPlateColorB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAColorESSObjectSettingAtt##classe::SetPlateColor(CATLONG iPlateColorR, CATLONG iPlateColorG, CATLONG iPlateColorB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iPlateColorR,&iPlateColorG,&iPlateColorB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPlateColor(iPlateColorR,iPlateColorG,iPlateColorB); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iPlateColorR,&iPlateColorG,&iPlateColorB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAColorESSObjectSettingAtt##classe::GetPlateColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPlateColorInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAColorESSObjectSettingAtt##classe::SetPlateColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPlateColorLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAColorESSObjectSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAColorESSObjectSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAColorESSObjectSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAColorESSObjectSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAColorESSObjectSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAColorESSObjectSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAColorESSObjectSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAColorESSObjectSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAColorESSObjectSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAColorESSObjectSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAColorESSObjectSettingAtt(classe) \
 \
 \
declare_TIE_CATIAColorESSObjectSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAColorESSObjectSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAColorESSObjectSettingAtt,"CATIAColorESSObjectSettingAtt",CATIAColorESSObjectSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAColorESSObjectSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAColorESSObjectSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAColorESSObjectSettingAtt##classe(classe::MetaObject(),CATIAColorESSObjectSettingAtt::MetaObject(),(void *)CreateTIECATIAColorESSObjectSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAColorESSObjectSettingAtt(classe) \
 \
 \
declare_TIE_CATIAColorESSObjectSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAColorESSObjectSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAColorESSObjectSettingAtt,"CATIAColorESSObjectSettingAtt",CATIAColorESSObjectSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAColorESSObjectSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAColorESSObjectSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAColorESSObjectSettingAtt##classe(classe::MetaObject(),CATIAColorESSObjectSettingAtt::MetaObject(),(void *)CreateTIECATIAColorESSObjectSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAColorESSObjectSettingAtt(classe) TIE_CATIAColorESSObjectSettingAtt(classe)
#else
#define BOA_CATIAColorESSObjectSettingAtt(classe) CATImplementBOA(CATIAColorESSObjectSettingAtt, classe)
#endif

#endif
