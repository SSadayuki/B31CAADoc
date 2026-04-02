#ifndef __TIE_CATIATrack
#define __TIE_CATIATrack

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIATrack.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIATrack */
#define declare_TIE_CATIATrack(classe) \
 \
 \
class TIECATIATrack##classe : public CATIATrack \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIATrack, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Speed(double & oSpeed); \
      virtual HRESULT __stdcall put_Speed(double iSpeed); \
      virtual HRESULT __stdcall Mirror(const CATSafeArrayVariant & iPoint, const CATSafeArrayVariant & iNormal); \
      virtual HRESULT __stdcall Move(const CATSafeArrayVariant & iTransfo); \
      virtual HRESULT __stdcall GetMatrixAll(CATSafeArrayVariant & oMatrixAll); \
      virtual HRESULT __stdcall get_MoveMode(DMUTrackMoveMode & oMoveMode); \
      virtual HRESULT __stdcall put_MoveMode(DMUTrackMoveMode iMoveMode); \
      virtual HRESULT __stdcall get_Object(CATBaseDispatch *& oObject); \
      virtual HRESULT __stdcall put_Object(CATBaseDispatch * iObject); \
      virtual HRESULT __stdcall SetObjectKeepingPosition(CATBaseDispatch * iObject); \
      virtual HRESULT __stdcall get_Handle(CATBaseDispatch *& oHandle); \
      virtual HRESULT __stdcall put_Handle(CATBaseDispatch * iHandle); \
      virtual HRESULT __stdcall get_Interpolater(CATBSTR *& oInterpolater); \
      virtual HRESULT __stdcall put_Interpolater(const CATBSTR & iInterpolater); \
      virtual HRESULT __stdcall get_Time(double & oTime); \
      virtual HRESULT __stdcall put_Time(double iTime); \
      virtual HRESULT __stdcall GetTotalDuration(double & oDuration); \
      virtual HRESULT __stdcall get_Scaling(double & oScaling); \
      virtual HRESULT __stdcall put_Scaling(double iScaling); \
      virtual HRESULT __stdcall GetKnownInterpolaters(CATSafeArrayVariant & oInterpolaters); \
      virtual HRESULT __stdcall RemoveAnalyses(); \
      virtual HRESULT __stdcall BindAnalysis(CATBaseDispatch * iObject, CatSampledAnalysisMode iAnalysisMode, CAT_VARIANT_BOOL iMonitorMode); \
      virtual HRESULT __stdcall get_Shots(CATIAShots *& oShots); \
      virtual HRESULT __stdcall ReverseTime(); \
      virtual HRESULT __stdcall Append(const CATSafeArrayVariant & iTracks, CATIASampled *& oResultTrack); \
      virtual HRESULT __stdcall Split(CatSampledSplitType iType, short iIndice); \
      virtual HRESULT __stdcall BreakInheritance(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIATrack(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Speed(double & oSpeed); \
virtual HRESULT __stdcall put_Speed(double iSpeed); \
virtual HRESULT __stdcall Mirror(const CATSafeArrayVariant & iPoint, const CATSafeArrayVariant & iNormal); \
virtual HRESULT __stdcall Move(const CATSafeArrayVariant & iTransfo); \
virtual HRESULT __stdcall GetMatrixAll(CATSafeArrayVariant & oMatrixAll); \
virtual HRESULT __stdcall get_MoveMode(DMUTrackMoveMode & oMoveMode); \
virtual HRESULT __stdcall put_MoveMode(DMUTrackMoveMode iMoveMode); \
virtual HRESULT __stdcall get_Object(CATBaseDispatch *& oObject); \
virtual HRESULT __stdcall put_Object(CATBaseDispatch * iObject); \
virtual HRESULT __stdcall SetObjectKeepingPosition(CATBaseDispatch * iObject); \
virtual HRESULT __stdcall get_Handle(CATBaseDispatch *& oHandle); \
virtual HRESULT __stdcall put_Handle(CATBaseDispatch * iHandle); \
virtual HRESULT __stdcall get_Interpolater(CATBSTR *& oInterpolater); \
virtual HRESULT __stdcall put_Interpolater(const CATBSTR & iInterpolater); \
virtual HRESULT __stdcall get_Time(double & oTime); \
virtual HRESULT __stdcall put_Time(double iTime); \
virtual HRESULT __stdcall GetTotalDuration(double & oDuration); \
virtual HRESULT __stdcall get_Scaling(double & oScaling); \
virtual HRESULT __stdcall put_Scaling(double iScaling); \
virtual HRESULT __stdcall GetKnownInterpolaters(CATSafeArrayVariant & oInterpolaters); \
virtual HRESULT __stdcall RemoveAnalyses(); \
virtual HRESULT __stdcall BindAnalysis(CATBaseDispatch * iObject, CatSampledAnalysisMode iAnalysisMode, CAT_VARIANT_BOOL iMonitorMode); \
virtual HRESULT __stdcall get_Shots(CATIAShots *& oShots); \
virtual HRESULT __stdcall ReverseTime(); \
virtual HRESULT __stdcall Append(const CATSafeArrayVariant & iTracks, CATIASampled *& oResultTrack); \
virtual HRESULT __stdcall Split(CatSampledSplitType iType, short iIndice); \
virtual HRESULT __stdcall BreakInheritance(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIATrack(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Speed(double & oSpeed) \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)get_Speed(oSpeed)); \
} \
HRESULT __stdcall  ENVTIEName::put_Speed(double iSpeed) \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)put_Speed(iSpeed)); \
} \
HRESULT __stdcall  ENVTIEName::Mirror(const CATSafeArrayVariant & iPoint, const CATSafeArrayVariant & iNormal) \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)Mirror(iPoint,iNormal)); \
} \
HRESULT __stdcall  ENVTIEName::Move(const CATSafeArrayVariant & iTransfo) \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)Move(iTransfo)); \
} \
HRESULT __stdcall  ENVTIEName::GetMatrixAll(CATSafeArrayVariant & oMatrixAll) \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)GetMatrixAll(oMatrixAll)); \
} \
HRESULT __stdcall  ENVTIEName::get_MoveMode(DMUTrackMoveMode & oMoveMode) \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)get_MoveMode(oMoveMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_MoveMode(DMUTrackMoveMode iMoveMode) \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)put_MoveMode(iMoveMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_Object(CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)get_Object(oObject)); \
} \
HRESULT __stdcall  ENVTIEName::put_Object(CATBaseDispatch * iObject) \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)put_Object(iObject)); \
} \
HRESULT __stdcall  ENVTIEName::SetObjectKeepingPosition(CATBaseDispatch * iObject) \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)SetObjectKeepingPosition(iObject)); \
} \
HRESULT __stdcall  ENVTIEName::get_Handle(CATBaseDispatch *& oHandle) \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)get_Handle(oHandle)); \
} \
HRESULT __stdcall  ENVTIEName::put_Handle(CATBaseDispatch * iHandle) \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)put_Handle(iHandle)); \
} \
HRESULT __stdcall  ENVTIEName::get_Interpolater(CATBSTR *& oInterpolater) \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)get_Interpolater(oInterpolater)); \
} \
HRESULT __stdcall  ENVTIEName::put_Interpolater(const CATBSTR & iInterpolater) \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)put_Interpolater(iInterpolater)); \
} \
HRESULT __stdcall  ENVTIEName::get_Time(double & oTime) \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)get_Time(oTime)); \
} \
HRESULT __stdcall  ENVTIEName::put_Time(double iTime) \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)put_Time(iTime)); \
} \
HRESULT __stdcall  ENVTIEName::GetTotalDuration(double & oDuration) \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)GetTotalDuration(oDuration)); \
} \
HRESULT __stdcall  ENVTIEName::get_Scaling(double & oScaling) \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)get_Scaling(oScaling)); \
} \
HRESULT __stdcall  ENVTIEName::put_Scaling(double iScaling) \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)put_Scaling(iScaling)); \
} \
HRESULT __stdcall  ENVTIEName::GetKnownInterpolaters(CATSafeArrayVariant & oInterpolaters) \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)GetKnownInterpolaters(oInterpolaters)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAnalyses() \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)RemoveAnalyses()); \
} \
HRESULT __stdcall  ENVTIEName::BindAnalysis(CATBaseDispatch * iObject, CatSampledAnalysisMode iAnalysisMode, CAT_VARIANT_BOOL iMonitorMode) \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)BindAnalysis(iObject,iAnalysisMode,iMonitorMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_Shots(CATIAShots *& oShots) \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)get_Shots(oShots)); \
} \
HRESULT __stdcall  ENVTIEName::ReverseTime() \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)ReverseTime()); \
} \
HRESULT __stdcall  ENVTIEName::Append(const CATSafeArrayVariant & iTracks, CATIASampled *& oResultTrack) \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)Append(iTracks,oResultTrack)); \
} \
HRESULT __stdcall  ENVTIEName::Split(CatSampledSplitType iType, short iIndice) \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)Split(iType,iIndice)); \
} \
HRESULT __stdcall  ENVTIEName::BreakInheritance() \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)BreakInheritance()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIATrack,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIATrack(classe)    TIECATIATrack##classe


