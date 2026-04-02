#ifndef __TIE_CATIAHybridShapePointOnCurve
#define __TIE_CATIAHybridShapePointOnCurve

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapePointOnCurve.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapePointOnCurve */
#define declare_TIE_CATIAHybridShapePointOnCurve(classe) \
 \
 \
class TIECATIAHybridShapePointOnCurve##classe : public CATIAHybridShapePointOnCurve \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapePointOnCurve, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Curve(CATIAReference *& oCurve); \
      virtual HRESULT __stdcall put_Curve(CATIAReference * iCurve); \
      virtual HRESULT __stdcall get_Point(CATIAReference *& oRefPoint); \
      virtual HRESULT __stdcall put_Point(CATIAReference * iRefPoint); \
      virtual HRESULT __stdcall get_Offset(CATIALength *& oDist); \
      virtual HRESULT __stdcall get_Ratio(CATIARealParam *& oRatio); \
      virtual HRESULT __stdcall get_Type(CATLONG & oType); \
      virtual HRESULT __stdcall get_Orientation(CATLONG & oOrientation); \
      virtual HRESULT __stdcall put_Orientation(CATLONG iOrientation); \
      virtual HRESULT __stdcall get_DistanceType(CATLONG & oDistanceType); \
      virtual HRESULT __stdcall put_DistanceType(CATLONG iDistanceType); \
      virtual HRESULT __stdcall get_Direction(CATIAHybridShapeDirection *& oDir); \
      virtual HRESULT __stdcall put_Direction(CATIAHybridShapeDirection * iDir); \
      virtual HRESULT __stdcall get_OnCurveType(CATLONG & oOnCurveType); \
      virtual HRESULT __stdcall put_OnCurveType(CATLONG iOnCurveType); \
      virtual HRESULT __stdcall GetCoordinates(CATSafeArrayVariant & oCoordinates); \
      virtual HRESULT __stdcall SetCoordinates(const CATSafeArrayVariant & oCoordinates); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapePointOnCurve(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Curve(CATIAReference *& oCurve); \
virtual HRESULT __stdcall put_Curve(CATIAReference * iCurve); \
virtual HRESULT __stdcall get_Point(CATIAReference *& oRefPoint); \
virtual HRESULT __stdcall put_Point(CATIAReference * iRefPoint); \
virtual HRESULT __stdcall get_Offset(CATIALength *& oDist); \
virtual HRESULT __stdcall get_Ratio(CATIARealParam *& oRatio); \
virtual HRESULT __stdcall get_Type(CATLONG & oType); \
virtual HRESULT __stdcall get_Orientation(CATLONG & oOrientation); \
virtual HRESULT __stdcall put_Orientation(CATLONG iOrientation); \
virtual HRESULT __stdcall get_DistanceType(CATLONG & oDistanceType); \
virtual HRESULT __stdcall put_DistanceType(CATLONG iDistanceType); \
virtual HRESULT __stdcall get_Direction(CATIAHybridShapeDirection *& oDir); \
virtual HRESULT __stdcall put_Direction(CATIAHybridShapeDirection * iDir); \
virtual HRESULT __stdcall get_OnCurveType(CATLONG & oOnCurveType); \
virtual HRESULT __stdcall put_OnCurveType(CATLONG iOnCurveType); \
virtual HRESULT __stdcall GetCoordinates(CATSafeArrayVariant & oCoordinates); \
virtual HRESULT __stdcall SetCoordinates(const CATSafeArrayVariant & oCoordinates); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapePointOnCurve(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Curve(CATIAReference *& oCurve) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnCurve,ENVTIETypeLetter,ENVTIELetter)get_Curve(oCurve)); \
} \
HRESULT __stdcall  ENVTIEName::put_Curve(CATIAReference * iCurve) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnCurve,ENVTIETypeLetter,ENVTIELetter)put_Curve(iCurve)); \
} \
HRESULT __stdcall  ENVTIEName::get_Point(CATIAReference *& oRefPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnCurve,ENVTIETypeLetter,ENVTIELetter)get_Point(oRefPoint)); \
} \
HRESULT __stdcall  ENVTIEName::put_Point(CATIAReference * iRefPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnCurve,ENVTIETypeLetter,ENVTIELetter)put_Point(iRefPoint)); \
} \
HRESULT __stdcall  ENVTIEName::get_Offset(CATIALength *& oDist) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnCurve,ENVTIETypeLetter,ENVTIELetter)get_Offset(oDist)); \
} \
HRESULT __stdcall  ENVTIEName::get_Ratio(CATIARealParam *& oRatio) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnCurve,ENVTIETypeLetter,ENVTIELetter)get_Ratio(oRatio)); \
} \
HRESULT __stdcall  ENVTIEName::get_Type(CATLONG & oType) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnCurve,ENVTIETypeLetter,ENVTIELetter)get_Type(oType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Orientation(CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnCurve,ENVTIETypeLetter,ENVTIELetter)get_Orientation(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_Orientation(CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnCurve,ENVTIETypeLetter,ENVTIELetter)put_Orientation(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_DistanceType(CATLONG & oDistanceType) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnCurve,ENVTIETypeLetter,ENVTIELetter)get_DistanceType(oDistanceType)); \
} \
HRESULT __stdcall  ENVTIEName::put_DistanceType(CATLONG iDistanceType) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnCurve,ENVTIETypeLetter,ENVTIELetter)put_DistanceType(iDistanceType)); \
} \
HRESULT __stdcall  ENVTIEName::get_Direction(CATIAHybridShapeDirection *& oDir) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnCurve,ENVTIETypeLetter,ENVTIELetter)get_Direction(oDir)); \
} \
HRESULT __stdcall  ENVTIEName::put_Direction(CATIAHybridShapeDirection * iDir) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnCurve,ENVTIETypeLetter,ENVTIELetter)put_Direction(iDir)); \
} \
HRESULT __stdcall  ENVTIEName::get_OnCurveType(CATLONG & oOnCurveType) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnCurve,ENVTIETypeLetter,ENVTIELetter)get_OnCurveType(oOnCurveType)); \
} \
HRESULT __stdcall  ENVTIEName::put_OnCurveType(CATLONG iOnCurveType) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnCurve,ENVTIETypeLetter,ENVTIELetter)put_OnCurveType(iOnCurveType)); \
} \
HRESULT __stdcall  ENVTIEName::GetCoordinates(CATSafeArrayVariant & oCoordinates) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnCurve,ENVTIETypeLetter,ENVTIELetter)GetCoordinates(oCoordinates)); \
} \
HRESULT __stdcall  ENVTIEName::SetCoordinates(const CATSafeArrayVariant & oCoordinates) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnCurve,ENVTIETypeLetter,ENVTIELetter)SetCoordinates(oCoordinates)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnCurve,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnCurve,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnCurve,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnCurve,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnCurve,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnCurve,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnCurve,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapePointOnCurve,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapePointOnCurve(classe)    TIECATIAHybridShapePointOnCurve##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapePointOnCurve(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapePointOnCurve, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapePointOnCurve, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapePointOnCurve, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapePointOnCurve, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapePointOnCurve, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapePointOnCurve##classe::get_Curve(CATIAReference *& oCurve) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oCurve); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Curve(oCurve); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oCurve); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnCurve##classe::put_Curve(CATIAReference * iCurve) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iCurve); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Curve(iCurve); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iCurve); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnCurve##classe::get_Point(CATIAReference *& oRefPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oRefPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Point(oRefPoint); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oRefPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnCurve##classe::put_Point(CATIAReference * iRefPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iRefPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Point(iRefPoint); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iRefPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnCurve##classe::get_Offset(CATIALength *& oDist) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oDist); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Offset(oDist); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oDist); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnCurve##classe::get_Ratio(CATIARealParam *& oRatio) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oRatio); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Ratio(oRatio); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oRatio); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnCurve##classe::get_Type(CATLONG & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Type(oType); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnCurve##classe::get_Orientation(CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Orientation(oOrientation); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnCurve##classe::put_Orientation(CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Orientation(iOrientation); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnCurve##classe::get_DistanceType(CATLONG & oDistanceType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oDistanceType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DistanceType(oDistanceType); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oDistanceType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnCurve##classe::put_DistanceType(CATLONG iDistanceType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iDistanceType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DistanceType(iDistanceType); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iDistanceType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnCurve##classe::get_Direction(CATIAHybridShapeDirection *& oDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Direction(oDir); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnCurve##classe::put_Direction(CATIAHybridShapeDirection * iDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Direction(iDir); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnCurve##classe::get_OnCurveType(CATLONG & oOnCurveType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oOnCurveType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OnCurveType(oOnCurveType); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oOnCurveType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnCurve##classe::put_OnCurveType(CATLONG iOnCurveType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iOnCurveType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OnCurveType(iOnCurveType); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iOnCurveType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnCurve##classe::GetCoordinates(CATSafeArrayVariant & oCoordinates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oCoordinates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCoordinates(oCoordinates); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oCoordinates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnCurve##classe::SetCoordinates(const CATSafeArrayVariant & oCoordinates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oCoordinates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCoordinates(oCoordinates); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oCoordinates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnCurve##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnCurve##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePointOnCurve##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePointOnCurve##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePointOnCurve##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePointOnCurve##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePointOnCurve##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePointOnCurve##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapePointOnCurve(classe) \
 \
 \
declare_TIE_CATIAHybridShapePointOnCurve(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapePointOnCurve##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapePointOnCurve,"CATIAHybridShapePointOnCurve",CATIAHybridShapePointOnCurve::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapePointOnCurve(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapePointOnCurve, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapePointOnCurve##classe(classe::MetaObject(),CATIAHybridShapePointOnCurve::MetaObject(),(void *)CreateTIECATIAHybridShapePointOnCurve##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapePointOnCurve(classe) \
 \
 \
declare_TIE_CATIAHybridShapePointOnCurve(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapePointOnCurve##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapePointOnCurve,"CATIAHybridShapePointOnCurve",CATIAHybridShapePointOnCurve::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapePointOnCurve(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapePointOnCurve, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapePointOnCurve##classe(classe::MetaObject(),CATIAHybridShapePointOnCurve::MetaObject(),(void *)CreateTIECATIAHybridShapePointOnCurve##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapePointOnCurve(classe) TIE_CATIAHybridShapePointOnCurve(classe)
#else
#define BOA_CATIAHybridShapePointOnCurve(classe) CATImplementBOA(CATIAHybridShapePointOnCurve, classe)
#endif

#endif
