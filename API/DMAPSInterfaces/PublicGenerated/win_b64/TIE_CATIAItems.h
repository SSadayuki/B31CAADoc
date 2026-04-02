#ifndef __TIE_CATIAItems
#define __TIE_CATIAItems

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAItems.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAItems */
#define declare_TIE_CATIAItems(classe) \
 \
 \
class TIECATIAItems##classe : public CATIAItems \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAItems, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAItem *& oItem); \
      virtual HRESULT __stdcall Add(CATIAItem * iProduct, CATIAItem *& oProduct); \
      virtual HRESULT __stdcall AddByAssignmentType(CATIAItem * iItem, ItemAssignmentType iAssignmentType, CATIAItem *& oItem); \
      virtual HRESULT __stdcall RemoveByAssignmentType(CATIAItem * iItem, ItemAssignmentType iAssignmentType, CATIAItem *& oItem); \
      virtual HRESULT __stdcall ItemByAssignmentType(const CATVariant & iIndex, ItemAssignmentType iAssignmentType, CATIAItem *& oItem); \
      virtual HRESULT __stdcall CountByAssignmentType(ItemAssignmentType iAssignmentType, CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIAItems(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIAItem *& oItem); \
virtual HRESULT __stdcall Add(CATIAItem * iProduct, CATIAItem *& oProduct); \
virtual HRESULT __stdcall AddByAssignmentType(CATIAItem * iItem, ItemAssignmentType iAssignmentType, CATIAItem *& oItem); \
virtual HRESULT __stdcall RemoveByAssignmentType(CATIAItem * iItem, ItemAssignmentType iAssignmentType, CATIAItem *& oItem); \
virtual HRESULT __stdcall ItemByAssignmentType(const CATVariant & iIndex, ItemAssignmentType iAssignmentType, CATIAItem *& oItem); \
virtual HRESULT __stdcall CountByAssignmentType(ItemAssignmentType iAssignmentType, CATLONG & oNbItems); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIAItems(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIAItem *& oItem) \
{ \
return (ENVTIECALL(CATIAItems,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oItem)); \
} \
HRESULT __stdcall  ENVTIEName::Add(CATIAItem * iProduct, CATIAItem *& oProduct) \
{ \
return (ENVTIECALL(CATIAItems,ENVTIETypeLetter,ENVTIELetter)Add(iProduct,oProduct)); \
} \
HRESULT __stdcall  ENVTIEName::AddByAssignmentType(CATIAItem * iItem, ItemAssignmentType iAssignmentType, CATIAItem *& oItem) \
{ \
return (ENVTIECALL(CATIAItems,ENVTIETypeLetter,ENVTIELetter)AddByAssignmentType(iItem,iAssignmentType,oItem)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveByAssignmentType(CATIAItem * iItem, ItemAssignmentType iAssignmentType, CATIAItem *& oItem) \
{ \
return (ENVTIECALL(CATIAItems,ENVTIETypeLetter,ENVTIELetter)RemoveByAssignmentType(iItem,iAssignmentType,oItem)); \
} \
HRESULT __stdcall  ENVTIEName::ItemByAssignmentType(const CATVariant & iIndex, ItemAssignmentType iAssignmentType, CATIAItem *& oItem) \
{ \
return (ENVTIECALL(CATIAItems,ENVTIETypeLetter,ENVTIELetter)ItemByAssignmentType(iIndex,iAssignmentType,oItem)); \
} \
HRESULT __stdcall  ENVTIEName::CountByAssignmentType(ItemAssignmentType iAssignmentType, CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAItems,ENVTIETypeLetter,ENVTIELetter)CountByAssignmentType(iAssignmentType,oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAItems,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAItems,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIAItems,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAItems,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIAItems,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIAItems,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAItems(classe)    TIECATIAItems##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAItems(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAItems, classe) \
 \
 \
CATImplementTIEMethods(CATIAItems, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAItems, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAItems, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAItems, classe) \
 \
HRESULT __stdcall  TIECATIAItems##classe::Item(const CATVariant & iIndex, CATIAItem *& oItem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iIndex,&oItem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oItem); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iIndex,&oItem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAItems##classe::Add(CATIAItem * iProduct, CATIAItem *& oProduct) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iProduct,&oProduct); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add(iProduct,oProduct); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iProduct,&oProduct); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAItems##classe::AddByAssignmentType(CATIAItem * iItem, ItemAssignmentType iAssignmentType, CATIAItem *& oItem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iItem,&iAssignmentType,&oItem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddByAssignmentType(iItem,iAssignmentType,oItem); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iItem,&iAssignmentType,&oItem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAItems##classe::RemoveByAssignmentType(CATIAItem * iItem, ItemAssignmentType iAssignmentType, CATIAItem *& oItem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iItem,&iAssignmentType,&oItem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveByAssignmentType(iItem,iAssignmentType,oItem); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iItem,&iAssignmentType,&oItem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAItems##classe::ItemByAssignmentType(const CATVariant & iIndex, ItemAssignmentType iAssignmentType, CATIAItem *& oItem) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iIndex,&iAssignmentType,&oItem); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ItemByAssignmentType(iIndex,iAssignmentType,oItem); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iIndex,&iAssignmentType,&oItem); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAItems##classe::CountByAssignmentType(ItemAssignmentType iAssignmentType, CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iAssignmentType,&oNbItems); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CountByAssignmentType(iAssignmentType,oNbItems); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iAssignmentType,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAItems##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAItems##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAItems##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAItems##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAItems##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAItems##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAItems(classe) \
 \
 \
declare_TIE_CATIAItems(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAItems##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAItems,"CATIAItems",CATIAItems::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAItems(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAItems, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAItems##classe(classe::MetaObject(),CATIAItems::MetaObject(),(void *)CreateTIECATIAItems##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAItems(classe) \
 \
 \
declare_TIE_CATIAItems(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAItems##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAItems,"CATIAItems",CATIAItems::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAItems(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAItems, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAItems##classe(classe::MetaObject(),CATIAItems::MetaObject(),(void *)CreateTIECATIAItems##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAItems(classe) TIE_CATIAItems(classe)
#else
#define BOA_CATIAItems(classe) CATImplementBOA(CATIAItems, classe)
#endif

#endif
