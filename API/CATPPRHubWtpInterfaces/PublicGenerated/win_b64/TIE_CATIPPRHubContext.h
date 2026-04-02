#ifndef __TIE_CATIPPRHubContext
#define __TIE_CATIPPRHubContext

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPPRHubContext.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPPRHubContext */
#define declare_TIE_CATIPPRHubContext(classe) \
 \
 \
class TIECATIPPRHubContext##classe : public CATIPPRHubContext \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPPRHubContext, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AddWSInContext( CATIPPRHubWorkSpace *iWS ) ; \
      virtual HRESULT CreateTransaction(CATIPPRHubTransaction **oTransac) ; \
};



#define ENVTIEdeclare_CATIPPRHubContext(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AddWSInContext( CATIPPRHubWorkSpace *iWS ) ; \
virtual HRESULT CreateTransaction(CATIPPRHubTransaction **oTransac) ; \


#define ENVTIEdefine_CATIPPRHubContext(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AddWSInContext( CATIPPRHubWorkSpace *iWS )  \
{ \
return (ENVTIECALL(CATIPPRHubContext,ENVTIETypeLetter,ENVTIELetter)AddWSInContext(iWS )); \
} \
HRESULT  ENVTIEName::CreateTransaction(CATIPPRHubTransaction **oTransac)  \
{ \
return (ENVTIECALL(CATIPPRHubContext,ENVTIETypeLetter,ENVTIELetter)CreateTransaction(oTransac)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPPRHubContext(classe)    TIECATIPPRHubContext##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPPRHubContext(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPPRHubContext, classe) \
 \
 \
CATImplementTIEMethods(CATIPPRHubContext, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPPRHubContext, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPPRHubContext, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPPRHubContext, classe) \
 \
HRESULT  TIECATIPPRHubContext##classe::AddWSInContext( CATIPPRHubWorkSpace *iWS )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddWSInContext(iWS )); \
} \
HRESULT  TIECATIPPRHubContext##classe::CreateTransaction(CATIPPRHubTransaction **oTransac)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateTransaction(oTransac)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPPRHubContext(classe) \
 \
 \
declare_TIE_CATIPPRHubContext(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPPRHubContext##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPPRHubContext,"CATIPPRHubContext",CATIPPRHubContext::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPPRHubContext(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPPRHubContext, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPPRHubContext##classe(classe::MetaObject(),CATIPPRHubContext::MetaObject(),(void *)CreateTIECATIPPRHubContext##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPPRHubContext(classe) \
 \
 \
declare_TIE_CATIPPRHubContext(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPPRHubContext##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPPRHubContext,"CATIPPRHubContext",CATIPPRHubContext::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPPRHubContext(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPPRHubContext, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPPRHubContext##classe(classe::MetaObject(),CATIPPRHubContext::MetaObject(),(void *)CreateTIECATIPPRHubContext##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPPRHubContext(classe) TIE_CATIPPRHubContext(classe)
#else
#define BOA_CATIPPRHubContext(classe) CATImplementBOA(CATIPPRHubContext, classe)
#endif

#endif
