#ifndef __TIE_CATICfgUEValidateEff
#define __TIE_CATICfgUEValidateEff

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICfgUEValidateEff.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICfgUEValidateEff */
#define declare_TIE_CATICfgUEValidateEff(classe) \
 \
 \
class TIECATICfgUEValidateEff##classe : public CATICfgUEValidateEff \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICfgUEValidateEff, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ValidateEffectivity(const CATICfgNormalValue_var& iObject, const CATUnicodeString& iDomain, const CATUnicodeString& iModName, const CATIConfigurableObject_var iCV) ; \
      virtual HRESULT ValidateEffectivity(const CATICfgORExpression_var& iObject, const CATUnicodeString& iDomain, const CATUnicodeString& iModName, const CATIConfigurableObject_var iCV) ; \
      virtual HRESULT ValidateEffectivity(const CATICfgBasicEffectivity_var& iObject, const CATUnicodeString& iDomain, const CATUnicodeString& iModName, const CATIConfigurableObject_var iCV) ; \
      virtual HRESULT ValidateEffectivity(const CATListOfCATILinkableObject& iObjects, const CATICfgBasicEffectivity_var& iObject, const CATUnicodeString& iDomain, const CATUnicodeString& iModName, const CATIConfigurableObject_var iCV) ; \
};



#define ENVTIEdeclare_CATICfgUEValidateEff(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ValidateEffectivity(const CATICfgNormalValue_var& iObject, const CATUnicodeString& iDomain, const CATUnicodeString& iModName, const CATIConfigurableObject_var iCV) ; \
virtual HRESULT ValidateEffectivity(const CATICfgORExpression_var& iObject, const CATUnicodeString& iDomain, const CATUnicodeString& iModName, const CATIConfigurableObject_var iCV) ; \
virtual HRESULT ValidateEffectivity(const CATICfgBasicEffectivity_var& iObject, const CATUnicodeString& iDomain, const CATUnicodeString& iModName, const CATIConfigurableObject_var iCV) ; \
virtual HRESULT ValidateEffectivity(const CATListOfCATILinkableObject& iObjects, const CATICfgBasicEffectivity_var& iObject, const CATUnicodeString& iDomain, const CATUnicodeString& iModName, const CATIConfigurableObject_var iCV) ; \


#define ENVTIEdefine_CATICfgUEValidateEff(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ValidateEffectivity(const CATICfgNormalValue_var& iObject, const CATUnicodeString& iDomain, const CATUnicodeString& iModName, const CATIConfigurableObject_var iCV)  \
{ \
return (ENVTIECALL(CATICfgUEValidateEff,ENVTIETypeLetter,ENVTIELetter)ValidateEffectivity(iObject,iDomain,iModName,iCV)); \
} \
HRESULT  ENVTIEName::ValidateEffectivity(const CATICfgORExpression_var& iObject, const CATUnicodeString& iDomain, const CATUnicodeString& iModName, const CATIConfigurableObject_var iCV)  \
{ \
return (ENVTIECALL(CATICfgUEValidateEff,ENVTIETypeLetter,ENVTIELetter)ValidateEffectivity(iObject,iDomain,iModName,iCV)); \
} \
HRESULT  ENVTIEName::ValidateEffectivity(const CATICfgBasicEffectivity_var& iObject, const CATUnicodeString& iDomain, const CATUnicodeString& iModName, const CATIConfigurableObject_var iCV)  \
{ \
return (ENVTIECALL(CATICfgUEValidateEff,ENVTIETypeLetter,ENVTIELetter)ValidateEffectivity(iObject,iDomain,iModName,iCV)); \
} \
HRESULT  ENVTIEName::ValidateEffectivity(const CATListOfCATILinkableObject& iObjects, const CATICfgBasicEffectivity_var& iObject, const CATUnicodeString& iDomain, const CATUnicodeString& iModName, const CATIConfigurableObject_var iCV)  \
{ \
return (ENVTIECALL(CATICfgUEValidateEff,ENVTIETypeLetter,ENVTIELetter)ValidateEffectivity(iObjects,iObject,iDomain,iModName,iCV)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICfgUEValidateEff(classe)    TIECATICfgUEValidateEff##classe


/* Common methods inside a TIE */
#define common_TIE_CATICfgUEValidateEff(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICfgUEValidateEff, classe) \
 \
 \
CATImplementTIEMethods(CATICfgUEValidateEff, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICfgUEValidateEff, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICfgUEValidateEff, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICfgUEValidateEff, classe) \
 \
HRESULT  TIECATICfgUEValidateEff##classe::ValidateEffectivity(const CATICfgNormalValue_var& iObject, const CATUnicodeString& iDomain, const CATUnicodeString& iModName, const CATIConfigurableObject_var iCV)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ValidateEffectivity(iObject,iDomain,iModName,iCV)); \
} \
HRESULT  TIECATICfgUEValidateEff##classe::ValidateEffectivity(const CATICfgORExpression_var& iObject, const CATUnicodeString& iDomain, const CATUnicodeString& iModName, const CATIConfigurableObject_var iCV)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ValidateEffectivity(iObject,iDomain,iModName,iCV)); \
} \
HRESULT  TIECATICfgUEValidateEff##classe::ValidateEffectivity(const CATICfgBasicEffectivity_var& iObject, const CATUnicodeString& iDomain, const CATUnicodeString& iModName, const CATIConfigurableObject_var iCV)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ValidateEffectivity(iObject,iDomain,iModName,iCV)); \
} \
HRESULT  TIECATICfgUEValidateEff##classe::ValidateEffectivity(const CATListOfCATILinkableObject& iObjects, const CATICfgBasicEffectivity_var& iObject, const CATUnicodeString& iDomain, const CATUnicodeString& iModName, const CATIConfigurableObject_var iCV)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ValidateEffectivity(iObjects,iObject,iDomain,iModName,iCV)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICfgUEValidateEff(classe) \
 \
 \
declare_TIE_CATICfgUEValidateEff(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICfgUEValidateEff##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICfgUEValidateEff,"CATICfgUEValidateEff",CATICfgUEValidateEff::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICfgUEValidateEff(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICfgUEValidateEff, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICfgUEValidateEff##classe(classe::MetaObject(),CATICfgUEValidateEff::MetaObject(),(void *)CreateTIECATICfgUEValidateEff##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICfgUEValidateEff(classe) \
 \
 \
declare_TIE_CATICfgUEValidateEff(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICfgUEValidateEff##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICfgUEValidateEff,"CATICfgUEValidateEff",CATICfgUEValidateEff::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICfgUEValidateEff(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICfgUEValidateEff, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICfgUEValidateEff##classe(classe::MetaObject(),CATICfgUEValidateEff::MetaObject(),(void *)CreateTIECATICfgUEValidateEff##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICfgUEValidateEff(classe) TIE_CATICfgUEValidateEff(classe)
#else
#define BOA_CATICfgUEValidateEff(classe) CATImplementBOA(CATICfgUEValidateEff, classe)
#endif

#endif
