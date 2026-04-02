#ifndef __TIE_CATIAAnalysisReportingSettingAtt
#define __TIE_CATIAAnalysisReportingSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAnalysisReportingSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAnalysisReportingSettingAtt */
#define declare_TIE_CATIAAnalysisReportingSettingAtt(classe) \
 \
 \
class TIECATIAAnalysisReportingSettingAtt##classe : public CATIAAnalysisReportingSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAnalysisReportingSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ImageQualityMode(CAT_VARIANT_BOOL & oImageQualityMode); \
      virtual HRESULT __stdcall put_ImageQualityMode(CAT_VARIANT_BOOL iImageQualityMode); \
      virtual HRESULT __stdcall GetImageQualityModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetImageQualityModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_CustomImageWidth(CATLONG & oCustomImageWidth); \
      virtual HRESULT __stdcall put_CustomImageWidth(CATLONG iCustomImageWidth); \
      virtual HRESULT __stdcall GetCustomImageWidthInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetCustomImageWidthLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_CustomImageHeight(CATLONG & oCustomImageHeight); \
      virtual HRESULT __stdcall put_CustomImageHeight(CATLONG iCustomImageHeight); \
      virtual HRESULT __stdcall GetCustomImageHeightInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetCustomImageHeightLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_CustomImageFormat(CATBSTR & ioCustomImageFormat); \
      virtual HRESULT __stdcall put_CustomImageFormat(const CATBSTR & iCustomImageFormat); \
      virtual HRESULT __stdcall GetCustomImageFormatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetCustomImageFormatLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_BackgroundImageMode(CAT_VARIANT_BOOL & oBackgroundImageMode); \
      virtual HRESULT __stdcall put_BackgroundImageMode(CAT_VARIANT_BOOL iBackgroundImageMode); \
      virtual HRESULT __stdcall GetBackgroundImageModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetBackgroundImageModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_CustomBackgroundImage(CATBSTR & ioCustomBackgroundImage); \
      virtual HRESULT __stdcall put_CustomBackgroundImage(const CATBSTR & iCustomBackgroundImage); \
      virtual HRESULT __stdcall GetCustomBackgroundImageInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetCustomBackgroundImageLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_TempOutputDirectory(CATBSTR & ioTempOutputDirectory); \
      virtual HRESULT __stdcall put_TempOutputDirectory(const CATBSTR & iTempOutputDirectory); \
      virtual HRESULT __stdcall GetTempOutputDirectoryInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetTempOutputDirectoryLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIAAnalysisReportingSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ImageQualityMode(CAT_VARIANT_BOOL & oImageQualityMode); \
