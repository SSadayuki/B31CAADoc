#ifndef __TIE_CATIAHybridShapeLinePtPt
#define __TIE_CATIAHybridShapeLinePtPt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeLinePtPt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeLinePtPt */
#define declare_TIE_CATIAHybridShapeLinePtPt(classe) \
 \
 \
class TIECATIAHybridShapeLinePtPt##classe : public CATIAHybridShapeLinePtPt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeLinePtPt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_PtOrigine(CATIAReference *& oPt1); \
      virtual HRESULT __stdcall put_PtOrigine(CATIAReference * iPt1); \
      virtual HRESULT __stdcall get_PtExtremity(CATIAReference *& oPt2); \
      virtual HRESULT __stdcall put_PtExtremity(CATIAReference * iPt2); \
      virtual HRESULT __stdcall get_Support(CATIAReference *& oSurface); \
      virtual HRESULT __stdcall put_Support(CATIAReference * iSurface); \
      virtual HRESULT __stdcall get_BeginOffset(CATIALength *& oStart); \
      virtual HRESULT __stdcall get_EndOffset(CATIALength *& oEnd); \
      virtual HRESULT __stdcall GetLengthType(CATLONG & oType); \
      virtual HRESULT __stdcall SetLengthType(CATLONG iType); \
      virtual HRESULT __stdcall SetSymmetricalExtension(CAT_VARIANT_BOOL iSym); \
      virtual HRESULT __stdcall GetSymmetricalExtension(CAT_VARIANT_BOOL & oSym); \
      virtual HRESULT __stdcall RemoveSupport(); \
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



#define ENVTIEdeclare_CATIAHybridShapeLinePtPt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_PtOrigine(CATIAReference *& oPt1); \
virtual HRESULT __stdcall put_PtOrigine(CATIAReference * iPt1); \
virtual HRESULT __stdcall get_PtExtremity(CATIAReference *& oPt2); \
virtual HRESULT __stdcall put_PtExtremity(CATIAReference * iPt2); \
virtual HRESULT __stdcall get_Support(CATIAReference *& oSurface); \
virtual HRESULT __stdcall put_Support(CATIAReference * iSurface); \
virtual HRESULT __stdcall get_BeginOffset(CATIALength *& oStart); \
virtual HRESULT __stdcall get_EndOffset(CATIALength *& oEnd); \
virtual HRESULT __stdcall GetLengthType(CATLONG & oType); \
virtual HRESULT __stdcall SetLengthType(CATLONG iType); \
virtual HRESULT __stdcall SetSymmetricalExtension(CAT_VARIANT_BOOL iSym); \
virtual HRESULT __stdcall GetSymmetricalExtension(CAT_VARIANT_BOOL & oSym); \
virtual HRESULT __stdcall RemoveSupport(); \
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


