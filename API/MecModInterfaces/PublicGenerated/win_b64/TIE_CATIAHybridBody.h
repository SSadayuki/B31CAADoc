#ifndef __TIE_CATIAHybridBody
#define __TIE_CATIAHybridBody

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAHybridBody.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAHybridBody */
#define declare_TIE_CATIAHybridBody(classe) \
 \
 \
class TIECATIAHybridBody##classe : public CATIAHybridBody \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAHybridBody, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_GeometricElements(CATIAGeometricElements *& oGeometricElements); \
      virtual HRESULT __stdcall get_HybridShapes(CATIAHybridShapes *& oHybridShapes); \
      virtual HRESULT __stdcall get_Bodies(CATIABodies *& oBodies); \
      virtual HRESULT __stdcall get_HybridBodies(CATIAHybridBodies *& oHybridBodies); \
      virtual HRESULT __stdcall get_HybridSketches(CATIASketches *& oSketches); \
      virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAHybridBody(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_GeometricElements(CATIAGeometricElements *& oGeometricElements); \
virtual HRESULT __stdcall get_HybridShapes(CATIAHybridShapes *& oHybridShapes); \
virtual HRESULT __stdcall get_Bodies(CATIABodies *& oBodies); \
virtual HRESULT __stdcall get_HybridBodies(CATIAHybridBodies *& oHybridBodies); \
virtual HRESULT __stdcall get_HybridSketches(CATIASketches *& oSketches); \
virtual HRESULT __stdcall AppendHybridShape(CATIAHybridShape * iHybridShape); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAHybridBody(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_GeometricElements(CATIAGeometricElements *& oGeometricElements) \
{ \
return (ENVTIECALL(CATIAHybridBody,ENVTIETypeLetter,ENVTIELetter)get_GeometricElements(oGeometricElements)); \
} \
HRESULT __stdcall  ENVTIEName::get_HybridShapes(CATIAHybridShapes *& oHybridShapes) \
{ \
return (ENVTIECALL(CATIAHybridBody,ENVTIETypeLetter,ENVTIELetter)get_HybridShapes(oHybridShapes)); \
} \
HRESULT __stdcall  ENVTIEName::get_Bodies(CATIABodies *& oBodies) \
{ \
return (ENVTIECALL(CATIAHybridBody,ENVTIETypeLetter,ENVTIELetter)get_Bodies(oBodies)); \
} \
HRESULT __stdcall  ENVTIEName::get_HybridBodies(CATIAHybridBodies *& oHybridBodies) \
{ \
return (ENVTIECALL(CATIAHybridBody,ENVTIETypeLetter,ENVTIELetter)get_HybridBodies(oHybridBodies)); \
} \
HRESULT __stdcall  ENVTIEName::get_HybridSketches(CATIASketches *& oSketches) \
{ \
return (ENVTIECALL(CATIAHybridBody,ENVTIETypeLetter,ENVTIELetter)get_HybridSketches(oSketches)); \
} \
HRESULT __stdcall  ENVTIEName::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
return (ENVTIECALL(CATIAHybridBody,ENVTIETypeLetter,ENVTIELetter)AppendHybridShape(iHybridShape)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAHybridBody,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAHybridBody,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridBody,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAHybridBody,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAHybridBody,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAHybridBody(classe)    TIECATIAHybridBody##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAHybridBody(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAHybridBody, classe) \
 \
 \
CATImplementTIEMethods(CATIAHybridBody, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAHybridBody, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAHybridBody, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAHybridBody, classe) \
 \
HRESULT __stdcall  TIECATIAHybridBody##classe::get_GeometricElements(CATIAGeometricElements *& oGeometricElements) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oGeometricElements); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GeometricElements(oGeometricElements); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oGeometricElements); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridBody##classe::get_HybridShapes(CATIAHybridShapes *& oHybridShapes) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oHybridShapes); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HybridShapes(oHybridShapes); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oHybridShapes); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridBody##classe::get_Bodies(CATIABodies *& oBodies) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oBodies); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Bodies(oBodies); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oBodies); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridBody##classe::get_HybridBodies(CATIAHybridBodies *& oHybridBodies) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oHybridBodies); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HybridBodies(oHybridBodies); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oHybridBodies); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridBody##classe::get_HybridSketches(CATIASketches *& oSketches) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oSketches); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HybridSketches(oSketches); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oSketches); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAHybridBody##classe::AppendHybridShape(CATIAHybridShape * iHybridShape) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iHybridShape); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppendHybridShape(iHybridShape); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iHybridShape); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridBody##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridBody##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridBody##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridBody##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAHybridBody##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAHybridBody(classe) \
 \
 \
declare_TIE_CATIAHybridBody(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridBody##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridBody,"CATIAHybridBody",CATIAHybridBody::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridBody(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAHybridBody, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridBody##classe(classe::MetaObject(),CATIAHybridBody::MetaObject(),(void *)CreateTIECATIAHybridBody##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAHybridBody(classe) \
 \
 \
declare_TIE_CATIAHybridBody(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAHybridBody##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAHybridBody,"CATIAHybridBody",CATIAHybridBody::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAHybridBody(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAHybridBody, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAHybridBody##classe(classe::MetaObject(),CATIAHybridBody::MetaObject(),(void *)CreateTIECATIAHybridBody##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAHybridBody(classe) TIE_CATIAHybridBody(classe)
#else
#define BOA_CATIAHybridBody(classe) CATImplementBOA(CATIAHybridBody, classe)
#endif

#endif
