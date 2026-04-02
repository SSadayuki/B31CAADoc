#ifndef __TIE_CATISamEditionCusto
#define __TIE_CATISamEditionCusto

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamEditionCusto.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamEditionCusto */
#define declare_TIE_CATISamEditionCusto(classe) \
 \
 \
class TIECATISamEditionCusto##classe : public CATISamEditionCusto \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamEditionCusto, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATBoolean AllowApply()  ; \
      virtual HRESULT ActionPanel(CATSamTypeActionPanel iTypeAction) ; \
};



#define ENVTIEdeclare_CATISamEditionCusto(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATBoolean AllowApply()  ; \
virtual HRESULT ActionPanel(CATSamTypeActionPanel iTypeAction) ; \


#define ENVTIEdefine_CATISamEditionCusto(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATBoolean  ENVTIEName::AllowApply()   \
{ \
return (ENVTIECALL(CATISamEditionCusto,ENVTIETypeLetter,ENVTIELetter)AllowApply()); \
} \
HRESULT  ENVTIEName::ActionPanel(CATSamTypeActionPanel iTypeAction)  \
{ \
return (ENVTIECALL(CATISamEditionCusto,ENVTIETypeLetter,ENVTIELetter)ActionPanel(iTypeAction)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamEditionCusto(classe)    TIECATISamEditionCusto##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamEditionCusto(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamEditionCusto, classe) \
 \
 \
CATImplementTIEMethods(CATISamEditionCusto, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamEditionCusto, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamEditionCusto, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamEditionCusto, classe) \
 \
CATBoolean  TIECATISamEditionCusto##classe::AllowApply()   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AllowApply()); \
} \
HRESULT  TIECATISamEditionCusto##classe::ActionPanel(CATSamTypeActionPanel iTypeAction)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ActionPanel(iTypeAction)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamEditionCusto(classe) \
 \
 \
declare_TIE_CATISamEditionCusto(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamEditionCusto##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamEditionCusto,"CATISamEditionCusto",CATISamEditionCusto::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamEditionCusto(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamEditionCusto, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamEditionCusto##classe(classe::MetaObject(),CATISamEditionCusto::MetaObject(),(void *)CreateTIECATISamEditionCusto##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamEditionCusto(classe) \
 \
 \
declare_TIE_CATISamEditionCusto(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamEditionCusto##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamEditionCusto,"CATISamEditionCusto",CATISamEditionCusto::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamEditionCusto(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamEditionCusto, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamEditionCusto##classe(classe::MetaObject(),CATISamEditionCusto::MetaObject(),(void *)CreateTIECATISamEditionCusto##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamEditionCusto(classe) TIE_CATISamEditionCusto(classe)
#else
#define BOA_CATISamEditionCusto(classe) CATImplementBOA(CATISamEditionCusto, classe)
#endif

#endif
