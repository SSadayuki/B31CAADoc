#ifndef __TIE_CATIAHybridShapeSpline
#define __TIE_CATIAHybridShapeSpline

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeSpline.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeSpline */
#define declare_TIE_CATIAHybridShapeSpline(classe) \
 \
 \
class TIECATIAHybridShapeSpline##classe : public CATIAHybridShapeSpline \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeSpline, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall RemoveControlPoint(CATLONG iPos); \
      virtual HRESULT __stdcall GetNbControlPoint(CATLONG & oNbCtrPt); \
      virtual HRESULT __stdcall AddPoint(CATIAReference * ipIAPoint); \
      virtual HRESULT __stdcall AddPointWithConstraintExplicit(CATIAReference * ipIAPoint, CATIAHybridShapeDirection * ipIADirTangency, double iTangencyNorm, CATLONG iInverseTangency, CATIAHybridShapeDirection * ipIADirCurvature, double iCurvatureRadius); \
      virtual HRESULT __stdcall AddPointWithConstraintFromCurve(CATIAReference * ipIAPoint, CATIAReference * ipIACurveCst, double iTangencyNorm, CATLONG iInvertValue, CATLONG iCrvCstType); \
      virtual HRESULT __stdcall GetConstraintType(CATLONG iPos, CATLONG & oCstType); \
      virtual HRESULT __stdcall GetPointPosition(CATIAReference * ipIAPoint, CATLONG & oPos); \
      virtual HRESULT __stdcall GetPoint(CATLONG iPos, CATIAReference *& opIAPoint); \
      virtual HRESULT __stdcall SetPointAfter(CATLONG iPos, CATIAReference * ipIAPoint); \
      virtual HRESULT __stdcall SetPointBefore(CATLONG iPos, CATIAReference * ipIAPoint); \
      virtual HRESULT __stdcall GetPointConstraintExplicit(CATLONG iPos, CATIAHybridShapeDirection *& opIADirTangency, double & oTangencyNorm, CATLONG & oInverseTangency, CATIAHybridShapeDirection *& opIADirCurvature, double & oCurvatureRadius); \
      virtual HRESULT __stdcall SetPointConstraintExplicit(CATLONG iPos, CATIAHybridShapeDirection * ipIADirTangency, double iTangencyNorm, CATLONG iInverseTangency, CATIAHybridShapeDirection * ipIADirCurvature, double iCurvatureRadius); \
      virtual HRESULT __stdcall GetPointConstraintFromCurve(CATLONG iPos, CATIAReference *& opIACurveCst, double & oTangencyNorm, CATLONG & oInvertValue, CATLONG & oCrvCstType); \
      virtual HRESULT __stdcall SetPointConstraintFromCurve(CATLONG iPos, CATIAReference * ipIACurveCst, double iTangencyNorm, CATLONG iInvertValue, CATLONG iCrvCstType); \
      virtual HRESULT __stdcall SetSplineType(CATLONG iSplineType); \
      virtual HRESULT __stdcall SetClosing(CATLONG iClosingType); \
      virtual HRESULT __stdcall SetSupport(CATIAReference * iSupport); \
      virtual HRESULT __stdcall GetTangentNorm(CATLONG iPos, CATIARealParam *& oTension); \
      virtual HRESULT __stdcall GetCurvatureRadius(CATLONG iPos, CATIALength *& oRadius); \
      virtual HRESULT __stdcall GetClosure(CATLONG & oClosed); \
      virtual HRESULT __stdcall GetSplineType(CATLONG & oType); \
      virtual HRESULT __stdcall GetSupport(CATIAReference *& oSupport); \
      virtual HRESULT __stdcall RemoveAll(); \
      virtual HRESULT __stdcall RemoveSupport(); \
      virtual HRESULT __stdcall ReplacePointAtPosition(CATLONG iPos, CATIAReference * iPoint); \
      virtual HRESULT __stdcall RemoveTangentDirection(CATLONG iPos); \
      virtual HRESULT __stdcall RemoveTension(CATLONG iPos); \
      virtual HRESULT __stdcall RemoveCurvatureRadiusDirection(CATLONG iPos); \
      virtual HRESULT __stdcall RemoveCurvatureRadiusValue(CATLONG iPos); \
      virtual HRESULT __stdcall InvertDirection(CATLONG iPos); \
      virtual HRESULT __stdcall GetDirectionInversion(CATLONG iPos, CATLONG & oInvertFlag); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeSpline(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall RemoveControlPoint(CATLONG iPos); \
virtual HRESULT __stdcall GetNbControlPoint(CATLONG & oNbCtrPt); \
virtual HRESULT __stdcall AddPoint(CATIAReference * ipIAPoint); \
virtual HRESULT __stdcall AddPointWithConstraintExplicit(CATIAReference * ipIAPoint, CATIAHybridShapeDirection * ipIADirTangency, double iTangencyNorm, CATLONG iInverseTangency, CATIAHybridShapeDirection * ipIADirCurvature, double iCurvatureRadius); \
virtual HRESULT __stdcall AddPointWithConstraintFromCurve(CATIAReference * ipIAPoint, CATIAReference * ipIACurveCst, double iTangencyNorm, CATLONG iInvertValue, CATLONG iCrvCstType); \
virtual HRESULT __stdcall GetConstraintType(CATLONG iPos, CATLONG & oCstType); \
virtual HRESULT __stdcall GetPointPosition(CATIAReference * ipIAPoint, CATLONG & oPos); \
virtual HRESULT __stdcall GetPoint(CATLONG iPos, CATIAReference *& opIAPoint); \
virtual HRESULT __stdcall SetPointAfter(CATLONG iPos, CATIAReference * ipIAPoint); \
virtual HRESULT __stdcall SetPointBefore(CATLONG iPos, CATIAReference * ipIAPoint); \
virtual HRESULT __stdcall GetPointConstraintExplicit(CATLONG iPos, CATIAHybridShapeDirection *& opIADirTangency, double & oTangencyNorm, CATLONG & oInverseTangency, CATIAHybridShapeDirection *& opIADirCurvature, double & oCurvatureRadius); \
virtual HRESULT __stdcall SetPointConstraintExplicit(CATLONG iPos, CATIAHybridShapeDirection * ipIADirTangency, double iTangencyNorm, CATLONG iInverseTangency, CATIAHybridShapeDirection * ipIADirCurvature, double iCurvatureRadius); \
virtual HRESULT __stdcall GetPointConstraintFromCurve(CATLONG iPos, CATIAReference *& opIACurveCst, double & oTangencyNorm, CATLONG & oInvertValue, CATLONG & oCrvCstType); \
virtual HRESULT __stdcall SetPointConstraintFromCurve(CATLONG iPos, CATIAReference * ipIACurveCst, double iTangencyNorm, CATLONG iInvertValue, CATLONG iCrvCstType); \
virtual HRESULT __stdcall SetSplineType(CATLONG iSplineType); \
virtual HRESULT __stdcall SetClosing(CATLONG iClosingType); \
virtual HRESULT __stdcall SetSupport(CATIAReference * iSupport); \
virtual HRESULT __stdcall GetTangentNorm(CATLONG iPos, CATIARealParam *& oTension); \
virtual HRESULT __stdcall GetCurvatureRadius(CATLONG iPos, CATIALength *& oRadius); \
virtual HRESULT __stdcall GetClosure(CATLONG & oClosed); \
virtual HRESULT __stdcall GetSplineType(CATLONG & oType); \
virtual HRESULT __stdcall GetSupport(CATIAReference *& oSupport); \
virtual HRESULT __stdcall RemoveAll(); \
virtual HRESULT __stdcall RemoveSupport(); \
virtual HRESULT __stdcall ReplacePointAtPosition(CATLONG iPos, CATIAReference * iPoint); \
virtual HRESULT __stdcall RemoveTangentDirection(CATLONG iPos); \
virtual HRESULT __stdcall RemoveTension(CATLONG iPos); \
virtual HRESULT __stdcall RemoveCurvatureRadiusDirection(CATLONG iPos); \
virtual HRESULT __stdcall RemoveCurvatureRadiusValue(CATLONG iPos); \
virtual HRESULT __stdcall InvertDirection(CATLONG iPos); \
virtual HRESULT __stdcall GetDirectionInversion(CATLONG iPos, CATLONG & oInvertFlag); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeSpline(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::RemoveControlPoint(CATLONG iPos) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)RemoveControlPoint(iPos)); \
} \
HRESULT __stdcall  ENVTIEName::GetNbControlPoint(CATLONG & oNbCtrPt) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)GetNbControlPoint(oNbCtrPt)); \
} \
HRESULT __stdcall  ENVTIEName::AddPoint(CATIAReference * ipIAPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)AddPoint(ipIAPoint)); \
} \
HRESULT __stdcall  ENVTIEName::AddPointWithConstraintExplicit(CATIAReference * ipIAPoint, CATIAHybridShapeDirection * ipIADirTangency, double iTangencyNorm, CATLONG iInverseTangency, CATIAHybridShapeDirection * ipIADirCurvature, double iCurvatureRadius) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)AddPointWithConstraintExplicit(ipIAPoint,ipIADirTangency,iTangencyNorm,iInverseTangency,ipIADirCurvature,iCurvatureRadius)); \
} \
HRESULT __stdcall  ENVTIEName::AddPointWithConstraintFromCurve(CATIAReference * ipIAPoint, CATIAReference * ipIACurveCst, double iTangencyNorm, CATLONG iInvertValue, CATLONG iCrvCstType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)AddPointWithConstraintFromCurve(ipIAPoint,ipIACurveCst,iTangencyNorm,iInvertValue,iCrvCstType)); \
} \
HRESULT __stdcall  ENVTIEName::GetConstraintType(CATLONG iPos, CATLONG & oCstType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)GetConstraintType(iPos,oCstType)); \
} \
HRESULT __stdcall  ENVTIEName::GetPointPosition(CATIAReference * ipIAPoint, CATLONG & oPos) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)GetPointPosition(ipIAPoint,oPos)); \
} \
HRESULT __stdcall  ENVTIEName::GetPoint(CATLONG iPos, CATIAReference *& opIAPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)GetPoint(iPos,opIAPoint)); \
} \
HRESULT __stdcall  ENVTIEName::SetPointAfter(CATLONG iPos, CATIAReference * ipIAPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)SetPointAfter(iPos,ipIAPoint)); \
} \
HRESULT __stdcall  ENVTIEName::SetPointBefore(CATLONG iPos, CATIAReference * ipIAPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)SetPointBefore(iPos,ipIAPoint)); \
} \
HRESULT __stdcall  ENVTIEName::GetPointConstraintExplicit(CATLONG iPos, CATIAHybridShapeDirection *& opIADirTangency, double & oTangencyNorm, CATLONG & oInverseTangency, CATIAHybridShapeDirection *& opIADirCurvature, double & oCurvatureRadius) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)GetPointConstraintExplicit(iPos,opIADirTangency,oTangencyNorm,oInverseTangency,opIADirCurvature,oCurvatureRadius)); \
} \
HRESULT __stdcall  ENVTIEName::SetPointConstraintExplicit(CATLONG iPos, CATIAHybridShapeDirection * ipIADirTangency, double iTangencyNorm, CATLONG iInverseTangency, CATIAHybridShapeDirection * ipIADirCurvature, double iCurvatureRadius) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)SetPointConstraintExplicit(iPos,ipIADirTangency,iTangencyNorm,iInverseTangency,ipIADirCurvature,iCurvatureRadius)); \
} \
HRESULT __stdcall  ENVTIEName::GetPointConstraintFromCurve(CATLONG iPos, CATIAReference *& opIACurveCst, double & oTangencyNorm, CATLONG & oInvertValue, CATLONG & oCrvCstType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)GetPointConstraintFromCurve(iPos,opIACurveCst,oTangencyNorm,oInvertValue,oCrvCstType)); \
} \
HRESULT __stdcall  ENVTIEName::SetPointConstraintFromCurve(CATLONG iPos, CATIAReference * ipIACurveCst, double iTangencyNorm, CATLONG iInvertValue, CATLONG iCrvCstType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)SetPointConstraintFromCurve(iPos,ipIACurveCst,iTangencyNorm,iInvertValue,iCrvCstType)); \
} \
HRESULT __stdcall  ENVTIEName::SetSplineType(CATLONG iSplineType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)SetSplineType(iSplineType)); \
} \
HRESULT __stdcall  ENVTIEName::SetClosing(CATLONG iClosingType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)SetClosing(iClosingType)); \
} \
HRESULT __stdcall  ENVTIEName::SetSupport(CATIAReference * iSupport) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)SetSupport(iSupport)); \
} \
HRESULT __stdcall  ENVTIEName::GetTangentNorm(CATLONG iPos, CATIARealParam *& oTension) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)GetTangentNorm(iPos,oTension)); \
} \
HRESULT __stdcall  ENVTIEName::GetCurvatureRadius(CATLONG iPos, CATIALength *& oRadius) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)GetCurvatureRadius(iPos,oRadius)); \
} \
HRESULT __stdcall  ENVTIEName::GetClosure(CATLONG & oClosed) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)GetClosure(oClosed)); \
} \
HRESULT __stdcall  ENVTIEName::GetSplineType(CATLONG & oType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)GetSplineType(oType)); \
} \
HRESULT __stdcall  ENVTIEName::GetSupport(CATIAReference *& oSupport) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)GetSupport(oSupport)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAll() \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)RemoveAll()); \
} \
HRESULT __stdcall  ENVTIEName::RemoveSupport() \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)RemoveSupport()); \
} \
HRESULT __stdcall  ENVTIEName::ReplacePointAtPosition(CATLONG iPos, CATIAReference * iPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)ReplacePointAtPosition(iPos,iPoint)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveTangentDirection(CATLONG iPos) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)RemoveTangentDirection(iPos)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveTension(CATLONG iPos) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)RemoveTension(iPos)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveCurvatureRadiusDirection(CATLONG iPos) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)RemoveCurvatureRadiusDirection(iPos)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveCurvatureRadiusValue(CATLONG iPos) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)RemoveCurvatureRadiusValue(iPos)); \
} \
HRESULT __stdcall  ENVTIEName::InvertDirection(CATLONG iPos) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)InvertDirection(iPos)); \
} \
HRESULT __stdcall  ENVTIEName::GetDirectionInversion(CATLONG iPos, CATLONG & oInvertFlag) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)GetDirectionInversion(iPos,oInvertFlag)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeSpline,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeSpline(classe)    TIECATIAHybridShapeSpline##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeSpline(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeSpline, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeSpline, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeSpline, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeSpline, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeSpline, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::RemoveControlPoint(CATLONG iPos) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iPos); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveControlPoint(iPos); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iPos); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::GetNbControlPoint(CATLONG & oNbCtrPt) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oNbCtrPt); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNbControlPoint(oNbCtrPt); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oNbCtrPt); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::AddPoint(CATIAReference * ipIAPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ipIAPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddPoint(ipIAPoint); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ipIAPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::AddPointWithConstraintExplicit(CATIAReference * ipIAPoint, CATIAHybridShapeDirection * ipIADirTangency, double iTangencyNorm, CATLONG iInverseTangency, CATIAHybridShapeDirection * ipIADirCurvature, double iCurvatureRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&ipIAPoint,&ipIADirTangency,&iTangencyNorm,&iInverseTangency,&ipIADirCurvature,&iCurvatureRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddPointWithConstraintExplicit(ipIAPoint,ipIADirTangency,iTangencyNorm,iInverseTangency,ipIADirCurvature,iCurvatureRadius); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&ipIAPoint,&ipIADirTangency,&iTangencyNorm,&iInverseTangency,&ipIADirCurvature,&iCurvatureRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::AddPointWithConstraintFromCurve(CATIAReference * ipIAPoint, CATIAReference * ipIACurveCst, double iTangencyNorm, CATLONG iInvertValue, CATLONG iCrvCstType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&ipIAPoint,&ipIACurveCst,&iTangencyNorm,&iInvertValue,&iCrvCstType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddPointWithConstraintFromCurve(ipIAPoint,ipIACurveCst,iTangencyNorm,iInvertValue,iCrvCstType); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&ipIAPoint,&ipIACurveCst,&iTangencyNorm,&iInvertValue,&iCrvCstType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::GetConstraintType(CATLONG iPos, CATLONG & oCstType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iPos,&oCstType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConstraintType(iPos,oCstType); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iPos,&oCstType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::GetPointPosition(CATIAReference * ipIAPoint, CATLONG & oPos) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ipIAPoint,&oPos); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPointPosition(ipIAPoint,oPos); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ipIAPoint,&oPos); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::GetPoint(CATLONG iPos, CATIAReference *& opIAPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iPos,&opIAPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPoint(iPos,opIAPoint); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iPos,&opIAPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::SetPointAfter(CATLONG iPos, CATIAReference * ipIAPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iPos,&ipIAPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPointAfter(iPos,ipIAPoint); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iPos,&ipIAPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::SetPointBefore(CATLONG iPos, CATIAReference * ipIAPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iPos,&ipIAPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPointBefore(iPos,ipIAPoint); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iPos,&ipIAPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::GetPointConstraintExplicit(CATLONG iPos, CATIAHybridShapeDirection *& opIADirTangency, double & oTangencyNorm, CATLONG & oInverseTangency, CATIAHybridShapeDirection *& opIADirCurvature, double & oCurvatureRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iPos,&opIADirTangency,&oTangencyNorm,&oInverseTangency,&opIADirCurvature,&oCurvatureRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPointConstraintExplicit(iPos,opIADirTangency,oTangencyNorm,oInverseTangency,opIADirCurvature,oCurvatureRadius); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iPos,&opIADirTangency,&oTangencyNorm,&oInverseTangency,&opIADirCurvature,&oCurvatureRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::SetPointConstraintExplicit(CATLONG iPos, CATIAHybridShapeDirection * ipIADirTangency, double iTangencyNorm, CATLONG iInverseTangency, CATIAHybridShapeDirection * ipIADirCurvature, double iCurvatureRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iPos,&ipIADirTangency,&iTangencyNorm,&iInverseTangency,&ipIADirCurvature,&iCurvatureRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPointConstraintExplicit(iPos,ipIADirTangency,iTangencyNorm,iInverseTangency,ipIADirCurvature,iCurvatureRadius); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iPos,&ipIADirTangency,&iTangencyNorm,&iInverseTangency,&ipIADirCurvature,&iCurvatureRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::GetPointConstraintFromCurve(CATLONG iPos, CATIAReference *& opIACurveCst, double & oTangencyNorm, CATLONG & oInvertValue, CATLONG & oCrvCstType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iPos,&opIACurveCst,&oTangencyNorm,&oInvertValue,&oCrvCstType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPointConstraintFromCurve(iPos,opIACurveCst,oTangencyNorm,oInvertValue,oCrvCstType); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iPos,&opIACurveCst,&oTangencyNorm,&oInvertValue,&oCrvCstType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::SetPointConstraintFromCurve(CATLONG iPos, CATIAReference * ipIACurveCst, double iTangencyNorm, CATLONG iInvertValue, CATLONG iCrvCstType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iPos,&ipIACurveCst,&iTangencyNorm,&iInvertValue,&iCrvCstType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPointConstraintFromCurve(iPos,ipIACurveCst,iTangencyNorm,iInvertValue,iCrvCstType); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iPos,&ipIACurveCst,&iTangencyNorm,&iInvertValue,&iCrvCstType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::SetSplineType(CATLONG iSplineType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iSplineType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSplineType(iSplineType); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iSplineType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::SetClosing(CATLONG iClosingType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iClosingType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetClosing(iClosingType); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iClosingType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::SetSupport(CATIAReference * iSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSupport(iSupport); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::GetTangentNorm(CATLONG iPos, CATIARealParam *& oTension) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iPos,&oTension); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTangentNorm(iPos,oTension); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iPos,&oTension); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::GetCurvatureRadius(CATLONG iPos, CATIALength *& oRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iPos,&oRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCurvatureRadius(iPos,oRadius); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iPos,&oRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::GetClosure(CATLONG & oClosed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oClosed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetClosure(oClosed); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oClosed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::GetSplineType(CATLONG & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSplineType(oType); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::GetSupport(CATIAReference *& oSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSupport(oSupport); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::RemoveAll() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAll(); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::RemoveSupport() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveSupport(); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::ReplacePointAtPosition(CATLONG iPos, CATIAReference * iPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iPos,&iPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReplacePointAtPosition(iPos,iPoint); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iPos,&iPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::RemoveTangentDirection(CATLONG iPos) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iPos); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveTangentDirection(iPos); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iPos); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::RemoveTension(CATLONG iPos) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iPos); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveTension(iPos); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iPos); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::RemoveCurvatureRadiusDirection(CATLONG iPos) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iPos); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveCurvatureRadiusDirection(iPos); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iPos); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::RemoveCurvatureRadiusValue(CATLONG iPos) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iPos); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveCurvatureRadiusValue(iPos); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iPos); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::InvertDirection(CATLONG iPos) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iPos); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InvertDirection(iPos); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iPos); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::GetDirectionInversion(CATLONG iPos, CATLONG & oInvertFlag) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iPos,&oInvertFlag); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDirectionInversion(iPos,oInvertFlag); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iPos,&oInvertFlag); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSpline##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSpline##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSpline##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSpline##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSpline##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSpline##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeSpline(classe) \
 \
 \
declare_TIE_CATIAHybridShapeSpline(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeSpline##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeSpline,"CATIAHybridShapeSpline",CATIAHybridShapeSpline::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeSpline(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeSpline, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeSpline##classe(classe::MetaObject(),CATIAHybridShapeSpline::MetaObject(),(void *)CreateTIECATIAHybridShapeSpline##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeSpline(classe) \
 \
 \
declare_TIE_CATIAHybridShapeSpline(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeSpline##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeSpline,"CATIAHybridShapeSpline",CATIAHybridShapeSpline::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeSpline(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeSpline, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeSpline##classe(classe::MetaObject(),CATIAHybridShapeSpline::MetaObject(),(void *)CreateTIECATIAHybridShapeSpline##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeSpline(classe) TIE_CATIAHybridShapeSpline(classe)
#else
#define BOA_CATIAHybridShapeSpline(classe) CATImplementBOA(CATIAHybridShapeSpline, classe)
#endif

#endif
