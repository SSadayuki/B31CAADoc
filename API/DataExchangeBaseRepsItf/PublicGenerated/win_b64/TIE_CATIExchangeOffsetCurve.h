#ifndef __TIE_CATIExchangeOffsetCurve
#define __TIE_CATIExchangeOffsetCurve

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeOffsetCurve.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeOffsetCurve */
#define declare_TIE_CATIExchangeOffsetCurve(classe) \
 \
 \
class TIECATIExchangeOffsetCurve##classe : public CATIExchangeOffsetCurve \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeOffsetCurve, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetOffsetCurveData(CATIExchangeCurve_var & oBasisCurve, double *oOffsetDistance, double *oNormalVector, double *oOffsetLimits) const ; \
};



#define ENVTIEdeclare_CATIExchangeOffsetCurve(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetOffsetCurveData(CATIExchangeCurve_var & oBasisCurve, double *oOffsetDistance, double *oNormalVector, double *oOffsetLimits) const ; \


#define ENVTIEdefine_CATIExchangeOffsetCurve(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetOffsetCurveData(CATIExchangeCurve_var & oBasisCurve, double *oOffsetDistance, double *oNormalVector, double *oOffsetLimits) const  \
{ \
return (ENVTIECALL(CATIExchangeOffsetCurve,ENVTIETypeLetter,ENVTIELetter)GetOffsetCurveData(oBasisCurve,oOffsetDistance,oNormalVector,oOffsetLimits)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeOffsetCurve(classe)    TIECATIExchangeOffsetCurve##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeOffsetCurve(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeOffsetCurve, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeOffsetCurve, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeOffsetCurve, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeOffsetCurve, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeOffsetCurve, classe) \
 \
HRESULT  TIECATIExchangeOffsetCurve##classe::GetOffsetCurveData(CATIExchangeCurve_var & oBasisCurve, double *oOffsetDistance, double *oNormalVector, double *oOffsetLimits) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOffsetCurveData(oBasisCurve,oOffsetDistance,oNormalVector,oOffsetLimits)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeOffsetCurve(classe) \
 \
 \
declare_TIE_CATIExchangeOffsetCurve(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeOffsetCurve##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeOffsetCurve,"CATIExchangeOffsetCurve",CATIExchangeOffsetCurve::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeOffsetCurve(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeOffsetCurve, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeOffsetCurve##classe(classe::MetaObject(),CATIExchangeOffsetCurve::MetaObject(),(void *)CreateTIECATIExchangeOffsetCurve##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeOffsetCurve(classe) \
 \
 \
declare_TIE_CATIExchangeOffsetCurve(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeOffsetCurve##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeOffsetCurve,"CATIExchangeOffsetCurve",CATIExchangeOffsetCurve::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeOffsetCurve(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeOffsetCurve, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeOffsetCurve##classe(classe::MetaObject(),CATIExchangeOffsetCurve::MetaObject(),(void *)CreateTIECATIExchangeOffsetCurve##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeOffsetCurve(classe) TIE_CATIExchangeOffsetCurve(classe)
#else
#define BOA_CATIExchangeOffsetCurve(classe) CATImplementBOA(CATIExchangeOffsetCurve, classe)
#endif

#endif
