#ifndef __TIE_CATIAExpertRuleBaseComponentRuntimes
#define __TIE_CATIAExpertRuleBaseComponentRuntimes

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAExpertRuleBaseComponentRuntimes.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAExpertRuleBaseComponentRuntimes */
#define declare_TIE_CATIAExpertRuleBaseComponentRuntimes(classe) \
 \
 \
class TIECATIAExpertRuleBaseComponentRuntimes##classe : public CATIAExpertRuleBaseComponentRuntimes \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAExpertRuleBaseComponentRuntimes, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAExpertRuleBaseComponentRuntime *& oExpertRuleBaseComponentRuntime); \
      virtual HRESULT __stdcall ShallowItem(const CATVariant & iIndex, CATIAExpertRuleBaseComponentRuntime *& oExpertRuleBaseComponentRuntime); \
      virtual HRESULT __stdcall ShallowCount(CATLONG & oNbItems); \
      virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
      virtual HRESULT __stdcall ShallowRemove(const CATVariant & iIndex); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAExpertRuleBaseComponentRuntimes(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAExpertRuleBaseComponentRuntime *& oExpertRuleBaseComponentRuntime); \
virtual HRESULT __stdcall ShallowItem(const CATVariant & iIndex, CATIAExpertRuleBaseComponentRuntime *& oExpertRuleBaseComponentRuntime); \
virtual HRESULT __stdcall ShallowCount(CATLONG & oNbItems); \
virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
virtual HRESULT __stdcall ShallowRemove(const CATVariant & iIndex); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAExpertRuleBaseComponentRuntimes(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAExpertRuleBaseComponentRuntime *& oExpertRuleBaseComponentRuntime) \
{ \
return (ENVTIECALL(CATIAExpertRuleBaseComponentRuntimes,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oExpertRuleBaseComponentRuntime)); \
} \
HRESULT __stdcall  ENVTIEName::ShallowItem(const CATVariant & iIndex, CATIAExpertRuleBaseComponentRuntime *& oExpertRuleBaseComponentRuntime) \
{ \
return (ENVTIECALL(CATIAExpertRuleBaseComponentRuntimes,ENVTIETypeLetter,ENVTIELetter)ShallowItem(iIndex,oExpertRuleBaseComponentRuntime)); \
} \
HRESULT __stdcall  ENVTIEName::ShallowCount(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAExpertRuleBaseComponentRuntimes,ENVTIETypeLetter,ENVTIELetter)ShallowCount(oNbItems)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIAExpertRuleBaseComponentRuntimes,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::ShallowRemove(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIAExpertRuleBaseComponentRuntimes,ENVTIETypeLetter,ENVTIELetter)ShallowRemove(iIndex)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAExpertRuleBaseComponentRuntimes,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAExpertRuleBaseComponentRuntimes,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAExpertRuleBaseComponentRuntimes,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAExpertRuleBaseComponentRuntimes,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAExpertRuleBaseComponentRuntimes,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAExpertRuleBaseComponentRuntimes,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAExpertRuleBaseComponentRuntimes(classe)    TIECATIAExpertRuleBaseComponentRuntimes##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAExpertRuleBaseComponentRuntimes(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAExpertRuleBaseComponentRuntimes, classe) \
 \
 \
CATImplementTIEMethods(CATIAExpertRuleBaseComponentRuntimes, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAExpertRuleBaseComponentRuntimes, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAExpertRuleBaseComponentRuntimes, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAExpertRuleBaseComponentRuntimes, classe) \
 \
HRESULT __stdcall  TIECATIAExpertRuleBaseComponentRuntimes##classe::Item(const CATVariant & iIndex, CATIAExpertRuleBaseComponentRuntime *& oExpertRuleBaseComponentRuntime) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iIndex,&oExpertRuleBaseComponentRuntime); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oExpertRuleBaseComponentRuntime); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iIndex,&oExpertRuleBaseComponentRuntime); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBaseComponentRuntimes##classe::ShallowItem(const CATVariant & iIndex, CATIAExpertRuleBaseComponentRuntime *& oExpertRuleBaseComponentRuntime) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIndex,&oExpertRuleBaseComponentRuntime); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ShallowItem(iIndex,oExpertRuleBaseComponentRuntime); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIndex,&oExpertRuleBaseComponentRuntime); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBaseComponentRuntimes##classe::ShallowCount(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oNbItems); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ShallowCount(oNbItems); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBaseComponentRuntimes##classe::Remove(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertRuleBaseComponentRuntimes##classe::ShallowRemove(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ShallowRemove(iIndex); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertRuleBaseComponentRuntimes##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertRuleBaseComponentRuntimes##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertRuleBaseComponentRuntimes##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertRuleBaseComponentRuntimes##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertRuleBaseComponentRuntimes##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertRuleBaseComponentRuntimes##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAExpertRuleBaseComponentRuntimes(classe) \
 \
 \
declare_TIE_CATIAExpertRuleBaseComponentRuntimes(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAExpertRuleBaseComponentRuntimes##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAExpertRuleBaseComponentRuntimes,"CATIAExpertRuleBaseComponentRuntimes",CATIAExpertRuleBaseComponentRuntimes::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAExpertRuleBaseComponentRuntimes(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAExpertRuleBaseComponentRuntimes, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAExpertRuleBaseComponentRuntimes##classe(classe::MetaObject(),CATIAExpertRuleBaseComponentRuntimes::MetaObject(),(void *)CreateTIECATIAExpertRuleBaseComponentRuntimes##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAExpertRuleBaseComponentRuntimes(classe) \
 \
 \
declare_TIE_CATIAExpertRuleBaseComponentRuntimes(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAExpertRuleBaseComponentRuntimes##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAExpertRuleBaseComponentRuntimes,"CATIAExpertRuleBaseComponentRuntimes",CATIAExpertRuleBaseComponentRuntimes::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAExpertRuleBaseComponentRuntimes(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAExpertRuleBaseComponentRuntimes, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAExpertRuleBaseComponentRuntimes##classe(classe::MetaObject(),CATIAExpertRuleBaseComponentRuntimes::MetaObject(),(void *)CreateTIECATIAExpertRuleBaseComponentRuntimes##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAExpertRuleBaseComponentRuntimes(classe) TIE_CATIAExpertRuleBaseComponentRuntimes(classe)
#else
#define BOA_CATIAExpertRuleBaseComponentRuntimes(classe) CATImplementBOA(CATIAExpertRuleBaseComponentRuntimes, classe)
#endif

#endif
