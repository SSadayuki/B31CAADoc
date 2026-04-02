#ifndef __TIE_CATIAGroups
#define __TIE_CATIAGroups

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAGroups.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAGroups */
#define declare_TIE_CATIAGroups(classe) \
 \
 \
class TIECATIAGroups##classe : public CATIAGroups \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAGroups, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Add(CATIAGroup *& oGroup); \
      virtual HRESULT __stdcall AddFromSel(CATIAGroup *& oGroup); \
      virtual HRESULT __stdcall AllLeaves(CATIAGroup *& oGroup); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAGroup *& oGroup); \
      virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAGroups(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Add(CATIAGroup *& oGroup); \
virtual HRESULT __stdcall AddFromSel(CATIAGroup *& oGroup); \
virtual HRESULT __stdcall AllLeaves(CATIAGroup *& oGroup); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAGroup *& oGroup); \
virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAGroups(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Add(CATIAGroup *& oGroup) \
{ \
return (ENVTIECALL(CATIAGroups,ENVTIETypeLetter,ENVTIELetter)Add(oGroup)); \
} \
HRESULT __stdcall  ENVTIEName::AddFromSel(CATIAGroup *& oGroup) \
{ \
return (ENVTIECALL(CATIAGroups,ENVTIETypeLetter,ENVTIELetter)AddFromSel(oGroup)); \
} \
HRESULT __stdcall  ENVTIEName::AllLeaves(CATIAGroup *& oGroup) \
{ \
return (ENVTIECALL(CATIAGroups,ENVTIETypeLetter,ENVTIELetter)AllLeaves(oGroup)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAGroup *& oGroup) \
{ \
return (ENVTIECALL(CATIAGroups,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oGroup)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIAGroups,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAGroups,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAGroups,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAGroups,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAGroups,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAGroups,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAGroups,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAGroups(classe)    TIECATIAGroups##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAGroups(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAGroups, classe) \
 \
 \
CATImplementTIEMethods(CATIAGroups, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAGroups, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAGroups, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAGroups, classe) \
 \
HRESULT __stdcall  TIECATIAGroups##classe::Add(CATIAGroup *& oGroup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oGroup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(oGroup); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oGroup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGroups##classe::AddFromSel(CATIAGroup *& oGroup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oGroup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddFromSel(oGroup); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oGroup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGroups##classe::AllLeaves(CATIAGroup *& oGroup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oGroup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AllLeaves(oGroup); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oGroup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGroups##classe::Item(const CATVariant & iIndex, CATIAGroup *& oGroup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIndex,&oGroup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oGroup); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIndex,&oGroup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAGroups##classe::Remove(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAGroups##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAGroups##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAGroups##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAGroups##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAGroups##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAGroups##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAGroups(classe) \
 \
 \
declare_TIE_CATIAGroups(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAGroups##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAGroups,"CATIAGroups",CATIAGroups::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAGroups(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAGroups, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAGroups##classe(classe::MetaObject(),CATIAGroups::MetaObject(),(void *)CreateTIECATIAGroups##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAGroups(classe) \
 \
 \
declare_TIE_CATIAGroups(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAGroups##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAGroups,"CATIAGroups",CATIAGroups::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAGroups(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAGroups, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAGroups##classe(classe::MetaObject(),CATIAGroups::MetaObject(),(void *)CreateTIECATIAGroups##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAGroups(classe) TIE_CATIAGroups(classe)
#else
#define BOA_CATIAGroups(classe) CATImplementBOA(CATIAGroups, classe)
#endif

#endif
