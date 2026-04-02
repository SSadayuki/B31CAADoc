#ifndef __TIE_CATIAHybridShapeTranslate
#define __TIE_CATIAHybridShapeTranslate

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeTranslate.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeTranslate */
#define declare_TIE_CATIAHybridShapeTranslate(classe) \
 \
 \
class TIECATIAHybridShapeTranslate##classe : public CATIAHybridShapeTranslate \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeTranslate, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_VectorType(CATLONG & oVectorType); \
      virtual HRESULT __stdcall put_VectorType(CATLONG iVectorType); \
      virtual HRESULT __stdcall get_ElemToTranslate(CATIAReference *& oX); \
      virtual HRESULT __stdcall put_ElemToTranslate(CATIAReference * iX); \
      virtual HRESULT __stdcall get_FirstPoint(CATIAReference *& oX); \
      virtual HRESULT __stdcall put_FirstPoint(CATIAReference * iX); \
      virtual HRESULT __stdcall get_SecondPoint(CATIAReference *& oX); \
      virtual HRESULT __stdcall put_SecondPoint(CATIAReference * iX); \
      virtual HRESULT __stdcall get_Direction(CATIAHybridShapeDirection *& oX); \
      virtual HRESULT __stdcall put_Direction(CATIAHybridShapeDirection * iX); \
      virtual HRESULT __stdcall get_Distance(CATIALength *& oX); \
      virtual HRESULT __stdcall get_DistanceValue(double & oX); \
      virtual HRESULT __stdcall put_DistanceValue(double iX); \
      virtual HRESULT __stdcall get_CoordXValue(double & oValue); \
      virtual HRESULT __stdcall put_CoordXValue(double iValue); \
      virtual HRESULT __stdcall get_CoordYValue(double & oValue); \
      virtual HRESULT __stdcall put_CoordYValue(double iValue); \
      virtual HRESULT __stdcall get_CoordZValue(double & oValue); \
      virtual HRESULT __stdcall put_CoordZValue(double iValue); \
      virtual HRESULT __stdcall get_VolumeResult(CAT_VARIANT_BOOL & oType); \
      virtual HRESULT __stdcall put_VolumeResult(CAT_VARIANT_BOOL iType); \
      virtual HRESULT __stdcall SetCreationMode(CAT_VARIANT_BOOL iCreation); \
      virtual HRESULT __stdcall GetCreationMode(CATLONG & oCreation); \
      virtual HRESULT __stdcall get_RefAxisSystem(CATIAReference *& oRefAxis); \
      virtual HRESULT __stdcall put_RefAxisSystem(CATIAReference * iRefAxis); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeTranslate(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_VectorType(CATLONG & oVectorType); \
virtual HRESULT __stdcall put_VectorType(CATLONG iVectorType); \
virtual HRESULT __stdcall get_ElemToTranslate(CATIAReference *& oX); \
virtual HRESULT __stdcall put_ElemToTranslate(CATIAReference * iX); \
virtual HRESULT __stdcall get_FirstPoint(CATIAReference *& oX); \
virtual HRESULT __stdcall put_FirstPoint(CATIAReference * iX); \
virtual HRESULT __stdcall get_SecondPoint(CATIAReference *& oX); \
virtual HRESULT __stdcall put_SecondPoint(CATIAReference * iX); \
virtual HRESULT __stdcall get_Direction(CATIAHybridShapeDirection *& oX); \
virtual HRESULT __stdcall put_Direction(CATIAHybridShapeDirection * iX); \
virtual HRESULT __stdcall get_Distance(CATIALength *& oX); \
virtual HRESULT __stdcall get_DistanceValue(double & oX); \
virtual HRESULT __stdcall put_DistanceValue(double iX); \
virtual HRESULT __stdcall get_CoordXValue(double & oValue); \
virtual HRESULT __stdcall put_CoordXValue(double iValue); \
virtual HRESULT __stdcall get_CoordYValue(double & oValue); \
virtual HRESULT __stdcall put_CoordYValue(double iValue); \
virtual HRESULT __stdcall get_CoordZValue(double & oValue); \
virtual HRESULT __stdcall put_CoordZValue(double iValue); \
virtual HRESULT __stdcall get_VolumeResult(CAT_VARIANT_BOOL & oType); \
virtual HRESULT __stdcall put_VolumeResult(CAT_VARIANT_BOOL iType); \
virtual HRESULT __stdcall SetCreationMode(CAT_VARIANT_BOOL iCreation); \
virtual HRESULT __stdcall GetCreationMode(CATLONG & oCreation); \
virtual HRESULT __stdcall get_RefAxisSystem(CATIAReference *& oRefAxis); \
virtual HRESULT __stdcall put_RefAxisSystem(CATIAReference * iRefAxis); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeTranslate(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_VectorType(CATLONG & oVectorType) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)get_VectorType(oVectorType)); \
} \
HRESULT __stdcall  ENVTIEName::put_VectorType(CATLONG iVectorType) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)put_VectorType(iVectorType)); \
} \
HRESULT __stdcall  ENVTIEName::get_ElemToTranslate(CATIAReference *& oX) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)get_ElemToTranslate(oX)); \
} \
HRESULT __stdcall  ENVTIEName::put_ElemToTranslate(CATIAReference * iX) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)put_ElemToTranslate(iX)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstPoint(CATIAReference *& oX) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)get_FirstPoint(oX)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstPoint(CATIAReference * iX) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)put_FirstPoint(iX)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondPoint(CATIAReference *& oX) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)get_SecondPoint(oX)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondPoint(CATIAReference * iX) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)put_SecondPoint(iX)); \
} \
HRESULT __stdcall  ENVTIEName::get_Direction(CATIAHybridShapeDirection *& oX) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)get_Direction(oX)); \
} \
HRESULT __stdcall  ENVTIEName::put_Direction(CATIAHybridShapeDirection * iX) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)put_Direction(iX)); \
} \
HRESULT __stdcall  ENVTIEName::get_Distance(CATIALength *& oX) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)get_Distance(oX)); \
} \
HRESULT __stdcall  ENVTIEName::get_DistanceValue(double & oX) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)get_DistanceValue(oX)); \
} \
HRESULT __stdcall  ENVTIEName::put_DistanceValue(double iX) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)put_DistanceValue(iX)); \
} \
HRESULT __stdcall  ENVTIEName::get_CoordXValue(double & oValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)get_CoordXValue(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_CoordXValue(double iValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)put_CoordXValue(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_CoordYValue(double & oValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)get_CoordYValue(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_CoordYValue(double iValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)put_CoordYValue(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_CoordZValue(double & oValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)get_CoordZValue(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_CoordZValue(double iValue) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)put_CoordZValue(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_VolumeResult(CAT_VARIANT_BOOL & oType) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)get_VolumeResult(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_VolumeResult(CAT_VARIANT_BOOL iType) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)put_VolumeResult(iType)); \
} \
HRESULT __stdcall  ENVTIEName::SetCreationMode(CAT_VARIANT_BOOL iCreation) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)SetCreationMode(iCreation)); \
} \
HRESULT __stdcall  ENVTIEName::GetCreationMode(CATLONG & oCreation) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)GetCreationMode(oCreation)); \
} \
HRESULT __stdcall  ENVTIEName::get_RefAxisSystem(CATIAReference *& oRefAxis) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)get_RefAxisSystem(oRefAxis)); \
} \
HRESULT __stdcall  ENVTIEName::put_RefAxisSystem(CATIAReference * iRefAxis) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)put_RefAxisSystem(iRefAxis)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeTranslate,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeTranslate(classe)    TIECATIAHybridShapeTranslate##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeTranslate(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeTranslate, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeTranslate, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeTranslate, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeTranslate, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeTranslate, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeTranslate##classe::get_VectorType(CATLONG & oVectorType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oVectorType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_VectorType(oVectorType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oVectorType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTranslate##classe::put_VectorType(CATLONG iVectorType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iVectorType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_VectorType(iVectorType); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iVectorType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTranslate##classe::get_ElemToTranslate(CATIAReference *& oX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ElemToTranslate(oX); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTranslate##classe::put_ElemToTranslate(CATIAReference * iX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ElemToTranslate(iX); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTranslate##classe::get_FirstPoint(CATIAReference *& oX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstPoint(oX); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTranslate##classe::put_FirstPoint(CATIAReference * iX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstPoint(iX); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTranslate##classe::get_SecondPoint(CATIAReference *& oX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondPoint(oX); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTranslate##classe::put_SecondPoint(CATIAReference * iX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondPoint(iX); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTranslate##classe::get_Direction(CATIAHybridShapeDirection *& oX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Direction(oX); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTranslate##classe::put_Direction(CATIAHybridShapeDirection * iX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Direction(iX); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTranslate##classe::get_Distance(CATIALength *& oX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Distance(oX); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTranslate##classe::get_DistanceValue(double & oX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DistanceValue(oX); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTranslate##classe::put_DistanceValue(double iX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DistanceValue(iX); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTranslate##classe::get_CoordXValue(double & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CoordXValue(oValue); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTranslate##classe::put_CoordXValue(double iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CoordXValue(iValue); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTranslate##classe::get_CoordYValue(double & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CoordYValue(oValue); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTranslate##classe::put_CoordYValue(double iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CoordYValue(iValue); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTranslate##classe::get_CoordZValue(double & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CoordZValue(oValue); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTranslate##classe::put_CoordZValue(double iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CoordZValue(iValue); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTranslate##classe::get_VolumeResult(CAT_VARIANT_BOOL & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_VolumeResult(oType); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTranslate##classe::put_VolumeResult(CAT_VARIANT_BOOL iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_VolumeResult(iType); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTranslate##classe::SetCreationMode(CAT_VARIANT_BOOL iCreation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iCreation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCreationMode(iCreation); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iCreation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTranslate##classe::GetCreationMode(CATLONG & oCreation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oCreation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCreationMode(oCreation); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oCreation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTranslate##classe::get_RefAxisSystem(CATIAReference *& oRefAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oRefAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RefAxisSystem(oRefAxis); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oRefAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTranslate##classe::put_RefAxisSystem(CATIAReference * iRefAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iRefAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RefAxisSystem(iRefAxis); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iRefAxis); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTranslate##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTranslate##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTranslate##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeTranslate##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeTranslate##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeTranslate##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeTranslate##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeTranslate##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeTranslate(classe) \
 \
 \
declare_TIE_CATIAHybridShapeTranslate(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeTranslate##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeTranslate,"CATIAHybridShapeTranslate",CATIAHybridShapeTranslate::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeTranslate(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeTranslate, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeTranslate##classe(classe::MetaObject(),CATIAHybridShapeTranslate::MetaObject(),(void *)CreateTIECATIAHybridShapeTranslate##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeTranslate(classe) \
 \
 \
declare_TIE_CATIAHybridShapeTranslate(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeTranslate##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeTranslate,"CATIAHybridShapeTranslate",CATIAHybridShapeTranslate::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeTranslate(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeTranslate, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeTranslate##classe(classe::MetaObject(),CATIAHybridShapeTranslate::MetaObject(),(void *)CreateTIECATIAHybridShapeTranslate##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeTranslate(classe) TIE_CATIAHybridShapeTranslate(classe)
#else
#define BOA_CATIAHybridShapeTranslate(classe) CATImplementBOA(CATIAHybridShapeTranslate, classe)
#endif

#endif
