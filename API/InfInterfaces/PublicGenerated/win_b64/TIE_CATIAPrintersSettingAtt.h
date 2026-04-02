#ifndef __TIE_CATIAPrintersSettingAtt
#define __TIE_CATIAPrintersSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPrintersSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPrintersSettingAtt */
#define declare_TIE_CATIAPrintersSettingAtt(classe) \
 \
 \
class TIECATIAPrintersSettingAtt##classe : public CATIAPrintersSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPrintersSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetPrinterDirectories(CATSafeArrayVariant *& oPrinterDirs); \
      virtual HRESULT __stdcall GetPrinterDirectoryState(const CATBSTR & iPrinterDir, CatPrinterDirState & oPrinterDirState); \
      virtual HRESULT __stdcall AddPrinterDirectory(const CATBSTR & iPrinterDir, CatPrinterDirState iPrinterDirState); \
      virtual HRESULT __stdcall ModifyPrinterDirectoryState(const CATBSTR & iPrinterDir, CatPrinterDirState iPrinterDirState); \
      virtual HRESULT __stdcall RemovePrinterDirectory(const CATBSTR & iPrinterDir); \
      virtual HRESULT __stdcall RemoveAllPrinterDirectories(); \
      virtual HRESULT __stdcall SetPrinterDirectoriesLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetPrinterDirectoriesInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall GetNewPrinterDirectory(CATBSTR & oNewPrinterDir); \
      virtual HRESULT __stdcall SetNewPrinterDirectory(const CATBSTR & iNewPrinterDir); \
      virtual HRESULT __stdcall SetNewPrinterDirectoryLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetNewPrinterDirectoryInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall GetDriverConfigurationPath(CATBSTR & oDriverCfgPath); \
      virtual HRESULT __stdcall SetDriverConfigurationPath(const CATBSTR & iDriverCfgPath); \
      virtual HRESULT __stdcall SetDriverConfigurationPathLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetDriverConfigurationPathInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall GetPrinterGroups(CATSafeArrayVariant *& oPrinterGroupNames); \
      virtual HRESULT __stdcall GetPrinterArrayForGroup(const CATBSTR & iPrinterGroupName, CATSafeArrayVariant *& oPrinterNames); \
      virtual HRESULT __stdcall AddPrinterGroup(const CATBSTR & iPrinterGroupName, const CATSafeArrayVariant & iPrinterNames); \
      virtual HRESULT __stdcall ModifyPrinterArrayForGroup(const CATBSTR & iPrinterGroupName, const CATSafeArrayVariant & iPrinterNames); \
      virtual HRESULT __stdcall RemovePrinterGroup(const CATBSTR & iPrinterGroupName); \
      virtual HRESULT __stdcall RemoveAllPrinterGroups(); \
      virtual HRESULT __stdcall SetPrinterGroupsLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetPrinterGroupsInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
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



