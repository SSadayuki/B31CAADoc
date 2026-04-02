#ifndef __TIE_CATIAAxisToAxis
#define __TIE_CATIAAxisToAxis

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAAxisToAxis.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAAxisToAxis */
#define declare_TIE_CATIAAxisToAxis(classe) \
 \
 \
class TIECATIAAxisToAxis##classe : public CATIAAxisToAxis \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAAxisToAxis, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_HybridShape(CATIAHybridShape *& oHybridShapeAxisToAxis); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAAxisToAxis(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_HybridShape(CATIAHybridShape *& oHybridShapeAxisToAxis); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAAxisToAxis(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_HybridShape(CATIAHybridShape *& oHybridShapeAxisToAxis) \
{ \
return (ENVTIECALL(CATIAAxisToAxis,ENVTIETypeLetter,ENVTIELetter)get_HybridShape(oHybridShapeAxisToAxis)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAAxisToAxis,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAAxisToAxis,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAAxisToAxis,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAAxisToAxis,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAAxisToAxis,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAAxisToAxis(classe)    TIECATIAAxisToAxis##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAAxisToAxis(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAAxisToAxis, classe) \
 \
 \
CATImplementTIEMethods(CATIAAxisToAxis, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAAxisToAxis, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAAxisToAxis, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAAxisToAxis, classe) \
 \
HRESULT __stdcall  TIECATIAAxisToAxis##classe::get_HybridShape(CATIAHybridShape *& oHybridShapeAxisToAxis) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oHybridShapeAxisToAxis); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HybridShape(oHybridShapeAxisToAxis); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oHybridShapeAxisToAxis); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAxisToAxis##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAxisToAxis##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAxisToAxis##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAxisToAxis##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAAxisToAxis##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAAxisToAxis(classe) \
 \
 \
declare_TIE_CATIAAxisToAxis(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAxisToAxis##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAxisToAxis,"CATIAAxisToAxis",CATIAAxisToAxis::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAxisToAxis(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAAxisToAxis, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAxisToAxis##classe(classe::MetaObject(),CATIAAxisToAxis::MetaObject(),(void *)CreateTIECATIAAxisToAxis##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAAxisToAxis(classe) \
 \
 \
declare_TIE_CATIAAxisToAxis(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAAxisToAxis##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAAxisToAxis,"CATIAAxisToAxis",CATIAAxisToAxis::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAAxisToAxis(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAAxisToAxis, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAAxisToAxis##classe(classe::MetaObject(),CATIAAxisToAxis::MetaObject(),(void *)CreateTIECATIAAxisToAxis##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAAxisToAxis(classe) TIE_CATIAAxisToAxis(classe)
#else
#define BOA_CATIAAxisToAxis(classe) CATImplementBOA(CATIAAxisToAxis, classe)
#endif

#endif
