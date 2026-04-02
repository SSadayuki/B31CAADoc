#ifndef __TIE_CATIAHybridShape3DCurveOffset
#define __TIE_CATIAHybridShape3DCurveOffset

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShape3DCurveOffset.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShape3DCurveOffset */
#define declare_TIE_CATIAHybridShape3DCurveOffset(classe) \
 \
 \
class TIECATIAHybridShape3DCurveOffset##classe : public CATIAHybridShape3DCurveOffset \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShape3DCurveOffset, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_CurveToOffset(CATIAReference *& opIACurveToOffset); \
      virtual HRESULT __stdcall put_CurveToOffset(CATIAReference * ipIACurveToOffset); \
      virtual HRESULT __stdcall get_Direction(CATIAHybridShapeDirection *& oDirection); \
      virtual HRESULT __stdcall put_Direction(CATIAHybridShapeDirection * iDirection); \
      virtual HRESULT __stdcall get_OffsetValue(CATIALength *& oOffset); \
      virtual HRESULT __stdcall put_OffsetValue(CATIALength * iOffset); \
      virtual HRESULT __stdcall get_CornerRadiusValue(CATIALength *& oCornerRadius); \
      virtual HRESULT __stdcall put_CornerRadiusValue(CATIALength * iCornerRadius); \
      virtual HRESULT __stdcall get_CornerTensionValue(double & oCornerTension); \
      virtual HRESULT __stdcall put_CornerTensionValue(double iCornerTension); \
      virtual HRESULT __stdcall get_InvertDirection(CAT_VARIANT_BOOL & oInvert); \
      virtual HRESULT __stdcall put_InvertDirection(CAT_VARIANT_BOOL iInvert); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShape3DCurveOffset(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_CurveToOffset(CATIAReference *& opIACurveToOffset); \
virtual HRESULT __stdcall put_CurveToOffset(CATIAReference * ipIACurveToOffset); \
virtual HRESULT __stdcall get_Direction(CATIAHybridShapeDirection *& oDirection); \
virtual HRESULT __stdcall put_Direction(CATIAHybridShapeDirection * iDirection); \
virtual HRESULT __stdcall get_OffsetValue(CATIALength *& oOffset); \
virtual HRESULT __stdcall put_OffsetValue(CATIALength * iOffset); \
virtual HRESULT __stdcall get_CornerRadiusValue(CATIALength *& oCornerRadius); \
virtual HRESULT __stdcall put_CornerRadiusValue(CATIALength * iCornerRadius); \
virtual HRESULT __stdcall get_CornerTensionValue(double & oCornerTension); \
virtual HRESULT __stdcall put_CornerTensionValue(double iCornerTension); \
virtual HRESULT __stdcall get_InvertDirection(CAT_VARIANT_BOOL & oInvert); \
virtual HRESULT __stdcall put_InvertDirection(CAT_VARIANT_BOOL iInvert); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShape3DCurveOffset(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_CurveToOffset(CATIAReference *& opIACurveToOffset) \
{ \
return (ENVTIECALL(CATIAHybridShape3DCurveOffset,ENVTIETypeLetter,ENVTIELetter)get_CurveToOffset(opIACurveToOffset)); \
} \
HRESULT __stdcall  ENVTIEName::put_CurveToOffset(CATIAReference * ipIACurveToOffset) \
{ \
return (ENVTIECALL(CATIAHybridShape3DCurveOffset,ENVTIETypeLetter,ENVTIELetter)put_CurveToOffset(ipIACurveToOffset)); \
} \
HRESULT __stdcall  ENVTIEName::get_Direction(CATIAHybridShapeDirection *& oDirection) \
{ \
return (ENVTIECALL(CATIAHybridShape3DCurveOffset,ENVTIETypeLetter,ENVTIELetter)get_Direction(oDirection)); \
} \
HRESULT __stdcall  ENVTIEName::put_Direction(CATIAHybridShapeDirection * iDirection) \
{ \
return (ENVTIECALL(CATIAHybridShape3DCurveOffset,ENVTIETypeLetter,ENVTIELetter)put_Direction(iDirection)); \
} \
HRESULT __stdcall  ENVTIEName::get_OffsetValue(CATIALength *& oOffset) \
{ \
return (ENVTIECALL(CATIAHybridShape3DCurveOffset,ENVTIETypeLetter,ENVTIELetter)get_OffsetValue(oOffset)); \
} \
HRESULT __stdcall  ENVTIEName::put_OffsetValue(CATIALength * iOffset) \
{ \
return (ENVTIECALL(CATIAHybridShape3DCurveOffset,ENVTIETypeLetter,ENVTIELetter)put_OffsetValue(iOffset)); \
} \
HRESULT __stdcall  ENVTIEName::get_CornerRadiusValue(CATIALength *& oCornerRadius) \
{ \
return (ENVTIECALL(CATIAHybridShape3DCurveOffset,ENVTIETypeLetter,ENVTIELetter)get_CornerRadiusValue(oCornerRadius)); \
} \
HRESULT __stdcall  ENVTIEName::put_CornerRadiusValue(CATIALength * iCornerRadius) \
{ \
return (ENVTIECALL(CATIAHybridShape3DCurveOffset,ENVTIETypeLetter,ENVTIELetter)put_CornerRadiusValue(iCornerRadius)); \
} \
HRESULT __stdcall  ENVTIEName::get_CornerTensionValue(double & oCornerTension) \
{ \
return (ENVTIECALL(CATIAHybridShape3DCurveOffset,ENVTIETypeLetter,ENVTIELetter)get_CornerTensionValue(oCornerTension)); \
} \
HRESULT __stdcall  ENVTIEName::put_CornerTensionValue(double iCornerTension) \
{ \
return (ENVTIECALL(CATIAHybridShape3DCurveOffset,ENVTIETypeLetter,ENVTIELetter)put_CornerTensionValue(iCornerTension)); \
} \
HRESULT __stdcall  ENVTIEName::get_InvertDirection(CAT_VARIANT_BOOL & oInvert) \
{ \
return (ENVTIECALL(CATIAHybridShape3DCurveOffset,ENVTIETypeLetter,ENVTIELetter)get_InvertDirection(oInvert)); \
} \
HRESULT __stdcall  ENVTIEName::put_InvertDirection(CAT_VARIANT_BOOL iInvert) \
{ \
return (ENVTIECALL(CATIAHybridShape3DCurveOffset,ENVTIETypeLetter,ENVTIELetter)put_InvertDirection(iInvert)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShape3DCurveOffset,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShape3DCurveOffset,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShape3DCurveOffset,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShape3DCurveOffset,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShape3DCurveOffset,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShape3DCurveOffset,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShape3DCurveOffset,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShape3DCurveOffset,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShape3DCurveOffset(classe)    TIECATIAHybridShape3DCurveOffset##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShape3DCurveOffset(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShape3DCurveOffset, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShape3DCurveOffset, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShape3DCurveOffset, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShape3DCurveOffset, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShape3DCurveOffset, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShape3DCurveOffset##classe::get_CurveToOffset(CATIAReference *& opIACurveToOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&opIACurveToOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CurveToOffset(opIACurveToOffset); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&opIACurveToOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShape3DCurveOffset##classe::put_CurveToOffset(CATIAReference * ipIACurveToOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&ipIACurveToOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CurveToOffset(ipIACurveToOffset); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&ipIACurveToOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShape3DCurveOffset##classe::get_Direction(CATIAHybridShapeDirection *& oDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Direction(oDirection); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShape3DCurveOffset##classe::put_Direction(CATIAHybridShapeDirection * iDirection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iDirection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Direction(iDirection); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iDirection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShape3DCurveOffset##classe::get_OffsetValue(CATIALength *& oOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OffsetValue(oOffset); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShape3DCurveOffset##classe::put_OffsetValue(CATIALength * iOffset) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iOffset); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OffsetValue(iOffset); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iOffset); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShape3DCurveOffset##classe::get_CornerRadiusValue(CATIALength *& oCornerRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oCornerRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CornerRadiusValue(oCornerRadius); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oCornerRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShape3DCurveOffset##classe::put_CornerRadiusValue(CATIALength * iCornerRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iCornerRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CornerRadiusValue(iCornerRadius); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iCornerRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShape3DCurveOffset##classe::get_CornerTensionValue(double & oCornerTension) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oCornerTension); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CornerTensionValue(oCornerTension); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oCornerTension); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShape3DCurveOffset##classe::put_CornerTensionValue(double iCornerTension) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iCornerTension); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CornerTensionValue(iCornerTension); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iCornerTension); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShape3DCurveOffset##classe::get_InvertDirection(CAT_VARIANT_BOOL & oInvert) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oInvert); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InvertDirection(oInvert); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oInvert); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShape3DCurveOffset##classe::put_InvertDirection(CAT_VARIANT_BOOL iInvert) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iInvert); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_InvertDirection(iInvert); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iInvert); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShape3DCurveOffset##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShape3DCurveOffset##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShape3DCurveOffset##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShape3DCurveOffset##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShape3DCurveOffset##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShape3DCurveOffset##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShape3DCurveOffset##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShape3DCurveOffset##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShape3DCurveOffset(classe) \
 \
 \
declare_TIE_CATIAHybridShape3DCurveOffset(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShape3DCurveOffset##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShape3DCurveOffset,"CATIAHybridShape3DCurveOffset",CATIAHybridShape3DCurveOffset::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShape3DCurveOffset(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShape3DCurveOffset, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShape3DCurveOffset##classe(classe::MetaObject(),CATIAHybridShape3DCurveOffset::MetaObject(),(void *)CreateTIECATIAHybridShape3DCurveOffset##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShape3DCurveOffset(classe) \
 \
 \
declare_TIE_CATIAHybridShape3DCurveOffset(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShape3DCurveOffset##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShape3DCurveOffset,"CATIAHybridShape3DCurveOffset",CATIAHybridShape3DCurveOffset::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShape3DCurveOffset(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShape3DCurveOffset, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShape3DCurveOffset##classe(classe::MetaObject(),CATIAHybridShape3DCurveOffset::MetaObject(),(void *)CreateTIECATIAHybridShape3DCurveOffset##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShape3DCurveOffset(classe) TIE_CATIAHybridShape3DCurveOffset(classe)
#else
#define BOA_CATIAHybridShape3DCurveOffset(classe) CATImplementBOA(CATIAHybridShape3DCurveOffset, classe)
#endif

#endif
