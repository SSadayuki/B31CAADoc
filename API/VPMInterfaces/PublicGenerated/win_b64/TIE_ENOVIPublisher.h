#ifndef __TIE_ENOVIPublisher
#define __TIE_ENOVIPublisher

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "ENOVIPublisher.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface ENOVIPublisher */
#define declare_TIE_ENOVIPublisher(classe) \
 \
 \
class TIEENOVIPublisher##classe : public ENOVIPublisher \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(ENOVIPublisher, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetName (CATUnicodeString & oName) ; \
      virtual HRESULT Subscribe (const CATUnicodeString  &           iEventName, const CATBaseUnknown_var&           iCallBackInterface, const IID&                          iIDOfInterface, const ENOVIEvent::VPMEventFireMode& iFireMode , unsigned long*                      oSubscriberCookie, const int&                          iPriority  = 5); \
      virtual HRESULT Subscribe (const CATUnicodeString&             iEventName, const ENOVISubscriberEvent_var&     iSubscriber, const ENOVIEvent::VPMEventFireMode& iFireMode , unsigned long*                      oSubscriberCookie, const int&                          iPriority  = 5); \
      virtual HRESULT Unsubscribe (unsigned long iSubscriberCookie); \
      virtual HRESULT GetSubscribers (const CATUnicodeString             & iEventName, CATListValCATBaseUnknown_var       & oListOfSubscribers, const ENOVIEvent::VPMEventFireMode & iFireMode = ENOVIEvent::EventFireStandard); \
      virtual HRESULT GetListOfRaisableEvents (CATListOfCATUnicodeString & oListOfManagedEvents) ; \
      virtual HRESULT GetObjectInfo (ENOVIObjectInfo_var& oObjectInfo) ; \
};



#define ENVTIEdeclare_ENOVIPublisher(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetName (CATUnicodeString & oName) ; \
virtual HRESULT Subscribe (const CATUnicodeString  &           iEventName, const CATBaseUnknown_var&           iCallBackInterface, const IID&                          iIDOfInterface, const ENOVIEvent::VPMEventFireMode& iFireMode , unsigned long*                      oSubscriberCookie, const int&                          iPriority  = 5); \
virtual HRESULT Subscribe (const CATUnicodeString&             iEventName, const ENOVISubscriberEvent_var&     iSubscriber, const ENOVIEvent::VPMEventFireMode& iFireMode , unsigned long*                      oSubscriberCookie, const int&                          iPriority  = 5); \
virtual HRESULT Unsubscribe (unsigned long iSubscriberCookie); \
virtual HRESULT GetSubscribers (const CATUnicodeString             & iEventName, CATListValCATBaseUnknown_var       & oListOfSubscribers, const ENOVIEvent::VPMEventFireMode & iFireMode = ENOVIEvent::EventFireStandard); \
virtual HRESULT GetListOfRaisableEvents (CATListOfCATUnicodeString & oListOfManagedEvents) ; \
virtual HRESULT GetObjectInfo (ENOVIObjectInfo_var& oObjectInfo) ; \


#define ENVTIEdefine_ENOVIPublisher(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetName (CATUnicodeString & oName)  \
{ \
return (ENVTIECALL(ENOVIPublisher,ENVTIETypeLetter,ENVTIELetter)GetName (oName)); \
} \
HRESULT  ENVTIEName::Subscribe (const CATUnicodeString  &           iEventName, const CATBaseUnknown_var&           iCallBackInterface, const IID&                          iIDOfInterface, const ENOVIEvent::VPMEventFireMode& iFireMode , unsigned long*                      oSubscriberCookie, const int&                          iPriority  ) \
{ \
return (ENVTIECALL(ENOVIPublisher,ENVTIETypeLetter,ENVTIELetter)Subscribe (iEventName,iCallBackInterface,iIDOfInterface,iFireMode ,oSubscriberCookie,iPriority  )); \
} \
HRESULT  ENVTIEName::Subscribe (const CATUnicodeString&             iEventName, const ENOVISubscriberEvent_var&     iSubscriber, const ENOVIEvent::VPMEventFireMode& iFireMode , unsigned long*                      oSubscriberCookie, const int&                          iPriority  ) \
{ \
return (ENVTIECALL(ENOVIPublisher,ENVTIETypeLetter,ENVTIELetter)Subscribe (iEventName,iSubscriber,iFireMode ,oSubscriberCookie,iPriority  )); \
} \
HRESULT  ENVTIEName::Unsubscribe (unsigned long iSubscriberCookie) \
{ \
return (ENVTIECALL(ENOVIPublisher,ENVTIETypeLetter,ENVTIELetter)Unsubscribe (iSubscriberCookie)); \
} \
HRESULT  ENVTIEName::GetSubscribers (const CATUnicodeString             & iEventName, CATListValCATBaseUnknown_var       & oListOfSubscribers, const ENOVIEvent::VPMEventFireMode & iFireMode ) \
{ \
return (ENVTIECALL(ENOVIPublisher,ENVTIETypeLetter,ENVTIELetter)GetSubscribers (iEventName,oListOfSubscribers,iFireMode )); \
} \
HRESULT  ENVTIEName::GetListOfRaisableEvents (CATListOfCATUnicodeString & oListOfManagedEvents)  \
{ \
return (ENVTIECALL(ENOVIPublisher,ENVTIETypeLetter,ENVTIELetter)GetListOfRaisableEvents (oListOfManagedEvents)); \
} \
HRESULT  ENVTIEName::GetObjectInfo (ENOVIObjectInfo_var& oObjectInfo)  \
{ \
return (ENVTIECALL(ENOVIPublisher,ENVTIETypeLetter,ENVTIELetter)GetObjectInfo (oObjectInfo)); \
} \


