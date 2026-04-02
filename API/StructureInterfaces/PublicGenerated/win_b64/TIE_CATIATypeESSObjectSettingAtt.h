#ifndef __TIE_CATIATypeESSObjectSettingAtt
#define __TIE_CATIATypeESSObjectSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIATypeESSObjectSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIATypeESSObjectSettingAtt */
#define declare_TIE_CATIATypeESSObjectSettingAtt(classe) \
 \
 \
class TIECATIATypeESSObjectSettingAtt##classe : public CATIATypeESSObjectSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIATypeESSObjectSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_MemberTypes(CATBSTR & oMemberTypes); \
      virtual HRESULT __stdcall put_MemberTypes(const CATBSTR & iMemberTypes); \
      virtual HRESULT __stdcall GetMemberTypesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMemberTypesLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_PlateTypes(CATBSTR & oPlateTypes); \
      virtual HRESULT __stdcall put_PlateTypes(const CATBSTR & iPlateTypes); \
      virtual HRESULT __stdcall GetPlateTypesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetPlateTypesLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIATypeESSObjectSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_MemberTypes(CATBSTR & oMemberTypes); \
virtual HRESULT __stdcall put_MemberTypes(const CATBSTR & iMemberTypes); \
virtual HRESULT __stdcall GetMemberTypesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMemberTypesLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_PlateTypes(CATBSTR & oPlateTypes); \
virtual HRESULT __stdcall put_PlateTypes(const CATBSTR & iPlateTypes); \
virtual HRESULT __stdcall GetPlateTypesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetPlateTypesLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIATypeESSObjectSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_MemberTypes(CATBSTR & oMemberTypes) \
{ \
return (ENVTIECALL(CATIATypeESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_MemberTypes(oMemberTypes)); \
} \
HRESULT __stdcall  ENVTIEName::put_MemberTypes(const CATBSTR & iMemberTypes) \
{ \
return (ENVTIECALL(CATIATypeESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_MemberTypes(iMemberTypes)); \
} \
HRESULT __stdcall  ENVTIEName::GetMemberTypesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIATypeESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMemberTypesInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMemberTypesLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIATypeESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMemberTypesLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_PlateTypes(CATBSTR & oPlateTypes) \
{ \
return (ENVTIECALL(CATIATypeESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_PlateTypes(oPlateTypes)); \
} \
HRESULT __stdcall  ENVTIEName::put_PlateTypes(const CATBSTR & iPlateTypes) \
{ \
return (ENVTIECALL(CATIATypeESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_PlateTypes(iPlateTypes)); \
} \
HRESULT __stdcall  ENVTIEName::GetPlateTypesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIATypeESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPlateTypesInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetPlateTypesLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIATypeESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPlateTypesLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIATypeESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIATypeESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIATypeESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIATypeESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIATypeESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIATypeESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIATypeESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIATypeESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIATypeESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIATypeESSObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIATypeESSObjectSettingAtt(classe)    TIECATIATypeESSObjectSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIATypeESSObjectSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIATypeESSObjectSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIATypeESSObjectSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIATypeESSObjectSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIATypeESSObjectSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIATypeESSObjectSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIATypeESSObjectSettingAtt##classe::get_MemberTypes(CATBSTR & oMemberTypes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oMemberTypes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MemberTypes(oMemberTypes); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oMemberTypes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATypeESSObjectSettingAtt##classe::put_MemberTypes(const CATBSTR & iMemberTypes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iMemberTypes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MemberTypes(iMemberTypes); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iMemberTypes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATypeESSObjectSettingAtt##classe::GetMemberTypesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMemberTypesInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATypeESSObjectSettingAtt##classe::SetMemberTypesLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMemberTypesLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATypeESSObjectSettingAtt##classe::get_PlateTypes(CATBSTR & oPlateTypes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oPlateTypes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PlateTypes(oPlateTypes); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oPlateTypes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATypeESSObjectSettingAtt##classe::put_PlateTypes(const CATBSTR & iPlateTypes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iPlateTypes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PlateTypes(iPlateTypes); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iPlateTypes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATypeESSObjectSettingAtt##classe::GetPlateTypesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPlateTypesInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATypeESSObjectSettingAtt##classe::SetPlateTypesLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPlateTypesLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATypeESSObjectSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATypeESSObjectSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATypeESSObjectSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATypeESSObjectSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATypeESSObjectSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATypeESSObjectSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATypeESSObjectSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATypeESSObjectSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATypeESSObjectSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATypeESSObjectSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIATypeESSObjectSettingAtt(classe) \
 \
 \
declare_TIE_CATIATypeESSObjectSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATypeESSObjectSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATypeESSObjectSettingAtt,"CATIATypeESSObjectSettingAtt",CATIATypeESSObjectSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATypeESSObjectSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIATypeESSObjectSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATypeESSObjectSettingAtt##classe(classe::MetaObject(),CATIATypeESSObjectSettingAtt::MetaObject(),(void *)CreateTIECATIATypeESSObjectSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIATypeESSObjectSettingAtt(classe) \
 \
 \
declare_TIE_CATIATypeESSObjectSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATypeESSObjectSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATypeESSObjectSettingAtt,"CATIATypeESSObjectSettingAtt",CATIATypeESSObjectSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATypeESSObjectSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIATypeESSObjectSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATypeESSObjectSettingAtt##classe(classe::MetaObject(),CATIATypeESSObjectSettingAtt::MetaObject(),(void *)CreateTIECATIATypeESSObjectSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIATypeESSObjectSettingAtt(classe) TIE_CATIATypeESSObjectSettingAtt(classe)
#else
#define BOA_CATIATypeESSObjectSettingAtt(classe) CATImplementBOA(CATIATypeESSObjectSettingAtt, classe)
#endif

#endif
