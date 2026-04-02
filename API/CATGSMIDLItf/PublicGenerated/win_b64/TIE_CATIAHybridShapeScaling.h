#ifndef __TIE_CATIAHybridShapeScaling
#define __TIE_CATIAHybridShapeScaling

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeScaling.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeScaling */
#define declare_TIE_CATIAHybridShapeScaling(classe) \
 \
 \
class TIECATIAHybridShapeScaling##classe : public CATIAHybridShapeScaling \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeScaling, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ElemToScale(CATIAReference *& oX); \
      virtual HRESULT __stdcall put_ElemToScale(CATIAReference * iX); \
      virtual HRESULT __stdcall get_Center(CATIAReference *& oX); \
      virtual HRESULT __stdcall put_Center(CATIAReference * iX); \
      virtual HRESULT __stdcall get_Ratio(CATIARealParam *& oX); \
      virtual HRESULT __stdcall get_RatioValue(double & oX); \
      virtual HRESULT __stdcall put_RatioValue(double iX); \
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



#define ENVTIEdeclare_CATIAHybridShapeScaling(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ElemToScale(CATIAReference *& oX); \
virtual HRESULT __stdcall put_ElemToScale(CATIAReference * iX); \
virtual HRESULT __stdcall get_Center(CATIAReference *& oX); \
virtual HRESULT __stdcall put_Center(CATIAReference * iX); \
virtual HRESULT __stdcall get_Ratio(CATIARealParam *& oX); \
virtual HRESULT __stdcall get_RatioValue(double & oX); \
virtual HRESULT __stdcall put_RatioValue(double iX); \
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


#define ENVTIEdefine_CATIAHybridShapeScaling(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ElemToScale(CATIAReference *& oX) \
{ \
return (ENVTIECALL(CATIAHybridShapeScaling,ENVTIETypeLetter,ENVTIELetter)get_ElemToScale(oX)); \
} \
HRESULT __stdcall  ENVTIEName::put_ElemToScale(CATIAReference * iX) \
{ \
return (ENVTIECALL(CATIAHybridShapeScaling,ENVTIETypeLetter,ENVTIELetter)put_ElemToScale(iX)); \
} \
HRESULT __stdcall  ENVTIEName::get_Center(CATIAReference *& oX) \
{ \
return (ENVTIECALL(CATIAHybridShapeScaling,ENVTIETypeLetter,ENVTIELetter)get_Center(oX)); \
} \
HRESULT __stdcall  ENVTIEName::put_Center(CATIAReference * iX) \
{ \
return (ENVTIECALL(CATIAHybridShapeScaling,ENVTIETypeLetter,ENVTIELetter)put_Center(iX)); \
} \
HRESULT __stdcall  ENVTIEName::get_Ratio(CATIARealParam *& oX) \
{ \
return (ENVTIECALL(CATIAHybridShapeScaling,ENVTIETypeLetter,ENVTIELetter)get_Ratio(oX)); \
} \
HRESULT __stdcall  ENVTIEName::get_RatioValue(double & oX) \
{ \
return (ENVTIECALL(CATIAHybridShapeScaling,ENVTIETypeLetter,ENVTIELetter)get_RatioValue(oX)); \
} \
HRESULT __stdcall  ENVTIEName::put_RatioValue(double iX) \
{ \
return (ENVTIECALL(CATIAHybridShapeScaling,ENVTIETypeLetter,ENVTIELetter)put_RatioValue(iX)); \
} \
HRESULT __stdcall  ENVTIEName::get_VolumeResult(CAT_VARIANT_BOOL & oType) \
{ \
return (ENVTIECALL(CATIAHybridShapeScaling,ENVTIETypeLetter,ENVTIELetter)get_VolumeResult(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_VolumeResult(CAT_VARIANT_BOOL iType) \
{ \
return (ENVTIECALL(CATIAHybridShapeScaling,ENVTIETypeLetter,ENVTIELetter)put_VolumeResult(iType)); \
} \
HRESULT __stdcall  ENVTIEName::get_CreationMode(CAT_VARIANT_BOOL & oCreation) \
{ \
return (ENVTIECALL(CATIAHybridShapeScaling,ENVTIETypeLetter,ENVTIELetter)get_CreationMode(oCreation)); \
} \
HRESULT __stdcall  ENVTIEName::put_CreationMode(CAT_VARIANT_BOOL iCreation) \
{ \
return (ENVTIECALL(CATIAHybridShapeScaling,ENVTIETypeLetter,ENVTIELetter)put_CreationMode(iCreation)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeScaling,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeScaling,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeScaling,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeScaling,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeScaling,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeScaling,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeScaling,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeScaling,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeScaling(classe)    TIECATIAHybridShapeScaling##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeScaling(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeScaling, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeScaling, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeScaling, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeScaling, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeScaling, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeScaling##classe::get_ElemToScale(CATIAReference *& oX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ElemToScale(oX); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeScaling##classe::put_ElemToScale(CATIAReference * iX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ElemToScale(iX); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeScaling##classe::get_Center(CATIAReference *& oX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Center(oX); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeScaling##classe::put_Center(CATIAReference * iX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Center(iX); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeScaling##classe::get_Ratio(CATIARealParam *& oX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Ratio(oX); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeScaling##classe::get_RatioValue(double & oX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RatioValue(oX); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeScaling##classe::put_RatioValue(double iX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RatioValue(iX); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeScaling##classe::get_VolumeResult(CAT_VARIANT_BOOL & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_VolumeResult(oType); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeScaling##classe::put_VolumeResult(CAT_VARIANT_BOOL iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_VolumeResult(iType); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeScaling##classe::get_CreationMode(CAT_VARIANT_BOOL & oCreation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oCreation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CreationMode(oCreation); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oCreation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeScaling##classe::put_CreationMode(CAT_VARIANT_BOOL iCreation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iCreation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CreationMode(iCreation); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iCreation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeScaling##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeScaling##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeScaling##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeScaling##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeScaling##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeScaling##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeScaling##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeScaling##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeScaling(classe) \
 \
 \
declare_TIE_CATIAHybridShapeScaling(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeScaling##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeScaling,"CATIAHybridShapeScaling",CATIAHybridShapeScaling::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeScaling(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeScaling, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeScaling##classe(classe::MetaObject(),CATIAHybridShapeScaling::MetaObject(),(void *)CreateTIECATIAHybridShapeScaling##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeScaling(classe) \
 \
 \
declare_TIE_CATIAHybridShapeScaling(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeScaling##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeScaling,"CATIAHybridShapeScaling",CATIAHybridShapeScaling::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeScaling(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeScaling, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeScaling##classe(classe::MetaObject(),CATIAHybridShapeScaling::MetaObject(),(void *)CreateTIECATIAHybridShapeScaling##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeScaling(classe) TIE_CATIAHybridShapeScaling(classe)
#else
#define BOA_CATIAHybridShapeScaling(classe) CATImplementBOA(CATIAHybridShapeScaling, classe)
#endif

#endif
