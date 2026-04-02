#ifndef __TIE_CATIAToleranceSheetSettingAtt
#define __TIE_CATIAToleranceSheetSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAToleranceSheetSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAToleranceSheetSettingAtt */
#define declare_TIE_CATIAToleranceSheetSettingAtt(classe) \
 \
 \
class TIECATIAToleranceSheetSettingAtt##classe : public CATIAToleranceSheetSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAToleranceSheetSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_DefaultTolerance(short & oDefaultTolerance); \
      virtual HRESULT __stdcall put_DefaultTolerance(short iDefaultTolerance); \
      virtual HRESULT __stdcall GetDefaultToleranceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDefaultToleranceLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_LengthMaxTolerance(double & oLengthMaxTolerance); \
      virtual HRESULT __stdcall put_LengthMaxTolerance(double iLengthMaxTolerance); \
      virtual HRESULT __stdcall GetLengthMaxToleranceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetLengthMaxToleranceLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_LengthMinTolerance(double & oLengthMinTolerance); \
      virtual HRESULT __stdcall put_LengthMinTolerance(double iLengthMinTolerance); \
      virtual HRESULT __stdcall GetLengthMinToleranceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetLengthMinToleranceLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AngleMaxTolerance(double & oAngleMaxTolerance); \
      virtual HRESULT __stdcall put_AngleMaxTolerance(double iAngleMaxTolerance); \
      virtual HRESULT __stdcall GetAngleMaxToleranceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAngleMaxToleranceLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AngleMinTolerance(double & oAngleMinTolerance); \
      virtual HRESULT __stdcall put_AngleMinTolerance(double iAngleMinTolerance); \
      virtual HRESULT __stdcall GetAngleMinToleranceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAngleMinToleranceLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIAToleranceSheetSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_DefaultTolerance(short & oDefaultTolerance); \
