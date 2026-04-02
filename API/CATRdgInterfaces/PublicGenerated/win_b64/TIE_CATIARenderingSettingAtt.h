#ifndef __TIE_CATIARenderingSettingAtt
#define __TIE_CATIARenderingSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIARenderingSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIARenderingSettingAtt */
#define declare_TIE_CATIARenderingSettingAtt(classe) \
 \
 \
class TIECATIARenderingSettingAtt##classe : public CATIARenderingSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIARenderingSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_OutputSizeFrom(short & oOutputSizeFrom); \
      virtual HRESULT __stdcall put_OutputSizeFrom(short iOutputSizeFrom); \
      virtual HRESULT __stdcall GetOutputSizeFromInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetOutputSizeFromLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_OutputWidth(short & oOutputWidth); \
      virtual HRESULT __stdcall put_OutputWidth(short iOutputWidth); \
      virtual HRESULT __stdcall GetOutputWidthInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetOutputWidthLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_OutputHeight(short & oOutputHeight); \
      virtual HRESULT __stdcall put_OutputHeight(short iOutputHeight); \
      virtual HRESULT __stdcall GetOutputHeightInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetOutputHeightLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_OutputType(short & oOutputType); \
      virtual HRESULT __stdcall put_OutputType(short iOutputType); \
      virtual HRESULT __stdcall GetOutputTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetOutputTypeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_OutputPath(CATBSTR & oOutputPath); \
      virtual HRESULT __stdcall put_OutputPath(const CATBSTR & iOutputPath); \
      virtual HRESULT __stdcall GetOutputPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetOutputPathLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SaveAutoIncrement(CAT_VARIANT_BOOL & oSaveAutoIncrement); \
      virtual HRESULT __stdcall put_SaveAutoIncrement(CAT_VARIANT_BOOL iSaveAutoIncrement); \
      virtual HRESULT __stdcall GetSaveAutoIncrementInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSaveAutoIncrementLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_EngineInterface(CATBSTR & oEngineInterface); \
      virtual HRESULT __stdcall put_EngineInterface(const CATBSTR & iEngineInterface); \
      virtual HRESULT __stdcall GetEngineInterfaceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetEngineInterfaceLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIARenderingSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_OutputSizeFrom(short & oOutputSizeFrom); \
