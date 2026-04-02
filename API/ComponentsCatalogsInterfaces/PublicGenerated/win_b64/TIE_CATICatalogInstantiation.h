#ifndef __TIE_CATICatalogInstantiation
#define __TIE_CATICatalogInstantiation

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICatalogInstantiation.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICatalogInstantiation */
#define declare_TIE_CATICatalogInstantiation(classe) \
 \
 \
class TIECATICatalogInstantiation##classe : public CATICatalogInstantiation \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICatalogInstantiation, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT RunInstantiationCmd (const CATICatalogLink    * iCatalogLink, const CATICatalogBrowser * iBrowser, int iInstantiateMode, int iRepeatMode, int & oNotDone) ; \
};



#define ENVTIEdeclare_CATICatalogInstantiation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT RunInstantiationCmd (const CATICatalogLink    * iCatalogLink, const CATICatalogBrowser * iBrowser, int iInstantiateMode, int iRepeatMode, int & oNotDone) ; \


#define ENVTIEdefine_CATICatalogInstantiation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::RunInstantiationCmd (const CATICatalogLink    * iCatalogLink, const CATICatalogBrowser * iBrowser, int iInstantiateMode, int iRepeatMode, int & oNotDone)  \
{ \
return (ENVTIECALL(CATICatalogInstantiation,ENVTIETypeLetter,ENVTIELetter)RunInstantiationCmd (iCatalogLink,iBrowser,iInstantiateMode,iRepeatMode,oNotDone)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICatalogInstantiation(classe)    TIECATICatalogInstantiation##classe


/* Common methods inside a TIE */
#define common_TIE_CATICatalogInstantiation(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICatalogInstantiation, classe) \
 \
 \
CATImplementTIEMethods(CATICatalogInstantiation, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICatalogInstantiation, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICatalogInstantiation, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICatalogInstantiation, classe) \
 \
HRESULT  TIECATICatalogInstantiation##classe::RunInstantiationCmd (const CATICatalogLink    * iCatalogLink, const CATICatalogBrowser * iBrowser, int iInstantiateMode, int iRepeatMode, int & oNotDone)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RunInstantiationCmd (iCatalogLink,iBrowser,iInstantiateMode,iRepeatMode,oNotDone)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICatalogInstantiation(classe) \
 \
 \
declare_TIE_CATICatalogInstantiation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICatalogInstantiation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICatalogInstantiation,"CATICatalogInstantiation",CATICatalogInstantiation::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICatalogInstantiation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICatalogInstantiation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICatalogInstantiation##classe(classe::MetaObject(),CATICatalogInstantiation::MetaObject(),(void *)CreateTIECATICatalogInstantiation##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICatalogInstantiation(classe) \
 \
 \
declare_TIE_CATICatalogInstantiation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICatalogInstantiation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICatalogInstantiation,"CATICatalogInstantiation",CATICatalogInstantiation::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICatalogInstantiation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICatalogInstantiation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICatalogInstantiation##classe(classe::MetaObject(),CATICatalogInstantiation::MetaObject(),(void *)CreateTIECATICatalogInstantiation##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICatalogInstantiation(classe) TIE_CATICatalogInstantiation(classe)
#else
#define BOA_CATICatalogInstantiation(classe) CATImplementBOA(CATICatalogInstantiation, classe)
#endif

#endif
