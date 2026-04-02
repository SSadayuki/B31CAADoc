#ifndef __TIE_CATIVpmLongTransaction
#define __TIE_CATIVpmLongTransaction

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIVpmLongTransaction.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIVpmLongTransaction */
#define declare_TIE_CATIVpmLongTransaction(classe) \
 \
 \
class TIECATIVpmLongTransaction##classe : public CATIVpmLongTransaction \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIVpmLongTransaction, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT onAbort () ; \
      virtual HRESULT onPrepareSave () ; \
      virtual HRESULT onConfirmSave () ; \
      virtual HRESULT onUnconfirmSave () ; \
};



#define ENVTIEdeclare_CATIVpmLongTransaction(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT onAbort () ; \
virtual HRESULT onPrepareSave () ; \
virtual HRESULT onConfirmSave () ; \
virtual HRESULT onUnconfirmSave () ; \


#define ENVTIEdefine_CATIVpmLongTransaction(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::onAbort ()  \
{ \
return (ENVTIECALL(CATIVpmLongTransaction,ENVTIETypeLetter,ENVTIELetter)onAbort ()); \
} \
HRESULT  ENVTIEName::onPrepareSave ()  \
{ \
return (ENVTIECALL(CATIVpmLongTransaction,ENVTIETypeLetter,ENVTIELetter)onPrepareSave ()); \
} \
HRESULT  ENVTIEName::onConfirmSave ()  \
{ \
return (ENVTIECALL(CATIVpmLongTransaction,ENVTIETypeLetter,ENVTIELetter)onConfirmSave ()); \
} \
HRESULT  ENVTIEName::onUnconfirmSave ()  \
{ \
return (ENVTIECALL(CATIVpmLongTransaction,ENVTIETypeLetter,ENVTIELetter)onUnconfirmSave ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIVpmLongTransaction(classe)    TIECATIVpmLongTransaction##classe


/* Common methods inside a TIE */
#define common_TIE_CATIVpmLongTransaction(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIVpmLongTransaction, classe) \
 \
 \
CATImplementTIEMethods(CATIVpmLongTransaction, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIVpmLongTransaction, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIVpmLongTransaction, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIVpmLongTransaction, classe) \
 \
HRESULT  TIECATIVpmLongTransaction##classe::onAbort ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAbort ()); \
} \
HRESULT  TIECATIVpmLongTransaction##classe::onPrepareSave ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onPrepareSave ()); \
} \
HRESULT  TIECATIVpmLongTransaction##classe::onConfirmSave ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onConfirmSave ()); \
} \
HRESULT  TIECATIVpmLongTransaction##classe::onUnconfirmSave ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onUnconfirmSave ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIVpmLongTransaction(classe) \
 \
 \
declare_TIE_CATIVpmLongTransaction(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIVpmLongTransaction##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIVpmLongTransaction,"CATIVpmLongTransaction",CATIVpmLongTransaction::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIVpmLongTransaction(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIVpmLongTransaction, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIVpmLongTransaction##classe(classe::MetaObject(),CATIVpmLongTransaction::MetaObject(),(void *)CreateTIECATIVpmLongTransaction##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIVpmLongTransaction(classe) \
 \
 \
declare_TIE_CATIVpmLongTransaction(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIVpmLongTransaction##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIVpmLongTransaction,"CATIVpmLongTransaction",CATIVpmLongTransaction::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIVpmLongTransaction(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIVpmLongTransaction, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIVpmLongTransaction##classe(classe::MetaObject(),CATIVpmLongTransaction::MetaObject(),(void *)CreateTIECATIVpmLongTransaction##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIVpmLongTransaction(classe) TIE_CATIVpmLongTransaction(classe)
#else
#define BOA_CATIVpmLongTransaction(classe) CATImplementBOA(CATIVpmLongTransaction, classe)
#endif

#endif
