#ifndef __TIE_CATIAHybridShapeLinePtDir
#define __TIE_CATIAHybridShapeLinePtDir

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeLinePtDir.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeLinePtDir */
#define declare_TIE_CATIAHybridShapeLinePtDir(classe) \
 \
 \
class TIECATIAHybridShapeLinePtDir##classe : public CATIAHybridShapeLinePtDir \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeLinePtDir, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Point(CATIAReference *& oPoint); \
      virtual HRESULT __stdcall put_Point(CATIAReference * iPoint); \
      virtual HRESULT __stdcall get_BeginOffset(CATIALength *& oStart); \
      virtual HRESULT __stdcall get_EndOffset(CATIALength *& oEnd); \
      virtual HRESULT __stdcall get_Dir(CATIAHybridShapeDirection *& oDir); \
      virtual HRESULT __stdcall put_Dir(CATIAHybridShapeDirection * iDir); \
      virtual HRESULT __stdcall get_Support(CATIAReference *& oSurface); \
      virtual HRESULT __stdcall put_Support(CATIAReference * iSurface); \
      virtual HRESULT __stdcall get_Orientation(CATLONG & oOrientation); \
      virtual HRESULT __stdcall put_Orientation(CATLONG iOrientation); \
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



#define ENVTIEdeclare_CATIAHybridShapeLinePtDir(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Point(CATIAReference *& oPoint); \
virtual HRESULT __stdcall put_Point(CATIAReference * iPoint); \
virtual HRESULT __stdcall get_BeginOffset(CATIALength *& oStart); \
virtual HRESULT __stdcall get_EndOffset(CATIALength *& oEnd); \
virtual HRESULT __stdcall get_Dir(CATIAHybridShapeDirection *& oDir); \
virtual HRESULT __stdcall put_Dir(CATIAHybridShapeDirection * iDir); \
virtual HRESULT __stdcall get_Support(CATIAReference *& oSurface); \
virtual HRESULT __stdcall put_Support(CATIAReference * iSurface); \
virtual HRESULT __stdcall get_Orientation(CATLONG & oOrientation); \
virtual HRESULT __stdcall put_Orientation(CATLONG iOrientation); \
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


