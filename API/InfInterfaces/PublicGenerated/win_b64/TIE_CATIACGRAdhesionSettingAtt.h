#ifndef __TIE_CATIACGRAdhesionSettingAtt
#define __TIE_CATIACGRAdhesionSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIACGRAdhesionSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIACGRAdhesionSettingAtt */
#define declare_TIE_CATIACGRAdhesionSettingAtt(classe) \
 \
 \
class TIECATIACGRAdhesionSettingAtt##classe : public CATIACGRAdhesionSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIACGRAdhesionSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_V4_Model_CommentPage(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_V4_Model_CommentPage(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetV4_Model_CommentPageInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetV4_Model_CommentPageLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_V4_Model_LnF(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_V4_Model_LnF(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetV4_Model_LnFInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetV4_Model_LnFLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_V5_SPA(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_V5_SPA(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetV5_SPAInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetV5_SPALock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_V4V5_FDT(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_V4V5_FDT(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetV4V5_FDTInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetV4V5_FDTLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_Voxels(CAT_VARIANT_BOOL & oIsActive); \
      virtual HRESULT __stdcall put_Voxels(CAT_VARIANT_BOOL iIsActive); \
      virtual HRESULT __stdcall GetVoxelsInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetVoxelsLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIACGRAdhesionSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_V4_Model_CommentPage(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_V4_Model_CommentPage(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetV4_Model_CommentPageInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetV4_Model_CommentPageLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_V4_Model_LnF(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_V4_Model_LnF(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetV4_Model_LnFInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetV4_Model_LnFLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_V5_SPA(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_V5_SPA(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetV5_SPAInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetV5_SPALock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_V4V5_FDT(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_V4V5_FDT(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetV4V5_FDTInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetV4V5_FDTLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_Voxels(CAT_VARIANT_BOOL & oIsActive); \
virtual HRESULT __stdcall put_Voxels(CAT_VARIANT_BOOL iIsActive); \
virtual HRESULT __stdcall GetVoxelsInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetVoxelsLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIACGRAdhesionSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_V4_Model_CommentPage(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIACGRAdhesionSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_V4_Model_CommentPage(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_V4_Model_CommentPage(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIACGRAdhesionSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_V4_Model_CommentPage(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetV4_Model_CommentPageInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIACGRAdhesionSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetV4_Model_CommentPageInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetV4_Model_CommentPageLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIACGRAdhesionSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetV4_Model_CommentPageLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_V4_Model_LnF(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIACGRAdhesionSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_V4_Model_LnF(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_V4_Model_LnF(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIACGRAdhesionSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_V4_Model_LnF(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetV4_Model_LnFInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIACGRAdhesionSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetV4_Model_LnFInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetV4_Model_LnFLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIACGRAdhesionSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetV4_Model_LnFLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_V5_SPA(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIACGRAdhesionSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_V5_SPA(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_V5_SPA(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIACGRAdhesionSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_V5_SPA(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetV5_SPAInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIACGRAdhesionSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetV5_SPAInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetV5_SPALock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIACGRAdhesionSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetV5_SPALock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_V4V5_FDT(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIACGRAdhesionSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_V4V5_FDT(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_V4V5_FDT(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIACGRAdhesionSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_V4V5_FDT(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetV4V5_FDTInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIACGRAdhesionSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetV4V5_FDTInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetV4V5_FDTLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIACGRAdhesionSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetV4V5_FDTLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_Voxels(CAT_VARIANT_BOOL & oIsActive) \
{ \
return (ENVTIECALL(CATIACGRAdhesionSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Voxels(oIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::put_Voxels(CAT_VARIANT_BOOL iIsActive) \
{ \
return (ENVTIECALL(CATIACGRAdhesionSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Voxels(iIsActive)); \
} \
HRESULT __stdcall  ENVTIEName::GetVoxelsInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIACGRAdhesionSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetVoxelsInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetVoxelsLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIACGRAdhesionSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetVoxelsLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIACGRAdhesionSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIACGRAdhesionSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIACGRAdhesionSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIACGRAdhesionSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIACGRAdhesionSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIACGRAdhesionSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIACGRAdhesionSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIACGRAdhesionSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIACGRAdhesionSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIACGRAdhesionSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIACGRAdhesionSettingAtt(classe)    TIECATIACGRAdhesionSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIACGRAdhesionSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIACGRAdhesionSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIACGRAdhesionSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIACGRAdhesionSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIACGRAdhesionSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIACGRAdhesionSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIACGRAdhesionSettingAtt##classe::get_V4_Model_CommentPage(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_V4_Model_CommentPage(oIsActive); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACGRAdhesionSettingAtt##classe::put_V4_Model_CommentPage(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_V4_Model_CommentPage(iIsActive); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACGRAdhesionSettingAtt##classe::GetV4_Model_CommentPageInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetV4_Model_CommentPageInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACGRAdhesionSettingAtt##classe::SetV4_Model_CommentPageLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetV4_Model_CommentPageLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACGRAdhesionSettingAtt##classe::get_V4_Model_LnF(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_V4_Model_LnF(oIsActive); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACGRAdhesionSettingAtt##classe::put_V4_Model_LnF(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_V4_Model_LnF(iIsActive); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACGRAdhesionSettingAtt##classe::GetV4_Model_LnFInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetV4_Model_LnFInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACGRAdhesionSettingAtt##classe::SetV4_Model_LnFLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetV4_Model_LnFLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACGRAdhesionSettingAtt##classe::get_V5_SPA(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_V5_SPA(oIsActive); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACGRAdhesionSettingAtt##classe::put_V5_SPA(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_V5_SPA(iIsActive); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACGRAdhesionSettingAtt##classe::GetV5_SPAInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetV5_SPAInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACGRAdhesionSettingAtt##classe::SetV5_SPALock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetV5_SPALock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACGRAdhesionSettingAtt##classe::get_V4V5_FDT(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_V4V5_FDT(oIsActive); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACGRAdhesionSettingAtt##classe::put_V4V5_FDT(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_V4V5_FDT(iIsActive); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACGRAdhesionSettingAtt##classe::GetV4V5_FDTInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetV4V5_FDTInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACGRAdhesionSettingAtt##classe::SetV4V5_FDTLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetV4V5_FDTLock(iLocked); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACGRAdhesionSettingAtt##classe::get_Voxels(CAT_VARIANT_BOOL & oIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Voxels(oIsActive); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACGRAdhesionSettingAtt##classe::put_Voxels(CAT_VARIANT_BOOL iIsActive) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iIsActive); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Voxels(iIsActive); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iIsActive); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACGRAdhesionSettingAtt##classe::GetVoxelsInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetVoxelsInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACGRAdhesionSettingAtt##classe::SetVoxelsLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetVoxelsLock(iLocked); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACGRAdhesionSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACGRAdhesionSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACGRAdhesionSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACGRAdhesionSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIACGRAdhesionSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIACGRAdhesionSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIACGRAdhesionSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIACGRAdhesionSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIACGRAdhesionSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIACGRAdhesionSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIACGRAdhesionSettingAtt(classe) \
 \
 \
declare_TIE_CATIACGRAdhesionSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIACGRAdhesionSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIACGRAdhesionSettingAtt,"CATIACGRAdhesionSettingAtt",CATIACGRAdhesionSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIACGRAdhesionSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIACGRAdhesionSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIACGRAdhesionSettingAtt##classe(classe::MetaObject(),CATIACGRAdhesionSettingAtt::MetaObject(),(void *)CreateTIECATIACGRAdhesionSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIACGRAdhesionSettingAtt(classe) \
 \
 \
declare_TIE_CATIACGRAdhesionSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIACGRAdhesionSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIACGRAdhesionSettingAtt,"CATIACGRAdhesionSettingAtt",CATIACGRAdhesionSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIACGRAdhesionSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIACGRAdhesionSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIACGRAdhesionSettingAtt##classe(classe::MetaObject(),CATIACGRAdhesionSettingAtt::MetaObject(),(void *)CreateTIECATIACGRAdhesionSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIACGRAdhesionSettingAtt(classe) TIE_CATIACGRAdhesionSettingAtt(classe)
#else
#define BOA_CATIACGRAdhesionSettingAtt(classe) CATImplementBOA(CATIACGRAdhesionSettingAtt, classe)
#endif

#endif
