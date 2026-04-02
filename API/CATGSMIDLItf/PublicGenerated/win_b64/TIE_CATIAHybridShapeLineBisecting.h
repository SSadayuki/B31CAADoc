#ifndef __TIE_CATIAHybridShapeLineBisecting
#define __TIE_CATIAHybridShapeLineBisecting

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeLineBisecting.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeLineBisecting */
#define declare_TIE_CATIAHybridShapeLineBisecting(classe) \
 \
 \
class TIECATIAHybridShapeLineBisecting##classe : public CATIAHybridShapeLineBisecting \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeLineBisecting, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Elem1(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_Elem1(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_Elem2(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_Elem2(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_RefPoint(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_RefPoint(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_Support(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_Support(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_BeginOffset(CATIALength *& oStart); \
      virtual HRESULT __stdcall get_EndOffset(CATIALength *& oEnd); \
      virtual HRESULT __stdcall get_Orientation(CATLONG & oOrientation); \
      virtual HRESULT __stdcall put_Orientation(CATLONG iOrientation); \
      virtual HRESULT __stdcall get_SolutionType(CAT_VARIANT_BOOL & oSolutionType); \
      virtual HRESULT __stdcall put_SolutionType(CAT_VARIANT_BOOL iSolutionType); \
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



#define ENVTIEdeclare_CATIAHybridShapeLineBisecting(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Elem1(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_Elem1(CATIAReference * iElem); \
virtual HRESULT __stdcall get_Elem2(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_Elem2(CATIAReference * iElem); \
virtual HRESULT __stdcall get_RefPoint(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_RefPoint(CATIAReference * iElem); \
virtual HRESULT __stdcall get_Support(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_Support(CATIAReference * iElem); \
virtual HRESULT __stdcall get_BeginOffset(CATIALength *& oStart); \
virtual HRESULT __stdcall get_EndOffset(CATIALength *& oEnd); \
virtual HRESULT __stdcall get_Orientation(CATLONG & oOrientation); \
virtual HRESULT __stdcall put_Orientation(CATLONG iOrientation); \
virtual HRESULT __stdcall get_SolutionType(CAT_VARIANT_BOOL & oSolutionType); \
virtual HRESULT __stdcall put_SolutionType(CAT_VARIANT_BOOL iSolutionType); \
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


#define ENVTIEdefine_CATIAHybridShapeLineBisecting(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Elem1(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)get_Elem1(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Elem1(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)put_Elem1(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Elem2(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)get_Elem2(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Elem2(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)put_Elem2(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_RefPoint(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)get_RefPoint(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_RefPoint(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)put_RefPoint(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Support(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)get_Support(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Support(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)put_Support(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_BeginOffset(CATIALength *& oStart) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)get_BeginOffset(oStart)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndOffset(CATIALength *& oEnd) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)get_EndOffset(oEnd)); \
} \
HRESULT __stdcall  ENVTIEName::get_Orientation(CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)get_Orientation(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_Orientation(CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)put_Orientation(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_SolutionType(CAT_VARIANT_BOOL & oSolutionType) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)get_SolutionType(oSolutionType)); \
} \
HRESULT __stdcall  ENVTIEName::put_SolutionType(CAT_VARIANT_BOOL iSolutionType) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)put_SolutionType(iSolutionType)); \
} \
HRESULT __stdcall  ENVTIEName::GetLengthType(CATLONG & oType) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)GetLengthType(oType)); \
} \
HRESULT __stdcall  ENVTIEName::SetLengthType(CATLONG iType) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)SetLengthType(iType)); \
} \
HRESULT __stdcall  ENVTIEName::SetSymmetricalExtension(CAT_VARIANT_BOOL iSym) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)SetSymmetricalExtension(iSym)); \
} \
HRESULT __stdcall  ENVTIEName::GetSymmetricalExtension(CAT_VARIANT_BOOL & oSym) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)GetSymmetricalExtension(oSym)); \
} \
HRESULT __stdcall  ENVTIEName::GetOrigin(CATSafeArrayVariant & oOrigin) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)GetOrigin(oOrigin)); \
} \
HRESULT __stdcall  ENVTIEName::GetDirection(CATSafeArrayVariant & oDirection) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)GetDirection(oDirection)); \
} \
HRESULT __stdcall  ENVTIEName::PutDirection(const CATSafeArrayVariant & iDirection) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)PutDirection(iDirection)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstUptoElem(CATIAReference *& oFirstUpto) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)get_FirstUptoElem(oFirstUpto)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstUptoElem(CATIAReference * iFirstUpto) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)put_FirstUptoElem(iFirstUpto)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondUptoElem(CATIAReference *& oSecondUpto) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)get_SecondUptoElem(oSecondUpto)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondUptoElem(CATIAReference * iSecondUpto) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)put_SecondUptoElem(iSecondUpto)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeLineBisecting,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeLineBisecting(classe)    TIECATIAHybridShapeLineBisecting##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeLineBisecting(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeLineBisecting, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeLineBisecting, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeLineBisecting, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeLineBisecting, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeLineBisecting, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeLineBisecting##classe::get_Elem1(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Elem1(oElem); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineBisecting##classe::put_Elem1(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Elem1(iElem); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineBisecting##classe::get_Elem2(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Elem2(oElem); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineBisecting##classe::put_Elem2(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Elem2(iElem); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineBisecting##classe::get_RefPoint(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RefPoint(oElem); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineBisecting##classe::put_RefPoint(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RefPoint(iElem); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineBisecting##classe::get_Support(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Support(oElem); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineBisecting##classe::put_Support(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Support(iElem); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineBisecting##classe::get_BeginOffset(CATIALength *& oStart) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oStart); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BeginOffset(oStart); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oStart); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineBisecting##classe::get_EndOffset(CATIALength *& oEnd) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oEnd); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndOffset(oEnd); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oEnd); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineBisecting##classe::get_Orientation(CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Orientation(oOrientation); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineBisecting##classe::put_Orientation(CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Orientation(iOrientation); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineBisecting##classe::get_SolutionType(CAT_VARIANT_BOOL & oSolutionType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oSolutionType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SolutionType(oSolutionType); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oSolutionType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineBisecting##classe::put_SolutionType(CAT_VARIANT_BOOL iSolutionType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iSolutionType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SolutionType(iSolutionType); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iSolutionType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineBisecting##classe::GetLengthType(CATLONG & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLengthType(oType); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineBisecting##classe::SetLengthType(CATLONG iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLengthType(iType); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineBisecting##classe::SetSymmetricalExtension(CAT_VARIANT_BOOL iSym) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iSym); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSymmetricalExtension(iSym); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iSym); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineBisecting##classe::GetSymmetricalExtension(CAT_VARIANT_BOOL & oSym) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oSym); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSymmetricalExtension(oSym); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oSym); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineBisecting##classe::GetOrigin(CATSafeArrayVariant & oOrigin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oOrigin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOrigin(oOrigin); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oOrigin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineBisecting##classe::GetDirection(CATSafeArrayVariant & oDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDirection(oDirection); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineBisecting##classe::PutDirection(const CATSafeArrayVariant & iDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutDirection(iDirection); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineBisecting##classe::get_FirstUptoElem(CATIAReference *& oFirstUpto) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oFirstUpto); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstUptoElem(oFirstUpto); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oFirstUpto); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineBisecting##classe::put_FirstUptoElem(CATIAReference * iFirstUpto) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iFirstUpto); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstUptoElem(iFirstUpto); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iFirstUpto); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineBisecting##classe::get_SecondUptoElem(CATIAReference *& oSecondUpto) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oSecondUpto); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondUptoElem(oSecondUpto); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oSecondUpto); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineBisecting##classe::put_SecondUptoElem(CATIAReference * iSecondUpto) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iSecondUpto); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondUptoElem(iSecondUpto); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iSecondUpto); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineBisecting##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineBisecting##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeLineBisecting##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeLineBisecting##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeLineBisecting##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeLineBisecting##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeLineBisecting##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeLineBisecting##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeLineBisecting(classe) \
 \
 \
declare_TIE_CATIAHybridShapeLineBisecting(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeLineBisecting##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeLineBisecting,"CATIAHybridShapeLineBisecting",CATIAHybridShapeLineBisecting::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeLineBisecting(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeLineBisecting, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeLineBisecting##classe(classe::MetaObject(),CATIAHybridShapeLineBisecting::MetaObject(),(void *)CreateTIECATIAHybridShapeLineBisecting##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeLineBisecting(classe) \
 \
 \
declare_TIE_CATIAHybridShapeLineBisecting(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeLineBisecting##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeLineBisecting,"CATIAHybridShapeLineBisecting",CATIAHybridShapeLineBisecting::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeLineBisecting(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeLineBisecting, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeLineBisecting##classe(classe::MetaObject(),CATIAHybridShapeLineBisecting::MetaObject(),(void *)CreateTIECATIAHybridShapeLineBisecting##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeLineBisecting(classe) TIE_CATIAHybridShapeLineBisecting(classe)
#else
#define BOA_CATIAHybridShapeLineBisecting(classe) CATImplementBOA(CATIAHybridShapeLineBisecting, classe)
#endif

#endif
