#ifndef __TIE_CATIAHybridShapeExtremum
#define __TIE_CATIAHybridShapeExtremum

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeExtremum.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeExtremum */
#define declare_TIE_CATIAHybridShapeExtremum(classe) \
 \
 \
class TIECATIAHybridShapeExtremum##classe : public CATIAHybridShapeExtremum \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeExtremum, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Direction(CATIAHybridShapeDirection *& oDir); \
      virtual HRESULT __stdcall put_Direction(CATIAHybridShapeDirection * iDir); \
      virtual HRESULT __stdcall get_Direction2(CATIAHybridShapeDirection *& oDir); \
      virtual HRESULT __stdcall put_Direction2(CATIAHybridShapeDirection * iDir); \
      virtual HRESULT __stdcall get_Direction3(CATIAHybridShapeDirection *& oDir); \
      virtual HRESULT __stdcall put_Direction3(CATIAHybridShapeDirection * iDir); \
      virtual HRESULT __stdcall get_ReferenceElement(CATIAReference *& oRefElem); \
      virtual HRESULT __stdcall put_ReferenceElement(CATIAReference * iRefElem); \
      virtual HRESULT __stdcall get_ExtremumType(CATLONG & oType); \
      virtual HRESULT __stdcall put_ExtremumType(CATLONG iType); \
      virtual HRESULT __stdcall get_ExtremumType2(CATLONG & oType); \
      virtual HRESULT __stdcall put_ExtremumType2(CATLONG iType); \
      virtual HRESULT __stdcall get_ExtremumType3(CATLONG & oType); \
      virtual HRESULT __stdcall put_ExtremumType3(CATLONG iType); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeExtremum(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Direction(CATIAHybridShapeDirection *& oDir); \
virtual HRESULT __stdcall put_Direction(CATIAHybridShapeDirection * iDir); \
virtual HRESULT __stdcall get_Direction2(CATIAHybridShapeDirection *& oDir); \
virtual HRESULT __stdcall put_Direction2(CATIAHybridShapeDirection * iDir); \
virtual HRESULT __stdcall get_Direction3(CATIAHybridShapeDirection *& oDir); \
virtual HRESULT __stdcall put_Direction3(CATIAHybridShapeDirection * iDir); \
virtual HRESULT __stdcall get_ReferenceElement(CATIAReference *& oRefElem); \
virtual HRESULT __stdcall put_ReferenceElement(CATIAReference * iRefElem); \
virtual HRESULT __stdcall get_ExtremumType(CATLONG & oType); \
virtual HRESULT __stdcall put_ExtremumType(CATLONG iType); \
virtual HRESULT __stdcall get_ExtremumType2(CATLONG & oType); \
virtual HRESULT __stdcall put_ExtremumType2(CATLONG iType); \
virtual HRESULT __stdcall get_ExtremumType3(CATLONG & oType); \
virtual HRESULT __stdcall put_ExtremumType3(CATLONG iType); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeExtremum(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Direction(CATIAHybridShapeDirection *& oDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremum,ENVTIETypeLetter,ENVTIELetter)get_Direction(oDir)); \
} \
HRESULT __stdcall  ENVTIEName::put_Direction(CATIAHybridShapeDirection * iDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremum,ENVTIETypeLetter,ENVTIELetter)put_Direction(iDir)); \
} \
HRESULT __stdcall  ENVTIEName::get_Direction2(CATIAHybridShapeDirection *& oDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremum,ENVTIETypeLetter,ENVTIELetter)get_Direction2(oDir)); \
} \
HRESULT __stdcall  ENVTIEName::put_Direction2(CATIAHybridShapeDirection * iDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremum,ENVTIETypeLetter,ENVTIELetter)put_Direction2(iDir)); \
} \
HRESULT __stdcall  ENVTIEName::get_Direction3(CATIAHybridShapeDirection *& oDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremum,ENVTIETypeLetter,ENVTIELetter)get_Direction3(oDir)); \
} \
HRESULT __stdcall  ENVTIEName::put_Direction3(CATIAHybridShapeDirection * iDir) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremum,ENVTIETypeLetter,ENVTIELetter)put_Direction3(iDir)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReferenceElement(CATIAReference *& oRefElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremum,ENVTIETypeLetter,ENVTIELetter)get_ReferenceElement(oRefElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReferenceElement(CATIAReference * iRefElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremum,ENVTIETypeLetter,ENVTIELetter)put_ReferenceElement(iRefElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_ExtremumType(CATLONG & oType) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremum,ENVTIETypeLetter,ENVTIELetter)get_ExtremumType(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_ExtremumType(CATLONG iType) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremum,ENVTIETypeLetter,ENVTIELetter)put_ExtremumType(iType)); \
} \
HRESULT __stdcall  ENVTIEName::get_ExtremumType2(CATLONG & oType) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremum,ENVTIETypeLetter,ENVTIELetter)get_ExtremumType2(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_ExtremumType2(CATLONG iType) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremum,ENVTIETypeLetter,ENVTIELetter)put_ExtremumType2(iType)); \
} \
HRESULT __stdcall  ENVTIEName::get_ExtremumType3(CATLONG & oType) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremum,ENVTIETypeLetter,ENVTIELetter)get_ExtremumType3(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_ExtremumType3(CATLONG iType) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremum,ENVTIETypeLetter,ENVTIELetter)put_ExtremumType3(iType)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremum,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremum,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremum,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremum,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremum,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremum,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremum,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeExtremum,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeExtremum(classe)    TIECATIAHybridShapeExtremum##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeExtremum(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeExtremum, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeExtremum, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeExtremum, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeExtremum, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeExtremum, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeExtremum##classe::get_Direction(CATIAHybridShapeDirection *& oDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Direction(oDir); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtremum##classe::put_Direction(CATIAHybridShapeDirection * iDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Direction(iDir); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtremum##classe::get_Direction2(CATIAHybridShapeDirection *& oDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Direction2(oDir); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtremum##classe::put_Direction2(CATIAHybridShapeDirection * iDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Direction2(iDir); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtremum##classe::get_Direction3(CATIAHybridShapeDirection *& oDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Direction3(oDir); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtremum##classe::put_Direction3(CATIAHybridShapeDirection * iDir) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iDir); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Direction3(iDir); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iDir); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtremum##classe::get_ReferenceElement(CATIAReference *& oRefElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oRefElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReferenceElement(oRefElem); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oRefElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtremum##classe::put_ReferenceElement(CATIAReference * iRefElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iRefElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReferenceElement(iRefElem); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iRefElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtremum##classe::get_ExtremumType(CATLONG & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExtremumType(oType); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtremum##classe::put_ExtremumType(CATLONG iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ExtremumType(iType); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtremum##classe::get_ExtremumType2(CATLONG & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExtremumType2(oType); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtremum##classe::put_ExtremumType2(CATLONG iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ExtremumType2(iType); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtremum##classe::get_ExtremumType3(CATLONG & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExtremumType3(oType); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtremum##classe::put_ExtremumType3(CATLONG iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ExtremumType3(iType); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtremum##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtremum##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeExtremum##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeExtremum##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeExtremum##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeExtremum##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeExtremum##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeExtremum##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeExtremum(classe) \
 \
 \
declare_TIE_CATIAHybridShapeExtremum(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeExtremum##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeExtremum,"CATIAHybridShapeExtremum",CATIAHybridShapeExtremum::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeExtremum(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeExtremum, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeExtremum##classe(classe::MetaObject(),CATIAHybridShapeExtremum::MetaObject(),(void *)CreateTIECATIAHybridShapeExtremum##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeExtremum(classe) \
 \
 \
declare_TIE_CATIAHybridShapeExtremum(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeExtremum##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeExtremum,"CATIAHybridShapeExtremum",CATIAHybridShapeExtremum::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeExtremum(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeExtremum, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeExtremum##classe(classe::MetaObject(),CATIAHybridShapeExtremum::MetaObject(),(void *)CreateTIECATIAHybridShapeExtremum##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeExtremum(classe) TIE_CATIAHybridShapeExtremum(classe)
#else
#define BOA_CATIAHybridShapeExtremum(classe) CATImplementBOA(CATIAHybridShapeExtremum, classe)
#endif

#endif
