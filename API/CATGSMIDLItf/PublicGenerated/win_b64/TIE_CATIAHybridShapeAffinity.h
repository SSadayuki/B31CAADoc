#ifndef __TIE_CATIAHybridShapeAffinity
#define __TIE_CATIAHybridShapeAffinity

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeAffinity.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeAffinity */
#define declare_TIE_CATIAHybridShapeAffinity(classe) \
 \
 \
class TIECATIAHybridShapeAffinity##classe : public CATIAHybridShapeAffinity \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeAffinity, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ElemToTransform(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_ElemToTransform(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_AxisOrigin(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_AxisOrigin(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_AxisPlane(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_AxisPlane(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_AxisFirstDirection(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_AxisFirstDirection(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_XRatios(CATIARealParam *& oRatio); \
      virtual HRESULT __stdcall get_YRatios(CATIARealParam *& oRatio); \
      virtual HRESULT __stdcall get_ZRatios(CATIARealParam *& oRatio); \
      virtual HRESULT __stdcall get_VolumeResult(CAT_VARIANT_BOOL & oType); \
      virtual HRESULT __stdcall put_VolumeResult(CAT_VARIANT_BOOL iType); \
      virtual HRESULT __stdcall get_CreationMode(CAT_VARIANT_BOOL & oCreation); \
      virtual HRESULT __stdcall put_CreationMode(CAT_VARIANT_BOOL iCreation); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeAffinity(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ElemToTransform(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_ElemToTransform(CATIAReference * iElem); \
virtual HRESULT __stdcall get_AxisOrigin(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_AxisOrigin(CATIAReference * iElem); \
virtual HRESULT __stdcall get_AxisPlane(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_AxisPlane(CATIAReference * iElem); \
virtual HRESULT __stdcall get_AxisFirstDirection(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_AxisFirstDirection(CATIAReference * iElem); \
virtual HRESULT __stdcall get_XRatios(CATIARealParam *& oRatio); \
virtual HRESULT __stdcall get_YRatios(CATIARealParam *& oRatio); \
virtual HRESULT __stdcall get_ZRatios(CATIARealParam *& oRatio); \
virtual HRESULT __stdcall get_VolumeResult(CAT_VARIANT_BOOL & oType); \
virtual HRESULT __stdcall put_VolumeResult(CAT_VARIANT_BOOL iType); \
virtual HRESULT __stdcall get_CreationMode(CAT_VARIANT_BOOL & oCreation); \
virtual HRESULT __stdcall put_CreationMode(CAT_VARIANT_BOOL iCreation); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeAffinity(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ElemToTransform(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeAffinity,ENVTIETypeLetter,ENVTIELetter)get_ElemToTransform(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_ElemToTransform(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeAffinity,ENVTIETypeLetter,ENVTIELetter)put_ElemToTransform(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_AxisOrigin(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeAffinity,ENVTIETypeLetter,ENVTIELetter)get_AxisOrigin(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_AxisOrigin(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeAffinity,ENVTIETypeLetter,ENVTIELetter)put_AxisOrigin(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_AxisPlane(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeAffinity,ENVTIETypeLetter,ENVTIELetter)get_AxisPlane(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_AxisPlane(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeAffinity,ENVTIETypeLetter,ENVTIELetter)put_AxisPlane(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_AxisFirstDirection(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeAffinity,ENVTIETypeLetter,ENVTIELetter)get_AxisFirstDirection(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_AxisFirstDirection(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeAffinity,ENVTIETypeLetter,ENVTIELetter)put_AxisFirstDirection(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_XRatios(CATIARealParam *& oRatio) \
{ \
return (ENVTIECALL(CATIAHybridShapeAffinity,ENVTIETypeLetter,ENVTIELetter)get_XRatios(oRatio)); \
} \
HRESULT __stdcall  ENVTIEName::get_YRatios(CATIARealParam *& oRatio) \
{ \
return (ENVTIECALL(CATIAHybridShapeAffinity,ENVTIETypeLetter,ENVTIELetter)get_YRatios(oRatio)); \
} \
HRESULT __stdcall  ENVTIEName::get_ZRatios(CATIARealParam *& oRatio) \
{ \
return (ENVTIECALL(CATIAHybridShapeAffinity,ENVTIETypeLetter,ENVTIELetter)get_ZRatios(oRatio)); \
} \
HRESULT __stdcall  ENVTIEName::get_VolumeResult(CAT_VARIANT_BOOL & oType) \
{ \
return (ENVTIECALL(CATIAHybridShapeAffinity,ENVTIETypeLetter,ENVTIELetter)get_VolumeResult(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_VolumeResult(CAT_VARIANT_BOOL iType) \
{ \
return (ENVTIECALL(CATIAHybridShapeAffinity,ENVTIETypeLetter,ENVTIELetter)put_VolumeResult(iType)); \
} \
HRESULT __stdcall  ENVTIEName::get_CreationMode(CAT_VARIANT_BOOL & oCreation) \
{ \
return (ENVTIECALL(CATIAHybridShapeAffinity,ENVTIETypeLetter,ENVTIELetter)get_CreationMode(oCreation)); \
} \
HRESULT __stdcall  ENVTIEName::put_CreationMode(CAT_VARIANT_BOOL iCreation) \
{ \
return (ENVTIECALL(CATIAHybridShapeAffinity,ENVTIETypeLetter,ENVTIELetter)put_CreationMode(iCreation)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeAffinity,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeAffinity,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeAffinity,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeAffinity,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeAffinity,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeAffinity,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeAffinity,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeAffinity,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeAffinity(classe)    TIECATIAHybridShapeAffinity##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeAffinity(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeAffinity, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeAffinity, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeAffinity, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeAffinity, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeAffinity, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeAffinity##classe::get_ElemToTransform(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ElemToTransform(oElem); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAffinity##classe::put_ElemToTransform(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ElemToTransform(iElem); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAffinity##classe::get_AxisOrigin(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AxisOrigin(oElem); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAffinity##classe::put_AxisOrigin(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AxisOrigin(iElem); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAffinity##classe::get_AxisPlane(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AxisPlane(oElem); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAffinity##classe::put_AxisPlane(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AxisPlane(iElem); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAffinity##classe::get_AxisFirstDirection(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AxisFirstDirection(oElem); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAffinity##classe::put_AxisFirstDirection(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AxisFirstDirection(iElem); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAffinity##classe::get_XRatios(CATIARealParam *& oRatio) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oRatio); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_XRatios(oRatio); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oRatio); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAffinity##classe::get_YRatios(CATIARealParam *& oRatio) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oRatio); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_YRatios(oRatio); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oRatio); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAffinity##classe::get_ZRatios(CATIARealParam *& oRatio) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oRatio); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ZRatios(oRatio); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oRatio); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAffinity##classe::get_VolumeResult(CAT_VARIANT_BOOL & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_VolumeResult(oType); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAffinity##classe::put_VolumeResult(CAT_VARIANT_BOOL iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_VolumeResult(iType); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAffinity##classe::get_CreationMode(CAT_VARIANT_BOOL & oCreation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oCreation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CreationMode(oCreation); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oCreation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAffinity##classe::put_CreationMode(CAT_VARIANT_BOOL iCreation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iCreation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CreationMode(iCreation); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iCreation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAffinity##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAffinity##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeAffinity##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeAffinity##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeAffinity##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeAffinity##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeAffinity##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeAffinity##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeAffinity(classe) \
 \
 \
declare_TIE_CATIAHybridShapeAffinity(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeAffinity##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeAffinity,"CATIAHybridShapeAffinity",CATIAHybridShapeAffinity::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeAffinity(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeAffinity, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeAffinity##classe(classe::MetaObject(),CATIAHybridShapeAffinity::MetaObject(),(void *)CreateTIECATIAHybridShapeAffinity##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeAffinity(classe) \
 \
 \
declare_TIE_CATIAHybridShapeAffinity(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeAffinity##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeAffinity,"CATIAHybridShapeAffinity",CATIAHybridShapeAffinity::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeAffinity(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeAffinity, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeAffinity##classe(classe::MetaObject(),CATIAHybridShapeAffinity::MetaObject(),(void *)CreateTIECATIAHybridShapeAffinity##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeAffinity(classe) TIE_CATIAHybridShapeAffinity(classe)
#else
#define BOA_CATIAHybridShapeAffinity(classe) CATImplementBOA(CATIAHybridShapeAffinity, classe)
#endif

#endif
