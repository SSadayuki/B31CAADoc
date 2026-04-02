#ifndef __TIE_CATIExchangeBSplineCurve
#define __TIE_CATIExchangeBSplineCurve

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeBSplineCurve.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeBSplineCurve */
#define declare_TIE_CATIExchangeBSplineCurve(classe) \
 \
 \
class TIECATIExchangeBSplineCurve##classe : public CATIExchangeBSplineCurve \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeBSplineCurve, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetBSplineInfo(CATLONG32 *oDegree, CATLONG32 *oNumPoles, CATLONG32 *oNumKnots, short *oIsRational, short *oIsClosed, short *oIsPeriodic, short *oIsPlanar, double oPlaneVector[3]) const ; \
      virtual HRESULT GetBSplineData(CATLONG32 iPoles, CATLONG32 iKnots, CATLONG32 iWeights, double *oPoles, double *oKnots, double *oWeights) const ; \
};



#define ENVTIEdeclare_CATIExchangeBSplineCurve(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetBSplineInfo(CATLONG32 *oDegree, CATLONG32 *oNumPoles, CATLONG32 *oNumKnots, short *oIsRational, short *oIsClosed, short *oIsPeriodic, short *oIsPlanar, double oPlaneVector[3]) const ; \
virtual HRESULT GetBSplineData(CATLONG32 iPoles, CATLONG32 iKnots, CATLONG32 iWeights, double *oPoles, double *oKnots, double *oWeights) const ; \


#define ENVTIEdefine_CATIExchangeBSplineCurve(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetBSplineInfo(CATLONG32 *oDegree, CATLONG32 *oNumPoles, CATLONG32 *oNumKnots, short *oIsRational, short *oIsClosed, short *oIsPeriodic, short *oIsPlanar, double oPlaneVector[3]) const  \
{ \
return (ENVTIECALL(CATIExchangeBSplineCurve,ENVTIETypeLetter,ENVTIELetter)GetBSplineInfo(oDegree,oNumPoles,oNumKnots,oIsRational,oIsClosed,oIsPeriodic,oIsPlanar,oPlaneVector)); \
} \
HRESULT  ENVTIEName::GetBSplineData(CATLONG32 iPoles, CATLONG32 iKnots, CATLONG32 iWeights, double *oPoles, double *oKnots, double *oWeights) const  \
{ \
return (ENVTIECALL(CATIExchangeBSplineCurve,ENVTIETypeLetter,ENVTIELetter)GetBSplineData(iPoles,iKnots,iWeights,oPoles,oKnots,oWeights)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeBSplineCurve(classe)    TIECATIExchangeBSplineCurve##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeBSplineCurve(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeBSplineCurve, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeBSplineCurve, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeBSplineCurve, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeBSplineCurve, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeBSplineCurve, classe) \
 \
HRESULT  TIECATIExchangeBSplineCurve##classe::GetBSplineInfo(CATLONG32 *oDegree, CATLONG32 *oNumPoles, CATLONG32 *oNumKnots, short *oIsRational, short *oIsClosed, short *oIsPeriodic, short *oIsPlanar, double oPlaneVector[3]) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBSplineInfo(oDegree,oNumPoles,oNumKnots,oIsRational,oIsClosed,oIsPeriodic,oIsPlanar,oPlaneVector)); \
} \
HRESULT  TIECATIExchangeBSplineCurve##classe::GetBSplineData(CATLONG32 iPoles, CATLONG32 iKnots, CATLONG32 iWeights, double *oPoles, double *oKnots, double *oWeights) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBSplineData(iPoles,iKnots,iWeights,oPoles,oKnots,oWeights)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeBSplineCurve(classe) \
 \
 \
declare_TIE_CATIExchangeBSplineCurve(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeBSplineCurve##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeBSplineCurve,"CATIExchangeBSplineCurve",CATIExchangeBSplineCurve::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeBSplineCurve(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeBSplineCurve, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeBSplineCurve##classe(classe::MetaObject(),CATIExchangeBSplineCurve::MetaObject(),(void *)CreateTIECATIExchangeBSplineCurve##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeBSplineCurve(classe) \
 \
 \
declare_TIE_CATIExchangeBSplineCurve(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeBSplineCurve##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeBSplineCurve,"CATIExchangeBSplineCurve",CATIExchangeBSplineCurve::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeBSplineCurve(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeBSplineCurve, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeBSplineCurve##classe(classe::MetaObject(),CATIExchangeBSplineCurve::MetaObject(),(void *)CreateTIECATIExchangeBSplineCurve##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeBSplineCurve(classe) TIE_CATIExchangeBSplineCurve(classe)
#else
#define BOA_CATIExchangeBSplineCurve(classe) CATImplementBOA(CATIExchangeBSplineCurve, classe)
#endif

#endif