/* Name of the TIE class */
#define class_TIE_ENOVIPublisher(classe)    TIEENOVIPublisher##classe


/* Common methods inside a TIE */
#define common_TIE_ENOVIPublisher(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(ENOVIPublisher, classe) \
 \
 \
CATImplementTIEMethods(ENOVIPublisher, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(ENOVIPublisher, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(ENOVIPublisher, classe) \
CATImplementCATBaseUnknownMethodsForTIE(ENOVIPublisher, classe) \
 \
HRESULT  TIEENOVIPublisher##classe::GetName (CATUnicodeString & oName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetName (oName)); \
} \
HRESULT  TIEENOVIPublisher##classe::Subscribe (const CATUnicodeString  &           iEventName, const CATBaseUnknown_var&           iCallBackInterface, const IID&                          iIDOfInterface, const ENOVIEvent::VPMEventFireMode& iFireMode , unsigned long*                      oSubscriberCookie, const int&                          iPriority  ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Subscribe (iEventName,iCallBackInterface,iIDOfInterface,iFireMode ,oSubscriberCookie,iPriority  )); \
} \
HRESULT  TIEENOVIPublisher##classe::Subscribe (const CATUnicodeString&             iEventName, const ENOVISubscriberEvent_var&     iSubscriber, const ENOVIEvent::VPMEventFireMode& iFireMode , unsigned long*                      oSubscriberCookie, const int&                          iPriority  ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Subscribe (iEventName,iSubscriber,iFireMode ,oSubscriberCookie,iPriority  )); \
} \
HRESULT  TIEENOVIPublisher##classe::Unsubscribe (unsigned long iSubscriberCookie) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Unsubscribe (iSubscriberCookie)); \
} \
HRESULT  TIEENOVIPublisher##classe::GetSubscribers (const CATUnicodeString             & iEventName, CATListValCATBaseUnknown_var       & oListOfSubscribers, const ENOVIEvent::VPMEventFireMode & iFireMode ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSubscribers (iEventName,oListOfSubscribers,iFireMode )); \
} \
HRESULT  TIEENOVIPublisher##classe::GetListOfRaisableEvents (CATListOfCATUnicodeString & oListOfManagedEvents)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfRaisableEvents (oListOfManagedEvents)); \
} \
HRESULT  TIEENOVIPublisher##classe::GetObjectInfo (ENOVIObjectInfo_var& oObjectInfo)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetObjectInfo (oObjectInfo)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_ENOVIPublisher(classe) \
 \
 \
declare_TIE_ENOVIPublisher(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIPublisher##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIPublisher,"ENOVIPublisher",ENOVIPublisher::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIPublisher(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(ENOVIPublisher, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIPublisher##classe(classe::MetaObject(),ENOVIPublisher::MetaObject(),(void *)CreateTIEENOVIPublisher##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_ENOVIPublisher(classe) \
 \
 \
declare_TIE_ENOVIPublisher(classe) \
 \
 \
CATMetaClass * __stdcall TIEENOVIPublisher##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_ENOVIPublisher,"ENOVIPublisher",ENOVIPublisher::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_ENOVIPublisher(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(ENOVIPublisher, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicENOVIPublisher##classe(classe::MetaObject(),ENOVIPublisher::MetaObject(),(void *)CreateTIEENOVIPublisher##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_ENOVIPublisher(classe) TIE_ENOVIPublisher(classe)
#else
#define BOA_ENOVIPublisher(classe) CATImplementBOA(ENOVIPublisher, classe)
#endif

#endif
