#ifndef __TIE_CATIAHybridShapeTransfer
#define __TIE_CATIAHybridShapeTransfer

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeTransfer.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeTransfer */
#define declare_TIE_CATIAHybridShapeTransfer(classe) \
 \
 \
class TIECATIAHybridShapeTransfer##classe : public CATIAHybridShapeTransfer \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeTransfer, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ElementToTransfer(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_ElementToTransfer(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_SurfaceToUnfold(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_SurfaceToUnfold(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_UnfoldedSurface(CATIAReference *& oElem); \
      virtual HRESULT __stdcall put_UnfoldedSurface(CATIAReference * iElem); \
      virtual HRESULT __stdcall get_TypeOfTransfer(CATLONG & oType); \
      virtual HRESULT __stdcall put_TypeOfTransfer(CATLONG iType); \
      virtual HRESULT __stdcall get_UnfoldType(CATLONG & oType); \
      virtual HRESULT __stdcall put_UnfoldType(CATLONG iType); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeTransfer(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ElementToTransfer(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_ElementToTransfer(CATIAReference * iElem); \
virtual HRESULT __stdcall get_SurfaceToUnfold(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_SurfaceToUnfold(CATIAReference * iElem); \
virtual HRESULT __stdcall get_UnfoldedSurface(CATIAReference *& oElem); \
virtual HRESULT __stdcall put_UnfoldedSurface(CATIAReference * iElem); \
virtual HRESULT __stdcall get_TypeOfTransfer(CATLONG & oType); \
virtual HRESULT __stdcall put_TypeOfTransfer(CATLONG iType); \
virtual HRESULT __stdcall get_UnfoldType(CATLONG & oType); \
virtual HRESULT __stdcall put_UnfoldType(CATLONG iType); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeTransfer(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ElementToTransfer(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeTransfer,ENVTIETypeLetter,ENVTIELetter)get_ElementToTransfer(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_ElementToTransfer(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeTransfer,ENVTIETypeLetter,ENVTIELetter)put_ElementToTransfer(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_SurfaceToUnfold(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeTransfer,ENVTIETypeLetter,ENVTIELetter)get_SurfaceToUnfold(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_SurfaceToUnfold(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeTransfer,ENVTIETypeLetter,ENVTIELetter)put_SurfaceToUnfold(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_UnfoldedSurface(CATIAReference *& oElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeTransfer,ENVTIETypeLetter,ENVTIELetter)get_UnfoldedSurface(oElem)); \
} \
HRESULT __stdcall  ENVTIEName::put_UnfoldedSurface(CATIAReference * iElem) \
{ \
return (ENVTIECALL(CATIAHybridShapeTransfer,ENVTIETypeLetter,ENVTIELetter)put_UnfoldedSurface(iElem)); \
} \
HRESULT __stdcall  ENVTIEName::get_TypeOfTransfer(CATLONG & oType) \
{ \
return (ENVTIECALL(CATIAHybridShapeTransfer,ENVTIETypeLetter,ENVTIELetter)get_TypeOfTransfer(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_TypeOfTransfer(CATLONG iType) \
{ \
return (ENVTIECALL(CATIAHybridShapeTransfer,ENVTIETypeLetter,ENVTIELetter)put_TypeOfTransfer(iType)); \
} \
HRESULT __stdcall  ENVTIEName::get_UnfoldType(CATLONG & oType) \
{ \
return (ENVTIECALL(CATIAHybridShapeTransfer,ENVTIETypeLetter,ENVTIELetter)get_UnfoldType(oType)); \
} \
HRESULT __stdcall  ENVTIEName::put_UnfoldType(CATLONG iType) \
{ \
return (ENVTIECALL(CATIAHybridShapeTransfer,ENVTIETypeLetter,ENVTIELetter)put_UnfoldType(iType)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeTransfer,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeTransfer,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeTransfer,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeTransfer,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeTransfer,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeTransfer,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeTransfer,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeTransfer,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeTransfer(classe)    TIECATIAHybridShapeTransfer##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeTransfer(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeTransfer, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeTransfer, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeTransfer, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeTransfer, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeTransfer, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeTransfer##classe::get_ElementToTransfer(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ElementToTransfer(oElem); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTransfer##classe::put_ElementToTransfer(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ElementToTransfer(iElem); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTransfer##classe::get_SurfaceToUnfold(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SurfaceToUnfold(oElem); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTransfer##classe::put_SurfaceToUnfold(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SurfaceToUnfold(iElem); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTransfer##classe::get_UnfoldedSurface(CATIAReference *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UnfoldedSurface(oElem); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTransfer##classe::put_UnfoldedSurface(CATIAReference * iElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_UnfoldedSurface(iElem); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iElem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTransfer##classe::get_TypeOfTransfer(CATLONG & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TypeOfTransfer(oType); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTransfer##classe::put_TypeOfTransfer(CATLONG iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TypeOfTransfer(iType); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTransfer##classe::get_UnfoldType(CATLONG & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UnfoldType(oType); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTransfer##classe::put_UnfoldType(CATLONG iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_UnfoldType(iType); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTransfer##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTransfer##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeTransfer##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeTransfer##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeTransfer##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeTransfer##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeTransfer##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeTransfer##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeTransfer(classe) \
 \
 \
declare_TIE_CATIAHybridShapeTransfer(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeTransfer##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeTransfer,"CATIAHybridShapeTransfer",CATIAHybridShapeTransfer::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeTransfer(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeTransfer, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeTransfer##classe(classe::MetaObject(),CATIAHybridShapeTransfer::MetaObject(),(void *)CreateTIECATIAHybridShapeTransfer##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeTransfer(classe) \
 \
 \
declare_TIE_CATIAHybridShapeTransfer(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeTransfer##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeTransfer,"CATIAHybridShapeTransfer",CATIAHybridShapeTransfer::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeTransfer(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeTransfer, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeTransfer##classe(classe::MetaObject(),CATIAHybridShapeTransfer::MetaObject(),(void *)CreateTIECATIAHybridShapeTransfer##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeTransfer(classe) TIE_CATIAHybridShapeTransfer(classe)
#else
#define BOA_CATIAHybridShapeTransfer(classe) CATImplementBOA(CATIAHybridShapeTransfer, classe)
#endif

#endif
