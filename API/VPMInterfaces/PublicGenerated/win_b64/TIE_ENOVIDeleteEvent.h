#ifndef __TIE_ENOVIDeleteEvent
#define __TIE_ENOVIDeleteEvent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVIDeleteEvent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVIDeleteEvent */
#define declare_TIE_ENOVIDeleteEvent(classe) \
 \
 \
class TIEENOVIDeleteEvent##classe : public ENOVIDeleteEvent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVIDeleteEvent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onBeforeDelete (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onAfterDelete (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
};



#define ENVTIEdeclare_ENOVIDeleteEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onBeforeDelete (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onAfterDelete (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \


#define ENVTIEdefine_ENOVIDeleteEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIDeleteEvent,ENVTIETypeLetter,ENVTIELetter)onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onBeforeDelete (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIDeleteEvent,ENVTIETypeLetter,ENVTIELetter)onBeforeDelete (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterDelete (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIDeleteEvent,ENVTIETypeLetter,ENVTIELetter)onAfterDelete (iRaisedEvent,ioNotifyReturnCode)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVIDeleteEvent(classe)    TIEENOVIDeleteEvent##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVIDeleteEvent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVIDeleteEvent, classe) \
 \
 \
CATImplementTIEMethods(ENOVIDeleteEvent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVIDeleteEvent, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVIDeleteEvent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVIDeleteEvent, classe) \
 \
HRESULT  TIEENOVIDeleteEvent##classe::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIDeleteEvent##classe::onBeforeDelete (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforeDelete (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIDeleteEvent##classe::onAfterDelete (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterDelete (iRaisedEvent,ioNotifyReturnCode)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVIDeleteEvent(classe) \
 \
 \
declare_TIE_ENOVIDeleteEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIDeleteEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIDeleteEvent,"ENOVIDeleteEvent",ENOVIDeleteEvent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIDeleteEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVIDeleteEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIDeleteEvent##classe(classe::MetaObject(),ENOVIDeleteEvent::MetaObject(),(void *)CreateTIEENOVIDeleteEvent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVIDeleteEvent(classe) \
 \
 \
declare_TIE_ENOVIDeleteEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIDeleteEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIDeleteEvent,"ENOVIDeleteEvent",ENOVIDeleteEvent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIDeleteEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVIDeleteEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIDeleteEvent##classe(classe::MetaObject(),ENOVIDeleteEvent::MetaObject(),(void *)CreateTIEENOVIDeleteEvent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVIDeleteEvent(classe) TIE_ENOVIDeleteEvent(classe)
#else
#define BOA_ENOVIDeleteEvent(classe) CATImplementBOA(ENOVIDeleteEvent, classe)
#endif

#endif