#define ENVTIEdefine_CATIAHybridShapeLinePtDir(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Point(CATIAReference *& oPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtDir,ENVTIETypeLetter,ENVTIELetter)get_Point(oPoint)); \
} \
HRESULT __stdcall  ENVTIEName::put_Point(CATIAReference * iPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtDir,ENVTIETypeLetter,ENVTIELetter)put_Point(iPoint)); \
} \
HRESULT __stdcall  ENVTIEName::get_BeginOffset(CATIALength *& oStart) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtDir,ENVTIETypeLetter,ENVTIELetter)get_BeginOffset(oStart)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndOffset(CATIALength *& oEnd) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtDir,ENVTIETypeLetter,ENVTIELetter)get_EndOffset(oEnd)); \
} \
HRESULT __stdcall  ENVTIEName::get_Dir(CATIAHybridShapeDirection *& oDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtDir,ENVTIETypeLetter,ENVTIELetter)get_Dir(oDir)); \
} \
HRESULT __stdcall  ENVTIEName::put_Dir(CATIAHybridShapeDirection * iDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtDir,ENVTIETypeLetter,ENVTIELetter)put_Dir(iDir)); \
} \
HRESULT __stdcall  ENVTIEName::get_Support(CATIAReference *& oSurface) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtDir,ENVTIETypeLetter,ENVTIELetter)get_Support(oSurface)); \
} \
HRESULT __stdcall  ENVTIEName::put_Support(CATIAReference * iSurface) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtDir,ENVTIETypeLetter,ENVTIELetter)put_Support(iSurface)); \
} \
HRESULT __stdcall  ENVTIEName::get_Orientation(CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtDir,ENVTIETypeLetter,ENVTIELetter)get_Orientation(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_Orientation(CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtDir,ENVTIETypeLetter,ENVTIELetter)put_Orientation(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::GetLengthType(CATLONG & oType) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtDir,ENVTIETypeLetter,ENVTIELetter)GetLengthType(oType)); \
} \
HRESULT __stdcall  ENVTIEName::SetLengthType(CATLONG iType) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtDir,ENVTIETypeLetter,ENVTIELetter)SetLengthType(iType)); \
} \
HRESULT __stdcall  ENVTIEName::SetSymmetricalExtension(CAT_VARIANT_BOOL iSym) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtDir,ENVTIETypeLetter,ENVTIELetter)SetSymmetricalExtension(iSym)); \
} \
HRESULT __stdcall  ENVTIEName::GetSymmetricalExtension(CAT_VARIANT_BOOL & oSym) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtDir,ENVTIETypeLetter,ENVTIELetter)GetSymmetricalExtension(oSym)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveSupport() \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtDir,ENVTIETypeLetter,ENVTIELetter)RemoveSupport()); \
} \
HRESULT __stdcall  ENVTIEName::GetOrigin(CATSafeArrayVariant & oOrigin) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtDir,ENVTIETypeLetter,ENVTIELetter)GetOrigin(oOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::GetDirection(CATSafeArrayVariant & oDirection) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtDir,ENVTIETypeLetter,ENVTIELetter)GetDirection(oDirection)); \
} \
HRESULT __stdcall  ENVTIEName::PutDirection(const CATSafeArrayVariant & iDirection) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtDir,ENVTIETypeLetter,ENVTIELetter)PutDirection(iDirection)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstUptoElem(CATIAReference *& oFirstUpto) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtDir,ENVTIETypeLetter,ENVTIELetter)get_FirstUptoElem(oFirstUpto)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstUptoElem(CATIAReference * iFirstUpto) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtDir,ENVTIETypeLetter,ENVTIELetter)put_FirstUptoElem(iFirstUpto)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondUptoElem(CATIAReference *& oSecondUpto) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtDir,ENVTIETypeLetter,ENVTIELetter)get_SecondUptoElem(oSecondUpto)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondUptoElem(CATIAReference * iSecondUpto) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtDir,ENVTIETypeLetter,ENVTIELetter)put_SecondUptoElem(iSecondUpto)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtDir,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtDir,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtDir,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtDir,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtDir,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtDir,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtDir,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeLinePtDir,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeLinePtDir(classe)    TIECATIAHybridShapeLinePtDir##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeLinePtDir(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeLinePtDir, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeLinePtDir, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeLinePtDir, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeLinePtDir, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeLinePtDir, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeLinePtDir##classe::get_Point(CATIAReference *& oPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Point(oPoint); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtDir##classe::put_Point(CATIAReference * iPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Point(iPoint); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtDir##classe::get_BeginOffset(CATIALength *& oStart) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oStart); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BeginOffset(oStart); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oStart); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtDir##classe::get_EndOffset(CATIALength *& oEnd) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oEnd); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndOffset(oEnd); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oEnd); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtDir##classe::get_Dir(CATIAHybridShapeDirection *& oDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Dir(oDir); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtDir##classe::put_Dir(CATIAHybridShapeDirection * iDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Dir(iDir); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtDir##classe::get_Support(CATIAReference *& oSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Support(oSurface); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtDir##classe::put_Support(CATIAReference * iSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Support(iSurface); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtDir##classe::get_Orientation(CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Orientation(oOrientation); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtDir##classe::put_Orientation(CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Orientation(iOrientation); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtDir##classe::GetLengthType(CATLONG & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLengthType(oType); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtDir##classe::SetLengthType(CATLONG iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLengthType(iType); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtDir##classe::SetSymmetricalExtension(CAT_VARIANT_BOOL iSym) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iSym); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSymmetricalExtension(iSym); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iSym); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtDir##classe::GetSymmetricalExtension(CAT_VARIANT_BOOL & oSym) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oSym); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSymmetricalExtension(oSym); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oSym); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtDir##classe::RemoveSupport() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveSupport(); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtDir##classe::GetOrigin(CATSafeArrayVariant & oOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrigin(oOrigin); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtDir##classe::GetDirection(CATSafeArrayVariant & oDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDirection(oDirection); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtDir##classe::PutDirection(const CATSafeArrayVariant & iDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutDirection(iDirection); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtDir##classe::get_FirstUptoElem(CATIAReference *& oFirstUpto) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oFirstUpto); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstUptoElem(oFirstUpto); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oFirstUpto); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtDir##classe::put_FirstUptoElem(CATIAReference * iFirstUpto) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iFirstUpto); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstUptoElem(iFirstUpto); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iFirstUpto); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtDir##classe::get_SecondUptoElem(CATIAReference *& oSecondUpto) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oSecondUpto); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondUptoElem(oSecondUpto); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oSecondUpto); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtDir##classe::put_SecondUptoElem(CATIAReference * iSecondUpto) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iSecondUpto); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondUptoElem(iSecondUpto); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iSecondUpto); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtDir##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtDir##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLinePtDir##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeLinePtDir##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeLinePtDir##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeLinePtDir##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeLinePtDir##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeLinePtDir##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeLinePtDir(classe) \
 \
 \
declare_TIE_CATIAHybridShapeLinePtDir(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeLinePtDir##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeLinePtDir,"CATIAHybridShapeLinePtDir",CATIAHybridShapeLinePtDir::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeLinePtDir(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeLinePtDir, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeLinePtDir##classe(classe::MetaObject(),CATIAHybridShapeLinePtDir::MetaObject(),(void *)CreateTIECATIAHybridShapeLinePtDir##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeLinePtDir(classe) \
 \
 \
declare_TIE_CATIAHybridShapeLinePtDir(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeLinePtDir##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeLinePtDir,"CATIAHybridShapeLinePtDir",CATIAHybridShapeLinePtDir::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeLinePtDir(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeLinePtDir, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeLinePtDir##classe(classe::MetaObject(),CATIAHybridShapeLinePtDir::MetaObject(),(void *)CreateTIECATIAHybridShapeLinePtDir##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeLinePtDir(classe) TIE_CATIAHybridShapeLinePtDir(classe)
#else
#define BOA_CATIAHybridShapeLinePtDir(classe) CATImplementBOA(CATIAHybridShapeLinePtDir, classe)
#endif

#endif
