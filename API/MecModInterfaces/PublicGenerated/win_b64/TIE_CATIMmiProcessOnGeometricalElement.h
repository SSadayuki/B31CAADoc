#ifndef __TIE_CATIMmiProcessOnGeometricalElement
#define __TIE_CATIMmiProcessOnGeometricalElement

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMmiProcessOnGeometricalElement.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMmiProcessOnGeometricalElement */
#define declare_TIE_CATIMmiProcessOnGeometricalElement(classe) \
 \
 \
class TIECATIMmiProcessOnGeometricalElement##classe : public CATIMmiProcessOnGeometricalElement \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMmiProcessOnGeometricalElement, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AfterCreationAndFirstBuild(CATISpecObject_var &iBuildedFeature) ; \
};



#define ENVTIEdeclare_CATIMmiProcessOnGeometricalElement(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AfterCreationAndFirstBuild(CATISpecObject_var &iBuildedFeature) ; \


#define ENVTIEdefine_CATIMmiProcessOnGeometricalElement(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AfterCreationAndFirstBuild(CATISpecObject_var &iBuildedFeature)  \
{ \
return (ENVTIECALL(CATIMmiProcessOnGeometricalElement,ENVTIETypeLetter,ENVTIELetter)AfterCreationAndFirstBuild(iBuildedFeature)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMmiProcessOnGeometricalElement(classe)    TIECATIMmiProcessOnGeometricalElement##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMmiProcessOnGeometricalElement(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMmiProcessOnGeometricalElement, classe) \
 \
 \
CATImplementTIEMethods(CATIMmiProcessOnGeometricalElement, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMmiProcessOnGeometricalElement, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMmiProcessOnGeometricalElement, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMmiProcessOnGeometricalElement, classe) \
 \
HRESULT  TIECATIMmiProcessOnGeometricalElement##classe::AfterCreationAndFirstBuild(CATISpecObject_var &iBuildedFeature)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AfterCreationAndFirstBuild(iBuildedFeature)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMmiProcessOnGeometricalElement(classe) \
 \
 \
declare_TIE_CATIMmiProcessOnGeometricalElement(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMmiProcessOnGeometricalElement##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMmiProcessOnGeometricalElement,"CATIMmiProcessOnGeometricalElement",CATIMmiProcessOnGeometricalElement::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMmiProcessOnGeometricalElement(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMmiProcessOnGeometricalElement, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMmiProcessOnGeometricalElement##classe(classe::MetaObject(),CATIMmiProcessOnGeometricalElement::MetaObject(),(void *)CreateTIECATIMmiProcessOnGeometricalElement##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMmiProcessOnGeometricalElement(classe) \
 \
 \
declare_TIE_CATIMmiProcessOnGeometricalElement(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMmiProcessOnGeometricalElement##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMmiProcessOnGeometricalElement,"CATIMmiProcessOnGeometricalElement",CATIMmiProcessOnGeometricalElement::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMmiProcessOnGeometricalElement(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMmiProcessOnGeometricalElement, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMmiProcessOnGeometricalElement##classe(classe::MetaObject(),CATIMmiProcessOnGeometricalElement::MetaObject(),(void *)CreateTIECATIMmiProcessOnGeometricalElement##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMmiProcessOnGeometricalElement(classe) TIE_CATIMmiProcessOnGeometricalElement(classe)
#else
#define BOA_CATIMmiProcessOnGeometricalElement(classe) CATImplementBOA(CATIMmiProcessOnGeometricalElement, classe)
#endif

#endif
