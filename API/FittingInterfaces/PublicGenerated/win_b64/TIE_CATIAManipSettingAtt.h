#ifndef __TIE_CATIAManipSettingAtt
#define __TIE_CATIAManipSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAManipSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAManipSettingAtt */
#define declare_TIE_CATIAManipSettingAtt(classe) \
 \
 \
class TIECATIAManipSettingAtt##classe : public CATIAManipSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAManipSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ClashSound(CAT_VARIANT_BOOL & oClashSound); \
      virtual HRESULT __stdcall put_ClashSound(CAT_VARIANT_BOOL iClashSound); \
      virtual HRESULT __stdcall GetClashSoundInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetClashSoundLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_RecordMode(CATManipAutoInsertMode & oMode); \
      virtual HRESULT __stdcall put_RecordMode(CATManipAutoInsertMode iMode); \
      virtual HRESULT __stdcall GetRecordModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetRecordModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DistanceStep(float & oDistanceStep); \
      virtual HRESULT __stdcall put_DistanceStep(float iDistanceStep); \
      virtual HRESULT __stdcall GetDistanceStepInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDistanceStepLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AngleStep(float & oAngleStep); \
      virtual HRESULT __stdcall put_AngleStep(float iAngleStep); \
      virtual HRESULT __stdcall GetAngleStepInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAngleStepLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ClashMode(CATManipClashMode & oMode); \
      virtual HRESULT __stdcall put_ClashMode(CATManipClashMode iMode); \
      virtual HRESULT __stdcall GetClashModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetClashModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ManipAutoInsert(CAT_VARIANT_BOOL & oManipAutoInsert); \
      virtual HRESULT __stdcall put_ManipAutoInsert(CAT_VARIANT_BOOL iManipAutoInsert); \
      virtual HRESULT __stdcall GetManipAutoInsertInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetManipAutoInsertLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SnapPosition(float & oSnapPosition); \
      virtual HRESULT __stdcall put_SnapPosition(float iSnapPosition); \
      virtual HRESULT __stdcall GetSnapPositionInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSnapPositionLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SnapAngleDistance(float & oSnapAngleDistance); \
      virtual HRESULT __stdcall put_SnapAngleDistance(float iSnapAngleDistance); \
      virtual HRESULT __stdcall GetSnapAngleDistanceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSnapAngleDistanceLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIAManipSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ClashSound(CAT_VARIANT_BOOL & oClashSound); \
