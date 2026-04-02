#ifndef __TIE_CATIAHybridShapeWrapCurve
#define __TIE_CATIAHybridShapeWrapCurve

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeWrapCurve.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeWrapCurve */
#define declare_TIE_CATIAHybridShapeWrapCurve(classe) \
 \
 \
class TIECATIAHybridShapeWrapCurve##classe : public CATIAHybridShapeWrapCurve \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeWrapCurve, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Surface(CATIAReference *& oSurface); \
      virtual HRESULT __stdcall put_Surface(CATIAReference * iSurface); \
      virtual HRESULT __stdcall InsertCurves(CATLONG iPosition, CATIAReference * iReferenceCurve, CATIAReference * iTargetCurve); \
      virtual HRESULT __stdcall InsertReferenceCurve(CATLONG iPosition, CATIAReference * iReferenceCurve); \
      virtual HRESULT __stdcall GetNumberOfCurves(CATLONG & oNumberOfCurves); \
      virtual HRESULT __stdcall RemoveCurves(CATLONG iPosition); \
      virtual HRESULT __stdcall GetCurves(CATLONG iPosition, CATIAReference *& oReferenceCurve, CATIAReference *& oTargetCurve); \
      virtual HRESULT __stdcall get_FirstCurvesConstraint(CATLONG & oConstraint); \
      virtual HRESULT __stdcall put_FirstCurvesConstraint(CATLONG iConstraint); \
      virtual HRESULT __stdcall get_LastCurvesConstraint(CATLONG & oConstraint); \
      virtual HRESULT __stdcall put_LastCurvesConstraint(CATLONG iConstraint); \
      virtual HRESULT __stdcall SetReferenceSpine(CATIAReference * iSpine); \
      virtual HRESULT __stdcall GetReferenceSpine(CATLONG & oSpineType, CATIAReference *& oSpine); \
      virtual HRESULT __stdcall SetReferenceDirection(CATIAHybridShapeDirection * iDirection); \
      virtual HRESULT __stdcall GetReferenceDirection(CATLONG & oDirectionType, CATIAHybridShapeDirection *& oDirection); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeWrapCurve(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Surface(CATIAReference *& oSurface); \
virtual HRESULT __stdcall put_Surface(CATIAReference * iSurface); \
virtual HRESULT __stdcall InsertCurves(CATLONG iPosition, CATIAReference * iReferenceCurve, CATIAReference * iTargetCurve); \
virtual HRESULT __stdcall InsertReferenceCurve(CATLONG iPosition, CATIAReference * iReferenceCurve); \
virtual HRESULT __stdcall GetNumberOfCurves(CATLONG & oNumberOfCurves); \
virtual HRESULT __stdcall RemoveCurves(CATLONG iPosition); \
virtual HRESULT __stdcall GetCurves(CATLONG iPosition, CATIAReference *& oReferenceCurve, CATIAReference *& oTargetCurve); \
virtual HRESULT __stdcall get_FirstCurvesConstraint(CATLONG & oConstraint); \
virtual HRESULT __stdcall put_FirstCurvesConstraint(CATLONG iConstraint); \
virtual HRESULT __stdcall get_LastCurvesConstraint(CATLONG & oConstraint); \
virtual HRESULT __stdcall put_LastCurvesConstraint(CATLONG iConstraint); \
virtual HRESULT __stdcall SetReferenceSpine(CATIAReference * iSpine); \
virtual HRESULT __stdcall GetReferenceSpine(CATLONG & oSpineType, CATIAReference *& oSpine); \
virtual HRESULT __stdcall SetReferenceDirection(CATIAHybridShapeDirection * iDirection); \
virtual HRESULT __stdcall GetReferenceDirection(CATLONG & oDirectionType, CATIAHybridShapeDirection *& oDirection); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeWrapCurve(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Surface(CATIAReference *& oSurface) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapCurve,ENVTIETypeLetter,ENVTIELetter)get_Surface(oSurface)); \
} \
HRESULT __stdcall  ENVTIEName::put_Surface(CATIAReference * iSurface) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapCurve,ENVTIETypeLetter,ENVTIELetter)put_Surface(iSurface)); \
} \
HRESULT __stdcall  ENVTIEName::InsertCurves(CATLONG iPosition, CATIAReference * iReferenceCurve, CATIAReference * iTargetCurve) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapCurve,ENVTIETypeLetter,ENVTIELetter)InsertCurves(iPosition,iReferenceCurve,iTargetCurve)); \
} \
HRESULT __stdcall  ENVTIEName::InsertReferenceCurve(CATLONG iPosition, CATIAReference * iReferenceCurve) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapCurve,ENVTIETypeLetter,ENVTIELetter)InsertReferenceCurve(iPosition,iReferenceCurve)); \
} \
HRESULT __stdcall  ENVTIEName::GetNumberOfCurves(CATLONG & oNumberOfCurves) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapCurve,ENVTIETypeLetter,ENVTIELetter)GetNumberOfCurves(oNumberOfCurves)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveCurves(CATLONG iPosition) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapCurve,ENVTIETypeLetter,ENVTIELetter)RemoveCurves(iPosition)); \
} \
HRESULT __stdcall  ENVTIEName::GetCurves(CATLONG iPosition, CATIAReference *& oReferenceCurve, CATIAReference *& oTargetCurve) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapCurve,ENVTIETypeLetter,ENVTIELetter)GetCurves(iPosition,oReferenceCurve,oTargetCurve)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstCurvesConstraint(CATLONG & oConstraint) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapCurve,ENVTIETypeLetter,ENVTIELetter)get_FirstCurvesConstraint(oConstraint)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstCurvesConstraint(CATLONG iConstraint) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapCurve,ENVTIETypeLetter,ENVTIELetter)put_FirstCurvesConstraint(iConstraint)); \
} \
HRESULT __stdcall  ENVTIEName::get_LastCurvesConstraint(CATLONG & oConstraint) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapCurve,ENVTIETypeLetter,ENVTIELetter)get_LastCurvesConstraint(oConstraint)); \
} \
HRESULT __stdcall  ENVTIEName::put_LastCurvesConstraint(CATLONG iConstraint) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapCurve,ENVTIETypeLetter,ENVTIELetter)put_LastCurvesConstraint(iConstraint)); \
} \
HRESULT __stdcall  ENVTIEName::SetReferenceSpine(CATIAReference * iSpine) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapCurve,ENVTIETypeLetter,ENVTIELetter)SetReferenceSpine(iSpine)); \
} \
HRESULT __stdcall  ENVTIEName::GetReferenceSpine(CATLONG & oSpineType, CATIAReference *& oSpine) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapCurve,ENVTIETypeLetter,ENVTIELetter)GetReferenceSpine(oSpineType,oSpine)); \
} \
HRESULT __stdcall  ENVTIEName::SetReferenceDirection(CATIAHybridShapeDirection * iDirection) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapCurve,ENVTIETypeLetter,ENVTIELetter)SetReferenceDirection(iDirection)); \
} \
HRESULT __stdcall  ENVTIEName::GetReferenceDirection(CATLONG & oDirectionType, CATIAHybridShapeDirection *& oDirection) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapCurve,ENVTIETypeLetter,ENVTIELetter)GetReferenceDirection(oDirectionType,oDirection)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapCurve,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapCurve,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapCurve,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapCurve,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapCurve,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapCurve,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapCurve,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapCurve,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeWrapCurve(classe)    TIECATIAHybridShapeWrapCurve##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeWrapCurve(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeWrapCurve, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeWrapCurve, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeWrapCurve, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeWrapCurve, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeWrapCurve, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeWrapCurve##classe::get_Surface(CATIAReference *& oSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Surface(oSurface); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeWrapCurve##classe::put_Surface(CATIAReference * iSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Surface(iSurface); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeWrapCurve##classe::InsertCurves(CATLONG iPosition, CATIAReference * iReferenceCurve, CATIAReference * iTargetCurve) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iPosition,&iReferenceCurve,&iTargetCurve); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InsertCurves(iPosition,iReferenceCurve,iTargetCurve); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iPosition,&iReferenceCurve,&iTargetCurve); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeWrapCurve##classe::InsertReferenceCurve(CATLONG iPosition, CATIAReference * iReferenceCurve) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iPosition,&iReferenceCurve); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InsertReferenceCurve(iPosition,iReferenceCurve); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iPosition,&iReferenceCurve); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeWrapCurve##classe::GetNumberOfCurves(CATLONG & oNumberOfCurves) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNumberOfCurves); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumberOfCurves(oNumberOfCurves); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNumberOfCurves); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeWrapCurve##classe::RemoveCurves(CATLONG iPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveCurves(iPosition); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeWrapCurve##classe::GetCurves(CATLONG iPosition, CATIAReference *& oReferenceCurve, CATIAReference *& oTargetCurve) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iPosition,&oReferenceCurve,&oTargetCurve); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCurves(iPosition,oReferenceCurve,oTargetCurve); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iPosition,&oReferenceCurve,&oTargetCurve); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeWrapCurve##classe::get_FirstCurvesConstraint(CATLONG & oConstraint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oConstraint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstCurvesConstraint(oConstraint); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oConstraint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeWrapCurve##classe::put_FirstCurvesConstraint(CATLONG iConstraint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iConstraint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstCurvesConstraint(iConstraint); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iConstraint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeWrapCurve##classe::get_LastCurvesConstraint(CATLONG & oConstraint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oConstraint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LastCurvesConstraint(oConstraint); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oConstraint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeWrapCurve##classe::put_LastCurvesConstraint(CATLONG iConstraint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iConstraint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LastCurvesConstraint(iConstraint); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iConstraint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeWrapCurve##classe::SetReferenceSpine(CATIAReference * iSpine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iSpine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetReferenceSpine(iSpine); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iSpine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeWrapCurve##classe::GetReferenceSpine(CATLONG & oSpineType, CATIAReference *& oSpine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oSpineType,&oSpine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetReferenceSpine(oSpineType,oSpine); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oSpineType,&oSpine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeWrapCurve##classe::SetReferenceDirection(CATIAHybridShapeDirection * iDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetReferenceDirection(iDirection); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeWrapCurve##classe::GetReferenceDirection(CATLONG & oDirectionType, CATIAHybridShapeDirection *& oDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oDirectionType,&oDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetReferenceDirection(oDirectionType,oDirection); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oDirectionType,&oDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeWrapCurve##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeWrapCurve##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeWrapCurve##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeWrapCurve##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeWrapCurve##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeWrapCurve##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeWrapCurve##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeWrapCurve##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeWrapCurve(classe) \
 \
 \
declare_TIE_CATIAHybridShapeWrapCurve(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeWrapCurve##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeWrapCurve,"CATIAHybridShapeWrapCurve",CATIAHybridShapeWrapCurve::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeWrapCurve(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeWrapCurve, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeWrapCurve##classe(classe::MetaObject(),CATIAHybridShapeWrapCurve::MetaObject(),(void *)CreateTIECATIAHybridShapeWrapCurve##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeWrapCurve(classe) \
 \
 \
declare_TIE_CATIAHybridShapeWrapCurve(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeWrapCurve##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeWrapCurve,"CATIAHybridShapeWrapCurve",CATIAHybridShapeWrapCurve::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeWrapCurve(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeWrapCurve, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeWrapCurve##classe(classe::MetaObject(),CATIAHybridShapeWrapCurve::MetaObject(),(void *)CreateTIECATIAHybridShapeWrapCurve##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeWrapCurve(classe) TIE_CATIAHybridShapeWrapCurve(classe)
#else
#define BOA_CATIAHybridShapeWrapCurve(classe) CATImplementBOA(CATIAHybridShapeWrapCurve, classe)
#endif

#endif
