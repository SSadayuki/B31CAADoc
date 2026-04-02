#ifndef __TIE_CATIAFittingSettingAtt
#define __TIE_CATIAFittingSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFittingSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFittingSettingAtt */
#define declare_TIE_CATIAFittingSettingAtt(classe) \
 \
 \
class TIECATIAFittingSettingAtt##classe : public CATIAFittingSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFittingSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_AngleLimit(CAT_VARIANT_BOOL & oAngleLimit); \
      virtual HRESULT __stdcall put_AngleLimit(CAT_VARIANT_BOOL iAngleLimit); \
      virtual HRESULT __stdcall GetAngleLimitInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAngleLimitLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_MaxAngle(float & oMaxAngle); \
      virtual HRESULT __stdcall put_MaxAngle(float iMaxAngle); \
      virtual HRESULT __stdcall GetMaxAngleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetMaxAngleLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_Vector(CATFittingShuttleVector & oVector); \
      virtual HRESULT __stdcall put_Vector(CATFittingShuttleVector iVector); \
      virtual HRESULT __stdcall GetVectorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetVectorLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_PathFinderSmooth(CAT_VARIANT_BOOL & oPathFinderSmooth); \
      virtual HRESULT __stdcall put_PathFinderSmooth(CAT_VARIANT_BOOL iPathFinderSmooth); \
      virtual HRESULT __stdcall GetPathFinderSmoothInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetPathFinderSmoothLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_TrackAutoUpdate(CAT_VARIANT_BOOL & oTrackAutoUpdate); \
      virtual HRESULT __stdcall put_TrackAutoUpdate(CAT_VARIANT_BOOL iTrackAutoUpdate); \
      virtual HRESULT __stdcall GetTrackAutoUpdateInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetTrackAutoUpdateLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DefaultSpeed(double & oDefaultSpeed); \
      virtual HRESULT __stdcall put_DefaultSpeed(double iDefaultSpeed); \
      virtual HRESULT __stdcall GetDefaultSpeedInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDefaultSpeedLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DefaultTime(double & oDefaultTime); \
      virtual HRESULT __stdcall put_DefaultTime(double iDefaultTime); \
      virtual HRESULT __stdcall GetDefaultTimeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDefaultTimeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ClashWhileMoving(CAT_VARIANT_BOOL & oClashWhileMoving); \
      virtual HRESULT __stdcall put_ClashWhileMoving(CAT_VARIANT_BOOL iClashWhileMoving); \
      virtual HRESULT __stdcall GetClashWhileMovingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetClashWhileMovingLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIAFittingSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_AngleLimit(CAT_VARIANT_BOOL & oAngleLimit); \
