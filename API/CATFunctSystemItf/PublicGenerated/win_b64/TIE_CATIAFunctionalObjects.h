#ifndef __TIE_CATIAFunctionalObjects
#define __TIE_CATIAFunctionalObjects

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAFunctionalObjects.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAFunctionalObjects */
#define declare_TIE_CATIAFunctionalObjects(classe) \
 \
 \
class TIECATIAFunctionalObjects##classe : public CATIAFunctionalObjects \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAFunctionalObjects, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Elem(const CATVariant & iIndex, CATIAFunctionalObject *& oObject); \
      virtual HRESULT __stdcall Create(const CATBSTR & iName, CATIAFunctionalObject *& oObject); \
      virtual HRESULT __stdcall CreateProxy(const CATBSTR & iName, CATIAFunctionalDescription * iDesc, CATIAFunctionalObjectProxy *& oObject); \
      virtual HRESULT __stdcall Delete(CATIAFunctionalObject * iObject); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAFunctionalObjects(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Elem(const CATVariant & iIndex, CATIAFunctionalObject *& oObject); \
virtual HRESULT __stdcall Create(const CATBSTR & iName, CATIAFunctionalObject *& oObject); \
virtual HRESULT __stdcall CreateProxy(const CATBSTR & iName, CATIAFunctionalDescription * iDesc, CATIAFunctionalObjectProxy *& oObject); \
virtual HRESULT __stdcall Delete(CATIAFunctionalObject * iObject); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAFunctionalObjects(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Elem(const CATVariant & iIndex, CATIAFunctionalObject *& oObject) \
{ \
return (ENVTIECALL(CATIAFunctionalObjects,ENVTIETypeLetter,ENVTIELetter)Elem(iIndex,oObject)); \
} \
HRESULT __stdcall  ENVTIEName::Create(const CATBSTR & iName, CATIAFunctionalObject *& oObject) \
{ \
return (ENVTIECALL(CATIAFunctionalObjects,ENVTIETypeLetter,ENVTIELetter)Create(iName,oObject)); \
} \
HRESULT __stdcall  ENVTIEName::CreateProxy(const CATBSTR & iName, CATIAFunctionalDescription * iDesc, CATIAFunctionalObjectProxy *& oObject) \
{ \
return (ENVTIECALL(CATIAFunctionalObjects,ENVTIETypeLetter,ENVTIELetter)CreateProxy(iName,iDesc,oObject)); \
} \
HRESULT __stdcall  ENVTIEName::Delete(CATIAFunctionalObject * iObject) \
{ \
return (ENVTIECALL(CATIAFunctionalObjects,ENVTIETypeLetter,ENVTIELetter)Delete(iObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAFunctionalObjects,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAFunctionalObjects,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAFunctionalObjects,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAFunctionalObjects,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAFunctionalObjects,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAFunctionalObjects,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAFunctionalObjects(classe)    TIECATIAFunctionalObjects##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAFunctionalObjects(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAFunctionalObjects, classe) \
 \
 \
CATImplementTIEMethods(CATIAFunctionalObjects, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAFunctionalObjects, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAFunctionalObjects, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAFunctionalObjects, classe) \
 \
HRESULT __stdcall  TIECATIAFunctionalObjects##classe::Elem(const CATVariant & iIndex, CATIAFunctionalObject *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iIndex,&oObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Elem(iIndex,oObject); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iIndex,&oObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalObjects##classe::Create(const CATBSTR & iName, CATIAFunctionalObject *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iName,&oObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Create(iName,oObject); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iName,&oObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalObjects##classe::CreateProxy(const CATBSTR & iName, CATIAFunctionalDescription * iDesc, CATIAFunctionalObjectProxy *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iName,&iDesc,&oObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateProxy(iName,iDesc,oObject); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iName,&iDesc,&oObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAFunctionalObjects##classe::Delete(CATIAFunctionalObject * iObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Delete(iObject); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalObjects##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalObjects##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalObjects##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalObjects##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalObjects##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAFunctionalObjects##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAFunctionalObjects(classe) \
 \
 \
declare_TIE_CATIAFunctionalObjects(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctionalObjects##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctionalObjects,"CATIAFunctionalObjects",CATIAFunctionalObjects::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctionalObjects(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAFunctionalObjects, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctionalObjects##classe(classe::MetaObject(),CATIAFunctionalObjects::MetaObject(),(void *)CreateTIECATIAFunctionalObjects##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAFunctionalObjects(classe) \
 \
 \
declare_TIE_CATIAFunctionalObjects(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAFunctionalObjects##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAFunctionalObjects,"CATIAFunctionalObjects",CATIAFunctionalObjects::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAFunctionalObjects(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAFunctionalObjects, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAFunctionalObjects##classe(classe::MetaObject(),CATIAFunctionalObjects::MetaObject(),(void *)CreateTIECATIAFunctionalObjects##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAFunctionalObjects(classe) TIE_CATIAFunctionalObjects(classe)
#else
#define BOA_CATIAFunctionalObjects(classe) CATImplementBOA(CATIAFunctionalObjects, classe)
#endif

#endif
