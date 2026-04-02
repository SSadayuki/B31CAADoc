#ifndef __TIE_ENOVIObjectEvent
#define __TIE_ENOVIObjectEvent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVIObjectEvent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVIObjectEvent */
#define declare_TIE_ENOVIObjectEvent(classe) \
 \
 \
class TIEENOVIObjectEvent##classe : public ENOVIObjectEvent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVIObjectEvent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT onBeforeCreateObject (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
      virtual HRESULT onAfterCreateObject (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
      virtual HRESULT onBeforeDeleteObject (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
      virtual HRESULT onAfterDeleteObject (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
      virtual HRESULT onBeforeSetLock (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
      virtual HRESULT onAfterSetLock (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
      virtual HRESULT onBeforeUnsetLock (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
      virtual HRESULT onAfterUnsetLock (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
      virtual HRESULT onBeforeModifyAttribut (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
      virtual HRESULT onAfterModifyAttribut (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
      virtual HRESULT onBeforeChangeStatus (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
      virtual HRESULT onAfterChangeStatus (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
      virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
};



#define ENVTIEdeclare_ENOVIObjectEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT onBeforeCreateObject (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
virtual HRESULT onAfterCreateObject (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
virtual HRESULT onBeforeDeleteObject (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
virtual HRESULT onAfterDeleteObject (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
virtual HRESULT onBeforeSetLock (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
virtual HRESULT onAfterSetLock (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
virtual HRESULT onBeforeUnsetLock (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
virtual HRESULT onAfterUnsetLock (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
virtual HRESULT onBeforeModifyAttribut (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
virtual HRESULT onAfterModifyAttribut (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
virtual HRESULT onBeforeChangeStatus (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
virtual HRESULT onAfterChangeStatus (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \


#define ENVTIEdefine_ENOVIObjectEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::onBeforeCreateObject (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIObjectEvent,ENVTIETypeLetter,ENVTIELetter)onBeforeCreateObject (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterCreateObject (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIObjectEvent,ENVTIETypeLetter,ENVTIELetter)onAfterCreateObject (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onBeforeDeleteObject (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIObjectEvent,ENVTIETypeLetter,ENVTIELetter)onBeforeDeleteObject (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterDeleteObject (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIObjectEvent,ENVTIETypeLetter,ENVTIELetter)onAfterDeleteObject (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onBeforeSetLock (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIObjectEvent,ENVTIETypeLetter,ENVTIELetter)onBeforeSetLock (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterSetLock (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIObjectEvent,ENVTIETypeLetter,ENVTIELetter)onAfterSetLock (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onBeforeUnsetLock (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIObjectEvent,ENVTIETypeLetter,ENVTIELetter)onBeforeUnsetLock (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterUnsetLock (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIObjectEvent,ENVTIETypeLetter,ENVTIELetter)onAfterUnsetLock (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onBeforeModifyAttribut (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIObjectEvent,ENVTIETypeLetter,ENVTIELetter)onBeforeModifyAttribut (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterModifyAttribut (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIObjectEvent,ENVTIETypeLetter,ENVTIELetter)onAfterModifyAttribut (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onBeforeChangeStatus (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIObjectEvent,ENVTIETypeLetter,ENVTIELetter)onBeforeChangeStatus (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterChangeStatus (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIObjectEvent,ENVTIETypeLetter,ENVTIELetter)onAfterChangeStatus (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIObjectEvent,ENVTIETypeLetter,ENVTIELetter)onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVIObjectEvent(classe)    TIEENOVIObjectEvent##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVIObjectEvent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVIObjectEvent, classe) \
 \
 \
CATImplementTIEMethods(ENOVIObjectEvent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVIObjectEvent, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVIObjectEvent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVIObjectEvent, classe) \
 \
HRESULT  TIEENOVIObjectEvent##classe::onBeforeCreateObject (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforeCreateObject (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIObjectEvent##classe::onAfterCreateObject (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterCreateObject (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIObjectEvent##classe::onBeforeDeleteObject (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforeDeleteObject (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIObjectEvent##classe::onAfterDeleteObject (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterDeleteObject (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIObjectEvent##classe::onBeforeSetLock (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforeSetLock (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIObjectEvent##classe::onAfterSetLock (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterSetLock (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIObjectEvent##classe::onBeforeUnsetLock (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforeUnsetLock (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIObjectEvent##classe::onAfterUnsetLock (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterUnsetLock (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIObjectEvent##classe::onBeforeModifyAttribut (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforeModifyAttribut (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIObjectEvent##classe::onAfterModifyAttribut (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterModifyAttribut (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIObjectEvent##classe::onBeforeChangeStatus (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforeChangeStatus (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIObjectEvent##classe::onAfterChangeStatus (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterChangeStatus (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIObjectEvent##classe::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVIObjectEvent(classe) \
 \
 \
declare_TIE_ENOVIObjectEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIObjectEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIObjectEvent,"ENOVIObjectEvent",ENOVIObjectEvent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIObjectEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVIObjectEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIObjectEvent##classe(classe::MetaObject(),ENOVIObjectEvent::MetaObject(),(void *)CreateTIEENOVIObjectEvent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVIObjectEvent(classe) \
 \
 \
declare_TIE_ENOVIObjectEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIObjectEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIObjectEvent,"ENOVIObjectEvent",ENOVIObjectEvent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIObjectEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVIObjectEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIObjectEvent##classe(classe::MetaObject(),ENOVIObjectEvent::MetaObject(),(void *)CreateTIEENOVIObjectEvent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVIObjectEvent(classe) TIE_ENOVIObjectEvent(classe)
#else
#define BOA_ENOVIObjectEvent(classe) CATImplementBOA(ENOVIObjectEvent, classe)
#endif

#endif
