#ifndef __TIE_CATIEhfUIPLengthTolerance
#define __TIE_CATIEhfUIPLengthTolerance

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIEhfUIPLengthTolerance.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIEhfUIPLengthTolerance */
#define declare_TIE_CATIEhfUIPLengthTolerance(classe) \
 \
 \
class TIECATIEhfUIPLengthTolerance##classe : public CATIEhfUIPLengthTolerance \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIEhfUIPLengthTolerance, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ExportLengthToleranceInfo(const CATIEhfLengthTolerance * ipILengthTolerance, const CATBaseUnknown * ipBundleSegment, const CATBaseUnknown * ipDimension) ; \
};



#define ENVTIEdeclare_CATIEhfUIPLengthTolerance(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ExportLengthToleranceInfo(const CATIEhfLengthTolerance * ipILengthTolerance, const CATBaseUnknown * ipBundleSegment, const CATBaseUnknown * ipDimension) ; \


#define ENVTIEdefine_CATIEhfUIPLengthTolerance(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ExportLengthToleranceInfo(const CATIEhfLengthTolerance * ipILengthTolerance, const CATBaseUnknown * ipBundleSegment, const CATBaseUnknown * ipDimension)  \
{ \
return (ENVTIECALL(CATIEhfUIPLengthTolerance,ENVTIETypeLetter,ENVTIELetter)ExportLengthToleranceInfo(ipILengthTolerance,ipBundleSegment,ipDimension)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIEhfUIPLengthTolerance(classe)    TIECATIEhfUIPLengthTolerance##classe


/* Common methods inside a TIE */
#define common_TIE_CATIEhfUIPLengthTolerance(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIEhfUIPLengthTolerance, classe) \
 \
 \
CATImplementTIEMethods(CATIEhfUIPLengthTolerance, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIEhfUIPLengthTolerance, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIEhfUIPLengthTolerance, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIEhfUIPLengthTolerance, classe) \
 \
HRESULT  TIECATIEhfUIPLengthTolerance##classe::ExportLengthToleranceInfo(const CATIEhfLengthTolerance * ipILengthTolerance, const CATBaseUnknown * ipBundleSegment, const CATBaseUnknown * ipDimension)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExportLengthToleranceInfo(ipILengthTolerance,ipBundleSegment,ipDimension)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIEhfUIPLengthTolerance(classe) \
 \
 \
declare_TIE_CATIEhfUIPLengthTolerance(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEhfUIPLengthTolerance##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEhfUIPLengthTolerance,"CATIEhfUIPLengthTolerance",CATIEhfUIPLengthTolerance::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEhfUIPLengthTolerance(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIEhfUIPLengthTolerance, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEhfUIPLengthTolerance##classe(classe::MetaObject(),CATIEhfUIPLengthTolerance::MetaObject(),(void *)CreateTIECATIEhfUIPLengthTolerance##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIEhfUIPLengthTolerance(classe) \
 \
 \
declare_TIE_CATIEhfUIPLengthTolerance(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEhfUIPLengthTolerance##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEhfUIPLengthTolerance,"CATIEhfUIPLengthTolerance",CATIEhfUIPLengthTolerance::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEhfUIPLengthTolerance(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIEhfUIPLengthTolerance, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEhfUIPLengthTolerance##classe(classe::MetaObject(),CATIEhfUIPLengthTolerance::MetaObject(),(void *)CreateTIECATIEhfUIPLengthTolerance##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIEhfUIPLengthTolerance(classe) TIE_CATIEhfUIPLengthTolerance(classe)
#else
#define BOA_CATIEhfUIPLengthTolerance(classe) CATImplementBOA(CATIEhfUIPLengthTolerance, classe)
#endif

#endif
