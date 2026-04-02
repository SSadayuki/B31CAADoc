#ifndef __TIE_CATIADefeaturingFilters
#define __TIE_CATIADefeaturingFilters

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADefeaturingFilters.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADefeaturingFilters */
#define declare_TIE_CATIADefeaturingFilters(classe) \
 \
 \
class TIECATIADefeaturingFilters##classe : public CATIADefeaturingFilters \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADefeaturingFilters, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Item(const CATVariant & iFilterId, CATIADefeaturingFilter *& oFilter); \
      virtual HRESULT __stdcall Add(const CATBSTR & iFilterTypeToAdd, CATLONG & oAddedFilterIndex); \
      virtual HRESULT __stdcall Remove(const CATVariant & iFilterId); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIADefeaturingFilters(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Item(const CATVariant & iFilterId, CATIADefeaturingFilter *& oFilter); \
virtual HRESULT __stdcall Add(const CATBSTR & iFilterTypeToAdd, CATLONG & oAddedFilterIndex); \
virtual HRESULT __stdcall Remove(const CATVariant & iFilterId); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIADefeaturingFilters(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iFilterId, CATIADefeaturingFilter *& oFilter) \
{ \
return (ENVTIECALL(CATIADefeaturingFilters,ENVTIETypeLetter,ENVTIELetter)Item(iFilterId,oFilter)); \
} \
HRESULT __stdcall  ENVTIEName::Add(const CATBSTR & iFilterTypeToAdd, CATLONG & oAddedFilterIndex) \
{ \
return (ENVTIECALL(CATIADefeaturingFilters,ENVTIETypeLetter,ENVTIELetter)Add(iFilterTypeToAdd,oAddedFilterIndex)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATVariant & iFilterId) \
{ \
return (ENVTIECALL(CATIADefeaturingFilters,ENVTIETypeLetter,ENVTIELetter)Remove(iFilterId)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADefeaturingFilters,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADefeaturingFilters,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIADefeaturingFilters,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIADefeaturingFilters,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIADefeaturingFilters,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIADefeaturingFilters,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADefeaturingFilters(classe)    TIECATIADefeaturingFilters##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADefeaturingFilters(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADefeaturingFilters, classe) \
 \
 \
CATImplementTIEMethods(CATIADefeaturingFilters, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADefeaturingFilters, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADefeaturingFilters, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADefeaturingFilters, classe) \
 \
HRESULT __stdcall  TIECATIADefeaturingFilters##classe::Item(const CATVariant & iFilterId, CATIADefeaturingFilter *& oFilter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iFilterId,&oFilter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iFilterId,oFilter); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iFilterId,&oFilter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADefeaturingFilters##classe::Add(const CATBSTR & iFilterTypeToAdd, CATLONG & oAddedFilterIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iFilterTypeToAdd,&oAddedFilterIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(iFilterTypeToAdd,oAddedFilterIndex); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iFilterTypeToAdd,&oAddedFilterIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADefeaturingFilters##classe::Remove(const CATVariant & iFilterId) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iFilterId); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iFilterId); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iFilterId); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADefeaturingFilters##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADefeaturingFilters##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADefeaturingFilters##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADefeaturingFilters##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADefeaturingFilters##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADefeaturingFilters##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADefeaturingFilters(classe) \
 \
 \
declare_TIE_CATIADefeaturingFilters(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADefeaturingFilters##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADefeaturingFilters,"CATIADefeaturingFilters",CATIADefeaturingFilters::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADefeaturingFilters(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADefeaturingFilters, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADefeaturingFilters##classe(classe::MetaObject(),CATIADefeaturingFilters::MetaObject(),(void *)CreateTIECATIADefeaturingFilters##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADefeaturingFilters(classe) \
 \
 \
declare_TIE_CATIADefeaturingFilters(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADefeaturingFilters##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADefeaturingFilters,"CATIADefeaturingFilters",CATIADefeaturingFilters::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADefeaturingFilters(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADefeaturingFilters, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADefeaturingFilters##classe(classe::MetaObject(),CATIADefeaturingFilters::MetaObject(),(void *)CreateTIECATIADefeaturingFilters##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADefeaturingFilters(classe) TIE_CATIADefeaturingFilters(classe)
#else
#define BOA_CATIADefeaturingFilters(classe) CATImplementBOA(CATIADefeaturingFilters, classe)
#endif

#endif
