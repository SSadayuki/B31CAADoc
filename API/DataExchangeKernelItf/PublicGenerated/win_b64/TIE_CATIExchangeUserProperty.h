#ifndef __TIE_CATIExchangeUserProperty
#define __TIE_CATIExchangeUserProperty

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeUserProperty.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeUserProperty */
#define declare_TIE_CATIExchangeUserProperty(classe) \
 \
 \
class TIECATIExchangeUserProperty##classe : public CATIExchangeUserProperty \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeUserProperty, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetUserAttributes(CATListOfCATUnicodeString& oAttributesNames, CATListOfCATUnicodeString& oAttributesValues, CATListOfCATUnicodeString& oAttributesTypes) const ; \
};



#define ENVTIEdeclare_CATIExchangeUserProperty(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetUserAttributes(CATListOfCATUnicodeString& oAttributesNames, CATListOfCATUnicodeString& oAttributesValues, CATListOfCATUnicodeString& oAttributesTypes) const ; \


#define ENVTIEdefine_CATIExchangeUserProperty(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetUserAttributes(CATListOfCATUnicodeString& oAttributesNames, CATListOfCATUnicodeString& oAttributesValues, CATListOfCATUnicodeString& oAttributesTypes) const  \
{ \
return (ENVTIECALL(CATIExchangeUserProperty,ENVTIETypeLetter,ENVTIELetter)GetUserAttributes(oAttributesNames,oAttributesValues,oAttributesTypes)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeUserProperty(classe)    TIECATIExchangeUserProperty##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeUserProperty(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeUserProperty, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeUserProperty, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeUserProperty, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeUserProperty, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeUserProperty, classe) \
 \
HRESULT  TIECATIExchangeUserProperty##classe::GetUserAttributes(CATListOfCATUnicodeString& oAttributesNames, CATListOfCATUnicodeString& oAttributesValues, CATListOfCATUnicodeString& oAttributesTypes) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUserAttributes(oAttributesNames,oAttributesValues,oAttributesTypes)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeUserProperty(classe) \
 \
 \
declare_TIE_CATIExchangeUserProperty(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeUserProperty##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeUserProperty,"CATIExchangeUserProperty",CATIExchangeUserProperty::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeUserProperty(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeUserProperty, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeUserProperty##classe(classe::MetaObject(),CATIExchangeUserProperty::MetaObject(),(void *)CreateTIECATIExchangeUserProperty##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeUserProperty(classe) \
 \
 \
declare_TIE_CATIExchangeUserProperty(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeUserProperty##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeUserProperty,"CATIExchangeUserProperty",CATIExchangeUserProperty::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeUserProperty(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeUserProperty, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeUserProperty##classe(classe::MetaObject(),CATIExchangeUserProperty::MetaObject(),(void *)CreateTIECATIExchangeUserProperty##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeUserProperty(classe) TIE_CATIExchangeUserProperty(classe)
#else
#define BOA_CATIExchangeUserProperty(classe) CATImplementBOA(CATIExchangeUserProperty, classe)
#endif

#endif
