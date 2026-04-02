#ifndef __TIE_CATICciPartnerProdAttributes
#define __TIE_CATICciPartnerProdAttributes

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICciPartnerProdAttributes.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICciPartnerProdAttributes */
#define declare_TIE_CATICciPartnerProdAttributes(classe) \
 \
 \
class TIECATICciPartnerProdAttributes##classe : public CATICciPartnerProdAttributes \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICciPartnerProdAttributes, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetListAttributesAndTypes(CATListOfCATUnicodeString & oListAttributes, CATListOfCATUnicodeString & oListNameNLS, CATListOfInt & oListIntTypes) ; \
      virtual HRESULT GetListOfAuthorizedValues(CATUnicodeString iAttribute, CATListOfCATUnicodeString & oListValues, CATListOfCATUnicodeString & oListValuesNLS, int & oType) ; \
      virtual HRESULT CheckAttributesValue(CATListOfCATUnicodeString & iListAttributes, CATListOfCATUnicodeString & oListErrors) ; \
      virtual HRESULT GetAttributesValue(CATICciProducibility_var &ispProducibility,CATListOfCATUnicodeString & iListAttributes, CATListOfCATUnicodeString & oListValues) ; \
      virtual HRESULT SetAttributesValue(CATICciProducibility_var &ispProducibility,CATListOfCATUnicodeString & iListAttributes, CATListOfCATUnicodeString & iListValues) ; \
};



#define ENVTIEdeclare_CATICciPartnerProdAttributes(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetListAttributesAndTypes(CATListOfCATUnicodeString & oListAttributes, CATListOfCATUnicodeString & oListNameNLS, CATListOfInt & oListIntTypes) ; \
virtual HRESULT GetListOfAuthorizedValues(CATUnicodeString iAttribute, CATListOfCATUnicodeString & oListValues, CATListOfCATUnicodeString & oListValuesNLS, int & oType) ; \
virtual HRESULT CheckAttributesValue(CATListOfCATUnicodeString & iListAttributes, CATListOfCATUnicodeString & oListErrors) ; \
virtual HRESULT GetAttributesValue(CATICciProducibility_var &ispProducibility,CATListOfCATUnicodeString & iListAttributes, CATListOfCATUnicodeString & oListValues) ; \
virtual HRESULT SetAttributesValue(CATICciProducibility_var &ispProducibility,CATListOfCATUnicodeString & iListAttributes, CATListOfCATUnicodeString & iListValues) ; \


