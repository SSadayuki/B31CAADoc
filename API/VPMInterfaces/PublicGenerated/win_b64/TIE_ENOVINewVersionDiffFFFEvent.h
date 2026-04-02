#ifndef __TIE_ENOVINewVersionDiffFFFEvent
#define __TIE_ENOVINewVersionDiffFFFEvent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVINewVersionDiffFFFEvent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVINewVersionDiffFFFEvent */
#define declare_TIE_ENOVINewVersionDiffFFFEvent(classe) \
 \
 \
class TIEENOVINewVersionDiffFFFEvent##classe : public ENOVINewVersionDiffFFFEvent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVINewVersionDiffFFFEvent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onBeforeNewVersionDiffFFF(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
      virtual HRESULT onAfterNewVersionDiffFFF(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
};



#define ENVTIEdeclare_ENOVINewVersionDiffFFFEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onBeforeNewVersionDiffFFF(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \
virtual HRESULT onAfterNewVersionDiffFFF(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode) ; \


#define ENVTIEdefine_ENOVINewVersionDiffFFFEvent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVINewVersionDiffFFFEvent,ENVTIETypeLetter,ENVTIELetter)onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onBeforeNewVersionDiffFFF(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVINewVersionDiffFFFEvent,ENVTIETypeLetter,ENVTIELetter)onBeforeNewVersionDiffFFF(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  ENVTIEName::onAfterNewVersionDiffFFF(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
return (ENVTIECALL(ENOVINewVersionDiffFFFEvent,ENVTIETypeLetter,ENVTIELetter)onAfterNewVersionDiffFFF(iRaisedEvent,ioNotifyReturnCode)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVINewVersionDiffFFFEvent(classe)    TIEENOVINewVersionDiffFFFEvent##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVINewVersionDiffFFFEvent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVINewVersionDiffFFFEvent, classe) \
 \
 \
CATImplementTIEMethods(ENOVINewVersionDiffFFFEvent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVINewVersionDiffFFFEvent, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVINewVersionDiffFFFEvent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVINewVersionDiffFFFEvent, classe) \
 \
HRESULT  TIEENOVINewVersionDiffFFFEvent##classe::onKo (const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onKo (iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVINewVersionDiffFFFEvent##classe::onBeforeNewVersionDiffFFF(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onBeforeNewVersionDiffFFF(iRaisedEvent,ioNotifyReturnCode)); \
} \
HRESULT  TIEENOVINewVersionDiffFFFEvent##classe::onAfterNewVersionDiffFFF(const ENOVIEvent_var& iRaisedEvent, HRESULT& ioNotifyReturnCode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAfterNewVersionDiffFFF(iRaisedEvent,ioNotifyReturnCode)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVINewVersionDiffFFFEvent(classe) \
 \
 \
declare_TIE_ENOVINewVersionDiffFFFEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVINewVersionDiffFFFEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVINewVersionDiffFFFEvent,"ENOVINewVersionDiffFFFEvent",ENOVINewVersionDiffFFFEvent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVINewVersionDiffFFFEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVINewVersionDiffFFFEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVINewVersionDiffFFFEvent##classe(classe::MetaObject(),ENOVINewVersionDiffFFFEvent::MetaObject(),(void *)CreateTIEENOVINewVersionDiffFFFEvent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVINewVersionDiffFFFEvent(classe) \
 \
 \
declare_TIE_ENOVINewVersionDiffFFFEvent(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVINewVersionDiffFFFEvent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVINewVersionDiffFFFEvent,"ENOVINewVersionDiffFFFEvent",ENOVINewVersionDiffFFFEvent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVINewVersionDiffFFFEvent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVINewVersionDiffFFFEvent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVINewVersionDiffFFFEvent##classe(classe::MetaObject(),ENOVINewVersionDiffFFFEvent::MetaObject(),(void *)CreateTIEENOVINewVersionDiffFFFEvent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVINewVersionDiffFFFEvent(classe) TIE_ENOVINewVersionDiffFFFEvent(classe)
#else
#define BOA_ENOVINewVersionDiffFFFEvent(classe) CATImplementBOA(ENOVINewVersionDiffFFFEvent, classe)
#endif

#endif
