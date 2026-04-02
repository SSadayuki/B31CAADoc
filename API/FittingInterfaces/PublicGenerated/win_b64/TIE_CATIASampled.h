#ifndef __TIE_CATIASampled
#define __TIE_CATIASampled

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASampled.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASampled */
#define declare_TIE_CATIASampled(classe) \
 \
 \
class TIECATIASampled##classe : public CATIASampled \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASampled, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
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



#define ENVTIEdeclare_CATIASampled(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
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


#define ENVTIEdefine_CATIASampled(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Object(CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIASampled,ENVTIETypeLetter,ENVTIELetter)get_Object(oObject)); \
} \
HRESULT __stdcall  ENVTIEName::put_Object(CATBaseDispatch * iObject) \
{ \
return (ENVTIECALL(CATIASampled,ENVTIETypeLetter,ENVTIELetter)put_Object(iObject)); \
} \
HRESULT __stdcall  ENVTIEName::SetObjectKeepingPosition(CATBaseDispatch * iObject) \
{ \
return (ENVTIECALL(CATIASampled,ENVTIETypeLetter,ENVTIELetter)SetObjectKeepingPosition(iObject)); \
} \
HRESULT __stdcall  ENVTIEName::get_Handle(CATBaseDispatch *& oHandle) \
{ \
return (ENVTIECALL(CATIASampled,ENVTIETypeLetter,ENVTIELetter)get_Handle(oHandle)); \
} \
HRESULT __stdcall  ENVTIEName::put_Handle(CATBaseDispatch * iHandle) \
{ \
return (ENVTIECALL(CATIASampled,ENVTIETypeLetter,ENVTIELetter)put_Handle(iHandle)); \
} \
HRESULT __stdcall  ENVTIEName::get_Interpolater(CATBSTR *& oInterpolater) \
{ \
return (ENVTIECALL(CATIASampled,ENVTIETypeLetter,ENVTIELetter)get_Interpolater(oInterpolater)); \
} \
HRESULT __stdcall  ENVTIEName::put_Interpolater(const CATBSTR & iInterpolater) \
{ \
return (ENVTIECALL(CATIASampled,ENVTIETypeLetter,ENVTIELetter)put_Interpolater(iInterpolater)); \
} \
HRESULT __stdcall  ENVTIEName::get_Time(double & oTime) \
{ \
return (ENVTIECALL(CATIASampled,ENVTIETypeLetter,ENVTIELetter)get_Time(oTime)); \
} \
HRESULT __stdcall  ENVTIEName::put_Time(double iTime) \
{ \
return (ENVTIECALL(CATIASampled,ENVTIETypeLetter,ENVTIELetter)put_Time(iTime)); \
} \
HRESULT __stdcall  ENVTIEName::GetTotalDuration(double & oDuration) \
{ \
return (ENVTIECALL(CATIASampled,ENVTIETypeLetter,ENVTIELetter)GetTotalDuration(oDuration)); \
} \
HRESULT __stdcall  ENVTIEName::get_Scaling(double & oScaling) \
{ \
return (ENVTIECALL(CATIASampled,ENVTIETypeLetter,ENVTIELetter)get_Scaling(oScaling)); \
} \
HRESULT __stdcall  ENVTIEName::put_Scaling(double iScaling) \
{ \
return (ENVTIECALL(CATIASampled,ENVTIETypeLetter,ENVTIELetter)put_Scaling(iScaling)); \
} \
HRESULT __stdcall  ENVTIEName::GetKnownInterpolaters(CATSafeArrayVariant & oInterpolaters) \
{ \
return (ENVTIECALL(CATIASampled,ENVTIETypeLetter,ENVTIELetter)GetKnownInterpolaters(oInterpolaters)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAnalyses() \
{ \
return (ENVTIECALL(CATIASampled,ENVTIETypeLetter,ENVTIELetter)RemoveAnalyses()); \
} \
HRESULT __stdcall  ENVTIEName::BindAnalysis(CATBaseDispatch * iObject, CatSampledAnalysisMode iAnalysisMode, CAT_VARIANT_BOOL iMonitorMode) \
{ \
return (ENVTIECALL(CATIASampled,ENVTIETypeLetter,ENVTIELetter)BindAnalysis(iObject,iAnalysisMode,iMonitorMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_Shots(CATIAShots *& oShots) \
{ \
return (ENVTIECALL(CATIASampled,ENVTIETypeLetter,ENVTIELetter)get_Shots(oShots)); \
} \
HRESULT __stdcall  ENVTIEName::ReverseTime() \
{ \
return (ENVTIECALL(CATIASampled,ENVTIETypeLetter,ENVTIELetter)ReverseTime()); \
} \
HRESULT __stdcall  ENVTIEName::Append(const CATSafeArrayVariant & iTracks, CATIASampled *& oResultTrack) \
{ \
return (ENVTIECALL(CATIASampled,ENVTIETypeLetter,ENVTIELetter)Append(iTracks,oResultTrack)); \
} \
HRESULT __stdcall  ENVTIEName::Split(CatSampledSplitType iType, short iIndice) \
{ \
return (ENVTIECALL(CATIASampled,ENVTIETypeLetter,ENVTIELetter)Split(iType,iIndice)); \
} \
HRESULT __stdcall  ENVTIEName::BreakInheritance() \
{ \
return (ENVTIECALL(CATIASampled,ENVTIETypeLetter,ENVTIELetter)BreakInheritance()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASampled,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASampled,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASampled,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASampled,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASampled,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASampled(classe)    TIECATIASampled##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASampled(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASampled, classe) \
 \
 \
CATImplementTIEMethods(CATIASampled, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASampled, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASampled, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASampled, classe) \
 \
HRESULT __stdcall  TIECATIASampled##classe::get_Object(CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Object(oObject); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASampled##classe::put_Object(CATBaseDispatch * iObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Object(iObject); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASampled##classe::SetObjectKeepingPosition(CATBaseDispatch * iObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetObjectKeepingPosition(iObject); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASampled##classe::get_Handle(CATBaseDispatch *& oHandle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oHandle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Handle(oHandle); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oHandle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASampled##classe::put_Handle(CATBaseDispatch * iHandle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iHandle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Handle(iHandle); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iHandle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASampled##classe::get_Interpolater(CATBSTR *& oInterpolater) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oInterpolater); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Interpolater(oInterpolater); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oInterpolater); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASampled##classe::put_Interpolater(const CATBSTR & iInterpolater) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iInterpolater); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Interpolater(iInterpolater); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iInterpolater); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASampled##classe::get_Time(double & oTime) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oTime); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Time(oTime); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oTime); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASampled##classe::put_Time(double iTime) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iTime); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Time(iTime); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iTime); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASampled##classe::GetTotalDuration(double & oDuration) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oDuration); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTotalDuration(oDuration); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oDuration); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASampled##classe::get_Scaling(double & oScaling) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oScaling); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Scaling(oScaling); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oScaling); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASampled##classe::put_Scaling(double iScaling) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iScaling); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Scaling(iScaling); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iScaling); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASampled##classe::GetKnownInterpolaters(CATSafeArrayVariant & oInterpolaters) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oInterpolaters); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetKnownInterpolaters(oInterpolaters); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oInterpolaters); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASampled##classe::RemoveAnalyses() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAnalyses(); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASampled##classe::BindAnalysis(CATBaseDispatch * iObject, CatSampledAnalysisMode iAnalysisMode, CAT_VARIANT_BOOL iMonitorMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iObject,&iAnalysisMode,&iMonitorMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BindAnalysis(iObject,iAnalysisMode,iMonitorMode); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iObject,&iAnalysisMode,&iMonitorMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASampled##classe::get_Shots(CATIAShots *& oShots) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oShots); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Shots(oShots); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oShots); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASampled##classe::ReverseTime() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReverseTime(); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASampled##classe::Append(const CATSafeArrayVariant & iTracks, CATIASampled *& oResultTrack) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iTracks,&oResultTrack); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Append(iTracks,oResultTrack); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iTracks,&oResultTrack); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASampled##classe::Split(CatSampledSplitType iType, short iIndice) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iType,&iIndice); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Split(iType,iIndice); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iType,&iIndice); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASampled##classe::BreakInheritance() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->BreakInheritance(); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASampled##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASampled##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASampled##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASampled##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASampled##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASampled(classe) \
 \
 \
declare_TIE_CATIASampled(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASampled##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASampled,"CATIASampled",CATIASampled::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASampled(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASampled, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASampled##classe(classe::MetaObject(),CATIASampled::MetaObject(),(void *)CreateTIECATIASampled##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASampled(classe) \
 \
 \
declare_TIE_CATIASampled(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASampled##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASampled,"CATIASampled",CATIASampled::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASampled(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASampled, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASampled##classe(classe::MetaObject(),CATIASampled::MetaObject(),(void *)CreateTIECATIASampled##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASampled(classe) TIE_CATIASampled(classe)
#else
#define BOA_CATIASampled(classe) CATImplementBOA(CATIASampled, classe)
#endif

#endif
