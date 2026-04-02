#ifndef __TIE_CATIABehavior
#define __TIE_CATIABehavior

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIABehavior.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIABehavior */
#define declare_TIE_CATIABehavior(classe) \
 \
 \
class TIECATIABehavior##classe : public CATIABehavior \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIABehavior, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
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



#define ENVTIEdeclare_CATIABehavior(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
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


#define ENVTIEdefine_CATIABehavior(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Behaviors(CATIABehaviors *& oBehaviors) \
{ \
return (ENVTIECALL(CATIABehavior,ENVTIETypeLetter,ENVTIELetter)get_Behaviors(oBehaviors)); \
} \
HRESULT __stdcall  ENVTIEName::TestInput(const CATBSTR & pName, CATLONG & iExist) \
{ \
return (ENVTIECALL(CATIABehavior,ENVTIETypeLetter,ENVTIELetter)TestInput(pName,iExist)); \
} \
HRESULT __stdcall  ENVTIEName::GetInput(const CATBSTR & pName, CATIABase *& oValue) \
{ \
return (ENVTIECALL(CATIABehavior,ENVTIETypeLetter,ENVTIELetter)GetInput(pName,oValue)); \
} \
HRESULT __stdcall  ENVTIEName::TestOutput(const CATBSTR & pName, CATLONG & iExist) \
{ \
return (ENVTIECALL(CATIABehavior,ENVTIETypeLetter,ENVTIELetter)TestOutput(pName,iExist)); \
} \
HRESULT __stdcall  ENVTIEName::GetOutput(const CATBSTR & pName, CATIABase *& oValue) \
{ \
return (ENVTIECALL(CATIABehavior,ENVTIETypeLetter,ENVTIELetter)GetOutput(pName,oValue)); \
} \
HRESULT __stdcall  ENVTIEName::PutOutput(const CATBSTR & pName, CATIABase * oValue) \
{ \
return (ENVTIECALL(CATIABehavior,ENVTIETypeLetter,ENVTIELetter)PutOutput(pName,oValue)); \
} \
HRESULT __stdcall  ENVTIEName::Activate() \
{ \
return (ENVTIECALL(CATIABehavior,ENVTIETypeLetter,ENVTIELetter)Activate()); \
} \
HRESULT __stdcall  ENVTIEName::Deactivate() \
{ \
return (ENVTIECALL(CATIABehavior,ENVTIETypeLetter,ENVTIELetter)Deactivate()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIABehavior,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIABehavior,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIABehavior,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIABehavior,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIABehavior,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIABehavior(classe)    TIECATIABehavior##classe


/* Common methods inside a TIE */
#define common_TIE_CATIABehavior(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIABehavior, classe) \
 \
 \
CATImplementTIEMethods(CATIABehavior, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIABehavior, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIABehavior, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIABehavior, classe) \
 \
HRESULT __stdcall  TIECATIABehavior##classe::get_Behaviors(CATIABehaviors *& oBehaviors) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oBehaviors); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Behaviors(oBehaviors); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oBehaviors); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehavior##classe::TestInput(const CATBSTR & pName, CATLONG & iExist) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&pName,&iExist); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->TestInput(pName,iExist); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&pName,&iExist); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehavior##classe::GetInput(const CATBSTR & pName, CATIABase *& oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&pName,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInput(pName,oValue); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&pName,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehavior##classe::TestOutput(const CATBSTR & pName, CATLONG & iExist) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&pName,&iExist); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->TestOutput(pName,iExist); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&pName,&iExist); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehavior##classe::GetOutput(const CATBSTR & pName, CATIABase *& oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&pName,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOutput(pName,oValue); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&pName,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehavior##classe::PutOutput(const CATBSTR & pName, CATIABase * oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&pName,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutOutput(pName,oValue); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&pName,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehavior##classe::Activate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Activate(); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehavior##classe::Deactivate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Deactivate(); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIABehavior##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIABehavior##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIABehavior##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIABehavior##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIABehavior##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIABehavior(classe) \
 \
 \
declare_TIE_CATIABehavior(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIABehavior##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIABehavior,"CATIABehavior",CATIABehavior::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIABehavior(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIABehavior, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIABehavior##classe(classe::MetaObject(),CATIABehavior::MetaObject(),(void *)CreateTIECATIABehavior##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIABehavior(classe) \
 \
 \
declare_TIE_CATIABehavior(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIABehavior##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIABehavior,"CATIABehavior",CATIABehavior::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIABehavior(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIABehavior, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIABehavior##classe(classe::MetaObject(),CATIABehavior::MetaObject(),(void *)CreateTIECATIABehavior##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIABehavior(classe) TIE_CATIABehavior(classe)
#else
#define BOA_CATIABehavior(classe) CATImplementBOA(CATIABehavior, classe)
#endif

#endif
