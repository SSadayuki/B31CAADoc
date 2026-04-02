#ifndef __TIE_CATInterfaceEvents
#define __TIE_CATInterfaceEvents

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATInterfaceEvents.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATInterfaceEvents */
#define declare_TIE_CATInterfaceEvents(classe) \
 \
 \
class TIECATInterfaceEvents##classe : public CATInterfaceEvents \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATInterfaceEvents, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATCallback AddSubscription( CATInterfaceEvents  *eventManager, CATCallbackEvent     event, CATSubscriberMethod  method, char                *interfaceID, CATSubscriberData    data = 0  ) ; \
      virtual void RemoveSubscriptionsOn( CATInterfaceEvents *eventManager, CATCallbackEvent    event, char               *interfaceID, CATSubscriberData   data  ) ; \
      virtual void RemoveInterfaceSubscriptions( CATInterfaceEvents *eventManager , char               *interfaceID ) ; \
      virtual CATCallbackManager *GetCallbackManager() ; \
};



#define ENVTIEdeclare_CATInterfaceEvents(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATCallback AddSubscription( CATInterfaceEvents  *eventManager, CATCallbackEvent     event, CATSubscriberMethod  method, char                *interfaceID, CATSubscriberData    data = 0  ) ; \
virtual void RemoveSubscriptionsOn( CATInterfaceEvents *eventManager, CATCallbackEvent    event, char               *interfaceID, CATSubscriberData   data  ) ; \
virtual void RemoveInterfaceSubscriptions( CATInterfaceEvents *eventManager , char               *interfaceID ) ; \
virtual CATCallbackManager *GetCallbackManager() ; \


#define ENVTIEdefine_CATInterfaceEvents(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATCallback  ENVTIEName::AddSubscription( CATInterfaceEvents  *eventManager, CATCallbackEvent     event, CATSubscriberMethod  method, char                *interfaceID, CATSubscriberData    data )  \
{ \
return (ENVTIECALL(CATInterfaceEvents,ENVTIETypeLetter,ENVTIELetter)AddSubscription(eventManager,event,method,interfaceID,data )); \
} \
void  ENVTIEName::RemoveSubscriptionsOn( CATInterfaceEvents *eventManager, CATCallbackEvent    event, char               *interfaceID, CATSubscriberData   data  )  \
{ \
 (ENVTIECALL(CATInterfaceEvents,ENVTIETypeLetter,ENVTIELetter)RemoveSubscriptionsOn(eventManager,event,interfaceID,data  )); \
} \
void  ENVTIEName::RemoveInterfaceSubscriptions( CATInterfaceEvents *eventManager , char               *interfaceID )  \
{ \
 (ENVTIECALL(CATInterfaceEvents,ENVTIETypeLetter,ENVTIELetter)RemoveInterfaceSubscriptions(eventManager ,interfaceID )); \
} \
CATCallbackManager * ENVTIEName::GetCallbackManager()  \
{ \
return (ENVTIECALL(CATInterfaceEvents,ENVTIETypeLetter,ENVTIELetter)GetCallbackManager()); \
} \


/* Name of the TIE class */
#define class_TIE_CATInterfaceEvents(classe)    TIECATInterfaceEvents##classe


/* Common methods inside a TIE */
#define common_TIE_CATInterfaceEvents(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATInterfaceEvents, classe) \
 \
 \
CATImplementTIEMethods(CATInterfaceEvents, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATInterfaceEvents, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATInterfaceEvents, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATInterfaceEvents, classe) \
 \
CATCallback  TIECATInterfaceEvents##classe::AddSubscription( CATInterfaceEvents  *eventManager, CATCallbackEvent     event, CATSubscriberMethod  method, char                *interfaceID, CATSubscriberData    data )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddSubscription(eventManager,event,method,interfaceID,data )); \
} \
void  TIECATInterfaceEvents##classe::RemoveSubscriptionsOn( CATInterfaceEvents *eventManager, CATCallbackEvent    event, char               *interfaceID, CATSubscriberData   data  )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveSubscriptionsOn(eventManager,event,interfaceID,data  ); \
} \
void  TIECATInterfaceEvents##classe::RemoveInterfaceSubscriptions( CATInterfaceEvents *eventManager , char               *interfaceID )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveInterfaceSubscriptions(eventManager ,interfaceID ); \
} \
CATCallbackManager * TIECATInterfaceEvents##classe::GetCallbackManager()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCallbackManager()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATInterfaceEvents(classe) \
 \
 \
declare_TIE_CATInterfaceEvents(classe) \
 \
 \
CATMetaClass * __stdcall TIECATInterfaceEvents##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATInterfaceEvents,"CATInterfaceEvents",CATInterfaceEvents::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATInterfaceEvents(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATInterfaceEvents, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATInterfaceEvents##classe(classe::MetaObject(),CATInterfaceEvents::MetaObject(),(void *)CreateTIECATInterfaceEvents##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATInterfaceEvents(classe) \
 \
 \
declare_TIE_CATInterfaceEvents(classe) \
 \
 \
CATMetaClass * __stdcall TIECATInterfaceEvents##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATInterfaceEvents,"CATInterfaceEvents",CATInterfaceEvents::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATInterfaceEvents(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATInterfaceEvents, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATInterfaceEvents##classe(classe::MetaObject(),CATInterfaceEvents::MetaObject(),(void *)CreateTIECATInterfaceEvents##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATInterfaceEvents(classe) TIE_CATInterfaceEvents(classe)
#else
#define BOA_CATInterfaceEvents(classe) CATImplementBOA(CATInterfaceEvents, classe)
#endif

#endif
