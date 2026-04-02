#ifndef __TIE_ENOVINewItemInstanceEvent
#define __TIE_ENOVINewItemInstanceEvent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVINewItemInstanceEvent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVINewItemInstanceEvent */
#define declare_TIE_ENOVINewItemInstanceEvent(classe) \
 \
 \
class TIEENOVINewItemInstanceEvent##classe : public ENOVINewItemInstanceEvent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVINewItemInstanceEvent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onBeforeNewItemInstance(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onAfterNewItemInstance(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
};



#define ENVTIEdeclare_ENOVINewItemInstanceEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onBeforeNewItemInstance(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onAfterNewItemInstance(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \


#define ENVTIEdefine_ENOVINewItemInstanceEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVINewItemInstanceEvent,ENVTIETypeLetter,ENVTIELetter)onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onBeforeNewItemInstance(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVINewItemInstanceEvent,ENVTIETypeLetter,ENVTIELetter)onBeforeNewItemInstance(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterNewItemInstance(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVINewItemInstanceEvent,ENVTIETypeLetter,ENVTIELetter)onAfterNewItemInstance(iRaisedEvent,ioNotifyReturnCode)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVINewItemInstanceEvent(classe)    TIEENOVINewItemInstanceEvent##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVINewItemInstanceEvent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVINewItemInstanceEvent, classe) \
 \
 \
CATImplementTIEMethods(ENOVINewItemInstanceEvent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVINewItemInstanceEvent, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVINewItemInstanceEvent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVINewItemInstanceEvent, classe) \
 \
HRESULT  TIEENOVINewItemInstanceEvent##classe::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVINewItemInstanceEvent##classe::onBeforeNewItemInstance(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforeNewItemInstance(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVINewItemInstanceEvent##classe::onAfterNewItemInstance(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterNewItemInstance(iRaisedEvent,ioNotifyReturnCode)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVINewItemInstanceEvent(classe) \
 \
 \
declare_TIE_ENOVINewItemInstanceEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVINewItemInstanceEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVINewItemInstanceEvent,"ENOVINewItemInstanceEvent",ENOVINewItemInstanceEvent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVINewItemInstanceEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVINewItemInstanceEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVINewItemInstanceEvent##classe(classe::MetaObject(),ENOVINewItemInstanceEvent::MetaObject(),(void *)CreateTIEENOVINewItemInstanceEvent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVINewItemInstanceEvent(classe) \
 \
 \
declare_TIE_ENOVINewItemInstanceEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVINewItemInstanceEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVINewItemInstanceEvent,"ENOVINewItemInstanceEvent",ENOVINewItemInstanceEvent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVINewItemInstanceEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVINewItemInstanceEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVINewItemInstanceEvent##classe(classe::MetaObject(),ENOVINewItemInstanceEvent::MetaObject(),(void *)CreateTIEENOVINewItemInstanceEvent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVINewItemInstanceEvent(classe) TIE_ENOVINewItemInstanceEvent(classe)
#else
#define BOA_ENOVINewItemInstanceEvent(classe) CATImplementBOA(ENOVINewItemInstanceEvent, classe)
#endif

#endif
