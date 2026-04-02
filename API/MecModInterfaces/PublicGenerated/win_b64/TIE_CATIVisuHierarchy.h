#ifndef __TIE_CATIVisuHierarchy
#define __TIE_CATIVisuHierarchy

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIVisuHierarchy.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIVisuHierarchy */
#define declare_TIE_CATIVisuHierarchy(classe) \
 \
 \
class TIECATIVisuHierarchy##classe : public CATIVisuHierarchy \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIVisuHierarchy, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetVisualizedChildren(CATVisuFeatureIterator *&oIterator) ; \
      virtual HRESULT GetVisualizingParent(CATVisuFeatureIterator *&oIterator) ; \
};



#define ENVTIEdeclare_CATIVisuHierarchy(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetVisualizedChildren(CATVisuFeatureIterator *&oIterator) ; \
virtual HRESULT GetVisualizingParent(CATVisuFeatureIterator *&oIterator) ; \


#define ENVTIEdefine_CATIVisuHierarchy(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetVisualizedChildren(CATVisuFeatureIterator *&oIterator)  \
{ \
return (ENVTIECALL(CATIVisuHierarchy,ENVTIETypeLetter,ENVTIELetter)GetVisualizedChildren(oIterator)); \
} \
HRESULT  ENVTIEName::GetVisualizingParent(CATVisuFeatureIterator *&oIterator)  \
{ \
return (ENVTIECALL(CATIVisuHierarchy,ENVTIETypeLetter,ENVTIELetter)GetVisualizingParent(oIterator)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIVisuHierarchy(classe)    TIECATIVisuHierarchy##classe


/* Common methods inside a TIE */
#define common_TIE_CATIVisuHierarchy(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIVisuHierarchy, classe) \
 \
 \
CATImplementTIEMethods(CATIVisuHierarchy, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIVisuHierarchy, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIVisuHierarchy, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIVisuHierarchy, classe) \
 \
HRESULT  TIECATIVisuHierarchy##classe::GetVisualizedChildren(CATVisuFeatureIterator *&oIterator)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetVisualizedChildren(oIterator)); \
} \
HRESULT  TIECATIVisuHierarchy##classe::GetVisualizingParent(CATVisuFeatureIterator *&oIterator)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetVisualizingParent(oIterator)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIVisuHierarchy(classe) \
 \
 \
declare_TIE_CATIVisuHierarchy(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIVisuHierarchy##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIVisuHierarchy,"CATIVisuHierarchy",CATIVisuHierarchy::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIVisuHierarchy(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIVisuHierarchy, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIVisuHierarchy##classe(classe::MetaObject(),CATIVisuHierarchy::MetaObject(),(void *)CreateTIECATIVisuHierarchy##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIVisuHierarchy(classe) \
 \
 \
declare_TIE_CATIVisuHierarchy(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIVisuHierarchy##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIVisuHierarchy,"CATIVisuHierarchy",CATIVisuHierarchy::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIVisuHierarchy(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIVisuHierarchy, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIVisuHierarchy##classe(classe::MetaObject(),CATIVisuHierarchy::MetaObject(),(void *)CreateTIECATIVisuHierarchy##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIVisuHierarchy(classe) TIE_CATIVisuHierarchy(classe)
#else
#define BOA_CATIVisuHierarchy(classe) CATImplementBOA(CATIVisuHierarchy, classe)
#endif

#endif