virtual HRESULT __stdcall put_AngleLimit(CAT_VARIANT_BOOL iAngleLimit); \
virtual HRESULT __stdcall GetAngleLimitInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAngleLimitLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_MaxAngle(float & oMaxAngle); \
virtual HRESULT __stdcall put_MaxAngle(float iMaxAngle); \
virtual HRESULT __stdcall GetMaxAngleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetMaxAngleLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_Vector(CATFittingShuttleVector & oVector); \
virtual HRESULT __stdcall put_Vector(CATFittingShuttleVector iVector); \
virtual HRESULT __stdcall GetVectorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetVectorLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_PathFinderSmooth(CAT_VARIANT_BOOL & oPathFinderSmooth); \
virtual HRESULT __stdcall put_PathFinderSmooth(CAT_VARIANT_BOOL iPathFinderSmooth); \
virtual HRESULT __stdcall GetPathFinderSmoothInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetPathFinderSmoothLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_TrackAutoUpdate(CAT_VARIANT_BOOL & oTrackAutoUpdate); \
virtual HRESULT __stdcall put_TrackAutoUpdate(CAT_VARIANT_BOOL iTrackAutoUpdate); \
virtual HRESULT __stdcall GetTrackAutoUpdateInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetTrackAutoUpdateLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DefaultSpeed(double & oDefaultSpeed); \
virtual HRESULT __stdcall put_DefaultSpeed(double iDefaultSpeed); \
virtual HRESULT __stdcall GetDefaultSpeedInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDefaultSpeedLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DefaultTime(double & oDefaultTime); \
virtual HRESULT __stdcall put_DefaultTime(double iDefaultTime); \
virtual HRESULT __stdcall GetDefaultTimeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDefaultTimeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ClashWhileMoving(CAT_VARIANT_BOOL & oClashWhileMoving); \
virtual HRESULT __stdcall put_ClashWhileMoving(CAT_VARIANT_BOOL iClashWhileMoving); \
virtual HRESULT __stdcall GetClashWhileMovingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetClashWhileMovingLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIAFittingSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_AngleLimit(CAT_VARIANT_BOOL & oAngleLimit) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AngleLimit(oAngleLimit)); \
} \
HRESULT __stdcall  ENVTIEName::put_AngleLimit(CAT_VARIANT_BOOL iAngleLimit) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AngleLimit(iAngleLimit)); \
} \
HRESULT __stdcall  ENVTIEName::GetAngleLimitInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAngleLimitInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAngleLimitLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAngleLimitLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_MaxAngle(float & oMaxAngle) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_MaxAngle(oMaxAngle)); \
} \
HRESULT __stdcall  ENVTIEName::put_MaxAngle(float iMaxAngle) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_MaxAngle(iMaxAngle)); \
} \
HRESULT __stdcall  ENVTIEName::GetMaxAngleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetMaxAngleInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetMaxAngleLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetMaxAngleLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_Vector(CATFittingShuttleVector & oVector) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Vector(oVector)); \
} \
HRESULT __stdcall  ENVTIEName::put_Vector(CATFittingShuttleVector iVector) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Vector(iVector)); \
} \
HRESULT __stdcall  ENVTIEName::GetVectorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetVectorInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetVectorLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetVectorLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_PathFinderSmooth(CAT_VARIANT_BOOL & oPathFinderSmooth) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_PathFinderSmooth(oPathFinderSmooth)); \
} \
HRESULT __stdcall  ENVTIEName::put_PathFinderSmooth(CAT_VARIANT_BOOL iPathFinderSmooth) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_PathFinderSmooth(iPathFinderSmooth)); \
} \
HRESULT __stdcall  ENVTIEName::GetPathFinderSmoothInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPathFinderSmoothInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetPathFinderSmoothLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPathFinderSmoothLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_TrackAutoUpdate(CAT_VARIANT_BOOL & oTrackAutoUpdate) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_TrackAutoUpdate(oTrackAutoUpdate)); \
} \
HRESULT __stdcall  ENVTIEName::put_TrackAutoUpdate(CAT_VARIANT_BOOL iTrackAutoUpdate) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_TrackAutoUpdate(iTrackAutoUpdate)); \
} \
HRESULT __stdcall  ENVTIEName::GetTrackAutoUpdateInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetTrackAutoUpdateInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetTrackAutoUpdateLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetTrackAutoUpdateLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DefaultSpeed(double & oDefaultSpeed) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DefaultSpeed(oDefaultSpeed)); \
} \
HRESULT __stdcall  ENVTIEName::put_DefaultSpeed(double iDefaultSpeed) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DefaultSpeed(iDefaultSpeed)); \
} \
HRESULT __stdcall  ENVTIEName::GetDefaultSpeedInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDefaultSpeedInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDefaultSpeedLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDefaultSpeedLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DefaultTime(double & oDefaultTime) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DefaultTime(oDefaultTime)); \
} \
HRESULT __stdcall  ENVTIEName::put_DefaultTime(double iDefaultTime) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DefaultTime(iDefaultTime)); \
} \
HRESULT __stdcall  ENVTIEName::GetDefaultTimeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDefaultTimeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDefaultTimeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDefaultTimeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ClashWhileMoving(CAT_VARIANT_BOOL & oClashWhileMoving) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ClashWhileMoving(oClashWhileMoving)); \
} \
HRESULT __stdcall  ENVTIEName::put_ClashWhileMoving(CAT_VARIANT_BOOL iClashWhileMoving) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ClashWhileMoving(iClashWhileMoving)); \
} \
HRESULT __stdcall  ENVTIEName::GetClashWhileMovingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetClashWhileMovingInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetClashWhileMovingLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetClashWhileMovingLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAFittingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFittingSettingAtt(classe)    TIECATIAFittingSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFittingSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFittingSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAFittingSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFittingSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFittingSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFittingSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::get_AngleLimit(CAT_VARIANT_BOOL & oAngleLimit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oAngleLimit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AngleLimit(oAngleLimit); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oAngleLimit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::put_AngleLimit(CAT_VARIANT_BOOL iAngleLimit) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iAngleLimit); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AngleLimit(iAngleLimit); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iAngleLimit); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::GetAngleLimitInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAngleLimitInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::SetAngleLimitLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAngleLimitLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::get_MaxAngle(float & oMaxAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oMaxAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MaxAngle(oMaxAngle); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oMaxAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::put_MaxAngle(float iMaxAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iMaxAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MaxAngle(iMaxAngle); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iMaxAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::GetMaxAngleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMaxAngleInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::SetMaxAngleLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMaxAngleLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::get_Vector(CATFittingShuttleVector & oVector) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oVector); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Vector(oVector); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oVector); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::put_Vector(CATFittingShuttleVector iVector) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iVector); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Vector(iVector); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iVector); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::GetVectorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetVectorInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::SetVectorLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetVectorLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::get_PathFinderSmooth(CAT_VARIANT_BOOL & oPathFinderSmooth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oPathFinderSmooth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PathFinderSmooth(oPathFinderSmooth); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oPathFinderSmooth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::put_PathFinderSmooth(CAT_VARIANT_BOOL iPathFinderSmooth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iPathFinderSmooth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PathFinderSmooth(iPathFinderSmooth); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iPathFinderSmooth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::GetPathFinderSmoothInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPathFinderSmoothInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::SetPathFinderSmoothLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPathFinderSmoothLock(iLocked); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::get_TrackAutoUpdate(CAT_VARIANT_BOOL & oTrackAutoUpdate) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oTrackAutoUpdate); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TrackAutoUpdate(oTrackAutoUpdate); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oTrackAutoUpdate); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::put_TrackAutoUpdate(CAT_VARIANT_BOOL iTrackAutoUpdate) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iTrackAutoUpdate); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TrackAutoUpdate(iTrackAutoUpdate); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iTrackAutoUpdate); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::GetTrackAutoUpdateInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTrackAutoUpdateInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::SetTrackAutoUpdateLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTrackAutoUpdateLock(iLocked); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::get_DefaultSpeed(double & oDefaultSpeed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oDefaultSpeed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DefaultSpeed(oDefaultSpeed); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oDefaultSpeed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::put_DefaultSpeed(double iDefaultSpeed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iDefaultSpeed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DefaultSpeed(iDefaultSpeed); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iDefaultSpeed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::GetDefaultSpeedInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDefaultSpeedInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::SetDefaultSpeedLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDefaultSpeedLock(iLocked); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::get_DefaultTime(double & oDefaultTime) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oDefaultTime); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DefaultTime(oDefaultTime); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oDefaultTime); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::put_DefaultTime(double iDefaultTime) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iDefaultTime); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DefaultTime(iDefaultTime); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iDefaultTime); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::GetDefaultTimeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDefaultTimeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::SetDefaultTimeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDefaultTimeLock(iLocked); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::get_ClashWhileMoving(CAT_VARIANT_BOOL & oClashWhileMoving) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oClashWhileMoving); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ClashWhileMoving(oClashWhileMoving); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oClashWhileMoving); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::put_ClashWhileMoving(CAT_VARIANT_BOOL iClashWhileMoving) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iClashWhileMoving); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ClashWhileMoving(iClashWhileMoving); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iClashWhileMoving); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::GetClashWhileMovingInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetClashWhileMovingInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::SetClashWhileMovingLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetClashWhileMovingLock(iLocked); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFittingSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFittingSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFittingSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFittingSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFittingSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFittingSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFittingSettingAtt(classe) \
 \
 \
declare_TIE_CATIAFittingSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFittingSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFittingSettingAtt,"CATIAFittingSettingAtt",CATIAFittingSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFittingSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFittingSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFittingSettingAtt##classe(classe::MetaObject(),CATIAFittingSettingAtt::MetaObject(),(void *)CreateTIECATIAFittingSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFittingSettingAtt(classe) \
 \
 \
declare_TIE_CATIAFittingSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFittingSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFittingSettingAtt,"CATIAFittingSettingAtt",CATIAFittingSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFittingSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFittingSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFittingSettingAtt##classe(classe::MetaObject(),CATIAFittingSettingAtt::MetaObject(),(void *)CreateTIECATIAFittingSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFittingSettingAtt(classe) TIE_CATIAFittingSettingAtt(classe)
#else
#define BOA_CATIAFittingSettingAtt(classe) CATImplementBOA(CATIAFittingSettingAtt, classe)
#endif

#endif
