#ifndef __TIE_CATIAExpertRuleRuntime
#define __TIE_CATIAExpertRuleRuntime

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAExpertRuleRuntime.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAExpertRuleRuntime */
#define declare_TIE_CATIAExpertRuleRuntime(classe) \
 \
 \
class TIECATIAExpertRuleRuntime##classe : public CATIAExpertRuleRuntime \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAExpertRuleRuntime, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
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



#define ENVTIEdeclare_CATIAExpertRuleRuntime(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
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


#define ENVTIEdefine_CATIAExpertRuleRuntime(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Priority(double & oPriority) \
{ \
return (ENVTIECALL(CATIAExpertRuleRuntime,ENVTIETypeLetter,ENVTIELetter)get_Priority(oPriority)); \
} \
HRESULT __stdcall  ENVTIEName::put_Priority(double iPriority) \
{ \
return (ENVTIECALL(CATIAExpertRuleRuntime,ENVTIETypeLetter,ENVTIELetter)put_Priority(iPriority)); \
} \
HRESULT __stdcall  ENVTIEName::get_RuleEdition(CATIAExpertRule *& oRuleEdition) \
{ \
return (ENVTIECALL(CATIAExpertRuleRuntime,ENVTIETypeLetter,ENVTIELetter)get_RuleEdition(oRuleEdition)); \
} \
HRESULT __stdcall  ENVTIEName::get_Comment(CATBSTR & oComment) \
{ \
return (ENVTIECALL(CATIAExpertRuleRuntime,ENVTIETypeLetter,ENVTIELetter)get_Comment(oComment)); \
} \
HRESULT __stdcall  ENVTIEName::put_Comment(const CATBSTR & iComment) \
{ \
return (ENVTIECALL(CATIAExpertRuleRuntime,ENVTIETypeLetter,ENVTIELetter)put_Comment(iComment)); \
} \
HRESULT __stdcall  ENVTIEName::Activate() \
{ \
return (ENVTIECALL(CATIAExpertRuleRuntime,ENVTIETypeLetter,ENVTIELetter)Activate()); \
} \
HRESULT __stdcall  ENVTIEName::Deactivate() \
{ \
return (ENVTIECALL(CATIAExpertRuleRuntime,ENVTIETypeLetter,ENVTIELetter)Deactivate()); \
} \
HRESULT __stdcall  ENVTIEName::Isactivate(CAT_VARIANT_BOOL & oActivated) \
{ \
return (ENVTIECALL(CATIAExpertRuleRuntime,ENVTIETypeLetter,ENVTIELetter)Isactivate(oActivated)); \
} \
HRESULT __stdcall  ENVTIEName::AccurateType(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAExpertRuleRuntime,ENVTIETypeLetter,ENVTIELetter)AccurateType(oName)); \
} \
HRESULT __stdcall  ENVTIEName::SetUseOnly() \
{ \
return (ENVTIECALL(CATIAExpertRuleRuntime,ENVTIETypeLetter,ENVTIELetter)SetUseOnly()); \
} \
HRESULT __stdcall  ENVTIEName::IsUseOnly(CAT_VARIANT_BOOL & oUseOnly) \
{ \
return (ENVTIECALL(CATIAExpertRuleRuntime,ENVTIETypeLetter,ENVTIELetter)IsUseOnly(oUseOnly)); \
} \
HRESULT __stdcall  ENVTIEName::Parse(CATBSTR & oParseErrors) \
{ \
return (ENVTIECALL(CATIAExpertRuleRuntime,ENVTIETypeLetter,ENVTIELetter)Parse(oParseErrors)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAExpertRuleRuntime,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAExpertRuleRuntime,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAExpertRuleRuntime,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAExpertRuleRuntime,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAExpertRuleRuntime,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAExpertRuleRuntime(classe)    TIECATIAExpertRuleRuntime##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAExpertRuleRuntime(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAExpertRuleRuntime, classe) \
 \
 \
CATImplementTIEMethods(CATIAExpertRuleRuntime, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAExpertRuleRuntime, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAExpertRuleRuntime, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAExpertRuleRuntime, classe) \
 \
HRESULT __stdcall  TIECATIAExpertRuleRuntime##classe::get_Priority(double & oPriority) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oPriority); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Priority(oPriority); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oPriority); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleRuntime##classe::put_Priority(double iPriority) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iPriority); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Priority(iPriority); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iPriority); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleRuntime##classe::get_RuleEdition(CATIAExpertRule *& oRuleEdition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oRuleEdition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RuleEdition(oRuleEdition); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oRuleEdition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleRuntime##classe::get_Comment(CATBSTR & oComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Comment(oComment); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleRuntime##classe::put_Comment(const CATBSTR & iComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Comment(iComment); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleRuntime##classe::Activate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Activate(); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleRuntime##classe::Deactivate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Deactivate(); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleRuntime##classe::Isactivate(CAT_VARIANT_BOOL & oActivated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oActivated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Isactivate(oActivated); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oActivated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleRuntime##classe::AccurateType(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AccurateType(oName); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleRuntime##classe::SetUseOnly() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUseOnly(); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleRuntime##classe::IsUseOnly(CAT_VARIANT_BOOL & oUseOnly) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oUseOnly); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsUseOnly(oUseOnly); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oUseOnly); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleRuntime##classe::Parse(CATBSTR & oParseErrors) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oParseErrors); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Parse(oParseErrors); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oParseErrors); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertRuleRuntime##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertRuleRuntime##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertRuleRuntime##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertRuleRuntime##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertRuleRuntime##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAExpertRuleRuntime(classe) \
 \
 \
declare_TIE_CATIAExpertRuleRuntime(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAExpertRuleRuntime##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAExpertRuleRuntime,"CATIAExpertRuleRuntime",CATIAExpertRuleRuntime::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAExpertRuleRuntime(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAExpertRuleRuntime, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAExpertRuleRuntime##classe(classe::MetaObject(),CATIAExpertRuleRuntime::MetaObject(),(void *)CreateTIECATIAExpertRuleRuntime##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAExpertRuleRuntime(classe) \
 \
 \
declare_TIE_CATIAExpertRuleRuntime(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAExpertRuleRuntime##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAExpertRuleRuntime,"CATIAExpertRuleRuntime",CATIAExpertRuleRuntime::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAExpertRuleRuntime(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAExpertRuleRuntime, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAExpertRuleRuntime##classe(classe::MetaObject(),CATIAExpertRuleRuntime::MetaObject(),(void *)CreateTIECATIAExpertRuleRuntime##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAExpertRuleRuntime(classe) TIE_CATIAExpertRuleRuntime(classe)
#else
#define BOA_CATIAExpertRuleRuntime(classe) CATImplementBOA(CATIAExpertRuleRuntime, classe)
#endif

#endif
