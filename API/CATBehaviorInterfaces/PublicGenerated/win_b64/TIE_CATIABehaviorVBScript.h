#ifndef __TIE_CATIABehaviorVBScript
#define __TIE_CATIABehaviorVBScript

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIABehaviorVBScript.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIABehaviorVBScript */
#define declare_TIE_CATIABehaviorVBScript(classe) \
 \
 \
class TIECATIABehaviorVBScript##classe : public CATIABehaviorVBScript \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIABehaviorVBScript, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall TestInternal(const CATBSTR & pName, CATLONG & iExist); \
      virtual HRESULT __stdcall GetInternal(const CATBSTR & pName, CATIABase *& oValue); \
      virtual HRESULT __stdcall PutInternal(const CATBSTR & pName, CATIABase * oValue); \
      virtual HRESULT __stdcall Start(); \
      virtual HRESULT __stdcall Done(); \
      virtual HRESULT __stdcall Suspend(); \
      virtual HRESULT __stdcall Cancel(); \
      virtual HRESULT __stdcall get_Behaviors(CATIABehaviors *& oBehaviors); \
      virtual HRESULT __stdcall TestInput(const CATBSTR & pName, CATLONG & iExist); \
      virtual HRESULT __stdcall GetInput(const CATBSTR & pName, CATIABase *& oValue); \
      virtual HRESULT __stdcall TestOutput(const CATBSTR & pName, CATLONG & iExist); \
      virtual HRESULT __stdcall GetOutput(const CATBSTR & pName, CATIABase *& oValue); \
      virtual HRESULT __stdcall PutOutput(const CATBSTR & pName, CATIABase * oValue); \
      virtual HRESULT __stdcall Activate(); \
      virtual HRESULT __stdcall Deactivate(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIABehaviorVBScript(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall TestInternal(const CATBSTR & pName, CATLONG & iExist); \
virtual HRESULT __stdcall GetInternal(const CATBSTR & pName, CATIABase *& oValue); \
virtual HRESULT __stdcall PutInternal(const CATBSTR & pName, CATIABase * oValue); \
virtual HRESULT __stdcall Start(); \
virtual HRESULT __stdcall Done(); \
virtual HRESULT __stdcall Suspend(); \
virtual HRESULT __stdcall Cancel(); \
virtual HRESULT __stdcall get_Behaviors(CATIABehaviors *& oBehaviors); \
virtual HRESULT __stdcall TestInput(const CATBSTR & pName, CATLONG & iExist); \
virtual HRESULT __stdcall GetInput(const CATBSTR & pName, CATIABase *& oValue); \
virtual HRESULT __stdcall TestOutput(const CATBSTR & pName, CATLONG & iExist); \
virtual HRESULT __stdcall GetOutput(const CATBSTR & pName, CATIABase *& oValue); \
virtual HRESULT __stdcall PutOutput(const CATBSTR & pName, CATIABase * oValue); \
virtual HRESULT __stdcall Activate(); \
virtual HRESULT __stdcall Deactivate(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIABehaviorVBScript(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::TestInternal(const CATBSTR & pName, CATLONG & iExist) \
{ \
return (ENVTIECALL(CATIABehaviorVBScript,ENVTIETypeLetter,ENVTIELetter)TestInternal(pName,iExist)); \
} \
HRESULT __stdcall  ENVTIEName::GetInternal(const CATBSTR & pName, CATIABase *& oValue) \
{ \
return (ENVTIECALL(CATIABehaviorVBScript,ENVTIETypeLetter,ENVTIELetter)GetInternal(pName,oValue)); \
} \
HRESULT __stdcall  ENVTIEName::PutInternal(const CATBSTR & pName, CATIABase * oValue) \
{ \
return (ENVTIECALL(CATIABehaviorVBScript,ENVTIETypeLetter,ENVTIELetter)PutInternal(pName,oValue)); \
} \
HRESULT __stdcall  ENVTIEName::Start() \
{ \
return (ENVTIECALL(CATIABehaviorVBScript,ENVTIETypeLetter,ENVTIELetter)Start()); \
} \
HRESULT __stdcall  ENVTIEName::Done() \
{ \
return (ENVTIECALL(CATIABehaviorVBScript,ENVTIETypeLetter,ENVTIELetter)Done()); \
} \
HRESULT __stdcall  ENVTIEName::Suspend() \
{ \
return (ENVTIECALL(CATIABehaviorVBScript,ENVTIETypeLetter,ENVTIELetter)Suspend()); \
} \
HRESULT __stdcall  ENVTIEName::Cancel() \
{ \
return (ENVTIECALL(CATIABehaviorVBScript,ENVTIETypeLetter,ENVTIELetter)Cancel()); \
} \
HRESULT __stdcall  ENVTIEName::get_Behaviors(CATIABehaviors *& oBehaviors) \
{ \
return (ENVTIECALL(CATIABehaviorVBScript,ENVTIETypeLetter,ENVTIELetter)get_Behaviors(oBehaviors)); \
} \
HRESULT __stdcall  ENVTIEName::TestInput(const CATBSTR & pName, CATLONG & iExist) \
{ \
return (ENVTIECALL(CATIABehaviorVBScript,ENVTIETypeLetter,ENVTIELetter)TestInput(pName,iExist)); \
} \
HRESULT __stdcall  ENVTIEName::GetInput(const CATBSTR & pName, CATIABase *& oValue) \
{ \
return (ENVTIECALL(CATIABehaviorVBScript,ENVTIETypeLetter,ENVTIELetter)GetInput(pName,oValue)); \
} \
HRESULT __stdcall  ENVTIEName::TestOutput(const CATBSTR & pName, CATLONG & iExist) \
{ \
return (ENVTIECALL(CATIABehaviorVBScript,ENVTIETypeLetter,ENVTIELetter)TestOutput(pName,iExist)); \
} \
HRESULT __stdcall  ENVTIEName::GetOutput(const CATBSTR & pName, CATIABase *& oValue) \
{ \
return (ENVTIECALL(CATIABehaviorVBScript,ENVTIETypeLetter,ENVTIELetter)GetOutput(pName,oValue)); \
} \
HRESULT __stdcall  ENVTIEName::PutOutput(const CATBSTR & pName, CATIABase * oValue) \
{ \
return (ENVTIECALL(CATIABehaviorVBScript,ENVTIETypeLetter,ENVTIELetter)PutOutput(pName,oValue)); \
} \
HRESULT __stdcall  ENVTIEName::Activate() \
{ \
return (ENVTIECALL(CATIABehaviorVBScript,ENVTIETypeLetter,ENVTIELetter)Activate()); \
} \
HRESULT __stdcall  ENVTIEName::Deactivate() \
{ \
return (ENVTIECALL(CATIABehaviorVBScript,ENVTIETypeLetter,ENVTIELetter)Deactivate()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIABehaviorVBScript,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIABehaviorVBScript,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIABehaviorVBScript,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIABehaviorVBScript,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIABehaviorVBScript,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIABehaviorVBScript(classe)    TIECATIABehaviorVBScript##classe


/* Common methods inside a TIE */
#define common_TIE_CATIABehaviorVBScript(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIABehaviorVBScript, classe) \
 \
 \
CATImplementTIEMethods(CATIABehaviorVBScript, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIABehaviorVBScript, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIABehaviorVBScript, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIABehaviorVBScript, classe) \
 \
HRESULT __stdcall  TIECATIABehaviorVBScript##classe::TestInternal(const CATBSTR & pName, CATLONG & iExist) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&pName,&iExist); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->TestInternal(pName,iExist); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&pName,&iExist); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorVBScript##classe::GetInternal(const CATBSTR & pName, CATIABase *& oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&pName,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInternal(pName,oValue); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&pName,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorVBScript##classe::PutInternal(const CATBSTR & pName, CATIABase * oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&pName,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutInternal(pName,oValue); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&pName,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorVBScript##classe::Start() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Start(); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorVBScript##classe::Done() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Done(); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorVBScript##classe::Suspend() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Suspend(); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorVBScript##classe::Cancel() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Cancel(); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorVBScript##classe::get_Behaviors(CATIABehaviors *& oBehaviors) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oBehaviors); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Behaviors(oBehaviors); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oBehaviors); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorVBScript##classe::TestInput(const CATBSTR & pName, CATLONG & iExist) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&pName,&iExist); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->TestInput(pName,iExist); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&pName,&iExist); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorVBScript##classe::GetInput(const CATBSTR & pName, CATIABase *& oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&pName,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInput(pName,oValue); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&pName,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorVBScript##classe::TestOutput(const CATBSTR & pName, CATLONG & iExist) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&pName,&iExist); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->TestOutput(pName,iExist); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&pName,&iExist); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorVBScript##classe::GetOutput(const CATBSTR & pName, CATIABase *& oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&pName,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOutput(pName,oValue); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&pName,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorVBScript##classe::PutOutput(const CATBSTR & pName, CATIABase * oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&pName,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutOutput(pName,oValue); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&pName,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorVBScript##classe::Activate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Activate(); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorVBScript##classe::Deactivate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Deactivate(); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIABehaviorVBScript##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIABehaviorVBScript##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIABehaviorVBScript##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIABehaviorVBScript##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIABehaviorVBScript##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIABehaviorVBScript(classe) \
 \
 \
declare_TIE_CATIABehaviorVBScript(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIABehaviorVBScript##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIABehaviorVBScript,"CATIABehaviorVBScript",CATIABehaviorVBScript::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIABehaviorVBScript(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIABehaviorVBScript, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIABehaviorVBScript##classe(classe::MetaObject(),CATIABehaviorVBScript::MetaObject(),(void *)CreateTIECATIABehaviorVBScript##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIABehaviorVBScript(classe) \
 \
 \
declare_TIE_CATIABehaviorVBScript(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIABehaviorVBScript##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIABehaviorVBScript,"CATIABehaviorVBScript",CATIABehaviorVBScript::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIABehaviorVBScript(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIABehaviorVBScript, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIABehaviorVBScript##classe(classe::MetaObject(),CATIABehaviorVBScript::MetaObject(),(void *)CreateTIECATIABehaviorVBScript##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIABehaviorVBScript(classe) TIE_CATIABehaviorVBScript(classe)
#else
#define BOA_CATIABehaviorVBScript(classe) CATImplementBOA(CATIABehaviorVBScript, classe)
#endif

#endif
