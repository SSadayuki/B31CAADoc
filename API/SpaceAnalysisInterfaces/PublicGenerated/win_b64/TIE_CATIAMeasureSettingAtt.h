#ifndef __TIE_CATIAMeasureSettingAtt
#define __TIE_CATIAMeasureSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAMeasureSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAMeasureSettingAtt */
#define declare_TIE_CATIAMeasureSettingAtt(classe) \
 \
 \
class TIECATIAMeasureSettingAtt##classe : public CATIAMeasureSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAMeasureSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_PartUpdateStatus(CAT_VARIANT_BOOL & oPartUpdateStatus); \
      virtual HRESULT __stdcall put_PartUpdateStatus(CAT_VARIANT_BOOL iPartUpdateStatus); \
      virtual HRESULT __stdcall GetPartUpdateStatusInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetPartUpdateStatusLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ProductUpdateStatus(CAT_VARIANT_BOOL & oProductUpdateStatus); \
      virtual HRESULT __stdcall put_ProductUpdateStatus(CAT_VARIANT_BOOL iProductUpdateStatus); \
      virtual HRESULT __stdcall GetProductUpdateStatusInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetProductUpdateStatusLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_TildeDisplay(CAT_VARIANT_BOOL & oTildeDisplay); \
      virtual HRESULT __stdcall put_TildeDisplay(CAT_VARIANT_BOOL iTildeDisplay); \
      virtual HRESULT __stdcall GetTildeDisplayInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetTildeDisplayLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetLabelColor(CATLONG & oR, CATLONG & oG, CATLONG & oB); \
      virtual HRESULT __stdcall SetLabelColor(CATLONG iR, CATLONG iG, CATLONG iB); \
      virtual HRESULT __stdcall GetLabelColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetLabelColorLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_LineWidth(short & oLineWidth); \
      virtual HRESULT __stdcall put_LineWidth(short iLineWidth); \
      virtual HRESULT __stdcall GetLineWidthInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetLineWidthLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall GetTextColor(CATLONG & oR, CATLONG & oG, CATLONG & oB); \
      virtual HRESULT __stdcall SetTextColor(CATLONG iR, CATLONG iG, CATLONG iB); \
      virtual HRESULT __stdcall GetTextColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetTextColorLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_BoxDisplay(CAT_VARIANT_BOOL & oBoxDisplay); \
      virtual HRESULT __stdcall put_BoxDisplay(CAT_VARIANT_BOOL iBoxDisplay); \
      virtual HRESULT __stdcall GetBoxDisplayInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetBoxDisplayLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIAMeasureSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_PartUpdateStatus(CAT_VARIANT_BOOL & oPartUpdateStatus); \
