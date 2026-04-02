#ifndef __TIE_CATIAMfgManufacturingFactories
#define __TIE_CATIAMfgManufacturingFactories

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAMfgManufacturingFactories.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAMfgManufacturingFactories */
#define declare_TIE_CATIAMfgManufacturingFactories(classe) \
 \
 \
class TIECATIAMfgManufacturingFactories##classe : public CATIAMfgManufacturingFactories \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAMfgManufacturingFactories, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall GetManufacturingResourceFactory(CATIABase *& oResourceFactory); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAMfgManufacturingFactories(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall GetManufacturingResourceFactory(CATIABase *& oResourceFactory); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAMfgManufacturingFactories(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::GetManufacturingResourceFactory(CATIABase *& oResourceFactory) \
{ \
return (ENVTIECALL(CATIAMfgManufacturingFactories,ENVTIETypeLetter,ENVTIELetter)GetManufacturingResourceFactory(oResourceFactory)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAMfgManufacturingFactories,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAMfgManufacturingFactories,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAMfgManufacturingFactories,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAMfgManufacturingFactories,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAMfgManufacturingFactories,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAMfgManufacturingFactories(classe)    TIECATIAMfgManufacturingFactories##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAMfgManufacturingFactories(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAMfgManufacturingFactories, classe) \
 \
 \
CATImplementTIEMethods(CATIAMfgManufacturingFactories, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAMfgManufacturingFactories, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAMfgManufacturingFactories, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAMfgManufacturingFactories, classe) \
 \
HRESULT __stdcall  TIECATIAMfgManufacturingFactories##classe::GetManufacturingResourceFactory(CATIABase *& oResourceFactory) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oResourceFactory); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetManufacturingResourceFactory(oResourceFactory); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oResourceFactory); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMfgManufacturingFactories##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMfgManufacturingFactories##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMfgManufacturingFactories##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMfgManufacturingFactories##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAMfgManufacturingFactories##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAMfgManufacturingFactories(classe) \
 \
 \
declare_TIE_CATIAMfgManufacturingFactories(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMfgManufacturingFactories##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMfgManufacturingFactories,"CATIAMfgManufacturingFactories",CATIAMfgManufacturingFactories::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMfgManufacturingFactories(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAMfgManufacturingFactories, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMfgManufacturingFactories##classe(classe::MetaObject(),CATIAMfgManufacturingFactories::MetaObject(),(void *)CreateTIECATIAMfgManufacturingFactories##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAMfgManufacturingFactories(classe) \
 \
 \
declare_TIE_CATIAMfgManufacturingFactories(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMfgManufacturingFactories##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMfgManufacturingFactories,"CATIAMfgManufacturingFactories",CATIAMfgManufacturingFactories::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMfgManufacturingFactories(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAMfgManufacturingFactories, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMfgManufacturingFactories##classe(classe::MetaObject(),CATIAMfgManufacturingFactories::MetaObject(),(void *)CreateTIECATIAMfgManufacturingFactories##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAMfgManufacturingFactories(classe) TIE_CATIAMfgManufacturingFactories(classe)
#else
#define BOA_CATIAMfgManufacturingFactories(classe) CATImplementBOA(CATIAMfgManufacturingFactories, classe)
#endif

#endif
