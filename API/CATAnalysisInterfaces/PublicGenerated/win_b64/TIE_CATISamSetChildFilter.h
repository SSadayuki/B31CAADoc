#ifndef __TIE_CATISamSetChildFilter
#define __TIE_CATISamSetChildFilter

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISamSetChildFilter.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISamSetChildFilter */
#define declare_TIE_CATISamSetChildFilter(classe) \
 \
 \
class TIECATISamSetChildFilter##classe : public CATISamSetChildFilter \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISamSetChildFilter, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual int IsFeatureAcceptedAsChild(const CATISpecObject * ipiFeature) ; \
      virtual int IsFeatureTypeAcceptedAsChild(const CATUnicodeString &iFeatureType) ; \
};



#define ENVTIEdeclare_CATISamSetChildFilter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual int IsFeatureAcceptedAsChild(const CATISpecObject * ipiFeature) ; \
virtual int IsFeatureTypeAcceptedAsChild(const CATUnicodeString &iFeatureType) ; \


#define ENVTIEdefine_CATISamSetChildFilter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
int  ENVTIEName::IsFeatureAcceptedAsChild(const CATISpecObject * ipiFeature)  \
{ \
return (ENVTIECALL(CATISamSetChildFilter,ENVTIETypeLetter,ENVTIELetter)IsFeatureAcceptedAsChild(ipiFeature)); \
} \
int  ENVTIEName::IsFeatureTypeAcceptedAsChild(const CATUnicodeString &iFeatureType)  \
{ \
return (ENVTIECALL(CATISamSetChildFilter,ENVTIETypeLetter,ENVTIELetter)IsFeatureTypeAcceptedAsChild(iFeatureType)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISamSetChildFilter(classe)    TIECATISamSetChildFilter##classe


/* Common methods inside a TIE */
#define common_TIE_CATISamSetChildFilter(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISamSetChildFilter, classe) \
 \
 \
CATImplementTIEMethods(CATISamSetChildFilter, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISamSetChildFilter, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISamSetChildFilter, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISamSetChildFilter, classe) \
 \
int  TIECATISamSetChildFilter##classe::IsFeatureAcceptedAsChild(const CATISpecObject * ipiFeature)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsFeatureAcceptedAsChild(ipiFeature)); \
} \
int  TIECATISamSetChildFilter##classe::IsFeatureTypeAcceptedAsChild(const CATUnicodeString &iFeatureType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsFeatureTypeAcceptedAsChild(iFeatureType)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISamSetChildFilter(classe) \
 \
 \
declare_TIE_CATISamSetChildFilter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamSetChildFilter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamSetChildFilter,"CATISamSetChildFilter",CATISamSetChildFilter::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamSetChildFilter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISamSetChildFilter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamSetChildFilter##classe(classe::MetaObject(),CATISamSetChildFilter::MetaObject(),(void *)CreateTIECATISamSetChildFilter##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISamSetChildFilter(classe) \
 \
 \
declare_TIE_CATISamSetChildFilter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISamSetChildFilter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISamSetChildFilter,"CATISamSetChildFilter",CATISamSetChildFilter::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISamSetChildFilter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISamSetChildFilter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISamSetChildFilter##classe(classe::MetaObject(),CATISamSetChildFilter::MetaObject(),(void *)CreateTIECATISamSetChildFilter##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISamSetChildFilter(classe) TIE_CATISamSetChildFilter(classe)
#else
#define BOA_CATISamSetChildFilter(classe) CATImplementBOA(CATISamSetChildFilter, classe)
#endif

#endif
