#ifndef __TIE_CATIEhfBundleSegmentLink
#define __TIE_CATIEhfBundleSegmentLink

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIEhfBundleSegmentLink.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIEhfBundleSegmentLink */
#define declare_TIE_CATIEhfBundleSegmentLink(classe) \
 \
 \
class TIECATIEhfBundleSegmentLink##classe : public CATIEhfBundleSegmentLink \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIEhfBundleSegmentLink, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ListLinkedMechanicalParts(CATListValCATBaseUnknown_var *& opListMechanicalParts) ; \
      virtual HRESULT ListLinkedSupports(CATListValCATBaseUnknown_var *& opListSupports) ; \
};



#define ENVTIEdeclare_CATIEhfBundleSegmentLink(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ListLinkedMechanicalParts(CATListValCATBaseUnknown_var *& opListMechanicalParts) ; \
virtual HRESULT ListLinkedSupports(CATListValCATBaseUnknown_var *& opListSupports) ; \


#define ENVTIEdefine_CATIEhfBundleSegmentLink(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ListLinkedMechanicalParts(CATListValCATBaseUnknown_var *& opListMechanicalParts)  \
{ \
return (ENVTIECALL(CATIEhfBundleSegmentLink,ENVTIETypeLetter,ENVTIELetter)ListLinkedMechanicalParts(opListMechanicalParts)); \
} \
HRESULT  ENVTIEName::ListLinkedSupports(CATListValCATBaseUnknown_var *& opListSupports)  \
{ \
return (ENVTIECALL(CATIEhfBundleSegmentLink,ENVTIETypeLetter,ENVTIELetter)ListLinkedSupports(opListSupports)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIEhfBundleSegmentLink(classe)    TIECATIEhfBundleSegmentLink##classe


/* Common methods inside a TIE */
#define common_TIE_CATIEhfBundleSegmentLink(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIEhfBundleSegmentLink, classe) \
 \
 \
CATImplementTIEMethods(CATIEhfBundleSegmentLink, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIEhfBundleSegmentLink, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIEhfBundleSegmentLink, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIEhfBundleSegmentLink, classe) \
 \
HRESULT  TIECATIEhfBundleSegmentLink##classe::ListLinkedMechanicalParts(CATListValCATBaseUnknown_var *& opListMechanicalParts)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListLinkedMechanicalParts(opListMechanicalParts)); \
} \
HRESULT  TIECATIEhfBundleSegmentLink##classe::ListLinkedSupports(CATListValCATBaseUnknown_var *& opListSupports)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListLinkedSupports(opListSupports)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIEhfBundleSegmentLink(classe) \
 \
 \
declare_TIE_CATIEhfBundleSegmentLink(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEhfBundleSegmentLink##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEhfBundleSegmentLink,"CATIEhfBundleSegmentLink",CATIEhfBundleSegmentLink::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEhfBundleSegmentLink(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIEhfBundleSegmentLink, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEhfBundleSegmentLink##classe(classe::MetaObject(),CATIEhfBundleSegmentLink::MetaObject(),(void *)CreateTIECATIEhfBundleSegmentLink##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIEhfBundleSegmentLink(classe) \
 \
 \
declare_TIE_CATIEhfBundleSegmentLink(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEhfBundleSegmentLink##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEhfBundleSegmentLink,"CATIEhfBundleSegmentLink",CATIEhfBundleSegmentLink::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEhfBundleSegmentLink(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIEhfBundleSegmentLink, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEhfBundleSegmentLink##classe(classe::MetaObject(),CATIEhfBundleSegmentLink::MetaObject(),(void *)CreateTIECATIEhfBundleSegmentLink##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIEhfBundleSegmentLink(classe) TIE_CATIEhfBundleSegmentLink(classe)
#else
#define BOA_CATIEhfBundleSegmentLink(classe) CATImplementBOA(CATIEhfBundleSegmentLink, classe)
#endif

#endif
