#ifndef __TIE_CATIAColorSTDObjectSettingAtt
#define __TIE_CATIAColorSTDObjectSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAColorSTDObjectSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAColorSTDObjectSettingAtt */
#define declare_TIE_CATIAColorSTDObjectSettingAtt(classe) \
 \
 \
class TIECATIAColorSTDObjectSettingAtt##classe : public CATIAColorSTDObjectSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAColorSTDObjectSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetShapeColor(CATLONG & oShapeColorR, CATLONG & oShapeColorG, CATLONG & oShapeColorB); \
      virtual HRESULT __stdcall SetShapeColor(CATLONG iShapeColorR, CATLONG iShapeColorG, CATLONG iShapeColorB); \
      virtual HRESULT __stdcall GetShapeColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetShapeColorLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIAColorSTDObjectSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetShapeColor(CATLONG & oShapeColorR, CATLONG & oShapeColorG, CATLONG & oShapeColorB); \
virtual HRESULT __stdcall SetShapeColor(CATLONG iShapeColorR, CATLONG iShapeColorG, CATLONG iShapeColorB); \
virtual HRESULT __stdcall GetShapeColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetShapeColorLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIAColorSTDObjectSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetShapeColor(CATLONG & oShapeColorR, CATLONG & oShapeColorG, CATLONG & oShapeColorB) \
{ \
return (ENVTIECALL(CATIAColorSTDObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetShapeColor(oShapeColorR,oShapeColorG,oShapeColorB)); \
} \
HRESULT __stdcall  ENVTIEName::SetShapeColor(CATLONG iShapeColorR, CATLONG iShapeColorG, CATLONG iShapeColorB) \
{ \
return (ENVTIECALL(CATIAColorSTDObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetShapeColor(iShapeColorR,iShapeColorG,iShapeColorB)); \
} \
HRESULT __stdcall  ENVTIEName::GetShapeColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAColorSTDObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetShapeColorInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetShapeColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAColorSTDObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetShapeColorLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetPlateColor(CATLONG & oPlateColorR, CATLONG & oPlateColorG, CATLONG & oPlateColorB) \
{ \
return (ENVTIECALL(CATIAColorSTDObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPlateColor(oPlateColorR,oPlateColorG,oPlateColorB)); \
} \
HRESULT __stdcall  ENVTIEName::SetPlateColor(CATLONG iPlateColorR, CATLONG iPlateColorG, CATLONG iPlateColorB) \
{ \
return (ENVTIECALL(CATIAColorSTDObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPlateColor(iPlateColorR,iPlateColorG,iPlateColorB)); \
} \
HRESULT __stdcall  ENVTIEName::GetPlateColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAColorSTDObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPlateColorInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetPlateColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAColorSTDObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPlateColorLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAColorSTDObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAColorSTDObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAColorSTDObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAColorSTDObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAColorSTDObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAColorSTDObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAColorSTDObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAColorSTDObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAColorSTDObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAColorSTDObjectSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAColorSTDObjectSettingAtt(classe)    TIECATIAColorSTDObjectSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAColorSTDObjectSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAColorSTDObjectSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAColorSTDObjectSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAColorSTDObjectSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAColorSTDObjectSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAColorSTDObjectSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAColorSTDObjectSettingAtt##classe::GetShapeColor(CATLONG & oShapeColorR, CATLONG & oShapeColorG, CATLONG & oShapeColorB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oShapeColorR,&oShapeColorG,&oShapeColorB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetShapeColor(oShapeColorR,oShapeColorG,oShapeColorB); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oShapeColorR,&oShapeColorG,&oShapeColorB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAColorSTDObjectSettingAtt##classe::SetShapeColor(CATLONG iShapeColorR, CATLONG iShapeColorG, CATLONG iShapeColorB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iShapeColorR,&iShapeColorG,&iShapeColorB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetShapeColor(iShapeColorR,iShapeColorG,iShapeColorB); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iShapeColorR,&iShapeColorG,&iShapeColorB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAColorSTDObjectSettingAtt##classe::GetShapeColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetShapeColorInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAColorSTDObjectSettingAtt##classe::SetShapeColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetShapeColorLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAColorSTDObjectSettingAtt##classe::GetPlateColor(CATLONG & oPlateColorR, CATLONG & oPlateColorG, CATLONG & oPlateColorB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oPlateColorR,&oPlateColorG,&oPlateColorB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPlateColor(oPlateColorR,oPlateColorG,oPlateColorB); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oPlateColorR,&oPlateColorG,&oPlateColorB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAColorSTDObjectSettingAtt##classe::SetPlateColor(CATLONG iPlateColorR, CATLONG iPlateColorG, CATLONG iPlateColorB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iPlateColorR,&iPlateColorG,&iPlateColorB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPlateColor(iPlateColorR,iPlateColorG,iPlateColorB); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iPlateColorR,&iPlateColorG,&iPlateColorB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAColorSTDObjectSettingAtt##classe::GetPlateColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPlateColorInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAColorSTDObjectSettingAtt##classe::SetPlateColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPlateColorLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAColorSTDObjectSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAColorSTDObjectSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAColorSTDObjectSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAColorSTDObjectSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAColorSTDObjectSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAColorSTDObjectSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAColorSTDObjectSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAColorSTDObjectSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAColorSTDObjectSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAColorSTDObjectSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAColorSTDObjectSettingAtt(classe) \
 \
 \
declare_TIE_CATIAColorSTDObjectSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAColorSTDObjectSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAColorSTDObjectSettingAtt,"CATIAColorSTDObjectSettingAtt",CATIAColorSTDObjectSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAColorSTDObjectSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAColorSTDObjectSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAColorSTDObjectSettingAtt##classe(classe::MetaObject(),CATIAColorSTDObjectSettingAtt::MetaObject(),(void *)CreateTIECATIAColorSTDObjectSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAColorSTDObjectSettingAtt(classe) \
 \
 \
declare_TIE_CATIAColorSTDObjectSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAColorSTDObjectSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAColorSTDObjectSettingAtt,"CATIAColorSTDObjectSettingAtt",CATIAColorSTDObjectSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAColorSTDObjectSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAColorSTDObjectSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAColorSTDObjectSettingAtt##classe(classe::MetaObject(),CATIAColorSTDObjectSettingAtt::MetaObject(),(void *)CreateTIECATIAColorSTDObjectSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAColorSTDObjectSettingAtt(classe) TIE_CATIAColorSTDObjectSettingAtt(classe)
#else
#define BOA_CATIAColorSTDObjectSettingAtt(classe) CATImplementBOA(CATIAColorSTDObjectSettingAtt, classe)
#endif

#endif
