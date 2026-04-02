#ifndef __TIE_CATISamCatalogProvider
#define __TIE_CATISamCatalogProvider

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamCatalogProvider.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamCatalogProvider */
#define declare_TIE_CATISamCatalogProvider(classe) \
 \
 \
class TIECATISamCatalogProvider##classe : public CATISamCatalogProvider \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamCatalogProvider, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AssociateCatalog(CATUnicodeString iName, const CATIContainer* ipiContainer) ; \
};



#define ENVTIEdeclare_CATISamCatalogProvider(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AssociateCatalog(CATUnicodeString iName, const CATIContainer* ipiContainer) ; \


#define ENVTIEdefine_CATISamCatalogProvider(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AssociateCatalog(CATUnicodeString iName, const CATIContainer* ipiContainer)  \
{ \
return (ENVTIECALL(CATISamCatalogProvider,ENVTIETypeLetter,ENVTIELetter)AssociateCatalog(iName,ipiContainer)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamCatalogProvider(classe)    TIECATISamCatalogProvider##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamCatalogProvider(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamCatalogProvider, classe) \
 \
 \
CATImplementTIEMethods(CATISamCatalogProvider, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamCatalogProvider, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamCatalogProvider, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamCatalogProvider, classe) \
 \
HRESULT  TIECATISamCatalogProvider##classe::AssociateCatalog(CATUnicodeString iName, const CATIContainer* ipiContainer)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AssociateCatalog(iName,ipiContainer)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamCatalogProvider(classe) \
 \
 \
declare_TIE_CATISamCatalogProvider(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamCatalogProvider##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamCatalogProvider,"CATISamCatalogProvider",CATISamCatalogProvider::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamCatalogProvider(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamCatalogProvider, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamCatalogProvider##classe(classe::MetaObject(),CATISamCatalogProvider::MetaObject(),(void *)CreateTIECATISamCatalogProvider##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamCatalogProvider(classe) \
 \
 \
declare_TIE_CATISamCatalogProvider(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamCatalogProvider##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamCatalogProvider,"CATISamCatalogProvider",CATISamCatalogProvider::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamCatalogProvider(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamCatalogProvider, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamCatalogProvider##classe(classe::MetaObject(),CATISamCatalogProvider::MetaObject(),(void *)CreateTIECATISamCatalogProvider##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamCatalogProvider(classe) TIE_CATISamCatalogProvider(classe)
#else
#define BOA_CATISamCatalogProvider(classe) CATImplementBOA(CATISamCatalogProvider, classe)
#endif

#endif