/* Common methods inside a TIE */
#define common_TIE_CATIATrack(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIATrack, classe) \
 \
 \
CATImplementTIEMethods(CATIATrack, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIATrack, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIATrack, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIATrack, classe) \
 \
HRESULT __stdcall  TIECATIATrack##classe::get_Speed(double & oSpeed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oSpeed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Speed(oSpeed); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oSpeed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrack##classe::put_Speed(double iSpeed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iSpeed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Speed(iSpeed); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iSpeed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrack##classe::Mirror(const CATSafeArrayVariant & iPoint, const CATSafeArrayVariant & iNormal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iPoint,&iNormal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Mirror(iPoint,iNormal); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iPoint,&iNormal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrack##classe::Move(const CATSafeArrayVariant & iTransfo) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iTransfo); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Move(iTransfo); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iTransfo); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrack##classe::GetMatrixAll(CATSafeArrayVariant & oMatrixAll) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oMatrixAll); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMatrixAll(oMatrixAll); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oMatrixAll); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrack##classe::get_MoveMode(DMUTrackMoveMode & oMoveMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oMoveMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MoveMode(oMoveMode); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oMoveMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrack##classe::put_MoveMode(DMUTrackMoveMode iMoveMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iMoveMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MoveMode(iMoveMode); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iMoveMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrack##classe::get_Object(CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Object(oObject); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrack##classe::put_Object(CATBaseDispatch * iObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Object(iObject); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrack##classe::SetObjectKeepingPosition(CATBaseDispatch * iObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetObjectKeepingPosition(iObject); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrack##classe::get_Handle(CATBaseDispatch *& oHandle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oHandle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Handle(oHandle); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oHandle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrack##classe::put_Handle(CATBaseDispatch * iHandle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iHandle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Handle(iHandle); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iHandle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrack##classe::get_Interpolater(CATBSTR *& oInterpolater) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oInterpolater); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Interpolater(oInterpolater); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oInterpolater); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrack##classe::put_Interpolater(const CATBSTR & iInterpolater) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iInterpolater); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Interpolater(iInterpolater); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iInterpolater); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrack##classe::get_Time(double & oTime) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oTime); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Time(oTime); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oTime); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrack##classe::put_Time(double iTime) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iTime); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Time(iTime); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iTime); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrack##classe::GetTotalDuration(double & oDuration) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oDuration); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTotalDuration(oDuration); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oDuration); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrack##classe::get_Scaling(double & oScaling) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oScaling); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Scaling(oScaling); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oScaling); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrack##classe::put_Scaling(double iScaling) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iScaling); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Scaling(iScaling); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iScaling); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrack##classe::GetKnownInterpolaters(CATSafeArrayVariant & oInterpolaters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oInterpolaters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetKnownInterpolaters(oInterpolaters); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oInterpolaters); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrack##classe::RemoveAnalyses() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAnalyses(); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrack##classe::BindAnalysis(CATBaseDispatch * iObject, CatSampledAnalysisMode iAnalysisMode, CAT_VARIANT_BOOL iMonitorMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iObject,&iAnalysisMode,&iMonitorMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BindAnalysis(iObject,iAnalysisMode,iMonitorMode); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iObject,&iAnalysisMode,&iMonitorMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrack##classe::get_Shots(CATIAShots *& oShots) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oShots); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Shots(oShots); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oShots); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrack##classe::ReverseTime() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReverseTime(); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrack##classe::Append(const CATSafeArrayVariant & iTracks, CATIASampled *& oResultTrack) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iTracks,&oResultTrack); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Append(iTracks,oResultTrack); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iTracks,&oResultTrack); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrack##classe::Split(CatSampledSplitType iType, short iIndice) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iType,&iIndice); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Split(iType,iIndice); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iType,&iIndice); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrack##classe::BreakInheritance() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BreakInheritance(); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATrack##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATrack##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATrack##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATrack##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATrack##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIATrack(classe) \
 \
 \
declare_TIE_CATIATrack(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATrack##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATrack,"CATIATrack",CATIATrack::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATrack(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIATrack, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATrack##classe(classe::MetaObject(),CATIATrack::MetaObject(),(void *)CreateTIECATIATrack##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIATrack(classe) \
 \
 \
declare_TIE_CATIATrack(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATrack##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATrack,"CATIATrack",CATIATrack::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATrack(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIATrack, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATrack##classe(classe::MetaObject(),CATIATrack::MetaObject(),(void *)CreateTIECATIATrack##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIATrack(classe) TIE_CATIATrack(classe)
#else
#define BOA_CATIATrack(classe) CATImplementBOA(CATIATrack, classe)
#endif

#endif
