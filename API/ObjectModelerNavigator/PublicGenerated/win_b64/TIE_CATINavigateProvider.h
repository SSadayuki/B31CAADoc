#ifndef __TIE_CATINavigateProvider
#define __TIE_CATINavigateProvider

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATINavigateProvider.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATINavigateProvider */
#define declare_TIE_CATINavigateProvider(classe) \
 \
 \
class TIECATINavigateProvider##classe : public CATINavigateProvider \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATINavigateProvider, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetChildren(CATBaseUnknown * iObj, CATListPtrCATBaseUnknown ** ioProvidedChildren) ; \
};



#define ENVTIEdeclare_CATINavigateProvider(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetChildren(CATBaseUnknown * iObj, CATListPtrCATBaseUnknown ** ioProvidedChildren) ; \


#define ENVTIEdefine_CATINavigateProvider(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetChildren(CATBaseUnknown * iObj, CATListPtrCATBaseUnknown ** ioProvidedChildren)  \
{ \
return (ENVTIECALL(CATINavigateProvider,ENVTIETypeLetter,ENVTIELetter)GetChildren(iObj,ioProvidedChildren)); \
} \


/* Name of the TIE class */
#define class_TIE_CATINavigateProvider(classe)    TIECATINavigateProvider##classe


/* Common methods inside a TIE */
#define common_TIE_CATINavigateProvider(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATINavigateProvider, classe) \
 \
 \
CATImplementTIEMethods(CATINavigateProvider, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATINavigateProvider, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATINavigateProvider, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATINavigateProvider, classe) \
 \
HRESULT  TIECATINavigateProvider##classe::GetChildren(CATBaseUnknown * iObj, CATListPtrCATBaseUnknown ** ioProvidedChildren)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetChildren(iObj,ioProvidedChildren)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATINavigateProvider(classe) \
 \
 \
declare_TIE_CATINavigateProvider(classe) \
 \
 \
CATMetaClass * __stdcall TIECATINavigateProvider##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATINavigateProvider,"CATINavigateProvider",CATINavigateProvider::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATINavigateProvider(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATINavigateProvider, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATINavigateProvider##classe(classe::MetaObject(),CATINavigateProvider::MetaObject(),(void *)CreateTIECATINavigateProvider##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATINavigateProvider(classe) \
 \
 \
declare_TIE_CATINavigateProvider(classe) \
 \
 \
CATMetaClass * __stdcall TIECATINavigateProvider##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATINavigateProvider,"CATINavigateProvider",CATINavigateProvider::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATINavigateProvider(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATINavigateProvider, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATINavigateProvider##classe(classe::MetaObject(),CATINavigateProvider::MetaObject(),(void *)CreateTIECATINavigateProvider##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATINavigateProvider(classe) TIE_CATINavigateProvider(classe)
#else
#define BOA_CATINavigateProvider(classe) CATImplementBOA(CATINavigateProvider, classe)
#endif

#endif
