#ifndef __TIE_CATIAFunctScript
#define __TIE_CATIAFunctScript

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFunctScript.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFunctScript */
#define declare_TIE_CATIAFunctScript(classe) \
 \
 \
class TIECATIAFunctScript##classe : public CATIAFunctScript \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFunctScript, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ScriptText(CATBSTR & oScriptText); \
      virtual HRESULT __stdcall put_ScriptText(const CATBSTR & iScriptText); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAFunctScript(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ScriptText(CATBSTR & oScriptText); \
virtual HRESULT __stdcall put_ScriptText(const CATBSTR & iScriptText); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAFunctScript(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ScriptText(CATBSTR & oScriptText) \
{ \
return (ENVTIECALL(CATIAFunctScript,ENVTIETypeLetter,ENVTIELetter)get_ScriptText(oScriptText)); \
} \
HRESULT __stdcall  ENVTIEName::put_ScriptText(const CATBSTR & iScriptText) \
{ \
return (ENVTIECALL(CATIAFunctScript,ENVTIETypeLetter,ENVTIELetter)put_ScriptText(iScriptText)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFunctScript,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFunctScript,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAFunctScript,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAFunctScript,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAFunctScript,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFunctScript(classe)    TIECATIAFunctScript##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFunctScript(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFunctScript, classe) \
 \
 \
CATImplementTIEMethods(CATIAFunctScript, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFunctScript, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFunctScript, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFunctScript, classe) \
 \
HRESULT __stdcall  TIECATIAFunctScript##classe::get_ScriptText(CATBSTR & oScriptText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oScriptText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ScriptText(oScriptText); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oScriptText); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctScript##classe::put_ScriptText(const CATBSTR & iScriptText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iScriptText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ScriptText(iScriptText); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iScriptText); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctScript##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctScript##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctScript##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctScript##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctScript##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFunctScript(classe) \
 \
 \
declare_TIE_CATIAFunctScript(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctScript##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctScript,"CATIAFunctScript",CATIAFunctScript::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctScript(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFunctScript, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctScript##classe(classe::MetaObject(),CATIAFunctScript::MetaObject(),(void *)CreateTIECATIAFunctScript##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFunctScript(classe) \
 \
 \
declare_TIE_CATIAFunctScript(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctScript##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctScript,"CATIAFunctScript",CATIAFunctScript::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctScript(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFunctScript, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctScript##classe(classe::MetaObject(),CATIAFunctScript::MetaObject(),(void *)CreateTIECATIAFunctScript##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFunctScript(classe) TIE_CATIAFunctScript(classe)
#else
#define BOA_CATIAFunctScript(classe) CATImplementBOA(CATIAFunctScript, classe)
#endif

#endif