#define ENVTIEdeclare_CATIAPrintersSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetPrinterDirectories(CATSafeArrayVariant *& oPrinterDirs); \
virtual HRESULT __stdcall GetPrinterDirectoryState(const CATBSTR & iPrinterDir, CatPrinterDirState & oPrinterDirState); \
virtual HRESULT __stdcall AddPrinterDirectory(const CATBSTR & iPrinterDir, CatPrinterDirState iPrinterDirState); \
virtual HRESULT __stdcall ModifyPrinterDirectoryState(const CATBSTR & iPrinterDir, CatPrinterDirState iPrinterDirState); \
virtual HRESULT __stdcall RemovePrinterDirectory(const CATBSTR & iPrinterDir); \
virtual HRESULT __stdcall RemoveAllPrinterDirectories(); \
virtual HRESULT __stdcall SetPrinterDirectoriesLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetPrinterDirectoriesInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall GetNewPrinterDirectory(CATBSTR & oNewPrinterDir); \
virtual HRESULT __stdcall SetNewPrinterDirectory(const CATBSTR & iNewPrinterDir); \
virtual HRESULT __stdcall SetNewPrinterDirectoryLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetNewPrinterDirectoryInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall GetDriverConfigurationPath(CATBSTR & oDriverCfgPath); \
virtual HRESULT __stdcall SetDriverConfigurationPath(const CATBSTR & iDriverCfgPath); \
virtual HRESULT __stdcall SetDriverConfigurationPathLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetDriverConfigurationPathInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall GetPrinterGroups(CATSafeArrayVariant *& oPrinterGroupNames); \
virtual HRESULT __stdcall GetPrinterArrayForGroup(const CATBSTR & iPrinterGroupName, CATSafeArrayVariant *& oPrinterNames); \
virtual HRESULT __stdcall AddPrinterGroup(const CATBSTR & iPrinterGroupName, const CATSafeArrayVariant & iPrinterNames); \
virtual HRESULT __stdcall ModifyPrinterArrayForGroup(const CATBSTR & iPrinterGroupName, const CATSafeArrayVariant & iPrinterNames); \
virtual HRESULT __stdcall RemovePrinterGroup(const CATBSTR & iPrinterGroupName); \
virtual HRESULT __stdcall RemoveAllPrinterGroups(); \
virtual HRESULT __stdcall SetPrinterGroupsLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetPrinterGroupsInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
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


