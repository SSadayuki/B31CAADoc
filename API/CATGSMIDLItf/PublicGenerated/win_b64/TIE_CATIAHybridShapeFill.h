#ifndef __TIE_CATIAHybridShapeFill
#define __TIE_CATIAHybridShapeFill

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeFill.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeFill */
#define declare_TIE_CATIAHybridShapeFill(classe) \
 \
 \
class TIECATIAHybridShapeFill##classe : public CATIAHybridShapeFill \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeFill, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Detection(short & oDetection); \
      virtual HRESULT __stdcall put_Detection(short iDetection); \
      virtual HRESULT __stdcall get_Continuity(CATLONG & oContinuity); \
      virtual HRESULT __stdcall put_Continuity(CATLONG iContinuity); \
      virtual HRESULT __stdcall get_Constraint(CATIAReference *& oConstraint); \
      virtual HRESULT __stdcall put_Constraint(CATIAReference * iConstraint); \
      virtual HRESULT __stdcall get_PlaneOnlyMode(CAT_VARIANT_BOOL & oPlaneOnly); \
      virtual HRESULT __stdcall put_PlaneOnlyMode(CAT_VARIANT_BOOL iPlaneOnly); \
      virtual HRESULT __stdcall get_TolerantMode(CAT_VARIANT_BOOL & oTolerantMode); \
      virtual HRESULT __stdcall put_TolerantMode(CAT_VARIANT_BOOL iTolerantMode); \
      virtual HRESULT __stdcall get_MaximumDeviationValue(double & oDevValue); \
      virtual HRESULT __stdcall put_MaximumDeviationValue(double iDevValue); \
      virtual HRESULT __stdcall AddBound(CATIAReference * iBoundary); \
      virtual HRESULT __stdcall InsertBoundAfterPosition(CATIAReference * iBoundary, CATLONG iPos); \
      virtual HRESULT __stdcall GetBoundPosition(CATIAReference * iBoundary, CATLONG & oPos); \
      virtual HRESULT __stdcall GetBoundAtPosition(CATLONG iPos, CATIAReference *& oBoundary); \
      virtual HRESULT __stdcall RemoveBoundAtPosition(CATLONG iPos); \
      virtual HRESULT __stdcall RemoveAllBound(); \
      virtual HRESULT __stdcall ReplaceBoundAtPosition(CATIAReference * iBoundary, CATLONG iPos); \
      virtual HRESULT __stdcall GetBoundSize(CATLONG & oSize); \
      virtual HRESULT __stdcall AddSupportAtBound(CATIAReference * iBoundary, CATIAReference * iSupport); \
      virtual HRESULT __stdcall GetSupportAtPosition(CATLONG iPos, CATIAReference *& oSupport); \
      virtual HRESULT __stdcall RemoveSupportAtPosition(CATLONG iPos); \
      virtual HRESULT __stdcall ReplaceSupportAtPosition(CATIAReference * iSupport, CATLONG iPos); \
      virtual HRESULT __stdcall SetBoundaryContinuity(CATLONG iContinuity, CATLONG iPos); \
      virtual HRESULT __stdcall GetBoundaryContinuity(CATLONG iPos, CATLONG & oContinuity); \
      virtual HRESULT __stdcall GetConstraintsSize(CATLONG & oSize); \
      virtual HRESULT __stdcall GetConstraintAtPosition(CATLONG iPos, CATIAReference *& oConstraint); \
      virtual HRESULT __stdcall AppendConstraint(CATIAReference * iConstraint); \
      virtual HRESULT __stdcall RemoveConstraint(CATLONG iPos); \
      virtual HRESULT __stdcall ReplaceConstraint(CATLONG iPos, CATIAReference * iConstraint); \
      virtual HRESULT __stdcall RemoveAllConstraints(); \
      virtual HRESULT __stdcall get_AdvancedTolerantMode(CATLONG & oMode); \
      virtual HRESULT __stdcall put_AdvancedTolerantMode(CATLONG iMode); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeFill(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Detection(short & oDetection); \
virtual HRESULT __stdcall put_Detection(short iDetection); \
virtual HRESULT __stdcall get_Continuity(CATLONG & oContinuity); \
virtual HRESULT __stdcall put_Continuity(CATLONG iContinuity); \
virtual HRESULT __stdcall get_Constraint(CATIAReference *& oConstraint); \
virtual HRESULT __stdcall put_Constraint(CATIAReference * iConstraint); \
virtual HRESULT __stdcall get_PlaneOnlyMode(CAT_VARIANT_BOOL & oPlaneOnly); \
virtual HRESULT __stdcall put_PlaneOnlyMode(CAT_VARIANT_BOOL iPlaneOnly); \
virtual HRESULT __stdcall get_TolerantMode(CAT_VARIANT_BOOL & oTolerantMode); \
virtual HRESULT __stdcall put_TolerantMode(CAT_VARIANT_BOOL iTolerantMode); \
virtual HRESULT __stdcall get_MaximumDeviationValue(double & oDevValue); \
virtual HRESULT __stdcall put_MaximumDeviationValue(double iDevValue); \
virtual HRESULT __stdcall AddBound(CATIAReference * iBoundary); \
virtual HRESULT __stdcall InsertBoundAfterPosition(CATIAReference * iBoundary, CATLONG iPos); \
virtual HRESULT __stdcall GetBoundPosition(CATIAReference * iBoundary, CATLONG & oPos); \
virtual HRESULT __stdcall GetBoundAtPosition(CATLONG iPos, CATIAReference *& oBoundary); \
virtual HRESULT __stdcall RemoveBoundAtPosition(CATLONG iPos); \
virtual HRESULT __stdcall RemoveAllBound(); \
virtual HRESULT __stdcall ReplaceBoundAtPosition(CATIAReference * iBoundary, CATLONG iPos); \
virtual HRESULT __stdcall GetBoundSize(CATLONG & oSize); \
virtual HRESULT __stdcall AddSupportAtBound(CATIAReference * iBoundary, CATIAReference * iSupport); \
virtual HRESULT __stdcall GetSupportAtPosition(CATLONG iPos, CATIAReference *& oSupport); \
virtual HRESULT __stdcall RemoveSupportAtPosition(CATLONG iPos); \
virtual HRESULT __stdcall ReplaceSupportAtPosition(CATIAReference * iSupport, CATLONG iPos); \
virtual HRESULT __stdcall SetBoundaryContinuity(CATLONG iContinuity, CATLONG iPos); \
virtual HRESULT __stdcall GetBoundaryContinuity(CATLONG iPos, CATLONG & oContinuity); \
virtual HRESULT __stdcall GetConstraintsSize(CATLONG & oSize); \
virtual HRESULT __stdcall GetConstraintAtPosition(CATLONG iPos, CATIAReference *& oConstraint); \
virtual HRESULT __stdcall AppendConstraint(CATIAReference * iConstraint); \
virtual HRESULT __stdcall RemoveConstraint(CATLONG iPos); \
virtual HRESULT __stdcall ReplaceConstraint(CATLONG iPos, CATIAReference * iConstraint); \
virtual HRESULT __stdcall RemoveAllConstraints(); \
virtual HRESULT __stdcall get_AdvancedTolerantMode(CATLONG & oMode); \
virtual HRESULT __stdcall put_AdvancedTolerantMode(CATLONG iMode); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeFill(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Detection(short & oDetection) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)get_Detection(oDetection)); \
} \
HRESULT __stdcall  ENVTIEName::put_Detection(short iDetection) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)put_Detection(iDetection)); \
} \
HRESULT __stdcall  ENVTIEName::get_Continuity(CATLONG & oContinuity) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)get_Continuity(oContinuity)); \
} \
HRESULT __stdcall  ENVTIEName::put_Continuity(CATLONG iContinuity) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)put_Continuity(iContinuity)); \
} \
HRESULT __stdcall  ENVTIEName::get_Constraint(CATIAReference *& oConstraint) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)get_Constraint(oConstraint)); \
} \
HRESULT __stdcall  ENVTIEName::put_Constraint(CATIAReference * iConstraint) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)put_Constraint(iConstraint)); \
} \
HRESULT __stdcall  ENVTIEName::get_PlaneOnlyMode(CAT_VARIANT_BOOL & oPlaneOnly) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)get_PlaneOnlyMode(oPlaneOnly)); \
} \
HRESULT __stdcall  ENVTIEName::put_PlaneOnlyMode(CAT_VARIANT_BOOL iPlaneOnly) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)put_PlaneOnlyMode(iPlaneOnly)); \
} \
HRESULT __stdcall  ENVTIEName::get_TolerantMode(CAT_VARIANT_BOOL & oTolerantMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)get_TolerantMode(oTolerantMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_TolerantMode(CAT_VARIANT_BOOL iTolerantMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)put_TolerantMode(iTolerantMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_MaximumDeviationValue(double & oDevValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)get_MaximumDeviationValue(oDevValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_MaximumDeviationValue(double iDevValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)put_MaximumDeviationValue(iDevValue)); \
} \
HRESULT __stdcall  ENVTIEName::AddBound(CATIAReference * iBoundary) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)AddBound(iBoundary)); \
} \
HRESULT __stdcall  ENVTIEName::InsertBoundAfterPosition(CATIAReference * iBoundary, CATLONG iPos) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)InsertBoundAfterPosition(iBoundary,iPos)); \
} \
HRESULT __stdcall  ENVTIEName::GetBoundPosition(CATIAReference * iBoundary, CATLONG & oPos) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)GetBoundPosition(iBoundary,oPos)); \
} \
HRESULT __stdcall  ENVTIEName::GetBoundAtPosition(CATLONG iPos, CATIAReference *& oBoundary) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)GetBoundAtPosition(iPos,oBoundary)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveBoundAtPosition(CATLONG iPos) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)RemoveBoundAtPosition(iPos)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAllBound() \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)RemoveAllBound()); \
} \
HRESULT __stdcall  ENVTIEName::ReplaceBoundAtPosition(CATIAReference * iBoundary, CATLONG iPos) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)ReplaceBoundAtPosition(iBoundary,iPos)); \
} \
HRESULT __stdcall  ENVTIEName::GetBoundSize(CATLONG & oSize) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)GetBoundSize(oSize)); \
} \
HRESULT __stdcall  ENVTIEName::AddSupportAtBound(CATIAReference * iBoundary, CATIAReference * iSupport) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)AddSupportAtBound(iBoundary,iSupport)); \
} \
HRESULT __stdcall  ENVTIEName::GetSupportAtPosition(CATLONG iPos, CATIAReference *& oSupport) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)GetSupportAtPosition(iPos,oSupport)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveSupportAtPosition(CATLONG iPos) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)RemoveSupportAtPosition(iPos)); \
} \
HRESULT __stdcall  ENVTIEName::ReplaceSupportAtPosition(CATIAReference * iSupport, CATLONG iPos) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)ReplaceSupportAtPosition(iSupport,iPos)); \
} \
HRESULT __stdcall  ENVTIEName::SetBoundaryContinuity(CATLONG iContinuity, CATLONG iPos) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)SetBoundaryContinuity(iContinuity,iPos)); \
} \
HRESULT __stdcall  ENVTIEName::GetBoundaryContinuity(CATLONG iPos, CATLONG & oContinuity) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)GetBoundaryContinuity(iPos,oContinuity)); \
} \
HRESULT __stdcall  ENVTIEName::GetConstraintsSize(CATLONG & oSize) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)GetConstraintsSize(oSize)); \
} \
HRESULT __stdcall  ENVTIEName::GetConstraintAtPosition(CATLONG iPos, CATIAReference *& oConstraint) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)GetConstraintAtPosition(iPos,oConstraint)); \
} \
HRESULT __stdcall  ENVTIEName::AppendConstraint(CATIAReference * iConstraint) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)AppendConstraint(iConstraint)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveConstraint(CATLONG iPos) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)RemoveConstraint(iPos)); \
} \
HRESULT __stdcall  ENVTIEName::ReplaceConstraint(CATLONG iPos, CATIAReference * iConstraint) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)ReplaceConstraint(iPos,iConstraint)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAllConstraints() \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)RemoveAllConstraints()); \
} \
HRESULT __stdcall  ENVTIEName::get_AdvancedTolerantMode(CATLONG & oMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)get_AdvancedTolerantMode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_AdvancedTolerantMode(CATLONG iMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)put_AdvancedTolerantMode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeFill,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeFill(classe)    TIECATIAHybridShapeFill##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeFill(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeFill, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeFill, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeFill, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeFill, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeFill, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::get_Detection(short & oDetection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oDetection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Detection(oDetection); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oDetection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::put_Detection(short iDetection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iDetection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Detection(iDetection); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iDetection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::get_Continuity(CATLONG & oContinuity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oContinuity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Continuity(oContinuity); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oContinuity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::put_Continuity(CATLONG iContinuity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iContinuity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Continuity(iContinuity); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iContinuity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::get_Constraint(CATIAReference *& oConstraint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oConstraint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Constraint(oConstraint); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oConstraint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::put_Constraint(CATIAReference * iConstraint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iConstraint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Constraint(iConstraint); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iConstraint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::get_PlaneOnlyMode(CAT_VARIANT_BOOL & oPlaneOnly) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oPlaneOnly); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PlaneOnlyMode(oPlaneOnly); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oPlaneOnly); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::put_PlaneOnlyMode(CAT_VARIANT_BOOL iPlaneOnly) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iPlaneOnly); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PlaneOnlyMode(iPlaneOnly); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iPlaneOnly); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::get_TolerantMode(CAT_VARIANT_BOOL & oTolerantMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oTolerantMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TolerantMode(oTolerantMode); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oTolerantMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::put_TolerantMode(CAT_VARIANT_BOOL iTolerantMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iTolerantMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TolerantMode(iTolerantMode); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iTolerantMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::get_MaximumDeviationValue(double & oDevValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oDevValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MaximumDeviationValue(oDevValue); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oDevValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::put_MaximumDeviationValue(double iDevValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iDevValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MaximumDeviationValue(iDevValue); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iDevValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::AddBound(CATIAReference * iBoundary) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iBoundary); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddBound(iBoundary); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iBoundary); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::InsertBoundAfterPosition(CATIAReference * iBoundary, CATLONG iPos) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iBoundary,&iPos); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InsertBoundAfterPosition(iBoundary,iPos); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iBoundary,&iPos); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::GetBoundPosition(CATIAReference * iBoundary, CATLONG & oPos) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iBoundary,&oPos); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBoundPosition(iBoundary,oPos); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iBoundary,&oPos); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::GetBoundAtPosition(CATLONG iPos, CATIAReference *& oBoundary) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iPos,&oBoundary); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBoundAtPosition(iPos,oBoundary); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iPos,&oBoundary); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::RemoveBoundAtPosition(CATLONG iPos) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iPos); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveBoundAtPosition(iPos); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iPos); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::RemoveAllBound() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAllBound(); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::ReplaceBoundAtPosition(CATIAReference * iBoundary, CATLONG iPos) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iBoundary,&iPos); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReplaceBoundAtPosition(iBoundary,iPos); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iBoundary,&iPos); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::GetBoundSize(CATLONG & oSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBoundSize(oSize); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::AddSupportAtBound(CATIAReference * iBoundary, CATIAReference * iSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iBoundary,&iSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddSupportAtBound(iBoundary,iSupport); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iBoundary,&iSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::GetSupportAtPosition(CATLONG iPos, CATIAReference *& oSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iPos,&oSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSupportAtPosition(iPos,oSupport); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iPos,&oSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::RemoveSupportAtPosition(CATLONG iPos) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iPos); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveSupportAtPosition(iPos); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iPos); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::ReplaceSupportAtPosition(CATIAReference * iSupport, CATLONG iPos) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iSupport,&iPos); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReplaceSupportAtPosition(iSupport,iPos); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iSupport,&iPos); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::SetBoundaryContinuity(CATLONG iContinuity, CATLONG iPos) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iContinuity,&iPos); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBoundaryContinuity(iContinuity,iPos); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iContinuity,&iPos); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::GetBoundaryContinuity(CATLONG iPos, CATLONG & oContinuity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iPos,&oContinuity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBoundaryContinuity(iPos,oContinuity); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iPos,&oContinuity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::GetConstraintsSize(CATLONG & oSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConstraintsSize(oSize); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::GetConstraintAtPosition(CATLONG iPos, CATIAReference *& oConstraint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iPos,&oConstraint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConstraintAtPosition(iPos,oConstraint); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iPos,&oConstraint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::AppendConstraint(CATIAReference * iConstraint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iConstraint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendConstraint(iConstraint); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iConstraint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::RemoveConstraint(CATLONG iPos) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iPos); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveConstraint(iPos); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iPos); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::ReplaceConstraint(CATLONG iPos, CATIAReference * iConstraint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iPos,&iConstraint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReplaceConstraint(iPos,iConstraint); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iPos,&iConstraint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::RemoveAllConstraints() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAllConstraints(); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::get_AdvancedTolerantMode(CATLONG & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AdvancedTolerantMode(oMode); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::put_AdvancedTolerantMode(CATLONG iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AdvancedTolerantMode(iMode); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFill##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeFill##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeFill##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeFill##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeFill##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeFill##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeFill(classe) \
 \
 \
declare_TIE_CATIAHybridShapeFill(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeFill##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeFill,"CATIAHybridShapeFill",CATIAHybridShapeFill::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeFill(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeFill, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeFill##classe(classe::MetaObject(),CATIAHybridShapeFill::MetaObject(),(void *)CreateTIECATIAHybridShapeFill##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeFill(classe) \
 \
 \
declare_TIE_CATIAHybridShapeFill(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeFill##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeFill,"CATIAHybridShapeFill",CATIAHybridShapeFill::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeFill(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeFill, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeFill##classe(classe::MetaObject(),CATIAHybridShapeFill::MetaObject(),(void *)CreateTIECATIAHybridShapeFill##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeFill(classe) TIE_CATIAHybridShapeFill(classe)
#else
#define BOA_CATIAHybridShapeFill(classe) CATImplementBOA(CATIAHybridShapeFill, classe)
#endif

#endif
