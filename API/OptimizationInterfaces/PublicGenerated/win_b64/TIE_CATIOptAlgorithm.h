#ifndef __TIE_CATIOptAlgorithm
#define __TIE_CATIOptAlgorithm

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIOptAlgorithm.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIOptAlgorithm */
#define declare_TIE_CATIOptAlgorithm(classe) \
 \
 \
class TIECATIOptAlgorithm##classe : public CATIOptAlgorithm \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIOptAlgorithm, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Run(CATIOptOptimization_var &iOptim) ; \
      virtual HRESULT CheckCompatibility(CATIOptOptimization_var &iOptim) ; \
      virtual HRESULT SetSetting(const char* iAttrName, double iContent) ; \
      virtual HRESULT GetSetting(const char* iAttrName, double &oContent) ; \
      virtual CATCallbackEvent GetEndIterationNotification() const ; \
      virtual HRESULT GetBestResultIndex(int& oBestResultIndex) const ; \
      virtual CATUnicodeString AllHistoricToString() ; \
      virtual CATUnicodeString OneHistoricToString(int iHistoricIndex) ; \
      virtual CATCallback AddSubscription( CATInterfaceEvents  *eventManager, CATCallbackEvent     event, CATSubscriberMethod  method, char                *interfaceID, CATSubscriberData    data = 0  ) ; \
      virtual void RemoveSubscriptionsOn( CATInterfaceEvents *eventManager, CATCallbackEvent    event, char               *interfaceID, CATSubscriberData   data  ) ; \
      virtual void RemoveInterfaceSubscriptions( CATInterfaceEvents *eventManager , char               *interfaceID ) ; \
      virtual CATCallbackManager *GetCallbackManager() ; \
};



#define ENVTIEdeclare_CATIOptAlgorithm(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Run(CATIOptOptimization_var &iOptim) ; \
virtual HRESULT CheckCompatibility(CATIOptOptimization_var &iOptim) ; \
virtual HRESULT SetSetting(const char* iAttrName, double iContent) ; \
virtual HRESULT GetSetting(const char* iAttrName, double &oContent) ; \
virtual CATCallbackEvent GetEndIterationNotification() const ; \
virtual HRESULT GetBestResultIndex(int& oBestResultIndex) const ; \
virtual CATUnicodeString AllHistoricToString() ; \
virtual CATUnicodeString OneHistoricToString(int iHistoricIndex) ; \
virtual CATCallback AddSubscription( CATInterfaceEvents  *eventManager, CATCallbackEvent     event, CATSubscriberMethod  method, char                *interfaceID, CATSubscriberData    data = 0  ) ; \
virtual void RemoveSubscriptionsOn( CATInterfaceEvents *eventManager, CATCallbackEvent    event, char               *interfaceID, CATSubscriberData   data  ) ; \
virtual void RemoveInterfaceSubscriptions( CATInterfaceEvents *eventManager , char               *interfaceID ) ; \
virtual CATCallbackManager *GetCallbackManager() ; \


