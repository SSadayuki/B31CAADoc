#ifndef __TIE_DNBIA3DState
#define __TIE_DNBIA3DState

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "DNBIA3DState.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface DNBIA3DState */
#define declare_TIE_DNBIA3DState(classe) \
 \
 \
class TIEDNBIA3DState##classe : public DNBIA3DState \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(DNBIA3DState, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_StateName(CATBSTR & oStateName); \
      virtual HRESULT __stdcall put_StateName(const CATBSTR & iStateName); \
      virtual HRESULT __stdcall Add3DState(DNBIA3DState * iState); \
      virtual HRESULT __stdcall Add3DPosition(DNBIA3DStatePosition * iPosition); \
      virtual HRESULT __stdcall Remove3DState(DNBIA3DState * iState); \
      virtual HRESULT __stdcall Remove3DPosition(DNBIA3DStatePosition * iPosition); \
      virtual HRESULT __stdcall Assign3DState(CATIAActivity * iProcess, const CATBSTR & iCondition); \
      virtual HRESULT __stdcall Unassign3DState(CATIAActivity * iProcess); \
      virtual HRESULT __stdcall GetChildren(const CATBSTR & iType, CATSafeArrayVariant & oChildrenArray); \
      virtual HRESULT __stdcall GetNumberOfChildren(const CATBSTR & iType, CATLONG & oNumberOfChild); \
      virtual HRESULT __stdcall GetRelatedObject(CATBaseDispatch *& oRelatedObj); \
      virtual HRESULT __stdcall GetRelatedActivities(const CATBSTR & iConditionType, CATSafeArrayVariant & oActivitiesArray); \
      virtual HRESULT __stdcall GetNumberofRelatedActivities(const CATBSTR & iConditionType, CATLONG & oNumActivities); \
      virtual HRESULT __stdcall GetConditionName(CATIAActivity * iRelatedActivity, CATBSTR & oConditonName); \
      virtual HRESULT __stdcall GetParent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_DNBIA3DState(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_StateName(CATBSTR & oStateName); \
virtual HRESULT __stdcall put_StateName(const CATBSTR & iStateName); \
virtual HRESULT __stdcall Add3DState(DNBIA3DState * iState); \
virtual HRESULT __stdcall Add3DPosition(DNBIA3DStatePosition * iPosition); \
virtual HRESULT __stdcall Remove3DState(DNBIA3DState * iState); \
virtual HRESULT __stdcall Remove3DPosition(DNBIA3DStatePosition * iPosition); \
virtual HRESULT __stdcall Assign3DState(CATIAActivity * iProcess, const CATBSTR & iCondition); \
virtual HRESULT __stdcall Unassign3DState(CATIAActivity * iProcess); \
virtual HRESULT __stdcall GetChildren(const CATBSTR & iType, CATSafeArrayVariant & oChildrenArray); \
virtual HRESULT __stdcall GetNumberOfChildren(const CATBSTR & iType, CATLONG & oNumberOfChild); \
virtual HRESULT __stdcall GetRelatedObject(CATBaseDispatch *& oRelatedObj); \
virtual HRESULT __stdcall GetRelatedActivities(const CATBSTR & iConditionType, CATSafeArrayVariant & oActivitiesArray); \
virtual HRESULT __stdcall GetNumberofRelatedActivities(const CATBSTR & iConditionType, CATLONG & oNumActivities); \
virtual HRESULT __stdcall GetConditionName(CATIAActivity * iRelatedActivity, CATBSTR & oConditonName); \
virtual HRESULT __stdcall GetParent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_DNBIA3DState(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_StateName(CATBSTR & oStateName) \
{ \
return (ENVTIECALL(DNBIA3DState,ENVTIETypeLetter,ENVTIELetter)get_StateName(oStateName)); \
} \
HRESULT __stdcall  ENVTIEName::put_StateName(const CATBSTR & iStateName) \
{ \
return (ENVTIECALL(DNBIA3DState,ENVTIETypeLetter,ENVTIELetter)put_StateName(iStateName)); \
} \
HRESULT __stdcall  ENVTIEName::Add3DState(DNBIA3DState * iState) \
{ \
return (ENVTIECALL(DNBIA3DState,ENVTIETypeLetter,ENVTIELetter)Add3DState(iState)); \
} \
HRESULT __stdcall  ENVTIEName::Add3DPosition(DNBIA3DStatePosition * iPosition) \
{ \
return (ENVTIECALL(DNBIA3DState,ENVTIETypeLetter,ENVTIELetter)Add3DPosition(iPosition)); \
} \
HRESULT __stdcall  ENVTIEName::Remove3DState(DNBIA3DState * iState) \
{ \
return (ENVTIECALL(DNBIA3DState,ENVTIETypeLetter,ENVTIELetter)Remove3DState(iState)); \
} \
HRESULT __stdcall  ENVTIEName::Remove3DPosition(DNBIA3DStatePosition * iPosition) \
{ \
return (ENVTIECALL(DNBIA3DState,ENVTIETypeLetter,ENVTIELetter)Remove3DPosition(iPosition)); \
} \
HRESULT __stdcall  ENVTIEName::Assign3DState(CATIAActivity * iProcess, const CATBSTR & iCondition) \
{ \
return (ENVTIECALL(DNBIA3DState,ENVTIETypeLetter,ENVTIELetter)Assign3DState(iProcess,iCondition)); \
} \
HRESULT __stdcall  ENVTIEName::Unassign3DState(CATIAActivity * iProcess) \
{ \
return (ENVTIECALL(DNBIA3DState,ENVTIETypeLetter,ENVTIELetter)Unassign3DState(iProcess)); \
} \
HRESULT __stdcall  ENVTIEName::GetChildren(const CATBSTR & iType, CATSafeArrayVariant & oChildrenArray) \
{ \
return (ENVTIECALL(DNBIA3DState,ENVTIETypeLetter,ENVTIELetter)GetChildren(iType,oChildrenArray)); \
} \
HRESULT __stdcall  ENVTIEName::GetNumberOfChildren(const CATBSTR & iType, CATLONG & oNumberOfChild) \
{ \
return (ENVTIECALL(DNBIA3DState,ENVTIETypeLetter,ENVTIELetter)GetNumberOfChildren(iType,oNumberOfChild)); \
} \
HRESULT __stdcall  ENVTIEName::GetRelatedObject(CATBaseDispatch *& oRelatedObj) \
{ \
return (ENVTIECALL(DNBIA3DState,ENVTIETypeLetter,ENVTIELetter)GetRelatedObject(oRelatedObj)); \
} \
HRESULT __stdcall  ENVTIEName::GetRelatedActivities(const CATBSTR & iConditionType, CATSafeArrayVariant & oActivitiesArray) \
{ \
return (ENVTIECALL(DNBIA3DState,ENVTIETypeLetter,ENVTIELetter)GetRelatedActivities(iConditionType,oActivitiesArray)); \
} \
HRESULT __stdcall  ENVTIEName::GetNumberofRelatedActivities(const CATBSTR & iConditionType, CATLONG & oNumActivities) \
{ \
return (ENVTIECALL(DNBIA3DState,ENVTIETypeLetter,ENVTIELetter)GetNumberofRelatedActivities(iConditionType,oNumActivities)); \
} \
HRESULT __stdcall  ENVTIEName::GetConditionName(CATIAActivity * iRelatedActivity, CATBSTR & oConditonName) \
{ \
return (ENVTIECALL(DNBIA3DState,ENVTIETypeLetter,ENVTIELetter)GetConditionName(iRelatedActivity,oConditonName)); \
} \
HRESULT __stdcall  ENVTIEName::GetParent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(DNBIA3DState,ENVTIETypeLetter,ENVTIELetter)GetParent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(DNBIA3DState,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(DNBIA3DState,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(DNBIA3DState,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(DNBIA3DState,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(DNBIA3DState,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_DNBIA3DState(classe)    TIEDNBIA3DState##classe


/* Common methods inside a TIE */
#define common_TIE_DNBIA3DState(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(DNBIA3DState, classe) \
 \
 \
CATImplementTIEMethods(DNBIA3DState, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(DNBIA3DState, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(DNBIA3DState, classe) \
CATImplementCATBaseUnknownMethodsForTIE(DNBIA3DState, classe) \
 \
HRESULT __stdcall  TIEDNBIA3DState##classe::get_StateName(CATBSTR & oStateName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oStateName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StateName(oStateName); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oStateName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DState##classe::put_StateName(const CATBSTR & iStateName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iStateName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_StateName(iStateName); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iStateName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DState##classe::Add3DState(DNBIA3DState * iState) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iState); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add3DState(iState); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iState); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DState##classe::Add3DPosition(DNBIA3DStatePosition * iPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add3DPosition(iPosition); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DState##classe::Remove3DState(DNBIA3DState * iState) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iState); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove3DState(iState); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iState); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DState##classe::Remove3DPosition(DNBIA3DStatePosition * iPosition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iPosition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove3DPosition(iPosition); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iPosition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DState##classe::Assign3DState(CATIAActivity * iProcess, const CATBSTR & iCondition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iProcess,&iCondition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Assign3DState(iProcess,iCondition); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iProcess,&iCondition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DState##classe::Unassign3DState(CATIAActivity * iProcess) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iProcess); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Unassign3DState(iProcess); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iProcess); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DState##classe::GetChildren(const CATBSTR & iType, CATSafeArrayVariant & oChildrenArray) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iType,&oChildrenArray); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetChildren(iType,oChildrenArray); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iType,&oChildrenArray); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DState##classe::GetNumberOfChildren(const CATBSTR & iType, CATLONG & oNumberOfChild) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iType,&oNumberOfChild); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumberOfChildren(iType,oNumberOfChild); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iType,&oNumberOfChild); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DState##classe::GetRelatedObject(CATBaseDispatch *& oRelatedObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oRelatedObj); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRelatedObject(oRelatedObj); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oRelatedObj); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DState##classe::GetRelatedActivities(const CATBSTR & iConditionType, CATSafeArrayVariant & oActivitiesArray) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iConditionType,&oActivitiesArray); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRelatedActivities(iConditionType,oActivitiesArray); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iConditionType,&oActivitiesArray); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DState##classe::GetNumberofRelatedActivities(const CATBSTR & iConditionType, CATLONG & oNumActivities) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iConditionType,&oNumActivities); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumberofRelatedActivities(iConditionType,oNumActivities); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iConditionType,&oNumActivities); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DState##classe::GetConditionName(CATIAActivity * iRelatedActivity, CATBSTR & oConditonName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iRelatedActivity,&oConditonName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConditionName(iRelatedActivity,oConditonName); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iRelatedActivity,&oConditonName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIEDNBIA3DState##classe::GetParent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oParent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetParent(oParent); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIA3DState##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIA3DState##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIA3DState##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIA3DState##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEDNBIA3DState##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_DNBIA3DState(classe) \
 \
 \
declare_TIE_DNBIA3DState(classe) \
 \
 \
CATMetaClass * __stdcall TIEDNBIA3DState##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_DNBIA3DState,"DNBIA3DState",DNBIA3DState::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_DNBIA3DState(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(DNBIA3DState, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicDNBIA3DState##classe(classe::MetaObject(),DNBIA3DState::MetaObject(),(void *)CreateTIEDNBIA3DState##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_DNBIA3DState(classe) \
 \
 \
declare_TIE_DNBIA3DState(classe) \
 \
 \
CATMetaClass * __stdcall TIEDNBIA3DState##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_DNBIA3DState,"DNBIA3DState",DNBIA3DState::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_DNBIA3DState(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(DNBIA3DState, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicDNBIA3DState##classe(classe::MetaObject(),DNBIA3DState::MetaObject(),(void *)CreateTIEDNBIA3DState##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_DNBIA3DState(classe) TIE_DNBIA3DState(classe)
#else
#define BOA_DNBIA3DState(classe) CATImplementBOA(DNBIA3DState, classe)
#endif

#endif