virtual HRESULT __stdcall put_PartUpdateStatus(CAT_VARIANT_BOOL iPartUpdateStatus); \
virtual HRESULT __stdcall GetPartUpdateStatusInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetPartUpdateStatusLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ProductUpdateStatus(CAT_VARIANT_BOOL & oProductUpdateStatus); \
virtual HRESULT __stdcall put_ProductUpdateStatus(CAT_VARIANT_BOOL iProductUpdateStatus); \
virtual HRESULT __stdcall GetProductUpdateStatusInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetProductUpdateStatusLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_TildeDisplay(CAT_VARIANT_BOOL & oTildeDisplay); \
virtual HRESULT __stdcall put_TildeDisplay(CAT_VARIANT_BOOL iTildeDisplay); \
virtual HRESULT __stdcall GetTildeDisplayInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetTildeDisplayLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetLabelColor(CATLONG & oR, CATLONG & oG, CATLONG & oB); \
virtual HRESULT __stdcall SetLabelColor(CATLONG iR, CATLONG iG, CATLONG iB); \
virtual HRESULT __stdcall GetLabelColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetLabelColorLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_LineWidth(short & oLineWidth); \
virtual HRESULT __stdcall put_LineWidth(short iLineWidth); \
virtual HRESULT __stdcall GetLineWidthInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetLineWidthLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall GetTextColor(CATLONG & oR, CATLONG & oG, CATLONG & oB); \
virtual HRESULT __stdcall SetTextColor(CATLONG iR, CATLONG iG, CATLONG iB); \
virtual HRESULT __stdcall GetTextColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetTextColorLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_BoxDisplay(CAT_VARIANT_BOOL & oBoxDisplay); \
virtual HRESULT __stdcall put_BoxDisplay(CAT_VARIANT_BOOL iBoxDisplay); \
virtual HRESULT __stdcall GetBoxDisplayInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetBoxDisplayLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIAMeasureSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_PartUpdateStatus(CAT_VARIANT_BOOL & oPartUpdateStatus) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_PartUpdateStatus(oPartUpdateStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_PartUpdateStatus(CAT_VARIANT_BOOL iPartUpdateStatus) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_PartUpdateStatus(iPartUpdateStatus)); \
} \
HRESULT __stdcall  ENVTIEName::GetPartUpdateStatusInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPartUpdateStatusInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetPartUpdateStatusLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPartUpdateStatusLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ProductUpdateStatus(CAT_VARIANT_BOOL & oProductUpdateStatus) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ProductUpdateStatus(oProductUpdateStatus)); \
} \
HRESULT __stdcall  ENVTIEName::put_ProductUpdateStatus(CAT_VARIANT_BOOL iProductUpdateStatus) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ProductUpdateStatus(iProductUpdateStatus)); \
} \
HRESULT __stdcall  ENVTIEName::GetProductUpdateStatusInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetProductUpdateStatusInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetProductUpdateStatusLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetProductUpdateStatusLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_TildeDisplay(CAT_VARIANT_BOOL & oTildeDisplay) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_TildeDisplay(oTildeDisplay)); \
} \
HRESULT __stdcall  ENVTIEName::put_TildeDisplay(CAT_VARIANT_BOOL iTildeDisplay) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_TildeDisplay(iTildeDisplay)); \
} \
HRESULT __stdcall  ENVTIEName::GetTildeDisplayInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetTildeDisplayInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetTildeDisplayLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetTildeDisplayLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetLabelColor(CATLONG & oR, CATLONG & oG, CATLONG & oB) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetLabelColor(oR,oG,oB)); \
} \
HRESULT __stdcall  ENVTIEName::SetLabelColor(CATLONG iR, CATLONG iG, CATLONG iB) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetLabelColor(iR,iG,iB)); \
} \
HRESULT __stdcall  ENVTIEName::GetLabelColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetLabelColorInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetLabelColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetLabelColorLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_LineWidth(short & oLineWidth) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_LineWidth(oLineWidth)); \
} \
HRESULT __stdcall  ENVTIEName::put_LineWidth(short iLineWidth) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_LineWidth(iLineWidth)); \
} \
HRESULT __stdcall  ENVTIEName::GetLineWidthInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetLineWidthInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetLineWidthLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetLineWidthLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::GetTextColor(CATLONG & oR, CATLONG & oG, CATLONG & oB) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetTextColor(oR,oG,oB)); \
} \
HRESULT __stdcall  ENVTIEName::SetTextColor(CATLONG iR, CATLONG iG, CATLONG iB) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetTextColor(iR,iG,iB)); \
} \
HRESULT __stdcall  ENVTIEName::GetTextColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetTextColorInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetTextColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetTextColorLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_BoxDisplay(CAT_VARIANT_BOOL & oBoxDisplay) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_BoxDisplay(oBoxDisplay)); \
} \
HRESULT __stdcall  ENVTIEName::put_BoxDisplay(CAT_VARIANT_BOOL iBoxDisplay) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_BoxDisplay(iBoxDisplay)); \
} \
HRESULT __stdcall  ENVTIEName::GetBoxDisplayInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetBoxDisplayInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetBoxDisplayLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetBoxDisplayLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAMeasureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAMeasureSettingAtt(classe)    TIECATIAMeasureSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAMeasureSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAMeasureSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAMeasureSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAMeasureSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAMeasureSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAMeasureSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::get_PartUpdateStatus(CAT_VARIANT_BOOL & oPartUpdateStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oPartUpdateStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PartUpdateStatus(oPartUpdateStatus); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oPartUpdateStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::put_PartUpdateStatus(CAT_VARIANT_BOOL iPartUpdateStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iPartUpdateStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PartUpdateStatus(iPartUpdateStatus); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iPartUpdateStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::GetPartUpdateStatusInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPartUpdateStatusInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::SetPartUpdateStatusLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPartUpdateStatusLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::get_ProductUpdateStatus(CAT_VARIANT_BOOL & oProductUpdateStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oProductUpdateStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ProductUpdateStatus(oProductUpdateStatus); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oProductUpdateStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::put_ProductUpdateStatus(CAT_VARIANT_BOOL iProductUpdateStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iProductUpdateStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ProductUpdateStatus(iProductUpdateStatus); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iProductUpdateStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::GetProductUpdateStatusInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProductUpdateStatusInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::SetProductUpdateStatusLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetProductUpdateStatusLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::get_TildeDisplay(CAT_VARIANT_BOOL & oTildeDisplay) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oTildeDisplay); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TildeDisplay(oTildeDisplay); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oTildeDisplay); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::put_TildeDisplay(CAT_VARIANT_BOOL iTildeDisplay) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iTildeDisplay); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TildeDisplay(iTildeDisplay); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iTildeDisplay); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::GetTildeDisplayInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTildeDisplayInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::SetTildeDisplayLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTildeDisplayLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::GetLabelColor(CATLONG & oR, CATLONG & oG, CATLONG & oB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oR,&oG,&oB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLabelColor(oR,oG,oB); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oR,&oG,&oB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::SetLabelColor(CATLONG iR, CATLONG iG, CATLONG iB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iR,&iG,&iB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLabelColor(iR,iG,iB); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iR,&iG,&iB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::GetLabelColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLabelColorInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::SetLabelColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLabelColorLock(iLocked); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::get_LineWidth(short & oLineWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oLineWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LineWidth(oLineWidth); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oLineWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::put_LineWidth(short iLineWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iLineWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LineWidth(iLineWidth); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iLineWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::GetLineWidthInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLineWidthInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::SetLineWidthLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLineWidthLock(iLocked); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::GetTextColor(CATLONG & oR, CATLONG & oG, CATLONG & oB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oR,&oG,&oB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTextColor(oR,oG,oB); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oR,&oG,&oB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::SetTextColor(CATLONG iR, CATLONG iG, CATLONG iB) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iR,&iG,&iB); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTextColor(iR,iG,iB); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iR,&iG,&iB); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::GetTextColorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTextColorInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::SetTextColorLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTextColorLock(iLocked); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::get_BoxDisplay(CAT_VARIANT_BOOL & oBoxDisplay) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oBoxDisplay); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BoxDisplay(oBoxDisplay); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oBoxDisplay); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::put_BoxDisplay(CAT_VARIANT_BOOL iBoxDisplay) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iBoxDisplay); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BoxDisplay(iBoxDisplay); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iBoxDisplay); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::GetBoxDisplayInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBoxDisplayInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::SetBoxDisplayLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBoxDisplayLock(iLocked); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAMeasureSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMeasureSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMeasureSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMeasureSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMeasureSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMeasureSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAMeasureSettingAtt(classe) \
 \
 \
declare_TIE_CATIAMeasureSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMeasureSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMeasureSettingAtt,"CATIAMeasureSettingAtt",CATIAMeasureSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMeasureSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAMeasureSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMeasureSettingAtt##classe(classe::MetaObject(),CATIAMeasureSettingAtt::MetaObject(),(void *)CreateTIECATIAMeasureSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAMeasureSettingAtt(classe) \
 \
 \
declare_TIE_CATIAMeasureSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMeasureSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMeasureSettingAtt,"CATIAMeasureSettingAtt",CATIAMeasureSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMeasureSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAMeasureSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMeasureSettingAtt##classe(classe::MetaObject(),CATIAMeasureSettingAtt::MetaObject(),(void *)CreateTIECATIAMeasureSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAMeasureSettingAtt(classe) TIE_CATIAMeasureSettingAtt(classe)
#else
#define BOA_CATIAMeasureSettingAtt(classe) CATImplementBOA(CATIAMeasureSettingAtt, classe)
#endif

#endif
