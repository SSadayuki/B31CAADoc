#ifndef __TIE_CATIExchangeOffsetPCurve
#define __TIE_CATIExchangeOffsetPCurve

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeOffsetPCurve.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeOffsetPCurve */
#define declare_TIE_CATIExchangeOffsetPCurve(classe) \
 \
 \
class TIECATIExchangeOffsetPCurve##classe : public CATIExchangeOffsetPCurve \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeOffsetPCurve, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetOffsetPCurveData(CATIExchangePCurve_var & oBasisCurve, double *oOffsetDistance, double *oOffsetLimits) const ; \
};



#define ENVTIEdeclare_CATIExchangeOffsetPCurve(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetOffsetPCurveData(CATIExchangePCurve_var & oBasisCurve, double *oOffsetDistance, double *oOffsetLimits) const ; \


#define ENVTIEdefine_CATIExchangeOffsetPCurve(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetOffsetPCurveData(CATIExchangePCurve_var & oBasisCurve, double *oOffsetDistance, double *oOffsetLimits) const  \
{ \
return (ENVTIECALL(CATIExchangeOffsetPCurve,ENVTIETypeLetter,ENVTIELetter)GetOffsetPCurveData(oBasisCurve,oOffsetDistance,oOffsetLimits)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeOffsetPCurve(classe)    TIECATIExchangeOffsetPCurve##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeOffsetPCurve(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeOffsetPCurve, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeOffsetPCurve, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeOffsetPCurve, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeOffsetPCurve, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeOffsetPCurve, classe) \
 \
HRESULT  TIECATIExchangeOffsetPCurve##classe::GetOffsetPCurveData(CATIExchangePCurve_var & oBasisCurve, double *oOffsetDistance, double *oOffsetLimits) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOffsetPCurveData(oBasisCurve,oOffsetDistance,oOffsetLimits)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeOffsetPCurve(classe) \
 \
 \
declare_TIE_CATIExchangeOffsetPCurve(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeOffsetPCurve##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeOffsetPCurve,"CATIExchangeOffsetPCurve",CATIExchangeOffsetPCurve::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeOffsetPCurve(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeOffsetPCurve, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeOffsetPCurve##classe(classe::MetaObject(),CATIExchangeOffsetPCurve::MetaObject(),(void *)CreateTIECATIExchangeOffsetPCurve##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeOffsetPCurve(classe) \
 \
 \
declare_TIE_CATIExchangeOffsetPCurve(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeOffsetPCurve##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeOffsetPCurve,"CATIExchangeOffsetPCurve",CATIExchangeOffsetPCurve::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeOffsetPCurve(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeOffsetPCurve, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeOffsetPCurve##classe(classe::MetaObject(),CATIExchangeOffsetPCurve::MetaObject(),(void *)CreateTIECATIExchangeOffsetPCurve##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeOffsetPCurve(classe) TIE_CATIExchangeOffsetPCurve(classe)
#else
#define BOA_CATIExchangeOffsetPCurve(classe) CATImplementBOA(CATIExchangeOffsetPCurve, classe)
#endif

#endif
