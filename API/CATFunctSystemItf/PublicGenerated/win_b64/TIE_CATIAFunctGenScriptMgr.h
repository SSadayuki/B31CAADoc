#ifndef __TIE_CATIAFunctGenScriptMgr
#define __TIE_CATIAFunctGenScriptMgr

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFunctGenScriptMgr.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFunctGenScriptMgr */
#define declare_TIE_CATIAFunctGenScriptMgr(classe) \
 \
 \
class TIECATIAFunctGenScriptMgr##classe : public CATIAFunctGenScriptMgr \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFunctGenScriptMgr, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_CurrentScript(CATLONG & oCurrentScript); \
      virtual HRESULT __stdcall put_CurrentScript(CATLONG iCurrentScript); \
      virtual HRESULT __stdcall get_Scripts(CATIAFunctScripts *& oScripts); \
      virtual HRESULT __stdcall Init(); \
      virtual HRESULT __stdcall Free(); \
      virtual HRESULT __stdcall get_FunctionalElement(CATIAFunctionalElement *& oElem); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAFunctGenScriptMgr(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_CurrentScript(CATLONG & oCurrentScript); \
virtual HRESULT __stdcall put_CurrentScript(CATLONG iCurrentScript); \
virtual HRESULT __stdcall get_Scripts(CATIAFunctScripts *& oScripts); \
virtual HRESULT __stdcall Init(); \
virtual HRESULT __stdcall Free(); \
virtual HRESULT __stdcall get_FunctionalElement(CATIAFunctionalElement *& oElem); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAFunctGenScriptMgr(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_CurrentScript(CATLONG & oCurrentScript) \
{ \
return (ENVTIECALL(CATIAFunctGenScriptMgr,ENVTIETypeLetter,ENVTIELetter)get_CurrentScript(oCurrentScript)); \
} \
HRESULT __stdcall  ENVTIEName::put_CurrentScript(CATLONG iCurrentScript) \
{ \
return (ENVTIECALL(CATIAFunctGenScriptMgr,ENVTIETypeLetter,ENVTIELetter)put_CurrentScript(iCurrentScript)); \
} \
HRESULT __stdcall  ENVTIEName::get_Scripts(CATIAFunctScripts *& oScripts) \
{ \
return (ENVTIECALL(CATIAFunctGenScriptMgr,ENVTIETypeLetter,ENVTIELetter)get_Scripts(oScripts)); \
} \
HRESULT __stdcall  ENVTIEName::Init() \
{ \
return (ENVTIECALL(CATIAFunctGenScriptMgr,ENVTIETypeLetter,ENVTIELetter)Init()); \
} \
HRESULT __stdcall  ENVTIEName::Free() \
{ \
return (ENVTIECALL(CATIAFunctGenScriptMgr,ENVTIETypeLetter,ENVTIELetter)Free()); \
} \
HRESULT __stdcall  ENVTIEName::get_FunctionalElement(CATIAFunctionalElement *& oElem) \
{ \
return (ENVTIECALL(CATIAFunctGenScriptMgr,ENVTIETypeLetter,ENVTIELetter)get_FunctionalElement(oElem)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFunctGenScriptMgr,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFunctGenScriptMgr,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAFunctGenScriptMgr,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAFunctGenScriptMgr,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAFunctGenScriptMgr,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFunctGenScriptMgr(classe)    TIECATIAFunctGenScriptMgr##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFunctGenScriptMgr(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFunctGenScriptMgr, classe) \
 \
 \
CATImplementTIEMethods(CATIAFunctGenScriptMgr, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFunctGenScriptMgr, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFunctGenScriptMgr, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFunctGenScriptMgr, classe) \
 \
HRESULT __stdcall  TIECATIAFunctGenScriptMgr##classe::get_CurrentScript(CATLONG & oCurrentScript) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oCurrentScript); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CurrentScript(oCurrentScript); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oCurrentScript); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctGenScriptMgr##classe::put_CurrentScript(CATLONG iCurrentScript) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iCurrentScript); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CurrentScript(iCurrentScript); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iCurrentScript); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctGenScriptMgr##classe::get_Scripts(CATIAFunctScripts *& oScripts) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oScripts); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Scripts(oScripts); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oScripts); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctGenScriptMgr##classe::Init() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Init(); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctGenScriptMgr##classe::Free() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Free(); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctGenScriptMgr##classe::get_FunctionalElement(CATIAFunctionalElement *& oElem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oElem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FunctionalElement(oElem); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oElem); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctGenScriptMgr##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctGenScriptMgr##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctGenScriptMgr##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctGenScriptMgr##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctGenScriptMgr##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFunctGenScriptMgr(classe) \
 \
 \
declare_TIE_CATIAFunctGenScriptMgr(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctGenScriptMgr##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctGenScriptMgr,"CATIAFunctGenScriptMgr",CATIAFunctGenScriptMgr::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctGenScriptMgr(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFunctGenScriptMgr, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctGenScriptMgr##classe(classe::MetaObject(),CATIAFunctGenScriptMgr::MetaObject(),(void *)CreateTIECATIAFunctGenScriptMgr##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFunctGenScriptMgr(classe) \
 \
 \
declare_TIE_CATIAFunctGenScriptMgr(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctGenScriptMgr##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctGenScriptMgr,"CATIAFunctGenScriptMgr",CATIAFunctGenScriptMgr::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctGenScriptMgr(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFunctGenScriptMgr, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctGenScriptMgr##classe(classe::MetaObject(),CATIAFunctGenScriptMgr::MetaObject(),(void *)CreateTIECATIAFunctGenScriptMgr##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFunctGenScriptMgr(classe) TIE_CATIAFunctGenScriptMgr(classe)
#else
#define BOA_CATIAFunctGenScriptMgr(classe) CATImplementBOA(CATIAFunctGenScriptMgr, classe)
#endif

#endif
