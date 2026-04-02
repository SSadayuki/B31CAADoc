#ifndef __TIE_CATIExchangeCurve
#define __TIE_CATIExchangeCurve

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeCurve.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeCurve */
#define declare_TIE_CATIExchangeCurve(classe) \
 \
 \
class TIECATIExchangeCurve##classe : public CATIExchangeCurve \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeCurve, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetEndPoints(double oStartPoint[3], double oEndPoint[3]) const ; \
      virtual HRESULT GetParamExtents(double *oStartParam, double *oEndParam) const ; \
      virtual HRESULT GetParamAtPoint(int iNbPoints, double *iPoints, double *oParam) const ; \
      virtual HRESULT GetCurveType( IID& ouuid) ; \
};



#define ENVTIEdeclare_CATIExchangeCurve(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetEndPoints(double oStartPoint[3], double oEndPoint[3]) const ; \
virtual HRESULT GetParamExtents(double *oStartParam, double *oEndParam) const ; \
virtual HRESULT GetParamAtPoint(int iNbPoints, double *iPoints, double *oParam) const ; \
virtual HRESULT GetCurveType( IID& ouuid) ; \


#define ENVTIEdefine_CATIExchangeCurve(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetEndPoints(double oStartPoint[3], double oEndPoint[3]) const  \
{ \
return (ENVTIECALL(CATIExchangeCurve,ENVTIETypeLetter,ENVTIELetter)GetEndPoints(oStartPoint,oEndPoint)); \
} \
HRESULT  ENVTIEName::GetParamExtents(double *oStartParam, double *oEndParam) const  \
{ \
return (ENVTIECALL(CATIExchangeCurve,ENVTIETypeLetter,ENVTIELetter)GetParamExtents(oStartParam,oEndParam)); \
} \
HRESULT  ENVTIEName::GetParamAtPoint(int iNbPoints, double *iPoints, double *oParam) const  \
{ \
return (ENVTIECALL(CATIExchangeCurve,ENVTIETypeLetter,ENVTIELetter)GetParamAtPoint(iNbPoints,iPoints,oParam)); \
} \
HRESULT  ENVTIEName::GetCurveType( IID& ouuid)  \
{ \
return (ENVTIECALL(CATIExchangeCurve,ENVTIETypeLetter,ENVTIELetter)GetCurveType(ouuid)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeCurve(classe)    TIECATIExchangeCurve##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeCurve(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeCurve, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeCurve, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeCurve, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeCurve, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeCurve, classe) \
 \
HRESULT  TIECATIExchangeCurve##classe::GetEndPoints(double oStartPoint[3], double oEndPoint[3]) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEndPoints(oStartPoint,oEndPoint)); \
} \
HRESULT  TIECATIExchangeCurve##classe::GetParamExtents(double *oStartParam, double *oEndParam) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetParamExtents(oStartParam,oEndParam)); \
} \
HRESULT  TIECATIExchangeCurve##classe::GetParamAtPoint(int iNbPoints, double *iPoints, double *oParam) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetParamAtPoint(iNbPoints,iPoints,oParam)); \
} \
HRESULT  TIECATIExchangeCurve##classe::GetCurveType( IID& ouuid)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCurveType(ouuid)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeCurve(classe) \
 \
 \
declare_TIE_CATIExchangeCurve(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeCurve##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeCurve,"CATIExchangeCurve",CATIExchangeCurve::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeCurve(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeCurve, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeCurve##classe(classe::MetaObject(),CATIExchangeCurve::MetaObject(),(void *)CreateTIECATIExchangeCurve##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeCurve(classe) \
 \
 \
declare_TIE_CATIExchangeCurve(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeCurve##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeCurve,"CATIExchangeCurve",CATIExchangeCurve::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeCurve(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeCurve, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeCurve##classe(classe::MetaObject(),CATIExchangeCurve::MetaObject(),(void *)CreateTIECATIExchangeCurve##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeCurve(classe) TIE_CATIExchangeCurve(classe)
#else
#define BOA_CATIExchangeCurve(classe) CATImplementBOA(CATIExchangeCurve, classe)
#endif

#endif
