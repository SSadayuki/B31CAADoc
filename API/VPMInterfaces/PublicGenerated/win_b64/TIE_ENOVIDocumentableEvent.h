#ifndef __TIE_ENOVIDocumentableEvent
#define __TIE_ENOVIDocumentableEvent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVIDocumentableEvent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVIDocumentableEvent */
#define declare_TIE_ENOVIDocumentableEvent(classe) \
 \
 \
class TIEENOVIDocumentableEvent##classe : public ENOVIDocumentableEvent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVIDocumentableEvent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onBeforeAttachDoc(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onAfterAttachDoc(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onBeforeDetachDoc(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onAfterDetachDoc(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
};



#define ENVTIEdeclare_ENOVIDocumentableEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onBeforeAttachDoc(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onAfterAttachDoc(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onBeforeDetachDoc(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onAfterDetachDoc(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \


#define ENVTIEdefine_ENOVIDocumentableEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIDocumentableEvent,ENVTIETypeLetter,ENVTIELetter)onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onBeforeAttachDoc(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIDocumentableEvent,ENVTIETypeLetter,ENVTIELetter)onBeforeAttachDoc(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterAttachDoc(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIDocumentableEvent,ENVTIETypeLetter,ENVTIELetter)onAfterAttachDoc(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onBeforeDetachDoc(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIDocumentableEvent,ENVTIETypeLetter,ENVTIELetter)onBeforeDetachDoc(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterDetachDoc(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIDocumentableEvent,ENVTIETypeLetter,ENVTIELetter)onAfterDetachDoc(iRaisedEvent,ioNotifyReturnCode)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVIDocumentableEvent(classe)    TIEENOVIDocumentableEvent##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVIDocumentableEvent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVIDocumentableEvent, classe) \
 \
 \
CATImplementTIEMethods(ENOVIDocumentableEvent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVIDocumentableEvent, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVIDocumentableEvent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVIDocumentableEvent, classe) \
 \
HRESULT  TIEENOVIDocumentableEvent##classe::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIDocumentableEvent##classe::onBeforeAttachDoc(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforeAttachDoc(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIDocumentableEvent##classe::onAfterAttachDoc(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterAttachDoc(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIDocumentableEvent##classe::onBeforeDetachDoc(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforeDetachDoc(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIDocumentableEvent##classe::onAfterDetachDoc(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterDetachDoc(iRaisedEvent,ioNotifyReturnCode)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVIDocumentableEvent(classe) \
 \
 \
declare_TIE_ENOVIDocumentableEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIDocumentableEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIDocumentableEvent,"ENOVIDocumentableEvent",ENOVIDocumentableEvent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIDocumentableEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVIDocumentableEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIDocumentableEvent##classe(classe::MetaObject(),ENOVIDocumentableEvent::MetaObject(),(void *)CreateTIEENOVIDocumentableEvent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVIDocumentableEvent(classe) \
 \
 \
declare_TIE_ENOVIDocumentableEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIDocumentableEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIDocumentableEvent,"ENOVIDocumentableEvent",ENOVIDocumentableEvent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIDocumentableEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVIDocumentableEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIDocumentableEvent##classe(classe::MetaObject(),ENOVIDocumentableEvent::MetaObject(),(void *)CreateTIEENOVIDocumentableEvent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVIDocumentableEvent(classe) TIE_ENOVIDocumentableEvent(classe)
#else
#define BOA_ENOVIDocumentableEvent(classe) CATImplementBOA(ENOVIDocumentableEvent, classe)
#endif

#endif
