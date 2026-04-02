#ifndef __TIE_CATIAHybridShapeCurveSmooth
#define __TIE_CATIAHybridShapeCurveSmooth

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeCurveSmooth.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeCurveSmooth */
#define declare_TIE_CATIAHybridShapeCurveSmooth(classe) \
 \
 \
class TIECATIAHybridShapeCurveSmooth##classe : public CATIAHybridShapeCurveSmooth \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeCurveSmooth, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_CurveToSmooth(CATIAReference *& opIACurveToSmooth); \
      virtual HRESULT __stdcall put_CurveToSmooth(CATIAReference * ipIACurveToSmooth); \
      virtual HRESULT __stdcall get_Support(CATIAReference *& opIASupport); \
      virtual HRESULT __stdcall put_Support(CATIAReference * ipIASupport); \
      virtual HRESULT __stdcall get_TangencyThreshold(CATIAAngle *& opIATangencyThreshold); \
      virtual HRESULT __stdcall get_CurvatureThreshold(double & oCrvtreThsld); \
      virtual HRESULT __stdcall put_CurvatureThreshold(double iCrvtreThsld); \
      virtual HRESULT __stdcall get_CurvatureThresholdActivity(CAT_VARIANT_BOOL & oCrvtreThsldActivity); \
      virtual HRESULT __stdcall put_CurvatureThresholdActivity(CAT_VARIANT_BOOL iCrvtreThsldActivity); \
      virtual HRESULT __stdcall get_MaximumDeviation(CATIALength *& opIAMaxDeviation); \
      virtual HRESULT __stdcall get_MaximumDeviationActivity(CAT_VARIANT_BOOL & oMaxDevActivity); \
      virtual HRESULT __stdcall put_MaximumDeviationActivity(CAT_VARIANT_BOOL iMaxDevActivity); \
      virtual HRESULT __stdcall get_TopologySimplificationActivity(CAT_VARIANT_BOOL & oTopoSimplActivity); \
      virtual HRESULT __stdcall put_TopologySimplificationActivity(CAT_VARIANT_BOOL iTopoSimplActivity); \
      virtual HRESULT __stdcall get_CorrectionMode(CATLONG & oMode); \
      virtual HRESULT __stdcall put_CorrectionMode(CATLONG iMode); \
      virtual HRESULT __stdcall get_StartExtremityContinuity(CATLONG & oContinuity); \
      virtual HRESULT __stdcall put_StartExtremityContinuity(CATLONG iContinuity); \
      virtual HRESULT __stdcall get_EndExtremityContinuity(CATLONG & oContinuity); \
      virtual HRESULT __stdcall put_EndExtremityContinuity(CATLONG iContinuity); \
      virtual HRESULT __stdcall SetTangencyThreshold(double iTangencyThreshold); \
      virtual HRESULT __stdcall SetMaximumDeviation(double iMaxDeviation); \
      virtual HRESULT __stdcall AddFrozenCurveSegment(CATIAReference * iCurve); \
      virtual HRESULT __stdcall GetFrozenCurveSegmentsSize(CATLONG & oSize); \
      virtual HRESULT __stdcall GetFrozenCurveSegment(CATLONG iPos, CATIAReference *& oCurve); \
      virtual HRESULT __stdcall RemoveFrozenCurveSegment(CATIAReference * iCurve); \
      virtual HRESULT __stdcall RemoveAllFrozenCurveSegments(); \
      virtual HRESULT __stdcall AddFrozenPoint(CATIAReference * iPoint); \
      virtual HRESULT __stdcall GetFrozenPointsSize(CATLONG & oSize); \
      virtual HRESULT __stdcall GetFrozenPoint(CATLONG iPos, CATIAReference *& oPoint); \
      virtual HRESULT __stdcall RemoveFrozenPoint(CATIAReference * iPoint); \
      virtual HRESULT __stdcall RemoveAllFrozenPoints(); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeCurveSmooth(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_CurveToSmooth(CATIAReference *& opIACurveToSmooth); \
virtual HRESULT __stdcall put_CurveToSmooth(CATIAReference * ipIACurveToSmooth); \
virtual HRESULT __stdcall get_Support(CATIAReference *& opIASupport); \
virtual HRESULT __stdcall put_Support(CATIAReference * ipIASupport); \
virtual HRESULT __stdcall get_TangencyThreshold(CATIAAngle *& opIATangencyThreshold); \
virtual HRESULT __stdcall get_CurvatureThreshold(double & oCrvtreThsld); \
virtual HRESULT __stdcall put_CurvatureThreshold(double iCrvtreThsld); \
virtual HRESULT __stdcall get_CurvatureThresholdActivity(CAT_VARIANT_BOOL & oCrvtreThsldActivity); \
virtual HRESULT __stdcall put_CurvatureThresholdActivity(CAT_VARIANT_BOOL iCrvtreThsldActivity); \
virtual HRESULT __stdcall get_MaximumDeviation(CATIALength *& opIAMaxDeviation); \
virtual HRESULT __stdcall get_MaximumDeviationActivity(CAT_VARIANT_BOOL & oMaxDevActivity); \
virtual HRESULT __stdcall put_MaximumDeviationActivity(CAT_VARIANT_BOOL iMaxDevActivity); \
virtual HRESULT __stdcall get_TopologySimplificationActivity(CAT_VARIANT_BOOL & oTopoSimplActivity); \
virtual HRESULT __stdcall put_TopologySimplificationActivity(CAT_VARIANT_BOOL iTopoSimplActivity); \
virtual HRESULT __stdcall get_CorrectionMode(CATLONG & oMode); \
virtual HRESULT __stdcall put_CorrectionMode(CATLONG iMode); \
virtual HRESULT __stdcall get_StartExtremityContinuity(CATLONG & oContinuity); \
virtual HRESULT __stdcall put_StartExtremityContinuity(CATLONG iContinuity); \
virtual HRESULT __stdcall get_EndExtremityContinuity(CATLONG & oContinuity); \
virtual HRESULT __stdcall put_EndExtremityContinuity(CATLONG iContinuity); \
virtual HRESULT __stdcall SetTangencyThreshold(double iTangencyThreshold); \
virtual HRESULT __stdcall SetMaximumDeviation(double iMaxDeviation); \
virtual HRESULT __stdcall AddFrozenCurveSegment(CATIAReference * iCurve); \
virtual HRESULT __stdcall GetFrozenCurveSegmentsSize(CATLONG & oSize); \
virtual HRESULT __stdcall GetFrozenCurveSegment(CATLONG iPos, CATIAReference *& oCurve); \
virtual HRESULT __stdcall RemoveFrozenCurveSegment(CATIAReference * iCurve); \
virtual HRESULT __stdcall RemoveAllFrozenCurveSegments(); \
virtual HRESULT __stdcall AddFrozenPoint(CATIAReference * iPoint); \
virtual HRESULT __stdcall GetFrozenPointsSize(CATLONG & oSize); \
virtual HRESULT __stdcall GetFrozenPoint(CATLONG iPos, CATIAReference *& oPoint); \
virtual HRESULT __stdcall RemoveFrozenPoint(CATIAReference * iPoint); \
virtual HRESULT __stdcall RemoveAllFrozenPoints(); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeCurveSmooth(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_CurveToSmooth(CATIAReference *& opIACurveToSmooth) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)get_CurveToSmooth(opIACurveToSmooth)); \
} \
HRESULT __stdcall  ENVTIEName::put_CurveToSmooth(CATIAReference * ipIACurveToSmooth) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)put_CurveToSmooth(ipIACurveToSmooth)); \
} \
HRESULT __stdcall  ENVTIEName::get_Support(CATIAReference *& opIASupport) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)get_Support(opIASupport)); \
} \
HRESULT __stdcall  ENVTIEName::put_Support(CATIAReference * ipIASupport) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)put_Support(ipIASupport)); \
} \
HRESULT __stdcall  ENVTIEName::get_TangencyThreshold(CATIAAngle *& opIATangencyThreshold) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)get_TangencyThreshold(opIATangencyThreshold)); \
} \
HRESULT __stdcall  ENVTIEName::get_CurvatureThreshold(double & oCrvtreThsld) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)get_CurvatureThreshold(oCrvtreThsld)); \
} \
HRESULT __stdcall  ENVTIEName::put_CurvatureThreshold(double iCrvtreThsld) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)put_CurvatureThreshold(iCrvtreThsld)); \
} \
HRESULT __stdcall  ENVTIEName::get_CurvatureThresholdActivity(CAT_VARIANT_BOOL & oCrvtreThsldActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)get_CurvatureThresholdActivity(oCrvtreThsldActivity)); \
} \
HRESULT __stdcall  ENVTIEName::put_CurvatureThresholdActivity(CAT_VARIANT_BOOL iCrvtreThsldActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)put_CurvatureThresholdActivity(iCrvtreThsldActivity)); \
} \
HRESULT __stdcall  ENVTIEName::get_MaximumDeviation(CATIALength *& opIAMaxDeviation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)get_MaximumDeviation(opIAMaxDeviation)); \
} \
HRESULT __stdcall  ENVTIEName::get_MaximumDeviationActivity(CAT_VARIANT_BOOL & oMaxDevActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)get_MaximumDeviationActivity(oMaxDevActivity)); \
} \
HRESULT __stdcall  ENVTIEName::put_MaximumDeviationActivity(CAT_VARIANT_BOOL iMaxDevActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)put_MaximumDeviationActivity(iMaxDevActivity)); \
} \
HRESULT __stdcall  ENVTIEName::get_TopologySimplificationActivity(CAT_VARIANT_BOOL & oTopoSimplActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)get_TopologySimplificationActivity(oTopoSimplActivity)); \
} \
HRESULT __stdcall  ENVTIEName::put_TopologySimplificationActivity(CAT_VARIANT_BOOL iTopoSimplActivity) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)put_TopologySimplificationActivity(iTopoSimplActivity)); \
} \
HRESULT __stdcall  ENVTIEName::get_CorrectionMode(CATLONG & oMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)get_CorrectionMode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_CorrectionMode(CATLONG iMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)put_CorrectionMode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_StartExtremityContinuity(CATLONG & oContinuity) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)get_StartExtremityContinuity(oContinuity)); \
} \
HRESULT __stdcall  ENVTIEName::put_StartExtremityContinuity(CATLONG iContinuity) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)put_StartExtremityContinuity(iContinuity)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndExtremityContinuity(CATLONG & oContinuity) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)get_EndExtremityContinuity(oContinuity)); \
} \
HRESULT __stdcall  ENVTIEName::put_EndExtremityContinuity(CATLONG iContinuity) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)put_EndExtremityContinuity(iContinuity)); \
} \
HRESULT __stdcall  ENVTIEName::SetTangencyThreshold(double iTangencyThreshold) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)SetTangencyThreshold(iTangencyThreshold)); \
} \
HRESULT __stdcall  ENVTIEName::SetMaximumDeviation(double iMaxDeviation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)SetMaximumDeviation(iMaxDeviation)); \
} \
HRESULT __stdcall  ENVTIEName::AddFrozenCurveSegment(CATIAReference * iCurve) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)AddFrozenCurveSegment(iCurve)); \
} \
HRESULT __stdcall  ENVTIEName::GetFrozenCurveSegmentsSize(CATLONG & oSize) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)GetFrozenCurveSegmentsSize(oSize)); \
} \
HRESULT __stdcall  ENVTIEName::GetFrozenCurveSegment(CATLONG iPos, CATIAReference *& oCurve) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)GetFrozenCurveSegment(iPos,oCurve)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveFrozenCurveSegment(CATIAReference * iCurve) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)RemoveFrozenCurveSegment(iCurve)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAllFrozenCurveSegments() \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)RemoveAllFrozenCurveSegments()); \
} \
HRESULT __stdcall  ENVTIEName::AddFrozenPoint(CATIAReference * iPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)AddFrozenPoint(iPoint)); \
} \
HRESULT __stdcall  ENVTIEName::GetFrozenPointsSize(CATLONG & oSize) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)GetFrozenPointsSize(oSize)); \
} \
HRESULT __stdcall  ENVTIEName::GetFrozenPoint(CATLONG iPos, CATIAReference *& oPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)GetFrozenPoint(iPos,oPoint)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveFrozenPoint(CATIAReference * iPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)RemoveFrozenPoint(iPoint)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAllFrozenPoints() \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)RemoveAllFrozenPoints()); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurveSmooth,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeCurveSmooth(classe)    TIECATIAHybridShapeCurveSmooth##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeCurveSmooth(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeCurveSmooth, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeCurveSmooth, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeCurveSmooth, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeCurveSmooth, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeCurveSmooth, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::get_CurveToSmooth(CATIAReference *& opIACurveToSmooth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&opIACurveToSmooth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CurveToSmooth(opIACurveToSmooth); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&opIACurveToSmooth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::put_CurveToSmooth(CATIAReference * ipIACurveToSmooth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&ipIACurveToSmooth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CurveToSmooth(ipIACurveToSmooth); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&ipIACurveToSmooth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::get_Support(CATIAReference *& opIASupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&opIASupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Support(opIASupport); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&opIASupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::put_Support(CATIAReference * ipIASupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&ipIASupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Support(ipIASupport); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&ipIASupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::get_TangencyThreshold(CATIAAngle *& opIATangencyThreshold) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&opIATangencyThreshold); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TangencyThreshold(opIATangencyThreshold); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&opIATangencyThreshold); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::get_CurvatureThreshold(double & oCrvtreThsld) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oCrvtreThsld); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CurvatureThreshold(oCrvtreThsld); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oCrvtreThsld); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::put_CurvatureThreshold(double iCrvtreThsld) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iCrvtreThsld); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CurvatureThreshold(iCrvtreThsld); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iCrvtreThsld); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::get_CurvatureThresholdActivity(CAT_VARIANT_BOOL & oCrvtreThsldActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oCrvtreThsldActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CurvatureThresholdActivity(oCrvtreThsldActivity); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oCrvtreThsldActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::put_CurvatureThresholdActivity(CAT_VARIANT_BOOL iCrvtreThsldActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iCrvtreThsldActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CurvatureThresholdActivity(iCrvtreThsldActivity); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iCrvtreThsldActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::get_MaximumDeviation(CATIALength *& opIAMaxDeviation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&opIAMaxDeviation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MaximumDeviation(opIAMaxDeviation); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&opIAMaxDeviation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::get_MaximumDeviationActivity(CAT_VARIANT_BOOL & oMaxDevActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oMaxDevActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MaximumDeviationActivity(oMaxDevActivity); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oMaxDevActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::put_MaximumDeviationActivity(CAT_VARIANT_BOOL iMaxDevActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iMaxDevActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MaximumDeviationActivity(iMaxDevActivity); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iMaxDevActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::get_TopologySimplificationActivity(CAT_VARIANT_BOOL & oTopoSimplActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oTopoSimplActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TopologySimplificationActivity(oTopoSimplActivity); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oTopoSimplActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::put_TopologySimplificationActivity(CAT_VARIANT_BOOL iTopoSimplActivity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iTopoSimplActivity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TopologySimplificationActivity(iTopoSimplActivity); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iTopoSimplActivity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::get_CorrectionMode(CATLONG & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CorrectionMode(oMode); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::put_CorrectionMode(CATLONG iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CorrectionMode(iMode); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::get_StartExtremityContinuity(CATLONG & oContinuity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oContinuity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StartExtremityContinuity(oContinuity); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oContinuity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::put_StartExtremityContinuity(CATLONG iContinuity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iContinuity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_StartExtremityContinuity(iContinuity); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iContinuity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::get_EndExtremityContinuity(CATLONG & oContinuity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oContinuity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndExtremityContinuity(oContinuity); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oContinuity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::put_EndExtremityContinuity(CATLONG iContinuity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iContinuity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_EndExtremityContinuity(iContinuity); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iContinuity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::SetTangencyThreshold(double iTangencyThreshold) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iTangencyThreshold); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTangencyThreshold(iTangencyThreshold); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iTangencyThreshold); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::SetMaximumDeviation(double iMaxDeviation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iMaxDeviation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMaximumDeviation(iMaxDeviation); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iMaxDeviation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::AddFrozenCurveSegment(CATIAReference * iCurve) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iCurve); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddFrozenCurveSegment(iCurve); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iCurve); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::GetFrozenCurveSegmentsSize(CATLONG & oSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFrozenCurveSegmentsSize(oSize); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::GetFrozenCurveSegment(CATLONG iPos, CATIAReference *& oCurve) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iPos,&oCurve); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFrozenCurveSegment(iPos,oCurve); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iPos,&oCurve); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::RemoveFrozenCurveSegment(CATIAReference * iCurve) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iCurve); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveFrozenCurveSegment(iCurve); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iCurve); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::RemoveAllFrozenCurveSegments() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAllFrozenCurveSegments(); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::AddFrozenPoint(CATIAReference * iPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddFrozenPoint(iPoint); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::GetFrozenPointsSize(CATLONG & oSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFrozenPointsSize(oSize); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::GetFrozenPoint(CATLONG iPos, CATIAReference *& oPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iPos,&oPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFrozenPoint(iPos,oPoint); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iPos,&oPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::RemoveFrozenPoint(CATIAReference * iPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveFrozenPoint(iPoint); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::RemoveAllFrozenPoints() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAllFrozenPoints(); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurveSmooth##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCurveSmooth##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCurveSmooth##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCurveSmooth##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCurveSmooth##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCurveSmooth##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeCurveSmooth(classe) \
 \
 \
declare_TIE_CATIAHybridShapeCurveSmooth(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeCurveSmooth##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeCurveSmooth,"CATIAHybridShapeCurveSmooth",CATIAHybridShapeCurveSmooth::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeCurveSmooth(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeCurveSmooth, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeCurveSmooth##classe(classe::MetaObject(),CATIAHybridShapeCurveSmooth::MetaObject(),(void *)CreateTIECATIAHybridShapeCurveSmooth##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeCurveSmooth(classe) \
 \
 \
declare_TIE_CATIAHybridShapeCurveSmooth(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeCurveSmooth##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeCurveSmooth,"CATIAHybridShapeCurveSmooth",CATIAHybridShapeCurveSmooth::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeCurveSmooth(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeCurveSmooth, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeCurveSmooth##classe(classe::MetaObject(),CATIAHybridShapeCurveSmooth::MetaObject(),(void *)CreateTIECATIAHybridShapeCurveSmooth##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeCurveSmooth(classe) TIE_CATIAHybridShapeCurveSmooth(classe)
#else
#define BOA_CATIAHybridShapeCurveSmooth(classe) CATImplementBOA(CATIAHybridShapeCurveSmooth, classe)
#endif

#endif
