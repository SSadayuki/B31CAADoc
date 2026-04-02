#ifndef __TIE_CATIExchangeLogError
#define __TIE_CATIExchangeLogError

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeLogError.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeLogError */
#define declare_TIE_CATIExchangeLogError(classe) \
 \
 \
class TIECATIExchangeLogError##classe : public CATIExchangeLogError \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeLogError, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT InitLogFile(CATUnicodeString& iFilePath) const ; \
      virtual HRESULT PutUnicodeMessage(const CATUnicodeString &iMessage, short iDisplayLevel=4, short iSeverity=2) const ; \
      virtual HRESULT CloseLogFile() const ; \
};



#define ENVTIEdeclare_CATIExchangeLogError(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT InitLogFile(CATUnicodeString& iFilePath) const ; \
virtual HRESULT PutUnicodeMessage(const CATUnicodeString &iMessage, short iDisplayLevel=4, short iSeverity=2) const ; \
virtual HRESULT CloseLogFile() const ; \


#define ENVTIEdefine_CATIExchangeLogError(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::InitLogFile(CATUnicodeString& iFilePath) const  \
{ \
return (ENVTIECALL(CATIExchangeLogError,ENVTIETypeLetter,ENVTIELetter)InitLogFile(iFilePath)); \
} \
HRESULT  ENVTIEName::PutUnicodeMessage(const CATUnicodeString &iMessage, short iDisplayLevel, short iSeverity) const  \
{ \
return (ENVTIECALL(CATIExchangeLogError,ENVTIETypeLetter,ENVTIELetter)PutUnicodeMessage(iMessage,iDisplayLevel,iSeverity)); \
} \
HRESULT  ENVTIEName::CloseLogFile() const  \
{ \
return (ENVTIECALL(CATIExchangeLogError,ENVTIETypeLetter,ENVTIELetter)CloseLogFile()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeLogError(classe)    TIECATIExchangeLogError##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeLogError(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeLogError, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeLogError, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeLogError, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeLogError, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeLogError, classe) \
 \
HRESULT  TIECATIExchangeLogError##classe::InitLogFile(CATUnicodeString& iFilePath) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InitLogFile(iFilePath)); \
} \
HRESULT  TIECATIExchangeLogError##classe::PutUnicodeMessage(const CATUnicodeString &iMessage, short iDisplayLevel, short iSeverity) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PutUnicodeMessage(iMessage,iDisplayLevel,iSeverity)); \
} \
HRESULT  TIECATIExchangeLogError##classe::CloseLogFile() const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CloseLogFile()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeLogError(classe) \
 \
 \
declare_TIE_CATIExchangeLogError(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeLogError##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeLogError,"CATIExchangeLogError",CATIExchangeLogError::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeLogError(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeLogError, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeLogError##classe(classe::MetaObject(),CATIExchangeLogError::MetaObject(),(void *)CreateTIECATIExchangeLogError##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeLogError(classe) \
 \
 \
declare_TIE_CATIExchangeLogError(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeLogError##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeLogError,"CATIExchangeLogError",CATIExchangeLogError::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeLogError(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeLogError, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeLogError##classe(classe::MetaObject(),CATIExchangeLogError::MetaObject(),(void *)CreateTIECATIExchangeLogError##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeLogError(classe) TIE_CATIExchangeLogError(classe)
#else
#define BOA_CATIExchangeLogError(classe) CATImplementBOA(CATIExchangeLogError, classe)
#endif

#endif