#define ENVTIEdefine_CATICciPartnerProdAttributes(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetListAttributesAndTypes(CATListOfCATUnicodeString & oListAttributes, CATListOfCATUnicodeString & oListNameNLS, CATListOfInt & oListIntTypes)  \
{ \
return (ENVTIECALL(CATICciPartnerProdAttributes,ENVTIETypeLetter,ENVTIELetter)GetListAttributesAndTypes(oListAttributes,oListNameNLS,oListIntTypes)); \
} \
HRESULT  ENVTIEName::GetListOfAuthorizedValues(CATUnicodeString iAttribute, CATListOfCATUnicodeString & oListValues, CATListOfCATUnicodeString & oListValuesNLS, int & oType)  \
{ \
return (ENVTIECALL(CATICciPartnerProdAttributes,ENVTIETypeLetter,ENVTIELetter)GetListOfAuthorizedValues(iAttribute,oListValues,oListValuesNLS,oType)); \
} \
HRESULT  ENVTIEName::CheckAttributesValue(CATListOfCATUnicodeString & iListAttributes, CATListOfCATUnicodeString & oListErrors)  \
{ \
return (ENVTIECALL(CATICciPartnerProdAttributes,ENVTIETypeLetter,ENVTIELetter)CheckAttributesValue(iListAttributes,oListErrors)); \
} \
HRESULT  ENVTIEName::GetAttributesValue(CATICciProducibility_var &ispProducibility,CATListOfCATUnicodeString & iListAttributes, CATListOfCATUnicodeString & oListValues)  \
{ \
return (ENVTIECALL(CATICciPartnerProdAttributes,ENVTIETypeLetter,ENVTIELetter)GetAttributesValue(ispProducibility,iListAttributes,oListValues)); \
} \
HRESULT  ENVTIEName::SetAttributesValue(CATICciProducibility_var &ispProducibility,CATListOfCATUnicodeString & iListAttributes, CATListOfCATUnicodeString & iListValues)  \
{ \
return (ENVTIECALL(CATICciPartnerProdAttributes,ENVTIETypeLetter,ENVTIELetter)SetAttributesValue(ispProducibility,iListAttributes,iListValues)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICciPartnerProdAttributes(classe)    TIECATICciPartnerProdAttributes##classe


/* Common methods inside a TIE */
#define common_TIE_CATICciPartnerProdAttributes(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICciPartnerProdAttributes, classe) \
 \
 \
CATImplementTIEMethods(CATICciPartnerProdAttributes, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICciPartnerProdAttributes, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICciPartnerProdAttributes, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICciPartnerProdAttributes, classe) \
 \
HRESULT  TIECATICciPartnerProdAttributes##classe::GetListAttributesAndTypes(CATListOfCATUnicodeString & oListAttributes, CATListOfCATUnicodeString & oListNameNLS, CATListOfInt & oListIntTypes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListAttributesAndTypes(oListAttributes,oListNameNLS,oListIntTypes)); \
} \
HRESULT  TIECATICciPartnerProdAttributes##classe::GetListOfAuthorizedValues(CATUnicodeString iAttribute, CATListOfCATUnicodeString & oListValues, CATListOfCATUnicodeString & oListValuesNLS, int & oType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfAuthorizedValues(iAttribute,oListValues,oListValuesNLS,oType)); \
} \
HRESULT  TIECATICciPartnerProdAttributes##classe::CheckAttributesValue(CATListOfCATUnicodeString & iListAttributes, CATListOfCATUnicodeString & oListErrors)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CheckAttributesValue(iListAttributes,oListErrors)); \
} \
HRESULT  TIECATICciPartnerProdAttributes##classe::GetAttributesValue(CATICciProducibility_var &ispProducibility,CATListOfCATUnicodeString & iListAttributes, CATListOfCATUnicodeString & oListValues)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttributesValue(ispProducibility,iListAttributes,oListValues)); \
} \
HRESULT  TIECATICciPartnerProdAttributes##classe::SetAttributesValue(CATICciProducibility_var &ispProducibility,CATListOfCATUnicodeString & iListAttributes, CATListOfCATUnicodeString & iListValues)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttributesValue(ispProducibility,iListAttributes,iListValues)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICciPartnerProdAttributes(classe) \
 \
 \
declare_TIE_CATICciPartnerProdAttributes(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciPartnerProdAttributes##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciPartnerProdAttributes,"CATICciPartnerProdAttributes",CATICciPartnerProdAttributes::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciPartnerProdAttributes(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICciPartnerProdAttributes, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciPartnerProdAttributes##classe(classe::MetaObject(),CATICciPartnerProdAttributes::MetaObject(),(void *)CreateTIECATICciPartnerProdAttributes##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICciPartnerProdAttributes(classe) \
 \
 \
declare_TIE_CATICciPartnerProdAttributes(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciPartnerProdAttributes##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciPartnerProdAttributes,"CATICciPartnerProdAttributes",CATICciPartnerProdAttributes::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciPartnerProdAttributes(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICciPartnerProdAttributes, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciPartnerProdAttributes##classe(classe::MetaObject(),CATICciPartnerProdAttributes::MetaObject(),(void *)CreateTIECATICciPartnerProdAttributes##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICciPartnerProdAttributes(classe) TIE_CATICciPartnerProdAttributes(classe)
#else
#define BOA_CATICciPartnerProdAttributes(classe) CATImplementBOA(CATICciPartnerProdAttributes, classe)
#endif

#endif
