#ifndef __TIE_ENOVIModifyStructureEvent
#define __TIE_ENOVIModifyStructureEvent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVIModifyStructureEvent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVIModifyStructureEvent */
#define declare_TIE_ENOVIModifyStructureEvent(classe) \
 \
 \
class TIEENOVIModifyStructureEvent##classe : public ENOVIModifyStructureEvent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVIModifyStructureEvent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onBeforeAddChild(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onAfterAddChild(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onBeforeRemoveChild(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onAfterRemoveChild(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
};



#define ENVTIEdeclare_ENOVIModifyStructureEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onBeforeAddChild(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onAfterAddChild(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onBeforeRemoveChild(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onAfterRemoveChild(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \


#define ENVTIEdefine_ENOVIModifyStructureEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIModifyStructureEvent,ENVTIETypeLetter,ENVTIELetter)onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onBeforeAddChild(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIModifyStructureEvent,ENVTIETypeLetter,ENVTIELetter)onBeforeAddChild(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterAddChild(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIModifyStructureEvent,ENVTIETypeLetter,ENVTIELetter)onAfterAddChild(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onBeforeRemoveChild(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIModifyStructureEvent,ENVTIETypeLetter,ENVTIELetter)onBeforeRemoveChild(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterRemoveChild(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVIModifyStructureEvent,ENVTIETypeLetter,ENVTIELetter)onAfterRemoveChild(iRaisedEvent,ioNotifyReturnCode)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVIModifyStructureEvent(classe)    TIEENOVIModifyStructureEvent##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVIModifyStructureEvent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVIModifyStructureEvent, classe) \
 \
 \
CATImplementTIEMethods(ENOVIModifyStructureEvent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVIModifyStructureEvent, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVIModifyStructureEvent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVIModifyStructureEvent, classe) \
 \
HRESULT  TIEENOVIModifyStructureEvent##classe::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIModifyStructureEvent##classe::onBeforeAddChild(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforeAddChild(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIModifyStructureEvent##classe::onAfterAddChild(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterAddChild(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIModifyStructureEvent##classe::onBeforeRemoveChild(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforeRemoveChild(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVIModifyStructureEvent##classe::onAfterRemoveChild(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterRemoveChild(iRaisedEvent,ioNotifyReturnCode)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVIModifyStructureEvent(classe) \
 \
 \
declare_TIE_ENOVIModifyStructureEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIModifyStructureEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIModifyStructureEvent,"ENOVIModifyStructureEvent",ENOVIModifyStructureEvent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIModifyStructureEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVIModifyStructureEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIModifyStructureEvent##classe(classe::MetaObject(),ENOVIModifyStructureEvent::MetaObject(),(void *)CreateTIEENOVIModifyStructureEvent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVIModifyStructureEvent(classe) \
 \
 \
declare_TIE_ENOVIModifyStructureEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIModifyStructureEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIModifyStructureEvent,"ENOVIModifyStructureEvent",ENOVIModifyStructureEvent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIModifyStructureEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVIModifyStructureEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIModifyStructureEvent##classe(classe::MetaObject(),ENOVIModifyStructureEvent::MetaObject(),(void *)CreateTIEENOVIModifyStructureEvent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVIModifyStructureEvent(classe) TIE_ENOVIModifyStructureEvent(classe)
#else
#define BOA_ENOVIModifyStructureEvent(classe) CATImplementBOA(ENOVIModifyStructureEvent, classe)
#endif

#endif