#define ENVTIEdefine_CATIAPrintersSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetPrinterDirectories(CATSafeArrayVariant *& oPrinterDirs) \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPrinterDirectories(oPrinterDirs)); \
} \
HRESULT __stdcall  ENVTIEName::GetPrinterDirectoryState(const CATBSTR & iPrinterDir, CatPrinterDirState & oPrinterDirState) \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPrinterDirectoryState(iPrinterDir,oPrinterDirState)); \
} \
HRESULT __stdcall  ENVTIEName::AddPrinterDirectory(const CATBSTR & iPrinterDir, CatPrinterDirState iPrinterDirState) \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)AddPrinterDirectory(iPrinterDir,iPrinterDirState)); \
} \
HRESULT __stdcall  ENVTIEName::ModifyPrinterDirectoryState(const CATBSTR & iPrinterDir, CatPrinterDirState iPrinterDirState) \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)ModifyPrinterDirectoryState(iPrinterDir,iPrinterDirState)); \
} \
HRESULT __stdcall  ENVTIEName::RemovePrinterDirectory(const CATBSTR & iPrinterDir) \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)RemovePrinterDirectory(iPrinterDir)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAllPrinterDirectories() \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)RemoveAllPrinterDirectories()); \
} \
HRESULT __stdcall  ENVTIEName::SetPrinterDirectoriesLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPrinterDirectoriesLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetPrinterDirectoriesInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPrinterDirectoriesInfo(oAdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::GetNewPrinterDirectory(CATBSTR & oNewPrinterDir) \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetNewPrinterDirectory(oNewPrinterDir)); \
} \
HRESULT __stdcall  ENVTIEName::SetNewPrinterDirectory(const CATBSTR & iNewPrinterDir) \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetNewPrinterDirectory(iNewPrinterDir)); \
} \
HRESULT __stdcall  ENVTIEName::SetNewPrinterDirectoryLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetNewPrinterDirectoryLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetNewPrinterDirectoryInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetNewPrinterDirectoryInfo(oAdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::GetDriverConfigurationPath(CATBSTR & oDriverCfgPath) \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDriverConfigurationPath(oDriverCfgPath)); \
} \
HRESULT __stdcall  ENVTIEName::SetDriverConfigurationPath(const CATBSTR & iDriverCfgPath) \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDriverConfigurationPath(iDriverCfgPath)); \
} \
HRESULT __stdcall  ENVTIEName::SetDriverConfigurationPathLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDriverConfigurationPathLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetDriverConfigurationPathInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDriverConfigurationPathInfo(oAdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::GetPrinterGroups(CATSafeArrayVariant *& oPrinterGroupNames) \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPrinterGroups(oPrinterGroupNames)); \
} \
HRESULT __stdcall  ENVTIEName::GetPrinterArrayForGroup(const CATBSTR & iPrinterGroupName, CATSafeArrayVariant *& oPrinterNames) \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPrinterArrayForGroup(iPrinterGroupName,oPrinterNames)); \
} \
HRESULT __stdcall  ENVTIEName::AddPrinterGroup(const CATBSTR & iPrinterGroupName, const CATSafeArrayVariant & iPrinterNames) \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)AddPrinterGroup(iPrinterGroupName,iPrinterNames)); \
} \
HRESULT __stdcall  ENVTIEName::ModifyPrinterArrayForGroup(const CATBSTR & iPrinterGroupName, const CATSafeArrayVariant & iPrinterNames) \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)ModifyPrinterArrayForGroup(iPrinterGroupName,iPrinterNames)); \
} \
HRESULT __stdcall  ENVTIEName::RemovePrinterGroup(const CATBSTR & iPrinterGroupName) \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)RemovePrinterGroup(iPrinterGroupName)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAllPrinterGroups() \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)RemoveAllPrinterGroups()); \
} \
HRESULT __stdcall  ENVTIEName::SetPrinterGroupsLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPrinterGroupsLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetPrinterGroupsInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPrinterGroupsInfo(oAdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPrintersSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPrintersSettingAtt(classe)    TIECATIAPrintersSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPrintersSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPrintersSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAPrintersSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPrintersSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPrintersSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPrintersSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAPrintersSettingAtt##classe::GetPrinterDirectories(CATSafeArrayVariant *& oPrinterDirs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oPrinterDirs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPrinterDirectories(oPrinterDirs); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oPrinterDirs); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrintersSettingAtt##classe::GetPrinterDirectoryState(const CATBSTR & iPrinterDir, CatPrinterDirState & oPrinterDirState) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iPrinterDir,&oPrinterDirState); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPrinterDirectoryState(iPrinterDir,oPrinterDirState); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iPrinterDir,&oPrinterDirState); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrintersSettingAtt##classe::AddPrinterDirectory(const CATBSTR & iPrinterDir, CatPrinterDirState iPrinterDirState) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iPrinterDir,&iPrinterDirState); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddPrinterDirectory(iPrinterDir,iPrinterDirState); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iPrinterDir,&iPrinterDirState); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrintersSettingAtt##classe::ModifyPrinterDirectoryState(const CATBSTR & iPrinterDir, CatPrinterDirState iPrinterDirState) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iPrinterDir,&iPrinterDirState); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ModifyPrinterDirectoryState(iPrinterDir,iPrinterDirState); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iPrinterDir,&iPrinterDirState); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrintersSettingAtt##classe::RemovePrinterDirectory(const CATBSTR & iPrinterDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iPrinterDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemovePrinterDirectory(iPrinterDir); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iPrinterDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrintersSettingAtt##classe::RemoveAllPrinterDirectories() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAllPrinterDirectories(); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrintersSettingAtt##classe::SetPrinterDirectoriesLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPrinterDirectoriesLock(iLock); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrintersSettingAtt##classe::GetPrinterDirectoriesInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oAdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPrinterDirectoriesInfo(oAdminLevel,oLocked,oModified); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oAdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrintersSettingAtt##classe::GetNewPrinterDirectory(CATBSTR & oNewPrinterDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNewPrinterDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNewPrinterDirectory(oNewPrinterDir); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNewPrinterDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrintersSettingAtt##classe::SetNewPrinterDirectory(const CATBSTR & iNewPrinterDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iNewPrinterDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetNewPrinterDirectory(iNewPrinterDir); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iNewPrinterDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrintersSettingAtt##classe::SetNewPrinterDirectoryLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetNewPrinterDirectoryLock(iLock); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrintersSettingAtt##classe::GetNewPrinterDirectoryInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oAdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNewPrinterDirectoryInfo(oAdminLevel,oLocked,oModified); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oAdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrintersSettingAtt##classe::GetDriverConfigurationPath(CATBSTR & oDriverCfgPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oDriverCfgPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDriverConfigurationPath(oDriverCfgPath); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oDriverCfgPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrintersSettingAtt##classe::SetDriverConfigurationPath(const CATBSTR & iDriverCfgPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iDriverCfgPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDriverConfigurationPath(iDriverCfgPath); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iDriverCfgPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrintersSettingAtt##classe::SetDriverConfigurationPathLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDriverConfigurationPathLock(iLock); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrintersSettingAtt##classe::GetDriverConfigurationPathInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oAdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDriverConfigurationPathInfo(oAdminLevel,oLocked,oModified); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oAdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrintersSettingAtt##classe::GetPrinterGroups(CATSafeArrayVariant *& oPrinterGroupNames) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oPrinterGroupNames); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPrinterGroups(oPrinterGroupNames); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oPrinterGroupNames); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrintersSettingAtt##classe::GetPrinterArrayForGroup(const CATBSTR & iPrinterGroupName, CATSafeArrayVariant *& oPrinterNames) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iPrinterGroupName,&oPrinterNames); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPrinterArrayForGroup(iPrinterGroupName,oPrinterNames); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iPrinterGroupName,&oPrinterNames); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrintersSettingAtt##classe::AddPrinterGroup(const CATBSTR & iPrinterGroupName, const CATSafeArrayVariant & iPrinterNames) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iPrinterGroupName,&iPrinterNames); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddPrinterGroup(iPrinterGroupName,iPrinterNames); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iPrinterGroupName,&iPrinterNames); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrintersSettingAtt##classe::ModifyPrinterArrayForGroup(const CATBSTR & iPrinterGroupName, const CATSafeArrayVariant & iPrinterNames) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iPrinterGroupName,&iPrinterNames); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ModifyPrinterArrayForGroup(iPrinterGroupName,iPrinterNames); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iPrinterGroupName,&iPrinterNames); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrintersSettingAtt##classe::RemovePrinterGroup(const CATBSTR & iPrinterGroupName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iPrinterGroupName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemovePrinterGroup(iPrinterGroupName); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iPrinterGroupName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrintersSettingAtt##classe::RemoveAllPrinterGroups() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAllPrinterGroups(); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrintersSettingAtt##classe::SetPrinterGroupsLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPrinterGroupsLock(iLock); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrintersSettingAtt##classe::GetPrinterGroupsInfo(CATBSTR & oAdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oAdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPrinterGroupsInfo(oAdminLevel,oLocked,oModified); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oAdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrintersSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrintersSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrintersSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrintersSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPrintersSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPrintersSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPrintersSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPrintersSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPrintersSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPrintersSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPrintersSettingAtt(classe) \
 \
 \
declare_TIE_CATIAPrintersSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPrintersSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPrintersSettingAtt,"CATIAPrintersSettingAtt",CATIAPrintersSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPrintersSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPrintersSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPrintersSettingAtt##classe(classe::MetaObject(),CATIAPrintersSettingAtt::MetaObject(),(void *)CreateTIECATIAPrintersSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPrintersSettingAtt(classe) \
 \
 \
declare_TIE_CATIAPrintersSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPrintersSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPrintersSettingAtt,"CATIAPrintersSettingAtt",CATIAPrintersSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPrintersSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPrintersSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPrintersSettingAtt##classe(classe::MetaObject(),CATIAPrintersSettingAtt::MetaObject(),(void *)CreateTIECATIAPrintersSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPrintersSettingAtt(classe) TIE_CATIAPrintersSettingAtt(classe)
#else
#define BOA_CATIAPrintersSettingAtt(classe) CATImplementBOA(CATIAPrintersSettingAtt, classe)
#endif

#endif