virtual HRESULT __stdcall put_OutputSizeFrom(short iOutputSizeFrom); \
virtual HRESULT __stdcall GetOutputSizeFromInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetOutputSizeFromLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_OutputWidth(short & oOutputWidth); \
virtual HRESULT __stdcall put_OutputWidth(short iOutputWidth); \
virtual HRESULT __stdcall GetOutputWidthInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetOutputWidthLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_OutputHeight(short & oOutputHeight); \
virtual HRESULT __stdcall put_OutputHeight(short iOutputHeight); \
virtual HRESULT __stdcall GetOutputHeightInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetOutputHeightLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_OutputType(short & oOutputType); \
virtual HRESULT __stdcall put_OutputType(short iOutputType); \
virtual HRESULT __stdcall GetOutputTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetOutputTypeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_OutputPath(CATBSTR & oOutputPath); \
virtual HRESULT __stdcall put_OutputPath(const CATBSTR & iOutputPath); \
virtual HRESULT __stdcall GetOutputPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetOutputPathLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SaveAutoIncrement(CAT_VARIANT_BOOL & oSaveAutoIncrement); \
virtual HRESULT __stdcall put_SaveAutoIncrement(CAT_VARIANT_BOOL iSaveAutoIncrement); \
virtual HRESULT __stdcall GetSaveAutoIncrementInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSaveAutoIncrementLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_EngineInterface(CATBSTR & oEngineInterface); \
virtual HRESULT __stdcall put_EngineInterface(const CATBSTR & iEngineInterface); \
virtual HRESULT __stdcall GetEngineInterfaceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetEngineInterfaceLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIARenderingSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_OutputSizeFrom(short & oOutputSizeFrom) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_OutputSizeFrom(oOutputSizeFrom)); \
} \
HRESULT __stdcall  ENVTIEName::put_OutputSizeFrom(short iOutputSizeFrom) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_OutputSizeFrom(iOutputSizeFrom)); \
} \
HRESULT __stdcall  ENVTIEName::GetOutputSizeFromInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetOutputSizeFromInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetOutputSizeFromLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetOutputSizeFromLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_OutputWidth(short & oOutputWidth) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_OutputWidth(oOutputWidth)); \
} \
HRESULT __stdcall  ENVTIEName::put_OutputWidth(short iOutputWidth) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_OutputWidth(iOutputWidth)); \
} \
HRESULT __stdcall  ENVTIEName::GetOutputWidthInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetOutputWidthInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetOutputWidthLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetOutputWidthLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_OutputHeight(short & oOutputHeight) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_OutputHeight(oOutputHeight)); \
} \
HRESULT __stdcall  ENVTIEName::put_OutputHeight(short iOutputHeight) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_OutputHeight(iOutputHeight)); \
} \
HRESULT __stdcall  ENVTIEName::GetOutputHeightInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetOutputHeightInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetOutputHeightLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetOutputHeightLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_OutputType(short & oOutputType) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_OutputType(oOutputType)); \
} \
HRESULT __stdcall  ENVTIEName::put_OutputType(short iOutputType) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_OutputType(iOutputType)); \
} \
HRESULT __stdcall  ENVTIEName::GetOutputTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetOutputTypeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetOutputTypeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetOutputTypeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_OutputPath(CATBSTR & oOutputPath) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_OutputPath(oOutputPath)); \
} \
HRESULT __stdcall  ENVTIEName::put_OutputPath(const CATBSTR & iOutputPath) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_OutputPath(iOutputPath)); \
} \
HRESULT __stdcall  ENVTIEName::GetOutputPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetOutputPathInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetOutputPathLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetOutputPathLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SaveAutoIncrement(CAT_VARIANT_BOOL & oSaveAutoIncrement) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SaveAutoIncrement(oSaveAutoIncrement)); \
} \
HRESULT __stdcall  ENVTIEName::put_SaveAutoIncrement(CAT_VARIANT_BOOL iSaveAutoIncrement) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SaveAutoIncrement(iSaveAutoIncrement)); \
} \
HRESULT __stdcall  ENVTIEName::GetSaveAutoIncrementInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSaveAutoIncrementInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSaveAutoIncrementLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSaveAutoIncrementLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_EngineInterface(CATBSTR & oEngineInterface) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_EngineInterface(oEngineInterface)); \
} \
HRESULT __stdcall  ENVTIEName::put_EngineInterface(const CATBSTR & iEngineInterface) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_EngineInterface(iEngineInterface)); \
} \
HRESULT __stdcall  ENVTIEName::GetEngineInterfaceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetEngineInterfaceInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetEngineInterfaceLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetEngineInterfaceLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIARenderingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIARenderingSettingAtt(classe)    TIECATIARenderingSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIARenderingSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIARenderingSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIARenderingSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIARenderingSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIARenderingSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIARenderingSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::get_OutputSizeFrom(short & oOutputSizeFrom) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oOutputSizeFrom); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OutputSizeFrom(oOutputSizeFrom); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oOutputSizeFrom); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::put_OutputSizeFrom(short iOutputSizeFrom) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iOutputSizeFrom); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OutputSizeFrom(iOutputSizeFrom); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iOutputSizeFrom); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::GetOutputSizeFromInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOutputSizeFromInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::SetOutputSizeFromLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOutputSizeFromLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::get_OutputWidth(short & oOutputWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oOutputWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OutputWidth(oOutputWidth); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oOutputWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::put_OutputWidth(short iOutputWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iOutputWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OutputWidth(iOutputWidth); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iOutputWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::GetOutputWidthInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOutputWidthInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::SetOutputWidthLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOutputWidthLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::get_OutputHeight(short & oOutputHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oOutputHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OutputHeight(oOutputHeight); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oOutputHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::put_OutputHeight(short iOutputHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iOutputHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OutputHeight(iOutputHeight); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iOutputHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::GetOutputHeightInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOutputHeightInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::SetOutputHeightLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOutputHeightLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::get_OutputType(short & oOutputType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oOutputType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OutputType(oOutputType); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oOutputType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::put_OutputType(short iOutputType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iOutputType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OutputType(iOutputType); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iOutputType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::GetOutputTypeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOutputTypeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::SetOutputTypeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOutputTypeLock(iLocked); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::get_OutputPath(CATBSTR & oOutputPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oOutputPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OutputPath(oOutputPath); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oOutputPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::put_OutputPath(const CATBSTR & iOutputPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iOutputPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OutputPath(iOutputPath); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iOutputPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::GetOutputPathInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOutputPathInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::SetOutputPathLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOutputPathLock(iLocked); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::get_SaveAutoIncrement(CAT_VARIANT_BOOL & oSaveAutoIncrement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oSaveAutoIncrement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SaveAutoIncrement(oSaveAutoIncrement); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oSaveAutoIncrement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::put_SaveAutoIncrement(CAT_VARIANT_BOOL iSaveAutoIncrement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iSaveAutoIncrement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SaveAutoIncrement(iSaveAutoIncrement); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iSaveAutoIncrement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::GetSaveAutoIncrementInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSaveAutoIncrementInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::SetSaveAutoIncrementLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSaveAutoIncrementLock(iLocked); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::get_EngineInterface(CATBSTR & oEngineInterface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oEngineInterface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EngineInterface(oEngineInterface); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oEngineInterface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::put_EngineInterface(const CATBSTR & iEngineInterface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iEngineInterface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_EngineInterface(iEngineInterface); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iEngineInterface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::GetEngineInterfaceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEngineInterfaceInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::SetEngineInterfaceLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetEngineInterfaceLock(iLocked); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIARenderingSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIARenderingSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIARenderingSettingAtt(classe) \
 \
 \
declare_TIE_CATIARenderingSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIARenderingSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIARenderingSettingAtt,"CATIARenderingSettingAtt",CATIARenderingSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIARenderingSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIARenderingSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIARenderingSettingAtt##classe(classe::MetaObject(),CATIARenderingSettingAtt::MetaObject(),(void *)CreateTIECATIARenderingSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIARenderingSettingAtt(classe) \
 \
 \
declare_TIE_CATIARenderingSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIARenderingSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIARenderingSettingAtt,"CATIARenderingSettingAtt",CATIARenderingSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIARenderingSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIARenderingSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIARenderingSettingAtt##classe(classe::MetaObject(),CATIARenderingSettingAtt::MetaObject(),(void *)CreateTIECATIARenderingSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIARenderingSettingAtt(classe) TIE_CATIARenderingSettingAtt(classe)
#else
#define BOA_CATIARenderingSettingAtt(classe) CATImplementBOA(CATIARenderingSettingAtt, classe)
#endif

#endif
