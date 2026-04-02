#ifndef __TIE_CATIAExpertRule
#define __TIE_CATIAExpertRule

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAExpertRule.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAExpertRule */
#define declare_TIE_CATIAExpertRule(classe) \
 \
 \
class TIECATIAExpertRule##classe : public CATIAExpertRule \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAExpertRule, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Variables(CATBSTR & oVariablesBSTR); \
      virtual HRESULT __stdcall put_Variables(const CATBSTR & iVariablesBSTR); \
      virtual HRESULT __stdcall get_Body(CATBSTR & oBodyBSTR); \
      virtual HRESULT __stdcall put_Body(const CATBSTR & iBodyBSTR); \
      virtual HRESULT __stdcall get_Language(CATLONG & oLanguage); \
      virtual HRESULT __stdcall put_Language(CATLONG iLanguage); \
      virtual HRESULT __stdcall get_Priority(double & oPriority); \
      virtual HRESULT __stdcall put_Priority(double iPriority); \
      virtual HRESULT __stdcall get_RuleEdition(CATIAExpertRule *& oRuleEdition); \
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



#define ENVTIEdeclare_CATIAExpertRule(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Variables(CATBSTR & oVariablesBSTR); \
virtual HRESULT __stdcall put_Variables(const CATBSTR & iVariablesBSTR); \
virtual HRESULT __stdcall get_Body(CATBSTR & oBodyBSTR); \
virtual HRESULT __stdcall put_Body(const CATBSTR & iBodyBSTR); \
virtual HRESULT __stdcall get_Language(CATLONG & oLanguage); \
virtual HRESULT __stdcall put_Language(CATLONG iLanguage); \
virtual HRESULT __stdcall get_Priority(double & oPriority); \
virtual HRESULT __stdcall put_Priority(double iPriority); \
virtual HRESULT __stdcall get_RuleEdition(CATIAExpertRule *& oRuleEdition); \
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