virtual HRESULT __stdcall put_DefaultTolerance(short iDefaultTolerance); \
virtual HRESULT __stdcall GetDefaultToleranceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDefaultToleranceLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_LengthMaxTolerance(double & oLengthMaxTolerance); \
virtual HRESULT __stdcall put_LengthMaxTolerance(double iLengthMaxTolerance); \
virtual HRESULT __stdcall GetLengthMaxToleranceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetLengthMaxToleranceLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_LengthMinTolerance(double & oLengthMinTolerance); \
virtual HRESULT __stdcall put_LengthMinTolerance(double iLengthMinTolerance); \
virtual HRESULT __stdcall GetLengthMinToleranceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetLengthMinToleranceLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AngleMaxTolerance(double & oAngleMaxTolerance); \
virtual HRESULT __stdcall put_AngleMaxTolerance(double iAngleMaxTolerance); \
virtual HRESULT __stdcall GetAngleMaxToleranceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAngleMaxToleranceLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AngleMinTolerance(double & oAngleMinTolerance); \
virtual HRESULT __stdcall put_AngleMinTolerance(double iAngleMinTolerance); \
virtual HRESULT __stdcall GetAngleMinToleranceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAngleMinToleranceLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIAToleranceSheetSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_DefaultTolerance(short & oDefaultTolerance) \
{ \
return (ENVTIECALL(CATIAToleranceSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DefaultTolerance(oDefaultTolerance)); \
} \
HRESULT __stdcall  ENVTIEName::put_DefaultTolerance(short iDefaultTolerance) \
{ \
return (ENVTIECALL(CATIAToleranceSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DefaultTolerance(iDefaultTolerance)); \
} \
HRESULT __stdcall  ENVTIEName::GetDefaultToleranceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAToleranceSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDefaultToleranceInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDefaultToleranceLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAToleranceSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDefaultToleranceLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_LengthMaxTolerance(double & oLengthMaxTolerance) \
{ \
return (ENVTIECALL(CATIAToleranceSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_LengthMaxTolerance(oLengthMaxTolerance)); \
} \
HRESULT __stdcall  ENVTIEName::put_LengthMaxTolerance(double iLengthMaxTolerance) \
{ \
return (ENVTIECALL(CATIAToleranceSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_LengthMaxTolerance(iLengthMaxTolerance)); \
} \
HRESULT __stdcall  ENVTIEName::GetLengthMaxToleranceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAToleranceSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetLengthMaxToleranceInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetLengthMaxToleranceLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAToleranceSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetLengthMaxToleranceLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_LengthMinTolerance(double & oLengthMinTolerance) \
{ \
return (ENVTIECALL(CATIAToleranceSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_LengthMinTolerance(oLengthMinTolerance)); \
} \
HRESULT __stdcall  ENVTIEName::put_LengthMinTolerance(double iLengthMinTolerance) \
{ \
return (ENVTIECALL(CATIAToleranceSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_LengthMinTolerance(iLengthMinTolerance)); \
} \
HRESULT __stdcall  ENVTIEName::GetLengthMinToleranceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAToleranceSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetLengthMinToleranceInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetLengthMinToleranceLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAToleranceSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetLengthMinToleranceLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AngleMaxTolerance(double & oAngleMaxTolerance) \
{ \
return (ENVTIECALL(CATIAToleranceSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AngleMaxTolerance(oAngleMaxTolerance)); \
} \
HRESULT __stdcall  ENVTIEName::put_AngleMaxTolerance(double iAngleMaxTolerance) \
{ \
return (ENVTIECALL(CATIAToleranceSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AngleMaxTolerance(iAngleMaxTolerance)); \
} \
HRESULT __stdcall  ENVTIEName::GetAngleMaxToleranceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAToleranceSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAngleMaxToleranceInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAngleMaxToleranceLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAToleranceSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAngleMaxToleranceLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AngleMinTolerance(double & oAngleMinTolerance) \
{ \
return (ENVTIECALL(CATIAToleranceSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AngleMinTolerance(oAngleMinTolerance)); \
} \
HRESULT __stdcall  ENVTIEName::put_AngleMinTolerance(double iAngleMinTolerance) \
{ \
return (ENVTIECALL(CATIAToleranceSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AngleMinTolerance(iAngleMinTolerance)); \
} \
HRESULT __stdcall  ENVTIEName::GetAngleMinToleranceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAToleranceSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAngleMinToleranceInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAngleMinToleranceLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAToleranceSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAngleMinToleranceLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAToleranceSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAToleranceSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAToleranceSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAToleranceSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAToleranceSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAToleranceSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAToleranceSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAToleranceSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAToleranceSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAToleranceSheetSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAToleranceSheetSettingAtt(classe)    TIECATIAToleranceSheetSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAToleranceSheetSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAToleranceSheetSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAToleranceSheetSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAToleranceSheetSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAToleranceSheetSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAToleranceSheetSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAToleranceSheetSettingAtt##classe::get_DefaultTolerance(short & oDefaultTolerance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oDefaultTolerance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DefaultTolerance(oDefaultTolerance); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oDefaultTolerance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAToleranceSheetSettingAtt##classe::put_DefaultTolerance(short iDefaultTolerance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iDefaultTolerance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DefaultTolerance(iDefaultTolerance); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iDefaultTolerance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAToleranceSheetSettingAtt##classe::GetDefaultToleranceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDefaultToleranceInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAToleranceSheetSettingAtt##classe::SetDefaultToleranceLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDefaultToleranceLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAToleranceSheetSettingAtt##classe::get_LengthMaxTolerance(double & oLengthMaxTolerance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oLengthMaxTolerance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LengthMaxTolerance(oLengthMaxTolerance); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oLengthMaxTolerance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAToleranceSheetSettingAtt##classe::put_LengthMaxTolerance(double iLengthMaxTolerance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iLengthMaxTolerance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LengthMaxTolerance(iLengthMaxTolerance); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iLengthMaxTolerance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAToleranceSheetSettingAtt##classe::GetLengthMaxToleranceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLengthMaxToleranceInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAToleranceSheetSettingAtt##classe::SetLengthMaxToleranceLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLengthMaxToleranceLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAToleranceSheetSettingAtt##classe::get_LengthMinTolerance(double & oLengthMinTolerance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oLengthMinTolerance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LengthMinTolerance(oLengthMinTolerance); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oLengthMinTolerance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAToleranceSheetSettingAtt##classe::put_LengthMinTolerance(double iLengthMinTolerance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iLengthMinTolerance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LengthMinTolerance(iLengthMinTolerance); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iLengthMinTolerance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAToleranceSheetSettingAtt##classe::GetLengthMinToleranceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLengthMinToleranceInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAToleranceSheetSettingAtt##classe::SetLengthMinToleranceLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLengthMinToleranceLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAToleranceSheetSettingAtt##classe::get_AngleMaxTolerance(double & oAngleMaxTolerance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oAngleMaxTolerance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AngleMaxTolerance(oAngleMaxTolerance); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oAngleMaxTolerance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAToleranceSheetSettingAtt##classe::put_AngleMaxTolerance(double iAngleMaxTolerance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iAngleMaxTolerance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AngleMaxTolerance(iAngleMaxTolerance); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iAngleMaxTolerance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAToleranceSheetSettingAtt##classe::GetAngleMaxToleranceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAngleMaxToleranceInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAToleranceSheetSettingAtt##classe::SetAngleMaxToleranceLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAngleMaxToleranceLock(iLocked); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAToleranceSheetSettingAtt##classe::get_AngleMinTolerance(double & oAngleMinTolerance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oAngleMinTolerance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AngleMinTolerance(oAngleMinTolerance); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oAngleMinTolerance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAToleranceSheetSettingAtt##classe::put_AngleMinTolerance(double iAngleMinTolerance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iAngleMinTolerance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AngleMinTolerance(iAngleMinTolerance); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iAngleMinTolerance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAToleranceSheetSettingAtt##classe::GetAngleMinToleranceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAngleMinToleranceInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAToleranceSheetSettingAtt##classe::SetAngleMinToleranceLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAngleMinToleranceLock(iLocked); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAToleranceSheetSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAToleranceSheetSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAToleranceSheetSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAToleranceSheetSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAToleranceSheetSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAToleranceSheetSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAToleranceSheetSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAToleranceSheetSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAToleranceSheetSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAToleranceSheetSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAToleranceSheetSettingAtt(classe) \
 \
 \
declare_TIE_CATIAToleranceSheetSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAToleranceSheetSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAToleranceSheetSettingAtt,"CATIAToleranceSheetSettingAtt",CATIAToleranceSheetSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAToleranceSheetSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAToleranceSheetSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAToleranceSheetSettingAtt##classe(classe::MetaObject(),CATIAToleranceSheetSettingAtt::MetaObject(),(void *)CreateTIECATIAToleranceSheetSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAToleranceSheetSettingAtt(classe) \
 \
 \
declare_TIE_CATIAToleranceSheetSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAToleranceSheetSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAToleranceSheetSettingAtt,"CATIAToleranceSheetSettingAtt",CATIAToleranceSheetSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAToleranceSheetSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAToleranceSheetSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAToleranceSheetSettingAtt##classe(classe::MetaObject(),CATIAToleranceSheetSettingAtt::MetaObject(),(void *)CreateTIECATIAToleranceSheetSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAToleranceSheetSettingAtt(classe) TIE_CATIAToleranceSheetSettingAtt(classe)
#else
#define BOA_CATIAToleranceSheetSettingAtt(classe) CATImplementBOA(CATIAToleranceSheetSettingAtt, classe)
#endif

#endif
