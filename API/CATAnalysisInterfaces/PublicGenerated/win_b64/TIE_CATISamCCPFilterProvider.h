#ifndef __TIE_CATISamCCPFilterProvider
#define __TIE_CATISamCCPFilterProvider

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamCCPFilterProvider.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamCCPFilterProvider */
#define declare_TIE_CATISamCCPFilterProvider(classe) \
 \
 \
class TIECATISamCCPFilterProvider##classe : public CATISamCCPFilterProvider \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamCCPFilterProvider, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual int IsFeatureAvailable(CATISpecObject * iSpecObject, const char * &iHeaderID) ; \
};



#define ENVTIEdeclare_CATISamCCPFilterProvider(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual int IsFeatureAvailable(CATISpecObject * iSpecObject, const char * &iHeaderID) ; \


#define ENVTIEdefine_CATISamCCPFilterProvider(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
int  ENVTIEName::IsFeatureAvailable(CATISpecObject * iSpecObject, const char * &iHeaderID)  \
{ \
return (ENVTIECALL(CATISamCCPFilterProvider,ENVTIETypeLetter,ENVTIELetter)IsFeatureAvailable(iSpecObject,iHeaderID)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamCCPFilterProvider(classe)    TIECATISamCCPFilterProvider##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamCCPFilterProvider(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamCCPFilterProvider, classe) \
 \
 \
CATImplementTIEMethods(CATISamCCPFilterProvider, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamCCPFilterProvider, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamCCPFilterProvider, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamCCPFilterProvider, classe) \
 \
int  TIECATISamCCPFilterProvider##classe::IsFeatureAvailable(CATISpecObject * iSpecObject, const char * &iHeaderID)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsFeatureAvailable(iSpecObject,iHeaderID)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamCCPFilterProvider(classe) \
 \
 \
declare_TIE_CATISamCCPFilterProvider(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamCCPFilterProvider##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamCCPFilterProvider,"CATISamCCPFilterProvider",CATISamCCPFilterProvider::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamCCPFilterProvider(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamCCPFilterProvider, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamCCPFilterProvider##classe(classe::MetaObject(),CATISamCCPFilterProvider::MetaObject(),(void *)CreateTIECATISamCCPFilterProvider##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamCCPFilterProvider(classe) \
 \
 \
declare_TIE_CATISamCCPFilterProvider(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamCCPFilterProvider##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamCCPFilterProvider,"CATISamCCPFilterProvider",CATISamCCPFilterProvider::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamCCPFilterProvider(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamCCPFilterProvider, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamCCPFilterProvider##classe(classe::MetaObject(),CATISamCCPFilterProvider::MetaObject(),(void *)CreateTIECATISamCCPFilterProvider##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamCCPFilterProvider(classe) TIE_CATISamCCPFilterProvider(classe)
#else
#define BOA_CATISamCCPFilterProvider(classe) CATImplementBOA(CATISamCCPFilterProvider, classe)
#endif

#endif
