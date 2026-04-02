#ifndef __TIE_CATIAAssemblySplit
#define __TIE_CATIAAssemblySplit

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAssemblySplit.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAssemblySplit */
#define declare_TIE_CATIAAssemblySplit(classe) \
 \
 \
class TIECATIAAssemblySplit##classe : public CATIAAssemblySplit \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAssemblySplit, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_SplittingSide(CatSplitSide & oSplittingSide); \
      virtual HRESULT __stdcall put_SplittingSide(CatSplitSide iSplittingSide); \
      virtual HRESULT __stdcall get_SplittingElement(CATIAReference *& oSurface); \
      virtual HRESULT __stdcall get_SplittingComponent(CATIAProduct *& oSplittingElemComp); \
      virtual HRESULT __stdcall ModifySplittingElement(CATIAReference * iSplittingElement, CATIAProduct * iSplittingElemComp); \
      virtual HRESULT __stdcall AddAffectedComponent(CATIAProduct * iComponent); \
      virtual HRESULT __stdcall RemoveAffectedComponent(CATIAProduct * iComponent); \
      virtual HRESULT __stdcall ListAffectedComponents(CATSafeArrayVariant & oListOfComponents); \
      virtual HRESULT __stdcall AffectedComponentsCount(CATLONG & oComponentCount); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAssemblySplit(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_SplittingSide(CatSplitSide & oSplittingSide); \
virtual HRESULT __stdcall put_SplittingSide(CatSplitSide iSplittingSide); \
virtual HRESULT __stdcall get_SplittingElement(CATIAReference *& oSurface); \
virtual HRESULT __stdcall get_SplittingComponent(CATIAProduct *& oSplittingElemComp); \
virtual HRESULT __stdcall ModifySplittingElement(CATIAReference * iSplittingElement, CATIAProduct * iSplittingElemComp); \
virtual HRESULT __stdcall AddAffectedComponent(CATIAProduct * iComponent); \
virtual HRESULT __stdcall RemoveAffectedComponent(CATIAProduct * iComponent); \
virtual HRESULT __stdcall ListAffectedComponents(CATSafeArrayVariant & oListOfComponents); \
virtual HRESULT __stdcall AffectedComponentsCount(CATLONG & oComponentCount); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAssemblySplit(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_SplittingSide(CatSplitSide & oSplittingSide) \
{ \
return (ENVTIECALL(CATIAAssemblySplit,ENVTIETypeLetter,ENVTIELetter)get_SplittingSide(oSplittingSide)); \
} \
HRESULT __stdcall  ENVTIEName::put_SplittingSide(CatSplitSide iSplittingSide) \
{ \
return (ENVTIECALL(CATIAAssemblySplit,ENVTIETypeLetter,ENVTIELetter)put_SplittingSide(iSplittingSide)); \
} \
HRESULT __stdcall  ENVTIEName::get_SplittingElement(CATIAReference *& oSurface) \
{ \
return (ENVTIECALL(CATIAAssemblySplit,ENVTIETypeLetter,ENVTIELetter)get_SplittingElement(oSurface)); \
} \
HRESULT __stdcall  ENVTIEName::get_SplittingComponent(CATIAProduct *& oSplittingElemComp) \
{ \
return (ENVTIECALL(CATIAAssemblySplit,ENVTIETypeLetter,ENVTIELetter)get_SplittingComponent(oSplittingElemComp)); \
} \
HRESULT __stdcall  ENVTIEName::ModifySplittingElement(CATIAReference * iSplittingElement, CATIAProduct * iSplittingElemComp) \
{ \
return (ENVTIECALL(CATIAAssemblySplit,ENVTIETypeLetter,ENVTIELetter)ModifySplittingElement(iSplittingElement,iSplittingElemComp)); \
} \
HRESULT __stdcall  ENVTIEName::AddAffectedComponent(CATIAProduct * iComponent) \
{ \
return (ENVTIECALL(CATIAAssemblySplit,ENVTIETypeLetter,ENVTIELetter)AddAffectedComponent(iComponent)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveAffectedComponent(CATIAProduct * iComponent) \
{ \
return (ENVTIECALL(CATIAAssemblySplit,ENVTIETypeLetter,ENVTIELetter)RemoveAffectedComponent(iComponent)); \
} \
HRESULT __stdcall  ENVTIEName::ListAffectedComponents(CATSafeArrayVariant & oListOfComponents) \
{ \
return (ENVTIECALL(CATIAAssemblySplit,ENVTIETypeLetter,ENVTIELetter)ListAffectedComponents(oListOfComponents)); \
} \
HRESULT __stdcall  ENVTIEName::AffectedComponentsCount(CATLONG & oComponentCount) \
{ \
return (ENVTIECALL(CATIAAssemblySplit,ENVTIETypeLetter,ENVTIELetter)AffectedComponentsCount(oComponentCount)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAssemblySplit,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAssemblySplit,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAssemblySplit,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAssemblySplit,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAssemblySplit,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAssemblySplit(classe)    TIECATIAAssemblySplit##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAssemblySplit(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAssemblySplit, classe) \
 \
 \
CATImplementTIEMethods(CATIAAssemblySplit, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAssemblySplit, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAssemblySplit, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAssemblySplit, classe) \
 \
HRESULT __stdcall  TIECATIAAssemblySplit##classe::get_SplittingSide(CatSplitSide & oSplittingSide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oSplittingSide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SplittingSide(oSplittingSide); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oSplittingSide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblySplit##classe::put_SplittingSide(CatSplitSide iSplittingSide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iSplittingSide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SplittingSide(iSplittingSide); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iSplittingSide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblySplit##classe::get_SplittingElement(CATIAReference *& oSurface) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oSurface); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SplittingElement(oSurface); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oSurface); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblySplit##classe::get_SplittingComponent(CATIAProduct *& oSplittingElemComp) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oSplittingElemComp); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SplittingComponent(oSplittingElemComp); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oSplittingElemComp); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblySplit##classe::ModifySplittingElement(CATIAReference * iSplittingElement, CATIAProduct * iSplittingElemComp) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iSplittingElement,&iSplittingElemComp); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ModifySplittingElement(iSplittingElement,iSplittingElemComp); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iSplittingElement,&iSplittingElemComp); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblySplit##classe::AddAffectedComponent(CATIAProduct * iComponent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iComponent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddAffectedComponent(iComponent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iComponent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblySplit##classe::RemoveAffectedComponent(CATIAProduct * iComponent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iComponent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveAffectedComponent(iComponent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iComponent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblySplit##classe::ListAffectedComponents(CATSafeArrayVariant & oListOfComponents) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oListOfComponents); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListAffectedComponents(oListOfComponents); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oListOfComponents); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAAssemblySplit##classe::AffectedComponentsCount(CATLONG & oComponentCount) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oComponentCount); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AffectedComponentsCount(oComponentCount); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oComponentCount); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemblySplit##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemblySplit##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemblySplit##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemblySplit##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAssemblySplit##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAssemblySplit(classe) \
 \
 \
declare_TIE_CATIAAssemblySplit(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAssemblySplit##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAssemblySplit,"CATIAAssemblySplit",CATIAAssemblySplit::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAssemblySplit(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAssemblySplit, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAssemblySplit##classe(classe::MetaObject(),CATIAAssemblySplit::MetaObject(),(void *)CreateTIECATIAAssemblySplit##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAssemblySplit(classe) \
 \
 \
declare_TIE_CATIAAssemblySplit(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAssemblySplit##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAssemblySplit,"CATIAAssemblySplit",CATIAAssemblySplit::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAssemblySplit(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAssemblySplit, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAssemblySplit##classe(classe::MetaObject(),CATIAAssemblySplit::MetaObject(),(void *)CreateTIECATIAAssemblySplit##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAssemblySplit(classe) TIE_CATIAAssemblySplit(classe)
#else
#define BOA_CATIAAssemblySplit(classe) CATImplementBOA(CATIAAssemblySplit, classe)
#endif

#endif
