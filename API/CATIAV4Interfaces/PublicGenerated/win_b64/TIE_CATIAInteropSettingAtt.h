#ifndef __TIE_CATIAInteropSettingAtt
#define __TIE_CATIAInteropSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAInteropSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAInteropSettingAtt */
#define declare_TIE_CATIAInteropSettingAtt(classe) \
 \
 \
class TIECATIAInteropSettingAtt##classe : public CATIAInteropSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAInteropSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_DisplayMode(CAT_VARIANT_BOOL & oStateOfDisp); \
      virtual HRESULT __stdcall put_DisplayMode(CAT_VARIANT_BOOL iStateOfDisp); \
      virtual HRESULT __stdcall SetDisplayModeLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetDisplayModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DisplayV4Text3D(CAT_VARIANT_BOOL & oStateOf3DText); \
      virtual HRESULT __stdcall put_DisplayV4Text3D(CAT_VARIANT_BOOL iStateOf3DText); \
      virtual HRESULT __stdcall SetDisplayV4Text3DLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetDisplayV4Text3DInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_Draw(CATBSTR & oStateOfNoDraft); \
      virtual HRESULT __stdcall put_Draw(const CATBSTR & iStateOfNoDraft); \
      virtual HRESULT __stdcall SetDrawLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetDrawInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_Code_page(CATBSTR & oDefaultCPage); \
      virtual HRESULT __stdcall put_Code_page(const CATBSTR & iDefaultCPage); \
      virtual HRESULT __stdcall SetCode_pageLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetCode_pageInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_PROJECT_File_Path(CATBSTR & oDefaultPrj); \
      virtual HRESULT __stdcall put_PROJECT_File_Path(const CATBSTR & iDefaultPrj); \
      virtual HRESULT __stdcall SetPROJECT_File_PathLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetPROJECT_File_PathInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_Dlname(CATBSTR & oDefaultDlname); \
      virtual HRESULT __stdcall put_Dlname(const CATBSTR & iDefaultDlname); \
      virtual HRESULT __stdcall SetDlnameLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetDlnameInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_Conversion_Table(CATBSTR & oDefaultTab); \
      virtual HRESULT __stdcall put_Conversion_Table(const CATBSTR & iDefaultTab); \
      virtual HRESULT __stdcall SetConversion_TableLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetConversion_TableInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
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



#define ENVTIEdeclare_CATIAInteropSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_DisplayMode(CAT_VARIANT_BOOL & oStateOfDisp); \
virtual HRESULT __stdcall put_DisplayMode(CAT_VARIANT_BOOL iStateOfDisp); \
virtual HRESULT __stdcall SetDisplayModeLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetDisplayModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DisplayV4Text3D(CAT_VARIANT_BOOL & oStateOf3DText); \
virtual HRESULT __stdcall put_DisplayV4Text3D(CAT_VARIANT_BOOL iStateOf3DText); \
virtual HRESULT __stdcall SetDisplayV4Text3DLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetDisplayV4Text3DInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_Draw(CATBSTR & oStateOfNoDraft); \
virtual HRESULT __stdcall put_Draw(const CATBSTR & iStateOfNoDraft); \
virtual HRESULT __stdcall SetDrawLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetDrawInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_Code_page(CATBSTR & oDefaultCPage); \
virtual HRESULT __stdcall put_Code_page(const CATBSTR & iDefaultCPage); \
virtual HRESULT __stdcall SetCode_pageLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetCode_pageInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_PROJECT_File_Path(CATBSTR & oDefaultPrj); \
virtual HRESULT __stdcall put_PROJECT_File_Path(const CATBSTR & iDefaultPrj); \
virtual HRESULT __stdcall SetPROJECT_File_PathLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetPROJECT_File_PathInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_Dlname(CATBSTR & oDefaultDlname); \
virtual HRESULT __stdcall put_Dlname(const CATBSTR & iDefaultDlname); \
virtual HRESULT __stdcall SetDlnameLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetDlnameInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_Conversion_Table(CATBSTR & oDefaultTab); \
virtual HRESULT __stdcall put_Conversion_Table(const CATBSTR & iDefaultTab); \
virtual HRESULT __stdcall SetConversion_TableLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetConversion_TableInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
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


