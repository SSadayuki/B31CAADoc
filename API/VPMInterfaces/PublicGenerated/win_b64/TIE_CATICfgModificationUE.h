#ifndef __TIE_CATICfgModificationUE
#define __TIE_CATICfgModificationUE

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICfgModificationUE.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICfgModificationUE */
#define declare_TIE_CATICfgModificationUE(classe) \
 \
 \
class TIECATICfgModificationUE##classe : public CATICfgModificationUE \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICfgModificationUE, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual  HRESULT SetEffectivity () ; \
      virtual  HRESULT ValidateEffectivity(); \
};



#define ENVTIEdeclare_CATICfgModificationUE(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual  HRESULT SetEffectivity () ; \
virtual  HRESULT ValidateEffectivity(); \


#define ENVTIEdefine_CATICfgModificationUE(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::SetEffectivity ()  \
{ \
return (ENVTIECALL(CATICfgModificationUE,ENVTIETypeLetter,ENVTIELetter)SetEffectivity ()); \
} \
HRESULT  ENVTIEName::ValidateEffectivity() \
{ \
return (ENVTIECALL(CATICfgModificationUE,ENVTIETypeLetter,ENVTIELetter)ValidateEffectivity()); \
} \


/* Name of the TIE class */
#define class_TIE_CATICfgModificationUE(classe)    TIECATICfgModificationUE##classe


/* Common methods inside a TIE */
#define common_TIE_CATICfgModificationUE(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICfgModificationUE, classe) \
 \
 \
CATImplementTIEMethods(CATICfgModificationUE, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICfgModificationUE, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICfgModificationUE, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICfgModificationUE, classe) \
 \
HRESULT  TIECATICfgModificationUE##classe::SetEffectivity ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetEffectivity ()); \
} \
HRESULT  TIECATICfgModificationUE##classe::ValidateEffectivity() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ValidateEffectivity()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICfgModificationUE(classe) \
 \
 \
declare_TIE_CATICfgModificationUE(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICfgModificationUE##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICfgModificationUE,"CATICfgModificationUE",CATICfgModificationUE::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICfgModificationUE(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICfgModificationUE, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICfgModificationUE##classe(classe::MetaObject(),CATICfgModificationUE::MetaObject(),(void *)CreateTIECATICfgModificationUE##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICfgModificationUE(classe) \
 \
 \
declare_TIE_CATICfgModificationUE(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICfgModificationUE##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICfgModificationUE,"CATICfgModificationUE",CATICfgModificationUE::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICfgModificationUE(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICfgModificationUE, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICfgModificationUE##classe(classe::MetaObject(),CATICfgModificationUE::MetaObject(),(void *)CreateTIECATICfgModificationUE##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICfgModificationUE(classe) TIE_CATICfgModificationUE(classe)
#else
#define BOA_CATICfgModificationUE(classe) CATImplementBOA(CATICfgModificationUE, classe)
#endif

#endif
