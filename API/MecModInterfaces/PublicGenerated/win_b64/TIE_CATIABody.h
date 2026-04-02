#ifndef __TIE_CATIABody
#define __TIE_CATIABody

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIABody.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIABody */
#define declare_TIE_CATIABody(classe) \
 \
 \
class TIECATIABody##classe : public CATIABody \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIABody, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Shapes(CATIAShapes *& oShapes); \
      virtual HRESULT __stdcall get_Sketches(CATIASketches *& oSketches); \
      virtual HRESULT __stdcall get_HybridBodies(CATIAHybridBodies *& oHybridBodies); \
      virtual HRESULT __stdcall get_InBooleanOperation(CAT_VARIANT_BOOL & oInBooleanOperation); \
      virtual HRESULT __stdcall get_HybridShapes(CATIAHybridShapes *& oHybridShapes); \
      virtual HRESULT __stdcall get_OrderedGeometricalSets(CATIAOrderedGeometricalSets *& oOrderedGeometricalSets); \
      virtual HRESULT __stdcall InsertHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIABody(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Shapes(CATIAShapes *& oShapes); \
virtual HRESULT __stdcall get_Sketches(CATIASketches *& oSketches); \
virtual HRESULT __stdcall get_HybridBodies(CATIAHybridBodies *& oHybridBodies); \
virtual HRESULT __stdcall get_InBooleanOperation(CAT_VARIANT_BOOL & oInBooleanOperation); \
virtual HRESULT __stdcall get_HybridShapes(CATIAHybridShapes *& oHybridShapes); \
virtual HRESULT __stdcall get_OrderedGeometricalSets(CATIAOrderedGeometricalSets *& oOrderedGeometricalSets); \
virtual HRESULT __stdcall InsertHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIABody(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Shapes(CATIAShapes *& oShapes) \
{ \
return (ENVTIECALL(CATIABody,ENVTIETypeLetter,ENVTIELetter)get_Shapes(oShapes)); \
} \
HRESULT __stdcall  ENVTIEName::get_Sketches(CATIASketches *& oSketches) \
{ \
return (ENVTIECALL(CATIABody,ENVTIETypeLetter,ENVTIELetter)get_Sketches(oSketches)); \
} \
HRESULT __stdcall  ENVTIEName::get_HybridBodies(CATIAHybridBodies *& oHybridBodies) \
{ \
return (ENVTIECALL(CATIABody,ENVTIETypeLetter,ENVTIELetter)get_HybridBodies(oHybridBodies)); \
} \
HRESULT __stdcall  ENVTIEName::get_InBooleanOperation(CAT_VARIANT_BOOL & oInBooleanOperation) \
{ \
return (ENVTIECALL(CATIABody,ENVTIETypeLetter,ENVTIELetter)get_InBooleanOperation(oInBooleanOperation)); \
} \
HRESULT __stdcall  ENVTIEName::get_HybridShapes(CATIAHybridShapes *& oHybridShapes) \
{ \
return (ENVTIECALL(CATIABody,ENVTIETypeLetter,ENVTIELetter)get_HybridShapes(oHybridShapes)); \
} \
HRESULT __stdcall  ENVTIEName::get_OrderedGeometricalSets(CATIAOrderedGeometricalSets *& oOrderedGeometricalSets) \
{ \
return (ENVTIECALL(CATIABody,ENVTIETypeLetter,ENVTIELetter)get_OrderedGeometricalSets(oOrderedGeometricalSets)); \
} \
HRESULT __stdcall  ENVTIEName::InsertHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIABody,ENVTIETypeLetter,ENVTIELetter)InsertHybridShape(iHybridShape)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIABody,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIABody,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIABody,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIABody,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIABody,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIABody(classe)    TIECATIABody##classe


/* Common methods inside a TIE */
#define common_TIE_CATIABody(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIABody, classe) \
 \
 \
CATImplementTIEMethods(CATIABody, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIABody, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIABody, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIABody, classe) \
 \
HRESULT __stdcall  TIECATIABody##classe::get_Shapes(CATIAShapes *& oShapes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oShapes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Shapes(oShapes); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oShapes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABody##classe::get_Sketches(CATIASketches *& oSketches) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oSketches); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Sketches(oSketches); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oSketches); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABody##classe::get_HybridBodies(CATIAHybridBodies *& oHybridBodies) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oHybridBodies); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HybridBodies(oHybridBodies); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oHybridBodies); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABody##classe::get_InBooleanOperation(CAT_VARIANT_BOOL & oInBooleanOperation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oInBooleanOperation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InBooleanOperation(oInBooleanOperation); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oInBooleanOperation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABody##classe::get_HybridShapes(CATIAHybridShapes *& oHybridShapes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oHybridShapes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HybridShapes(oHybridShapes); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oHybridShapes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABody##classe::get_OrderedGeometricalSets(CATIAOrderedGeometricalSets *& oOrderedGeometricalSets) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oOrderedGeometricalSets); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OrderedGeometricalSets(oOrderedGeometricalSets); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oOrderedGeometricalSets); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABody##classe::InsertHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InsertHybridShape(iHybridShape); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIABody##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIABody##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIABody##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIABody##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIABody##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIABody(classe) \
 \
 \
declare_TIE_CATIABody(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIABody##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIABody,"CATIABody",CATIABody::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIABody(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIABody, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIABody##classe(classe::MetaObject(),CATIABody::MetaObject(),(void *)CreateTIECATIABody##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIABody(classe) \
 \
 \
declare_TIE_CATIABody(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIABody##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIABody,"CATIABody",CATIABody::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIABody(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIABody, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIABody##classe(classe::MetaObject(),CATIABody::MetaObject(),(void *)CreateTIECATIABody##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIABody(classe) TIE_CATIABody(classe)
#else
#define BOA_CATIABody(classe) CATImplementBOA(CATIABody, classe)
#endif

#endif
