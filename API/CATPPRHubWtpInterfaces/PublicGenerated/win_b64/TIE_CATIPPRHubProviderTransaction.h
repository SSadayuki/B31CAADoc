#ifndef __TIE_CATIPPRHubProviderTransaction
#define __TIE_CATIPPRHubProviderTransaction

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPPRHubProviderTransaction.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPPRHubProviderTransaction */
#define declare_TIE_CATIPPRHubProviderTransaction(classe) \
 \
 \
class TIECATIPPRHubProviderTransaction##classe : public CATIPPRHubProviderTransaction \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPPRHubProviderTransaction, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Commit() ; \
      virtual HRESULT Rollback() ; \
};



#define ENVTIEdeclare_CATIPPRHubProviderTransaction(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Commit() ; \
virtual HRESULT Rollback() ; \


#define ENVTIEdefine_CATIPPRHubProviderTransaction(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Commit()  \
{ \
return (ENVTIECALL(CATIPPRHubProviderTransaction,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT  ENVTIEName::Rollback()  \
{ \
return (ENVTIECALL(CATIPPRHubProviderTransaction,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPPRHubProviderTransaction(classe)    TIECATIPPRHubProviderTransaction##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPPRHubProviderTransaction(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPPRHubProviderTransaction, classe) \
 \
 \
CATImplementTIEMethods(CATIPPRHubProviderTransaction, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPPRHubProviderTransaction, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPPRHubProviderTransaction, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPPRHubProviderTransaction, classe) \
 \
HRESULT  TIECATIPPRHubProviderTransaction##classe::Commit()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit()); \
} \
HRESULT  TIECATIPPRHubProviderTransaction##classe::Rollback()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPPRHubProviderTransaction(classe) \
 \
 \
declare_TIE_CATIPPRHubProviderTransaction(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPPRHubProviderTransaction##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPPRHubProviderTransaction,"CATIPPRHubProviderTransaction",CATIPPRHubProviderTransaction::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPPRHubProviderTransaction(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPPRHubProviderTransaction, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPPRHubProviderTransaction##classe(classe::MetaObject(),CATIPPRHubProviderTransaction::MetaObject(),(void *)CreateTIECATIPPRHubProviderTransaction##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPPRHubProviderTransaction(classe) \
 \
 \
declare_TIE_CATIPPRHubProviderTransaction(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPPRHubProviderTransaction##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPPRHubProviderTransaction,"CATIPPRHubProviderTransaction",CATIPPRHubProviderTransaction::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPPRHubProviderTransaction(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPPRHubProviderTransaction, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPPRHubProviderTransaction##classe(classe::MetaObject(),CATIPPRHubProviderTransaction::MetaObject(),(void *)CreateTIECATIPPRHubProviderTransaction##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPPRHubProviderTransaction(classe) TIE_CATIPPRHubProviderTransaction(classe)
#else
#define BOA_CATIPPRHubProviderTransaction(classe) CATImplementBOA(CATIPPRHubProviderTransaction, classe)
#endif

#endif
