#ifndef __TIE_CATIAHybridShapeRotate
#define __TIE_CATIAHybridShapeRotate

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeRotate.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeRotate */
#define declare_TIE_CATIAHybridShapeRotate(classe) \
 \
 \
class TIECATIAHybridShapeRotate##classe : public CATIAHybridShapeRotate \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeRotate, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ElemToRotate(CATIAReference *& oX); \
      virtual HRESULT __stdcall put_ElemToRotate(CATIAReference * iX); \
      virtual HRESULT __stdcall get_Axis(CATIAReference *& oX); \
      virtual HRESULT __stdcall put_Axis(CATIAReference * iX); \
      virtual HRESULT __stdcall get_Angle(CATIAAngle *& oProp); \
      virtual HRESULT __stdcall get_AngleValue(double & oX); \
      virtual HRESULT __stdcall put_AngleValue(double iX); \
      virtual HRESULT __stdcall get_VolumeResult(CAT_VARIANT_BOOL & oType); \
      virtual HRESULT __stdcall put_VolumeResult(CAT_VARIANT_BOOL iType); \
      virtual HRESULT __stdcall SetCreationMode(CAT_VARIANT_BOOL iCreation); \
      virtual HRESULT __stdcall GetCreationMode(CATLONG & oCreation); \
      virtual HRESULT __stdcall get_RotationType(CATLONG & oType); \
      virtual HRESULT __stdcall put_RotationType(CATLONG iType); \
      virtual HRESULT __stdcall get_FirstElement(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_FirstElement(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_SecondElement(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_SecondElement(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_FirstPoint(CATIAReference *& oPoint); \
      virtual HRESULT __stdcall put_FirstPoint(CATIAReference * iPoint); \
      virtual HRESULT __stdcall get_SecondPoint(CATIAReference *& oPoint); \
      virtual HRESULT __stdcall put_SecondPoint(CATIAReference * iPoint); \
      virtual HRESULT __stdcall get_ThirdPoint(CATIAReference *& oPoint); \
      virtual HRESULT __stdcall put_ThirdPoint(CATIAReference * iPoint); \
      virtual HRESULT __stdcall get_OrientationOfFirstElement(CAT_VARIANT_BOOL & oOrientation); \
      virtual HRESULT __stdcall put_OrientationOfFirstElement(CAT_VARIANT_BOOL iOrientation); \
      virtual HRESULT __stdcall get_OrientationOfSecondElement(CAT_VARIANT_BOOL & oOrientation); \
      virtual HRESULT __stdcall put_OrientationOfSecondElement(CAT_VARIANT_BOOL iOrientation); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeRotate(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ElemToRotate(CATIAReference *& oX); \
virtual HRESULT __stdcall put_ElemToRotate(CATIAReference * iX); \
virtual HRESULT __stdcall get_Axis(CATIAReference *& oX); \
virtual HRESULT __stdcall put_Axis(CATIAReference * iX); \
virtual HRESULT __stdcall get_Angle(CATIAAngle *& oProp); \
virtual HRESULT __stdcall get_AngleValue(double & oX); \
virtual HRESULT __stdcall put_AngleValue(double iX); \
virtual HRESULT __stdcall get_VolumeResult(CAT_VARIANT_BOOL & oType); \
virtual HRESULT __stdcall put_VolumeResult(CAT_VARIANT_BOOL iType); \
virtual HRESULT __stdcall SetCreationMode(CAT_VARIANT_BOOL iCreation); \
virtual HRESULT __stdcall GetCreationMode(CATLONG & oCreation); \
virtual HRESULT __stdcall get_RotationType(CATLONG & oType); \
virtual HRESULT __stdcall put_RotationType(CATLONG iType); \
virtual HRESULT __stdcall get_FirstElement(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_FirstElement(CATIAReference * iElem); \
virtual HRESULT __stdcall get_SecondElement(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_SecondElement(CATIAReference * iElem); \
virtual HRESULT __stdcall get_FirstPoint(CATIAReference *& oPoint); \
virtual HRESULT __stdcall put_FirstPoint(CATIAReference * iPoint); \
virtual HRESULT __stdcall get_SecondPoint(CATIAReference *& oPoint); \
virtual HRESULT __stdcall put_SecondPoint(CATIAReference * iPoint); \
virtual HRESULT __stdcall get_ThirdPoint(CATIAReference *& oPoint); \
virtual HRESULT __stdcall put_ThirdPoint(CATIAReference * iPoint); \
virtual HRESULT __stdcall get_OrientationOfFirstElement(CAT_VARIANT_BOOL & oOrientation); \
virtual HRESULT __stdcall put_OrientationOfFirstElement(CAT_VARIANT_BOOL iOrientation); \
virtual HRESULT __stdcall get_OrientationOfSecondElement(CAT_VARIANT_BOOL & oOrientation); \
virtual HRESULT __stdcall put_OrientationOfSecondElement(CAT_VARIANT_BOOL iOrientation); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeRotate(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ElemToRotate(CATIAReference *& oX) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)get_ElemToRotate(oX)); \
} \
HRESULT __stdcall  ENVTIEName::put_ElemToRotate(CATIAReference * iX) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)put_ElemToRotate(iX)); \
} \
HRESULT __stdcall  ENVTIEName::get_Axis(CATIAReference *& oX) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)get_Axis(oX)); \
} \
HRESULT __stdcall  ENVTIEName::put_Axis(CATIAReference * iX) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)put_Axis(iX)); \
} \
HRESULT __stdcall  ENVTIEName::get_Angle(CATIAAngle *& oProp) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)get_Angle(oProp)); \
} \
HRESULT __stdcall  ENVTIEName::get_AngleValue(double & oX) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)get_AngleValue(oX)); \
} \
HRESULT __stdcall  ENVTIEName::put_AngleValue(double iX) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)put_AngleValue(iX)); \
} \
HRESULT __stdcall  ENVTIEName::get_VolumeResult(CAT_VARIANT_BOOL & oType) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)get_VolumeResult(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_VolumeResult(CAT_VARIANT_BOOL iType) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)put_VolumeResult(iType)); \
} \
HRESULT __stdcall  ENVTIEName::SetCreationMode(CAT_VARIANT_BOOL iCreation) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)SetCreationMode(iCreation)); \
} \
HRESULT __stdcall  ENVTIEName::GetCreationMode(CATLONG & oCreation) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)GetCreationMode(oCreation)); \
} \
HRESULT __stdcall  ENVTIEName::get_RotationType(CATLONG & oType) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)get_RotationType(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_RotationType(CATLONG iType) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)put_RotationType(iType)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstElement(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)get_FirstElement(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstElement(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)put_FirstElement(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondElement(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)get_SecondElement(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondElement(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)put_SecondElement(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_FirstPoint(CATIAReference *& oPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)get_FirstPoint(oPoint)); \
} \
HRESULT __stdcall  ENVTIEName::put_FirstPoint(CATIAReference * iPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)put_FirstPoint(iPoint)); \
} \
HRESULT __stdcall  ENVTIEName::get_SecondPoint(CATIAReference *& oPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)get_SecondPoint(oPoint)); \
} \
HRESULT __stdcall  ENVTIEName::put_SecondPoint(CATIAReference * iPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)put_SecondPoint(iPoint)); \
} \
HRESULT __stdcall  ENVTIEName::get_ThirdPoint(CATIAReference *& oPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)get_ThirdPoint(oPoint)); \
} \
HRESULT __stdcall  ENVTIEName::put_ThirdPoint(CATIAReference * iPoint) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)put_ThirdPoint(iPoint)); \
} \
HRESULT __stdcall  ENVTIEName::get_OrientationOfFirstElement(CAT_VARIANT_BOOL & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)get_OrientationOfFirstElement(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_OrientationOfFirstElement(CAT_VARIANT_BOOL iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)put_OrientationOfFirstElement(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_OrientationOfSecondElement(CAT_VARIANT_BOOL & oOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)get_OrientationOfSecondElement(oOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_OrientationOfSecondElement(CAT_VARIANT_BOOL iOrientation) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)put_OrientationOfSecondElement(iOrientation)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeRotate,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeRotate(classe)    TIECATIAHybridShapeRotate##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeRotate(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeRotate, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeRotate, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeRotate, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeRotate, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeRotate, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeRotate##classe::get_ElemToRotate(CATIAReference *& oX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ElemToRotate(oX); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRotate##classe::put_ElemToRotate(CATIAReference * iX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ElemToRotate(iX); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRotate##classe::get_Axis(CATIAReference *& oX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Axis(oX); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRotate##classe::put_Axis(CATIAReference * iX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Axis(iX); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRotate##classe::get_Angle(CATIAAngle *& oProp) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oProp); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Angle(oProp); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oProp); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRotate##classe::get_AngleValue(double & oX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AngleValue(oX); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRotate##classe::put_AngleValue(double iX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AngleValue(iX); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRotate##classe::get_VolumeResult(CAT_VARIANT_BOOL & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_VolumeResult(oType); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRotate##classe::put_VolumeResult(CAT_VARIANT_BOOL iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_VolumeResult(iType); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRotate##classe::SetCreationMode(CAT_VARIANT_BOOL iCreation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iCreation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCreationMode(iCreation); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iCreation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRotate##classe::GetCreationMode(CATLONG & oCreation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oCreation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCreationMode(oCreation); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oCreation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRotate##classe::get_RotationType(CATLONG & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RotationType(oType); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRotate##classe::put_RotationType(CATLONG iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RotationType(iType); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRotate##classe::get_FirstElement(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstElement(oElem); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRotate##classe::put_FirstElement(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstElement(iElem); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRotate##classe::get_SecondElement(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondElement(oElem); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRotate##classe::put_SecondElement(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondElement(iElem); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRotate##classe::get_FirstPoint(CATIAReference *& oPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FirstPoint(oPoint); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRotate##classe::put_FirstPoint(CATIAReference * iPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FirstPoint(iPoint); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRotate##classe::get_SecondPoint(CATIAReference *& oPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SecondPoint(oPoint); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRotate##classe::put_SecondPoint(CATIAReference * iPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SecondPoint(iPoint); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRotate##classe::get_ThirdPoint(CATIAReference *& oPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ThirdPoint(oPoint); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRotate##classe::put_ThirdPoint(CATIAReference * iPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ThirdPoint(iPoint); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRotate##classe::get_OrientationOfFirstElement(CAT_VARIANT_BOOL & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OrientationOfFirstElement(oOrientation); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRotate##classe::put_OrientationOfFirstElement(CAT_VARIANT_BOOL iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OrientationOfFirstElement(iOrientation); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRotate##classe::get_OrientationOfSecondElement(CAT_VARIANT_BOOL & oOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OrientationOfSecondElement(oOrientation); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRotate##classe::put_OrientationOfSecondElement(CAT_VARIANT_BOOL iOrientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iOrientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OrientationOfSecondElement(iOrientation); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iOrientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRotate##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRotate##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeRotate##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeRotate##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeRotate##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeRotate##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeRotate##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeRotate##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeRotate(classe) \
 \
 \
declare_TIE_CATIAHybridShapeRotate(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeRotate##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeRotate,"CATIAHybridShapeRotate",CATIAHybridShapeRotate::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeRotate(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeRotate, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeRotate##classe(classe::MetaObject(),CATIAHybridShapeRotate::MetaObject(),(void *)CreateTIECATIAHybridShapeRotate##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeRotate(classe) \
 \
 \
declare_TIE_CATIAHybridShapeRotate(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeRotate##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeRotate,"CATIAHybridShapeRotate",CATIAHybridShapeRotate::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeRotate(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeRotate, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeRotate##classe(classe::MetaObject(),CATIAHybridShapeRotate::MetaObject(),(void *)CreateTIECATIAHybridShapeRotate##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeRotate(classe) TIE_CATIAHybridShapeRotate(classe)
#else
#define BOA_CATIAHybridShapeRotate(classe) CATImplementBOA(CATIAHybridShapeRotate, classe)
#endif

#endif