virtual HRESULT __stdcall put_ClashSound(CAT_VARIANT_BOOL iClashSound); \
virtual HRESULT __stdcall GetClashSoundInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetClashSoundLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_RecordMode(CATManipAutoInsertMode & oMode); \
virtual HRESULT __stdcall put_RecordMode(CATManipAutoInsertMode iMode); \
virtual HRESULT __stdcall GetRecordModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetRecordModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DistanceStep(float & oDistanceStep); \
virtual HRESULT __stdcall put_DistanceStep(float iDistanceStep); \
virtual HRESULT __stdcall GetDistanceStepInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDistanceStepLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AngleStep(float & oAngleStep); \
virtual HRESULT __stdcall put_AngleStep(float iAngleStep); \
virtual HRESULT __stdcall GetAngleStepInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAngleStepLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ClashMode(CATManipClashMode & oMode); \
virtual HRESULT __stdcall put_ClashMode(CATManipClashMode iMode); \
virtual HRESULT __stdcall GetClashModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetClashModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ManipAutoInsert(CAT_VARIANT_BOOL & oManipAutoInsert); \
virtual HRESULT __stdcall put_ManipAutoInsert(CAT_VARIANT_BOOL iManipAutoInsert); \
virtual HRESULT __stdcall GetManipAutoInsertInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetManipAutoInsertLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SnapPosition(float & oSnapPosition); \
virtual HRESULT __stdcall put_SnapPosition(float iSnapPosition); \
virtual HRESULT __stdcall GetSnapPositionInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSnapPositionLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SnapAngleDistance(float & oSnapAngleDistance); \
virtual HRESULT __stdcall put_SnapAngleDistance(float iSnapAngleDistance); \
virtual HRESULT __stdcall GetSnapAngleDistanceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSnapAngleDistanceLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIAManipSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ClashSound(CAT_VARIANT_BOOL & oClashSound) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ClashSound(oClashSound)); \
} \
HRESULT __stdcall  ENVTIEName::put_ClashSound(CAT_VARIANT_BOOL iClashSound) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ClashSound(iClashSound)); \
} \
HRESULT __stdcall  ENVTIEName::GetClashSoundInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetClashSoundInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetClashSoundLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetClashSoundLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_RecordMode(CATManipAutoInsertMode & oMode) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_RecordMode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_RecordMode(CATManipAutoInsertMode iMode) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_RecordMode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetRecordModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetRecordModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetRecordModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetRecordModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DistanceStep(float & oDistanceStep) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DistanceStep(oDistanceStep)); \
} \
HRESULT __stdcall  ENVTIEName::put_DistanceStep(float iDistanceStep) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DistanceStep(iDistanceStep)); \
} \
HRESULT __stdcall  ENVTIEName::GetDistanceStepInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDistanceStepInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDistanceStepLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDistanceStepLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AngleStep(float & oAngleStep) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AngleStep(oAngleStep)); \
} \
HRESULT __stdcall  ENVTIEName::put_AngleStep(float iAngleStep) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AngleStep(iAngleStep)); \
} \
HRESULT __stdcall  ENVTIEName::GetAngleStepInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAngleStepInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAngleStepLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAngleStepLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ClashMode(CATManipClashMode & oMode) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ClashMode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_ClashMode(CATManipClashMode iMode) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ClashMode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetClashModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetClashModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetClashModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetClashModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ManipAutoInsert(CAT_VARIANT_BOOL & oManipAutoInsert) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ManipAutoInsert(oManipAutoInsert)); \
} \
HRESULT __stdcall  ENVTIEName::put_ManipAutoInsert(CAT_VARIANT_BOOL iManipAutoInsert) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ManipAutoInsert(iManipAutoInsert)); \
} \
HRESULT __stdcall  ENVTIEName::GetManipAutoInsertInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetManipAutoInsertInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetManipAutoInsertLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetManipAutoInsertLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SnapPosition(float & oSnapPosition) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SnapPosition(oSnapPosition)); \
} \
HRESULT __stdcall  ENVTIEName::put_SnapPosition(float iSnapPosition) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SnapPosition(iSnapPosition)); \
} \
HRESULT __stdcall  ENVTIEName::GetSnapPositionInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSnapPositionInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSnapPositionLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSnapPositionLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SnapAngleDistance(float & oSnapAngleDistance) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SnapAngleDistance(oSnapAngleDistance)); \
} \
HRESULT __stdcall  ENVTIEName::put_SnapAngleDistance(float iSnapAngleDistance) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SnapAngleDistance(iSnapAngleDistance)); \
} \
HRESULT __stdcall  ENVTIEName::GetSnapAngleDistanceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSnapAngleDistanceInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSnapAngleDistanceLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSnapAngleDistanceLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAManipSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAManipSettingAtt(classe)    TIECATIAManipSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAManipSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAManipSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAManipSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAManipSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAManipSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAManipSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::get_ClashSound(CAT_VARIANT_BOOL & oClashSound) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oClashSound); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ClashSound(oClashSound); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oClashSound); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::put_ClashSound(CAT_VARIANT_BOOL iClashSound) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iClashSound); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ClashSound(iClashSound); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iClashSound); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::GetClashSoundInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetClashSoundInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::SetClashSoundLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetClashSoundLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::get_RecordMode(CATManipAutoInsertMode & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RecordMode(oMode); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::put_RecordMode(CATManipAutoInsertMode iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RecordMode(iMode); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::GetRecordModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRecordModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::SetRecordModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRecordModeLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::get_DistanceStep(float & oDistanceStep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oDistanceStep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DistanceStep(oDistanceStep); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oDistanceStep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::put_DistanceStep(float iDistanceStep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iDistanceStep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DistanceStep(iDistanceStep); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iDistanceStep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::GetDistanceStepInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDistanceStepInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::SetDistanceStepLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDistanceStepLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::get_AngleStep(float & oAngleStep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oAngleStep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AngleStep(oAngleStep); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oAngleStep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::put_AngleStep(float iAngleStep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iAngleStep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AngleStep(iAngleStep); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iAngleStep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::GetAngleStepInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAngleStepInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::SetAngleStepLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAngleStepLock(iLocked); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::get_ClashMode(CATManipClashMode & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ClashMode(oMode); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::put_ClashMode(CATManipClashMode iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ClashMode(iMode); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::GetClashModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetClashModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::SetClashModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetClashModeLock(iLocked); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::get_ManipAutoInsert(CAT_VARIANT_BOOL & oManipAutoInsert) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oManipAutoInsert); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ManipAutoInsert(oManipAutoInsert); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oManipAutoInsert); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::put_ManipAutoInsert(CAT_VARIANT_BOOL iManipAutoInsert) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iManipAutoInsert); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ManipAutoInsert(iManipAutoInsert); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iManipAutoInsert); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::GetManipAutoInsertInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetManipAutoInsertInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::SetManipAutoInsertLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetManipAutoInsertLock(iLocked); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::get_SnapPosition(float & oSnapPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oSnapPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SnapPosition(oSnapPosition); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oSnapPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::put_SnapPosition(float iSnapPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iSnapPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SnapPosition(iSnapPosition); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iSnapPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::GetSnapPositionInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSnapPositionInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::SetSnapPositionLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSnapPositionLock(iLocked); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::get_SnapAngleDistance(float & oSnapAngleDistance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oSnapAngleDistance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SnapAngleDistance(oSnapAngleDistance); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oSnapAngleDistance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::put_SnapAngleDistance(float iSnapAngleDistance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iSnapAngleDistance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SnapAngleDistance(iSnapAngleDistance); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iSnapAngleDistance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::GetSnapAngleDistanceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSnapAngleDistanceInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::SetSnapAngleDistanceLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSnapAngleDistanceLock(iLocked); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAManipSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManipSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManipSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManipSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManipSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAManipSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAManipSettingAtt(classe) \
 \
 \
declare_TIE_CATIAManipSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManipSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManipSettingAtt,"CATIAManipSettingAtt",CATIAManipSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManipSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAManipSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManipSettingAtt##classe(classe::MetaObject(),CATIAManipSettingAtt::MetaObject(),(void *)CreateTIECATIAManipSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAManipSettingAtt(classe) \
 \
 \
declare_TIE_CATIAManipSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAManipSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAManipSettingAtt,"CATIAManipSettingAtt",CATIAManipSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAManipSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAManipSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAManipSettingAtt##classe(classe::MetaObject(),CATIAManipSettingAtt::MetaObject(),(void *)CreateTIECATIAManipSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAManipSettingAtt(classe) TIE_CATIAManipSettingAtt(classe)
#else
#define BOA_CATIAManipSettingAtt(classe) CATImplementBOA(CATIAManipSettingAtt, classe)
#endif

#endif
