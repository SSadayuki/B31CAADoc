#ifndef __TIE_CATIASfmSlots
#define __TIE_CATIASfmSlots

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASfmSlots.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASfmSlots */
#define declare_TIE_CATIASfmSlots(classe) \
 \
 \
class TIECATIASfmSlots##classe : public CATIASfmSlots \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASfmSlots, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddSlot(CATIAReference * iPenetratedElement, CATIAReference * iPenetratingObject, const CATBSTR & iSlotName, CATIASfmConnectionParameters * iListParameters, CATIASfmSlot *& oSfmSlot); \
      virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIASfmSlot *& oSfmSlot); \
      virtual HRESULT __stdcall RemoveSlot(CATIASfmSlot * iSfmSlot); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
      virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
      virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \
};



#define ENVTIEdeclare_CATIASfmSlots(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddSlot(CATIAReference * iPenetratedElement, CATIAReference * iPenetratingObject, const CATBSTR & iSlotName, CATIASfmConnectionParameters * iListParameters, CATIASfmSlot *& oSfmSlot); \
virtual HRESULT __stdcall Item(const CATVariant & iIndex, CATIASfmSlot *& oSfmSlot); \
virtual HRESULT __stdcall RemoveSlot(CATIASfmSlot * iSfmSlot); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oName); \
virtual HRESULT  __stdcall get_Count(CATLONG & oNbItems); \
virtual HRESULT  __stdcall get__NewEnum(IUnknown *& oEnumIter); \


#define ENVTIEdefine_CATIASfmSlots(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddSlot(CATIAReference * iPenetratedElement, CATIAReference * iPenetratingObject, const CATBSTR & iSlotName, CATIASfmConnectionParameters * iListParameters, CATIASfmSlot *& oSfmSlot) \
{ \
return (ENVTIECALL(CATIASfmSlots,ENVTIETypeLetter,ENVTIELetter)AddSlot(iPenetratedElement,iPenetratingObject,iSlotName,iListParameters,oSfmSlot)); \
} \
HRESULT __stdcall  ENVTIEName::Item(const CATVariant & iIndex, CATIASfmSlot *& oSfmSlot) \
{ \
return (ENVTIECALL(CATIASfmSlots,ENVTIETypeLetter,ENVTIELetter)Item(iIndex,oSfmSlot)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveSlot(CATIASfmSlot * iSfmSlot) \
{ \
return (ENVTIECALL(CATIASfmSlots,ENVTIETypeLetter,ENVTIELetter)RemoveSlot(iSfmSlot)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASfmSlots,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASfmSlots,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
return (ENVTIECALL(CATIASfmSlots,ENVTIETypeLetter,ENVTIELetter)GetItem(iIDName,oObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIASfmSlots,ENVTIETypeLetter,ENVTIELetter)get_Name(oName)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Count(CATLONG & oNbItems) \
{ \
return (ENVTIECALL(CATIASfmSlots,ENVTIETypeLetter,ENVTIELetter)get_Count(oNbItems)); \
} \
HRESULT  __stdcall  ENVTIEName::get__NewEnum(IUnknown *& oEnumIter) \
{ \
return (ENVTIECALL(CATIASfmSlots,ENVTIETypeLetter,ENVTIELetter)get__NewEnum(oEnumIter)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASfmSlots(classe)    TIECATIASfmSlots##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASfmSlots(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASfmSlots, classe) \
 \
 \
CATImplementTIEMethods(CATIASfmSlots, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASfmSlots, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASfmSlots, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASfmSlots, classe) \
 \
HRESULT __stdcall  TIECATIASfmSlots##classe::AddSlot(CATIAReference * iPenetratedElement, CATIAReference * iPenetratingObject, const CATBSTR & iSlotName, CATIASfmConnectionParameters * iListParameters, CATIASfmSlot *& oSfmSlot) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iPenetratedElement,&iPenetratingObject,&iSlotName,&iListParameters,&oSfmSlot); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddSlot(iPenetratedElement,iPenetratingObject,iSlotName,iListParameters,oSfmSlot); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iPenetratedElement,&iPenetratingObject,&iSlotName,&iListParameters,&oSfmSlot); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSlots##classe::Item(const CATVariant & iIndex, CATIASfmSlot *& oSfmSlot) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iIndex,&oSfmSlot); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Item(iIndex,oSfmSlot); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iIndex,&oSfmSlot); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmSlots##classe::RemoveSlot(CATIASfmSlot * iSfmSlot) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iSfmSlot); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveSlot(iSfmSlot); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iSfmSlot); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmSlots##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmSlots##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmSlots##classe::GetItem(const CATBSTR & iIDName, CATBaseDispatch *& oObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iIDName,&oObject); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(iIDName,oObject); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iIDName,&oObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmSlots##classe::get_Name(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oName); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oName); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmSlots##classe::get_Count(CATLONG & oNbItems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNbItems); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Count(oNbItems); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNbItems); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmSlots##classe::get__NewEnum(IUnknown *& oEnumIter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oEnumIter); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get__NewEnum(oEnumIter); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oEnumIter); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASfmSlots(classe) \
 \
 \
declare_TIE_CATIASfmSlots(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmSlots##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmSlots,"CATIASfmSlots",CATIASfmSlots::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmSlots(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASfmSlots, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmSlots##classe(classe::MetaObject(),CATIASfmSlots::MetaObject(),(void *)CreateTIECATIASfmSlots##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASfmSlots(classe) \
 \
 \
declare_TIE_CATIASfmSlots(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmSlots##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmSlots,"CATIASfmSlots",CATIASfmSlots::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmSlots(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASfmSlots, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmSlots##classe(classe::MetaObject(),CATIASfmSlots::MetaObject(),(void *)CreateTIECATIASfmSlots##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASfmSlots(classe) TIE_CATIASfmSlots(classe)
#else
#define BOA_CATIASfmSlots(classe) CATImplementBOA(CATIASfmSlots, classe)
#endif

#endif