virtual HRESULT __stdcall put_ImageQualityMode(CAT_VARIANT_BOOL iImageQualityMode); \
virtual HRESULT __stdcall GetImageQualityModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetImageQualityModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_CustomImageWidth(CATLONG & oCustomImageWidth); \
virtual HRESULT __stdcall put_CustomImageWidth(CATLONG iCustomImageWidth); \
virtual HRESULT __stdcall GetCustomImageWidthInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetCustomImageWidthLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_CustomImageHeight(CATLONG & oCustomImageHeight); \
virtual HRESULT __stdcall put_CustomImageHeight(CATLONG iCustomImageHeight); \
virtual HRESULT __stdcall GetCustomImageHeightInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetCustomImageHeightLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_CustomImageFormat(CATBSTR & ioCustomImageFormat); \
virtual HRESULT __stdcall put_CustomImageFormat(const CATBSTR & iCustomImageFormat); \
virtual HRESULT __stdcall GetCustomImageFormatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetCustomImageFormatLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_BackgroundImageMode(CAT_VARIANT_BOOL & oBackgroundImageMode); \
virtual HRESULT __stdcall put_BackgroundImageMode(CAT_VARIANT_BOOL iBackgroundImageMode); \
virtual HRESULT __stdcall GetBackgroundImageModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetBackgroundImageModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_CustomBackgroundImage(CATBSTR & ioCustomBackgroundImage); \
virtual HRESULT __stdcall put_CustomBackgroundImage(const CATBSTR & iCustomBackgroundImage); \
virtual HRESULT __stdcall GetCustomBackgroundImageInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetCustomBackgroundImageLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_TempOutputDirectory(CATBSTR & ioTempOutputDirectory); \
virtual HRESULT __stdcall put_TempOutputDirectory(const CATBSTR & iTempOutputDirectory); \
virtual HRESULT __stdcall GetTempOutputDirectoryInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetTempOutputDirectoryLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIAAnalysisReportingSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ImageQualityMode(CAT_VARIANT_BOOL & oImageQualityMode) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ImageQualityMode(oImageQualityMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_ImageQualityMode(CAT_VARIANT_BOOL iImageQualityMode) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ImageQualityMode(iImageQualityMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetImageQualityModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetImageQualityModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetImageQualityModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetImageQualityModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_CustomImageWidth(CATLONG & oCustomImageWidth) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_CustomImageWidth(oCustomImageWidth)); \
} \
HRESULT __stdcall  ENVTIEName::put_CustomImageWidth(CATLONG iCustomImageWidth) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_CustomImageWidth(iCustomImageWidth)); \
} \
HRESULT __stdcall  ENVTIEName::GetCustomImageWidthInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetCustomImageWidthInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetCustomImageWidthLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetCustomImageWidthLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_CustomImageHeight(CATLONG & oCustomImageHeight) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_CustomImageHeight(oCustomImageHeight)); \
} \
HRESULT __stdcall  ENVTIEName::put_CustomImageHeight(CATLONG iCustomImageHeight) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_CustomImageHeight(iCustomImageHeight)); \
} \
HRESULT __stdcall  ENVTIEName::GetCustomImageHeightInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetCustomImageHeightInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetCustomImageHeightLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetCustomImageHeightLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_CustomImageFormat(CATBSTR & ioCustomImageFormat) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_CustomImageFormat(ioCustomImageFormat)); \
} \
HRESULT __stdcall  ENVTIEName::put_CustomImageFormat(const CATBSTR & iCustomImageFormat) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_CustomImageFormat(iCustomImageFormat)); \
} \
HRESULT __stdcall  ENVTIEName::GetCustomImageFormatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetCustomImageFormatInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetCustomImageFormatLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetCustomImageFormatLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_BackgroundImageMode(CAT_VARIANT_BOOL & oBackgroundImageMode) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_BackgroundImageMode(oBackgroundImageMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_BackgroundImageMode(CAT_VARIANT_BOOL iBackgroundImageMode) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_BackgroundImageMode(iBackgroundImageMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetBackgroundImageModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetBackgroundImageModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetBackgroundImageModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetBackgroundImageModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_CustomBackgroundImage(CATBSTR & ioCustomBackgroundImage) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_CustomBackgroundImage(ioCustomBackgroundImage)); \
} \
HRESULT __stdcall  ENVTIEName::put_CustomBackgroundImage(const CATBSTR & iCustomBackgroundImage) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_CustomBackgroundImage(iCustomBackgroundImage)); \
} \
HRESULT __stdcall  ENVTIEName::GetCustomBackgroundImageInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetCustomBackgroundImageInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetCustomBackgroundImageLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetCustomBackgroundImageLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_TempOutputDirectory(CATBSTR & ioTempOutputDirectory) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_TempOutputDirectory(ioTempOutputDirectory)); \
} \
HRESULT __stdcall  ENVTIEName::put_TempOutputDirectory(const CATBSTR & iTempOutputDirectory) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_TempOutputDirectory(iTempOutputDirectory)); \
} \
HRESULT __stdcall  ENVTIEName::GetTempOutputDirectoryInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetTempOutputDirectoryInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetTempOutputDirectoryLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetTempOutputDirectoryLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAnalysisReportingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAnalysisReportingSettingAtt(classe)    TIECATIAAnalysisReportingSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAnalysisReportingSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAnalysisReportingSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAAnalysisReportingSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAnalysisReportingSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAnalysisReportingSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAnalysisReportingSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::get_ImageQualityMode(CAT_VARIANT_BOOL & oImageQualityMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oImageQualityMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ImageQualityMode(oImageQualityMode); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oImageQualityMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::put_ImageQualityMode(CAT_VARIANT_BOOL iImageQualityMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iImageQualityMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ImageQualityMode(iImageQualityMode); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iImageQualityMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::GetImageQualityModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetImageQualityModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::SetImageQualityModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetImageQualityModeLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::get_CustomImageWidth(CATLONG & oCustomImageWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oCustomImageWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CustomImageWidth(oCustomImageWidth); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oCustomImageWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::put_CustomImageWidth(CATLONG iCustomImageWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iCustomImageWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CustomImageWidth(iCustomImageWidth); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iCustomImageWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::GetCustomImageWidthInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCustomImageWidthInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::SetCustomImageWidthLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCustomImageWidthLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::get_CustomImageHeight(CATLONG & oCustomImageHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oCustomImageHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CustomImageHeight(oCustomImageHeight); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oCustomImageHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::put_CustomImageHeight(CATLONG iCustomImageHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iCustomImageHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CustomImageHeight(iCustomImageHeight); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iCustomImageHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::GetCustomImageHeightInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCustomImageHeightInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::SetCustomImageHeightLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCustomImageHeightLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::get_CustomImageFormat(CATBSTR & ioCustomImageFormat) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&ioCustomImageFormat); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CustomImageFormat(ioCustomImageFormat); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&ioCustomImageFormat); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::put_CustomImageFormat(const CATBSTR & iCustomImageFormat) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iCustomImageFormat); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CustomImageFormat(iCustomImageFormat); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iCustomImageFormat); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::GetCustomImageFormatInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCustomImageFormatInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::SetCustomImageFormatLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCustomImageFormatLock(iLocked); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::get_BackgroundImageMode(CAT_VARIANT_BOOL & oBackgroundImageMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oBackgroundImageMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BackgroundImageMode(oBackgroundImageMode); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oBackgroundImageMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::put_BackgroundImageMode(CAT_VARIANT_BOOL iBackgroundImageMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iBackgroundImageMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BackgroundImageMode(iBackgroundImageMode); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iBackgroundImageMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::GetBackgroundImageModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBackgroundImageModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::SetBackgroundImageModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBackgroundImageModeLock(iLocked); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::get_CustomBackgroundImage(CATBSTR & ioCustomBackgroundImage) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&ioCustomBackgroundImage); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CustomBackgroundImage(ioCustomBackgroundImage); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&ioCustomBackgroundImage); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::put_CustomBackgroundImage(const CATBSTR & iCustomBackgroundImage) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iCustomBackgroundImage); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CustomBackgroundImage(iCustomBackgroundImage); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iCustomBackgroundImage); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::GetCustomBackgroundImageInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCustomBackgroundImageInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::SetCustomBackgroundImageLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCustomBackgroundImageLock(iLocked); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::get_TempOutputDirectory(CATBSTR & ioTempOutputDirectory) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&ioTempOutputDirectory); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TempOutputDirectory(ioTempOutputDirectory); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&ioTempOutputDirectory); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::put_TempOutputDirectory(const CATBSTR & iTempOutputDirectory) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iTempOutputDirectory); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TempOutputDirectory(iTempOutputDirectory); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iTempOutputDirectory); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::GetTempOutputDirectoryInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTempOutputDirectoryInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::SetTempOutputDirectoryLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTempOutputDirectoryLock(iLocked); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAnalysisReportingSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAnalysisReportingSettingAtt(classe) \
 \
 \
declare_TIE_CATIAAnalysisReportingSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisReportingSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisReportingSettingAtt,"CATIAAnalysisReportingSettingAtt",CATIAAnalysisReportingSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisReportingSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAnalysisReportingSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisReportingSettingAtt##classe(classe::MetaObject(),CATIAAnalysisReportingSettingAtt::MetaObject(),(void *)CreateTIECATIAAnalysisReportingSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAnalysisReportingSettingAtt(classe) \
 \
 \
declare_TIE_CATIAAnalysisReportingSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAnalysisReportingSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAnalysisReportingSettingAtt,"CATIAAnalysisReportingSettingAtt",CATIAAnalysisReportingSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAnalysisReportingSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAnalysisReportingSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAnalysisReportingSettingAtt##classe(classe::MetaObject(),CATIAAnalysisReportingSettingAtt::MetaObject(),(void *)CreateTIECATIAAnalysisReportingSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAnalysisReportingSettingAtt(classe) TIE_CATIAAnalysisReportingSettingAtt(classe)
#else
#define BOA_CATIAAnalysisReportingSettingAtt(classe) CATImplementBOA(CATIAAnalysisReportingSettingAtt, classe)
#endif

#endif
