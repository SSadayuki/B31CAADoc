#ifndef __TIE_CATIALanguageSheetSettingAtt
#define __TIE_CATIALanguageSheetSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIALanguageSheetSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIALanguageSheetSettingAtt */
#define declare_TIE_CATIALanguageSheetSettingAtt(classe) \
 \
 \
class TIECATIALanguageSheetSettingAtt##classe : public CATIALanguageSheetSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIALanguageSheetSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_LoadExtendedLanguageLib(short & oLoadExtendedLanguageLib); \
      virtual HRESULT __stdcall put_LoadExtendedLanguageLib(short iLoadExtendedLanguageLib); \
      virtual HRESULT __stdcall GetLoadExtendedLanguageLibInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetLoadExtendedLanguageLibLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_LoadAllPackages(short & oLoadAllPackages); \
      virtual HRESULT __stdcall put_LoadAllPackages(short iLoadAllPackages); \
      virtual HRESULT __stdcall GetLoadAllPackagesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetLoadAllPackagesLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ListOfPackagesToLoad(CATBSTR & oListOfPackagesToLoad); \
      virtual HRESULT __stdcall put_ListOfPackagesToLoad(const CATBSTR & iListOfPackagesToLoad); \
      virtual HRESULT __stdcall GetListOfPackagesToLoadInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetListOfPackagesToLoadLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ReferenceDirectoryForTypes(CATBSTR & oReferenceDirectoryForTypes); \
      virtual HRESULT __stdcall put_ReferenceDirectoryForTypes(const CATBSTR & iReferenceDirectoryForTypes); \
      virtual HRESULT __stdcall GetReferenceDirectoryForTypesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetReferenceDirectoryForTypesLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_KnowledgeBuildPathDirectory(CATBSTR & oKnowledgeBuildPathDirectory); \
      virtual HRESULT __stdcall put_KnowledgeBuildPathDirectory(const CATBSTR & iKnowledgeBuildPathDirectory); \
      virtual HRESULT __stdcall GetKnowledgeBuildPathDirectoryInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetKnowledgeBuildPathDirectoryLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIALanguageSheetSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_LoadExtendedLanguageLib(short & oLoadExtendedLanguageLib); \
