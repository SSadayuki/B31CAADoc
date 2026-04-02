#ifndef __TIE_ENOVIUpdateEvent
#define __TIE_ENOVIUpdateEvent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVIUpdateEvent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVIUpdateEvent */
#define declare_TIE_ENOVIUpdateEvent(classe) \
 \
 \
class TIEENOVIUpdateEvent##classe : public ENOVIUpdateEvent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVIUpdateEvent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onBeforeUpdate(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onAfterUpdate(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
};



#define ENVTIEdeclare_ENOVIUpdateEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onBeforeUpdate(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onAfterUpdate(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \


#define ENVTIEdefine_ENOVIUpdateEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIUpdateEvent,ENVTIETypeLetter,ENVTIELetter)onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onBeforeUpdate(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIUpdateEvent,ENVTIETypeLetter,ENVTIELetter)onBeforeUpdate(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterUpdate(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIUpdateEvent,ENVTIETypeLetter,ENVTIELetter)onAfterUpdate(iRaisedEvent,ioNotifyReturnCode)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVIUpdateEvent(classe)    TIEENOVIUpdateEvent##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVIUpdateEvent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVIUpdateEvent, classe) \
 \
 \
CATImplementTIEMethods(ENOVIUpdateEvent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVIUpdateEvent, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVIUpdateEvent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVIUpdateEvent, classe) \
 \
HRESULT  TIEENOVIUpdateEvent##classe::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIUpdateEvent##classe::onBeforeUpdate(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforeUpdate(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIUpdateEvent##classe::onAfterUpdate(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterUpdate(iRaisedEvent,ioNotifyReturnCode)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVIUpdateEvent(classe) \
 \
 \
declare_TIE_ENOVIUpdateEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIUpdateEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIUpdateEvent,"ENOVIUpdateEvent",ENOVIUpdateEvent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIUpdateEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVIUpdateEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIUpdateEvent##classe(classe::MetaObject(),ENOVIUpdateEvent::MetaObject(),(void *)CreateTIEENOVIUpdateEvent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVIUpdateEvent(classe) \
 \
 \
declare_TIE_ENOVIUpdateEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIUpdateEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIUpdateEvent,"ENOVIUpdateEvent",ENOVIUpdateEvent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIUpdateEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVIUpdateEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIUpdateEvent##classe(classe::MetaObject(),ENOVIUpdateEvent::MetaObject(),(void *)CreateTIEENOVIUpdateEvent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVIUpdateEvent(classe) TIE_ENOVIUpdateEvent(classe)
#else
#define BOA_ENOVIUpdateEvent(classe) CATImplementBOA(ENOVIUpdateEvent, classe)
#endif

#endif
