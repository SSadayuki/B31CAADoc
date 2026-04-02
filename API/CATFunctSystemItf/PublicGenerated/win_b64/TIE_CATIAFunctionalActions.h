#ifndef __TIE_CATIAFunctionalActions
#define __TIE_CATIAFunctionalActions

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFunctionalActions.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFunctionalActions */
#define declare_TIE_CATIAFunctionalActions(classe) \
 \
 \
class TIECATIAFunctionalActions##classe : public CATIAFunctionalActions \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFunctionalActions, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Elem(const CATVariant & iIndex, CATIAFunctionalAction *& oAction); \
      virtual HRESULT __stdcall Create(const CATBSTR & iName, CATIAFunctionalPosition * iFrom, CATIAFunctionalPosition * iTo, CATIAFunctionalAction *& oAction); \
      virtual HRESULT __stdcall Delete(CATIAFunctionalAction * iAction); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAFunctionalActions(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Elem(const CATVariant & iIndex, CATIAFunctionalAction *& oAction); \
virtual HRESULT __stdcall Create(const CATBSTR & iName, CATIAFunctionalPosition * iFrom, CATIAFunctionalPosition * iTo, CATIAFunctionalAction *& oAction); \
virtual HRESULT __stdcall Delete(CATIAFunctionalAction * iAction); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAFunctionalActions(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Elem(const CATVariant & iIndex, CATIAFunctionalAction *& oAction) \
{ \
return (ENVTIECALL(CATIAFunctionalActions,ENVTIETypeLetter,ENVTIELetter)Elem(iIndex,oAction)); \
} \
HRESULT __stdcall  ENVTIEName::Create(const CATBSTR & iName, CATIAFunctionalPosition * iFrom, CATIAFunctionalPosition * iTo, CATIAFunctionalAction *& oAction) \
{ \
return (ENVTIECALL(CATIAFunctionalActions,ENVTIETypeLetter,ENVTIELetter)Create(iName,iFrom,iTo,oAction)); \
} \
HRESULT __stdcall  ENVTIEName::Delete(CATIAFunctionalAction * iAction) \
{ \
return (ENVTIECALL(CATIAFunctionalActions,ENVTIETypeLetter,ENVTIELetter)Delete(iAction)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFunctionalActions,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFunctionalActions,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAFunctionalActions,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAFunctionalActions,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAFunctionalActions,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAFunctionalActions,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFunctionalActions(classe)    TIECATIAFunctionalActions##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFunctionalActions(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFunctionalActions, classe) \
 \
 \
CATImplementTIEMethods(CATIAFunctionalActions, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFunctionalActions, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFunctionalActions, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFunctionalActions, classe) \
 \
HRESULT __stdcall  TIECATIAFunctionalActions##classe::Elem(const CATVariant & iIndex, CATIAFunctionalAction *& oAction) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iIndex,&oAction); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Elem(iIndex,oAction); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iIndex,&oAction); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalActions##classe::Create(const CATBSTR & iName, CATIAFunctionalPosition * iFrom, CATIAFunctionalPosition * iTo, CATIAFunctionalAction *& oAction) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iName,&iFrom,&iTo,&oAction); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Create(iName,iFrom,iTo,oAction); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iName,&iFrom,&iTo,&oAction); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalActions##classe::Delete(CATIAFunctionalAction * iAction) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iAction); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Delete(iAction); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iAction); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalActions##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalActions##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalActions##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalActions##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalActions##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalActions##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFunctionalActions(classe) \
 \
 \
declare_TIE_CATIAFunctionalActions(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctionalActions##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctionalActions,"CATIAFunctionalActions",CATIAFunctionalActions::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctionalActions(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFunctionalActions, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctionalActions##classe(classe::MetaObject(),CATIAFunctionalActions::MetaObject(),(void *)CreateTIECATIAFunctionalActions##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFunctionalActions(classe) \
 \
 \
declare_TIE_CATIAFunctionalActions(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctionalActions##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctionalActions,"CATIAFunctionalActions",CATIAFunctionalActions::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctionalActions(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFunctionalActions, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctionalActions##classe(classe::MetaObject(),CATIAFunctionalActions::MetaObject(),(void *)CreateTIECATIAFunctionalActions##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFunctionalActions(classe) TIE_CATIAFunctionalActions(classe)
#else
#define BOA_CATIAFunctionalActions(classe) CATImplementBOA(CATIAFunctionalActions, classe)
#endif

#endif
