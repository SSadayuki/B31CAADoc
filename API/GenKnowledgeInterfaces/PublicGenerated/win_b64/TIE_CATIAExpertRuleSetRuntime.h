#ifndef __TIE_CATIAExpertRuleSetRuntime
#define __TIE_CATIAExpertRuleSetRuntime

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAExpertRuleSetRuntime.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAExpertRuleSetRuntime */
#define declare_TIE_CATIAExpertRuleSetRuntime(classe) \
 \
 \
class TIECATIAExpertRuleSetRuntime##classe : public CATIAExpertRuleSetRuntime \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAExpertRuleSetRuntime, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_RuleSetEdition(CATIAExpertRuleSet *& oRuleSetEdition); \
      virtual HRESULT __stdcall get_ExpertRuleBaseComponentRuntimes(CATIAExpertRuleBaseComponentRuntimes *& oRuleCollection); \
      virtual HRESULT __stdcall Status(CATLONG & oStatus); \
      virtual HRESULT __stdcall get_Comment(CATBSTR & oComment); \
      virtual HRESULT __stdcall put_Comment(const CATBSTR & iComment); \
      virtual HRESULT __stdcall Activate(); \
      virtual HRESULT __stdcall Deactivate(); \
      virtual HRESULT __stdcall Isactivate(CAT_VARIANT_BOOL & oActivated); \
      virtual HRESULT __stdcall AccurateType(CATBSTR & oName); \
      virtual HRESULT __stdcall SetUseOnly(); \
      virtual HRESULT __stdcall IsUseOnly(CAT_VARIANT_BOOL & oUseOnly); \
      virtual HRESULT __stdcall Parse(CATBSTR & oParseErrors); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAExpertRuleSetRuntime(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_RuleSetEdition(CATIAExpertRuleSet *& oRuleSetEdition); \
virtual HRESULT __stdcall get_ExpertRuleBaseComponentRuntimes(CATIAExpertRuleBaseComponentRuntimes *& oRuleCollection); \
virtual HRESULT __stdcall Status(CATLONG & oStatus); \
virtual HRESULT __stdcall get_Comment(CATBSTR & oComment); \
virtual HRESULT __stdcall put_Comment(const CATBSTR & iComment); \
virtual HRESULT __stdcall Activate(); \
virtual HRESULT __stdcall Deactivate(); \
virtual HRESULT __stdcall Isactivate(CAT_VARIANT_BOOL & oActivated); \
virtual HRESULT __stdcall AccurateType(CATBSTR & oName); \
virtual HRESULT __stdcall SetUseOnly(); \
virtual HRESULT __stdcall IsUseOnly(CAT_VARIANT_BOOL & oUseOnly); \
virtual HRESULT __stdcall Parse(CATBSTR & oParseErrors); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAExpertRuleSetRuntime(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_RuleSetEdition(CATIAExpertRuleSet *& oRuleSetEdition) \
{ \
return (ENVTIECALL(CATIAExpertRuleSetRuntime,ENVTIETypeLetter,ENVTIELetter)get_RuleSetEdition(oRuleSetEdition)); \
} \
HRESULT __stdcall  ENVTIEName::get_ExpertRuleBaseComponentRuntimes(CATIAExpertRuleBaseComponentRuntimes *& oRuleCollection) \
{ \
return (ENVTIECALL(CATIAExpertRuleSetRuntime,ENVTIETypeLetter,ENVTIELetter)get_ExpertRuleBaseComponentRuntimes(oRuleCollection)); \
} \
HRESULT __stdcall  ENVTIEName::Status(CATLONG & oStatus) \
{ \
return (ENVTIECALL(CATIAExpertRuleSetRuntime,ENVTIETypeLetter,ENVTIELetter)Status(oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_Comment(CATBSTR & oComment) \
{ \
return (ENVTIECALL(CATIAExpertRuleSetRuntime,ENVTIETypeLetter,ENVTIELetter)get_Comment(oComment)); \
} \
HRESULT __stdcall  ENVTIEName::put_Comment(const CATBSTR & iComment) \
{ \
return (ENVTIECALL(CATIAExpertRuleSetRuntime,ENVTIETypeLetter,ENVTIELetter)put_Comment(iComment)); \
} \
HRESULT __stdcall  ENVTIEName::Activate() \
{ \
return (ENVTIECALL(CATIAExpertRuleSetRuntime,ENVTIETypeLetter,ENVTIELetter)Activate()); \
} \
HRESULT __stdcall  ENVTIEName::Deactivate() \
{ \
return (ENVTIECALL(CATIAExpertRuleSetRuntime,ENVTIETypeLetter,ENVTIELetter)Deactivate()); \
} \
HRESULT __stdcall  ENVTIEName::Isactivate(CAT_VARIANT_BOOL & oActivated) \
{ \
return (ENVTIECALL(CATIAExpertRuleSetRuntime,ENVTIETypeLetter,ENVTIELetter)Isactivate(oActivated)); \
} \
HRESULT __stdcall  ENVTIEName::AccurateType(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAExpertRuleSetRuntime,ENVTIETypeLetter,ENVTIELetter)AccurateType(oName)); \
} \
HRESULT __stdcall  ENVTIEName::SetUseOnly() \
{ \
return (ENVTIECALL(CATIAExpertRuleSetRuntime,ENVTIETypeLetter,ENVTIELetter)SetUseOnly()); \
} \
HRESULT __stdcall  ENVTIEName::IsUseOnly(CAT_VARIANT_BOOL & oUseOnly) \
{ \
return (ENVTIECALL(CATIAExpertRuleSetRuntime,ENVTIETypeLetter,ENVTIELetter)IsUseOnly(oUseOnly)); \
} \
HRESULT __stdcall  ENVTIEName::Parse(CATBSTR & oParseErrors) \
{ \
return (ENVTIECALL(CATIAExpertRuleSetRuntime,ENVTIETypeLetter,ENVTIELetter)Parse(oParseErrors)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAExpertRuleSetRuntime,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAExpertRuleSetRuntime,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAExpertRuleSetRuntime,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAExpertRuleSetRuntime,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAExpertRuleSetRuntime,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAExpertRuleSetRuntime(classe)    TIECATIAExpertRuleSetRuntime##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAExpertRuleSetRuntime(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAExpertRuleSetRuntime, classe) \
 \
 \
CATImplementTIEMethods(CATIAExpertRuleSetRuntime, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAExpertRuleSetRuntime, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAExpertRuleSetRuntime, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAExpertRuleSetRuntime, classe) \
 \
HRESULT __stdcall  TIECATIAExpertRuleSetRuntime##classe::get_RuleSetEdition(CATIAExpertRuleSet *& oRuleSetEdition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oRuleSetEdition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RuleSetEdition(oRuleSetEdition); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oRuleSetEdition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleSetRuntime##classe::get_ExpertRuleBaseComponentRuntimes(CATIAExpertRuleBaseComponentRuntimes *& oRuleCollection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oRuleCollection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExpertRuleBaseComponentRuntimes(oRuleCollection); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oRuleCollection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleSetRuntime##classe::Status(CATLONG & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Status(oStatus); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleSetRuntime##classe::get_Comment(CATBSTR & oComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Comment(oComment); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleSetRuntime##classe::put_Comment(const CATBSTR & iComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Comment(iComment); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleSetRuntime##classe::Activate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Activate(); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleSetRuntime##classe::Deactivate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Deactivate(); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleSetRuntime##classe::Isactivate(CAT_VARIANT_BOOL & oActivated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oActivated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Isactivate(oActivated); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oActivated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleSetRuntime##classe::AccurateType(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AccurateType(oName); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleSetRuntime##classe::SetUseOnly() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUseOnly(); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleSetRuntime##classe::IsUseOnly(CAT_VARIANT_BOOL & oUseOnly) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oUseOnly); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsUseOnly(oUseOnly); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oUseOnly); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleSetRuntime##classe::Parse(CATBSTR & oParseErrors) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oParseErrors); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Parse(oParseErrors); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oParseErrors); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertRuleSetRuntime##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertRuleSetRuntime##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertRuleSetRuntime##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertRuleSetRuntime##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertRuleSetRuntime##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAExpertRuleSetRuntime(classe) \
 \
 \
declare_TIE_CATIAExpertRuleSetRuntime(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAExpertRuleSetRuntime##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAExpertRuleSetRuntime,"CATIAExpertRuleSetRuntime",CATIAExpertRuleSetRuntime::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAExpertRuleSetRuntime(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAExpertRuleSetRuntime, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAExpertRuleSetRuntime##classe(classe::MetaObject(),CATIAExpertRuleSetRuntime::MetaObject(),(void *)CreateTIECATIAExpertRuleSetRuntime##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAExpertRuleSetRuntime(classe) \
 \
 \
declare_TIE_CATIAExpertRuleSetRuntime(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAExpertRuleSetRuntime##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAExpertRuleSetRuntime,"CATIAExpertRuleSetRuntime",CATIAExpertRuleSetRuntime::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAExpertRuleSetRuntime(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAExpertRuleSetRuntime, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAExpertRuleSetRuntime##classe(classe::MetaObject(),CATIAExpertRuleSetRuntime::MetaObject(),(void *)CreateTIECATIAExpertRuleSetRuntime##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAExpertRuleSetRuntime(classe) TIE_CATIAExpertRuleSetRuntime(classe)
#else
#define BOA_CATIAExpertRuleSetRuntime(classe) CATImplementBOA(CATIAExpertRuleSetRuntime, classe)
#endif

#endif
