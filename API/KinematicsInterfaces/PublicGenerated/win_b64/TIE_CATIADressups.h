#ifndef __TIE_CATIADressups
#define __TIE_CATIADressups

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADressups.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADressups */
#define declare_TIE_CATIADressups(classe) \
 \
 \
class TIECATIADressups##classe : public CATIADressups \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADressups, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Add(CATIAMechanism * iMechanism, CATIAProduct * iContext, CATIADressup *& oDressup); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIADressup *& oDressup); \
      virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
      virtual HRESULT __stdcall ListPossibleMechanisms(CATSafeArrayVariant *& oMechanismList); \
      virtual HRESULT __stdcall ListMechanismsContext(CATSafeArrayVariant *& oContextList); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIADressups(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Add(CATIAMechanism * iMechanism, CATIAProduct * iContext, CATIADressup *& oDressup); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIADressup *& oDressup); \
virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
virtual HRESULT __stdcall ListPossibleMechanisms(CATSafeArrayVariant *& oMechanismList); \
virtual HRESULT __stdcall ListMechanismsContext(CATSafeArrayVariant *& oContextList); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIADressups(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Add(CATIAMechanism * iMechanism, CATIAProduct * iContext, CATIADressup *& oDressup) \
{ \
return (ENVTIECALL(CATIADressups,ENVTIETypeLetter,ENVTIELetter)Add(iMechanism,iContext,oDressup)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIADressup *& oDressup) \
{ \
return (ENVTIECALL(CATIADressups,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oDressup)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIADressups,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::ListPossibleMechanisms(CATSafeArrayVariant *& oMechanismList) \
{ \
return (ENVTIECALL(CATIADressups,ENVTIETypeLetter,ENVTIELetter)ListPossibleMechanisms(oMechanismList)); \
} \
HRESULT __stdcall  ENVTIEName::ListMechanismsContext(CATSafeArrayVariant *& oContextList) \
{ \
return (ENVTIECALL(CATIADressups,ENVTIETypeLetter,ENVTIELetter)ListMechanismsContext(oContextList)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADressups,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADressups,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIADressups,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIADressups,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIADressups,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIADressups,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADressups(classe)    TIECATIADressups##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADressups(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADressups, classe) \
 \
 \
CATImplementTIEMethods(CATIADressups, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADressups, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADressups, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADressups, classe) \
 \
HRESULT __stdcall  TIECATIADressups##classe::Add(CATIAMechanism * iMechanism, CATIAProduct * iContext, CATIADressup *& oDressup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iMechanism,&iContext,&oDressup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(iMechanism,iContext,oDressup); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iMechanism,&iContext,&oDressup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADressups##classe::Item(const CATVariant & iIndex, CATIADressup *& oDressup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIndex,&oDressup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oDressup); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIndex,&oDressup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADressups##classe::Remove(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADressups##classe::ListPossibleMechanisms(CATSafeArrayVariant *& oMechanismList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oMechanismList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListPossibleMechanisms(oMechanismList); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oMechanismList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADressups##classe::ListMechanismsContext(CATSafeArrayVariant *& oContextList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oContextList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListMechanismsContext(oContextList); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oContextList); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADressups##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADressups##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADressups##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADressups##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADressups##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADressups##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADressups(classe) \
 \
 \
declare_TIE_CATIADressups(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADressups##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADressups,"CATIADressups",CATIADressups::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADressups(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADressups, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADressups##classe(classe::MetaObject(),CATIADressups::MetaObject(),(void *)CreateTIECATIADressups##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADressups(classe) \
 \
 \
declare_TIE_CATIADressups(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADressups##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADressups,"CATIADressups",CATIADressups::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADressups(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADressups, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADressups##classe(classe::MetaObject(),CATIADressups::MetaObject(),(void *)CreateTIECATIADressups##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADressups(classe) TIE_CATIADressups(classe)
#else
#define BOA_CATIADressups(classe) CATImplementBOA(CATIADressups, classe)
#endif

#endif
