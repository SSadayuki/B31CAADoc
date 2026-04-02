#ifndef __TIE_CATIEwrUipBundleSegment
#define __TIE_CATIEwrUipBundleSegment

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIEwrUipBundleSegment.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIEwrUipBundleSegment */
#define declare_TIE_CATIEwrUipBundleSegment(classe) \
 \
 \
class TIECATIEwrUipBundleSegment##classe : public CATIEwrUipBundleSegment \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIEwrUipBundleSegment, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ComputeDiameter (const CATListOfDouble iWireDiameters, double & oBundleSegmentDiameter) ; \
      virtual HRESULT ComputeBendRadius (const CATListOfDouble iWireBendRadius, double & oBundleSegmentBendRadius) ; \
};



#define ENVTIEdeclare_CATIEwrUipBundleSegment(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ComputeDiameter (const CATListOfDouble iWireDiameters, double & oBundleSegmentDiameter) ; \
virtual HRESULT ComputeBendRadius (const CATListOfDouble iWireBendRadius, double & oBundleSegmentBendRadius) ; \


#define ENVTIEdefine_CATIEwrUipBundleSegment(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ComputeDiameter (const CATListOfDouble iWireDiameters, double & oBundleSegmentDiameter)  \
{ \
return (ENVTIECALL(CATIEwrUipBundleSegment,ENVTIETypeLetter,ENVTIELetter)ComputeDiameter (iWireDiameters,oBundleSegmentDiameter)); \
} \
HRESULT  ENVTIEName::ComputeBendRadius (const CATListOfDouble iWireBendRadius, double & oBundleSegmentBendRadius)  \
{ \
return (ENVTIECALL(CATIEwrUipBundleSegment,ENVTIETypeLetter,ENVTIELetter)ComputeBendRadius (iWireBendRadius,oBundleSegmentBendRadius)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIEwrUipBundleSegment(classe)    TIECATIEwrUipBundleSegment##classe


/* Common methods inside a TIE */
#define common_TIE_CATIEwrUipBundleSegment(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIEwrUipBundleSegment, classe) \
 \
 \
CATImplementTIEMethods(CATIEwrUipBundleSegment, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIEwrUipBundleSegment, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIEwrUipBundleSegment, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIEwrUipBundleSegment, classe) \
 \
HRESULT  TIECATIEwrUipBundleSegment##classe::ComputeDiameter (const CATListOfDouble iWireDiameters, double & oBundleSegmentDiameter)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeDiameter (iWireDiameters,oBundleSegmentDiameter)); \
} \
HRESULT  TIECATIEwrUipBundleSegment##classe::ComputeBendRadius (const CATListOfDouble iWireBendRadius, double & oBundleSegmentBendRadius)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ComputeBendRadius (iWireBendRadius,oBundleSegmentBendRadius)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIEwrUipBundleSegment(classe) \
 \
 \
declare_TIE_CATIEwrUipBundleSegment(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEwrUipBundleSegment##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEwrUipBundleSegment,"CATIEwrUipBundleSegment",CATIEwrUipBundleSegment::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEwrUipBundleSegment(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIEwrUipBundleSegment, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEwrUipBundleSegment##classe(classe::MetaObject(),CATIEwrUipBundleSegment::MetaObject(),(void *)CreateTIECATIEwrUipBundleSegment##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIEwrUipBundleSegment(classe) \
 \
 \
declare_TIE_CATIEwrUipBundleSegment(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEwrUipBundleSegment##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEwrUipBundleSegment,"CATIEwrUipBundleSegment",CATIEwrUipBundleSegment::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEwrUipBundleSegment(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIEwrUipBundleSegment, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEwrUipBundleSegment##classe(classe::MetaObject(),CATIEwrUipBundleSegment::MetaObject(),(void *)CreateTIECATIEwrUipBundleSegment##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIEwrUipBundleSegment(classe) TIE_CATIEwrUipBundleSegment(classe)
#else
#define BOA_CATIEwrUipBundleSegment(classe) CATImplementBOA(CATIEwrUipBundleSegment, classe)
#endif

#endif
