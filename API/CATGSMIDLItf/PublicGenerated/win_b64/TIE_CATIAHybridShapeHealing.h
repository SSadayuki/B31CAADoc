#ifndef __TIE_CATIAHybridShapeHealing
#define __TIE_CATIAHybridShapeHealing

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeHealing.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeHealing */
#define declare_TIE_CATIAHybridShapeHealing(classe) \
 \
 \
class TIECATIAHybridShapeHealing##classe : public CATIAHybridShapeHealing \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeHealing, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_NoOfBodiesToHeal(CATLONG & oNoOfBodies); \
      virtual HRESULT __stdcall get_NoOfElementsToFreeze(CATLONG & oNoOfElements); \
      virtual HRESULT __stdcall get_NoOfEdgesToKeepSharp(CATLONG & oNoOfEdges); \
      virtual HRESULT __stdcall put_Continuity(CATLONG iContinuity); \
      virtual HRESULT __stdcall get_Continuity(CATLONG & oContinuity); \
      virtual HRESULT __stdcall put_CanonicFreeMode(CATLONG iMode); \
      virtual HRESULT __stdcall get_CanonicFreeMode(CATLONG & oMode); \
      virtual HRESULT __stdcall get_MergingDistance(CATIALength *& oMergingDistance); \
      virtual HRESULT __stdcall get_DistanceObjective(CATIALength *& oDistanceObjective); \
      virtual HRESULT __stdcall get_TangencyAngle(CATIAAngle *& oTangencyAngle); \
      virtual HRESULT __stdcall get_TangencyObjective(CATIALength *& oTangencyObjective); \
      virtual HRESULT __stdcall get_SharpnessAngle(CATIAAngle *& oSharpnessAngle); \
      virtual HRESULT __stdcall SetMergingDistance(double iMergingDistance); \
      virtual HRESULT __stdcall SetDistanceObjective(double iDistanceObjective); \
      virtual HRESULT __stdcall SetTangencyAngle(double iTangencyAngle); \
      virtual HRESULT __stdcall SetTangencyObjective(double iTangencyObjective); \
      virtual HRESULT __stdcall AddBodyToHeal(CATIAReference * iBody); \
      virtual HRESULT __stdcall GetBodyToHeal(CATLONG iPosition, CATIAReference *& oBody); \
      virtual HRESULT __stdcall RemoveBodyToHeal(CATLONG iPosition); \
      virtual HRESULT __stdcall AddElementsToFreeze(CATIAReference * iElement); \
      virtual HRESULT __stdcall GetElementToFreeze(CATLONG iPosition, CATIAReference *& oElement); \
      virtual HRESULT __stdcall RemoveElementToFreeze(CATLONG iPosition); \
      virtual HRESULT __stdcall AddEdgeToKeepSharp(CATIAReference * iEdge); \
      virtual HRESULT __stdcall GetEdgeToKeepSharp(CATLONG iPosition, CATIAReference *& oEdge); \
      virtual HRESULT __stdcall RemoveEdgeToKeepSharp(CATLONG iPosition); \
      virtual HRESULT __stdcall SetSharpnessAngle(double iSharpnessAngle); \
      virtual HRESULT __stdcall ReplaceToHealElement(CATLONG iIndex, CATIAReference * iNewHeal); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeHealing(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_NoOfBodiesToHeal(CATLONG & oNoOfBodies); \
virtual HRESULT __stdcall get_NoOfElementsToFreeze(CATLONG & oNoOfElements); \
virtual HRESULT __stdcall get_NoOfEdgesToKeepSharp(CATLONG & oNoOfEdges); \
virtual HRESULT __stdcall put_Continuity(CATLONG iContinuity); \
virtual HRESULT __stdcall get_Continuity(CATLONG & oContinuity); \
virtual HRESULT __stdcall put_CanonicFreeMode(CATLONG iMode); \
virtual HRESULT __stdcall get_CanonicFreeMode(CATLONG & oMode); \
virtual HRESULT __stdcall get_MergingDistance(CATIALength *& oMergingDistance); \
virtual HRESULT __stdcall get_DistanceObjective(CATIALength *& oDistanceObjective); \
virtual HRESULT __stdcall get_TangencyAngle(CATIAAngle *& oTangencyAngle); \
virtual HRESULT __stdcall get_TangencyObjective(CATIALength *& oTangencyObjective); \
virtual HRESULT __stdcall get_SharpnessAngle(CATIAAngle *& oSharpnessAngle); \
virtual HRESULT __stdcall SetMergingDistance(double iMergingDistance); \
virtual HRESULT __stdcall SetDistanceObjective(double iDistanceObjective); \
virtual HRESULT __stdcall SetTangencyAngle(double iTangencyAngle); \
virtual HRESULT __stdcall SetTangencyObjective(double iTangencyObjective); \
virtual HRESULT __stdcall AddBodyToHeal(CATIAReference * iBody); \
virtual HRESULT __stdcall GetBodyToHeal(CATLONG iPosition, CATIAReference *& oBody); \
virtual HRESULT __stdcall RemoveBodyToHeal(CATLONG iPosition); \
virtual HRESULT __stdcall AddElementsToFreeze(CATIAReference * iElement); \
virtual HRESULT __stdcall GetElementToFreeze(CATLONG iPosition, CATIAReference *& oElement); \
virtual HRESULT __stdcall RemoveElementToFreeze(CATLONG iPosition); \
virtual HRESULT __stdcall AddEdgeToKeepSharp(CATIAReference * iEdge); \
virtual HRESULT __stdcall GetEdgeToKeepSharp(CATLONG iPosition, CATIAReference *& oEdge); \
virtual HRESULT __stdcall RemoveEdgeToKeepSharp(CATLONG iPosition); \
virtual HRESULT __stdcall SetSharpnessAngle(double iSharpnessAngle); \
virtual HRESULT __stdcall ReplaceToHealElement(CATLONG iIndex, CATIAReference * iNewHeal); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeHealing(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_NoOfBodiesToHeal(CATLONG & oNoOfBodies) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)get_NoOfBodiesToHeal(oNoOfBodies)); \
} \
HRESULT __stdcall  ENVTIEName::get_NoOfElementsToFreeze(CATLONG & oNoOfElements) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)get_NoOfElementsToFreeze(oNoOfElements)); \
} \
HRESULT __stdcall  ENVTIEName::get_NoOfEdgesToKeepSharp(CATLONG & oNoOfEdges) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)get_NoOfEdgesToKeepSharp(oNoOfEdges)); \
} \
HRESULT __stdcall  ENVTIEName::put_Continuity(CATLONG iContinuity) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)put_Continuity(iContinuity)); \
} \
HRESULT __stdcall  ENVTIEName::get_Continuity(CATLONG & oContinuity) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)get_Continuity(oContinuity)); \
} \
HRESULT __stdcall  ENVTIEName::put_CanonicFreeMode(CATLONG iMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)put_CanonicFreeMode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_CanonicFreeMode(CATLONG & oMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)get_CanonicFreeMode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_MergingDistance(CATIALength *& oMergingDistance) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)get_MergingDistance(oMergingDistance)); \
} \
HRESULT __stdcall  ENVTIEName::get_DistanceObjective(CATIALength *& oDistanceObjective) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)get_DistanceObjective(oDistanceObjective)); \
} \
HRESULT __stdcall  ENVTIEName::get_TangencyAngle(CATIAAngle *& oTangencyAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)get_TangencyAngle(oTangencyAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_TangencyObjective(CATIALength *& oTangencyObjective) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)get_TangencyObjective(oTangencyObjective)); \
} \
HRESULT __stdcall  ENVTIEName::get_SharpnessAngle(CATIAAngle *& oSharpnessAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)get_SharpnessAngle(oSharpnessAngle)); \
} \
HRESULT __stdcall  ENVTIEName::SetMergingDistance(double iMergingDistance) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)SetMergingDistance(iMergingDistance)); \
} \
HRESULT __stdcall  ENVTIEName::SetDistanceObjective(double iDistanceObjective) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)SetDistanceObjective(iDistanceObjective)); \
} \
HRESULT __stdcall  ENVTIEName::SetTangencyAngle(double iTangencyAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)SetTangencyAngle(iTangencyAngle)); \
} \
HRESULT __stdcall  ENVTIEName::SetTangencyObjective(double iTangencyObjective) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)SetTangencyObjective(iTangencyObjective)); \
} \
HRESULT __stdcall  ENVTIEName::AddBodyToHeal(CATIAReference * iBody) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)AddBodyToHeal(iBody)); \
} \
HRESULT __stdcall  ENVTIEName::GetBodyToHeal(CATLONG iPosition, CATIAReference *& oBody) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)GetBodyToHeal(iPosition,oBody)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveBodyToHeal(CATLONG iPosition) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)RemoveBodyToHeal(iPosition)); \
} \
HRESULT __stdcall  ENVTIEName::AddElementsToFreeze(CATIAReference * iElement) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)AddElementsToFreeze(iElement)); \
} \
HRESULT __stdcall  ENVTIEName::GetElementToFreeze(CATLONG iPosition, CATIAReference *& oElement) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)GetElementToFreeze(iPosition,oElement)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveElementToFreeze(CATLONG iPosition) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)RemoveElementToFreeze(iPosition)); \
} \
HRESULT __stdcall  ENVTIEName::AddEdgeToKeepSharp(CATIAReference * iEdge) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)AddEdgeToKeepSharp(iEdge)); \
} \
HRESULT __stdcall  ENVTIEName::GetEdgeToKeepSharp(CATLONG iPosition, CATIAReference *& oEdge) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)GetEdgeToKeepSharp(iPosition,oEdge)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveEdgeToKeepSharp(CATLONG iPosition) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)RemoveEdgeToKeepSharp(iPosition)); \
} \
HRESULT __stdcall  ENVTIEName::SetSharpnessAngle(double iSharpnessAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)SetSharpnessAngle(iSharpnessAngle)); \
} \
HRESULT __stdcall  ENVTIEName::ReplaceToHealElement(CATLONG iIndex, CATIAReference * iNewHeal) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)ReplaceToHealElement(iIndex,iNewHeal)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeHealing,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeHealing(classe)    TIECATIAHybridShapeHealing##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeHealing(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeHealing, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeHealing, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeHealing, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeHealing, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeHealing, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeHealing##classe::get_NoOfBodiesToHeal(CATLONG & oNoOfBodies) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oNoOfBodies); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NoOfBodiesToHeal(oNoOfBodies); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oNoOfBodies); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHealing##classe::get_NoOfElementsToFreeze(CATLONG & oNoOfElements) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oNoOfElements); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NoOfElementsToFreeze(oNoOfElements); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oNoOfElements); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHealing##classe::get_NoOfEdgesToKeepSharp(CATLONG & oNoOfEdges) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oNoOfEdges); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NoOfEdgesToKeepSharp(oNoOfEdges); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oNoOfEdges); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHealing##classe::put_Continuity(CATLONG iContinuity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iContinuity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Continuity(iContinuity); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iContinuity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHealing##classe::get_Continuity(CATLONG & oContinuity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oContinuity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Continuity(oContinuity); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oContinuity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHealing##classe::put_CanonicFreeMode(CATLONG iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CanonicFreeMode(iMode); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHealing##classe::get_CanonicFreeMode(CATLONG & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CanonicFreeMode(oMode); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHealing##classe::get_MergingDistance(CATIALength *& oMergingDistance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oMergingDistance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MergingDistance(oMergingDistance); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oMergingDistance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHealing##classe::get_DistanceObjective(CATIALength *& oDistanceObjective) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oDistanceObjective); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DistanceObjective(oDistanceObjective); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oDistanceObjective); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHealing##classe::get_TangencyAngle(CATIAAngle *& oTangencyAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oTangencyAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TangencyAngle(oTangencyAngle); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oTangencyAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHealing##classe::get_TangencyObjective(CATIALength *& oTangencyObjective) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oTangencyObjective); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TangencyObjective(oTangencyObjective); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oTangencyObjective); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHealing##classe::get_SharpnessAngle(CATIAAngle *& oSharpnessAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oSharpnessAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SharpnessAngle(oSharpnessAngle); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oSharpnessAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHealing##classe::SetMergingDistance(double iMergingDistance) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iMergingDistance); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetMergingDistance(iMergingDistance); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iMergingDistance); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHealing##classe::SetDistanceObjective(double iDistanceObjective) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iDistanceObjective); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDistanceObjective(iDistanceObjective); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iDistanceObjective); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHealing##classe::SetTangencyAngle(double iTangencyAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iTangencyAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTangencyAngle(iTangencyAngle); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iTangencyAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHealing##classe::SetTangencyObjective(double iTangencyObjective) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iTangencyObjective); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTangencyObjective(iTangencyObjective); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iTangencyObjective); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHealing##classe::AddBodyToHeal(CATIAReference * iBody) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iBody); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddBodyToHeal(iBody); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iBody); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHealing##classe::GetBodyToHeal(CATLONG iPosition, CATIAReference *& oBody) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iPosition,&oBody); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBodyToHeal(iPosition,oBody); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iPosition,&oBody); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHealing##classe::RemoveBodyToHeal(CATLONG iPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveBodyToHeal(iPosition); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHealing##classe::AddElementsToFreeze(CATIAReference * iElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddElementsToFreeze(iElement); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHealing##classe::GetElementToFreeze(CATLONG iPosition, CATIAReference *& oElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iPosition,&oElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetElementToFreeze(iPosition,oElement); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iPosition,&oElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHealing##classe::RemoveElementToFreeze(CATLONG iPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveElementToFreeze(iPosition); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHealing##classe::AddEdgeToKeepSharp(CATIAReference * iEdge) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iEdge); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddEdgeToKeepSharp(iEdge); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iEdge); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHealing##classe::GetEdgeToKeepSharp(CATLONG iPosition, CATIAReference *& oEdge) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iPosition,&oEdge); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEdgeToKeepSharp(iPosition,oEdge); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iPosition,&oEdge); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHealing##classe::RemoveEdgeToKeepSharp(CATLONG iPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveEdgeToKeepSharp(iPosition); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHealing##classe::SetSharpnessAngle(double iSharpnessAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iSharpnessAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSharpnessAngle(iSharpnessAngle); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iSharpnessAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHealing##classe::ReplaceToHealElement(CATLONG iIndex, CATIAReference * iNewHeal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iIndex,&iNewHeal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReplaceToHealElement(iIndex,iNewHeal); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iIndex,&iNewHeal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHealing##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHealing##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeHealing##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeHealing##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeHealing##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeHealing##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeHealing##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeHealing##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeHealing(classe) \
 \
 \
declare_TIE_CATIAHybridShapeHealing(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeHealing##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeHealing,"CATIAHybridShapeHealing",CATIAHybridShapeHealing::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeHealing(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeHealing, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeHealing##classe(classe::MetaObject(),CATIAHybridShapeHealing::MetaObject(),(void *)CreateTIECATIAHybridShapeHealing##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeHealing(classe) \
 \
 \
declare_TIE_CATIAHybridShapeHealing(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeHealing##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeHealing,"CATIAHybridShapeHealing",CATIAHybridShapeHealing::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeHealing(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeHealing, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeHealing##classe(classe::MetaObject(),CATIAHybridShapeHealing::MetaObject(),(void *)CreateTIECATIAHybridShapeHealing##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeHealing(classe) TIE_CATIAHybridShapeHealing(classe)
#else
#define BOA_CATIAHybridShapeHealing(classe) CATImplementBOA(CATIAHybridShapeHealing, classe)
#endif

#endif
