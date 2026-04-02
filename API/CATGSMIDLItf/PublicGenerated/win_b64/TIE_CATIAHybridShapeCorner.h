#ifndef __TIE_CATIAHybridShapeCorner
#define __TIE_CATIAHybridShapeCorner

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeCorner.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeCorner */
#define declare_TIE_CATIAHybridShapeCorner(classe) \
 \
 \
class TIECATIAHybridShapeCorner##classe : public CATIAHybridShapeCorner \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeCorner, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_FirstElem(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_FirstElem(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_SecondElem(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_SecondElem(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_Support(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_Support(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_Direction(CATIAHybridShapeDirection *& oElem); \
      virtual HRESULT __stdcall put_Direction(CATIAHybridShapeDirection * iElem); \
      virtual HRESULT __stdcall get_Radius(CATIALength *& oRadius); \
      virtual HRESULT __stdcall get_FirstOrientation(CATLONG & oOrientation); \
      virtual HRESULT __stdcall put_FirstOrientation(CATLONG iOrientation); \
      virtual HRESULT __stdcall get_SecondOrientation(CATLONG & oOrientation); \
      virtual HRESULT __stdcall put_SecondOrientation(CATLONG iOrientation); \
      virtual HRESULT __stdcall get_DiscriminationIndex(CATLONG & oDiscriminationIndex); \
      virtual HRESULT __stdcall put_DiscriminationIndex(CATLONG iDiscriminationIndex); \
      virtual HRESULT __stdcall get_Trim(CAT_VARIANT_BOOL & oTrim); \
      virtual HRESULT __stdcall put_Trim(CAT_VARIANT_BOOL iTrim); \
      virtual HRESULT __stdcall get_TrimMode(CATLONG & oTrim); \
      virtual HRESULT __stdcall put_TrimMode(CATLONG iTrim); \
      virtual HRESULT __stdcall InvertFirstOrientation(); \
      virtual HRESULT __stdcall InvertSecondOrientation(); \
      virtual HRESULT __stdcall get_BeginOfCorner(CATLONG & oNumWireBegin); \
      virtual HRESULT __stdcall put_BeginOfCorner(CATLONG iNumWireBegin); \
      virtual HRESULT __stdcall get_FirstTangentOrientation(CATLONG & oOrientation); \
      virtual HRESULT __stdcall put_FirstTangentOrientation(CATLONG iOrientation); \
      virtual HRESULT __stdcall get_SecondTangentOrientation(CATLONG & oOrientation); \
      virtual HRESULT __stdcall put_SecondTangentOrientation(CATLONG iOrientation); \
      virtual HRESULT __stdcall get_CornerType(CATLONG & oCornerType); \
      virtual HRESULT __stdcall put_CornerType(CATLONG iCornerType); \
      virtual HRESULT __stdcall get_OnVertex(CAT_VARIANT_BOOL & oOnVertex); \
      virtual HRESULT __stdcall put_OnVertex(CAT_VARIANT_BOOL iOnVertex); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeCorner(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_FirstElem(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_FirstElem(CATIAReference * iElem); \
virtual HRESULT __stdcall get_SecondElem(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_SecondElem(CATIAReference * iElem); \
virtual HRESULT __stdcall get_Support(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_Support(CATIAReference * iElem); \
virtual HRESULT __stdcall get_Direction(CATIAHybridShapeDirection *& oElem); \
virtual HRESULT __stdcall put_Direction(CATIAHybridShapeDirection * iElem); \
virtual HRESULT __stdcall get_Radius(CATIALength *& oRadius); \
virtual HRESULT __stdcall get_FirstOrientation(CATLONG & oOrientation); \
virtual HRESULT __stdcall put_FirstOrientation(CATLONG iOrientation); \
virtual HRESULT __stdcall get_SecondOrientation(CATLONG & oOrientation); \
virtual HRESULT __stdcall put_SecondOrientation(CATLONG iOrientation); \
virtual HRESULT __stdcall get_DiscriminationIndex(CATLONG & oDiscriminationIndex); \
virtual HRESULT __stdcall put_DiscriminationIndex(CATLONG iDiscriminationIndex); \
virtual HRESULT __stdcall get_Trim(CAT_VARIANT_BOOL & oTrim); \
virtual HRESULT __stdcall put_Trim(CAT_VARIANT_BOOL iTrim); \
virtual HRESULT __stdcall get_TrimMode(CATLONG & oTrim); \
virtual HRESULT __stdcall put_TrimMode(CATLONG iTrim); \
virtual HRESULT __stdcall InvertFirstOrientation(); \
virtual HRESULT __stdcall InvertSecondOrientation(); \
virtual HRESULT __stdcall get_BeginOfCorner(CATLONG & oNumWireBegin); \
virtual HRESULT __stdcall put_BeginOfCorner(CATLONG iNumWireBegin); \
virtual HRESULT __stdcall get_FirstTangentOrientation(CATLONG & oOrientation); \
virtual HRESULT __stdcall put_FirstTangentOrientation(CATLONG iOrientation); \
virtual HRESULT __stdcall get_SecondTangentOrientation(CATLONG & oOrientation); \
virtual HRESULT __stdcall put_SecondTangentOrientation(CATLONG iOrientation); \
virtual HRESULT __stdcall get_CornerType(CATLONG & oCornerType); \
virtual HRESULT __stdcall put_CornerType(CATLONG iCornerType); \
virtual HRESULT __stdcall get_OnVertex(CAT_VARIANT_BOOL & oOnVertex); \
virtual HRESULT __stdcall put_OnVertex(CAT_VARIANT_BOOL iOnVertex); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeCorner(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_FirstElem(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)get_FirstElem(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstElem(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)put_FirstElem(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondElem(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)get_SecondElem(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondElem(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)put_SecondElem(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Support(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)get_Support(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Support(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)put_Support(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Direction(CATIAHybridShapeDirection *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)get_Direction(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Direction(CATIAHybridShapeDirection * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)put_Direction(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Radius(CATIALength *& oRadius) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)get_Radius(oRadius)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstOrientation(CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)get_FirstOrientation(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstOrientation(CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)put_FirstOrientation(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondOrientation(CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)get_SecondOrientation(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondOrientation(CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)put_SecondOrientation(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_DiscriminationIndex(CATLONG & oDiscriminationIndex) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)get_DiscriminationIndex(oDiscriminationIndex)); \
} \
HRESULT __stdcall  ENVTIEName::put_DiscriminationIndex(CATLONG iDiscriminationIndex) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)put_DiscriminationIndex(iDiscriminationIndex)); \
} \
HRESULT __stdcall  ENVTIEName::get_Trim(CAT_VARIANT_BOOL & oTrim) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)get_Trim(oTrim)); \
} \
HRESULT __stdcall  ENVTIEName::put_Trim(CAT_VARIANT_BOOL iTrim) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)put_Trim(iTrim)); \
} \
HRESULT __stdcall  ENVTIEName::get_TrimMode(CATLONG & oTrim) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)get_TrimMode(oTrim)); \
} \
HRESULT __stdcall  ENVTIEName::put_TrimMode(CATLONG iTrim) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)put_TrimMode(iTrim)); \
} \
HRESULT __stdcall  ENVTIEName::InvertFirstOrientation() \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)InvertFirstOrientation()); \
} \
HRESULT __stdcall  ENVTIEName::InvertSecondOrientation() \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)InvertSecondOrientation()); \
} \
HRESULT __stdcall  ENVTIEName::get_BeginOfCorner(CATLONG & oNumWireBegin) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)get_BeginOfCorner(oNumWireBegin)); \
} \
HRESULT __stdcall  ENVTIEName::put_BeginOfCorner(CATLONG iNumWireBegin) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)put_BeginOfCorner(iNumWireBegin)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstTangentOrientation(CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)get_FirstTangentOrientation(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstTangentOrientation(CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)put_FirstTangentOrientation(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondTangentOrientation(CATLONG & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)get_SecondTangentOrientation(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondTangentOrientation(CATLONG iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)put_SecondTangentOrientation(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_CornerType(CATLONG & oCornerType) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)get_CornerType(oCornerType)); \
} \
HRESULT __stdcall  ENVTIEName::put_CornerType(CATLONG iCornerType) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)put_CornerType(iCornerType)); \
} \
HRESULT __stdcall  ENVTIEName::get_OnVertex(CAT_VARIANT_BOOL & oOnVertex) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)get_OnVertex(oOnVertex)); \
} \
HRESULT __stdcall  ENVTIEName::put_OnVertex(CAT_VARIANT_BOOL iOnVertex) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)put_OnVertex(iOnVertex)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeCorner,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeCorner(classe)    TIECATIAHybridShapeCorner##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeCorner(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeCorner, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeCorner, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeCorner, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeCorner, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeCorner, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::get_FirstElem(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstElem(oElem); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::put_FirstElem(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstElem(iElem); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::get_SecondElem(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondElem(oElem); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::put_SecondElem(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondElem(iElem); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::get_Support(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Support(oElem); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::put_Support(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Support(iElem); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::get_Direction(CATIAHybridShapeDirection *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Direction(oElem); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::put_Direction(CATIAHybridShapeDirection * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Direction(iElem); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::get_Radius(CATIALength *& oRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Radius(oRadius); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::get_FirstOrientation(CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstOrientation(oOrientation); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::put_FirstOrientation(CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstOrientation(iOrientation); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::get_SecondOrientation(CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondOrientation(oOrientation); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::put_SecondOrientation(CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondOrientation(iOrientation); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::get_DiscriminationIndex(CATLONG & oDiscriminationIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oDiscriminationIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DiscriminationIndex(oDiscriminationIndex); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oDiscriminationIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::put_DiscriminationIndex(CATLONG iDiscriminationIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iDiscriminationIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DiscriminationIndex(iDiscriminationIndex); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iDiscriminationIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::get_Trim(CAT_VARIANT_BOOL & oTrim) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oTrim); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Trim(oTrim); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oTrim); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::put_Trim(CAT_VARIANT_BOOL iTrim) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iTrim); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Trim(iTrim); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iTrim); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::get_TrimMode(CATLONG & oTrim) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oTrim); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TrimMode(oTrim); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oTrim); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::put_TrimMode(CATLONG iTrim) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iTrim); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TrimMode(iTrim); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iTrim); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::InvertFirstOrientation() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InvertFirstOrientation(); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::InvertSecondOrientation() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InvertSecondOrientation(); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::get_BeginOfCorner(CATLONG & oNumWireBegin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oNumWireBegin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BeginOfCorner(oNumWireBegin); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oNumWireBegin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::put_BeginOfCorner(CATLONG iNumWireBegin) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iNumWireBegin); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BeginOfCorner(iNumWireBegin); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iNumWireBegin); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::get_FirstTangentOrientation(CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstTangentOrientation(oOrientation); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::put_FirstTangentOrientation(CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstTangentOrientation(iOrientation); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::get_SecondTangentOrientation(CATLONG & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondTangentOrientation(oOrientation); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::put_SecondTangentOrientation(CATLONG iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondTangentOrientation(iOrientation); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::get_CornerType(CATLONG & oCornerType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oCornerType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CornerType(oCornerType); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oCornerType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::put_CornerType(CATLONG iCornerType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iCornerType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CornerType(iCornerType); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iCornerType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::get_OnVertex(CAT_VARIANT_BOOL & oOnVertex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oOnVertex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OnVertex(oOnVertex); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oOnVertex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::put_OnVertex(CAT_VARIANT_BOOL iOnVertex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iOnVertex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OnVertex(iOnVertex); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iOnVertex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeCorner##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCorner##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCorner##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCorner##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCorner##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeCorner##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeCorner(classe) \
 \
 \
declare_TIE_CATIAHybridShapeCorner(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeCorner##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeCorner,"CATIAHybridShapeCorner",CATIAHybridShapeCorner::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeCorner(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeCorner, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeCorner##classe(classe::MetaObject(),CATIAHybridShapeCorner::MetaObject(),(void *)CreateTIECATIAHybridShapeCorner##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeCorner(classe) \
 \
 \
declare_TIE_CATIAHybridShapeCorner(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeCorner##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeCorner,"CATIAHybridShapeCorner",CATIAHybridShapeCorner::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeCorner(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeCorner, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeCorner##classe(classe::MetaObject(),CATIAHybridShapeCorner::MetaObject(),(void *)CreateTIECATIAHybridShapeCorner##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeCorner(classe) TIE_CATIAHybridShapeCorner(classe)
#else
#define BOA_CATIAHybridShapeCorner(classe) CATImplementBOA(CATIAHybridShapeCorner, classe)
#endif

#endif
