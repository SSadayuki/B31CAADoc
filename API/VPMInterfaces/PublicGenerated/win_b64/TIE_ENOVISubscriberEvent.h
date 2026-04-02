#ifndef __TIE_ENOVISubscriberEvent
#define __TIE_ENOVISubscriberEvent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVISubscriberEvent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVISubscriberEvent */
#define declare_TIE_ENOVISubscriberEvent(classe) \
 \
 \
class TIEENOVISubscriberEvent##classe : public ENOVISubscriberEvent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVISubscriberEvent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT onReceive ( const ENOVIEvent_var& iEvent, HRESULT&              ioNotifyReturnCode ); \
      virtual HRESULT onKo      ( const ENOVIEvent_var& iEvent, HRESULT&              ioNotifyReturnCode ); \
};



#define ENVTIEdeclare_ENOVISubscriberEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT onReceive ( const ENOVIEvent_var& iEvent, HRESULT&              ioNotifyReturnCode ); \
virtual HRESULT onKo      ( const ENOVIEvent_var& iEvent, HRESULT&              ioNotifyReturnCode ); \


#define ENVTIEdefine_ENOVISubscriberEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::onReceive ( const ENOVIEvent_var& iEvent, HRESULT&              ioNotifyReturnCode ) \
{ \
return (ENVTIECALL(ENOVISubscriberEvent,ENVTIETypeLetter,ENVTIELetter)onReceive (iEvent,ioNotifyReturnCode )); \
} \
HRESULT  ENVTIEName::onKo      ( const ENOVIEvent_var& iEvent, HRESULT&              ioNotifyReturnCode ) \
{ \
return (ENVTIECALL(ENOVISubscriberEvent,ENVTIETypeLetter,ENVTIELetter)onKo      (iEvent,ioNotifyReturnCode )); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVISubscriberEvent(classe)    TIEENOVISubscriberEvent##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVISubscriberEvent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVISubscriberEvent, classe) \
 \
 \
CATImplementTIEMethods(ENOVISubscriberEvent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVISubscriberEvent, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVISubscriberEvent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVISubscriberEvent, classe) \
 \
HRESULT  TIEENOVISubscriberEvent##classe::onReceive ( const ENOVIEvent_var& iEvent, HRESULT&              ioNotifyReturnCode ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onReceive (iEvent,ioNotifyReturnCode )); \
} \
HRESULT  TIEENOVISubscriberEvent##classe::onKo      ( const ENOVIEvent_var& iEvent, HRESULT&              ioNotifyReturnCode ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onKo      (iEvent,ioNotifyReturnCode )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVISubscriberEvent(classe) \
 \
 \
declare_TIE_ENOVISubscriberEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVISubscriberEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVISubscriberEvent,"ENOVISubscriberEvent",ENOVISubscriberEvent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVISubscriberEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVISubscriberEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVISubscriberEvent##classe(classe::MetaObject(),ENOVISubscriberEvent::MetaObject(),(void *)CreateTIEENOVISubscriberEvent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVISubscriberEvent(classe) \
 \
 \
declare_TIE_ENOVISubscriberEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVISubscriberEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVISubscriberEvent,"ENOVISubscriberEvent",ENOVISubscriberEvent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVISubscriberEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVISubscriberEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVISubscriberEvent##classe(classe::MetaObject(),ENOVISubscriberEvent::MetaObject(),(void *)CreateTIEENOVISubscriberEvent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVISubscriberEvent(classe) TIE_ENOVISubscriberEvent(classe)
#else
#define BOA_ENOVISubscriberEvent(classe) CATImplementBOA(ENOVISubscriberEvent, classe)
#endif

#endif
