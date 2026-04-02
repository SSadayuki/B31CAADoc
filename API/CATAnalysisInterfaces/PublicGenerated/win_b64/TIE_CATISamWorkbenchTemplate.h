#ifndef __TIE_CATISamWorkbenchTemplate
#define __TIE_CATISamWorkbenchTemplate

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamWorkbenchTemplate.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamWorkbenchTemplate */
#define declare_TIE_CATISamWorkbenchTemplate(classe) \
 \
 \
class TIECATISamWorkbenchTemplate##classe : public CATISamWorkbenchTemplate \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamWorkbenchTemplate, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetTemplates(CATListOfCATString& oList) ; \
};



#define ENVTIEdeclare_CATISamWorkbenchTemplate(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetTemplates(CATListOfCATString& oList) ; \


#define ENVTIEdefine_CATISamWorkbenchTemplate(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetTemplates(CATListOfCATString& oList)  \
{ \
return (ENVTIECALL(CATISamWorkbenchTemplate,ENVTIETypeLetter,ENVTIELetter)GetTemplates(oList)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamWorkbenchTemplate(classe)    TIECATISamWorkbenchTemplate##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamWorkbenchTemplate(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamWorkbenchTemplate, classe) \
 \
 \
CATImplementTIEMethods(CATISamWorkbenchTemplate, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamWorkbenchTemplate, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamWorkbenchTemplate, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamWorkbenchTemplate, classe) \
 \
HRESULT  TIECATISamWorkbenchTemplate##classe::GetTemplates(CATListOfCATString& oList)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTemplates(oList)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamWorkbenchTemplate(classe) \
 \
 \
declare_TIE_CATISamWorkbenchTemplate(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamWorkbenchTemplate##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamWorkbenchTemplate,"CATISamWorkbenchTemplate",CATISamWorkbenchTemplate::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamWorkbenchTemplate(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamWorkbenchTemplate, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamWorkbenchTemplate##classe(classe::MetaObject(),CATISamWorkbenchTemplate::MetaObject(),(void *)CreateTIECATISamWorkbenchTemplate##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamWorkbenchTemplate(classe) \
 \
 \
declare_TIE_CATISamWorkbenchTemplate(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamWorkbenchTemplate##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamWorkbenchTemplate,"CATISamWorkbenchTemplate",CATISamWorkbenchTemplate::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamWorkbenchTemplate(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamWorkbenchTemplate, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamWorkbenchTemplate##classe(classe::MetaObject(),CATISamWorkbenchTemplate::MetaObject(),(void *)CreateTIECATISamWorkbenchTemplate##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamWorkbenchTemplate(classe) TIE_CATISamWorkbenchTemplate(classe)
#else
#define BOA_CATISamWorkbenchTemplate(classe) CATImplementBOA(CATISamWorkbenchTemplate, classe)
#endif

#endif
