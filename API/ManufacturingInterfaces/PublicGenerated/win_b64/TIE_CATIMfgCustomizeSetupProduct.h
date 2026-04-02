#ifndef __TIE_CATIMfgCustomizeSetupProduct
#define __TIE_CATIMfgCustomizeSetupProduct

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgCustomizeSetupProduct.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgCustomizeSetupProduct */
#define declare_TIE_CATIMfgCustomizeSetupProduct(classe) \
 \
 \
class TIECATIMfgCustomizeSetupProduct##classe : public CATIMfgCustomizeSetupProduct \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgCustomizeSetupProduct, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT CustomizeProduct (CATDocument * iDSFDocument, CATDocument *& oDSFpDocument) ; \
};



#define ENVTIEdeclare_CATIMfgCustomizeSetupProduct(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT CustomizeProduct (CATDocument * iDSFDocument, CATDocument *& oDSFpDocument) ; \


#define ENVTIEdefine_CATIMfgCustomizeSetupProduct(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::CustomizeProduct (CATDocument * iDSFDocument, CATDocument *& oDSFpDocument)  \
{ \
return (ENVTIECALL(CATIMfgCustomizeSetupProduct,ENVTIETypeLetter,ENVTIELetter)CustomizeProduct (iDSFDocument,oDSFpDocument)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgCustomizeSetupProduct(classe)    TIECATIMfgCustomizeSetupProduct##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgCustomizeSetupProduct(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgCustomizeSetupProduct, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgCustomizeSetupProduct, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgCustomizeSetupProduct, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgCustomizeSetupProduct, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgCustomizeSetupProduct, classe) \
 \
HRESULT  TIECATIMfgCustomizeSetupProduct##classe::CustomizeProduct (CATDocument * iDSFDocument, CATDocument *& oDSFpDocument)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CustomizeProduct (iDSFDocument,oDSFpDocument)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgCustomizeSetupProduct(classe) \
 \
 \
declare_TIE_CATIMfgCustomizeSetupProduct(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgCustomizeSetupProduct##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgCustomizeSetupProduct,"CATIMfgCustomizeSetupProduct",CATIMfgCustomizeSetupProduct::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgCustomizeSetupProduct(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgCustomizeSetupProduct, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgCustomizeSetupProduct##classe(classe::MetaObject(),CATIMfgCustomizeSetupProduct::MetaObject(),(void *)CreateTIECATIMfgCustomizeSetupProduct##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgCustomizeSetupProduct(classe) \
 \
 \
declare_TIE_CATIMfgCustomizeSetupProduct(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgCustomizeSetupProduct##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgCustomizeSetupProduct,"CATIMfgCustomizeSetupProduct",CATIMfgCustomizeSetupProduct::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgCustomizeSetupProduct(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgCustomizeSetupProduct, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgCustomizeSetupProduct##classe(classe::MetaObject(),CATIMfgCustomizeSetupProduct::MetaObject(),(void *)CreateTIECATIMfgCustomizeSetupProduct##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgCustomizeSetupProduct(classe) TIE_CATIMfgCustomizeSetupProduct(classe)
#else
#define BOA_CATIMfgCustomizeSetupProduct(classe) CATImplementBOA(CATIMfgCustomizeSetupProduct, classe)
#endif

#endif
