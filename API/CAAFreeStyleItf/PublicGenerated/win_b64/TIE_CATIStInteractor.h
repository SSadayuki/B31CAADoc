#ifndef __TIE_CATIStInteractor
#define __TIE_CATIStInteractor

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIStInteractor.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIStInteractor */
#define declare_TIE_CATIStInteractor(classe) \
 \
 \
class TIECATIStInteractor##classe : public CATIStInteractor \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIStInteractor, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT CleanDependencies() ; \
      virtual HRESULT Enable(CATCommand      * iFromClient, CATNotification * iNotification) ; \
      virtual HRESULT Disable(CATCommand      * iFromClient, CATNotification * iNotification) ; \
      virtual HRESULT SetShowMode(const CATBoolean iShowMode) ; \
      virtual HRESULT SetRefreshMethod(const CATISpecObject_var & iSpecModel, CATIStRefresh_var  & iRefreshMethod) ; \
};



#define ENVTIEdeclare_CATIStInteractor(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT CleanDependencies() ; \
virtual HRESULT Enable(CATCommand      * iFromClient, CATNotification * iNotification) ; \
virtual HRESULT Disable(CATCommand      * iFromClient, CATNotification * iNotification) ; \
virtual HRESULT SetShowMode(const CATBoolean iShowMode) ; \
virtual HRESULT SetRefreshMethod(const CATISpecObject_var & iSpecModel, CATIStRefresh_var  & iRefreshMethod) ; \


#define ENVTIEdefine_CATIStInteractor(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::CleanDependencies()  \
{ \
return (ENVTIECALL(CATIStInteractor,ENVTIETypeLetter,ENVTIELetter)CleanDependencies()); \
} \
HRESULT  ENVTIEName::Enable(CATCommand      * iFromClient, CATNotification * iNotification)  \
{ \
return (ENVTIECALL(CATIStInteractor,ENVTIETypeLetter,ENVTIELetter)Enable(iFromClient,iNotification)); \
} \
HRESULT  ENVTIEName::Disable(CATCommand      * iFromClient, CATNotification * iNotification)  \
{ \
return (ENVTIECALL(CATIStInteractor,ENVTIETypeLetter,ENVTIELetter)Disable(iFromClient,iNotification)); \
} \
HRESULT  ENVTIEName::SetShowMode(const CATBoolean iShowMode)  \
{ \
return (ENVTIECALL(CATIStInteractor,ENVTIETypeLetter,ENVTIELetter)SetShowMode(iShowMode)); \
} \
HRESULT  ENVTIEName::SetRefreshMethod(const CATISpecObject_var & iSpecModel, CATIStRefresh_var  & iRefreshMethod)  \
{ \
return (ENVTIECALL(CATIStInteractor,ENVTIETypeLetter,ENVTIELetter)SetRefreshMethod(iSpecModel,iRefreshMethod)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIStInteractor(classe)    TIECATIStInteractor##classe


/* Common methods inside a TIE */
#define common_TIE_CATIStInteractor(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIStInteractor, classe) \
 \
 \
CATImplementTIEMethods(CATIStInteractor, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIStInteractor, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIStInteractor, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIStInteractor, classe) \
 \
HRESULT  TIECATIStInteractor##classe::CleanDependencies()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CleanDependencies()); \
} \
HRESULT  TIECATIStInteractor##classe::Enable(CATCommand      * iFromClient, CATNotification * iNotification)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Enable(iFromClient,iNotification)); \
} \
HRESULT  TIECATIStInteractor##classe::Disable(CATCommand      * iFromClient, CATNotification * iNotification)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Disable(iFromClient,iNotification)); \
} \
HRESULT  TIECATIStInteractor##classe::SetShowMode(const CATBoolean iShowMode)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetShowMode(iShowMode)); \
} \
HRESULT  TIECATIStInteractor##classe::SetRefreshMethod(const CATISpecObject_var & iSpecModel, CATIStRefresh_var  & iRefreshMethod)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRefreshMethod(iSpecModel,iRefreshMethod)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIStInteractor(classe) \
 \
 \
declare_TIE_CATIStInteractor(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIStInteractor##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIStInteractor,"CATIStInteractor",CATIStInteractor::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIStInteractor(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIStInteractor, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIStInteractor##classe(classe::MetaObject(),CATIStInteractor::MetaObject(),(void *)CreateTIECATIStInteractor##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIStInteractor(classe) \
 \
 \
declare_TIE_CATIStInteractor(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIStInteractor##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIStInteractor,"CATIStInteractor",CATIStInteractor::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIStInteractor(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIStInteractor, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIStInteractor##classe(classe::MetaObject(),CATIStInteractor::MetaObject(),(void *)CreateTIECATIStInteractor##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIStInteractor(classe) TIE_CATIStInteractor(classe)
#else
#define BOA_CATIStInteractor(classe) CATImplementBOA(CATIStInteractor, classe)
#endif

#endif
