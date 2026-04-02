#ifndef __TIE_CATIAHybridShapeWrapSurface
#define __TIE_CATIAHybridShapeWrapSurface

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridShapeWrapSurface.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridShapeWrapSurface */
#define declare_TIE_CATIAHybridShapeWrapSurface(classe) \
 \
 \
class TIECATIAHybridShapeWrapSurface##classe : public CATIAHybridShapeWrapSurface \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridShapeWrapSurface, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Surface(CATIAReference *& oSurface); \
      virtual HRESULT __stdcall put_Surface(CATIAReference * iSurface); \
      virtual HRESULT __stdcall get_ReferenceSurface(CATIAReference *& oReferenceSurface); \
      virtual HRESULT __stdcall put_ReferenceSurface(CATIAReference * iReferenceSurface); \
      virtual HRESULT __stdcall get_TargetSurface(CATIAReference *& oTargetSurface); \
      virtual HRESULT __stdcall put_TargetSurface(CATIAReference * iTargetSurface); \
      virtual HRESULT __stdcall get_DeformationMode(CATLONG & oDeformationMode); \
      virtual HRESULT __stdcall put_DeformationMode(CATLONG iDeformationMode); \
      virtual HRESULT __stdcall Compute(); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridShapeWrapSurface(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Surface(CATIAReference *& oSurface); \
virtual HRESULT __stdcall put_Surface(CATIAReference * iSurface); \
virtual HRESULT __stdcall get_ReferenceSurface(CATIAReference *& oReferenceSurface); \
virtual HRESULT __stdcall put_ReferenceSurface(CATIAReference * iReferenceSurface); \
virtual HRESULT __stdcall get_TargetSurface(CATIAReference *& oTargetSurface); \
virtual HRESULT __stdcall put_TargetSurface(CATIAReference * iTargetSurface); \
virtual HRESULT __stdcall get_DeformationMode(CATLONG & oDeformationMode); \
virtual HRESULT __stdcall put_DeformationMode(CATLONG iDeformationMode); \
virtual HRESULT __stdcall Compute(); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT __stdcall get_Thickness(CATIAHybridShape *& oThickness); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridShapeWrapSurface(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Surface(CATIAReference *& oSurface) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapSurface,ENVTIETypeLetter,ENVTIELetter)get_Surface(oSurface)); \
} \
HRESULT __stdcall  ENVTIEName::put_Surface(CATIAReference * iSurface) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapSurface,ENVTIETypeLetter,ENVTIELetter)put_Surface(iSurface)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReferenceSurface(CATIAReference *& oReferenceSurface) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapSurface,ENVTIETypeLetter,ENVTIELetter)get_ReferenceSurface(oReferenceSurface)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReferenceSurface(CATIAReference * iReferenceSurface) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapSurface,ENVTIETypeLetter,ENVTIELetter)put_ReferenceSurface(iReferenceSurface)); \
} \
HRESULT __stdcall  ENVTIEName::get_TargetSurface(CATIAReference *& oTargetSurface) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapSurface,ENVTIETypeLetter,ENVTIELetter)get_TargetSurface(oTargetSurface)); \
} \
HRESULT __stdcall  ENVTIEName::put_TargetSurface(CATIAReference * iTargetSurface) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapSurface,ENVTIETypeLetter,ENVTIELetter)put_TargetSurface(iTargetSurface)); \
} \
HRESULT __stdcall  ENVTIEName::get_DeformationMode(CATLONG & oDeformationMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapSurface,ENVTIETypeLetter,ENVTIELetter)get_DeformationMode(oDeformationMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_DeformationMode(CATLONG iDeformationMode) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapSurface,ENVTIETypeLetter,ENVTIELetter)put_DeformationMode(iDeformationMode)); \
} \
HRESULT __stdcall  ENVTIEName::Compute() \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapSurface,ENVTIETypeLetter,ENVTIELetter)Compute()); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapSurface,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapSurface,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickness)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapSurface,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapSurface,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapSurface,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapSurface,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridShapeWrapSurface,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridShapeWrapSurface(classe)    TIECATIAHybridShapeWrapSurface##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridShapeWrapSurface(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridShapeWrapSurface, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridShapeWrapSurface, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridShapeWrapSurface, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridShapeWrapSurface, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridShapeWrapSurface, classe) \
 \
HRESULT __stdcall  TIECATIAHybridShapeWrapSurface##classe::get_Surface(CATIAReference *& oSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Surface(oSurface); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeWrapSurface##classe::put_Surface(CATIAReference * iSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Surface(iSurface); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeWrapSurface##classe::get_ReferenceSurface(CATIAReference *& oReferenceSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oReferenceSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReferenceSurface(oReferenceSurface); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oReferenceSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeWrapSurface##classe::put_ReferenceSurface(CATIAReference * iReferenceSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iReferenceSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReferenceSurface(iReferenceSurface); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iReferenceSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeWrapSurface##classe::get_TargetSurface(CATIAReference *& oTargetSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oTargetSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TargetSurface(oTargetSurface); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oTargetSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeWrapSurface##classe::put_TargetSurface(CATIAReference * iTargetSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iTargetSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TargetSurface(iTargetSurface); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iTargetSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeWrapSurface##classe::get_DeformationMode(CATLONG & oDeformationMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oDeformationMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DeformationMode(oDeformationMode); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oDeformationMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeWrapSurface##classe::put_DeformationMode(CATLONG iDeformationMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iDeformationMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DeformationMode(iDeformationMode); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iDeformationMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeWrapSurface##classe::Compute() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Compute(); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeWrapSurface##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridShapeWrapSurface##classe::get_Thickness(CATIAHybridShape *& oThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickness); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oThickness); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeWrapSurface##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeWrapSurface##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeWrapSurface##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeWrapSurface##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridShapeWrapSurface##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridShapeWrapSurface(classe) \
 \
 \
declare_TIE_CATIAHybridShapeWrapSurface(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeWrapSurface##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeWrapSurface,"CATIAHybridShapeWrapSurface",CATIAHybridShapeWrapSurface::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeWrapSurface(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridShapeWrapSurface, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeWrapSurface##classe(classe::MetaObject(),CATIAHybridShapeWrapSurface::MetaObject(),(void *)CreateTIECATIAHybridShapeWrapSurface##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridShapeWrapSurface(classe) \
 \
 \
declare_TIE_CATIAHybridShapeWrapSurface(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridShapeWrapSurface##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridShapeWrapSurface,"CATIAHybridShapeWrapSurface",CATIAHybridShapeWrapSurface::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridShapeWrapSurface(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridShapeWrapSurface, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridShapeWrapSurface##classe(classe::MetaObject(),CATIAHybridShapeWrapSurface::MetaObject(),(void *)CreateTIECATIAHybridShapeWrapSurface##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridShapeWrapSurface(classe) TIE_CATIAHybridShapeWrapSurface(classe)
#else
#define BOA_CATIAHybridShapeWrapSurface(classe) CATImplementBOA(CATIAHybridShapeWrapSurface, classe)
#endif

#endif
