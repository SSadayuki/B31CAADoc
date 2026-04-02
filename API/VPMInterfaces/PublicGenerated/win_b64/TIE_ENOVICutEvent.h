#ifndef __TIE_ENOVICutEvent
#define __TIE_ENOVICutEvent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVICutEvent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVICutEvent */
#define declare_TIE_ENOVICutEvent(classe) \
 \
 \
class TIEENOVICutEvent##classe : public ENOVICutEvent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVICutEvent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onBeforeCut (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onAfterCut (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
};



#define ENVTIEdeclare_ENOVICutEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onBeforeCut (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onAfterCut (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \


#define ENVTIEdefine_ENOVICutEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVICutEvent,ENVTIETypeLetter,ENVTIELetter)onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onBeforeCut (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVICutEvent,ENVTIETypeLetter,ENVTIELetter)onBeforeCut (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterCut (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVICutEvent,ENVTIETypeLetter,ENVTIELetter)onAfterCut (iRaisedEvent,ioNotifyReturnCode)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVICutEvent(classe)    TIEENOVICutEvent##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVICutEvent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVICutEvent, classe) \
 \
 \
CATImplementTIEMethods(ENOVICutEvent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVICutEvent, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVICutEvent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVICutEvent, classe) \
 \
HRESULT  TIEENOVICutEvent##classe::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVICutEvent##classe::onBeforeCut (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforeCut (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVICutEvent##classe::onAfterCut (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterCut (iRaisedEvent,ioNotifyReturnCode)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVICutEvent(classe) \
 \
 \
declare_TIE_ENOVICutEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVICutEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVICutEvent,"ENOVICutEvent",ENOVICutEvent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVICutEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVICutEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVICutEvent##classe(classe::MetaObject(),ENOVICutEvent::MetaObject(),(void *)CreateTIEENOVICutEvent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVICutEvent(classe) \
 \
 \
declare_TIE_ENOVICutEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVICutEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVICutEvent,"ENOVICutEvent",ENOVICutEvent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVICutEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVICutEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVICutEvent##classe(classe::MetaObject(),ENOVICutEvent::MetaObject(),(void *)CreateTIEENOVICutEvent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVICutEvent(classe) TIE_ENOVICutEvent(classe)
#else
#define BOA_ENOVICutEvent(classe) CATImplementBOA(ENOVICutEvent, classe)
#endif

#endif