virtual HRESULT __stdcall put_LoadExtendedLanguageLib(short iLoadExtendedLanguageLib); \
virtual HRESULT __stdcall GetLoadExtendedLanguageLibInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetLoadExtendedLanguageLibLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_LoadAllPackages(short & oLoadAllPackages); \
virtual HRESULT __stdcall put_LoadAllPackages(short iLoadAllPackages); \
virtual HRESULT __stdcall GetLoadAllPackagesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetLoadAllPackagesLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ListOfPackagesToLoad(CATBSTR & oListOfPackagesToLoad); \
virtual HRESULT __stdcall put_ListOfPackagesToLoad(const CATBSTR & iListOfPackagesToLoad); \
virtual HRESULT __stdcall GetListOfPackagesToLoadInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetListOfPackagesToLoadLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ReferenceDirectoryForTypes(CATBSTR & oReferenceDirectoryForTypes); \
virtual HRESULT __stdcall put_ReferenceDirectoryForTypes(const CATBSTR & iReferenceDirectoryForTypes); \
virtual HRESULT __stdcall GetReferenceDirectoryForTypesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetReferenceDirectoryForTypesLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_KnowledgeBuildPathDirectory(CATBSTR & oKnowledgeBuildPathDirectory); \
virtual HRESULT __stdcall put_KnowledgeBuildPathDirectory(const CATBSTR & iKnowledgeBuildPathDirectory); \
virtual HRESULT __stdcall GetKnowledgeBuildPathDirectoryInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetKnowledgeBuildPathDirectoryLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIALanguageSheetSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_LoadExtendedLanguageLib(short & oLoadExtendedLanguageLib) \
{ \
return (ENVTIECALL(CATIALanguageSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_LoadExtendedLanguageLib(oLoadExtendedLanguageLib)); \
} \
HRESULT __stdcall  ENVTIEName::put_LoadExtendedLanguageLib(short iLoadExtendedLanguageLib) \
{ \
return (ENVTIECALL(CATIALanguageSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_LoadExtendedLanguageLib(iLoadExtendedLanguageLib)); \
} \
HRESULT __stdcall  ENVTIEName::GetLoadExtendedLanguageLibInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIALanguageSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetLoadExtendedLanguageLibInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetLoadExtendedLanguageLibLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIALanguageSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetLoadExtendedLanguageLibLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_LoadAllPackages(short & oLoadAllPackages) \
{ \
return (ENVTIECALL(CATIALanguageSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_LoadAllPackages(oLoadAllPackages)); \
} \
HRESULT __stdcall  ENVTIEName::put_LoadAllPackages(short iLoadAllPackages) \
{ \
return (ENVTIECALL(CATIALanguageSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_LoadAllPackages(iLoadAllPackages)); \
} \
HRESULT __stdcall  ENVTIEName::GetLoadAllPackagesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIALanguageSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetLoadAllPackagesInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetLoadAllPackagesLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIALanguageSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetLoadAllPackagesLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ListOfPackagesToLoad(CATBSTR & oListOfPackagesToLoad) \
{ \
return (ENVTIECALL(CATIALanguageSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ListOfPackagesToLoad(oListOfPackagesToLoad)); \
} \
HRESULT __stdcall  ENVTIEName::put_ListOfPackagesToLoad(const CATBSTR & iListOfPackagesToLoad) \
{ \
return (ENVTIECALL(CATIALanguageSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ListOfPackagesToLoad(iListOfPackagesToLoad)); \
} \
HRESULT __stdcall  ENVTIEName::GetListOfPackagesToLoadInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIALanguageSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetListOfPackagesToLoadInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetListOfPackagesToLoadLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIALanguageSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetListOfPackagesToLoadLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReferenceDirectoryForTypes(CATBSTR & oReferenceDirectoryForTypes) \
{ \
return (ENVTIECALL(CATIALanguageSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ReferenceDirectoryForTypes(oReferenceDirectoryForTypes)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReferenceDirectoryForTypes(const CATBSTR & iReferenceDirectoryForTypes) \
{ \
return (ENVTIECALL(CATIALanguageSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ReferenceDirectoryForTypes(iReferenceDirectoryForTypes)); \
} \
HRESULT __stdcall  ENVTIEName::GetReferenceDirectoryForTypesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIALanguageSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetReferenceDirectoryForTypesInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetReferenceDirectoryForTypesLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIALanguageSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetReferenceDirectoryForTypesLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_KnowledgeBuildPathDirectory(CATBSTR & oKnowledgeBuildPathDirectory) \
{ \
return (ENVTIECALL(CATIALanguageSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_KnowledgeBuildPathDirectory(oKnowledgeBuildPathDirectory)); \
} \
HRESULT __stdcall  ENVTIEName::put_KnowledgeBuildPathDirectory(const CATBSTR & iKnowledgeBuildPathDirectory) \
{ \
return (ENVTIECALL(CATIALanguageSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_KnowledgeBuildPathDirectory(iKnowledgeBuildPathDirectory)); \
} \
HRESULT __stdcall  ENVTIEName::GetKnowledgeBuildPathDirectoryInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIALanguageSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetKnowledgeBuildPathDirectoryInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetKnowledgeBuildPathDirectoryLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIALanguageSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetKnowledgeBuildPathDirectoryLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIALanguageSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIALanguageSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIALanguageSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIALanguageSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIALanguageSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIALanguageSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIALanguageSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIALanguageSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIALanguageSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIALanguageSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIALanguageSheetSettingAtt(classe)    TIECATIALanguageSheetSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIALanguageSheetSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIALanguageSheetSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIALanguageSheetSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIALanguageSheetSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIALanguageSheetSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIALanguageSheetSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIALanguageSheetSettingAtt##classe::get_LoadExtendedLanguageLib(short & oLoadExtendedLanguageLib) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oLoadExtendedLanguageLib); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LoadExtendedLanguageLib(oLoadExtendedLanguageLib); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oLoadExtendedLanguageLib); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALanguageSheetSettingAtt##classe::put_LoadExtendedLanguageLib(short iLoadExtendedLanguageLib) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iLoadExtendedLanguageLib); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LoadExtendedLanguageLib(iLoadExtendedLanguageLib); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iLoadExtendedLanguageLib); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALanguageSheetSettingAtt##classe::GetLoadExtendedLanguageLibInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLoadExtendedLanguageLibInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALanguageSheetSettingAtt##classe::SetLoadExtendedLanguageLibLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLoadExtendedLanguageLibLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALanguageSheetSettingAtt##classe::get_LoadAllPackages(short & oLoadAllPackages) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oLoadAllPackages); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LoadAllPackages(oLoadAllPackages); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oLoadAllPackages); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALanguageSheetSettingAtt##classe::put_LoadAllPackages(short iLoadAllPackages) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iLoadAllPackages); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LoadAllPackages(iLoadAllPackages); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iLoadAllPackages); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALanguageSheetSettingAtt##classe::GetLoadAllPackagesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLoadAllPackagesInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALanguageSheetSettingAtt##classe::SetLoadAllPackagesLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLoadAllPackagesLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALanguageSheetSettingAtt##classe::get_ListOfPackagesToLoad(CATBSTR & oListOfPackagesToLoad) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oListOfPackagesToLoad); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ListOfPackagesToLoad(oListOfPackagesToLoad); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oListOfPackagesToLoad); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALanguageSheetSettingAtt##classe::put_ListOfPackagesToLoad(const CATBSTR & iListOfPackagesToLoad) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iListOfPackagesToLoad); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ListOfPackagesToLoad(iListOfPackagesToLoad); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iListOfPackagesToLoad); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALanguageSheetSettingAtt##classe::GetListOfPackagesToLoadInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfPackagesToLoadInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALanguageSheetSettingAtt##classe::SetListOfPackagesToLoadLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetListOfPackagesToLoadLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALanguageSheetSettingAtt##classe::get_ReferenceDirectoryForTypes(CATBSTR & oReferenceDirectoryForTypes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oReferenceDirectoryForTypes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReferenceDirectoryForTypes(oReferenceDirectoryForTypes); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oReferenceDirectoryForTypes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALanguageSheetSettingAtt##classe::put_ReferenceDirectoryForTypes(const CATBSTR & iReferenceDirectoryForTypes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iReferenceDirectoryForTypes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReferenceDirectoryForTypes(iReferenceDirectoryForTypes); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iReferenceDirectoryForTypes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALanguageSheetSettingAtt##classe::GetReferenceDirectoryForTypesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetReferenceDirectoryForTypesInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALanguageSheetSettingAtt##classe::SetReferenceDirectoryForTypesLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetReferenceDirectoryForTypesLock(iLocked); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALanguageSheetSettingAtt##classe::get_KnowledgeBuildPathDirectory(CATBSTR & oKnowledgeBuildPathDirectory) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oKnowledgeBuildPathDirectory); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_KnowledgeBuildPathDirectory(oKnowledgeBuildPathDirectory); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oKnowledgeBuildPathDirectory); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALanguageSheetSettingAtt##classe::put_KnowledgeBuildPathDirectory(const CATBSTR & iKnowledgeBuildPathDirectory) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iKnowledgeBuildPathDirectory); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_KnowledgeBuildPathDirectory(iKnowledgeBuildPathDirectory); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iKnowledgeBuildPathDirectory); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALanguageSheetSettingAtt##classe::GetKnowledgeBuildPathDirectoryInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetKnowledgeBuildPathDirectoryInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALanguageSheetSettingAtt##classe::SetKnowledgeBuildPathDirectoryLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetKnowledgeBuildPathDirectoryLock(iLocked); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALanguageSheetSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALanguageSheetSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALanguageSheetSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALanguageSheetSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALanguageSheetSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALanguageSheetSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALanguageSheetSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALanguageSheetSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALanguageSheetSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALanguageSheetSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIALanguageSheetSettingAtt(classe) \
 \
 \
declare_TIE_CATIALanguageSheetSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIALanguageSheetSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIALanguageSheetSettingAtt,"CATIALanguageSheetSettingAtt",CATIALanguageSheetSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIALanguageSheetSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIALanguageSheetSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIALanguageSheetSettingAtt##classe(classe::MetaObject(),CATIALanguageSheetSettingAtt::MetaObject(),(void *)CreateTIECATIALanguageSheetSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIALanguageSheetSettingAtt(classe) \
 \
 \
declare_TIE_CATIALanguageSheetSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIALanguageSheetSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIALanguageSheetSettingAtt,"CATIALanguageSheetSettingAtt",CATIALanguageSheetSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIALanguageSheetSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIALanguageSheetSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIALanguageSheetSettingAtt##classe(classe::MetaObject(),CATIALanguageSheetSettingAtt::MetaObject(),(void *)CreateTIECATIALanguageSheetSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIALanguageSheetSettingAtt(classe) TIE_CATIALanguageSheetSettingAtt(classe)
#else
#define BOA_CATIALanguageSheetSettingAtt(classe) CATImplementBOA(CATIALanguageSheetSettingAtt, classe)
#endif

#endif
