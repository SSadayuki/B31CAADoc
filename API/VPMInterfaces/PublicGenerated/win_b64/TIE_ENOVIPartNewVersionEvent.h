#ifndef __TIE_ENOVIPartNewVersionEvent
#define __TIE_ENOVIPartNewVersionEvent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVIPartNewVersionEvent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVIPartNewVersionEvent */
#define declare_TIE_ENOVIPartNewVersionEvent(classe) \
 \
 \
class TIEENOVIPartNewVersionEvent##classe : public ENOVIPartNewVersionEvent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVIPartNewVersionEvent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onBeforePartNewVersion(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onAfterPartNewVersion(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
};



#define ENVTIEdeclare_ENOVIPartNewVersionEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onBeforePartNewVersion(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onAfterPartNewVersion(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \


#define ENVTIEdefine_ENOVIPartNewVersionEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIPartNewVersionEvent,ENVTIETypeLetter,ENVTIELetter)onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onBeforePartNewVersion(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIPartNewVersionEvent,ENVTIETypeLetter,ENVTIELetter)onBeforePartNewVersion(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterPartNewVersion(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIPartNewVersionEvent,ENVTIETypeLetter,ENVTIELetter)onAfterPartNewVersion(iRaisedEvent,ioNotifyReturnCode)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVIPartNewVersionEvent(classe)    TIEENOVIPartNewVersionEvent##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVIPartNewVersionEvent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVIPartNewVersionEvent, classe) \
 \
 \
CATImplementTIEMethods(ENOVIPartNewVersionEvent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVIPartNewVersionEvent, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVIPartNewVersionEvent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVIPartNewVersionEvent, classe) \
 \
HRESULT  TIEENOVIPartNewVersionEvent##classe::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIPartNewVersionEvent##classe::onBeforePartNewVersion(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforePartNewVersion(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIPartNewVersionEvent##classe::onAfterPartNewVersion(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterPartNewVersion(iRaisedEvent,ioNotifyReturnCode)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVIPartNewVersionEvent(classe) \
 \
 \
declare_TIE_ENOVIPartNewVersionEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIPartNewVersionEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIPartNewVersionEvent,"ENOVIPartNewVersionEvent",ENOVIPartNewVersionEvent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIPartNewVersionEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVIPartNewVersionEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIPartNewVersionEvent##classe(classe::MetaObject(),ENOVIPartNewVersionEvent::MetaObject(),(void *)CreateTIEENOVIPartNewVersionEvent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVIPartNewVersionEvent(classe) \
 \
 \
declare_TIE_ENOVIPartNewVersionEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIPartNewVersionEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIPartNewVersionEvent,"ENOVIPartNewVersionEvent",ENOVIPartNewVersionEvent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIPartNewVersionEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVIPartNewVersionEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIPartNewVersionEvent##classe(classe::MetaObject(),ENOVIPartNewVersionEvent::MetaObject(),(void *)CreateTIEENOVIPartNewVersionEvent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVIPartNewVersionEvent(classe) TIE_ENOVIPartNewVersionEvent(classe)
#else
#define BOA_ENOVIPartNewVersionEvent(classe) CATImplementBOA(ENOVIPartNewVersionEvent, classe)
#endif

#endif
