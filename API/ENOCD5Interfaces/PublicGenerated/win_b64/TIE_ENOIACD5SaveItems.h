#ifndef __TIE_ENOIACD5SaveItems
#define __TIE_ENOIACD5SaveItems

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "ENOIACD5SaveItems.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOIACD5SaveItems */
#define declare_TIE_ENOIACD5SaveItems(classe) \
 \
 \
class TIEENOIACD5SaveItems##classe : public ENOIACD5SaveItems \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOIACD5SaveItems, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, ENOIACD5SaveItem *& SaveItem); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_ENOIACD5SaveItems(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, ENOIACD5SaveItem *& SaveItem); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_ENOIACD5SaveItems(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, ENOIACD5SaveItem *& SaveItem) \
{ \
return (ENVTIECALL(ENOIACD5SaveItems,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,SaveItem)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(ENOIACD5SaveItems,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(ENOIACD5SaveItems,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(ENOIACD5SaveItems,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(ENOIACD5SaveItems,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(ENOIACD5SaveItems,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(ENOIACD5SaveItems,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOIACD5SaveItems(classe)    TIEENOIACD5SaveItems##classe


/* Common methods inside a TIE */
#define common_TIE_ENOIACD5SaveItems(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOIACD5SaveItems, classe) \
 \
 \
CATImplementTIEMethods(ENOIACD5SaveItems, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOIACD5SaveItems, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOIACD5SaveItems, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOIACD5SaveItems, classe) \
 \
HRESULT __stdcall  TIEENOIACD5SaveItems##classe::Item(const CATVariant & iIndex, ENOIACD5SaveItem *& SaveItem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iIndex,&SaveItem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,SaveItem); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iIndex,&SaveItem); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEENOIACD5SaveItems##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEENOIACD5SaveItems##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEENOIACD5SaveItems##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEENOIACD5SaveItems##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEENOIACD5SaveItems##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIEENOIACD5SaveItems##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOIACD5SaveItems(classe) \
 \
 \
declare_TIE_ENOIACD5SaveItems(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOIACD5SaveItems##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOIACD5SaveItems,"ENOIACD5SaveItems",ENOIACD5SaveItems::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOIACD5SaveItems(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOIACD5SaveItems, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOIACD5SaveItems##classe(classe::MetaObject(),ENOIACD5SaveItems::MetaObject(),(void *)CreateTIEENOIACD5SaveItems##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOIACD5SaveItems(classe) \
 \
 \
declare_TIE_ENOIACD5SaveItems(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOIACD5SaveItems##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOIACD5SaveItems,"ENOIACD5SaveItems",ENOIACD5SaveItems::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOIACD5SaveItems(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOIACD5SaveItems, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOIACD5SaveItems##classe(classe::MetaObject(),ENOIACD5SaveItems::MetaObject(),(void *)CreateTIEENOIACD5SaveItems##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOIACD5SaveItems(classe) TIE_ENOIACD5SaveItems(classe)
#else
#define BOA_ENOIACD5SaveItems(classe) CATImplementBOA(ENOIACD5SaveItems, classe)
#endif

#endif
