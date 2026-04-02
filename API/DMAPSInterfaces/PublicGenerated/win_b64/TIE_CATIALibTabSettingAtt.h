#ifndef __TIE_CATIALibTabSettingAtt
#define __TIE_CATIALibTabSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIALibTabSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIALibTabSettingAtt */
#define declare_TIE_CATIALibTabSettingAtt(classe) \
 \
 \
class TIECATIALibTabSettingAtt##classe : public CATIALibTabSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIALibTabSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetListOfLibraryFilePath(CATSafeArrayVariant *& ioPath); \
      virtual HRESULT __stdcall PutListOfLibraryFilePath(const CATSafeArrayVariant & iPath); \
      virtual HRESULT __stdcall GetListOfLibraryFilePathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetListOfLibraryFilePathLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetProcessIDScript(CATBSTR & oPath); \
      virtual HRESULT __stdcall SetProcessIDScript(const CATBSTR & iPath); \
      virtual HRESULT __stdcall GetProcessIDScriptInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetProcessIDScriptLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetIDUniqueSetting(CATLONG & oIsUnique); \
      virtual HRESULT __stdcall SetIDUniqueSetting(CATLONG isUnique); \
      virtual HRESULT __stdcall GetIDUniqueSettingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetIDUniqueSettingLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIALibTabSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetListOfLibraryFilePath(CATSafeArrayVariant *& ioPath); \
virtual HRESULT __stdcall PutListOfLibraryFilePath(const CATSafeArrayVariant & iPath); \
virtual HRESULT __stdcall GetListOfLibraryFilePathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetListOfLibraryFilePathLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetProcessIDScript(CATBSTR & oPath); \
virtual HRESULT __stdcall SetProcessIDScript(const CATBSTR & iPath); \
virtual HRESULT __stdcall GetProcessIDScriptInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetProcessIDScriptLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetIDUniqueSetting(CATLONG & oIsUnique); \
virtual HRESULT __stdcall SetIDUniqueSetting(CATLONG isUnique); \
virtual HRESULT __stdcall GetIDUniqueSettingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetIDUniqueSettingLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIALibTabSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetListOfLibraryFilePath(CATSafeArrayVariant *& ioPath) \
{ \
return (ENVTIECALL(CATIALibTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetListOfLibraryFilePath(ioPath)); \
} \
HRESULT __stdcall  ENVTIEName::PutListOfLibraryFilePath(const CATSafeArrayVariant & iPath) \
{ \
return (ENVTIECALL(CATIALibTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)PutListOfLibraryFilePath(iPath)); \
} \
HRESULT __stdcall  ENVTIEName::GetListOfLibraryFilePathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIALibTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetListOfLibraryFilePathInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetListOfLibraryFilePathLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIALibTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetListOfLibraryFilePathLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetProcessIDScript(CATBSTR & oPath) \
{ \
return (ENVTIECALL(CATIALibTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetProcessIDScript(oPath)); \
} \
HRESULT __stdcall  ENVTIEName::SetProcessIDScript(const CATBSTR & iPath) \
{ \
return (ENVTIECALL(CATIALibTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetProcessIDScript(iPath)); \
} \
HRESULT __stdcall  ENVTIEName::GetProcessIDScriptInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIALibTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetProcessIDScriptInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetProcessIDScriptLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIALibTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetProcessIDScriptLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetIDUniqueSetting(CATLONG & oIsUnique) \
{ \
return (ENVTIECALL(CATIALibTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetIDUniqueSetting(oIsUnique)); \
} \
HRESULT __stdcall  ENVTIEName::SetIDUniqueSetting(CATLONG isUnique) \
{ \
return (ENVTIECALL(CATIALibTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetIDUniqueSetting(isUnique)); \
} \
HRESULT __stdcall  ENVTIEName::GetIDUniqueSettingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIALibTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetIDUniqueSettingInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetIDUniqueSettingLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIALibTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetIDUniqueSettingLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIALibTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIALibTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIALibTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIALibTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIALibTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIALibTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIALibTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIALibTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIALibTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIALibTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIALibTabSettingAtt(classe)    TIECATIALibTabSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIALibTabSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIALibTabSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIALibTabSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIALibTabSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIALibTabSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIALibTabSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIALibTabSettingAtt##classe::GetListOfLibraryFilePath(CATSafeArrayVariant *& ioPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&ioPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfLibraryFilePath(ioPath); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&ioPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALibTabSettingAtt##classe::PutListOfLibraryFilePath(const CATSafeArrayVariant & iPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutListOfLibraryFilePath(iPath); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALibTabSettingAtt##classe::GetListOfLibraryFilePathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfLibraryFilePathInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALibTabSettingAtt##classe::SetListOfLibraryFilePathLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetListOfLibraryFilePathLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALibTabSettingAtt##classe::GetProcessIDScript(CATBSTR & oPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProcessIDScript(oPath); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALibTabSettingAtt##classe::SetProcessIDScript(const CATBSTR & iPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetProcessIDScript(iPath); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALibTabSettingAtt##classe::GetProcessIDScriptInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProcessIDScriptInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALibTabSettingAtt##classe::SetProcessIDScriptLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetProcessIDScriptLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALibTabSettingAtt##classe::GetIDUniqueSetting(CATLONG & oIsUnique) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oIsUnique); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetIDUniqueSetting(oIsUnique); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oIsUnique); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALibTabSettingAtt##classe::SetIDUniqueSetting(CATLONG isUnique) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&isUnique); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetIDUniqueSetting(isUnique); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&isUnique); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALibTabSettingAtt##classe::GetIDUniqueSettingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetIDUniqueSettingInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALibTabSettingAtt##classe::SetIDUniqueSettingLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetIDUniqueSettingLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALibTabSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALibTabSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALibTabSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALibTabSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALibTabSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALibTabSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALibTabSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALibTabSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALibTabSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALibTabSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIALibTabSettingAtt(classe) \
 \
 \
declare_TIE_CATIALibTabSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIALibTabSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIALibTabSettingAtt,"CATIALibTabSettingAtt",CATIALibTabSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIALibTabSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIALibTabSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIALibTabSettingAtt##classe(classe::MetaObject(),CATIALibTabSettingAtt::MetaObject(),(void *)CreateTIECATIALibTabSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIALibTabSettingAtt(classe) \
 \
 \
declare_TIE_CATIALibTabSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIALibTabSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIALibTabSettingAtt,"CATIALibTabSettingAtt",CATIALibTabSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIALibTabSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIALibTabSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIALibTabSettingAtt##classe(classe::MetaObject(),CATIALibTabSettingAtt::MetaObject(),(void *)CreateTIECATIALibTabSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIALibTabSettingAtt(classe) TIE_CATIALibTabSettingAtt(classe)
#else
#define BOA_CATIALibTabSettingAtt(classe) CATImplementBOA(CATIALibTabSettingAtt, classe)
#endif

#endif
