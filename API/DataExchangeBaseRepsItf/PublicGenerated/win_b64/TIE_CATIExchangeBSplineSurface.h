#ifndef __TIE_CATIExchangeBSplineSurface
#define __TIE_CATIExchangeBSplineSurface

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeBSplineSurface.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeBSplineSurface */
#define declare_TIE_CATIExchangeBSplineSurface(classe) \
 \
 \
class TIECATIExchangeBSplineSurface##classe : public CATIExchangeBSplineSurface \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeBSplineSurface, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetBSplineInfo(CATLONG32 oDegree[2], CATLONG32 oNumPoles[2], CATLONG32 oNumKnots[2], short *oIsRational, short oIsClosed[2], short oIsPeriodic[2], short *oIsPlanar, CATBaseUnknown_var ioRelimitedOnFace = ((CATBaseUnknown*)0) ) const ; \
      virtual HRESULT GetBSplineData(CATLONG32 iPoles, CATLONG32 iKnotsU, CATLONG32 iKnotsV, CATLONG32 iWeights, double *oPoles, double *oKnotsU, double *oKnotsV, double *oWeights, CATBaseUnknown_var ioRelimitedOnFace = ((CATBaseUnknown*)0) ) const ; \
};



#define ENVTIEdeclare_CATIExchangeBSplineSurface(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetBSplineInfo(CATLONG32 oDegree[2], CATLONG32 oNumPoles[2], CATLONG32 oNumKnots[2], short *oIsRational, short oIsClosed[2], short oIsPeriodic[2], short *oIsPlanar, CATBaseUnknown_var ioRelimitedOnFace = ((CATBaseUnknown*)0) ) const ; \
virtual HRESULT GetBSplineData(CATLONG32 iPoles, CATLONG32 iKnotsU, CATLONG32 iKnotsV, CATLONG32 iWeights, double *oPoles, double *oKnotsU, double *oKnotsV, double *oWeights, CATBaseUnknown_var ioRelimitedOnFace = ((CATBaseUnknown*)0) ) const ; \


#define ENVTIEdefine_CATIExchangeBSplineSurface(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetBSplineInfo(CATLONG32 oDegree[2], CATLONG32 oNumPoles[2], CATLONG32 oNumKnots[2], short *oIsRational, short oIsClosed[2], short oIsPeriodic[2], short *oIsPlanar, CATBaseUnknown_var ioRelimitedOnFace ) const  \
{ \
return (ENVTIECALL(CATIExchangeBSplineSurface,ENVTIETypeLetter,ENVTIELetter)GetBSplineInfo(oDegree,oNumPoles,oNumKnots,oIsRational,oIsClosed,oIsPeriodic,oIsPlanar,ioRelimitedOnFace )); \
} \
HRESULT  ENVTIEName::GetBSplineData(CATLONG32 iPoles, CATLONG32 iKnotsU, CATLONG32 iKnotsV, CATLONG32 iWeights, double *oPoles, double *oKnotsU, double *oKnotsV, double *oWeights, CATBaseUnknown_var ioRelimitedOnFace ) const  \
{ \
return (ENVTIECALL(CATIExchangeBSplineSurface,ENVTIETypeLetter,ENVTIELetter)GetBSplineData(iPoles,iKnotsU,iKnotsV,iWeights,oPoles,oKnotsU,oKnotsV,oWeights,ioRelimitedOnFace )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeBSplineSurface(classe)    TIECATIExchangeBSplineSurface##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeBSplineSurface(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeBSplineSurface, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeBSplineSurface, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeBSplineSurface, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeBSplineSurface, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeBSplineSurface, classe) \
 \
HRESULT  TIECATIExchangeBSplineSurface##classe::GetBSplineInfo(CATLONG32 oDegree[2], CATLONG32 oNumPoles[2], CATLONG32 oNumKnots[2], short *oIsRational, short oIsClosed[2], short oIsPeriodic[2], short *oIsPlanar, CATBaseUnknown_var ioRelimitedOnFace ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBSplineInfo(oDegree,oNumPoles,oNumKnots,oIsRational,oIsClosed,oIsPeriodic,oIsPlanar,ioRelimitedOnFace )); \
} \
HRESULT  TIECATIExchangeBSplineSurface##classe::GetBSplineData(CATLONG32 iPoles, CATLONG32 iKnotsU, CATLONG32 iKnotsV, CATLONG32 iWeights, double *oPoles, double *oKnotsU, double *oKnotsV, double *oWeights, CATBaseUnknown_var ioRelimitedOnFace ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBSplineData(iPoles,iKnotsU,iKnotsV,iWeights,oPoles,oKnotsU,oKnotsV,oWeights,ioRelimitedOnFace )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeBSplineSurface(classe) \
 \
 \
declare_TIE_CATIExchangeBSplineSurface(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeBSplineSurface##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeBSplineSurface,"CATIExchangeBSplineSurface",CATIExchangeBSplineSurface::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeBSplineSurface(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeBSplineSurface, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeBSplineSurface##classe(classe::MetaObject(),CATIExchangeBSplineSurface::MetaObject(),(void *)CreateTIECATIExchangeBSplineSurface##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeBSplineSurface(classe) \
 \
 \
declare_TIE_CATIExchangeBSplineSurface(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeBSplineSurface##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeBSplineSurface,"CATIExchangeBSplineSurface",CATIExchangeBSplineSurface::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeBSplineSurface(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeBSplineSurface, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeBSplineSurface##classe(classe::MetaObject(),CATIExchangeBSplineSurface::MetaObject(),(void *)CreateTIECATIExchangeBSplineSurface##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeBSplineSurface(classe) TIE_CATIExchangeBSplineSurface(classe)
#else
#define BOA_CATIExchangeBSplineSurface(classe) CATImplementBOA(CATIExchangeBSplineSurface, classe)
#endif

#endif