#define ENVTIEdefine_CATIAExpertRule(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Variables(CATBSTR & oVariablesBSTR) \
{ \
return (ENVTIECALL(CATIAExpertRule,ENVTIETypeLetter,ENVTIELetter)get_Variables(oVariablesBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::put_Variables(const CATBSTR & iVariablesBSTR) \
{ \
return (ENVTIECALL(CATIAExpertRule,ENVTIETypeLetter,ENVTIELetter)put_Variables(iVariablesBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::get_Body(CATBSTR & oBodyBSTR) \
{ \
return (ENVTIECALL(CATIAExpertRule,ENVTIETypeLetter,ENVTIELetter)get_Body(oBodyBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::put_Body(const CATBSTR & iBodyBSTR) \
{ \
return (ENVTIECALL(CATIAExpertRule,ENVTIETypeLetter,ENVTIELetter)put_Body(iBodyBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::get_Language(CATLONG & oLanguage) \
{ \
return (ENVTIECALL(CATIAExpertRule,ENVTIETypeLetter,ENVTIELetter)get_Language(oLanguage)); \
} \
HRESULT __stdcall  ENVTIEName::put_Language(CATLONG iLanguage) \
{ \
return (ENVTIECALL(CATIAExpertRule,ENVTIETypeLetter,ENVTIELetter)put_Language(iLanguage)); \
} \
HRESULT __stdcall  ENVTIEName::get_Priority(double & oPriority) \
{ \
return (ENVTIECALL(CATIAExpertRule,ENVTIETypeLetter,ENVTIELetter)get_Priority(oPriority)); \
} \
HRESULT __stdcall  ENVTIEName::put_Priority(double iPriority) \
{ \
return (ENVTIECALL(CATIAExpertRule,ENVTIETypeLetter,ENVTIELetter)put_Priority(iPriority)); \
} \
HRESULT __stdcall  ENVTIEName::get_RuleEdition(CATIAExpertRule *& oRuleEdition) \
{ \
return (ENVTIECALL(CATIAExpertRule,ENVTIETypeLetter,ENVTIELetter)get_RuleEdition(oRuleEdition)); \
} \
HRESULT __stdcall  ENVTIEName::get_Comment(CATBSTR & oComment) \
{ \
return (ENVTIECALL(CATIAExpertRule,ENVTIETypeLetter,ENVTIELetter)get_Comment(oComment)); \
} \
HRESULT __stdcall  ENVTIEName::put_Comment(const CATBSTR & iComment) \
{ \
return (ENVTIECALL(CATIAExpertRule,ENVTIETypeLetter,ENVTIELetter)put_Comment(iComment)); \
} \
HRESULT __stdcall  ENVTIEName::Activate() \
{ \
return (ENVTIECALL(CATIAExpertRule,ENVTIETypeLetter,ENVTIELetter)Activate()); \
} \
HRESULT __stdcall  ENVTIEName::Deactivate() \
{ \
return (ENVTIECALL(CATIAExpertRule,ENVTIETypeLetter,ENVTIELetter)Deactivate()); \
} \
HRESULT __stdcall  ENVTIEName::Isactivate(CAT_VARIANT_BOOL & oActivated) \
{ \
return (ENVTIECALL(CATIAExpertRule,ENVTIETypeLetter,ENVTIELetter)Isactivate(oActivated)); \
} \
HRESULT __stdcall  ENVTIEName::AccurateType(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAExpertRule,ENVTIETypeLetter,ENVTIELetter)AccurateType(oName)); \
} \
HRESULT __stdcall  ENVTIEName::SetUseOnly() \
{ \
return (ENVTIECALL(CATIAExpertRule,ENVTIETypeLetter,ENVTIELetter)SetUseOnly()); \
} \
HRESULT __stdcall  ENVTIEName::IsUseOnly(CAT_VARIANT_BOOL & oUseOnly) \
{ \
return (ENVTIECALL(CATIAExpertRule,ENVTIETypeLetter,ENVTIELetter)IsUseOnly(oUseOnly)); \
} \
HRESULT __stdcall  ENVTIEName::Parse(CATBSTR & oParseErrors) \
{ \
return (ENVTIECALL(CATIAExpertRule,ENVTIETypeLetter,ENVTIELetter)Parse(oParseErrors)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAExpertRule,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAExpertRule,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAExpertRule,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAExpertRule,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAExpertRule,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAExpertRule(classe)    TIECATIAExpertRule##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAExpertRule(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAExpertRule, classe) \
 \
 \
CATImplementTIEMethods(CATIAExpertRule, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAExpertRule, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAExpertRule, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAExpertRule, classe) \
 \
HRESULT __stdcall  TIECATIAExpertRule##classe::get_Variables(CATBSTR & oVariablesBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oVariablesBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Variables(oVariablesBSTR); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oVariablesBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRule##classe::put_Variables(const CATBSTR & iVariablesBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iVariablesBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Variables(iVariablesBSTR); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iVariablesBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRule##classe::get_Body(CATBSTR & oBodyBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oBodyBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Body(oBodyBSTR); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oBodyBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRule##classe::put_Body(const CATBSTR & iBodyBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iBodyBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Body(iBodyBSTR); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iBodyBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRule##classe::get_Language(CATLONG & oLanguage) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oLanguage); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Language(oLanguage); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oLanguage); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRule##classe::put_Language(CATLONG iLanguage) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iLanguage); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Language(iLanguage); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iLanguage); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRule##classe::get_Priority(double & oPriority) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oPriority); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Priority(oPriority); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oPriority); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRule##classe::put_Priority(double iPriority) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iPriority); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Priority(iPriority); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iPriority); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRule##classe::get_RuleEdition(CATIAExpertRule *& oRuleEdition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oRuleEdition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RuleEdition(oRuleEdition); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oRuleEdition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRule##classe::get_Comment(CATBSTR & oComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Comment(oComment); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRule##classe::put_Comment(const CATBSTR & iComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Comment(iComment); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRule##classe::Activate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Activate(); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRule##classe::Deactivate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Deactivate(); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRule##classe::Isactivate(CAT_VARIANT_BOOL & oActivated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oActivated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Isactivate(oActivated); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oActivated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRule##classe::AccurateType(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AccurateType(oName); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRule##classe::SetUseOnly() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUseOnly(); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRule##classe::IsUseOnly(CAT_VARIANT_BOOL & oUseOnly) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oUseOnly); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsUseOnly(oUseOnly); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oUseOnly); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRule##classe::Parse(CATBSTR & oParseErrors) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oParseErrors); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Parse(oParseErrors); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oParseErrors); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertRule##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertRule##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertRule##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertRule##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertRule##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAExpertRule(classe) \
 \
 \
declare_TIE_CATIAExpertRule(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAExpertRule##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAExpertRule,"CATIAExpertRule",CATIAExpertRule::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAExpertRule(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAExpertRule, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAExpertRule##classe(classe::MetaObject(),CATIAExpertRule::MetaObject(),(void *)CreateTIECATIAExpertRule##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAExpertRule(classe) \
 \
 \
declare_TIE_CATIAExpertRule(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAExpertRule##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAExpertRule,"CATIAExpertRule",CATIAExpertRule::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAExpertRule(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAExpertRule, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAExpertRule##classe(classe::MetaObject(),CATIAExpertRule::MetaObject(),(void *)CreateTIECATIAExpertRule##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAExpertRule(classe) TIE_CATIAExpertRule(classe)
#else
#define BOA_CATIAExpertRule(classe) CATImplementBOA(CATIAExpertRule, classe)
#endif

#endif
