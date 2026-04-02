#ifndef __TIE_ENOVISaveEvent
#define __TIE_ENOVISaveEvent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVISaveEvent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVISaveEvent */
#define declare_TIE_ENOVISaveEvent(classe) \
 \
 \
class TIEENOVISaveEvent##classe : public ENOVISaveEvent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVISaveEvent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onBeforeSave(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onAfterSave(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
};



#define ENVTIEdeclare_ENOVISaveEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onBeforeSave(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onAfterSave(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \


#define ENVTIEdefine_ENOVISaveEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVISaveEvent,ENVTIETypeLetter,ENVTIELetter)onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onBeforeSave(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVISaveEvent,ENVTIETypeLetter,ENVTIELetter)onBeforeSave(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterSave(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVISaveEvent,ENVTIETypeLetter,ENVTIELetter)onAfterSave(iRaisedEvent,ioNotifyReturnCode)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVISaveEvent(classe)    TIEENOVISaveEvent##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVISaveEvent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVISaveEvent, classe) \
 \
 \
CATImplementTIEMethods(ENOVISaveEvent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVISaveEvent, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVISaveEvent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVISaveEvent, classe) \
 \
HRESULT  TIEENOVISaveEvent##classe::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVISaveEvent##classe::onBeforeSave(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforeSave(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVISaveEvent##classe::onAfterSave(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterSave(iRaisedEvent,ioNotifyReturnCode)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVISaveEvent(classe) \
 \
 \
declare_TIE_ENOVISaveEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVISaveEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVISaveEvent,"ENOVISaveEvent",ENOVISaveEvent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVISaveEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVISaveEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVISaveEvent##classe(classe::MetaObject(),ENOVISaveEvent::MetaObject(),(void *)CreateTIEENOVISaveEvent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVISaveEvent(classe) \
 \
 \
declare_TIE_ENOVISaveEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVISaveEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVISaveEvent,"ENOVISaveEvent",ENOVISaveEvent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVISaveEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVISaveEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVISaveEvent##classe(classe::MetaObject(),ENOVISaveEvent::MetaObject(),(void *)CreateTIEENOVISaveEvent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVISaveEvent(classe) TIE_ENOVISaveEvent(classe)
#else
#define BOA_ENOVISaveEvent(classe) CATImplementBOA(ENOVISaveEvent, classe)
#endif

#endif
