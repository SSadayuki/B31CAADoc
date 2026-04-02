#ifndef __TIE_CATIAHybridShapePolyline
#define __TIE_CATIAHybridShapePolyline

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapePolyline.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapePolyline */
#define declare_TIE_CATIAHybridShapePolyline(classe) \
 \
 \
class TIECATIAHybridShapePolyline##classe : public CATIAHybridShapePolyline \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapePolyline, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_NumberOfElements(CATLONG & oNoOfElements); \
      virtual HRESULT __stdcall get_Closure(CAT_VARIANT_BOOL & oClosure); \
      virtual HRESULT __stdcall put_Closure(CAT_VARIANT_BOOL iClosure); \
      virtual HRESULT __stdcall InsertElement(CATIAReference * iPoint, CATLONG iPosition); \
      virtual HRESULT __stdcall ReplaceElement(CATIAReference * iPoint, CATLONG iPosition); \
      virtual HRESULT __stdcall RemoveElement(CATLONG iPosition); \
      virtual HRESULT __stdcall SetRadius(CATLONG iPosition, double iRadius); \
      virtual HRESULT __stdcall GetElement(CATLONG iPosition, CATIAReference *& oElement, CATIALength *& oRadius); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapePolyline(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_NumberOfElements(CATLONG & oNoOfElements); \
virtual HRESULT __stdcall get_Closure(CAT_VARIANT_BOOL & oClosure); \
virtual HRESULT __stdcall put_Closure(CAT_VARIANT_BOOL iClosure); \
virtual HRESULT __stdcall InsertElement(CATIAReference * iPoint, CATLONG iPosition); \
virtual HRESULT __stdcall ReplaceElement(CATIAReference * iPoint, CATLONG iPosition); \
virtual HRESULT __stdcall RemoveElement(CATLONG iPosition); \
virtual HRESULT __stdcall SetRadius(CATLONG iPosition, double iRadius); \
virtual HRESULT __stdcall GetElement(CATLONG iPosition, CATIAReference *& oElement, CATIALength *& oRadius); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapePolyline(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_NumberOfElements(CATLONG & oNoOfElements) \
{ \
return (ENVTIECALL(CATIAHybridShapePolyline,ENVTIETypeLetter,ENVTIELetter)get_NumberOfElements(oNoOfElements)); \
} \
HRESULT __stdcall  ENVTIEName::get_Closure(CAT_VARIANT_BOOL & oClosure) \
{ \
return (ENVTIECALL(CATIAHybridShapePolyline,ENVTIETypeLetter,ENVTIELetter)get_Closure(oClosure)); \
} \
HRESULT __stdcall  ENVTIEName::put_Closure(CAT_VARIANT_BOOL iClosure) \
{ \
return (ENVTIECALL(CATIAHybridShapePolyline,ENVTIETypeLetter,ENVTIELetter)put_Closure(iClosure)); \
} \
HRESULT __stdcall  ENVTIEName::InsertElement(CATIAReference * iPoint, CATLONG iPosition) \
{ \
return (ENVTIECALL(CATIAHybridShapePolyline,ENVTIETypeLetter,ENVTIELetter)InsertElement(iPoint,iPosition)); \
} \
HRESULT __stdcall  ENVTIEName::ReplaceElement(CATIAReference * iPoint, CATLONG iPosition) \
{ \
return (ENVTIECALL(CATIAHybridShapePolyline,ENVTIETypeLetter,ENVTIELetter)ReplaceElement(iPoint,iPosition)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveElement(CATLONG iPosition) \
{ \
return (ENVTIECALL(CATIAHybridShapePolyline,ENVTIETypeLetter,ENVTIELetter)RemoveElement(iPosition)); \
} \
HRESULT __stdcall  ENVTIEName::SetRadius(CATLONG iPosition, double iRadius) \
{ \
return (ENVTIECALL(CATIAHybridShapePolyline,ENVTIETypeLetter,ENVTIELetter)SetRadius(iPosition,iRadius)); \
} \
HRESULT __stdcall  ENVTIEName::GetElement(CATLONG iPosition, CATIAReference *& oElement, CATIALength *& oRadius) \
{ \
return (ENVTIECALL(CATIAHybridShapePolyline,ENVTIETypeLetter,ENVTIELetter)GetElement(iPosition,oElement,oRadius)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapePolyline,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapePolyline,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapePolyline,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapePolyline,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapePolyline,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapePolyline,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapePolyline,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapePolyline,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapePolyline(classe)    TIECATIAHybridShapePolyline##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapePolyline(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapePolyline, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapePolyline, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapePolyline, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapePolyline, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapePolyline, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapePolyline##classe::get_NumberOfElements(CATLONG & oNoOfElements) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oNoOfElements); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NumberOfElements(oNoOfElements); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oNoOfElements); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePolyline##classe::get_Closure(CAT_VARIANT_BOOL & oClosure) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oClosure); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Closure(oClosure); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oClosure); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePolyline##classe::put_Closure(CAT_VARIANT_BOOL iClosure) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iClosure); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Closure(iClosure); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iClosure); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePolyline##classe::InsertElement(CATIAReference * iPoint, CATLONG iPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iPoint,&iPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InsertElement(iPoint,iPosition); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iPoint,&iPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePolyline##classe::ReplaceElement(CATIAReference * iPoint, CATLONG iPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iPoint,&iPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ReplaceElement(iPoint,iPosition); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iPoint,&iPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePolyline##classe::RemoveElement(CATLONG iPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveElement(iPosition); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePolyline##classe::SetRadius(CATLONG iPosition, double iRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iPosition,&iRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRadius(iPosition,iRadius); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iPosition,&iRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePolyline##classe::GetElement(CATLONG iPosition, CATIAReference *& oElement, CATIALength *& oRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iPosition,&oElement,&oRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetElement(iPosition,oElement,oRadius); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iPosition,&oElement,&oRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePolyline##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePolyline##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapePolyline##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePolyline##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePolyline##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePolyline##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePolyline##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapePolyline##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapePolyline(classe) \
 \
 \
declare_TIE_CATIAHybridShapePolyline(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapePolyline##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapePolyline,"CATIAHybridShapePolyline",CATIAHybridShapePolyline::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapePolyline(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapePolyline, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapePolyline##classe(classe::MetaObject(),CATIAHybridShapePolyline::MetaObject(),(void *)CreateTIECATIAHybridShapePolyline##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapePolyline(classe) \
 \
 \
declare_TIE_CATIAHybridShapePolyline(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapePolyline##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapePolyline,"CATIAHybridShapePolyline",CATIAHybridShapePolyline::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapePolyline(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapePolyline, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapePolyline##classe(classe::MetaObject(),CATIAHybridShapePolyline::MetaObject(),(void *)CreateTIECATIAHybridShapePolyline##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapePolyline(classe) TIE_CATIAHybridShapePolyline(classe)
#else
#define BOA_CATIAHybridShapePolyline(classe) CATImplementBOA(CATIAHybridShapePolyline, classe)
#endif

#endif