#define ENVTIEdefine_CATIAInteropSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_DisplayMode(CAT_VARIANT_BOOL & oStateOfDisp) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DisplayMode(oStateOfDisp)); \
} \
HRESULT __stdcall  ENVTIEName::put_DisplayMode(CAT_VARIANT_BOOL iStateOfDisp) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DisplayMode(iStateOfDisp)); \
} \
HRESULT __stdcall  ENVTIEName::SetDisplayModeLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDisplayModeLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetDisplayModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDisplayModeInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DisplayV4Text3D(CAT_VARIANT_BOOL & oStateOf3DText) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DisplayV4Text3D(oStateOf3DText)); \
} \
HRESULT __stdcall  ENVTIEName::put_DisplayV4Text3D(CAT_VARIANT_BOOL iStateOf3DText) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DisplayV4Text3D(iStateOf3DText)); \
} \
HRESULT __stdcall  ENVTIEName::SetDisplayV4Text3DLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDisplayV4Text3DLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetDisplayV4Text3DInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDisplayV4Text3DInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_Draw(CATBSTR & oStateOfNoDraft) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Draw(oStateOfNoDraft)); \
} \
HRESULT __stdcall  ENVTIEName::put_Draw(const CATBSTR & iStateOfNoDraft) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Draw(iStateOfNoDraft)); \
} \
HRESULT __stdcall  ENVTIEName::SetDrawLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDrawLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetDrawInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDrawInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_Code_page(CATBSTR & oDefaultCPage) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Code_page(oDefaultCPage)); \
} \
HRESULT __stdcall  ENVTIEName::put_Code_page(const CATBSTR & iDefaultCPage) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Code_page(iDefaultCPage)); \
} \
HRESULT __stdcall  ENVTIEName::SetCode_pageLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetCode_pageLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetCode_pageInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetCode_pageInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_PROJECT_File_Path(CATBSTR & oDefaultPrj) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_PROJECT_File_Path(oDefaultPrj)); \
} \
HRESULT __stdcall  ENVTIEName::put_PROJECT_File_Path(const CATBSTR & iDefaultPrj) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_PROJECT_File_Path(iDefaultPrj)); \
} \
HRESULT __stdcall  ENVTIEName::SetPROJECT_File_PathLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPROJECT_File_PathLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetPROJECT_File_PathInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPROJECT_File_PathInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_Dlname(CATBSTR & oDefaultDlname) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Dlname(oDefaultDlname)); \
} \
HRESULT __stdcall  ENVTIEName::put_Dlname(const CATBSTR & iDefaultDlname) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Dlname(iDefaultDlname)); \
} \
HRESULT __stdcall  ENVTIEName::SetDlnameLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDlnameLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetDlnameInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDlnameInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_Conversion_Table(CATBSTR & oDefaultTab) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Conversion_Table(oDefaultTab)); \
} \
HRESULT __stdcall  ENVTIEName::put_Conversion_Table(const CATBSTR & iDefaultTab) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Conversion_Table(iDefaultTab)); \
} \
HRESULT __stdcall  ENVTIEName::SetConversion_TableLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetConversion_TableLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetConversion_TableInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetConversion_TableInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAInteropSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAInteropSettingAtt(classe)    TIECATIAInteropSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAInteropSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAInteropSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAInteropSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAInteropSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAInteropSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAInteropSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::get_DisplayMode(CAT_VARIANT_BOOL & oStateOfDisp) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oStateOfDisp); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DisplayMode(oStateOfDisp); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oStateOfDisp); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::put_DisplayMode(CAT_VARIANT_BOOL iStateOfDisp) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iStateOfDisp); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DisplayMode(iStateOfDisp); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iStateOfDisp); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::SetDisplayModeLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDisplayModeLock(iLock); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::GetDisplayModeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDisplayModeInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::get_DisplayV4Text3D(CAT_VARIANT_BOOL & oStateOf3DText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oStateOf3DText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DisplayV4Text3D(oStateOf3DText); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oStateOf3DText); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::put_DisplayV4Text3D(CAT_VARIANT_BOOL iStateOf3DText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iStateOf3DText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DisplayV4Text3D(iStateOf3DText); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iStateOf3DText); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::SetDisplayV4Text3DLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDisplayV4Text3DLock(iLock); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::GetDisplayV4Text3DInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDisplayV4Text3DInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::get_Draw(CATBSTR & oStateOfNoDraft) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oStateOfNoDraft); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Draw(oStateOfNoDraft); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oStateOfNoDraft); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::put_Draw(const CATBSTR & iStateOfNoDraft) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iStateOfNoDraft); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Draw(iStateOfNoDraft); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iStateOfNoDraft); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::SetDrawLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDrawLock(iLock); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::GetDrawInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDrawInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::get_Code_page(CATBSTR & oDefaultCPage) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oDefaultCPage); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Code_page(oDefaultCPage); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oDefaultCPage); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::put_Code_page(const CATBSTR & iDefaultCPage) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iDefaultCPage); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Code_page(iDefaultCPage); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iDefaultCPage); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::SetCode_pageLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCode_pageLock(iLock); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::GetCode_pageInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCode_pageInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::get_PROJECT_File_Path(CATBSTR & oDefaultPrj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oDefaultPrj); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PROJECT_File_Path(oDefaultPrj); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oDefaultPrj); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::put_PROJECT_File_Path(const CATBSTR & iDefaultPrj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iDefaultPrj); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PROJECT_File_Path(iDefaultPrj); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iDefaultPrj); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::SetPROJECT_File_PathLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPROJECT_File_PathLock(iLock); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::GetPROJECT_File_PathInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPROJECT_File_PathInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::get_Dlname(CATBSTR & oDefaultDlname) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oDefaultDlname); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Dlname(oDefaultDlname); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oDefaultDlname); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::put_Dlname(const CATBSTR & iDefaultDlname) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iDefaultDlname); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Dlname(iDefaultDlname); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iDefaultDlname); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::SetDlnameLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDlnameLock(iLock); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::GetDlnameInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDlnameInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::get_Conversion_Table(CATBSTR & oDefaultTab) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oDefaultTab); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Conversion_Table(oDefaultTab); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oDefaultTab); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::put_Conversion_Table(const CATBSTR & iDefaultTab) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iDefaultTab); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Conversion_Table(iDefaultTab); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iDefaultTab); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::SetConversion_TableLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetConversion_TableLock(iLock); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::GetConversion_TableInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConversion_TableInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAInteropSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAInteropSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAInteropSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAInteropSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAInteropSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAInteropSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAInteropSettingAtt(classe) \
 \
 \
declare_TIE_CATIAInteropSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAInteropSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAInteropSettingAtt,"CATIAInteropSettingAtt",CATIAInteropSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAInteropSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAInteropSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAInteropSettingAtt##classe(classe::MetaObject(),CATIAInteropSettingAtt::MetaObject(),(void *)CreateTIECATIAInteropSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAInteropSettingAtt(classe) \
 \
 \
declare_TIE_CATIAInteropSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAInteropSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAInteropSettingAtt,"CATIAInteropSettingAtt",CATIAInteropSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAInteropSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAInteropSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAInteropSettingAtt##classe(classe::MetaObject(),CATIAInteropSettingAtt::MetaObject(),(void *)CreateTIECATIAInteropSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAInteropSettingAtt(classe) TIE_CATIAInteropSettingAtt(classe)
#else
#define BOA_CATIAInteropSettingAtt(classe) CATImplementBOA(CATIAInteropSettingAtt, classe)
#endif

#endif
