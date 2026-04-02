#ifndef __TIE_CATIGPSStructuralTemplate
#define __TIE_CATIGPSStructuralTemplate

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIGPSStructuralTemplate.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIGPSStructuralTemplate */
#define declare_TIE_CATIGPSStructuralTemplate(classe) \
 \
 \
class TIECATIGPSStructuralTemplate##classe : public CATIGPSStructuralTemplate \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIGPSStructuralTemplate, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetTemplates(CATListOfCATString& oList) ; \
};



#define ENVTIEdeclare_CATIGPSStructuralTemplate(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetTemplates(CATListOfCATString& oList) ; \


#define ENVTIEdefine_CATIGPSStructuralTemplate(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetTemplates(CATListOfCATString& oList)  \
{ \
return (ENVTIECALL(CATIGPSStructuralTemplate,ENVTIETypeLetter,ENVTIELetter)GetTemplates(oList)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIGPSStructuralTemplate(classe)    TIECATIGPSStructuralTemplate##classe


/* Common methods inside a TIE */
#define common_TIE_CATIGPSStructuralTemplate(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIGPSStructuralTemplate, classe) \
 \
 \
CATImplementTIEMethods(CATIGPSStructuralTemplate, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIGPSStructuralTemplate, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIGPSStructuralTemplate, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIGPSStructuralTemplate, classe) \
 \
HRESULT  TIECATIGPSStructuralTemplate##classe::GetTemplates(CATListOfCATString& oList)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTemplates(oList)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIGPSStructuralTemplate(classe) \
 \
 \
declare_TIE_CATIGPSStructuralTemplate(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIGPSStructuralTemplate##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIGPSStructuralTemplate,"CATIGPSStructuralTemplate",CATIGPSStructuralTemplate::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIGPSStructuralTemplate(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIGPSStructuralTemplate, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIGPSStructuralTemplate##classe(classe::MetaObject(),CATIGPSStructuralTemplate::MetaObject(),(void *)CreateTIECATIGPSStructuralTemplate##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIGPSStructuralTemplate(classe) \
 \
 \
declare_TIE_CATIGPSStructuralTemplate(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIGPSStructuralTemplate##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIGPSStructuralTemplate,"CATIGPSStructuralTemplate",CATIGPSStructuralTemplate::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIGPSStructuralTemplate(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIGPSStructuralTemplate, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIGPSStructuralTemplate##classe(classe::MetaObject(),CATIGPSStructuralTemplate::MetaObject(),(void *)CreateTIECATIGPSStructuralTemplate##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIGPSStructuralTemplate(classe) TIE_CATIGPSStructuralTemplate(classe)
#else
#define BOA_CATIGPSStructuralTemplate(classe) CATImplementBOA(CATIGPSStructuralTemplate, classe)
#endif

#endif
