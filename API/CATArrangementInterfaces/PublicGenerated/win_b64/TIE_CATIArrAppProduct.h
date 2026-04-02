#ifndef __TIE_CATIArrAppProduct
#define __TIE_CATIArrAppProduct

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIArrAppProduct.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIArrAppProduct */
#define declare_TIE_CATIArrAppProduct(classe) \
 \
 \
class TIECATIArrAppProduct##classe : public CATIArrAppProduct \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIArrAppProduct, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT NomenclatureWasModified ( const CATUnicodeString& iOldType, const CATUnicodeString& iNewType ) ; \
};



#define ENVTIEdeclare_CATIArrAppProduct(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT NomenclatureWasModified ( const CATUnicodeString& iOldType, const CATUnicodeString& iNewType ) ; \


#define ENVTIEdefine_CATIArrAppProduct(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::NomenclatureWasModified ( const CATUnicodeString& iOldType, const CATUnicodeString& iNewType )  \
{ \
return (ENVTIECALL(CATIArrAppProduct,ENVTIETypeLetter,ENVTIELetter)NomenclatureWasModified (iOldType,iNewType )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIArrAppProduct(classe)    TIECATIArrAppProduct##classe


/* Common methods inside a TIE */
#define common_TIE_CATIArrAppProduct(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIArrAppProduct, classe) \
 \
 \
CATImplementTIEMethods(CATIArrAppProduct, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIArrAppProduct, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIArrAppProduct, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIArrAppProduct, classe) \
 \
HRESULT  TIECATIArrAppProduct##classe::NomenclatureWasModified ( const CATUnicodeString& iOldType, const CATUnicodeString& iNewType )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->NomenclatureWasModified (iOldType,iNewType )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIArrAppProduct(classe) \
 \
 \
declare_TIE_CATIArrAppProduct(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIArrAppProduct##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIArrAppProduct,"CATIArrAppProduct",CATIArrAppProduct::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIArrAppProduct(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIArrAppProduct, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIArrAppProduct##classe(classe::MetaObject(),CATIArrAppProduct::MetaObject(),(void *)CreateTIECATIArrAppProduct##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIArrAppProduct(classe) \
 \
 \
declare_TIE_CATIArrAppProduct(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIArrAppProduct##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIArrAppProduct,"CATIArrAppProduct",CATIArrAppProduct::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIArrAppProduct(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIArrAppProduct, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIArrAppProduct##classe(classe::MetaObject(),CATIArrAppProduct::MetaObject(),(void *)CreateTIECATIArrAppProduct##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIArrAppProduct(classe) TIE_CATIArrAppProduct(classe)
#else
#define BOA_CATIArrAppProduct(classe) CATImplementBOA(CATIArrAppProduct, classe)
#endif

#endif
