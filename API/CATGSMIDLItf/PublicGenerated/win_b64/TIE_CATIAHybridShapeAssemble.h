#ifndef __TIE_CATIAHybridShapeAssemble
#define __TIE_CATIAHybridShapeAssemble

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeAssemble.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeAssemble */
#define declare_TIE_CATIAHybridShapeAssemble(classe) \
 \
 \
class TIECATIAHybridShapeAssemble##classe : public CATIAHybridShapeAssemble \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeAssemble, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Invert(CAT_VARIANT_BOOL & oInvert); \
      virtual HRESULT __stdcall put_Invert(CAT_VARIANT_BOOL iInvert); \
      virtual HRESULT __stdcall AddElement(CATIAReference * iElement); \
      virtual HRESULT __stdcall GetElementsSize(CATLONG & oSize); \
      virtual HRESULT __stdcall GetElement(CATLONG iRank, CATIAReference *& oElement); \
      virtual HRESULT __stdcall ReplaceElement(CATLONG iPos, CATIAReference * iElement); \
      virtual HRESULT __stdcall RemoveElement(CATLONG iRank); \
      virtual HRESULT __stdcall GetDeviation(double & odeviation); \
      virtual HRESULT __stdcall SetDeviation(double ideviation); \
      virtual HRESULT __stdcall GetAngularToleranceMode(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall SetAngularToleranceMode(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall GetAngularTolerance(double & oValue); \
      virtual HRESULT __stdcall SetAngularTolerance(double iValue); \
      virtual HRESULT __stdcall GetConnex(CAT_VARIANT_BOOL & oConnex); \
      virtual HRESULT __stdcall SetConnex(CAT_VARIANT_BOOL iConnex); \
      virtual HRESULT __stdcall GetManifold(CAT_VARIANT_BOOL & oManifold); \
      virtual HRESULT __stdcall SetManifold(CAT_VARIANT_BOOL iManifold); \
      virtual HRESULT __stdcall GetTangencyContinuity(CAT_VARIANT_BOOL & oTangencyContinuity); \
      virtual HRESULT __stdcall SetTangencyContinuity(CAT_VARIANT_BOOL iTangencyContinuity); \
      virtual HRESULT __stdcall GetSimplify(CAT_VARIANT_BOOL & oSimplify); \
      virtual HRESULT __stdcall SetSimplify(CAT_VARIANT_BOOL iSimplify); \
      virtual HRESULT __stdcall GetSuppressMode(CAT_VARIANT_BOOL & oSuppressMode); \
      virtual HRESULT __stdcall SetSuppressMode(CAT_VARIANT_BOOL iSuppressMode); \
      virtual HRESULT __stdcall GetFederationPropagation(CATLONG & oMode); \
      virtual HRESULT __stdcall SetFederationPropagation(CATLONG iMode); \
      virtual HRESULT __stdcall GetFederatedElement(CATLONG iRank, CATIAReference *& oElement); \
      virtual HRESULT __stdcall GetFederatedElementsSize(CATLONG & oSize); \
      virtual HRESULT __stdcall AppendFederatedElement(CATIAReference * iElement); \
      virtual HRESULT __stdcall RemoveFederatedElement(CATLONG iRank); \
      virtual HRESULT __stdcall AddSubElement(CATIAReference * iSubElement); \
      virtual HRESULT __stdcall GetSubElementsSize(CATLONG & oSize); \
      virtual HRESULT __stdcall GetSubElement(CATLONG iRank, CATIAReference *& oSubElement); \
      virtual HRESULT __stdcall RemoveSubElement(CATLONG iRank); \
      virtual HRESULT __stdcall GetHealingMode(CAT_VARIANT_BOOL & oHeal); \
      virtual HRESULT __stdcall SetHealingMode(CAT_VARIANT_BOOL iHeal); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeAssemble(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Invert(CAT_VARIANT_BOOL & oInvert); \
virtual HRESULT __stdcall put_Invert(CAT_VARIANT_BOOL iInvert); \
virtual HRESULT __stdcall AddElement(CATIAReference * iElement); \
virtual HRESULT __stdcall GetElementsSize(CATLONG & oSize); \
virtual HRESULT __stdcall GetElement(CATLONG iRank, CATIAReference *& oElement); \
virtual HRESULT __stdcall ReplaceElement(CATLONG iPos, CATIAReference * iElement); \
virtual HRESULT __stdcall RemoveElement(CATLONG iRank); \
virtual HRESULT __stdcall GetDeviation(double & odeviation); \
virtual HRESULT __stdcall SetDeviation(double ideviation); \
virtual HRESULT __stdcall GetAngularToleranceMode(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall SetAngularToleranceMode(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall GetAngularTolerance(double & oValue); \
virtual HRESULT __stdcall SetAngularTolerance(double iValue); \
virtual HRESULT __stdcall GetConnex(CAT_VARIANT_BOOL & oConnex); \
virtual HRESULT __stdcall SetConnex(CAT_VARIANT_BOOL iConnex); \
virtual HRESULT __stdcall GetManifold(CAT_VARIANT_BOOL & oManifold); \
virtual HRESULT __stdcall SetManifold(CAT_VARIANT_BOOL iManifold); \
virtual HRESULT __stdcall GetTangencyContinuity(CAT_VARIANT_BOOL & oTangencyContinuity); \
virtual HRESULT __stdcall SetTangencyContinuity(CAT_VARIANT_BOOL iTangencyContinuity); \
virtual HRESULT __stdcall GetSimplify(CAT_VARIANT_BOOL & oSimplify); \
virtual HRESULT __stdcall SetSimplify(CAT_VARIANT_BOOL iSimplify); \
virtual HRESULT __stdcall GetSuppressMode(CAT_VARIANT_BOOL & oSuppressMode); \
virtual HRESULT __stdcall SetSuppressMode(CAT_VARIANT_BOOL iSuppressMode); \
virtual HRESULT __stdcall GetFederationPropagation(CATLONG & oMode); \
virtual HRESULT __stdcall SetFederationPropagation(CATLONG iMode); \
virtual HRESULT __stdcall GetFederatedElement(CATLONG iRank, CATIAReference *& oElement); \
virtual HRESULT __stdcall GetFederatedElementsSize(CATLONG & oSize); \
virtual HRESULT __stdcall AppendFederatedElement(CATIAReference * iElement); \
virtual HRESULT __stdcall RemoveFederatedElement(CATLONG iRank); \
virtual HRESULT __stdcall AddSubElement(CATIAReference * iSubElement); \
virtual HRESULT __stdcall GetSubElementsSize(CATLONG & oSize); \
virtual HRESULT __stdcall GetSubElement(CATLONG iRank, CATIAReference *& oSubElement); \
virtual HRESULT __stdcall RemoveSubElement(CATLONG iRank); \
virtual HRESULT __stdcall GetHealingMode(CAT_VARIANT_BOOL & oHeal); \
virtual HRESULT __stdcall SetHealingMode(CAT_VARIANT_BOOL iHeal); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeAssemble(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Invert(CAT_VARIANT_BOOL & oInvert) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)get_Invert(oInvert)); \
} \
HRESULT __stdcall  ENVTIEName::put_Invert(CAT_VARIANT_BOOL iInvert) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)put_Invert(iInvert)); \
} \
HRESULT __stdcall  ENVTIEName::AddElement(CATIAReference * iElement) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)AddElement(iElement)); \
} \
HRESULT __stdcall  ENVTIEName::GetElementsSize(CATLONG & oSize) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)GetElementsSize(oSize)); \
} \
HRESULT __stdcall  ENVTIEName::GetElement(CATLONG iRank, CATIAReference *& oElement) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)GetElement(iRank,oElement)); \
} \
HRESULT __stdcall  ENVTIEName::ReplaceElement(CATLONG iPos, CATIAReference * iElement) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)ReplaceElement(iPos,iElement)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveElement(CATLONG iRank) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)RemoveElement(iRank)); \
} \
HRESULT __stdcall  ENVTIEName::GetDeviation(double & odeviation) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)GetDeviation(odeviation)); \
} \
HRESULT __stdcall  ENVTIEName::SetDeviation(double ideviation) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)SetDeviation(ideviation)); \
} \
HRESULT __stdcall  ENVTIEName::GetAngularToleranceMode(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)GetAngularToleranceMode(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetAngularToleranceMode(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)SetAngularToleranceMode(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetAngularTolerance(double & oValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)GetAngularTolerance(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::SetAngularTolerance(double iValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)SetAngularTolerance(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetConnex(CAT_VARIANT_BOOL & oConnex) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)GetConnex(oConnex)); \
} \
HRESULT __stdcall  ENVTIEName::SetConnex(CAT_VARIANT_BOOL iConnex) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)SetConnex(iConnex)); \
} \
HRESULT __stdcall  ENVTIEName::GetManifold(CAT_VARIANT_BOOL & oManifold) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)GetManifold(oManifold)); \
} \
HRESULT __stdcall  ENVTIEName::SetManifold(CAT_VARIANT_BOOL iManifold) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)SetManifold(iManifold)); \
} \
HRESULT __stdcall  ENVTIEName::GetTangencyContinuity(CAT_VARIANT_BOOL & oTangencyContinuity) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)GetTangencyContinuity(oTangencyContinuity)); \
} \
HRESULT __stdcall  ENVTIEName::SetTangencyContinuity(CAT_VARIANT_BOOL iTangencyContinuity) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)SetTangencyContinuity(iTangencyContinuity)); \
} \
HRESULT __stdcall  ENVTIEName::GetSimplify(CAT_VARIANT_BOOL & oSimplify) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)GetSimplify(oSimplify)); \
} \
HRESULT __stdcall  ENVTIEName::SetSimplify(CAT_VARIANT_BOOL iSimplify) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)SetSimplify(iSimplify)); \
} \
HRESULT __stdcall  ENVTIEName::GetSuppressMode(CAT_VARIANT_BOOL & oSuppressMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)GetSuppressMode(oSuppressMode)); \
} \
HRESULT __stdcall  ENVTIEName::SetSuppressMode(CAT_VARIANT_BOOL iSuppressMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)SetSuppressMode(iSuppressMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetFederationPropagation(CATLONG & oMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)GetFederationPropagation(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::SetFederationPropagation(CATLONG iMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)SetFederationPropagation(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetFederatedElement(CATLONG iRank, CATIAReference *& oElement) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)GetFederatedElement(iRank,oElement)); \
} \
HRESULT __stdcall  ENVTIEName::GetFederatedElementsSize(CATLONG & oSize) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)GetFederatedElementsSize(oSize)); \
} \
HRESULT __stdcall  ENVTIEName::AppendFederatedElement(CATIAReference * iElement) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)AppendFederatedElement(iElement)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveFederatedElement(CATLONG iRank) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)RemoveFederatedElement(iRank)); \
} \
HRESULT __stdcall  ENVTIEName::AddSubElement(CATIAReference * iSubElement) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)AddSubElement(iSubElement)); \
} \
HRESULT __stdcall  ENVTIEName::GetSubElementsSize(CATLONG & oSize) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)GetSubElementsSize(oSize)); \
} \
HRESULT __stdcall  ENVTIEName::GetSubElement(CATLONG iRank, CATIAReference *& oSubElement) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)GetSubElement(iRank,oSubElement)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveSubElement(CATLONG iRank) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)RemoveSubElement(iRank)); \
} \
HRESULT __stdcall  ENVTIEName::GetHealingMode(CAT_VARIANT_BOOL & oHeal) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)GetHealingMode(oHeal)); \
} \
HRESULT __stdcall  ENVTIEName::SetHealingMode(CAT_VARIANT_BOOL iHeal) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)SetHealingMode(iHeal)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeAssemble,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeAssemble(classe)    TIECATIAHybridShapeAssemble##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeAssemble(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeAssemble, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeAssemble, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeAssemble, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeAssemble, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeAssemble, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::get_Invert(CAT_VARIANT_BOOL & oInvert) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oInvert); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Invert(oInvert); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oInvert); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::put_Invert(CAT_VARIANT_BOOL iInvert) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iInvert); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Invert(iInvert); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iInvert); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::AddElement(CATIAReference * iElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddElement(iElement); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::GetElementsSize(CATLONG & oSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetElementsSize(oSize); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::GetElement(CATLONG iRank, CATIAReference *& oElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iRank,&oElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetElement(iRank,oElement); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iRank,&oElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::ReplaceElement(CATLONG iPos, CATIAReference * iElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iPos,&iElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReplaceElement(iPos,iElement); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iPos,&iElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::RemoveElement(CATLONG iRank) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iRank); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveElement(iRank); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iRank); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::GetDeviation(double & odeviation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&odeviation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDeviation(odeviation); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&odeviation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::SetDeviation(double ideviation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&ideviation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDeviation(ideviation); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&ideviation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::GetAngularToleranceMode(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAngularToleranceMode(oValue); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::SetAngularToleranceMode(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAngularToleranceMode(iValue); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::GetAngularTolerance(double & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAngularTolerance(oValue); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::SetAngularTolerance(double iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAngularTolerance(iValue); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::GetConnex(CAT_VARIANT_BOOL & oConnex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oConnex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConnex(oConnex); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oConnex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::SetConnex(CAT_VARIANT_BOOL iConnex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iConnex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetConnex(iConnex); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iConnex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::GetManifold(CAT_VARIANT_BOOL & oManifold) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oManifold); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetManifold(oManifold); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oManifold); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::SetManifold(CAT_VARIANT_BOOL iManifold) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iManifold); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetManifold(iManifold); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iManifold); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::GetTangencyContinuity(CAT_VARIANT_BOOL & oTangencyContinuity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oTangencyContinuity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTangencyContinuity(oTangencyContinuity); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oTangencyContinuity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::SetTangencyContinuity(CAT_VARIANT_BOOL iTangencyContinuity) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iTangencyContinuity); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTangencyContinuity(iTangencyContinuity); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iTangencyContinuity); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::GetSimplify(CAT_VARIANT_BOOL & oSimplify) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oSimplify); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSimplify(oSimplify); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oSimplify); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::SetSimplify(CAT_VARIANT_BOOL iSimplify) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iSimplify); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSimplify(iSimplify); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iSimplify); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::GetSuppressMode(CAT_VARIANT_BOOL & oSuppressMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oSuppressMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSuppressMode(oSuppressMode); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oSuppressMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::SetSuppressMode(CAT_VARIANT_BOOL iSuppressMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iSuppressMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSuppressMode(iSuppressMode); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iSuppressMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::GetFederationPropagation(CATLONG & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFederationPropagation(oMode); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::SetFederationPropagation(CATLONG iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFederationPropagation(iMode); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::GetFederatedElement(CATLONG iRank, CATIAReference *& oElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iRank,&oElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFederatedElement(iRank,oElement); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iRank,&oElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::GetFederatedElementsSize(CATLONG & oSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFederatedElementsSize(oSize); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::AppendFederatedElement(CATIAReference * iElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendFederatedElement(iElement); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::RemoveFederatedElement(CATLONG iRank) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iRank); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveFederatedElement(iRank); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iRank); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::AddSubElement(CATIAReference * iSubElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iSubElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddSubElement(iSubElement); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iSubElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::GetSubElementsSize(CATLONG & oSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSubElementsSize(oSize); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::GetSubElement(CATLONG iRank, CATIAReference *& oSubElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iRank,&oSubElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSubElement(iRank,oSubElement); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iRank,&oSubElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::RemoveSubElement(CATLONG iRank) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iRank); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveSubElement(iRank); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iRank); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::GetHealingMode(CAT_VARIANT_BOOL & oHeal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oHeal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetHealingMode(oHeal); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oHeal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::SetHealingMode(CAT_VARIANT_BOOL iHeal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&iHeal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetHealingMode(iHeal); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&iHeal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAssemble##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeAssemble##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeAssemble##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeAssemble##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeAssemble##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeAssemble##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeAssemble(classe) \
 \
 \
declare_TIE_CATIAHybridShapeAssemble(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeAssemble##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeAssemble,"CATIAHybridShapeAssemble",CATIAHybridShapeAssemble::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeAssemble(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeAssemble, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeAssemble##classe(classe::MetaObject(),CATIAHybridShapeAssemble::MetaObject(),(void *)CreateTIECATIAHybridShapeAssemble##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeAssemble(classe) \
 \
 \
declare_TIE_CATIAHybridShapeAssemble(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeAssemble##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeAssemble,"CATIAHybridShapeAssemble",CATIAHybridShapeAssemble::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeAssemble(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeAssemble, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeAssemble##classe(classe::MetaObject(),CATIAHybridShapeAssemble::MetaObject(),(void *)CreateTIECATIAHybridShapeAssemble##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeAssemble(classe) TIE_CATIAHybridShapeAssemble(classe)
#else
#define BOA_CATIAHybridShapeAssemble(classe) CATImplementBOA(CATIAHybridShapeAssemble, classe)
#endif

#endif
