#ifndef __TIE_CATIAShuttles
#define __TIE_CATIAShuttles

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAShuttles.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAShuttles */
#define declare_TIE_CATIAShuttles(classe) \
 \
 \
class TIECATIAShuttles##classe : public CATIAShuttles \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAShuttles, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Add(CATIAShuttle *& oNewShuttle); \
      virtual HRESULT __stdcall AddFromSel(CATIAShuttle *& oNewShuttle); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAShuttle *& oShuttle); \
      virtual HRESULT __stdcall Remove(CATIAShuttle * iShuttle); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAShuttles(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Add(CATIAShuttle *& oNewShuttle); \
virtual HRESULT __stdcall AddFromSel(CATIAShuttle *& oNewShuttle); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAShuttle *& oShuttle); \
virtual HRESULT __stdcall Remove(CATIAShuttle * iShuttle); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAShuttles(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Add(CATIAShuttle *& oNewShuttle) \
{ \
return (ENVTIECALL(CATIAShuttles,ENVTIETypeLetter,ENVTIELetter)Add(oNewShuttle)); \
} \
HRESULT __stdcall  ENVTIEName::AddFromSel(CATIAShuttle *& oNewShuttle) \
{ \
return (ENVTIECALL(CATIAShuttles,ENVTIETypeLetter,ENVTIELetter)AddFromSel(oNewShuttle)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAShuttle *& oShuttle) \
{ \
return (ENVTIECALL(CATIAShuttles,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oShuttle)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(CATIAShuttle * iShuttle) \
{ \
return (ENVTIECALL(CATIAShuttles,ENVTIETypeLetter,ENVTIELetter)Remove(iShuttle)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAShuttles,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAShuttles,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAShuttles,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAShuttles,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAShuttles,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAShuttles,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAShuttles(classe)    TIECATIAShuttles##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAShuttles(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAShuttles, classe) \
 \
 \
CATImplementTIEMethods(CATIAShuttles, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAShuttles, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAShuttles, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAShuttles, classe) \
 \
HRESULT __stdcall  TIECATIAShuttles##classe::Add(CATIAShuttle *& oNewShuttle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oNewShuttle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(oNewShuttle); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oNewShuttle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShuttles##classe::AddFromSel(CATIAShuttle *& oNewShuttle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oNewShuttle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddFromSel(oNewShuttle); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oNewShuttle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShuttles##classe::Item(const CATVariant & iIndex, CATIAShuttle *& oShuttle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iIndex,&oShuttle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oShuttle); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iIndex,&oShuttle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShuttles##classe::Remove(CATIAShuttle * iShuttle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iShuttle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iShuttle); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iShuttle); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShuttles##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShuttles##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShuttles##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShuttles##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShuttles##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShuttles##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAShuttles(classe) \
 \
 \
declare_TIE_CATIAShuttles(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAShuttles##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAShuttles,"CATIAShuttles",CATIAShuttles::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAShuttles(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAShuttles, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAShuttles##classe(classe::MetaObject(),CATIAShuttles::MetaObject(),(void *)CreateTIECATIAShuttles##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAShuttles(classe) \
 \
 \
declare_TIE_CATIAShuttles(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAShuttles##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAShuttles,"CATIAShuttles",CATIAShuttles::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAShuttles(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAShuttles, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAShuttles##classe(classe::MetaObject(),CATIAShuttles::MetaObject(),(void *)CreateTIECATIAShuttles##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAShuttles(classe) TIE_CATIAShuttles(classe)
#else
#define BOA_CATIAShuttles(classe) CATImplementBOA(CATIAShuttles, classe)
#endif

#endif
