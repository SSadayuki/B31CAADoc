#ifndef __TIE_PLMISecSSOCLogContentProvider
#define __TIE_PLMISecSSOCLogContentProvider

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "PLMISecSSOCLogContentProvider.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface PLMISecSSOCLogContentProvider */
#define declare_TIE_PLMISecSSOCLogContentProvider(classe) \
 \
 \
class TIEPLMISecSSOCLogContentProvider##classe : public PLMISecSSOCLogContentProvider \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(PLMISecSSOCLogContentProvider, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT onAuthenticationSuccess(const CATUnicodeString&  iUsername, CATUnicodeString&  oLogContent ); \
      virtual HRESULT onAuthenticationFailure(const CATUnicodeString&  iUsername, CATUnicodeString&  oLogContent ); \
};



#define ENVTIEdeclare_PLMISecSSOCLogContentProvider(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT onAuthenticationSuccess(const CATUnicodeString&  iUsername, CATUnicodeString&  oLogContent ); \
virtual HRESULT onAuthenticationFailure(const CATUnicodeString&  iUsername, CATUnicodeString&  oLogContent ); \


#define ENVTIEdefine_PLMISecSSOCLogContentProvider(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::onAuthenticationSuccess(const CATUnicodeString&  iUsername, CATUnicodeString&  oLogContent ) \
{ \
return (ENVTIECALL(PLMISecSSOCLogContentProvider,ENVTIETypeLetter,ENVTIELetter)onAuthenticationSuccess(iUsername,oLogContent )); \
} \
HRESULT  ENVTIEName::onAuthenticationFailure(const CATUnicodeString&  iUsername, CATUnicodeString&  oLogContent ) \
{ \
return (ENVTIECALL(PLMISecSSOCLogContentProvider,ENVTIETypeLetter,ENVTIELetter)onAuthenticationFailure(iUsername,oLogContent )); \
} \


/* Name of the TIE class */
#define class_TIE_PLMISecSSOCLogContentProvider(classe)    TIEPLMISecSSOCLogContentProvider##classe


/* Common methods inside a TIE */
#define common_TIE_PLMISecSSOCLogContentProvider(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(PLMISecSSOCLogContentProvider, classe) \
 \
 \
CATImplementTIEMethods(PLMISecSSOCLogContentProvider, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(PLMISecSSOCLogContentProvider, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(PLMISecSSOCLogContentProvider, classe) \
CATImplementCATBaseUnknownMethodsForTIE(PLMISecSSOCLogContentProvider, classe) \
 \
HRESULT  TIEPLMISecSSOCLogContentProvider##classe::onAuthenticationSuccess(const CATUnicodeString&  iUsername, CATUnicodeString&  oLogContent ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAuthenticationSuccess(iUsername,oLogContent )); \
} \
HRESULT  TIEPLMISecSSOCLogContentProvider##classe::onAuthenticationFailure(const CATUnicodeString&  iUsername, CATUnicodeString&  oLogContent ) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->onAuthenticationFailure(iUsername,oLogContent )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_PLMISecSSOCLogContentProvider(classe) \
 \
 \
declare_TIE_PLMISecSSOCLogContentProvider(classe) \
 \
 \
CATMetaClass * __stdcall TIEPLMISecSSOCLogContentProvider##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_PLMISecSSOCLogContentProvider,"PLMISecSSOCLogContentProvider",PLMISecSSOCLogContentProvider::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_PLMISecSSOCLogContentProvider(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(PLMISecSSOCLogContentProvider, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicPLMISecSSOCLogContentProvider##classe(classe::MetaObject(),PLMISecSSOCLogContentProvider::MetaObject(),(void *)CreateTIEPLMISecSSOCLogContentProvider##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_PLMISecSSOCLogContentProvider(classe) \
 \
 \
declare_TIE_PLMISecSSOCLogContentProvider(classe) \
 \
 \
CATMetaClass * __stdcall TIEPLMISecSSOCLogContentProvider##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_PLMISecSSOCLogContentProvider,"PLMISecSSOCLogContentProvider",PLMISecSSOCLogContentProvider::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_PLMISecSSOCLogContentProvider(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(PLMISecSSOCLogContentProvider, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicPLMISecSSOCLogContentProvider##classe(classe::MetaObject(),PLMISecSSOCLogContentProvider::MetaObject(),(void *)CreateTIEPLMISecSSOCLogContentProvider##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_PLMISecSSOCLogContentProvider(classe) TIE_PLMISecSSOCLogContentProvider(classe)
#else
#define BOA_PLMISecSSOCLogContentProvider(classe) CATImplementBOA(PLMISecSSOCLogContentProvider, classe)
#endif

#endif
