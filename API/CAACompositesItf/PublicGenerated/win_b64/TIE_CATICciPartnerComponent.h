#ifndef __TIE_CATICciPartnerComponent
#define __TIE_CATICciPartnerComponent

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICciPartnerComponent.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICciPartnerComponent */
#define declare_TIE_CATICciPartnerComponent(classe) \
 \
 \
class TIECATICciPartnerComponent##classe : public CATICciPartnerComponent \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICciPartnerComponent, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT   GetNameOfComponent(CATUnicodeString & CompName, CATUnicodeString & NLSCompName) ; \
};



#define ENVTIEdeclare_CATICciPartnerComponent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT   GetNameOfComponent(CATUnicodeString & CompName, CATUnicodeString & NLSCompName) ; \


#define ENVTIEdefine_CATICciPartnerComponent(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT    ENVTIEName::GetNameOfComponent(CATUnicodeString & CompName, CATUnicodeString & NLSCompName)  \
{ \
return (ENVTIECALL(CATICciPartnerComponent,ENVTIETypeLetter,ENVTIELetter)GetNameOfComponent(CompName,NLSCompName)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICciPartnerComponent(classe)    TIECATICciPartnerComponent##classe


/* Common methods inside a TIE */
#define common_TIE_CATICciPartnerComponent(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICciPartnerComponent, classe) \
 \
 \
CATImplementTIEMethods(CATICciPartnerComponent, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICciPartnerComponent, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICciPartnerComponent, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICciPartnerComponent, classe) \
 \
HRESULT    TIECATICciPartnerComponent##classe::GetNameOfComponent(CATUnicodeString & CompName, CATUnicodeString & NLSCompName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNameOfComponent(CompName,NLSCompName)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICciPartnerComponent(classe) \
 \
 \
declare_TIE_CATICciPartnerComponent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciPartnerComponent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciPartnerComponent,"CATICciPartnerComponent",CATICciPartnerComponent::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciPartnerComponent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICciPartnerComponent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciPartnerComponent##classe(classe::MetaObject(),CATICciPartnerComponent::MetaObject(),(void *)CreateTIECATICciPartnerComponent##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICciPartnerComponent(classe) \
 \
 \
declare_TIE_CATICciPartnerComponent(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciPartnerComponent##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciPartnerComponent,"CATICciPartnerComponent",CATICciPartnerComponent::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciPartnerComponent(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICciPartnerComponent, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciPartnerComponent##classe(classe::MetaObject(),CATICciPartnerComponent::MetaObject(),(void *)CreateTIECATICciPartnerComponent##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICciPartnerComponent(classe) TIE_CATICciPartnerComponent(classe)
#else
#define BOA_CATICciPartnerComponent(classe) CATImplementBOA(CATICciPartnerComponent, classe)
#endif

#endif
