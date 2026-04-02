#ifndef __TIE_CATIExchangeProductRepresentation
#define __TIE_CATIExchangeProductRepresentation

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeProductRepresentation.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeProductRepresentation */
#define declare_TIE_CATIExchangeProductRepresentation(classe) \
 \
 \
class TIECATIExchangeProductRepresentation##classe : public CATIExchangeProductRepresentation \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeProductRepresentation, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetRootProducts(CATListValCATIExchangeProduct_var& oProducts) ; \
};



#define ENVTIEdeclare_CATIExchangeProductRepresentation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetRootProducts(CATListValCATIExchangeProduct_var& oProducts) ; \


#define ENVTIEdefine_CATIExchangeProductRepresentation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetRootProducts(CATListValCATIExchangeProduct_var& oProducts)  \
{ \
return (ENVTIECALL(CATIExchangeProductRepresentation,ENVTIETypeLetter,ENVTIELetter)GetRootProducts(oProducts)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeProductRepresentation(classe)    TIECATIExchangeProductRepresentation##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeProductRepresentation(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeProductRepresentation, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeProductRepresentation, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeProductRepresentation, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeProductRepresentation, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeProductRepresentation, classe) \
 \
HRESULT  TIECATIExchangeProductRepresentation##classe::GetRootProducts(CATListValCATIExchangeProduct_var& oProducts)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRootProducts(oProducts)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeProductRepresentation(classe) \
 \
 \
declare_TIE_CATIExchangeProductRepresentation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeProductRepresentation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeProductRepresentation,"CATIExchangeProductRepresentation",CATIExchangeProductRepresentation::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeProductRepresentation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeProductRepresentation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeProductRepresentation##classe(classe::MetaObject(),CATIExchangeProductRepresentation::MetaObject(),(void *)CreateTIECATIExchangeProductRepresentation##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeProductRepresentation(classe) \
 \
 \
declare_TIE_CATIExchangeProductRepresentation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeProductRepresentation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeProductRepresentation,"CATIExchangeProductRepresentation",CATIExchangeProductRepresentation::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeProductRepresentation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeProductRepresentation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeProductRepresentation##classe(classe::MetaObject(),CATIExchangeProductRepresentation::MetaObject(),(void *)CreateTIECATIExchangeProductRepresentation##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeProductRepresentation(classe) TIE_CATIExchangeProductRepresentation(classe)
#else
#define BOA_CATIExchangeProductRepresentation(classe) CATImplementBOA(CATIExchangeProductRepresentation, classe)
#endif

#endif
