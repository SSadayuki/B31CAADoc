#ifndef __TIE_CATIAHybridShapeMidSurface
#define __TIE_CATIAHybridShapeMidSurface

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeMidSurface.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeMidSurface */
#define declare_TIE_CATIAHybridShapeMidSurface(classe) \
 \
 \
class TIECATIAHybridShapeMidSurface##classe : public CATIAHybridShapeMidSurface \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeMidSurface, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Support(CATIAReference *& oSupport); \
      virtual HRESULT __stdcall put_Support(CATIAReference * iSupport); \
      virtual HRESULT __stdcall get_Threshold(CATIALength *& oThresholdThickness); \
      virtual HRESULT __stdcall put_Threshold(CATIALength * iThresholdThickness); \
      virtual HRESULT __stdcall get_CreationMode(CATLONG & oCreationMode); \
      virtual HRESULT __stdcall put_CreationMode(CATLONG iCreationMode); \
      virtual HRESULT __stdcall get_AutoThicknessThreshold(CATLONG & oAutoThresh); \
      virtual HRESULT __stdcall put_AutoThicknessThreshold(CATLONG iAutoThresh); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeMidSurface(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Support(CATIAReference *& oSupport); \
virtual HRESULT __stdcall put_Support(CATIAReference * iSupport); \
virtual HRESULT __stdcall get_Threshold(CATIALength *& oThresholdThickness); \
virtual HRESULT __stdcall put_Threshold(CATIALength * iThresholdThickness); \
virtual HRESULT __stdcall get_CreationMode(CATLONG & oCreationMode); \
virtual HRESULT __stdcall put_CreationMode(CATLONG iCreationMode); \
virtual HRESULT __stdcall get_AutoThicknessThreshold(CATLONG & oAutoThresh); \
virtual HRESULT __stdcall put_AutoThicknessThreshold(CATLONG iAutoThresh); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeMidSurface(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Support(CATIAReference *& oSupport) \
{ \
return (ENVTIECALL(CATIAHybridShapeMidSurface,ENVTIETypeLetter,ENVTIELetter)get_Support(oSupport)); \
} \
HRESULT __stdcall  ENVTIEName::put_Support(CATIAReference * iSupport) \
{ \
return (ENVTIECALL(CATIAHybridShapeMidSurface,ENVTIETypeLetter,ENVTIELetter)put_Support(iSupport)); \
} \
HRESULT __stdcall  ENVTIEName::get_Threshold(CATIALength *& oThresholdThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeMidSurface,ENVTIETypeLetter,ENVTIELetter)get_Threshold(oThresholdThickness)); \
} \
HRESULT __stdcall  ENVTIEName::put_Threshold(CATIALength * iThresholdThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeMidSurface,ENVTIETypeLetter,ENVTIELetter)put_Threshold(iThresholdThickness)); \
} \
HRESULT __stdcall  ENVTIEName::get_CreationMode(CATLONG & oCreationMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeMidSurface,ENVTIETypeLetter,ENVTIELetter)get_CreationMode(oCreationMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_CreationMode(CATLONG iCreationMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeMidSurface,ENVTIETypeLetter,ENVTIELetter)put_CreationMode(iCreationMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_AutoThicknessThreshold(CATLONG & oAutoThresh) \
{ \
return (ENVTIECALL(CATIAHybridShapeMidSurface,ENVTIETypeLetter,ENVTIELetter)get_AutoThicknessThreshold(oAutoThresh)); \
} \
HRESULT __stdcall  ENVTIEName::put_AutoThicknessThreshold(CATLONG iAutoThresh) \
{ \
return (ENVTIECALL(CATIAHybridShapeMidSurface,ENVTIETypeLetter,ENVTIELetter)put_AutoThicknessThreshold(iAutoThresh)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeMidSurface,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeMidSurface,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeMidSurface,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeMidSurface,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeMidSurface,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeMidSurface,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeMidSurface,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeMidSurface,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeMidSurface(classe)    TIECATIAHybridShapeMidSurface##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeMidSurface(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeMidSurface, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeMidSurface, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeMidSurface, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeMidSurface, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeMidSurface, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeMidSurface##classe::get_Support(CATIAReference *& oSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Support(oSupport); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeMidSurface##classe::put_Support(CATIAReference * iSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Support(iSupport); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iSupport); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeMidSurface##classe::get_Threshold(CATIALength *& oThresholdThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oThresholdThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Threshold(oThresholdThickness); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oThresholdThickness); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeMidSurface##classe::put_Threshold(CATIALength * iThresholdThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iThresholdThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Threshold(iThresholdThickness); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iThresholdThickness); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeMidSurface##classe::get_CreationMode(CATLONG & oCreationMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oCreationMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CreationMode(oCreationMode); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oCreationMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeMidSurface##classe::put_CreationMode(CATLONG iCreationMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iCreationMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CreationMode(iCreationMode); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iCreationMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeMidSurface##classe::get_AutoThicknessThreshold(CATLONG & oAutoThresh) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oAutoThresh); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AutoThicknessThreshold(oAutoThresh); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oAutoThresh); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeMidSurface##classe::put_AutoThicknessThreshold(CATLONG iAutoThresh) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iAutoThresh); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AutoThicknessThreshold(iAutoThresh); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iAutoThresh); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeMidSurface##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeMidSurface##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeMidSurface##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeMidSurface##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeMidSurface##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeMidSurface##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeMidSurface##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeMidSurface##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeMidSurface(classe) \
 \
 \
declare_TIE_CATIAHybridShapeMidSurface(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeMidSurface##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeMidSurface,"CATIAHybridShapeMidSurface",CATIAHybridShapeMidSurface::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeMidSurface(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeMidSurface, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeMidSurface##classe(classe::MetaObject(),CATIAHybridShapeMidSurface::MetaObject(),(void *)CreateTIECATIAHybridShapeMidSurface##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeMidSurface(classe) \
 \
 \
declare_TIE_CATIAHybridShapeMidSurface(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeMidSurface##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeMidSurface,"CATIAHybridShapeMidSurface",CATIAHybridShapeMidSurface::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeMidSurface(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeMidSurface, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeMidSurface##classe(classe::MetaObject(),CATIAHybridShapeMidSurface::MetaObject(),(void *)CreateTIECATIAHybridShapeMidSurface##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeMidSurface(classe) TIE_CATIAHybridShapeMidSurface(classe)
#else
#define BOA_CATIAHybridShapeMidSurface(classe) CATImplementBOA(CATIAHybridShapeMidSurface, classe)
#endif

#endif
