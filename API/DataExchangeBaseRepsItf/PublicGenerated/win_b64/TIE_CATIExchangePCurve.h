#ifndef __TIE_CATIExchangePCurve
#define __TIE_CATIExchangePCurve

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangePCurve.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangePCurve */
#define declare_TIE_CATIExchangePCurve(classe) \
 \
 \
class TIECATIExchangePCurve##classe : public CATIExchangePCurve \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangePCurve, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetEndPPoints(double oStartPoint[2], double oEndPoint[2]) const ; \
      virtual HRESULT GetPParamExtents(double *oStartParam, double *oEndParam) const ; \
      virtual HRESULT GetPParamAtPoint(int iNbPoints, double *iPoints, double *oParam) const ; \
      virtual HRESULT GetPCurveType( IID& ouuid) ; \
      virtual CATIExchangeSurface_var GetSupportSurface() ; \
};



#define ENVTIEdeclare_CATIExchangePCurve(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetEndPPoints(double oStartPoint[2], double oEndPoint[2]) const ; \
virtual HRESULT GetPParamExtents(double *oStartParam, double *oEndParam) const ; \
virtual HRESULT GetPParamAtPoint(int iNbPoints, double *iPoints, double *oParam) const ; \
virtual HRESULT GetPCurveType( IID& ouuid) ; \
virtual CATIExchangeSurface_var GetSupportSurface() ; \


#define ENVTIEdefine_CATIExchangePCurve(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetEndPPoints(double oStartPoint[2], double oEndPoint[2]) const  \
{ \
return (ENVTIECALL(CATIExchangePCurve,ENVTIETypeLetter,ENVTIELetter)GetEndPPoints(oStartPoint,oEndPoint)); \
} \
HRESULT  ENVTIEName::GetPParamExtents(double *oStartParam, double *oEndParam) const  \
{ \
return (ENVTIECALL(CATIExchangePCurve,ENVTIETypeLetter,ENVTIELetter)GetPParamExtents(oStartParam,oEndParam)); \
} \
HRESULT  ENVTIEName::GetPParamAtPoint(int iNbPoints, double *iPoints, double *oParam) const  \
{ \
return (ENVTIECALL(CATIExchangePCurve,ENVTIETypeLetter,ENVTIELetter)GetPParamAtPoint(iNbPoints,iPoints,oParam)); \
} \
HRESULT  ENVTIEName::GetPCurveType( IID& ouuid)  \
{ \
return (ENVTIECALL(CATIExchangePCurve,ENVTIETypeLetter,ENVTIELetter)GetPCurveType(ouuid)); \
} \
CATIExchangeSurface_var  ENVTIEName::GetSupportSurface()  \
{ \
return (ENVTIECALL(CATIExchangePCurve,ENVTIETypeLetter,ENVTIELetter)GetSupportSurface()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangePCurve(classe)    TIECATIExchangePCurve##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangePCurve(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangePCurve, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangePCurve, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangePCurve, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangePCurve, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangePCurve, classe) \
 \
HRESULT  TIECATIExchangePCurve##classe::GetEndPPoints(double oStartPoint[2], double oEndPoint[2]) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEndPPoints(oStartPoint,oEndPoint)); \
} \
HRESULT  TIECATIExchangePCurve##classe::GetPParamExtents(double *oStartParam, double *oEndParam) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPParamExtents(oStartParam,oEndParam)); \
} \
HRESULT  TIECATIExchangePCurve##classe::GetPParamAtPoint(int iNbPoints, double *iPoints, double *oParam) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPParamAtPoint(iNbPoints,iPoints,oParam)); \
} \
HRESULT  TIECATIExchangePCurve##classe::GetPCurveType( IID& ouuid)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPCurveType(ouuid)); \
} \
CATIExchangeSurface_var  TIECATIExchangePCurve##classe::GetSupportSurface()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSupportSurface()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangePCurve(classe) \
 \
 \
declare_TIE_CATIExchangePCurve(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangePCurve##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangePCurve,"CATIExchangePCurve",CATIExchangePCurve::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangePCurve(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangePCurve, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangePCurve##classe(classe::MetaObject(),CATIExchangePCurve::MetaObject(),(void *)CreateTIECATIExchangePCurve##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangePCurve(classe) \
 \
 \
declare_TIE_CATIExchangePCurve(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangePCurve##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangePCurve,"CATIExchangePCurve",CATIExchangePCurve::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangePCurve(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangePCurve, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangePCurve##classe(classe::MetaObject(),CATIExchangePCurve::MetaObject(),(void *)CreateTIECATIExchangePCurve##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangePCurve(classe) TIE_CATIExchangePCurve(classe)
#else
#define BOA_CATIExchangePCurve(classe) CATImplementBOA(CATIExchangePCurve, classe)
#endif

#endif
