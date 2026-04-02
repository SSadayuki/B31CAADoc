#ifndef __TIE_CATIADMUTolSettingAtt
#define __TIE_CATIADMUTolSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADMUTolSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADMUTolSettingAtt */
#define declare_TIE_CATIADMUTolSettingAtt(classe) \
 \
 \
class TIECATIADMUTolSettingAtt##classe : public CATIADMUTolSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADMUTolSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetRelatedColors(CATLONG & oRelatedR, CATLONG & oRelatedG, CATLONG & oRelatedB); \
      virtual HRESULT __stdcall SetRelatedColors(CATLONG iRelatedR, CATLONG iRelatedG, CATLONG iRelatedB); \
      virtual HRESULT __stdcall SetRelatedColorsLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetRelatedColorsInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DesignMode(CAT_VARIANT_BOOL & oDesignMode); \
      virtual HRESULT __stdcall put_DesignMode(CAT_VARIANT_BOOL iDesignMode); \
      virtual HRESULT __stdcall SetDesignModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetDesignModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_SaveCGR(CAT_VARIANT_BOOL & oSaveCGR); \
      virtual HRESULT __stdcall put_SaveCGR(CAT_VARIANT_BOOL iSaveCGR); \
      virtual HRESULT __stdcall SetSaveCGRLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetSaveCGRInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_SectPattern(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_SectPattern(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetSectPatternLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetSectPatternInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_PrevArea(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_PrevArea(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall SetPrevAreaLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetPrevAreaInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
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



#define ENVTIEdeclare_CATIADMUTolSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetRelatedColors(CATLONG & oRelatedR, CATLONG & oRelatedG, CATLONG & oRelatedB); \
virtual HRESULT __stdcall SetRelatedColors(CATLONG iRelatedR, CATLONG iRelatedG, CATLONG iRelatedB); \
virtual HRESULT __stdcall SetRelatedColorsLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetRelatedColorsInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DesignMode(CAT_VARIANT_BOOL & oDesignMode); \
virtual HRESULT __stdcall put_DesignMode(CAT_VARIANT_BOOL iDesignMode); \
virtual HRESULT __stdcall SetDesignModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetDesignModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_SaveCGR(CAT_VARIANT_BOOL & oSaveCGR); \
virtual HRESULT __stdcall put_SaveCGR(CAT_VARIANT_BOOL iSaveCGR); \
virtual HRESULT __stdcall SetSaveCGRLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetSaveCGRInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_SectPattern(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_SectPattern(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetSectPatternLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetSectPatternInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_PrevArea(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_PrevArea(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall SetPrevAreaLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetPrevAreaInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
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


#define ENVTIEdefine_CATIADMUTolSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetRelatedColors(CATLONG & oRelatedR, CATLONG & oRelatedG, CATLONG & oRelatedB) \
{ \
return (ENVTIECALL(CATIADMUTolSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetRelatedColors(oRelatedR,oRelatedG,oRelatedB)); \
} \
HRESULT __stdcall  ENVTIEName::SetRelatedColors(CATLONG iRelatedR, CATLONG iRelatedG, CATLONG iRelatedB) \
{ \
return (ENVTIECALL(CATIADMUTolSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetRelatedColors(iRelatedR,iRelatedG,iRelatedB)); \
} \
HRESULT __stdcall  ENVTIEName::SetRelatedColorsLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIADMUTolSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetRelatedColorsLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetRelatedColorsInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIADMUTolSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetRelatedColorsInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DesignMode(CAT_VARIANT_BOOL & oDesignMode) \
{ \
return (ENVTIECALL(CATIADMUTolSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DesignMode(oDesignMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_DesignMode(CAT_VARIANT_BOOL iDesignMode) \
{ \
return (ENVTIECALL(CATIADMUTolSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DesignMode(iDesignMode)); \
} \
HRESULT __stdcall  ENVTIEName::SetDesignModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIADMUTolSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDesignModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetDesignModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIADMUTolSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDesignModeInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_SaveCGR(CAT_VARIANT_BOOL & oSaveCGR) \
{ \
return (ENVTIECALL(CATIADMUTolSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SaveCGR(oSaveCGR)); \
} \
HRESULT __stdcall  ENVTIEName::put_SaveCGR(CAT_VARIANT_BOOL iSaveCGR) \
{ \
return (ENVTIECALL(CATIADMUTolSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SaveCGR(iSaveCGR)); \
} \
HRESULT __stdcall  ENVTIEName::SetSaveCGRLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIADMUTolSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSaveCGRLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetSaveCGRInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIADMUTolSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSaveCGRInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_SectPattern(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIADMUTolSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SectPattern(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_SectPattern(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIADMUTolSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SectPattern(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetSectPatternLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIADMUTolSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSectPatternLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetSectPatternInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIADMUTolSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSectPatternInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_PrevArea(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIADMUTolSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_PrevArea(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_PrevArea(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIADMUTolSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_PrevArea(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetPrevAreaLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIADMUTolSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPrevAreaLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetPrevAreaInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIADMUTolSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPrevAreaInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIADMUTolSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIADMUTolSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIADMUTolSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIADMUTolSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIADMUTolSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADMUTolSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADMUTolSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADMUTolSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADMUTolSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADMUTolSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADMUTolSettingAtt(classe)    TIECATIADMUTolSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADMUTolSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADMUTolSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIADMUTolSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADMUTolSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADMUTolSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADMUTolSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIADMUTolSettingAtt##classe::GetRelatedColors(CATLONG & oRelatedR, CATLONG & oRelatedG, CATLONG & oRelatedB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oRelatedR,&oRelatedG,&oRelatedB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRelatedColors(oRelatedR,oRelatedG,oRelatedB); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oRelatedR,&oRelatedG,&oRelatedB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUTolSettingAtt##classe::SetRelatedColors(CATLONG iRelatedR, CATLONG iRelatedG, CATLONG iRelatedB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iRelatedR,&iRelatedG,&iRelatedB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRelatedColors(iRelatedR,iRelatedG,iRelatedB); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iRelatedR,&iRelatedG,&iRelatedB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUTolSettingAtt##classe::SetRelatedColorsLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRelatedColorsLock(iLocked); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUTolSettingAtt##classe::GetRelatedColorsInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRelatedColorsInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUTolSettingAtt##classe::get_DesignMode(CAT_VARIANT_BOOL & oDesignMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oDesignMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DesignMode(oDesignMode); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oDesignMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUTolSettingAtt##classe::put_DesignMode(CAT_VARIANT_BOOL iDesignMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iDesignMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DesignMode(iDesignMode); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iDesignMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUTolSettingAtt##classe::SetDesignModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDesignModeLock(iLocked); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUTolSettingAtt##classe::GetDesignModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDesignModeInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUTolSettingAtt##classe::get_SaveCGR(CAT_VARIANT_BOOL & oSaveCGR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oSaveCGR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SaveCGR(oSaveCGR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oSaveCGR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUTolSettingAtt##classe::put_SaveCGR(CAT_VARIANT_BOOL iSaveCGR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iSaveCGR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SaveCGR(iSaveCGR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iSaveCGR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUTolSettingAtt##classe::SetSaveCGRLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSaveCGRLock(iLocked); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUTolSettingAtt##classe::GetSaveCGRInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSaveCGRInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUTolSettingAtt##classe::get_SectPattern(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SectPattern(oValue); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUTolSettingAtt##classe::put_SectPattern(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SectPattern(iValue); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUTolSettingAtt##classe::SetSectPatternLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSectPatternLock(iLocked); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUTolSettingAtt##classe::GetSectPatternInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSectPatternInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUTolSettingAtt##classe::get_PrevArea(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PrevArea(oValue); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUTolSettingAtt##classe::put_PrevArea(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PrevArea(iValue); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUTolSettingAtt##classe::SetPrevAreaLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPrevAreaLock(iLocked); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUTolSettingAtt##classe::GetPrevAreaInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPrevAreaInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUTolSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUTolSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUTolSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUTolSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADMUTolSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMUTolSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMUTolSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMUTolSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMUTolSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADMUTolSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADMUTolSettingAtt(classe) \
 \
 \
declare_TIE_CATIADMUTolSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADMUTolSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADMUTolSettingAtt,"CATIADMUTolSettingAtt",CATIADMUTolSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADMUTolSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADMUTolSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADMUTolSettingAtt##classe(classe::MetaObject(),CATIADMUTolSettingAtt::MetaObject(),(void *)CreateTIECATIADMUTolSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADMUTolSettingAtt(classe) \
 \
 \
declare_TIE_CATIADMUTolSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADMUTolSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADMUTolSettingAtt,"CATIADMUTolSettingAtt",CATIADMUTolSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADMUTolSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADMUTolSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADMUTolSettingAtt##classe(classe::MetaObject(),CATIADMUTolSettingAtt::MetaObject(),(void *)CreateTIECATIADMUTolSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADMUTolSettingAtt(classe) TIE_CATIADMUTolSettingAtt(classe)
#else
#define BOA_CATIADMUTolSettingAtt(classe) CATImplementBOA(CATIADMUTolSettingAtt, classe)
#endif

#endif
