#ifndef __TIE_ENOVINewVersionEvent
#define __TIE_ENOVINewVersionEvent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVINewVersionEvent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVINewVersionEvent */
#define declare_TIE_ENOVINewVersionEvent(classe) \
 \
 \
class TIEENOVINewVersionEvent##classe : public ENOVINewVersionEvent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVINewVersionEvent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onBeforeNewVersion(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onAfterNewVersion(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
};



#define ENVTIEdeclare_ENOVINewVersionEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onBeforeNewVersion(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onAfterNewVersion(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \


#define ENVTIEdefine_ENOVINewVersionEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVINewVersionEvent,ENVTIETypeLetter,ENVTIELetter)onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onBeforeNewVersion(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVINewVersionEvent,ENVTIETypeLetter,ENVTIELetter)onBeforeNewVersion(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterNewVersion(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVINewVersionEvent,ENVTIETypeLetter,ENVTIELetter)onAfterNewVersion(iRaisedEvent,ioNotifyReturnCode)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVINewVersionEvent(classe)    TIEENOVINewVersionEvent##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVINewVersionEvent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVINewVersionEvent, classe) \
 \
 \
CATImplementTIEMethods(ENOVINewVersionEvent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVINewVersionEvent, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVINewVersionEvent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVINewVersionEvent, classe) \
 \
HRESULT  TIEENOVINewVersionEvent##classe::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVINewVersionEvent##classe::onBeforeNewVersion(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforeNewVersion(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVINewVersionEvent##classe::onAfterNewVersion(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterNewVersion(iRaisedEvent,ioNotifyReturnCode)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVINewVersionEvent(classe) \
 \
 \
declare_TIE_ENOVINewVersionEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVINewVersionEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVINewVersionEvent,"ENOVINewVersionEvent",ENOVINewVersionEvent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVINewVersionEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVINewVersionEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVINewVersionEvent##classe(classe::MetaObject(),ENOVINewVersionEvent::MetaObject(),(void *)CreateTIEENOVINewVersionEvent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVINewVersionEvent(classe) \
 \
 \
declare_TIE_ENOVINewVersionEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVINewVersionEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVINewVersionEvent,"ENOVINewVersionEvent",ENOVINewVersionEvent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVINewVersionEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVINewVersionEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVINewVersionEvent##classe(classe::MetaObject(),ENOVINewVersionEvent::MetaObject(),(void *)CreateTIEENOVINewVersionEvent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVINewVersionEvent(classe) TIE_ENOVINewVersionEvent(classe)
#else
#define BOA_ENOVINewVersionEvent(classe) CATImplementBOA(ENOVINewVersionEvent, classe)
#endif

#endif
