#ifndef __TIE_CATIAList
#define __TIE_CATIAList

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAList.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAList */
#define declare_TIE_CATIAList(classe) \
 \
 \
class TIECATIAList##classe : public CATIAList \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAList, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIABase *& oFeature); \
      virtual HRESULT __stdcall Replace(const CATVariant & iIndex, CATIABase * iItemValue); \
      virtual HRESULT __stdcall Add(CATIABase * iItemValue); \
      virtual HRESULT __stdcall Reorder(const CATVariant & iIndexCurrent, const CATVariant & iIndexTarget); \
      virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
      virtual HRESULT __stdcall get_FeatureGenerator(CATIAFeatureGenerator *& oGenerator); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAList(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIABase *& oFeature); \
virtual HRESULT __stdcall Replace(const CATVariant & iIndex, CATIABase * iItemValue); \
virtual HRESULT __stdcall Add(CATIABase * iItemValue); \
virtual HRESULT __stdcall Reorder(const CATVariant & iIndexCurrent, const CATVariant & iIndexTarget); \
virtual HRESULT __stdcall Remove(const CATVariant & iIndex); \
virtual HRESULT __stdcall get_FeatureGenerator(CATIAFeatureGenerator *& oGenerator); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAList(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIABase *& oFeature) \
{ \
return (ENVTIECALL(CATIAList,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oFeature)); \
} \
HRESULT __stdcall  ENVTIEName::Replace(const CATVariant & iIndex, CATIABase * iItemValue) \
{ \
return (ENVTIECALL(CATIAList,ENVTIETypeLetter,ENVTIELetter)Replace(iIndex,iItemValue)); \
} \
HRESULT __stdcall  ENVTIEName::Add(CATIABase * iItemValue) \
{ \
return (ENVTIECALL(CATIAList,ENVTIETypeLetter,ENVTIELetter)Add(iItemValue)); \
} \
HRESULT __stdcall  ENVTIEName::Reorder(const CATVariant & iIndexCurrent, const CATVariant & iIndexTarget) \
{ \
return (ENVTIECALL(CATIAList,ENVTIETypeLetter,ENVTIELetter)Reorder(iIndexCurrent,iIndexTarget)); \
} \
HRESULT __stdcall  ENVTIEName::Remove(const CATVariant & iIndex) \
{ \
return (ENVTIECALL(CATIAList,ENVTIETypeLetter,ENVTIELetter)Remove(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::get_FeatureGenerator(CATIAFeatureGenerator *& oGenerator) \
{ \
return (ENVTIECALL(CATIAList,ENVTIETypeLetter,ENVTIELetter)get_FeatureGenerator(oGenerator)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAList,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAList,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAList,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAList,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAList,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAList,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAList(classe)    TIECATIAList##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAList(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAList, classe) \
 \
 \
CATImplementTIEMethods(CATIAList, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAList, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAList, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAList, classe) \
 \
HRESULT __stdcall  TIECATIAList##classe::Item(const CATVariant & iIndex, CATIABase *& oFeature) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iIndex,&oFeature); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oFeature); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iIndex,&oFeature); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAList##classe::Replace(const CATVariant & iIndex, CATIABase * iItemValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIndex,&iItemValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Replace(iIndex,iItemValue); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIndex,&iItemValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAList##classe::Add(CATIABase * iItemValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iItemValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(iItemValue); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iItemValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAList##classe::Reorder(const CATVariant & iIndexCurrent, const CATVariant & iIndexTarget) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iIndexCurrent,&iIndexTarget); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Reorder(iIndexCurrent,iIndexTarget); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iIndexCurrent,&iIndexTarget); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAList##classe::Remove(const CATVariant & iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Remove(iIndex); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAList##classe::get_FeatureGenerator(CATIAFeatureGenerator *& oGenerator) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oGenerator); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FeatureGenerator(oGenerator); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oGenerator); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAList##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAList##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAList##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAList##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAList##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAList##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAList(classe) \
 \
 \
declare_TIE_CATIAList(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAList##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAList,"CATIAList",CATIAList::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAList(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAList, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAList##classe(classe::MetaObject(),CATIAList::MetaObject(),(void *)CreateTIECATIAList##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAList(classe) \
 \
 \
declare_TIE_CATIAList(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAList##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAList,"CATIAList",CATIAList::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAList(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAList, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAList##classe(classe::MetaObject(),CATIAList::MetaObject(),(void *)CreateTIECATIAList##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAList(classe) TIE_CATIAList(classe)
#else
#define BOA_CATIAList(classe) CATImplementBOA(CATIAList, classe)
#endif

#endif