#define ENVTIEdefine_CATIOptAlgorithm(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Run(CATIOptOptimization_var &iOptim)  \
{ \
return (ENVTIECALL(CATIOptAlgorithm,ENVTIETypeLetter,ENVTIELetter)Run(iOptim)); \
} \
HRESULT  ENVTIEName::CheckCompatibility(CATIOptOptimization_var &iOptim)  \
{ \
return (ENVTIECALL(CATIOptAlgorithm,ENVTIETypeLetter,ENVTIELetter)CheckCompatibility(iOptim)); \
} \
HRESULT  ENVTIEName::SetSetting(const char* iAttrName, double iContent)  \
{ \
return (ENVTIECALL(CATIOptAlgorithm,ENVTIETypeLetter,ENVTIELetter)SetSetting(iAttrName,iContent)); \
} \
HRESULT  ENVTIEName::GetSetting(const char* iAttrName, double &oContent)  \
{ \
return (ENVTIECALL(CATIOptAlgorithm,ENVTIETypeLetter,ENVTIELetter)GetSetting(iAttrName,oContent)); \
} \
CATCallbackEvent  ENVTIEName::GetEndIterationNotification() const  \
{ \
return (ENVTIECALL(CATIOptAlgorithm,ENVTIETypeLetter,ENVTIELetter)GetEndIterationNotification()); \
} \
HRESULT  ENVTIEName::GetBestResultIndex(int& oBestResultIndex) const  \
{ \
return (ENVTIECALL(CATIOptAlgorithm,ENVTIETypeLetter,ENVTIELetter)GetBestResultIndex(oBestResultIndex)); \
} \
CATUnicodeString  ENVTIEName::AllHistoricToString()  \
{ \
return (ENVTIECALL(CATIOptAlgorithm,ENVTIETypeLetter,ENVTIELetter)AllHistoricToString()); \
} \
CATUnicodeString  ENVTIEName::OneHistoricToString(int iHistoricIndex)  \
{ \
return (ENVTIECALL(CATIOptAlgorithm,ENVTIETypeLetter,ENVTIELetter)OneHistoricToString(iHistoricIndex)); \
} \
CATCallback  ENVTIEName::AddSubscription( CATInterfaceEvents  *eventManager, CATCallbackEvent     event, CATSubscriberMethod  method, char                *interfaceID, CATSubscriberData    data )  \
{ \
return (ENVTIECALL(CATIOptAlgorithm,ENVTIETypeLetter,ENVTIELetter)AddSubscription(eventManager,event,method,interfaceID,data )); \
} \
void  ENVTIEName::RemoveSubscriptionsOn( CATInterfaceEvents *eventManager, CATCallbackEvent    event, char               *interfaceID, CATSubscriberData   data  )  \
{ \
 (ENVTIECALL(CATIOptAlgorithm,ENVTIETypeLetter,ENVTIELetter)RemoveSubscriptionsOn(eventManager,event,interfaceID,data  )); \
} \
void  ENVTIEName::RemoveInterfaceSubscriptions( CATInterfaceEvents *eventManager , char               *interfaceID )  \
{ \
 (ENVTIECALL(CATIOptAlgorithm,ENVTIETypeLetter,ENVTIELetter)RemoveInterfaceSubscriptions(eventManager ,interfaceID )); \
} \
CATCallbackManager * ENVTIEName::GetCallbackManager()  \
{ \
return (ENVTIECALL(CATIOptAlgorithm,ENVTIETypeLetter,ENVTIELetter)GetCallbackManager()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIOptAlgorithm(classe)    TIECATIOptAlgorithm##classe


/* Common methods inside a TIE */
#define common_TIE_CATIOptAlgorithm(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIOptAlgorithm, classe) \
 \
 \
CATImplementTIEMethods(CATIOptAlgorithm, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIOptAlgorithm, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIOptAlgorithm, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIOptAlgorithm, classe) \
 \
HRESULT  TIECATIOptAlgorithm##classe::Run(CATIOptOptimization_var &iOptim)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Run(iOptim)); \
} \
HRESULT  TIECATIOptAlgorithm##classe::CheckCompatibility(CATIOptOptimization_var &iOptim)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CheckCompatibility(iOptim)); \
} \
HRESULT  TIECATIOptAlgorithm##classe::SetSetting(const char* iAttrName, double iContent)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSetting(iAttrName,iContent)); \
} \
HRESULT  TIECATIOptAlgorithm##classe::GetSetting(const char* iAttrName, double &oContent)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSetting(iAttrName,oContent)); \
} \
CATCallbackEvent  TIECATIOptAlgorithm##classe::GetEndIterationNotification() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEndIterationNotification()); \
} \
HRESULT  TIECATIOptAlgorithm##classe::GetBestResultIndex(int& oBestResultIndex) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBestResultIndex(oBestResultIndex)); \
} \
CATUnicodeString  TIECATIOptAlgorithm##classe::AllHistoricToString()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AllHistoricToString()); \
} \
CATUnicodeString  TIECATIOptAlgorithm##classe::OneHistoricToString(int iHistoricIndex)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->OneHistoricToString(iHistoricIndex)); \
} \
CATCallback  TIECATIOptAlgorithm##classe::AddSubscription( CATInterfaceEvents  *eventManager, CATCallbackEvent     event, CATSubscriberMethod  method, char                *interfaceID, CATSubscriberData    data )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddSubscription(eventManager,event,method,interfaceID,data )); \
} \
void  TIECATIOptAlgorithm##classe::RemoveSubscriptionsOn( CATInterfaceEvents *eventManager, CATCallbackEvent    event, char               *interfaceID, CATSubscriberData   data  )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveSubscriptionsOn(eventManager,event,interfaceID,data  ); \
} \
void  TIECATIOptAlgorithm##classe::RemoveInterfaceSubscriptions( CATInterfaceEvents *eventManager , char               *interfaceID )  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveInterfaceSubscriptions(eventManager ,interfaceID ); \
} \
CATCallbackManager * TIECATIOptAlgorithm##classe::GetCallbackManager()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCallbackManager()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIOptAlgorithm(classe) \
 \
 \
declare_TIE_CATIOptAlgorithm(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIOptAlgorithm##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIOptAlgorithm,"CATIOptAlgorithm",CATIOptAlgorithm::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIOptAlgorithm(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIOptAlgorithm, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIOptAlgorithm##classe(classe::MetaObject(),CATIOptAlgorithm::MetaObject(),(void *)CreateTIECATIOptAlgorithm##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIOptAlgorithm(classe) \
 \
 \
declare_TIE_CATIOptAlgorithm(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIOptAlgorithm##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIOptAlgorithm,"CATIOptAlgorithm",CATIOptAlgorithm::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIOptAlgorithm(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIOptAlgorithm, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIOptAlgorithm##classe(classe::MetaObject(),CATIOptAlgorithm::MetaObject(),(void *)CreateTIECATIOptAlgorithm##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIOptAlgorithm(classe) TIE_CATIOptAlgorithm(classe)
#else
#define BOA_CATIOptAlgorithm(classe) CATImplementBOA(CATIOptAlgorithm, classe)
#endif

#endif
