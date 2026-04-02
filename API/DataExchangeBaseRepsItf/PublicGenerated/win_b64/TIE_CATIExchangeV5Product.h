#ifndef __TIE_CATIExchangeV5Product
#define __TIE_CATIExchangeV5Product

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeV5Product.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeV5Product */
#define declare_TIE_CATIExchangeV5Product(classe) \
 \
 \
class TIECATIExchangeV5Product##classe : public CATIExchangeV5Product \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeV5Product, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetV5Product (CATBaseUnknown_var & oCATIProduct) ; \
};



#define ENVTIEdeclare_CATIExchangeV5Product(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetV5Product (CATBaseUnknown_var & oCATIProduct) ; \


#define ENVTIEdefine_CATIExchangeV5Product(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetV5Product (CATBaseUnknown_var & oCATIProduct)  \
{ \
return (ENVTIECALL(CATIExchangeV5Product,ENVTIETypeLetter,ENVTIELetter)GetV5Product (oCATIProduct)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeV5Product(classe)    TIECATIExchangeV5Product##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeV5Product(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeV5Product, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeV5Product, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeV5Product, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeV5Product, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeV5Product, classe) \
 \
HRESULT  TIECATIExchangeV5Product##classe::GetV5Product (CATBaseUnknown_var & oCATIProduct)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetV5Product (oCATIProduct)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeV5Product(classe) \
 \
 \
declare_TIE_CATIExchangeV5Product(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeV5Product##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeV5Product,"CATIExchangeV5Product",CATIExchangeV5Product::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeV5Product(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeV5Product, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeV5Product##classe(classe::MetaObject(),CATIExchangeV5Product::MetaObject(),(void *)CreateTIECATIExchangeV5Product##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeV5Product(classe) \
 \
 \
declare_TIE_CATIExchangeV5Product(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeV5Product##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeV5Product,"CATIExchangeV5Product",CATIExchangeV5Product::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeV5Product(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeV5Product, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeV5Product##classe(classe::MetaObject(),CATIExchangeV5Product::MetaObject(),(void *)CreateTIECATIExchangeV5Product##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeV5Product(classe) TIE_CATIExchangeV5Product(classe)
#else
#define BOA_CATIExchangeV5Product(classe) CATImplementBOA(CATIExchangeV5Product, classe)
#endif

#endif
