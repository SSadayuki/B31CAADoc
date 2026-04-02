#ifndef __TIE_CATIAHybridShapeSymmetry
#define __TIE_CATIAHybridShapeSymmetry

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeSymmetry.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeSymmetry */
#define declare_TIE_CATIAHybridShapeSymmetry(classe) \
 \
 \
class TIECATIAHybridShapeSymmetry##classe : public CATIAHybridShapeSymmetry \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeSymmetry, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ElemToSymmetry(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_ElemToSymmetry(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_Reference(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_Reference(CATIAReference * iElem); \
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



#define ENVTIEdeclare_CATIAHybridShapeSymmetry(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ElemToSymmetry(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_ElemToSymmetry(CATIAReference * iElem); \
virtual HRESULT __stdcall get_Reference(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_Reference(CATIAReference * iElem); \
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


#define ENVTIEdefine_CATIAHybridShapeSymmetry(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ElemToSymmetry(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSymmetry,ENVTIETypeLetter,ENVTIELetter)get_ElemToSymmetry(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_ElemToSymmetry(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSymmetry,ENVTIETypeLetter,ENVTIELetter)put_ElemToSymmetry(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Reference(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSymmetry,ENVTIETypeLetter,ENVTIELetter)get_Reference(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_Reference(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeSymmetry,ENVTIETypeLetter,ENVTIELetter)put_Reference(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_VolumeResult(CAT_VARIANT_BOOL & oType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSymmetry,ENVTIETypeLetter,ENVTIELetter)get_VolumeResult(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_VolumeResult(CAT_VARIANT_BOOL iType) \
{ \
return (ENVTIECALL(CATIAHybridShapeSymmetry,ENVTIETypeLetter,ENVTIELetter)put_VolumeResult(iType)); \
} \
HRESULT __stdcall  ENVTIEName::get_CreationMode(CAT_VARIANT_BOOL & oCreation) \
{ \
return (ENVTIECALL(CATIAHybridShapeSymmetry,ENVTIETypeLetter,ENVTIELetter)get_CreationMode(oCreation)); \
} \
HRESULT __stdcall  ENVTIEName::put_CreationMode(CAT_VARIANT_BOOL iCreation) \
{ \
return (ENVTIECALL(CATIAHybridShapeSymmetry,ENVTIETypeLetter,ENVTIELetter)put_CreationMode(iCreation)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeSymmetry,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeSymmetry,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeSymmetry,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeSymmetry,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeSymmetry,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeSymmetry,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeSymmetry,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeSymmetry,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeSymmetry(classe)    TIECATIAHybridShapeSymmetry##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeSymmetry(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeSymmetry, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeSymmetry, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeSymmetry, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeSymmetry, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeSymmetry, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeSymmetry##classe::get_ElemToSymmetry(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ElemToSymmetry(oElem); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSymmetry##classe::put_ElemToSymmetry(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ElemToSymmetry(iElem); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSymmetry##classe::get_Reference(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Reference(oElem); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSymmetry##classe::put_Reference(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Reference(iElem); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSymmetry##classe::get_VolumeResult(CAT_VARIANT_BOOL & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_VolumeResult(oType); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSymmetry##classe::put_VolumeResult(CAT_VARIANT_BOOL iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_VolumeResult(iType); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSymmetry##classe::get_CreationMode(CAT_VARIANT_BOOL & oCreation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oCreation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CreationMode(oCreation); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oCreation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSymmetry##classe::put_CreationMode(CAT_VARIANT_BOOL iCreation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iCreation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CreationMode(iCreation); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iCreation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSymmetry##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSymmetry##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeSymmetry##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSymmetry##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSymmetry##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSymmetry##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSymmetry##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeSymmetry##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeSymmetry(classe) \
 \
 \
declare_TIE_CATIAHybridShapeSymmetry(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeSymmetry##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeSymmetry,"CATIAHybridShapeSymmetry",CATIAHybridShapeSymmetry::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeSymmetry(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeSymmetry, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeSymmetry##classe(classe::MetaObject(),CATIAHybridShapeSymmetry::MetaObject(),(void *)CreateTIECATIAHybridShapeSymmetry##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeSymmetry(classe) \
 \
 \
declare_TIE_CATIAHybridShapeSymmetry(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeSymmetry##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeSymmetry,"CATIAHybridShapeSymmetry",CATIAHybridShapeSymmetry::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeSymmetry(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeSymmetry, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeSymmetry##classe(classe::MetaObject(),CATIAHybridShapeSymmetry::MetaObject(),(void *)CreateTIECATIAHybridShapeSymmetry##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeSymmetry(classe) TIE_CATIAHybridShapeSymmetry(classe)
#else
#define BOA_CATIAHybridShapeSymmetry(classe) CATImplementBOA(CATIAHybridShapeSymmetry, classe)
#endif

#endif
