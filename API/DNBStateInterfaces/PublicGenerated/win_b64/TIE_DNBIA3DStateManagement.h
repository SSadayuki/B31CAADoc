#ifndef __TIE_DNBIA3DStateManagement
#define __TIE_DNBIA3DStateManagement

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "DNBIA3DStateManagement.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface DNBIA3DStateManagement */
#define declare_TIE_DNBIA3DStateManagement(classe) \
 \
 \
class TIEDNBIA3DStateManagement##classe : public DNBIA3DStateManagement \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(DNBIA3DStateManagement, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Create3DState(const CATBSTR & iStateName, CATBaseDispatch * iObject, const CATSafeArrayVariant & iListDefn, DNBIA3DState *& oState); \
      virtual HRESULT __stdcall Delete3DState(DNBIA3DState * iState); \
      virtual HRESULT __stdcall ListAll3DStates(DNBIA3DStates *& oListStates); \
      virtual HRESULT __stdcall GetNumberOf3DStates(CATLONG & numberOfStates); \
      virtual HRESULT __stdcall ListAll3DStatesOnObject(CATBaseDispatch * iObj, CATSafeArrayVariant & oListStates); \
      virtual HRESULT __stdcall GetNumberOf3DStatesOnObject(CATBaseDispatch * iObj, CATLONG & numberOfStates); \
      virtual HRESULT __stdcall Get3DState(CATBaseDispatch * iObject, const CATBSTR & iStateName, DNBIA3DState *& oState); \
      virtual HRESULT __stdcall List3DStatesInActivity(CATIAActivity * iProcess, const CATBSTR & iConditionType, CATSafeArrayVariant & oStates); \
      virtual HRESULT __stdcall GetNumberof3DStatesInActivity(CATIAActivity * iProcess, const CATBSTR & iConditionType, CATLONG & oNumStates); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_DNBIA3DStateManagement(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Create3DState(const CATBSTR & iStateName, CATBaseDispatch * iObject, const CATSafeArrayVariant & iListDefn, DNBIA3DState *& oState); \
virtual HRESULT __stdcall Delete3DState(DNBIA3DState * iState); \
virtual HRESULT __stdcall ListAll3DStates(DNBIA3DStates *& oListStates); \
virtual HRESULT __stdcall GetNumberOf3DStates(CATLONG & numberOfStates); \
virtual HRESULT __stdcall ListAll3DStatesOnObject(CATBaseDispatch * iObj, CATSafeArrayVariant & oListStates); \
virtual HRESULT __stdcall GetNumberOf3DStatesOnObject(CATBaseDispatch * iObj, CATLONG & numberOfStates); \
virtual HRESULT __stdcall Get3DState(CATBaseDispatch * iObject, const CATBSTR & iStateName, DNBIA3DState *& oState); \
virtual HRESULT __stdcall List3DStatesInActivity(CATIAActivity * iProcess, const CATBSTR & iConditionType, CATSafeArrayVariant & oStates); \
virtual HRESULT __stdcall GetNumberof3DStatesInActivity(CATIAActivity * iProcess, const CATBSTR & iConditionType, CATLONG & oNumStates); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_DNBIA3DStateManagement(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Create3DState(const CATBSTR & iStateName, CATBaseDispatch * iObject, const CATSafeArrayVariant & iListDefn, DNBIA3DState *& oState) \
{ \
return (ENVTIECALL(DNBIA3DStateManagement,ENVTIETypeLetter,ENVTIELetter)Create3DState(iStateName,iObject,iListDefn,oState)); \
} \
HRESULT __stdcall  ENVTIEName::Delete3DState(DNBIA3DState * iState) \
{ \
return (ENVTIECALL(DNBIA3DStateManagement,ENVTIETypeLetter,ENVTIELetter)Delete3DState(iState)); \
} \
HRESULT __stdcall  ENVTIEName::ListAll3DStates(DNBIA3DStates *& oListStates) \
{ \
return (ENVTIECALL(DNBIA3DStateManagement,ENVTIETypeLetter,ENVTIELetter)ListAll3DStates(oListStates)); \
} \
HRESULT __stdcall  ENVTIEName::GetNumberOf3DStates(CATLONG & numberOfStates) \
{ \
return (ENVTIECALL(DNBIA3DStateManagement,ENVTIETypeLetter,ENVTIELetter)GetNumberOf3DStates(numberOfStates)); \
} \
HRESULT __stdcall  ENVTIEName::ListAll3DStatesOnObject(CATBaseDispatch * iObj, CATSafeArrayVariant & oListStates) \
{ \
return (ENVTIECALL(DNBIA3DStateManagement,ENVTIETypeLetter,ENVTIELetter)ListAll3DStatesOnObject(iObj,oListStates)); \
} \
HRESULT __stdcall  ENVTIEName::GetNumberOf3DStatesOnObject(CATBaseDispatch * iObj, CATLONG & numberOfStates) \
{ \
return (ENVTIECALL(DNBIA3DStateManagement,ENVTIETypeLetter,ENVTIELetter)GetNumberOf3DStatesOnObject(iObj,numberOfStates)); \
} \
HRESULT __stdcall  ENVTIEName::Get3DState(CATBaseDispatch * iObject, const CATBSTR & iStateName, DNBIA3DState *& oState) \
{ \
return (ENVTIECALL(DNBIA3DStateManagement,ENVTIETypeLetter,ENVTIELetter)Get3DState(iObject,iStateName,oState)); \
} \
HRESULT __stdcall  ENVTIEName::List3DStatesInActivity(CATIAActivity * iProcess, const CATBSTR & iConditionType, CATSafeArrayVariant & oStates) \
{ \
return (ENVTIECALL(DNBIA3DStateManagement,ENVTIETypeLetter,ENVTIELetter)List3DStatesInActivity(iProcess,iConditionType,oStates)); \
} \
HRESULT __stdcall  ENVTIEName::GetNumberof3DStatesInActivity(CATIAActivity * iProcess, const CATBSTR & iConditionType, CATLONG & oNumStates) \
{ \
return (ENVTIECALL(DNBIA3DStateManagement,ENVTIETypeLetter,ENVTIELetter)GetNumberof3DStatesInActivity(iProcess,iConditionType,oNumStates)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(DNBIA3DStateManagement,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(DNBIA3DStateManagement,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(DNBIA3DStateManagement,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(DNBIA3DStateManagement,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(DNBIA3DStateManagement,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_DNBIA3DStateManagement(classe)    TIEDNBIA3DStateManagement##classe


/* Common methods inside a TIE */
#define common_TIE_DNBIA3DStateManagement(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(DNBIA3DStateManagement, classe) \
 \
 \
CATImplementTIEMethods(DNBIA3DStateManagement, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(DNBIA3DStateManagement, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(DNBIA3DStateManagement, classe) \
CATImplementCATBaseUnknownMethodsForTIE(DNBIA3DStateManagement, classe) \
 \
HRESULT __stdcall  TIEDNBIA3DStateManagement##classe::Create3DState(const CATBSTR & iStateName, CATBaseDispatch * iObject, const CATSafeArrayVariant & iListDefn, DNBIA3DState *& oState) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iStateName,&iObject,&iListDefn,&oState); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Create3DState(iStateName,iObject,iListDefn,oState); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iStateName,&iObject,&iListDefn,&oState); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DStateManagement##classe::Delete3DState(DNBIA3DState * iState) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iState); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Delete3DState(iState); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iState); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DStateManagement##classe::ListAll3DStates(DNBIA3DStates *& oListStates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oListStates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListAll3DStates(oListStates); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oListStates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DStateManagement##classe::GetNumberOf3DStates(CATLONG & numberOfStates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&numberOfStates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumberOf3DStates(numberOfStates); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&numberOfStates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DStateManagement##classe::ListAll3DStatesOnObject(CATBaseDispatch * iObj, CATSafeArrayVariant & oListStates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iObj,&oListStates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListAll3DStatesOnObject(iObj,oListStates); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iObj,&oListStates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DStateManagement##classe::GetNumberOf3DStatesOnObject(CATBaseDispatch * iObj, CATLONG & numberOfStates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iObj,&numberOfStates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumberOf3DStatesOnObject(iObj,numberOfStates); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iObj,&numberOfStates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DStateManagement##classe::Get3DState(CATBaseDispatch * iObject, const CATBSTR & iStateName, DNBIA3DState *& oState) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iObject,&iStateName,&oState); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Get3DState(iObject,iStateName,oState); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iObject,&iStateName,&oState); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DStateManagement##classe::List3DStatesInActivity(CATIAActivity * iProcess, const CATBSTR & iConditionType, CATSafeArrayVariant & oStates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iProcess,&iConditionType,&oStates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->List3DStatesInActivity(iProcess,iConditionType,oStates); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iProcess,&iConditionType,&oStates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DStateManagement##classe::GetNumberof3DStatesInActivity(CATIAActivity * iProcess, const CATBSTR & iConditionType, CATLONG & oNumStates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iProcess,&iConditionType,&oNumStates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumberof3DStatesInActivity(iProcess,iConditionType,oNumStates); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iProcess,&iConditionType,&oNumStates); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIA3DStateManagement##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIA3DStateManagement##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIA3DStateManagement##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIA3DStateManagement##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIA3DStateManagement##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_DNBIA3DStateManagement(classe) \
 \
 \
declare_TIE_DNBIA3DStateManagement(classe) \
 \
 \
CATMetaClass * __stdcall TIEDNBIA3DStateManagement##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_DNBIA3DStateManagement,"DNBIA3DStateManagement",DNBIA3DStateManagement::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_DNBIA3DStateManagement(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(DNBIA3DStateManagement, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicDNBIA3DStateManagement##classe(classe::MetaObject(),DNBIA3DStateManagement::MetaObject(),(void *)CreateTIEDNBIA3DStateManagement##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_DNBIA3DStateManagement(classe) \
 \
 \
declare_TIE_DNBIA3DStateManagement(classe) \
 \
 \
CATMetaClass * __stdcall TIEDNBIA3DStateManagement##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_DNBIA3DStateManagement,"DNBIA3DStateManagement",DNBIA3DStateManagement::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_DNBIA3DStateManagement(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(DNBIA3DStateManagement, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicDNBIA3DStateManagement##classe(classe::MetaObject(),DNBIA3DStateManagement::MetaObject(),(void *)CreateTIEDNBIA3DStateManagement##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_DNBIA3DStateManagement(classe) TIE_DNBIA3DStateManagement(classe)
#else
#define BOA_DNBIA3DStateManagement(classe) CATImplementBOA(DNBIA3DStateManagement, classe)
#endif

#endif
