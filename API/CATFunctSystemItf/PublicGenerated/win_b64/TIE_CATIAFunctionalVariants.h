#ifndef __TIE_CATIAFunctionalVariants
#define __TIE_CATIAFunctionalVariants

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFunctionalVariants.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFunctionalVariants */
#define declare_TIE_CATIAFunctionalVariants(classe) \
 \
 \
class TIECATIAFunctionalVariants##classe : public CATIAFunctionalVariants \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFunctionalVariants, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Elem(const CATVariant & iIndex, CATIAFunctionalVariant *& oVariant); \
      virtual HRESULT __stdcall Create(const CATBSTR & iName, CATIAFunctionalVariant *& oVariant); \
      virtual HRESULT __stdcall Delete(CATIAFunctionalVariant * iVariant); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAFunctionalVariants(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Elem(const CATVariant & iIndex, CATIAFunctionalVariant *& oVariant); \
virtual HRESULT __stdcall Create(const CATBSTR & iName, CATIAFunctionalVariant *& oVariant); \
virtual HRESULT __stdcall Delete(CATIAFunctionalVariant * iVariant); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAFunctionalVariants(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Elem(const CATVariant & iIndex, CATIAFunctionalVariant *& oVariant) \
{ \
return (ENVTIECALL(CATIAFunctionalVariants,ENVTIETypeLetter,ENVTIELetter)Elem(iIndex,oVariant)); \
} \
HRESULT __stdcall  ENVTIEName::Create(const CATBSTR & iName, CATIAFunctionalVariant *& oVariant) \
{ \
return (ENVTIECALL(CATIAFunctionalVariants,ENVTIETypeLetter,ENVTIELetter)Create(iName,oVariant)); \
} \
HRESULT __stdcall  ENVTIEName::Delete(CATIAFunctionalVariant * iVariant) \
{ \
return (ENVTIECALL(CATIAFunctionalVariants,ENVTIETypeLetter,ENVTIELetter)Delete(iVariant)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFunctionalVariants,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFunctionalVariants,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAFunctionalVariants,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAFunctionalVariants,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAFunctionalVariants,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAFunctionalVariants,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFunctionalVariants(classe)    TIECATIAFunctionalVariants##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFunctionalVariants(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFunctionalVariants, classe) \
 \
 \
CATImplementTIEMethods(CATIAFunctionalVariants, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFunctionalVariants, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFunctionalVariants, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFunctionalVariants, classe) \
 \
HRESULT __stdcall  TIECATIAFunctionalVariants##classe::Elem(const CATVariant & iIndex, CATIAFunctionalVariant *& oVariant) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iIndex,&oVariant); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Elem(iIndex,oVariant); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iIndex,&oVariant); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalVariants##classe::Create(const CATBSTR & iName, CATIAFunctionalVariant *& oVariant) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iName,&oVariant); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Create(iName,oVariant); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iName,&oVariant); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalVariants##classe::Delete(CATIAFunctionalVariant * iVariant) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iVariant); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Delete(iVariant); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iVariant); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalVariants##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalVariants##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalVariants##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalVariants##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalVariants##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalVariants##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFunctionalVariants(classe) \
 \
 \
declare_TIE_CATIAFunctionalVariants(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctionalVariants##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctionalVariants,"CATIAFunctionalVariants",CATIAFunctionalVariants::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctionalVariants(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFunctionalVariants, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctionalVariants##classe(classe::MetaObject(),CATIAFunctionalVariants::MetaObject(),(void *)CreateTIECATIAFunctionalVariants##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFunctionalVariants(classe) \
 \
 \
declare_TIE_CATIAFunctionalVariants(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctionalVariants##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctionalVariants,"CATIAFunctionalVariants",CATIAFunctionalVariants::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctionalVariants(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFunctionalVariants, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctionalVariants##classe(classe::MetaObject(),CATIAFunctionalVariants::MetaObject(),(void *)CreateTIECATIAFunctionalVariants##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFunctionalVariants(classe) TIE_CATIAFunctionalVariants(classe)
#else
#define BOA_CATIAFunctionalVariants(classe) CATImplementBOA(CATIAFunctionalVariants, classe)
#endif

#endif
