#ifndef __TIE_CATIMfgExternalPPDefinition
#define __TIE_CATIMfgExternalPPDefinition

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgExternalPPDefinition.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgExternalPPDefinition */
#define declare_TIE_CATIMfgExternalPPDefinition(classe) \
 \
 \
class TIECATIMfgExternalPPDefinition##classe : public CATIMfgExternalPPDefinition \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgExternalPPDefinition, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetListOfExternalPostProcessorProviders (CATListPV& oListOfPostProcessorProviders) ; \
};



#define ENVTIEdeclare_CATIMfgExternalPPDefinition(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetListOfExternalPostProcessorProviders (CATListPV& oListOfPostProcessorProviders) ; \


#define ENVTIEdefine_CATIMfgExternalPPDefinition(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetListOfExternalPostProcessorProviders (CATListPV& oListOfPostProcessorProviders)  \
{ \
return (ENVTIECALL(CATIMfgExternalPPDefinition,ENVTIETypeLetter,ENVTIELetter)GetListOfExternalPostProcessorProviders (oListOfPostProcessorProviders)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgExternalPPDefinition(classe)    TIECATIMfgExternalPPDefinition##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgExternalPPDefinition(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgExternalPPDefinition, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgExternalPPDefinition, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgExternalPPDefinition, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgExternalPPDefinition, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgExternalPPDefinition, classe) \
 \
HRESULT  TIECATIMfgExternalPPDefinition##classe::GetListOfExternalPostProcessorProviders (CATListPV& oListOfPostProcessorProviders)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfExternalPostProcessorProviders (oListOfPostProcessorProviders)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgExternalPPDefinition(classe) \
 \
 \
declare_TIE_CATIMfgExternalPPDefinition(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgExternalPPDefinition##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgExternalPPDefinition,"CATIMfgExternalPPDefinition",CATIMfgExternalPPDefinition::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgExternalPPDefinition(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgExternalPPDefinition, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgExternalPPDefinition##classe(classe::MetaObject(),CATIMfgExternalPPDefinition::MetaObject(),(void *)CreateTIECATIMfgExternalPPDefinition##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgExternalPPDefinition(classe) \
 \
 \
declare_TIE_CATIMfgExternalPPDefinition(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgExternalPPDefinition##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgExternalPPDefinition,"CATIMfgExternalPPDefinition",CATIMfgExternalPPDefinition::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgExternalPPDefinition(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgExternalPPDefinition, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgExternalPPDefinition##classe(classe::MetaObject(),CATIMfgExternalPPDefinition::MetaObject(),(void *)CreateTIECATIMfgExternalPPDefinition##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgExternalPPDefinition(classe) TIE_CATIMfgExternalPPDefinition(classe)
#else
#define BOA_CATIMfgExternalPPDefinition(classe) CATImplementBOA(CATIMfgExternalPPDefinition, classe)
#endif

#endif
