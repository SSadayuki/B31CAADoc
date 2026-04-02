#ifndef __TIE_CATIExchangeBSplinePCurve
#define __TIE_CATIExchangeBSplinePCurve

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeBSplinePCurve.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeBSplinePCurve */
#define declare_TIE_CATIExchangeBSplinePCurve(classe) \
 \
 \
class TIECATIExchangeBSplinePCurve##classe : public CATIExchangeBSplinePCurve \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeBSplinePCurve, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetBSplinePCurveInfo(CATLONG32 *oDegree, CATLONG32 *oNumPoles, CATLONG32 *oNumKnots, short *oIsRational, short *oIsClosed, short *oIsPeriodic) const ; \
      virtual HRESULT GetBSplinePCurveData(CATLONG32 iPoles, CATLONG32 iKnots, CATLONG32 iWeights, double *oPoles, double *oKnots, double *oWeights) const ; \
};



#define ENVTIEdeclare_CATIExchangeBSplinePCurve(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetBSplinePCurveInfo(CATLONG32 *oDegree, CATLONG32 *oNumPoles, CATLONG32 *oNumKnots, short *oIsRational, short *oIsClosed, short *oIsPeriodic) const ; \
virtual HRESULT GetBSplinePCurveData(CATLONG32 iPoles, CATLONG32 iKnots, CATLONG32 iWeights, double *oPoles, double *oKnots, double *oWeights) const ; \


#define ENVTIEdefine_CATIExchangeBSplinePCurve(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetBSplinePCurveInfo(CATLONG32 *oDegree, CATLONG32 *oNumPoles, CATLONG32 *oNumKnots, short *oIsRational, short *oIsClosed, short *oIsPeriodic) const  \
{ \
return (ENVTIECALL(CATIExchangeBSplinePCurve,ENVTIETypeLetter,ENVTIELetter)GetBSplinePCurveInfo(oDegree,oNumPoles,oNumKnots,oIsRational,oIsClosed,oIsPeriodic)); \
} \
HRESULT  ENVTIEName::GetBSplinePCurveData(CATLONG32 iPoles, CATLONG32 iKnots, CATLONG32 iWeights, double *oPoles, double *oKnots, double *oWeights) const  \
{ \
return (ENVTIECALL(CATIExchangeBSplinePCurve,ENVTIETypeLetter,ENVTIELetter)GetBSplinePCurveData(iPoles,iKnots,iWeights,oPoles,oKnots,oWeights)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeBSplinePCurve(classe)    TIECATIExchangeBSplinePCurve##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeBSplinePCurve(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeBSplinePCurve, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeBSplinePCurve, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeBSplinePCurve, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeBSplinePCurve, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeBSplinePCurve, classe) \
 \
HRESULT  TIECATIExchangeBSplinePCurve##classe::GetBSplinePCurveInfo(CATLONG32 *oDegree, CATLONG32 *oNumPoles, CATLONG32 *oNumKnots, short *oIsRational, short *oIsClosed, short *oIsPeriodic) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBSplinePCurveInfo(oDegree,oNumPoles,oNumKnots,oIsRational,oIsClosed,oIsPeriodic)); \
} \
HRESULT  TIECATIExchangeBSplinePCurve##classe::GetBSplinePCurveData(CATLONG32 iPoles, CATLONG32 iKnots, CATLONG32 iWeights, double *oPoles, double *oKnots, double *oWeights) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBSplinePCurveData(iPoles,iKnots,iWeights,oPoles,oKnots,oWeights)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeBSplinePCurve(classe) \
 \
 \
declare_TIE_CATIExchangeBSplinePCurve(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeBSplinePCurve##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeBSplinePCurve,"CATIExchangeBSplinePCurve",CATIExchangeBSplinePCurve::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeBSplinePCurve(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeBSplinePCurve, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeBSplinePCurve##classe(classe::MetaObject(),CATIExchangeBSplinePCurve::MetaObject(),(void *)CreateTIECATIExchangeBSplinePCurve##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeBSplinePCurve(classe) \
 \
 \
declare_TIE_CATIExchangeBSplinePCurve(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeBSplinePCurve##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeBSplinePCurve,"CATIExchangeBSplinePCurve",CATIExchangeBSplinePCurve::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeBSplinePCurve(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeBSplinePCurve, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeBSplinePCurve##classe(classe::MetaObject(),CATIExchangeBSplinePCurve::MetaObject(),(void *)CreateTIECATIExchangeBSplinePCurve##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeBSplinePCurve(classe) TIE_CATIExchangeBSplinePCurve(classe)
#else
#define BOA_CATIExchangeBSplinePCurve(classe) CATImplementBOA(CATIExchangeBSplinePCurve, classe)
#endif

#endif
