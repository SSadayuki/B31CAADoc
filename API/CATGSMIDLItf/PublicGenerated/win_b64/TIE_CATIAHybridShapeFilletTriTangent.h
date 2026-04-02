#ifndef __TIE_CATIAHybridShapeFilletTriTangent
#define __TIE_CATIAHybridShapeFilletTriTangent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeFilletTriTangent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeFilletTriTangent */
#define declare_TIE_CATIAHybridShapeFilletTriTangent(classe) \
 \
 \
class TIECATIAHybridShapeFilletTriTangent##classe : public CATIAHybridShapeFilletTriTangent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeFilletTriTangent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_FirstElem(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_FirstElem(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_SecondElem(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_SecondElem(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_RemoveElem(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_RemoveElem(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_FirstOrientation(CATLONG & oOrientation); \
      virtual HRESULT __stdcall put_FirstOrientation(CATLONG iOrientation); \
      virtual HRESULT __stdcall get_SecondOrientation(CATLONG & oOrientation); \
      virtual HRESULT __stdcall put_SecondOrientation(CATLONG iOrientation); \
      virtual HRESULT __stdcall get_RemoveOrientation(CATLONG & oOrientation); \
      virtual HRESULT __stdcall put_RemoveOrientation(CATLONG iOrientation); \
      virtual HRESULT __stdcall get_SupportsTrimMode(CATLONG & oTrimMode); \
      virtual HRESULT __stdcall put_SupportsTrimMode(CATLONG iTrimMode); \
      virtual HRESULT __stdcall get_RibbonRelimitationMode(CATLONG & oRelimitationMode); \
      virtual HRESULT __stdcall put_RibbonRelimitationMode(CATLONG iRelimitationMode); \
      virtual HRESULT __stdcall InvertFirstOrientation(); \
      virtual HRESULT __stdcall InvertSecondOrientation(); \
      virtual HRESULT __stdcall InvertRemoveOrientation(); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeFilletTriTangent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_FirstElem(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_FirstElem(CATIAReference * iElem); \
virtual HRESULT __stdcall get_SecondElem(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_SecondElem(CATIAReference * iElem); \
virtual HRESULT __stdcall get_RemoveElem(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_RemoveElem(CATIAReference * iElem); \
virtual HRESULT __stdcall get_FirstOrientation(CATLONG & oOrientation); \
virtual HRESULT __stdcall put_FirstOrientation(CATLONG iOrientation); \
virtual HRESULT __stdcall get_SecondOrientation(CATLONG & oOrientation); \
virtual HRESULT __stdcall put_SecondOrientation(CATLONG iOrientation); \
virtual HRESULT __stdcall get_RemoveOrientation(CATLONG & oOrientation); \
virtual HRESULT __stdcall put_RemoveOrientation(CATLONG iOrientation); \
virtual HRESULT __stdcall get_SupportsTrimMode(CATLONG & oTrimMode); \
virtual HRESULT __stdcall put_SupportsTrimMode(CATLONG iTrimMode); \
virtual HRESULT __stdcall get_RibbonRelimitationMode(CATLONG & oRelimitationMode); \
virtual HRESULT __stdcall put_RibbonRelimitationMode(CATLONG iRelimitationMode); \
virtual HRESULT __stdcall InvertFirstOrientation(); \
virtual HRESULT __stdcall InvertSecondOrientation(); \
virtual HRESULT __stdcall InvertRemoveOrientation(); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeFilletTriTangent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_FirstElem(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletTriTangent,ENVTIETypeLetter,ENVTIELetter)get_FirstElem(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstElem(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletTriTangent,ENVTIETypeLetter,ENVTIELetter)put_FirstElem(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondElem(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletTriTangent,ENVTIETypeLetter,ENVTIELetter)get_SecondElem(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondElem(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletTriTangent,ENVTIETypeLetter,ENVTIELetter)put_SecondElem(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_RemoveElem(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletTriTangent,ENVTIETypeLetter,ENVTIELetter)get_RemoveElem(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_RemoveElem(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletTriTangent,ENVTIETypeLetter,ENVTIELetter)put_RemoveElem(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstOrientation(CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletTriTangent,ENVTIETypeLetter,ENVTIELetter)get_FirstOrientation(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstOrientation(CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletTriTangent,ENVTIETypeLetter,ENVTIELetter)put_FirstOrientation(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondOrientation(CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletTriTangent,ENVTIETypeLetter,ENVTIELetter)get_SecondOrientation(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondOrientation(CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletTriTangent,ENVTIETypeLetter,ENVTIELetter)put_SecondOrientation(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_RemoveOrientation(CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletTriTangent,ENVTIETypeLetter,ENVTIELetter)get_RemoveOrientation(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_RemoveOrientation(CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletTriTangent,ENVTIETypeLetter,ENVTIELetter)put_RemoveOrientation(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_SupportsTrimMode(CATLONG & oTrimMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletTriTangent,ENVTIETypeLetter,ENVTIELetter)get_SupportsTrimMode(oTrimMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_SupportsTrimMode(CATLONG iTrimMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletTriTangent,ENVTIETypeLetter,ENVTIELetter)put_SupportsTrimMode(iTrimMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_RibbonRelimitationMode(CATLONG & oRelimitationMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletTriTangent,ENVTIETypeLetter,ENVTIELetter)get_RibbonRelimitationMode(oRelimitationMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_RibbonRelimitationMode(CATLONG iRelimitationMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletTriTangent,ENVTIETypeLetter,ENVTIELetter)put_RibbonRelimitationMode(iRelimitationMode)); \
} \
HRESULT __stdcall  ENVTIEName::InvertFirstOrientation() \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletTriTangent,ENVTIETypeLetter,ENVTIELetter)InvertFirstOrientation()); \
} \
HRESULT __stdcall  ENVTIEName::InvertSecondOrientation() \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletTriTangent,ENVTIETypeLetter,ENVTIELetter)InvertSecondOrientation()); \
} \
HRESULT __stdcall  ENVTIEName::InvertRemoveOrientation() \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletTriTangent,ENVTIETypeLetter,ENVTIELetter)InvertRemoveOrientation()); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletTriTangent,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletTriTangent,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletTriTangent,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletTriTangent,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletTriTangent,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletTriTangent,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletTriTangent,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeFilletTriTangent,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeFilletTriTangent(classe)    TIECATIAHybridShapeFilletTriTangent##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeFilletTriTangent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeFilletTriTangent, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeFilletTriTangent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeFilletTriTangent, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeFilletTriTangent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeFilletTriTangent, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeFilletTriTangent##classe::get_FirstElem(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstElem(oElem); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletTriTangent##classe::put_FirstElem(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstElem(iElem); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletTriTangent##classe::get_SecondElem(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondElem(oElem); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletTriTangent##classe::put_SecondElem(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondElem(iElem); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletTriTangent##classe::get_RemoveElem(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RemoveElem(oElem); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletTriTangent##classe::put_RemoveElem(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RemoveElem(iElem); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletTriTangent##classe::get_FirstOrientation(CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstOrientation(oOrientation); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletTriTangent##classe::put_FirstOrientation(CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstOrientation(iOrientation); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletTriTangent##classe::get_SecondOrientation(CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondOrientation(oOrientation); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletTriTangent##classe::put_SecondOrientation(CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondOrientation(iOrientation); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletTriTangent##classe::get_RemoveOrientation(CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RemoveOrientation(oOrientation); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletTriTangent##classe::put_RemoveOrientation(CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RemoveOrientation(iOrientation); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletTriTangent##classe::get_SupportsTrimMode(CATLONG & oTrimMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oTrimMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SupportsTrimMode(oTrimMode); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oTrimMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletTriTangent##classe::put_SupportsTrimMode(CATLONG iTrimMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iTrimMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SupportsTrimMode(iTrimMode); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iTrimMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletTriTangent##classe::get_RibbonRelimitationMode(CATLONG & oRelimitationMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oRelimitationMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RibbonRelimitationMode(oRelimitationMode); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oRelimitationMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletTriTangent##classe::put_RibbonRelimitationMode(CATLONG iRelimitationMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iRelimitationMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RibbonRelimitationMode(iRelimitationMode); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iRelimitationMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletTriTangent##classe::InvertFirstOrientation() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InvertFirstOrientation(); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletTriTangent##classe::InvertSecondOrientation() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InvertSecondOrientation(); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletTriTangent##classe::InvertRemoveOrientation() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InvertRemoveOrientation(); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletTriTangent##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletTriTangent##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeFilletTriTangent##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeFilletTriTangent##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeFilletTriTangent##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeFilletTriTangent##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeFilletTriTangent##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeFilletTriTangent##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeFilletTriTangent(classe) \
 \
 \
declare_TIE_CATIAHybridShapeFilletTriTangent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeFilletTriTangent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeFilletTriTangent,"CATIAHybridShapeFilletTriTangent",CATIAHybridShapeFilletTriTangent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeFilletTriTangent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeFilletTriTangent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeFilletTriTangent##classe(classe::MetaObject(),CATIAHybridShapeFilletTriTangent::MetaObject(),(void *)CreateTIECATIAHybridShapeFilletTriTangent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeFilletTriTangent(classe) \
 \
 \
declare_TIE_CATIAHybridShapeFilletTriTangent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeFilletTriTangent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeFilletTriTangent,"CATIAHybridShapeFilletTriTangent",CATIAHybridShapeFilletTriTangent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeFilletTriTangent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeFilletTriTangent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeFilletTriTangent##classe(classe::MetaObject(),CATIAHybridShapeFilletTriTangent::MetaObject(),(void *)CreateTIECATIAHybridShapeFilletTriTangent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeFilletTriTangent(classe) TIE_CATIAHybridShapeFilletTriTangent(classe)
#else
#define BOA_CATIAHybridShapeFilletTriTangent(classe) CATImplementBOA(CATIAHybridShapeFilletTriTangent, classe)
#endif

#endif
