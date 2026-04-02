#ifndef __TIE_ENOVIChangeOwnerEvent
#define __TIE_ENOVIChangeOwnerEvent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVIChangeOwnerEvent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVIChangeOwnerEvent */
#define declare_TIE_ENOVIChangeOwnerEvent(classe) \
 \
 \
class TIEENOVIChangeOwnerEvent##classe : public ENOVIChangeOwnerEvent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVIChangeOwnerEvent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
      virtual HRESULT onBeforeChangeOwner (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
      virtual HRESULT onAfterChangeOwner (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
};



#define ENVTIEdeclare_ENOVIChangeOwnerEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
virtual HRESULT onBeforeChangeOwner (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \
virtual HRESULT onAfterChangeOwner (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode) ; \


#define ENVTIEdefine_ENOVIChangeOwnerEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIChangeOwnerEvent,ENVTIETypeLetter,ENVTIELetter)onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onBeforeChangeOwner (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIChangeOwnerEvent,ENVTIETypeLetter,ENVTIELetter)onBeforeChangeOwner (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterChangeOwner (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIChangeOwnerEvent,ENVTIETypeLetter,ENVTIELetter)onAfterChangeOwner (iRaisedEvent,ioNotifyReturnCode)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVIChangeOwnerEvent(classe)    TIEENOVIChangeOwnerEvent##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVIChangeOwnerEvent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVIChangeOwnerEvent, classe) \
 \
 \
CATImplementTIEMethods(ENOVIChangeOwnerEvent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVIChangeOwnerEvent, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVIChangeOwnerEvent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVIChangeOwnerEvent, classe) \
 \
HRESULT  TIEENOVIChangeOwnerEvent##classe::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIChangeOwnerEvent##classe::onBeforeChangeOwner (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforeChangeOwner (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIChangeOwnerEvent##classe::onAfterChangeOwner (const ENOVIEvent_var& iRaisedEvent, HRESULT&              ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterChangeOwner (iRaisedEvent,ioNotifyReturnCode)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVIChangeOwnerEvent(classe) \
 \
 \
declare_TIE_ENOVIChangeOwnerEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIChangeOwnerEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIChangeOwnerEvent,"ENOVIChangeOwnerEvent",ENOVIChangeOwnerEvent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIChangeOwnerEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVIChangeOwnerEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIChangeOwnerEvent##classe(classe::MetaObject(),ENOVIChangeOwnerEvent::MetaObject(),(void *)CreateTIEENOVIChangeOwnerEvent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVIChangeOwnerEvent(classe) \
 \
 \
declare_TIE_ENOVIChangeOwnerEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIChangeOwnerEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIChangeOwnerEvent,"ENOVIChangeOwnerEvent",ENOVIChangeOwnerEvent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIChangeOwnerEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVIChangeOwnerEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIChangeOwnerEvent##classe(classe::MetaObject(),ENOVIChangeOwnerEvent::MetaObject(),(void *)CreateTIEENOVIChangeOwnerEvent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVIChangeOwnerEvent(classe) TIE_ENOVIChangeOwnerEvent(classe)
#else
#define BOA_ENOVIChangeOwnerEvent(classe) CATImplementBOA(ENOVIChangeOwnerEvent, classe)
#endif

#endif
