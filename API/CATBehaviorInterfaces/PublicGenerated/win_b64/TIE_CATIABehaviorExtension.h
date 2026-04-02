#ifndef __TIE_CATIABehaviorExtension
#define __TIE_CATIABehaviorExtension

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIABehaviorExtension.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIABehaviorExtension */
#define declare_TIE_CATIABehaviorExtension(classe) \
 \
 \
class TIECATIABehaviorExtension##classe : public CATIABehaviorExtension \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIABehaviorExtension, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ExtensionClass(CATBSTR & ClassName); \
      virtual HRESULT __stdcall SelectBehavior(const CATBSTR & BehaviorName, CATIABehavior *& oBehavior); \
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



#define ENVTIEdeclare_CATIABehaviorExtension(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ExtensionClass(CATBSTR & ClassName); \
virtual HRESULT __stdcall SelectBehavior(const CATBSTR & BehaviorName, CATIABehavior *& oBehavior); \
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


#define ENVTIEdefine_CATIABehaviorExtension(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ExtensionClass(CATBSTR & ClassName) \
{ \
return (ENVTIECALL(CATIABehaviorExtension,ENVTIETypeLetter,ENVTIELetter)get_ExtensionClass(ClassName)); \
} \
HRESULT __stdcall  ENVTIEName::SelectBehavior(const CATBSTR & BehaviorName, CATIABehavior *& oBehavior) \
{ \
return (ENVTIECALL(CATIABehaviorExtension,ENVTIETypeLetter,ENVTIELetter)SelectBehavior(BehaviorName,oBehavior)); \
} \
HRESULT __stdcall  ENVTIEName::get_Behaviors(CATIABehaviors *& oBehaviors) \
{ \
return (ENVTIECALL(CATIABehaviorExtension,ENVTIETypeLetter,ENVTIELetter)get_Behaviors(oBehaviors)); \
} \
HRESULT __stdcall  ENVTIEName::TestInput(const CATBSTR & pName, CATLONG & iExist) \
{ \
return (ENVTIECALL(CATIABehaviorExtension,ENVTIETypeLetter,ENVTIELetter)TestInput(pName,iExist)); \
} \
HRESULT __stdcall  ENVTIEName::GetInput(const CATBSTR & pName, CATIABase *& oValue) \
{ \
return (ENVTIECALL(CATIABehaviorExtension,ENVTIETypeLetter,ENVTIELetter)GetInput(pName,oValue)); \
} \
HRESULT __stdcall  ENVTIEName::TestOutput(const CATBSTR & pName, CATLONG & iExist) \
{ \
return (ENVTIECALL(CATIABehaviorExtension,ENVTIETypeLetter,ENVTIELetter)TestOutput(pName,iExist)); \
} \
HRESULT __stdcall  ENVTIEName::GetOutput(const CATBSTR & pName, CATIABase *& oValue) \
{ \
return (ENVTIECALL(CATIABehaviorExtension,ENVTIETypeLetter,ENVTIELetter)GetOutput(pName,oValue)); \
} \
HRESULT __stdcall  ENVTIEName::PutOutput(const CATBSTR & pName, CATIABase * oValue) \
{ \
return (ENVTIECALL(CATIABehaviorExtension,ENVTIETypeLetter,ENVTIELetter)PutOutput(pName,oValue)); \
} \
HRESULT __stdcall  ENVTIEName::Activate() \
{ \
return (ENVTIECALL(CATIABehaviorExtension,ENVTIETypeLetter,ENVTIELetter)Activate()); \
} \
HRESULT __stdcall  ENVTIEName::Deactivate() \
{ \
return (ENVTIECALL(CATIABehaviorExtension,ENVTIETypeLetter,ENVTIELetter)Deactivate()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIABehaviorExtension,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIABehaviorExtension,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIABehaviorExtension,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIABehaviorExtension,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIABehaviorExtension,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIABehaviorExtension(classe)    TIECATIABehaviorExtension##classe


/* Common methods inside a TIE */
#define common_TIE_CATIABehaviorExtension(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIABehaviorExtension, classe) \
 \
 \
CATImplementTIEMethods(CATIABehaviorExtension, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIABehaviorExtension, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIABehaviorExtension, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIABehaviorExtension, classe) \
 \
HRESULT __stdcall  TIECATIABehaviorExtension##classe::get_ExtensionClass(CATBSTR & ClassName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&ClassName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExtensionClass(ClassName); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&ClassName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorExtension##classe::SelectBehavior(const CATBSTR & BehaviorName, CATIABehavior *& oBehavior) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&BehaviorName,&oBehavior); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SelectBehavior(BehaviorName,oBehavior); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&BehaviorName,&oBehavior); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorExtension##classe::get_Behaviors(CATIABehaviors *& oBehaviors) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oBehaviors); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Behaviors(oBehaviors); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oBehaviors); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorExtension##classe::TestInput(const CATBSTR & pName, CATLONG & iExist) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&pName,&iExist); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->TestInput(pName,iExist); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&pName,&iExist); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorExtension##classe::GetInput(const CATBSTR & pName, CATIABase *& oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&pName,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInput(pName,oValue); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&pName,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorExtension##classe::TestOutput(const CATBSTR & pName, CATLONG & iExist) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&pName,&iExist); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->TestOutput(pName,iExist); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&pName,&iExist); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorExtension##classe::GetOutput(const CATBSTR & pName, CATIABase *& oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&pName,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOutput(pName,oValue); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&pName,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorExtension##classe::PutOutput(const CATBSTR & pName, CATIABase * oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&pName,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutOutput(pName,oValue); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&pName,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorExtension##classe::Activate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Activate(); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorExtension##classe::Deactivate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Deactivate(); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIABehaviorExtension##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIABehaviorExtension##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIABehaviorExtension##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIABehaviorExtension##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIABehaviorExtension##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIABehaviorExtension(classe) \
 \
 \
declare_TIE_CATIABehaviorExtension(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIABehaviorExtension##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIABehaviorExtension,"CATIABehaviorExtension",CATIABehaviorExtension::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIABehaviorExtension(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIABehaviorExtension, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIABehaviorExtension##classe(classe::MetaObject(),CATIABehaviorExtension::MetaObject(),(void *)CreateTIECATIABehaviorExtension##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIABehaviorExtension(classe) \
 \
 \
declare_TIE_CATIABehaviorExtension(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIABehaviorExtension##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIABehaviorExtension,"CATIABehaviorExtension",CATIABehaviorExtension::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIABehaviorExtension(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIABehaviorExtension, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIABehaviorExtension##classe(classe::MetaObject(),CATIABehaviorExtension::MetaObject(),(void *)CreateTIECATIABehaviorExtension##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIABehaviorExtension(classe) TIE_CATIABehaviorExtension(classe)
#else
#define BOA_CATIABehaviorExtension(classe) CATImplementBOA(CATIABehaviorExtension, classe)
#endif

#endif
