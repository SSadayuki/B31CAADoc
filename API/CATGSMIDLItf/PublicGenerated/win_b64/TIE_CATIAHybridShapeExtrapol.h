#ifndef __TIE_CATIAHybridShapeExtrapol
#define __TIE_CATIAHybridShapeExtrapol

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeExtrapol.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeExtrapol */
#define declare_TIE_CATIAHybridShapeExtrapol(classe) \
 \
 \
class TIECATIAHybridShapeExtrapol##classe : public CATIAHybridShapeExtrapol \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeExtrapol, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ElemToExtrapol(CATIAReference *& oElemToExtrapol); \
      virtual HRESULT __stdcall put_ElemToExtrapol(CATIAReference * iElemToExtrapol); \
      virtual HRESULT __stdcall GetNumberOfExtrapolations(CATLONG & oNumberOfExtrapolations); \
      virtual HRESULT __stdcall RemoveExtrapolation(CATLONG iPos); \
      virtual HRESULT __stdcall RemoveAllExtrapolationsExceptTheFirstOne(); \
      virtual HRESULT __stdcall get_Boundary(CATIAReference *& oBoundary); \
      virtual HRESULT __stdcall put_Boundary(CATIAReference * iBoundary); \
      virtual HRESULT __stdcall GetBoundary(CATLONG iPos, CATIAReference *& oBoundary); \
      virtual HRESULT __stdcall SetBoundary(CATLONG iPos, CATIAReference * iBoundary); \
      virtual HRESULT __stdcall get_ElemUntil(CATIAReference *& oElemUntil); \
      virtual HRESULT __stdcall put_ElemUntil(CATIAReference * iElemUntil); \
      virtual HRESULT __stdcall GetElemUntil(CATLONG iPos, CATIAReference *& oElemUntil); \
      virtual HRESULT __stdcall SetElemUntil(CATLONG iPos, CATIAReference * iElemUntil); \
      virtual HRESULT __stdcall get_Length(CATIALength *& oLength); \
      virtual HRESULT __stdcall GetLength(CATLONG iPos, CATIALength *& oLength); \
      virtual HRESULT __stdcall SetLengthD(CATLONG iPos, double iLength); \
      virtual HRESULT __stdcall SetLength(CATLONG iPos, CATIALength * iLength); \
      virtual HRESULT __stdcall get_LimitType(CATLONG & oLim); \
      virtual HRESULT __stdcall put_LimitType(CATLONG iLim); \
      virtual HRESULT __stdcall GetLimitType(CATLONG iPos, CATLONG & oLim); \
      virtual HRESULT __stdcall SetLimitType(CATLONG iPos, CATLONG iLim); \
      virtual HRESULT __stdcall get_ContinuityType(CATLONG & oLim); \
      virtual HRESULT __stdcall put_ContinuityType(CATLONG iLim); \
      virtual HRESULT __stdcall GetContinuityType(CATLONG iPos, CATLONG & oLim); \
      virtual HRESULT __stdcall SetContinuityType(CATLONG iPos, CATLONG iLim); \
      virtual HRESULT __stdcall get_BorderType(CATLONG & oBorder); \
      virtual HRESULT __stdcall put_BorderType(CATLONG iBorder); \
      virtual HRESULT __stdcall IsAssemble(CAT_VARIANT_BOOL & oAssemble); \
      virtual HRESULT __stdcall SetAssemble(CAT_VARIANT_BOOL iAssemble); \
      virtual HRESULT __stdcall get_Support(CATIAReference *& oSupport); \
      virtual HRESULT __stdcall put_Support(CATIAReference * iSupport); \
      virtual HRESULT __stdcall get_PropagationMode(CATLONG & oPropagationMode); \
      virtual HRESULT __stdcall put_PropagationMode(CATLONG iPropagationMode); \
      virtual HRESULT __stdcall GetInternalEdgesElement(CATLONG iPos, CATIAReference *& oInternalElement); \
      virtual HRESULT __stdcall RemoveAllInternalEdgesElement(); \
      virtual HRESULT __stdcall get_ExtendEdgesMode(CAT_VARIANT_BOOL & oExtendMode); \
      virtual HRESULT __stdcall put_ExtendEdgesMode(CAT_VARIANT_BOOL iExtendMode); \
      virtual HRESULT __stdcall get_ConstantLengthMode(CAT_VARIANT_BOOL & oConstantLengthMode); \
      virtual HRESULT __stdcall put_ConstantLengthMode(CAT_VARIANT_BOOL iConstantLengthMode); \
      virtual HRESULT __stdcall get_ExtrapolBothSidesIdentically(CAT_VARIANT_BOOL & oExtrapolBothSidesIdentically); \
      virtual HRESULT __stdcall put_ExtrapolBothSidesIdentically(CAT_VARIANT_BOOL iExtrapolBothSidesIdentically); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeExtrapol(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ElemToExtrapol(CATIAReference *& oElemToExtrapol); \
virtual HRESULT __stdcall put_ElemToExtrapol(CATIAReference * iElemToExtrapol); \
virtual HRESULT __stdcall GetNumberOfExtrapolations(CATLONG & oNumberOfExtrapolations); \
virtual HRESULT __stdcall RemoveExtrapolation(CATLONG iPos); \
virtual HRESULT __stdcall RemoveAllExtrapolationsExceptTheFirstOne(); \
virtual HRESULT __stdcall get_Boundary(CATIAReference *& oBoundary); \
virtual HRESULT __stdcall put_Boundary(CATIAReference * iBoundary); \
virtual HRESULT __stdcall GetBoundary(CATLONG iPos, CATIAReference *& oBoundary); \
virtual HRESULT __stdcall SetBoundary(CATLONG iPos, CATIAReference * iBoundary); \
virtual HRESULT __stdcall get_ElemUntil(CATIAReference *& oElemUntil); \
virtual HRESULT __stdcall put_ElemUntil(CATIAReference * iElemUntil); \
virtual HRESULT __stdcall GetElemUntil(CATLONG iPos, CATIAReference *& oElemUntil); \
virtual HRESULT __stdcall SetElemUntil(CATLONG iPos, CATIAReference * iElemUntil); \
virtual HRESULT __stdcall get_Length(CATIALength *& oLength); \
virtual HRESULT __stdcall GetLength(CATLONG iPos, CATIALength *& oLength); \
virtual HRESULT __stdcall SetLengthD(CATLONG iPos, double iLength); \
virtual HRESULT __stdcall SetLength(CATLONG iPos, CATIALength * iLength); \
virtual HRESULT __stdcall get_LimitType(CATLONG & oLim); \
virtual HRESULT __stdcall put_LimitType(CATLONG iLim); \
virtual HRESULT __stdcall GetLimitType(CATLONG iPos, CATLONG & oLim); \
virtual HRESULT __stdcall SetLimitType(CATLONG iPos, CATLONG iLim); \
virtual HRESULT __stdcall get_ContinuityType(CATLONG & oLim); \
virtual HRESULT __stdcall put_ContinuityType(CATLONG iLim); \
virtual HRESULT __stdcall GetContinuityType(CATLONG iPos, CATLONG & oLim); \
virtual HRESULT __stdcall SetContinuityType(CATLONG iPos, CATLONG iLim); \
virtual HRESULT __stdcall get_BorderType(CATLONG & oBorder); \
virtual HRESULT __stdcall put_BorderType(CATLONG iBorder); \
virtual HRESULT __stdcall IsAssemble(CAT_VARIANT_BOOL & oAssemble); \
virtual HRESULT __stdcall SetAssemble(CAT_VARIANT_BOOL iAssemble); \
virtual HRESULT __stdcall get_Support(CATIAReference *& oSupport); \
virtual HRESULT __stdcall put_Support(CATIAReference * iSupport); \
virtual HRESULT __stdcall get_PropagationMode(CATLONG & oPropagationMode); \
virtual HRESULT __stdcall put_PropagationMode(CATLONG iPropagationMode); \
virtual HRESULT __stdcall GetInternalEdgesElement(CATLONG iPos, CATIAReference *& oInternalElement); \
virtual HRESULT __stdcall RemoveAllInternalEdgesElement(); \
virtual HRESULT __stdcall get_ExtendEdgesMode(CAT_VARIANT_BOOL & oExtendMode); \
virtual HRESULT __stdcall put_ExtendEdgesMode(CAT_VARIANT_BOOL iExtendMode); \
virtual HRESULT __stdcall get_ConstantLengthMode(CAT_VARIANT_BOOL & oConstantLengthMode); \
virtual HRESULT __stdcall put_ConstantLengthMode(CAT_VARIANT_BOOL iConstantLengthMode); \
virtual HRESULT __stdcall get_ExtrapolBothSidesIdentically(CAT_VARIANT_BOOL & oExtrapolBothSidesIdentically); \
virtual HRESULT __stdcall put_ExtrapolBothSidesIdentically(CAT_VARIANT_BOOL iExtrapolBothSidesIdentically); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeExtrapol(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ElemToExtrapol(CATIAReference *& oElemToExtrapol) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)get_ElemToExtrapol(oElemToExtrapol)); \
} \
HRESULT __stdcall  ENVTIEName::put_ElemToExtrapol(CATIAReference * iElemToExtrapol) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)put_ElemToExtrapol(iElemToExtrapol)); \
} \
HRESULT __stdcall  ENVTIEName::GetNumberOfExtrapolations(CATLONG & oNumberOfExtrapolations) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)GetNumberOfExtrapolations(oNumberOfExtrapolations)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveExtrapolation(CATLONG iPos) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)RemoveExtrapolation(iPos)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAllExtrapolationsExceptTheFirstOne() \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)RemoveAllExtrapolationsExceptTheFirstOne()); \
} \
HRESULT __stdcall  ENVTIEName::get_Boundary(CATIAReference *& oBoundary) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)get_Boundary(oBoundary)); \
} \
HRESULT __stdcall  ENVTIEName::put_Boundary(CATIAReference * iBoundary) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)put_Boundary(iBoundary)); \
} \
HRESULT __stdcall  ENVTIEName::GetBoundary(CATLONG iPos, CATIAReference *& oBoundary) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)GetBoundary(iPos,oBoundary)); \
} \
HRESULT __stdcall  ENVTIEName::SetBoundary(CATLONG iPos, CATIAReference * iBoundary) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)SetBoundary(iPos,iBoundary)); \
} \
HRESULT __stdcall  ENVTIEName::get_ElemUntil(CATIAReference *& oElemUntil) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)get_ElemUntil(oElemUntil)); \
} \
HRESULT __stdcall  ENVTIEName::put_ElemUntil(CATIAReference * iElemUntil) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)put_ElemUntil(iElemUntil)); \
} \
HRESULT __stdcall  ENVTIEName::GetElemUntil(CATLONG iPos, CATIAReference *& oElemUntil) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)GetElemUntil(iPos,oElemUntil)); \
} \
HRESULT __stdcall  ENVTIEName::SetElemUntil(CATLONG iPos, CATIAReference * iElemUntil) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)SetElemUntil(iPos,iElemUntil)); \
} \
HRESULT __stdcall  ENVTIEName::get_Length(CATIALength *& oLength) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)get_Length(oLength)); \
} \
HRESULT __stdcall  ENVTIEName::GetLength(CATLONG iPos, CATIALength *& oLength) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)GetLength(iPos,oLength)); \
} \
HRESULT __stdcall  ENVTIEName::SetLengthD(CATLONG iPos, double iLength) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)SetLengthD(iPos,iLength)); \
} \
HRESULT __stdcall  ENVTIEName::SetLength(CATLONG iPos, CATIALength * iLength) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)SetLength(iPos,iLength)); \
} \
HRESULT __stdcall  ENVTIEName::get_LimitType(CATLONG & oLim) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)get_LimitType(oLim)); \
} \
HRESULT __stdcall  ENVTIEName::put_LimitType(CATLONG iLim) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)put_LimitType(iLim)); \
} \
HRESULT __stdcall  ENVTIEName::GetLimitType(CATLONG iPos, CATLONG & oLim) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)GetLimitType(iPos,oLim)); \
} \
HRESULT __stdcall  ENVTIEName::SetLimitType(CATLONG iPos, CATLONG iLim) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)SetLimitType(iPos,iLim)); \
} \
HRESULT __stdcall  ENVTIEName::get_ContinuityType(CATLONG & oLim) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)get_ContinuityType(oLim)); \
} \
HRESULT __stdcall  ENVTIEName::put_ContinuityType(CATLONG iLim) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)put_ContinuityType(iLim)); \
} \
HRESULT __stdcall  ENVTIEName::GetContinuityType(CATLONG iPos, CATLONG & oLim) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)GetContinuityType(iPos,oLim)); \
} \
HRESULT __stdcall  ENVTIEName::SetContinuityType(CATLONG iPos, CATLONG iLim) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)SetContinuityType(iPos,iLim)); \
} \
HRESULT __stdcall  ENVTIEName::get_BorderType(CATLONG & oBorder) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)get_BorderType(oBorder)); \
} \
HRESULT __stdcall  ENVTIEName::put_BorderType(CATLONG iBorder) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)put_BorderType(iBorder)); \
} \
HRESULT __stdcall  ENVTIEName::IsAssemble(CAT_VARIANT_BOOL & oAssemble) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)IsAssemble(oAssemble)); \
} \
HRESULT __stdcall  ENVTIEName::SetAssemble(CAT_VARIANT_BOOL iAssemble) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)SetAssemble(iAssemble)); \
} \
HRESULT __stdcall  ENVTIEName::get_Support(CATIAReference *& oSupport) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)get_Support(oSupport)); \
} \
HRESULT __stdcall  ENVTIEName::put_Support(CATIAReference * iSupport) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)put_Support(iSupport)); \
} \
HRESULT __stdcall  ENVTIEName::get_PropagationMode(CATLONG & oPropagationMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)get_PropagationMode(oPropagationMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_PropagationMode(CATLONG iPropagationMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)put_PropagationMode(iPropagationMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetInternalEdgesElement(CATLONG iPos, CATIAReference *& oInternalElement) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)GetInternalEdgesElement(iPos,oInternalElement)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAllInternalEdgesElement() \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)RemoveAllInternalEdgesElement()); \
} \
HRESULT __stdcall  ENVTIEName::get_ExtendEdgesMode(CAT_VARIANT_BOOL & oExtendMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)get_ExtendEdgesMode(oExtendMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_ExtendEdgesMode(CAT_VARIANT_BOOL iExtendMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)put_ExtendEdgesMode(iExtendMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_ConstantLengthMode(CAT_VARIANT_BOOL & oConstantLengthMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)get_ConstantLengthMode(oConstantLengthMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_ConstantLengthMode(CAT_VARIANT_BOOL iConstantLengthMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)put_ConstantLengthMode(iConstantLengthMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_ExtrapolBothSidesIdentically(CAT_VARIANT_BOOL & oExtrapolBothSidesIdentically) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)get_ExtrapolBothSidesIdentically(oExtrapolBothSidesIdentically)); \
} \
HRESULT __stdcall  ENVTIEName::put_ExtrapolBothSidesIdentically(CAT_VARIANT_BOOL iExtrapolBothSidesIdentically) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)put_ExtrapolBothSidesIdentically(iExtrapolBothSidesIdentically)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrapol,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeExtrapol(classe)    TIECATIAHybridShapeExtrapol##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeExtrapol(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeExtrapol, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeExtrapol, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeExtrapol, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeExtrapol, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeExtrapol, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::get_ElemToExtrapol(CATIAReference *& oElemToExtrapol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oElemToExtrapol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ElemToExtrapol(oElemToExtrapol); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oElemToExtrapol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::put_ElemToExtrapol(CATIAReference * iElemToExtrapol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iElemToExtrapol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ElemToExtrapol(iElemToExtrapol); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iElemToExtrapol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::GetNumberOfExtrapolations(CATLONG & oNumberOfExtrapolations) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oNumberOfExtrapolations); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumberOfExtrapolations(oNumberOfExtrapolations); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oNumberOfExtrapolations); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::RemoveExtrapolation(CATLONG iPos) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iPos); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveExtrapolation(iPos); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iPos); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::RemoveAllExtrapolationsExceptTheFirstOne() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAllExtrapolationsExceptTheFirstOne(); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::get_Boundary(CATIAReference *& oBoundary) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oBoundary); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Boundary(oBoundary); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oBoundary); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::put_Boundary(CATIAReference * iBoundary) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iBoundary); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Boundary(iBoundary); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iBoundary); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::GetBoundary(CATLONG iPos, CATIAReference *& oBoundary) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iPos,&oBoundary); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBoundary(iPos,oBoundary); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iPos,&oBoundary); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::SetBoundary(CATLONG iPos, CATIAReference * iBoundary) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iPos,&iBoundary); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBoundary(iPos,iBoundary); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iPos,&iBoundary); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::get_ElemUntil(CATIAReference *& oElemUntil) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oElemUntil); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ElemUntil(oElemUntil); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oElemUntil); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::put_ElemUntil(CATIAReference * iElemUntil) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iElemUntil); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ElemUntil(iElemUntil); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iElemUntil); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::GetElemUntil(CATLONG iPos, CATIAReference *& oElemUntil) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iPos,&oElemUntil); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetElemUntil(iPos,oElemUntil); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iPos,&oElemUntil); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::SetElemUntil(CATLONG iPos, CATIAReference * iElemUntil) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iPos,&iElemUntil); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetElemUntil(iPos,iElemUntil); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iPos,&iElemUntil); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::get_Length(CATIALength *& oLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Length(oLength); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::GetLength(CATLONG iPos, CATIALength *& oLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iPos,&oLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLength(iPos,oLength); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iPos,&oLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::SetLengthD(CATLONG iPos, double iLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iPos,&iLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLengthD(iPos,iLength); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iPos,&iLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::SetLength(CATLONG iPos, CATIALength * iLength) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iPos,&iLength); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLength(iPos,iLength); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iPos,&iLength); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::get_LimitType(CATLONG & oLim) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oLim); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LimitType(oLim); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oLim); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::put_LimitType(CATLONG iLim) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iLim); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LimitType(iLim); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iLim); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::GetLimitType(CATLONG iPos, CATLONG & oLim) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iPos,&oLim); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLimitType(iPos,oLim); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iPos,&oLim); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::SetLimitType(CATLONG iPos, CATLONG iLim) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iPos,&iLim); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLimitType(iPos,iLim); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iPos,&iLim); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::get_ContinuityType(CATLONG & oLim) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oLim); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ContinuityType(oLim); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oLim); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::put_ContinuityType(CATLONG iLim) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iLim); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ContinuityType(iLim); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iLim); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::GetContinuityType(CATLONG iPos, CATLONG & oLim) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iPos,&oLim); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetContinuityType(iPos,oLim); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iPos,&oLim); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::SetContinuityType(CATLONG iPos, CATLONG iLim) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iPos,&iLim); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetContinuityType(iPos,iLim); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iPos,&iLim); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::get_BorderType(CATLONG & oBorder) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oBorder); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BorderType(oBorder); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oBorder); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::put_BorderType(CATLONG iBorder) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iBorder); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BorderType(iBorder); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iBorder); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::IsAssemble(CAT_VARIANT_BOOL & oAssemble) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oAssemble); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAssemble(oAssemble); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oAssemble); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::SetAssemble(CAT_VARIANT_BOOL iAssemble) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iAssemble); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAssemble(iAssemble); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iAssemble); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::get_Support(CATIAReference *& oSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Support(oSupport); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::put_Support(CATIAReference * iSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Support(iSupport); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::get_PropagationMode(CATLONG & oPropagationMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oPropagationMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PropagationMode(oPropagationMode); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oPropagationMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::put_PropagationMode(CATLONG iPropagationMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iPropagationMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PropagationMode(iPropagationMode); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iPropagationMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::GetInternalEdgesElement(CATLONG iPos, CATIAReference *& oInternalElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iPos,&oInternalElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInternalEdgesElement(iPos,oInternalElement); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iPos,&oInternalElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::RemoveAllInternalEdgesElement() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAllInternalEdgesElement(); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::get_ExtendEdgesMode(CAT_VARIANT_BOOL & oExtendMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&oExtendMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExtendEdgesMode(oExtendMode); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&oExtendMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::put_ExtendEdgesMode(CAT_VARIANT_BOOL iExtendMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&iExtendMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ExtendEdgesMode(iExtendMode); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&iExtendMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::get_ConstantLengthMode(CAT_VARIANT_BOOL & oConstantLengthMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&oConstantLengthMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ConstantLengthMode(oConstantLengthMode); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&oConstantLengthMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::put_ConstantLengthMode(CAT_VARIANT_BOOL iConstantLengthMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&iConstantLengthMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ConstantLengthMode(iConstantLengthMode); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&iConstantLengthMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::get_ExtrapolBothSidesIdentically(CAT_VARIANT_BOOL & oExtrapolBothSidesIdentically) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&oExtrapolBothSidesIdentically); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExtrapolBothSidesIdentically(oExtrapolBothSidesIdentically); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&oExtrapolBothSidesIdentically); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::put_ExtrapolBothSidesIdentically(CAT_VARIANT_BOOL iExtrapolBothSidesIdentically) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&iExtrapolBothSidesIdentically); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ExtrapolBothSidesIdentically(iExtrapolBothSidesIdentically); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&iExtrapolBothSidesIdentically); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrapol##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeExtrapol##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeExtrapol##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeExtrapol##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeExtrapol##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeExtrapol##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeExtrapol(classe) \
 \
 \
declare_TIE_CATIAHybridShapeExtrapol(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeExtrapol##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeExtrapol,"CATIAHybridShapeExtrapol",CATIAHybridShapeExtrapol::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeExtrapol(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeExtrapol, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeExtrapol##classe(classe::MetaObject(),CATIAHybridShapeExtrapol::MetaObject(),(void *)CreateTIECATIAHybridShapeExtrapol##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeExtrapol(classe) \
 \
 \
declare_TIE_CATIAHybridShapeExtrapol(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeExtrapol##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeExtrapol,"CATIAHybridShapeExtrapol",CATIAHybridShapeExtrapol::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeExtrapol(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeExtrapol, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeExtrapol##classe(classe::MetaObject(),CATIAHybridShapeExtrapol::MetaObject(),(void *)CreateTIECATIAHybridShapeExtrapol##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeExtrapol(classe) TIE_CATIAHybridShapeExtrapol(classe)
#else
#define BOA_CATIAHybridShapeExtrapol(classe) CATImplementBOA(CATIAHybridShapeExtrapol, classe)
#endif

#endif
