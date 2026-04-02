#ifndef __TIE_CATIAOrderedGeometricalSet
#define __TIE_CATIAOrderedGeometricalSet

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAOrderedGeometricalSet.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAOrderedGeometricalSet */
#define declare_TIE_CATIAOrderedGeometricalSet(classe) \
 \
 \
class TIECATIAOrderedGeometricalSet##classe : public CATIAOrderedGeometricalSet \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAOrderedGeometricalSet, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_HybridShapes(CATIAHybridShapes *& oHybridShapes); \
      virtual HRESULT __stdcall get_Bodies(CATIABodies *& oBodies); \
      virtual HRESULT __stdcall get_OrderedGeometricalSets(CATIAOrderedGeometricalSets *& oOrderedGeometricalSets); \
      virtual HRESULT __stdcall get_OrderedSketches(CATIASketches *& oSketches); \
      virtual HRESULT __stdcall InsertHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAOrderedGeometricalSet(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_HybridShapes(CATIAHybridShapes *& oHybridShapes); \
virtual HRESULT __stdcall get_Bodies(CATIABodies *& oBodies); \
virtual HRESULT __stdcall get_OrderedGeometricalSets(CATIAOrderedGeometricalSets *& oOrderedGeometricalSets); \
virtual HRESULT __stdcall get_OrderedSketches(CATIASketches *& oSketches); \
virtual HRESULT __stdcall InsertHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAOrderedGeometricalSet(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_HybridShapes(CATIAHybridShapes *& oHybridShapes) \
{ \
return (ENVTIECALL(CATIAOrderedGeometricalSet,ENVTIETypeLetter,ENVTIELetter)get_HybridShapes(oHybridShapes)); \
} \
HRESULT __stdcall  ENVTIEName::get_Bodies(CATIABodies *& oBodies) \
{ \
return (ENVTIECALL(CATIAOrderedGeometricalSet,ENVTIETypeLetter,ENVTIELetter)get_Bodies(oBodies)); \
} \
HRESULT __stdcall  ENVTIEName::get_OrderedGeometricalSets(CATIAOrderedGeometricalSets *& oOrderedGeometricalSets) \
{ \
return (ENVTIECALL(CATIAOrderedGeometricalSet,ENVTIETypeLetter,ENVTIELetter)get_OrderedGeometricalSets(oOrderedGeometricalSets)); \
} \
HRESULT __stdcall  ENVTIEName::get_OrderedSketches(CATIASketches *& oSketches) \
{ \
return (ENVTIECALL(CATIAOrderedGeometricalSet,ENVTIETypeLetter,ENVTIELetter)get_OrderedSketches(oSketches)); \
} \
HRESULT __stdcall  ENVTIEName::InsertHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAOrderedGeometricalSet,ENVTIETypeLetter,ENVTIELetter)InsertHybridShape(iHybridShape)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAOrderedGeometricalSet,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAOrderedGeometricalSet,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAOrderedGeometricalSet,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAOrderedGeometricalSet,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAOrderedGeometricalSet,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAOrderedGeometricalSet(classe)    TIECATIAOrderedGeometricalSet##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAOrderedGeometricalSet(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAOrderedGeometricalSet, classe) \
 \
 \
CATImplementTIEMethods(CATIAOrderedGeometricalSet, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAOrderedGeometricalSet, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAOrderedGeometricalSet, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAOrderedGeometricalSet, classe) \
 \
HRESULT __stdcall  TIECATIAOrderedGeometricalSet##classe::get_HybridShapes(CATIAHybridShapes *& oHybridShapes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oHybridShapes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HybridShapes(oHybridShapes); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oHybridShapes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOrderedGeometricalSet##classe::get_Bodies(CATIABodies *& oBodies) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oBodies); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Bodies(oBodies); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oBodies); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOrderedGeometricalSet##classe::get_OrderedGeometricalSets(CATIAOrderedGeometricalSets *& oOrderedGeometricalSets) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oOrderedGeometricalSets); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OrderedGeometricalSets(oOrderedGeometricalSets); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oOrderedGeometricalSets); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOrderedGeometricalSet##classe::get_OrderedSketches(CATIASketches *& oSketches) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oSketches); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OrderedSketches(oSketches); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oSketches); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOrderedGeometricalSet##classe::InsertHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InsertHybridShape(iHybridShape); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOrderedGeometricalSet##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOrderedGeometricalSet##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOrderedGeometricalSet##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOrderedGeometricalSet##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOrderedGeometricalSet##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAOrderedGeometricalSet(classe) \
 \
 \
declare_TIE_CATIAOrderedGeometricalSet(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAOrderedGeometricalSet##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAOrderedGeometricalSet,"CATIAOrderedGeometricalSet",CATIAOrderedGeometricalSet::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAOrderedGeometricalSet(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAOrderedGeometricalSet, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAOrderedGeometricalSet##classe(classe::MetaObject(),CATIAOrderedGeometricalSet::MetaObject(),(void *)CreateTIECATIAOrderedGeometricalSet##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAOrderedGeometricalSet(classe) \
 \
 \
declare_TIE_CATIAOrderedGeometricalSet(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAOrderedGeometricalSet##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAOrderedGeometricalSet,"CATIAOrderedGeometricalSet",CATIAOrderedGeometricalSet::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAOrderedGeometricalSet(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAOrderedGeometricalSet, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAOrderedGeometricalSet##classe(classe::MetaObject(),CATIAOrderedGeometricalSet::MetaObject(),(void *)CreateTIECATIAOrderedGeometricalSet##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAOrderedGeometricalSet(classe) TIE_CATIAOrderedGeometricalSet(classe)
#else
#define BOA_CATIAOrderedGeometricalSet(classe) CATImplementBOA(CATIAOrderedGeometricalSet, classe)
#endif

#endif
