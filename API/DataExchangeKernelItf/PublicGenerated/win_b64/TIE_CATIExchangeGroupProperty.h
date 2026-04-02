#ifndef __TIE_CATIExchangeGroupProperty
#define __TIE_CATIExchangeGroupProperty

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeGroupProperty.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeGroupProperty */
#define declare_TIE_CATIExchangeGroupProperty(classe) \
 \
 \
class TIECATIExchangeGroupProperty##classe : public CATIExchangeGroupProperty \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeGroupProperty, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetGroupsNames(CATListOfCATUnicodeString*& oNames) ; \
};



#define ENVTIEdeclare_CATIExchangeGroupProperty(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetGroupsNames(CATListOfCATUnicodeString*& oNames) ; \


#define ENVTIEdefine_CATIExchangeGroupProperty(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetGroupsNames(CATListOfCATUnicodeString*& oNames)  \
{ \
return (ENVTIECALL(CATIExchangeGroupProperty,ENVTIETypeLetter,ENVTIELetter)GetGroupsNames(oNames)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeGroupProperty(classe)    TIECATIExchangeGroupProperty##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeGroupProperty(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeGroupProperty, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeGroupProperty, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeGroupProperty, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeGroupProperty, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeGroupProperty, classe) \
 \
HRESULT  TIECATIExchangeGroupProperty##classe::GetGroupsNames(CATListOfCATUnicodeString*& oNames)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGroupsNames(oNames)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeGroupProperty(classe) \
 \
 \
declare_TIE_CATIExchangeGroupProperty(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeGroupProperty##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeGroupProperty,"CATIExchangeGroupProperty",CATIExchangeGroupProperty::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeGroupProperty(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeGroupProperty, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeGroupProperty##classe(classe::MetaObject(),CATIExchangeGroupProperty::MetaObject(),(void *)CreateTIECATIExchangeGroupProperty##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeGroupProperty(classe) \
 \
 \
declare_TIE_CATIExchangeGroupProperty(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeGroupProperty##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeGroupProperty,"CATIExchangeGroupProperty",CATIExchangeGroupProperty::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeGroupProperty(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeGroupProperty, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeGroupProperty##classe(classe::MetaObject(),CATIExchangeGroupProperty::MetaObject(),(void *)CreateTIECATIExchangeGroupProperty##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeGroupProperty(classe) TIE_CATIExchangeGroupProperty(classe)
#else
#define BOA_CATIExchangeGroupProperty(classe) CATImplementBOA(CATIExchangeGroupProperty, classe)
#endif

#endif
