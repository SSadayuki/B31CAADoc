#ifndef __TIE_CATIAOutputs
#define __TIE_CATIAOutputs

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAOutputs.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAOutputs */
#define declare_TIE_CATIAOutputs(classe) \
 \
 \
class TIECATIAOutputs##classe : public CATIAOutputs \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAOutputs, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Add(CATIAItem * iOutput, CATIAItem *& oProduct); \
      virtual HRESULT __stdcall Remove(CATIAItem * iOutput, CATIAItem *& oProduct); \
      virtual HRESULT __stdcall Count(CATLONG & oNbOutputs); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAItem *& oProduct); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAOutputs(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Add(CATIAItem * iOutput, CATIAItem *& oProduct); \
virtual HRESULT __stdcall Remove(CATIAItem * iOutput, CATIAItem *& oProduct); \
virtual HRESULT __stdcall Count(CATLONG & oNbOutputs); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAItem *& oProduct); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAOutputs(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Add(CATIAItem * iOutput, CATIAItem *& oProduct) \
{ \
return (ENVTIECALL(CATIAOutputs,ENVTIETypeLetter,ENVTIELetter)Add(iOutput,oProduct)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(CATIAItem * iOutput, CATIAItem *& oProduct) \
{ \
return (ENVTIECALL(CATIAOutputs,ENVTIETypeLetter,ENVTIELetter)Remove(iOutput,oProduct)); \
} \
HRESULT __stdcall  ENVTIEName::Count(CATLONG & oNbOutputs) \
{ \
return (ENVTIECALL(CATIAOutputs,ENVTIETypeLetter,ENVTIELetter)Count(oNbOutputs)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAItem *& oProduct) \
{ \
return (ENVTIECALL(CATIAOutputs,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oProduct)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAOutputs,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAOutputs,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAOutputs,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAOutputs,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAOutputs,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAOutputs,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAOutputs(classe)    TIECATIAOutputs##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAOutputs(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAOutputs, classe) \
 \
 \
CATImplementTIEMethods(CATIAOutputs, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAOutputs, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAOutputs, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAOutputs, classe) \
 \
HRESULT __stdcall  TIECATIAOutputs##classe::Add(CATIAItem * iOutput, CATIAItem *& oProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iOutput,&oProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(iOutput,oProduct); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iOutput,&oProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOutputs##classe::Remove(CATIAItem * iOutput, CATIAItem *& oProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iOutput,&oProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iOutput,oProduct); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iOutput,&oProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOutputs##classe::Count(CATLONG & oNbOutputs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oNbOutputs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Count(oNbOutputs); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oNbOutputs); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAOutputs##classe::Item(const CATVariant & iIndex, CATIAItem *& oProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIndex,&oProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oProduct); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIndex,&oProduct); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOutputs##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOutputs##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOutputs##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOutputs##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOutputs##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAOutputs##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAOutputs(classe) \
 \
 \
declare_TIE_CATIAOutputs(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAOutputs##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAOutputs,"CATIAOutputs",CATIAOutputs::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAOutputs(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAOutputs, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAOutputs##classe(classe::MetaObject(),CATIAOutputs::MetaObject(),(void *)CreateTIECATIAOutputs##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAOutputs(classe) \
 \
 \
declare_TIE_CATIAOutputs(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAOutputs##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAOutputs,"CATIAOutputs",CATIAOutputs::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAOutputs(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAOutputs, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAOutputs##classe(classe::MetaObject(),CATIAOutputs::MetaObject(),(void *)CreateTIECATIAOutputs##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAOutputs(classe) TIE_CATIAOutputs(classe)
#else
#define BOA_CATIAOutputs(classe) CATImplementBOA(CATIAOutputs, classe)
#endif

#endif
