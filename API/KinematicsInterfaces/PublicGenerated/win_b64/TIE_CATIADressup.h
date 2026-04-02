#ifndef __TIE_CATIADressup
#define __TIE_CATIADressup

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADressup.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADressup */
#define declare_TIE_CATIADressup(classe) \
 \
 \
class TIECATIADressup##classe : public CATIADressup \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADressup, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Mechanism(CATIAMechanism *& oMechanism); \
      virtual HRESULT __stdcall get_Context(CATIAProduct *& oContext); \
      virtual HRESULT __stdcall Attach(CATIAProduct * iLink, CATIAProduct * iAttachedProd); \
      virtual HRESULT __stdcall Detach(CATIAProduct * iAttachedProd); \
      virtual HRESULT __stdcall ListAttached(CATIAProduct * iLink, CATSafeArrayVariant *& oProductLists); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIADressup(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Mechanism(CATIAMechanism *& oMechanism); \
virtual HRESULT __stdcall get_Context(CATIAProduct *& oContext); \
virtual HRESULT __stdcall Attach(CATIAProduct * iLink, CATIAProduct * iAttachedProd); \
virtual HRESULT __stdcall Detach(CATIAProduct * iAttachedProd); \
virtual HRESULT __stdcall ListAttached(CATIAProduct * iLink, CATSafeArrayVariant *& oProductLists); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIADressup(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Mechanism(CATIAMechanism *& oMechanism) \
{ \
return (ENVTIECALL(CATIADressup,ENVTIETypeLetter,ENVTIELetter)get_Mechanism(oMechanism)); \
} \
HRESULT __stdcall  ENVTIEName::get_Context(CATIAProduct *& oContext) \
{ \
return (ENVTIECALL(CATIADressup,ENVTIETypeLetter,ENVTIELetter)get_Context(oContext)); \
} \
HRESULT __stdcall  ENVTIEName::Attach(CATIAProduct * iLink, CATIAProduct * iAttachedProd) \
{ \
return (ENVTIECALL(CATIADressup,ENVTIETypeLetter,ENVTIELetter)Attach(iLink,iAttachedProd)); \
} \
HRESULT __stdcall  ENVTIEName::Detach(CATIAProduct * iAttachedProd) \
{ \
return (ENVTIECALL(CATIADressup,ENVTIETypeLetter,ENVTIELetter)Detach(iAttachedProd)); \
} \
HRESULT __stdcall  ENVTIEName::ListAttached(CATIAProduct * iLink, CATSafeArrayVariant *& oProductLists) \
{ \
return (ENVTIECALL(CATIADressup,ENVTIETypeLetter,ENVTIELetter)ListAttached(iLink,oProductLists)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADressup,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADressup,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADressup,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADressup,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADressup,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADressup(classe)    TIECATIADressup##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADressup(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADressup, classe) \
 \
 \
CATImplementTIEMethods(CATIADressup, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADressup, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADressup, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADressup, classe) \
 \
HRESULT __stdcall  TIECATIADressup##classe::get_Mechanism(CATIAMechanism *& oMechanism) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oMechanism); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Mechanism(oMechanism); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oMechanism); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADressup##classe::get_Context(CATIAProduct *& oContext) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oContext); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Context(oContext); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oContext); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADressup##classe::Attach(CATIAProduct * iLink, CATIAProduct * iAttachedProd) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iLink,&iAttachedProd); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Attach(iLink,iAttachedProd); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iLink,&iAttachedProd); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADressup##classe::Detach(CATIAProduct * iAttachedProd) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iAttachedProd); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Detach(iAttachedProd); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iAttachedProd); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADressup##classe::ListAttached(CATIAProduct * iLink, CATSafeArrayVariant *& oProductLists) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iLink,&oProductLists); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListAttached(iLink,oProductLists); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iLink,&oProductLists); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADressup##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADressup##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADressup##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADressup##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADressup##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADressup(classe) \
 \
 \
declare_TIE_CATIADressup(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADressup##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADressup,"CATIADressup",CATIADressup::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADressup(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADressup, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADressup##classe(classe::MetaObject(),CATIADressup::MetaObject(),(void *)CreateTIECATIADressup##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADressup(classe) \
 \
 \
declare_TIE_CATIADressup(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADressup##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADressup,"CATIADressup",CATIADressup::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADressup(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADressup, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADressup##classe(classe::MetaObject(),CATIADressup::MetaObject(),(void *)CreateTIECATIADressup##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADressup(classe) TIE_CATIADressup(classe)
#else
#define BOA_CATIADressup(classe) CATImplementBOA(CATIADressup, classe)
#endif

#endif
