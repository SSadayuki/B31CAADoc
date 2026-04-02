#ifndef __TIE_CATIAHybridShapeExtrude
#define __TIE_CATIAHybridShapeExtrude

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeExtrude.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeExtrude */
#define declare_TIE_CATIAHybridShapeExtrude(classe) \
 \
 \
class TIECATIAHybridShapeExtrude##classe : public CATIAHybridShapeExtrude \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeExtrude, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_BeginOffset(CATIALength *& oExtrude); \
      virtual HRESULT __stdcall get_EndOffset(CATIALength *& oExtrude); \
      virtual HRESULT __stdcall get_Direction(CATIAHybridShapeDirection *& oDir); \
      virtual HRESULT __stdcall put_Direction(CATIAHybridShapeDirection * iDir); \
      virtual HRESULT __stdcall get_ExtrudedObject(CATIAReference *& oFaceToExtrude); \
      virtual HRESULT __stdcall put_ExtrudedObject(CATIAReference * oFaceToExtrude); \
      virtual HRESULT __stdcall get_Context(CATLONG & oContext); \
      virtual HRESULT __stdcall put_Context(CATLONG iContext); \
      virtual HRESULT __stdcall put_Orientation(CAT_VARIANT_BOOL iOrientation); \
      virtual HRESULT __stdcall get_Orientation(CAT_VARIANT_BOOL & oOrientation); \
      virtual HRESULT __stdcall get_FirstLimitType(CATLONG & oLim1Type); \
      virtual HRESULT __stdcall put_FirstLimitType(CATLONG iLim1Type); \
      virtual HRESULT __stdcall get_SecondLimitType(CATLONG & oLim2Type); \
      virtual HRESULT __stdcall put_SecondLimitType(CATLONG iLim2Type); \
      virtual HRESULT __stdcall get_FirstUptoElement(CATIAReference *& oLim1Elem); \
      virtual HRESULT __stdcall put_FirstUptoElement(CATIAReference * iLim1Elem); \
      virtual HRESULT __stdcall get_SecondUptoElement(CATIAReference *& oLim2Elem); \
      virtual HRESULT __stdcall put_SecondUptoElement(CATIAReference * iLim2Elem); \
      virtual HRESULT __stdcall get_SymmetricalExtension(CAT_VARIANT_BOOL & oSym); \
      virtual HRESULT __stdcall put_SymmetricalExtension(CAT_VARIANT_BOOL iSym); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeExtrude(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_BeginOffset(CATIALength *& oExtrude); \
virtual HRESULT __stdcall get_EndOffset(CATIALength *& oExtrude); \
virtual HRESULT __stdcall get_Direction(CATIAHybridShapeDirection *& oDir); \
virtual HRESULT __stdcall put_Direction(CATIAHybridShapeDirection * iDir); \
virtual HRESULT __stdcall get_ExtrudedObject(CATIAReference *& oFaceToExtrude); \
virtual HRESULT __stdcall put_ExtrudedObject(CATIAReference * oFaceToExtrude); \
virtual HRESULT __stdcall get_Context(CATLONG & oContext); \
virtual HRESULT __stdcall put_Context(CATLONG iContext); \
virtual HRESULT __stdcall put_Orientation(CAT_VARIANT_BOOL iOrientation); \
virtual HRESULT __stdcall get_Orientation(CAT_VARIANT_BOOL & oOrientation); \
virtual HRESULT __stdcall get_FirstLimitType(CATLONG & oLim1Type); \
virtual HRESULT __stdcall put_FirstLimitType(CATLONG iLim1Type); \
virtual HRESULT __stdcall get_SecondLimitType(CATLONG & oLim2Type); \
virtual HRESULT __stdcall put_SecondLimitType(CATLONG iLim2Type); \
virtual HRESULT __stdcall get_FirstUptoElement(CATIAReference *& oLim1Elem); \
virtual HRESULT __stdcall put_FirstUptoElement(CATIAReference * iLim1Elem); \
virtual HRESULT __stdcall get_SecondUptoElement(CATIAReference *& oLim2Elem); \
virtual HRESULT __stdcall put_SecondUptoElement(CATIAReference * iLim2Elem); \
virtual HRESULT __stdcall get_SymmetricalExtension(CAT_VARIANT_BOOL & oSym); \
virtual HRESULT __stdcall put_SymmetricalExtension(CAT_VARIANT_BOOL iSym); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeExtrude(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_BeginOffset(CATIALength *& oExtrude) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrude,ENVTIETypeLetter,ENVTIELetter)get_BeginOffset(oExtrude)); \
} \
HRESULT __stdcall  ENVTIEName::get_EndOffset(CATIALength *& oExtrude) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrude,ENVTIETypeLetter,ENVTIELetter)get_EndOffset(oExtrude)); \
} \
HRESULT __stdcall  ENVTIEName::get_Direction(CATIAHybridShapeDirection *& oDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrude,ENVTIETypeLetter,ENVTIELetter)get_Direction(oDir)); \
} \
HRESULT __stdcall  ENVTIEName::put_Direction(CATIAHybridShapeDirection * iDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrude,ENVTIETypeLetter,ENVTIELetter)put_Direction(iDir)); \
} \
HRESULT __stdcall  ENVTIEName::get_ExtrudedObject(CATIAReference *& oFaceToExtrude) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrude,ENVTIETypeLetter,ENVTIELetter)get_ExtrudedObject(oFaceToExtrude)); \
} \
HRESULT __stdcall  ENVTIEName::put_ExtrudedObject(CATIAReference * oFaceToExtrude) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrude,ENVTIETypeLetter,ENVTIELetter)put_ExtrudedObject(oFaceToExtrude)); \
} \
HRESULT __stdcall  ENVTIEName::get_Context(CATLONG & oContext) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrude,ENVTIETypeLetter,ENVTIELetter)get_Context(oContext)); \
} \
HRESULT __stdcall  ENVTIEName::put_Context(CATLONG iContext) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrude,ENVTIETypeLetter,ENVTIELetter)put_Context(iContext)); \
} \
HRESULT __stdcall  ENVTIEName::put_Orientation(CAT_VARIANT_BOOL iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrude,ENVTIETypeLetter,ENVTIELetter)put_Orientation(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_Orientation(CAT_VARIANT_BOOL & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrude,ENVTIETypeLetter,ENVTIELetter)get_Orientation(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstLimitType(CATLONG & oLim1Type) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrude,ENVTIETypeLetter,ENVTIELetter)get_FirstLimitType(oLim1Type)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstLimitType(CATLONG iLim1Type) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrude,ENVTIETypeLetter,ENVTIELetter)put_FirstLimitType(iLim1Type)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondLimitType(CATLONG & oLim2Type) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrude,ENVTIETypeLetter,ENVTIELetter)get_SecondLimitType(oLim2Type)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondLimitType(CATLONG iLim2Type) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrude,ENVTIETypeLetter,ENVTIELetter)put_SecondLimitType(iLim2Type)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstUptoElement(CATIAReference *& oLim1Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrude,ENVTIETypeLetter,ENVTIELetter)get_FirstUptoElement(oLim1Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstUptoElement(CATIAReference * iLim1Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrude,ENVTIETypeLetter,ENVTIELetter)put_FirstUptoElement(iLim1Elem)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondUptoElement(CATIAReference *& oLim2Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrude,ENVTIETypeLetter,ENVTIELetter)get_SecondUptoElement(oLim2Elem)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondUptoElement(CATIAReference * iLim2Elem) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrude,ENVTIETypeLetter,ENVTIELetter)put_SecondUptoElement(iLim2Elem)); \
} \
HRESULT __stdcall  ENVTIEName::get_SymmetricalExtension(CAT_VARIANT_BOOL & oSym) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrude,ENVTIETypeLetter,ENVTIELetter)get_SymmetricalExtension(oSym)); \
} \
HRESULT __stdcall  ENVTIEName::put_SymmetricalExtension(CAT_VARIANT_BOOL iSym) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrude,ENVTIETypeLetter,ENVTIELetter)put_SymmetricalExtension(iSym)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrude,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrude,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrude,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrude,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrude,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrude,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrude,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtrude,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeExtrude(classe)    TIECATIAHybridShapeExtrude##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeExtrude(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeExtrude, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeExtrude, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeExtrude, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeExtrude, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeExtrude, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeExtrude##classe::get_BeginOffset(CATIALength *& oExtrude) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oExtrude); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BeginOffset(oExtrude); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oExtrude); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrude##classe::get_EndOffset(CATIALength *& oExtrude) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oExtrude); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EndOffset(oExtrude); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oExtrude); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrude##classe::get_Direction(CATIAHybridShapeDirection *& oDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Direction(oDir); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrude##classe::put_Direction(CATIAHybridShapeDirection * iDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Direction(iDir); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrude##classe::get_ExtrudedObject(CATIAReference *& oFaceToExtrude) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oFaceToExtrude); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExtrudedObject(oFaceToExtrude); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oFaceToExtrude); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrude##classe::put_ExtrudedObject(CATIAReference * oFaceToExtrude) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oFaceToExtrude); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ExtrudedObject(oFaceToExtrude); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oFaceToExtrude); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrude##classe::get_Context(CATLONG & oContext) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oContext); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Context(oContext); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oContext); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrude##classe::put_Context(CATLONG iContext) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iContext); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Context(iContext); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iContext); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrude##classe::put_Orientation(CAT_VARIANT_BOOL iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Orientation(iOrientation); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrude##classe::get_Orientation(CAT_VARIANT_BOOL & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Orientation(oOrientation); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrude##classe::get_FirstLimitType(CATLONG & oLim1Type) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oLim1Type); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstLimitType(oLim1Type); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oLim1Type); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrude##classe::put_FirstLimitType(CATLONG iLim1Type) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLim1Type); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstLimitType(iLim1Type); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLim1Type); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrude##classe::get_SecondLimitType(CATLONG & oLim2Type) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oLim2Type); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondLimitType(oLim2Type); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oLim2Type); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrude##classe::put_SecondLimitType(CATLONG iLim2Type) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iLim2Type); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondLimitType(iLim2Type); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iLim2Type); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrude##classe::get_FirstUptoElement(CATIAReference *& oLim1Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oLim1Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstUptoElement(oLim1Elem); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oLim1Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrude##classe::put_FirstUptoElement(CATIAReference * iLim1Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLim1Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstUptoElement(iLim1Elem); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLim1Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrude##classe::get_SecondUptoElement(CATIAReference *& oLim2Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oLim2Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondUptoElement(oLim2Elem); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oLim2Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrude##classe::put_SecondUptoElement(CATIAReference * iLim2Elem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iLim2Elem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondUptoElement(iLim2Elem); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iLim2Elem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrude##classe::get_SymmetricalExtension(CAT_VARIANT_BOOL & oSym) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oSym); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SymmetricalExtension(oSym); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oSym); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrude##classe::put_SymmetricalExtension(CAT_VARIANT_BOOL iSym) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iSym); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SymmetricalExtension(iSym); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iSym); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrude##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrude##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtrude##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeExtrude##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeExtrude##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeExtrude##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeExtrude##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeExtrude##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeExtrude(classe) \
 \
 \
declare_TIE_CATIAHybridShapeExtrude(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeExtrude##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeExtrude,"CATIAHybridShapeExtrude",CATIAHybridShapeExtrude::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeExtrude(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeExtrude, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeExtrude##classe(classe::MetaObject(),CATIAHybridShapeExtrude::MetaObject(),(void *)CreateTIECATIAHybridShapeExtrude##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeExtrude(classe) \
 \
 \
declare_TIE_CATIAHybridShapeExtrude(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeExtrude##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeExtrude,"CATIAHybridShapeExtrude",CATIAHybridShapeExtrude::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeExtrude(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeExtrude, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeExtrude##classe(classe::MetaObject(),CATIAHybridShapeExtrude::MetaObject(),(void *)CreateTIECATIAHybridShapeExtrude##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeExtrude(classe) TIE_CATIAHybridShapeExtrude(classe)
#else
#define BOA_CATIAHybridShapeExtrude(classe) CATImplementBOA(CATIAHybridShapeExtrude, classe)
#endif

#endif
