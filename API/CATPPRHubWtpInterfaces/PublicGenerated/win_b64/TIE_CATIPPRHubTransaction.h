#ifndef __TIE_CATIPPRHubTransaction
#define __TIE_CATIPPRHubTransaction

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPPRHubTransaction.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPPRHubTransaction */
#define declare_TIE_CATIPPRHubTransaction(classe) \
 \
 \
class TIECATIPPRHubTransaction##classe : public CATIPPRHubTransaction \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPPRHubTransaction, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Commit() ; \
      virtual HRESULT Rollback() ; \
};



#define ENVTIEdeclare_CATIPPRHubTransaction(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Commit() ; \
virtual HRESULT Rollback() ; \


#define ENVTIEdefine_CATIPPRHubTransaction(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Commit()  \
{ \
return (ENVTIECALL(CATIPPRHubTransaction,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT  ENVTIEName::Rollback()  \
{ \
return (ENVTIECALL(CATIPPRHubTransaction,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPPRHubTransaction(classe)    TIECATIPPRHubTransaction##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPPRHubTransaction(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPPRHubTransaction, classe) \
 \
 \
CATImplementTIEMethods(CATIPPRHubTransaction, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPPRHubTransaction, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPPRHubTransaction, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPPRHubTransaction, classe) \
 \
HRESULT  TIECATIPPRHubTransaction##classe::Commit()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit()); \
} \
HRESULT  TIECATIPPRHubTransaction##classe::Rollback()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPPRHubTransaction(classe) \
 \
 \
declare_TIE_CATIPPRHubTransaction(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPPRHubTransaction##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPPRHubTransaction,"CATIPPRHubTransaction",CATIPPRHubTransaction::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPPRHubTransaction(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPPRHubTransaction, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPPRHubTransaction##classe(classe::MetaObject(),CATIPPRHubTransaction::MetaObject(),(void *)CreateTIECATIPPRHubTransaction##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPPRHubTransaction(classe) \
 \
 \
declare_TIE_CATIPPRHubTransaction(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPPRHubTransaction##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPPRHubTransaction,"CATIPPRHubTransaction",CATIPPRHubTransaction::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPPRHubTransaction(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPPRHubTransaction, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPPRHubTransaction##classe(classe::MetaObject(),CATIPPRHubTransaction::MetaObject(),(void *)CreateTIECATIPPRHubTransaction##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPPRHubTransaction(classe) TIE_CATIPPRHubTransaction(classe)
#else
#define BOA_CATIPPRHubTransaction(classe) CATImplementBOA(CATIPPRHubTransaction, classe)
#endif

#endif
