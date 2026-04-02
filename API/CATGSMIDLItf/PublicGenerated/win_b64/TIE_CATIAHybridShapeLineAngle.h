#ifndef __TIE_CATIAHybridShapeLineAngle
#define __TIE_CATIAHybridShapeLineAngle

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeLineAngle.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeLineAngle */
#define declare_TIE_CATIAHybridShapeLineAngle(classe) \
 \
 \
class TIECATIAHybridShapeLineAngle##classe : public CATIAHybridShapeLineAngle \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeLineAngle, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Curve(CATIAReference *& oCurve); \
      virtual HRESULT __stdcall put_Curve(CATIAReference * iCurve); \
      virtual HRESULT __stdcall get_Point(CATIAReference *& oPoint); \
      virtual HRESULT __stdcall put_Point(CATIAReference * iPoint); \
      virtual HRESULT __stdcall get_Surface(CATIAReference *& oSurface); \
      virtual HRESULT __stdcall put_Surface(CATIAReference * iSurface); \
      virtual HRESULT __stdcall get_Orientation(CATLONG & oOrientation); \
      virtual HRESULT __stdcall put_Orientation(CATLONG iOrientation); \
      virtual HRESULT __stdcall get_Geodesic(CAT_VARIANT_BOOL & oGeod); \
      virtual HRESULT __stdcall put_Geodesic(CAT_VARIANT_BOOL iGeod); \
      virtual HRESULT __stdcall get_BeginOffset(CATIALength *& oStart); \
      virtual HRESULT __stdcall get_EndOffset(CATIALength *& oEnd); \
      virtual HRESULT __stdcall get_Angle(CATIAAngle *& oAngle); \
      virtual HRESULT __stdcall GetLengthType(CATLONG & oType); \
      virtual HRESULT __stdcall SetLengthType(CATLONG iType); \
      virtual HRESULT __stdcall SetSymmetricalExtension(CAT_VARIANT_BOOL iSym); \
      virtual HRESULT __stdcall GetSymmetricalExtension(CAT_VARIANT_BOOL & oSym); \
      virtual HRESULT __stdcall GetOrigin(CATSafeArrayVariant & oOrigin); \
      virtual HRESULT __stdcall GetDirection(CATSafeArrayVariant & oDirection); \
      virtual HRESULT __stdcall PutDirection(const CATSafeArrayVariant & iDirection); \
      virtual HRESULT __stdcall get_FirstUptoElem(CATIAReference *& oFirstUpto); \
      virtual HRESULT __stdcall put_FirstUptoElem(CATIAReference * iFirstUpto); \
      virtual HRESULT __stdcall get_SecondUptoElem(CATIAReference *& oSecondUpto); \
      virtual HRESULT __stdcall put_SecondUptoElem(CATIAReference * iSecondUpto); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeLineAngle(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Curve(CATIAReference *& oCurve); \
virtual HRESULT __stdcall put_Curve(CATIAReference * iCurve); \
virtual HRESULT __stdcall get_Point(CATIAReference *& oPoint); \
virtual HRESULT __stdcall put_Point(CATIAReference * iPoint); \
virtual HRESULT __stdcall get_Surface(CATIAReference *& oSurface); \
virtual HRESULT __stdcall put_Surface(CATIAReference * iSurface); \
virtual HRESULT __stdcall get_Orientation(CATLONG & oOrientation); \
virtual HRESULT __stdcall put_Orientation(CATLONG iOrientation); \
virtual HRESULT __stdcall get_Geodesic(CAT_VARIANT_BOOL & oGeod); \
virtual HRESULT __stdcall put_Geodesic(CAT_VARIANT_BOOL iGeod); \
virtual HRESULT __stdcall get_BeginOffset(CATIALength *& oStart); \
virtual HRESULT __stdcall get_EndOffset(CATIALength *& oEnd); \
virtual HRESULT __stdcall get_Angle(CATIAAngle *& oAngle); \
virtual HRESULT __stdcall GetLengthType(CATLONG & oType); \
virtual HRESULT __stdcall SetLengthType(CATLONG iType); \
virtual HRESULT __stdcall SetSymmetricalExtension(CAT_VARIANT_BOOL iSym); \
virtual HRESULT __stdcall GetSymmetricalExtension(CAT_VARIANT_BOOL & oSym); \
virtual HRESULT __stdcall GetOrigin(CATSafeArrayVariant & oOrigin); \
virtual HRESULT __stdcall GetDirection(CATSafeArrayVariant & oDirection); \
virtual HRESULT __stdcall PutDirection(const CATSafeArrayVariant & iDirection); \
virtual HRESULT __stdcall get_FirstUptoElem(CATIAReference *& oFirstUpto); \
virtual HRESULT __stdcall put_FirstUptoElem(CATIAReference * iFirstUpto); \
virtual HRESULT __stdcall get_SecondUptoElem(CATIAReference *& oSecondUpto); \
virtual HRESULT __stdcall put_SecondUptoElem(CATIAReference * iSecondUpto); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeLineAngle(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Curve(CATIAReference *& oCurve) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)get_Curve(oCurve)); \
} \
HRESULT __stdcall  ENVTIEName::put_Curve(CATIAReference * iCurve) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)put_Curve(iCurve)); \
} \
HRESULT __stdcall  ENVTIEName::get_Point(CATIAReference *& oPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)get_Point(oPoint)); \
} \
HRESULT __stdcall  ENVTIEName::put_Point(CATIAReference * iPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)put_Point(iPoint)); \
} \
HRESULT __stdcall  ENVTIEName::get_Surface(CATIAReference *& oSurface) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)get_Surface(oSurface)); \
} \
HRESULT __stdcall  ENVTIEName::put_Surface(CATIAReference * iSurface) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)put_Surface(iSurface)); \
} \
HRESULT __stdcall  ENVTIEName::get_Orientation(CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)get_Orientation(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_Orientation(CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)put_Orientation(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_Geodesic(CAT_VARIANT_BOOL & oGeod) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)get_Geodesic(oGeod)); \
} \
HRESULT __stdcall  ENVTIEName::put_Geodesic(CAT_VARIANT_BOOL iGeod) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)put_Geodesic(iGeod)); \
} \
HRESULT __stdcall  ENVTIEName::get_BeginOffset(CATIALength *& oStart) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)get_BeginOffset(oStart)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndOffset(CATIALength *& oEnd) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)get_EndOffset(oEnd)); \
} \
HRESULT __stdcall  ENVTIEName::get_Angle(CATIAAngle *& oAngle) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)get_Angle(oAngle)); \
} \
HRESULT __stdcall  ENVTIEName::GetLengthType(CATLONG & oType) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)GetLengthType(oType)); \
} \
HRESULT __stdcall  ENVTIEName::SetLengthType(CATLONG iType) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)SetLengthType(iType)); \
} \
HRESULT __stdcall  ENVTIEName::SetSymmetricalExtension(CAT_VARIANT_BOOL iSym) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)SetSymmetricalExtension(iSym)); \
} \
HRESULT __stdcall  ENVTIEName::GetSymmetricalExtension(CAT_VARIANT_BOOL & oSym) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)GetSymmetricalExtension(oSym)); \
} \
HRESULT __stdcall  ENVTIEName::GetOrigin(CATSafeArrayVariant & oOrigin) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)GetOrigin(oOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::GetDirection(CATSafeArrayVariant & oDirection) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)GetDirection(oDirection)); \
} \
HRESULT __stdcall  ENVTIEName::PutDirection(const CATSafeArrayVariant & iDirection) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)PutDirection(iDirection)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstUptoElem(CATIAReference *& oFirstUpto) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)get_FirstUptoElem(oFirstUpto)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstUptoElem(CATIAReference * iFirstUpto) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)put_FirstUptoElem(iFirstUpto)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondUptoElem(CATIAReference *& oSecondUpto) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)get_SecondUptoElem(oSecondUpto)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondUptoElem(CATIAReference * iSecondUpto) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)put_SecondUptoElem(iSecondUpto)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineAngle,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeLineAngle(classe)    TIECATIAHybridShapeLineAngle##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeLineAngle(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeLineAngle, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeLineAngle, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeLineAngle, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeLineAngle, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeLineAngle, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeLineAngle##classe::get_Curve(CATIAReference *& oCurve) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oCurve); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Curve(oCurve); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oCurve); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineAngle##classe::put_Curve(CATIAReference * iCurve) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iCurve); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Curve(iCurve); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iCurve); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineAngle##classe::get_Point(CATIAReference *& oPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Point(oPoint); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineAngle##classe::put_Point(CATIAReference * iPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Point(iPoint); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineAngle##classe::get_Surface(CATIAReference *& oSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Surface(oSurface); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineAngle##classe::put_Surface(CATIAReference * iSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Surface(iSurface); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineAngle##classe::get_Orientation(CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Orientation(oOrientation); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineAngle##classe::put_Orientation(CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Orientation(iOrientation); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineAngle##classe::get_Geodesic(CAT_VARIANT_BOOL & oGeod) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oGeod); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Geodesic(oGeod); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oGeod); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineAngle##classe::put_Geodesic(CAT_VARIANT_BOOL iGeod) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iGeod); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Geodesic(iGeod); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iGeod); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineAngle##classe::get_BeginOffset(CATIALength *& oStart) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oStart); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BeginOffset(oStart); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oStart); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineAngle##classe::get_EndOffset(CATIALength *& oEnd) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oEnd); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndOffset(oEnd); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oEnd); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineAngle##classe::get_Angle(CATIAAngle *& oAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Angle(oAngle); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineAngle##classe::GetLengthType(CATLONG & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLengthType(oType); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineAngle##classe::SetLengthType(CATLONG iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLengthType(iType); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineAngle##classe::SetSymmetricalExtension(CAT_VARIANT_BOOL iSym) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iSym); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSymmetricalExtension(iSym); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iSym); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineAngle##classe::GetSymmetricalExtension(CAT_VARIANT_BOOL & oSym) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oSym); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSymmetricalExtension(oSym); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oSym); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineAngle##classe::GetOrigin(CATSafeArrayVariant & oOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrigin(oOrigin); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineAngle##classe::GetDirection(CATSafeArrayVariant & oDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDirection(oDirection); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineAngle##classe::PutDirection(const CATSafeArrayVariant & iDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutDirection(iDirection); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineAngle##classe::get_FirstUptoElem(CATIAReference *& oFirstUpto) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oFirstUpto); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstUptoElem(oFirstUpto); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oFirstUpto); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineAngle##classe::put_FirstUptoElem(CATIAReference * iFirstUpto) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iFirstUpto); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstUptoElem(iFirstUpto); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iFirstUpto); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineAngle##classe::get_SecondUptoElem(CATIAReference *& oSecondUpto) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oSecondUpto); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondUptoElem(oSecondUpto); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oSecondUpto); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineAngle##classe::put_SecondUptoElem(CATIAReference * iSecondUpto) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iSecondUpto); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondUptoElem(iSecondUpto); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iSecondUpto); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineAngle##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineAngle##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineAngle##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeLineAngle##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeLineAngle##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeLineAngle##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeLineAngle##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeLineAngle##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeLineAngle(classe) \
 \
 \
declare_TIE_CATIAHybridShapeLineAngle(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeLineAngle##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeLineAngle,"CATIAHybridShapeLineAngle",CATIAHybridShapeLineAngle::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeLineAngle(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeLineAngle, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeLineAngle##classe(classe::MetaObject(),CATIAHybridShapeLineAngle::MetaObject(),(void *)CreateTIECATIAHybridShapeLineAngle##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeLineAngle(classe) \
 \
 \
declare_TIE_CATIAHybridShapeLineAngle(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeLineAngle##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeLineAngle,"CATIAHybridShapeLineAngle",CATIAHybridShapeLineAngle::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeLineAngle(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeLineAngle, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeLineAngle##classe(classe::MetaObject(),CATIAHybridShapeLineAngle::MetaObject(),(void *)CreateTIECATIAHybridShapeLineAngle##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeLineAngle(classe) TIE_CATIAHybridShapeLineAngle(classe)
#else
#define BOA_CATIAHybridShapeLineAngle(classe) CATImplementBOA(CATIAHybridShapeLineAngle, classe)
#endif

#endif
