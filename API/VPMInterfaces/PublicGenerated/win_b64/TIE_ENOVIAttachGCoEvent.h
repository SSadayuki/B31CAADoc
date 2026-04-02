#ifndef __TIE_ENOVIAttachGCoEvent
#define __TIE_ENOVIAttachGCoEvent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVIAttachGCoEvent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVIAttachGCoEvent */
#define declare_TIE_ENOVIAttachGCoEvent(classe) \
 \
 \
class TIEENOVIAttachGCoEvent##classe : public ENOVIAttachGCoEvent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVIAttachGCoEvent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onBeforeAttachOnGCo(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onAfterAttachOnGCo(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onBeforeDetachFromGCo(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onAfterDetachFromGCo(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
};



#define ENVTIEdeclare_ENOVIAttachGCoEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onBeforeAttachOnGCo(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onAfterAttachOnGCo(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onBeforeDetachFromGCo(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onAfterDetachFromGCo(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \


#define ENVTIEdefine_ENOVIAttachGCoEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIAttachGCoEvent,ENVTIETypeLetter,ENVTIELetter)onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onBeforeAttachOnGCo(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIAttachGCoEvent,ENVTIETypeLetter,ENVTIELetter)onBeforeAttachOnGCo(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterAttachOnGCo(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIAttachGCoEvent,ENVTIETypeLetter,ENVTIELetter)onAfterAttachOnGCo(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onBeforeDetachFromGCo(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIAttachGCoEvent,ENVTIETypeLetter,ENVTIELetter)onBeforeDetachFromGCo(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterDetachFromGCo(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIAttachGCoEvent,ENVTIETypeLetter,ENVTIELetter)onAfterDetachFromGCo(iRaisedEvent,ioNotifyReturnCode)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVIAttachGCoEvent(classe)    TIEENOVIAttachGCoEvent##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVIAttachGCoEvent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVIAttachGCoEvent, classe) \
 \
 \
CATImplementTIEMethods(ENOVIAttachGCoEvent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVIAttachGCoEvent, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVIAttachGCoEvent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVIAttachGCoEvent, classe) \
 \
HRESULT  TIEENOVIAttachGCoEvent##classe::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIAttachGCoEvent##classe::onBeforeAttachOnGCo(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforeAttachOnGCo(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIAttachGCoEvent##classe::onAfterAttachOnGCo(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterAttachOnGCo(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIAttachGCoEvent##classe::onBeforeDetachFromGCo(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforeDetachFromGCo(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIAttachGCoEvent##classe::onAfterDetachFromGCo(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterDetachFromGCo(iRaisedEvent,ioNotifyReturnCode)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVIAttachGCoEvent(classe) \
 \
 \
declare_TIE_ENOVIAttachGCoEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIAttachGCoEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIAttachGCoEvent,"ENOVIAttachGCoEvent",ENOVIAttachGCoEvent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIAttachGCoEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVIAttachGCoEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIAttachGCoEvent##classe(classe::MetaObject(),ENOVIAttachGCoEvent::MetaObject(),(void *)CreateTIEENOVIAttachGCoEvent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVIAttachGCoEvent(classe) \
 \
 \
declare_TIE_ENOVIAttachGCoEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIAttachGCoEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIAttachGCoEvent,"ENOVIAttachGCoEvent",ENOVIAttachGCoEvent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIAttachGCoEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVIAttachGCoEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIAttachGCoEvent##classe(classe::MetaObject(),ENOVIAttachGCoEvent::MetaObject(),(void *)CreateTIEENOVIAttachGCoEvent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVIAttachGCoEvent(classe) TIE_ENOVIAttachGCoEvent(classe)
#else
#define BOA_ENOVIAttachGCoEvent(classe) CATImplementBOA(ENOVIAttachGCoEvent, classe)
#endif

#endif
