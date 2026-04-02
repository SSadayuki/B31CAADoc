#ifndef __TIE_CATIPDMSaveContext
#define __TIE_CATIPDMSaveContext

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPDMSaveContext.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPDMSaveContext */
#define declare_TIE_CATIPDMSaveContext(classe) \
 \
 \
class TIECATIPDMSaveContext##classe : public CATIPDMSaveContext \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPDMSaveContext, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetContext(CATPDMSaveContext & SaveContext) ; \
};



#define ENVTIEdeclare_CATIPDMSaveContext(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetContext(CATPDMSaveContext & SaveContext) ; \


#define ENVTIEdefine_CATIPDMSaveContext(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetContext(CATPDMSaveContext & SaveContext)  \
{ \
return (ENVTIECALL(CATIPDMSaveContext,ENVTIETypeLetter,ENVTIELetter)GetContext(SaveContext)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPDMSaveContext(classe)    TIECATIPDMSaveContext##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPDMSaveContext(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPDMSaveContext, classe) \
 \
 \
CATImplementTIEMethods(CATIPDMSaveContext, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPDMSaveContext, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPDMSaveContext, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPDMSaveContext, classe) \
 \
HRESULT  TIECATIPDMSaveContext##classe::GetContext(CATPDMSaveContext & SaveContext)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetContext(SaveContext)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPDMSaveContext(classe) \
 \
 \
declare_TIE_CATIPDMSaveContext(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMSaveContext##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMSaveContext,"CATIPDMSaveContext",CATIPDMSaveContext::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMSaveContext(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPDMSaveContext, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMSaveContext##classe(classe::MetaObject(),CATIPDMSaveContext::MetaObject(),(void *)CreateTIECATIPDMSaveContext##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPDMSaveContext(classe) \
 \
 \
declare_TIE_CATIPDMSaveContext(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPDMSaveContext##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPDMSaveContext,"CATIPDMSaveContext",CATIPDMSaveContext::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPDMSaveContext(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPDMSaveContext, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPDMSaveContext##classe(classe::MetaObject(),CATIPDMSaveContext::MetaObject(),(void *)CreateTIECATIPDMSaveContext##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPDMSaveContext(classe) TIE_CATIPDMSaveContext(classe)
#else
#define BOA_CATIPDMSaveContext(classe) CATImplementBOA(CATIPDMSaveContext, classe)
#endif

#endif