#define ENVTIEdefine_CATIAHybridShapeLinePtPt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_PtOrigine(CATIAReference *& oPt1) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtPt,ENVTIETypeLetter,ENVTIELetter)get_PtOrigine(oPt1)); \
} \
HRESULT __stdcall  ENVTIEName::put_PtOrigine(CATIAReference * iPt1) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtPt,ENVTIETypeLetter,ENVTIELetter)put_PtOrigine(iPt1)); \
} \
HRESULT __stdcall  ENVTIEName::get_PtExtremity(CATIAReference *& oPt2) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtPt,ENVTIETypeLetter,ENVTIELetter)get_PtExtremity(oPt2)); \
} \
HRESULT __stdcall  ENVTIEName::put_PtExtremity(CATIAReference * iPt2) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtPt,ENVTIETypeLetter,ENVTIELetter)put_PtExtremity(iPt2)); \
} \
HRESULT __stdcall  ENVTIEName::get_Support(CATIAReference *& oSurface) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtPt,ENVTIETypeLetter,ENVTIELetter)get_Support(oSurface)); \
} \
HRESULT __stdcall  ENVTIEName::put_Support(CATIAReference * iSurface) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtPt,ENVTIETypeLetter,ENVTIELetter)put_Support(iSurface)); \
} \
HRESULT __stdcall  ENVTIEName::get_BeginOffset(CATIALength *& oStart) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtPt,ENVTIETypeLetter,ENVTIELetter)get_BeginOffset(oStart)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndOffset(CATIALength *& oEnd) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtPt,ENVTIETypeLetter,ENVTIELetter)get_EndOffset(oEnd)); \
} \
HRESULT __stdcall  ENVTIEName::GetLengthType(CATLONG & oType) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtPt,ENVTIETypeLetter,ENVTIELetter)GetLengthType(oType)); \
} \
HRESULT __stdcall  ENVTIEName::SetLengthType(CATLONG iType) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtPt,ENVTIETypeLetter,ENVTIELetter)SetLengthType(iType)); \
} \
HRESULT __stdcall  ENVTIEName::SetSymmetricalExtension(CAT_VARIANT_BOOL iSym) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtPt,ENVTIETypeLetter,ENVTIELetter)SetSymmetricalExtension(iSym)); \
} \
HRESULT __stdcall  ENVTIEName::GetSymmetricalExtension(CAT_VARIANT_BOOL & oSym) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtPt,ENVTIETypeLetter,ENVTIELetter)GetSymmetricalExtension(oSym)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveSupport() \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtPt,ENVTIETypeLetter,ENVTIELetter)RemoveSupport()); \
} \
HRESULT __stdcall  ENVTIEName::GetOrigin(CATSafeArrayVariant & oOrigin) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtPt,ENVTIETypeLetter,ENVTIELetter)GetOrigin(oOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::GetDirection(CATSafeArrayVariant & oDirection) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtPt,ENVTIETypeLetter,ENVTIELetter)GetDirection(oDirection)); \
} \
HRESULT __stdcall  ENVTIEName::PutDirection(const CATSafeArrayVariant & iDirection) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtPt,ENVTIETypeLetter,ENVTIELetter)PutDirection(iDirection)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstUptoElem(CATIAReference *& oFirstUpto) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtPt,ENVTIETypeLetter,ENVTIELetter)get_FirstUptoElem(oFirstUpto)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstUptoElem(CATIAReference * iFirstUpto) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtPt,ENVTIETypeLetter,ENVTIELetter)put_FirstUptoElem(iFirstUpto)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondUptoElem(CATIAReference *& oSecondUpto) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtPt,ENVTIETypeLetter,ENVTIELetter)get_SecondUptoElem(oSecondUpto)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondUptoElem(CATIAReference * iSecondUpto) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtPt,ENVTIETypeLetter,ENVTIELetter)put_SecondUptoElem(iSecondUpto)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtPt,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtPt,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtPt,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtPt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtPt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtPt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtPt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtPt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeLinePtPt(classe)    TIECATIAHybridShapeLinePtPt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeLinePtPt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeLinePtPt, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeLinePtPt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeLinePtPt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeLinePtPt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeLinePtPt, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeLinePtPt##classe::get_PtOrigine(CATIAReference *& oPt1) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oPt1); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PtOrigine(oPt1); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oPt1); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtPt##classe::put_PtOrigine(CATIAReference * iPt1) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iPt1); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PtOrigine(iPt1); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iPt1); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtPt##classe::get_PtExtremity(CATIAReference *& oPt2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oPt2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PtExtremity(oPt2); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oPt2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtPt##classe::put_PtExtremity(CATIAReference * iPt2) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iPt2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PtExtremity(iPt2); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iPt2); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtPt##classe::get_Support(CATIAReference *& oSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Support(oSurface); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtPt##classe::put_Support(CATIAReference * iSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Support(iSurface); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtPt##classe::get_BeginOffset(CATIALength *& oStart) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oStart); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BeginOffset(oStart); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oStart); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtPt##classe::get_EndOffset(CATIALength *& oEnd) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oEnd); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndOffset(oEnd); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oEnd); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtPt##classe::GetLengthType(CATLONG & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLengthType(oType); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtPt##classe::SetLengthType(CATLONG iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLengthType(iType); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtPt##classe::SetSymmetricalExtension(CAT_VARIANT_BOOL iSym) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iSym); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSymmetricalExtension(iSym); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iSym); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtPt##classe::GetSymmetricalExtension(CAT_VARIANT_BOOL & oSym) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oSym); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSymmetricalExtension(oSym); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oSym); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtPt##classe::RemoveSupport() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveSupport(); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtPt##classe::GetOrigin(CATSafeArrayVariant & oOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrigin(oOrigin); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtPt##classe::GetDirection(CATSafeArrayVariant & oDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDirection(oDirection); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtPt##classe::PutDirection(const CATSafeArrayVariant & iDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutDirection(iDirection); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtPt##classe::get_FirstUptoElem(CATIAReference *& oFirstUpto) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oFirstUpto); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstUptoElem(oFirstUpto); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oFirstUpto); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtPt##classe::put_FirstUptoElem(CATIAReference * iFirstUpto) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iFirstUpto); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstUptoElem(iFirstUpto); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iFirstUpto); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtPt##classe::get_SecondUptoElem(CATIAReference *& oSecondUpto) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oSecondUpto); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondUptoElem(oSecondUpto); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oSecondUpto); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtPt##classe::put_SecondUptoElem(CATIAReference * iSecondUpto) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iSecondUpto); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondUptoElem(iSecondUpto); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iSecondUpto); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtPt##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtPt##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtPt##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeLinePtPt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeLinePtPt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeLinePtPt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeLinePtPt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeLinePtPt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeLinePtPt(classe) \
 \
 \
declare_TIE_CATIAHybridShapeLinePtPt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeLinePtPt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeLinePtPt,"CATIAHybridShapeLinePtPt",CATIAHybridShapeLinePtPt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeLinePtPt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeLinePtPt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeLinePtPt##classe(classe::MetaObject(),CATIAHybridShapeLinePtPt::MetaObject(),(void *)CreateTIECATIAHybridShapeLinePtPt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeLinePtPt(classe) \
 \
 \
declare_TIE_CATIAHybridShapeLinePtPt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeLinePtPt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeLinePtPt,"CATIAHybridShapeLinePtPt",CATIAHybridShapeLinePtPt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeLinePtPt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeLinePtPt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeLinePtPt##classe(classe::MetaObject(),CATIAHybridShapeLinePtPt::MetaObject(),(void *)CreateTIECATIAHybridShapeLinePtPt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeLinePtPt(classe) TIE_CATIAHybridShapeLinePtPt(classe)
#else
#define BOA_CATIAHybridShapeLinePtPt(classe) CATImplementBOA(CATIAHybridShapeLinePtPt, classe)
#endif

#endif
