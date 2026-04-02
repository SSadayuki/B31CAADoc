#ifndef __TIE_CATIModelEvents
#define __TIE_CATIModelEvents

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIModelEvents.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIModelEvents */
#define declare_TIE_CATIModelEvents(classe) \
 \
 \
class TIECATIModelEvents##classe : public CATIModelEvents \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIModelEvents, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void Dispatch ( CATNotification & iInfo ) ; \
      virtual CATNotificationDispatcher * GetDispatcher () ; \
      virtual void ConnectTo ( CATBaseUnknown *iChild ) ; \
      virtual void DeconnectFrom ( CATBaseUnknown *iChild ) ; \
      virtual void Receive ( CATNotification & info ) ; \
};



#define ENVTIEdeclare_CATIModelEvents(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void Dispatch ( CATNotification & iInfo ) ; \
virtual CATNotificationDispatcher * GetDispatcher () ; \
virtual void ConnectTo ( CATBaseUnknown *iChild ) ; \
virtual void DeconnectFrom ( CATBaseUnknown *iChild ) ; \
virtual void Receive ( CATNotification & info ) ; \


#define ENVTIEdefine_CATIModelEvents(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void  ENVTIEName::Dispatch ( CATNotification & iInfo )  \
{ \
 (ENVTIECALL(CATIModelEvents,ENVTIETypeLetter,ENVTIELetter)Dispatch (iInfo )); \
} \
CATNotificationDispatcher *  ENVTIEName::GetDispatcher ()  \
{ \
return (ENVTIECALL(CATIModelEvents,ENVTIETypeLetter,ENVTIELetter)GetDispatcher ()); \
} \
void  ENVTIEName::ConnectTo ( CATBaseUnknown *iChild )  \
{ \
 (ENVTIECALL(CATIModelEvents,ENVTIETypeLetter,ENVTIELetter)ConnectTo (iChild )); \
} \
void  ENVTIEName::DeconnectFrom ( CATBaseUnknown *iChild )  \
{ \
 (ENVTIECALL(CATIModelEvents,ENVTIETypeLetter,ENVTIELetter)DeconnectFrom (iChild )); \
} \
void  ENVTIEName::Receive ( CATNotification & info )  \
{ \
 (ENVTIECALL(CATIModelEvents,ENVTIETypeLetter,ENVTIELetter)Receive (info )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIModelEvents(classe)    TIECATIModelEvents##classe


/* Common methods inside a TIE */
#define common_TIE_CATIModelEvents(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIModelEvents, classe) \
 \
 \
CATImplementTIEMethods(CATIModelEvents, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIModelEvents, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIModelEvents, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIModelEvents, classe) \
 \
void  TIECATIModelEvents##classe::Dispatch ( CATNotification & iInfo )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Dispatch (iInfo ); \
} \
CATNotificationDispatcher *  TIECATIModelEvents##classe::GetDispatcher ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDispatcher ()); \
} \
void  TIECATIModelEvents##classe::ConnectTo ( CATBaseUnknown *iChild )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ConnectTo (iChild ); \
} \
void  TIECATIModelEvents##classe::DeconnectFrom ( CATBaseUnknown *iChild )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DeconnectFrom (iChild ); \
} \
void  TIECATIModelEvents##classe::Receive ( CATNotification & info )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Receive (info ); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIModelEvents(classe) \
 \
 \
declare_TIE_CATIModelEvents(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIModelEvents##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIModelEvents,"CATIModelEvents",CATIModelEvents::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIModelEvents(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIModelEvents, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIModelEvents##classe(classe::MetaObject(),CATIModelEvents::MetaObject(),(void *)CreateTIECATIModelEvents##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIModelEvents(classe) \
 \
 \
declare_TIE_CATIModelEvents(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIModelEvents##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIModelEvents,"CATIModelEvents",CATIModelEvents::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIModelEvents(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIModelEvents, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIModelEvents##classe(classe::MetaObject(),CATIModelEvents::MetaObject(),(void *)CreateTIECATIModelEvents##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIModelEvents(classe) TIE_CATIModelEvents(classe)
#else
#define BOA_CATIModelEvents(classe) CATImplementBOA(CATIModelEvents, classe)
#endif

#endif
