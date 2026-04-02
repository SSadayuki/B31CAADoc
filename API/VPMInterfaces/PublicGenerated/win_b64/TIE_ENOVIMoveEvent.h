#ifndef __TIE_ENOVIMoveEvent
#define __TIE_ENOVIMoveEvent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVIMoveEvent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVIMoveEvent */
#define declare_TIE_ENOVIMoveEvent(classe) \
 \
 \
class TIEENOVIMoveEvent##classe : public ENOVIMoveEvent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVIMoveEvent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onBeforeMove (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onAfterMove (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
};



#define ENVTIEdeclare_ENOVIMoveEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onBeforeMove (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onAfterMove (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \


#define ENVTIEdefine_ENOVIMoveEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIMoveEvent,ENVTIETypeLetter,ENVTIELetter)onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onBeforeMove (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIMoveEvent,ENVTIETypeLetter,ENVTIELetter)onBeforeMove (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterMove (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIMoveEvent,ENVTIETypeLetter,ENVTIELetter)onAfterMove (iRaisedEvent,ioNotifyReturnCode)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVIMoveEvent(classe)    TIEENOVIMoveEvent##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVIMoveEvent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVIMoveEvent, classe) \
 \
 \
CATImplementTIEMethods(ENOVIMoveEvent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVIMoveEvent, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVIMoveEvent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVIMoveEvent, classe) \
 \
HRESULT  TIEENOVIMoveEvent##classe::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIMoveEvent##classe::onBeforeMove (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforeMove (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIMoveEvent##classe::onAfterMove (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterMove (iRaisedEvent,ioNotifyReturnCode)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVIMoveEvent(classe) \
 \
 \
declare_TIE_ENOVIMoveEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIMoveEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIMoveEvent,"ENOVIMoveEvent",ENOVIMoveEvent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIMoveEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVIMoveEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIMoveEvent##classe(classe::MetaObject(),ENOVIMoveEvent::MetaObject(),(void *)CreateTIEENOVIMoveEvent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVIMoveEvent(classe) \
 \
 \
declare_TIE_ENOVIMoveEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIMoveEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIMoveEvent,"ENOVIMoveEvent",ENOVIMoveEvent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIMoveEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVIMoveEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIMoveEvent##classe(classe::MetaObject(),ENOVIMoveEvent::MetaObject(),(void *)CreateTIEENOVIMoveEvent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVIMoveEvent(classe) TIE_ENOVIMoveEvent(classe)
#else
#define BOA_ENOVIMoveEvent(classe) CATImplementBOA(ENOVIMoveEvent, classe)
#endif

#endif
