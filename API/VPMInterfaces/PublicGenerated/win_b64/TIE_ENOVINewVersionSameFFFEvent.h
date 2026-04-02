#ifndef __TIE_ENOVINewVersionSameFFFEvent
#define __TIE_ENOVINewVersionSameFFFEvent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVINewVersionSameFFFEvent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVINewVersionSameFFFEvent */
#define declare_TIE_ENOVINewVersionSameFFFEvent(classe) \
 \
 \
class TIEENOVINewVersionSameFFFEvent##classe : public ENOVINewVersionSameFFFEvent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVINewVersionSameFFFEvent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onBeforeNewVersionSameFFF(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onAfterNewVersionSameFFF(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
};



#define ENVTIEdeclare_ENOVINewVersionSameFFFEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onBeforeNewVersionSameFFF(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onAfterNewVersionSameFFF(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \


#define ENVTIEdefine_ENOVINewVersionSameFFFEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVINewVersionSameFFFEvent,ENVTIETypeLetter,ENVTIELetter)onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onBeforeNewVersionSameFFF(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVINewVersionSameFFFEvent,ENVTIETypeLetter,ENVTIELetter)onBeforeNewVersionSameFFF(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterNewVersionSameFFF(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVINewVersionSameFFFEvent,ENVTIETypeLetter,ENVTIELetter)onAfterNewVersionSameFFF(iRaisedEvent,ioNotifyReturnCode)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVINewVersionSameFFFEvent(classe)    TIEENOVINewVersionSameFFFEvent##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVINewVersionSameFFFEvent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVINewVersionSameFFFEvent, classe) \
 \
 \
CATImplementTIEMethods(ENOVINewVersionSameFFFEvent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVINewVersionSameFFFEvent, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVINewVersionSameFFFEvent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVINewVersionSameFFFEvent, classe) \
 \
HRESULT  TIEENOVINewVersionSameFFFEvent##classe::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVINewVersionSameFFFEvent##classe::onBeforeNewVersionSameFFF(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforeNewVersionSameFFF(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVINewVersionSameFFFEvent##classe::onAfterNewVersionSameFFF(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterNewVersionSameFFF(iRaisedEvent,ioNotifyReturnCode)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVINewVersionSameFFFEvent(classe) \
 \
 \
declare_TIE_ENOVINewVersionSameFFFEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVINewVersionSameFFFEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVINewVersionSameFFFEvent,"ENOVINewVersionSameFFFEvent",ENOVINewVersionSameFFFEvent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVINewVersionSameFFFEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVINewVersionSameFFFEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVINewVersionSameFFFEvent##classe(classe::MetaObject(),ENOVINewVersionSameFFFEvent::MetaObject(),(void *)CreateTIEENOVINewVersionSameFFFEvent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVINewVersionSameFFFEvent(classe) \
 \
 \
declare_TIE_ENOVINewVersionSameFFFEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVINewVersionSameFFFEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVINewVersionSameFFFEvent,"ENOVINewVersionSameFFFEvent",ENOVINewVersionSameFFFEvent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVINewVersionSameFFFEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVINewVersionSameFFFEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVINewVersionSameFFFEvent##classe(classe::MetaObject(),ENOVINewVersionSameFFFEvent::MetaObject(),(void *)CreateTIEENOVINewVersionSameFFFEvent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVINewVersionSameFFFEvent(classe) TIE_ENOVINewVersionSameFFFEvent(classe)
#else
#define BOA_ENOVINewVersionSameFFFEvent(classe) CATImplementBOA(ENOVINewVersionSameFFFEvent, classe)
#endif

#endif
