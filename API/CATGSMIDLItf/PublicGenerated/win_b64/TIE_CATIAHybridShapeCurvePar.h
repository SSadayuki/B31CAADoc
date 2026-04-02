#ifndef __TIE_CATIAHybridShapeCurvePar
#define __TIE_CATIAHybridShapeCurvePar

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeCurvePar.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeCurvePar */
#define declare_TIE_CATIAHybridShapeCurvePar(classe) \
 \
 \
class TIECATIAHybridShapeCurvePar##classe : public CATIAHybridShapeCurvePar \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeCurvePar, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Offset(CATIALength *& oCurvePar); \
      virtual HRESULT __stdcall get_Offset2(CATIALength *& oCurvePar2); \
      virtual HRESULT __stdcall get_CurveOffseted(CATIAReference *& oFaceToCurvePar); \
      virtual HRESULT __stdcall put_CurveOffseted(CATIAReference * iFaceToCurvePar); \
      virtual HRESULT __stdcall get_SmoothingType(CATLONG & oType); \
      virtual HRESULT __stdcall put_SmoothingType(CATLONG iType); \
      virtual HRESULT __stdcall get_MaximumDeviationValue(double & oDevValue); \
      virtual HRESULT __stdcall put_MaximumDeviationValue(double iDevValue); \
      virtual HRESULT __stdcall get_p3DSmoothing(CAT_VARIANT_BOOL & o3DSmoothing); \
      virtual HRESULT __stdcall put_p3DSmoothing(CAT_VARIANT_BOOL i3DSmoothing); \
      virtual HRESULT __stdcall get_PassingPoint(CATIAReference *& oPassingPoint); \
      virtual HRESULT __stdcall put_PassingPoint(CATIAReference * iPassingPoint); \
      virtual HRESULT __stdcall get_KeepBothSides(CAT_VARIANT_BOOL & oKeepBothSides); \
      virtual HRESULT __stdcall put_KeepBothSides(CAT_VARIANT_BOOL iKeepBothSides); \
      virtual HRESULT __stdcall get_OtherSide(CATIAReference *& oOtherSide); \
      virtual HRESULT __stdcall get_Support(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_Support(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_Geodesic(CAT_VARIANT_BOOL & oMode); \
      virtual HRESULT __stdcall put_Geodesic(CAT_VARIANT_BOOL iMode); \
      virtual HRESULT __stdcall get_LawType(CATLONG & oLawType); \
      virtual HRESULT __stdcall put_LawType(CATLONG iLawType); \
      virtual HRESULT __stdcall get_CurveParType(CATLONG & oCurveParType); \
      virtual HRESULT __stdcall put_CurveParType(CATLONG iCurveParType); \
      virtual HRESULT __stdcall get_CurveParLaw(CATIAReference *& oLaw); \
      virtual HRESULT __stdcall put_CurveParLaw(CATIAReference * iLaw); \
      virtual HRESULT __stdcall get_InvertMappingLaw(CAT_VARIANT_BOOL & oInvert); \
      virtual HRESULT __stdcall put_InvertMappingLaw(CAT_VARIANT_BOOL iInvert); \
      virtual HRESULT __stdcall get_InvertDirection(CAT_VARIANT_BOOL & oInvert); \
      virtual HRESULT __stdcall put_InvertDirection(CAT_VARIANT_BOOL iInvert); \
      virtual HRESULT __stdcall GetPlaneNormal(CATSafeArrayVariant & oNormal); \
      virtual HRESULT __stdcall PutPlaneNormal(const CATSafeArrayVariant & iNormal); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeCurvePar(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Offset(CATIALength *& oCurvePar); \
virtual HRESULT __stdcall get_Offset2(CATIALength *& oCurvePar2); \
virtual HRESULT __stdcall get_CurveOffseted(CATIAReference *& oFaceToCurvePar); \
virtual HRESULT __stdcall put_CurveOffseted(CATIAReference * iFaceToCurvePar); \
virtual HRESULT __stdcall get_SmoothingType(CATLONG & oType); \
virtual HRESULT __stdcall put_SmoothingType(CATLONG iType); \
virtual HRESULT __stdcall get_MaximumDeviationValue(double & oDevValue); \
virtual HRESULT __stdcall put_MaximumDeviationValue(double iDevValue); \
virtual HRESULT __stdcall get_p3DSmoothing(CAT_VARIANT_BOOL & o3DSmoothing); \
virtual HRESULT __stdcall put_p3DSmoothing(CAT_VARIANT_BOOL i3DSmoothing); \
virtual HRESULT __stdcall get_PassingPoint(CATIAReference *& oPassingPoint); \
virtual HRESULT __stdcall put_PassingPoint(CATIAReference * iPassingPoint); \
virtual HRESULT __stdcall get_KeepBothSides(CAT_VARIANT_BOOL & oKeepBothSides); \
virtual HRESULT __stdcall put_KeepBothSides(CAT_VARIANT_BOOL iKeepBothSides); \
virtual HRESULT __stdcall get_OtherSide(CATIAReference *& oOtherSide); \
virtual HRESULT __stdcall get_Support(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_Support(CATIAReference * iElem); \
virtual HRESULT __stdcall get_Geodesic(CAT_VARIANT_BOOL & oMode); \
virtual HRESULT __stdcall put_Geodesic(CAT_VARIANT_BOOL iMode); \
virtual HRESULT __stdcall get_LawType(CATLONG & oLawType); \
virtual HRESULT __stdcall put_LawType(CATLONG iLawType); \
virtual HRESULT __stdcall get_CurveParType(CATLONG & oCurveParType); \
virtual HRESULT __stdcall put_CurveParType(CATLONG iCurveParType); \
virtual HRESULT __stdcall get_CurveParLaw(CATIAReference *& oLaw); \
virtual HRESULT __stdcall put_CurveParLaw(CATIAReference * iLaw); \
virtual HRESULT __stdcall get_InvertMappingLaw(CAT_VARIANT_BOOL & oInvert); \
virtual HRESULT __stdcall put_InvertMappingLaw(CAT_VARIANT_BOOL iInvert); \
virtual HRESULT __stdcall get_InvertDirection(CAT_VARIANT_BOOL & oInvert); \
virtual HRESULT __stdcall put_InvertDirection(CAT_VARIANT_BOOL iInvert); \
virtual HRESULT __stdcall GetPlaneNormal(CATSafeArrayVariant & oNormal); \
virtual HRESULT __stdcall PutPlaneNormal(const CATSafeArrayVariant & iNormal); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeCurvePar(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Offset(CATIALength *& oCurvePar) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)get_Offset(oCurvePar)); \
} \
HRESULT __stdcall  ENVTIEName::get_Offset2(CATIALength *& oCurvePar2) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)get_Offset2(oCurvePar2)); \
} \
HRESULT __stdcall  ENVTIEName::get_CurveOffseted(CATIAReference *& oFaceToCurvePar) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)get_CurveOffseted(oFaceToCurvePar)); \
} \
HRESULT __stdcall  ENVTIEName::put_CurveOffseted(CATIAReference * iFaceToCurvePar) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)put_CurveOffseted(iFaceToCurvePar)); \
} \
HRESULT __stdcall  ENVTIEName::get_SmoothingType(CATLONG & oType) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)get_SmoothingType(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_SmoothingType(CATLONG iType) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)put_SmoothingType(iType)); \
} \
HRESULT __stdcall  ENVTIEName::get_MaximumDeviationValue(double & oDevValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)get_MaximumDeviationValue(oDevValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_MaximumDeviationValue(double iDevValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)put_MaximumDeviationValue(iDevValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_p3DSmoothing(CAT_VARIANT_BOOL & o3DSmoothing) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)get_p3DSmoothing(o3DSmoothing)); \
} \
HRESULT __stdcall  ENVTIEName::put_p3DSmoothing(CAT_VARIANT_BOOL i3DSmoothing) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)put_p3DSmoothing(i3DSmoothing)); \
} \
HRESULT __stdcall  ENVTIEName::get_PassingPoint(CATIAReference *& oPassingPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)get_PassingPoint(oPassingPoint)); \
} \
HRESULT __stdcall  ENVTIEName::put_PassingPoint(CATIAReference * iPassingPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)put_PassingPoint(iPassingPoint)); \
} \
HRESULT __stdcall  ENVTIEName::get_KeepBothSides(CAT_VARIANT_BOOL & oKeepBothSides) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)get_KeepBothSides(oKeepBothSides)); \
} \
HRESULT __stdcall  ENVTIEName::put_KeepBothSides(CAT_VARIANT_BOOL iKeepBothSides) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)put_KeepBothSides(iKeepBothSides)); \
} \
HRESULT __stdcall  ENVTIEName::get_OtherSide(CATIAReference *& oOtherSide) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)get_OtherSide(oOtherSide)); \
} \
HRESULT __stdcall  ENVTIEName::get_Support(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)get_Support(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Support(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)put_Support(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Geodesic(CAT_VARIANT_BOOL & oMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)get_Geodesic(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_Geodesic(CAT_VARIANT_BOOL iMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)put_Geodesic(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_LawType(CATLONG & oLawType) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)get_LawType(oLawType)); \
} \
HRESULT __stdcall  ENVTIEName::put_LawType(CATLONG iLawType) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)put_LawType(iLawType)); \
} \
HRESULT __stdcall  ENVTIEName::get_CurveParType(CATLONG & oCurveParType) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)get_CurveParType(oCurveParType)); \
} \
HRESULT __stdcall  ENVTIEName::put_CurveParType(CATLONG iCurveParType) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)put_CurveParType(iCurveParType)); \
} \
HRESULT __stdcall  ENVTIEName::get_CurveParLaw(CATIAReference *& oLaw) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)get_CurveParLaw(oLaw)); \
} \
HRESULT __stdcall  ENVTIEName::put_CurveParLaw(CATIAReference * iLaw) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)put_CurveParLaw(iLaw)); \
} \
HRESULT __stdcall  ENVTIEName::get_InvertMappingLaw(CAT_VARIANT_BOOL & oInvert) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)get_InvertMappingLaw(oInvert)); \
} \
HRESULT __stdcall  ENVTIEName::put_InvertMappingLaw(CAT_VARIANT_BOOL iInvert) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)put_InvertMappingLaw(iInvert)); \
} \
HRESULT __stdcall  ENVTIEName::get_InvertDirection(CAT_VARIANT_BOOL & oInvert) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)get_InvertDirection(oInvert)); \
} \
HRESULT __stdcall  ENVTIEName::put_InvertDirection(CAT_VARIANT_BOOL iInvert) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)put_InvertDirection(iInvert)); \
} \
HRESULT __stdcall  ENVTIEName::GetPlaneNormal(CATSafeArrayVariant & oNormal) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)GetPlaneNormal(oNormal)); \
} \
HRESULT __stdcall  ENVTIEName::PutPlaneNormal(const CATSafeArrayVariant & iNormal) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)PutPlaneNormal(iNormal)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeCurvePar,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeCurvePar(classe)    TIECATIAHybridShapeCurvePar##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeCurvePar(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeCurvePar, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeCurvePar, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeCurvePar, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeCurvePar, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeCurvePar, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::get_Offset(CATIALength *& oCurvePar) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oCurvePar); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Offset(oCurvePar); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oCurvePar); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::get_Offset2(CATIALength *& oCurvePar2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oCurvePar2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Offset2(oCurvePar2); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oCurvePar2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::get_CurveOffseted(CATIAReference *& oFaceToCurvePar) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oFaceToCurvePar); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CurveOffseted(oFaceToCurvePar); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oFaceToCurvePar); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::put_CurveOffseted(CATIAReference * iFaceToCurvePar) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iFaceToCurvePar); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CurveOffseted(iFaceToCurvePar); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iFaceToCurvePar); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::get_SmoothingType(CATLONG & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SmoothingType(oType); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::put_SmoothingType(CATLONG iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SmoothingType(iType); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::get_MaximumDeviationValue(double & oDevValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oDevValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_MaximumDeviationValue(oDevValue); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oDevValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::put_MaximumDeviationValue(double iDevValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iDevValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_MaximumDeviationValue(iDevValue); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iDevValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::get_p3DSmoothing(CAT_VARIANT_BOOL & o3DSmoothing) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&o3DSmoothing); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_p3DSmoothing(o3DSmoothing); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&o3DSmoothing); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::put_p3DSmoothing(CAT_VARIANT_BOOL i3DSmoothing) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&i3DSmoothing); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_p3DSmoothing(i3DSmoothing); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&i3DSmoothing); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::get_PassingPoint(CATIAReference *& oPassingPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oPassingPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PassingPoint(oPassingPoint); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oPassingPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::put_PassingPoint(CATIAReference * iPassingPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iPassingPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PassingPoint(iPassingPoint); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iPassingPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::get_KeepBothSides(CAT_VARIANT_BOOL & oKeepBothSides) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oKeepBothSides); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_KeepBothSides(oKeepBothSides); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oKeepBothSides); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::put_KeepBothSides(CAT_VARIANT_BOOL iKeepBothSides) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iKeepBothSides); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_KeepBothSides(iKeepBothSides); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iKeepBothSides); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::get_OtherSide(CATIAReference *& oOtherSide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oOtherSide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OtherSide(oOtherSide); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oOtherSide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::get_Support(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Support(oElem); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::put_Support(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Support(iElem); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::get_Geodesic(CAT_VARIANT_BOOL & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Geodesic(oMode); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::put_Geodesic(CAT_VARIANT_BOOL iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Geodesic(iMode); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::get_LawType(CATLONG & oLawType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oLawType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LawType(oLawType); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oLawType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::put_LawType(CATLONG iLawType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iLawType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LawType(iLawType); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iLawType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::get_CurveParType(CATLONG & oCurveParType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oCurveParType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CurveParType(oCurveParType); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oCurveParType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::put_CurveParType(CATLONG iCurveParType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iCurveParType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CurveParType(iCurveParType); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iCurveParType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::get_CurveParLaw(CATIAReference *& oLaw) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oLaw); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CurveParLaw(oLaw); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oLaw); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::put_CurveParLaw(CATIAReference * iLaw) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iLaw); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CurveParLaw(iLaw); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iLaw); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::get_InvertMappingLaw(CAT_VARIANT_BOOL & oInvert) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oInvert); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InvertMappingLaw(oInvert); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oInvert); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::put_InvertMappingLaw(CAT_VARIANT_BOOL iInvert) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iInvert); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_InvertMappingLaw(iInvert); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iInvert); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::get_InvertDirection(CAT_VARIANT_BOOL & oInvert) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oInvert); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InvertDirection(oInvert); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oInvert); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::put_InvertDirection(CAT_VARIANT_BOOL iInvert) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iInvert); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_InvertDirection(iInvert); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iInvert); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::GetPlaneNormal(CATSafeArrayVariant & oNormal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oNormal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPlaneNormal(oNormal); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oNormal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::PutPlaneNormal(const CATSafeArrayVariant & iNormal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iNormal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutPlaneNormal(iNormal); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iNormal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCurvePar##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCurvePar##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCurvePar##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCurvePar##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCurvePar##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCurvePar##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeCurvePar(classe) \
 \
 \
declare_TIE_CATIAHybridShapeCurvePar(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeCurvePar##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeCurvePar,"CATIAHybridShapeCurvePar",CATIAHybridShapeCurvePar::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeCurvePar(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeCurvePar, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeCurvePar##classe(classe::MetaObject(),CATIAHybridShapeCurvePar::MetaObject(),(void *)CreateTIECATIAHybridShapeCurvePar##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeCurvePar(classe) \
 \
 \
declare_TIE_CATIAHybridShapeCurvePar(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeCurvePar##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeCurvePar,"CATIAHybridShapeCurvePar",CATIAHybridShapeCurvePar::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeCurvePar(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeCurvePar, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeCurvePar##classe(classe::MetaObject(),CATIAHybridShapeCurvePar::MetaObject(),(void *)CreateTIECATIAHybridShapeCurvePar##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeCurvePar(classe) TIE_CATIAHybridShapeCurvePar(classe)
#else
#define BOA_CATIAHybridShapeCurvePar(classe) CATImplementBOA(CATIAHybridShapeCurvePar, classe)
#endif

#endif
