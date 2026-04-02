#ifndef __TIE_ENOVIPasteEvent
#define __TIE_ENOVIPasteEvent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVIPasteEvent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVIPasteEvent */
#define declare_TIE_ENOVIPasteEvent(classe) \
 \
 \
class TIEENOVIPasteEvent##classe : public ENOVIPasteEvent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVIPasteEvent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onBeforePaste (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onAfterPaste (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
};



#define ENVTIEdeclare_ENOVIPasteEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onBeforePaste (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onAfterPaste (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \


#define ENVTIEdefine_ENOVIPasteEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIPasteEvent,ENVTIETypeLetter,ENVTIELetter)onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onBeforePaste (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIPasteEvent,ENVTIETypeLetter,ENVTIELetter)onBeforePaste (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterPaste (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIPasteEvent,ENVTIETypeLetter,ENVTIELetter)onAfterPaste (iRaisedEvent,ioNotifyReturnCode)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVIPasteEvent(classe)    TIEENOVIPasteEvent##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVIPasteEvent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVIPasteEvent, classe) \
 \
 \
CATImplementTIEMethods(ENOVIPasteEvent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVIPasteEvent, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVIPasteEvent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVIPasteEvent, classe) \
 \
HRESULT  TIEENOVIPasteEvent##classe::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIPasteEvent##classe::onBeforePaste (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforePaste (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIPasteEvent##classe::onAfterPaste (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterPaste (iRaisedEvent,ioNotifyReturnCode)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVIPasteEvent(classe) \
 \
 \
declare_TIE_ENOVIPasteEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIPasteEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIPasteEvent,"ENOVIPasteEvent",ENOVIPasteEvent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIPasteEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVIPasteEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIPasteEvent##classe(classe::MetaObject(),ENOVIPasteEvent::MetaObject(),(void *)CreateTIEENOVIPasteEvent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVIPasteEvent(classe) \
 \
 \
declare_TIE_ENOVIPasteEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIPasteEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIPasteEvent,"ENOVIPasteEvent",ENOVIPasteEvent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIPasteEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVIPasteEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIPasteEvent##classe(classe::MetaObject(),ENOVIPasteEvent::MetaObject(),(void *)CreateTIEENOVIPasteEvent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVIPasteEvent(classe) TIE_ENOVIPasteEvent(classe)
#else
#define BOA_ENOVIPasteEvent(classe) CATImplementBOA(ENOVIPasteEvent, classe)
#endif

#endif
