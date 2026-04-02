#ifndef __TIE_CATIExchangeSurface
#define __TIE_CATIExchangeSurface

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeSurface.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeSurface */
#define declare_TIE_CATIExchangeSurface(classe) \
 \
 \
class TIECATIExchangeSurface##classe : public CATIExchangeSurface \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeSurface, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetNormal(int iNbParams, double *iParams, double *oNormals) const ; \
      virtual HRESULT GetTangents(int iNbParams, double *iParams, double *oUTangents, double *oVTangents) const ; \
      virtual HRESULT GetSurfaceType(IID& ouuid) const ; \
      virtual HRESULT GetParamRangeRect(double oMinParam[2], double oMaxParam[2], CATBaseUnknown_var ioRelimitedOnFace = ((CATBaseUnknown*)0)) const ; \
      virtual HRESULT GetPointAtParam(int iNbParam, double* iParams, double* oPoints) const ; \
};



#define ENVTIEdeclare_CATIExchangeSurface(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetNormal(int iNbParams, double *iParams, double *oNormals) const ; \
virtual HRESULT GetTangents(int iNbParams, double *iParams, double *oUTangents, double *oVTangents) const ; \
virtual HRESULT GetSurfaceType(IID& ouuid) const ; \
virtual HRESULT GetParamRangeRect(double oMinParam[2], double oMaxParam[2], CATBaseUnknown_var ioRelimitedOnFace = ((CATBaseUnknown*)0)) const ; \
virtual HRESULT GetPointAtParam(int iNbParam, double* iParams, double* oPoints) const ; \


#define ENVTIEdefine_CATIExchangeSurface(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetNormal(int iNbParams, double *iParams, double *oNormals) const  \
{ \
return (ENVTIECALL(CATIExchangeSurface,ENVTIETypeLetter,ENVTIELetter)GetNormal(iNbParams,iParams,oNormals)); \
} \
HRESULT  ENVTIEName::GetTangents(int iNbParams, double *iParams, double *oUTangents, double *oVTangents) const  \
{ \
return (ENVTIECALL(CATIExchangeSurface,ENVTIETypeLetter,ENVTIELetter)GetTangents(iNbParams,iParams,oUTangents,oVTangents)); \
} \
HRESULT  ENVTIEName::GetSurfaceType(IID& ouuid) const  \
{ \
return (ENVTIECALL(CATIExchangeSurface,ENVTIETypeLetter,ENVTIELetter)GetSurfaceType(ouuid)); \
} \
HRESULT  ENVTIEName::GetParamRangeRect(double oMinParam[2], double oMaxParam[2], CATBaseUnknown_var ioRelimitedOnFace ) const  \
{ \
return (ENVTIECALL(CATIExchangeSurface,ENVTIETypeLetter,ENVTIELetter)GetParamRangeRect(oMinParam,oMaxParam,ioRelimitedOnFace )); \
} \
HRESULT  ENVTIEName::GetPointAtParam(int iNbParam, double* iParams, double* oPoints) const  \
{ \
return (ENVTIECALL(CATIExchangeSurface,ENVTIETypeLetter,ENVTIELetter)GetPointAtParam(iNbParam,iParams,oPoints)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeSurface(classe)    TIECATIExchangeSurface##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeSurface(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeSurface, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeSurface, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeSurface, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeSurface, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeSurface, classe) \
 \
HRESULT  TIECATIExchangeSurface##classe::GetNormal(int iNbParams, double *iParams, double *oNormals) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNormal(iNbParams,iParams,oNormals)); \
} \
HRESULT  TIECATIExchangeSurface##classe::GetTangents(int iNbParams, double *iParams, double *oUTangents, double *oVTangents) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTangents(iNbParams,iParams,oUTangents,oVTangents)); \
} \
HRESULT  TIECATIExchangeSurface##classe::GetSurfaceType(IID& ouuid) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSurfaceType(ouuid)); \
} \
HRESULT  TIECATIExchangeSurface##classe::GetParamRangeRect(double oMinParam[2], double oMaxParam[2], CATBaseUnknown_var ioRelimitedOnFace ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetParamRangeRect(oMinParam,oMaxParam,ioRelimitedOnFace )); \
} \
HRESULT  TIECATIExchangeSurface##classe::GetPointAtParam(int iNbParam, double* iParams, double* oPoints) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPointAtParam(iNbParam,iParams,oPoints)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeSurface(classe) \
 \
 \
declare_TIE_CATIExchangeSurface(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeSurface##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeSurface,"CATIExchangeSurface",CATIExchangeSurface::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeSurface(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeSurface, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeSurface##classe(classe::MetaObject(),CATIExchangeSurface::MetaObject(),(void *)CreateTIECATIExchangeSurface##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeSurface(classe) \
 \
 \
declare_TIE_CATIExchangeSurface(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeSurface##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeSurface,"CATIExchangeSurface",CATIExchangeSurface::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeSurface(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeSurface, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeSurface##classe(classe::MetaObject(),CATIExchangeSurface::MetaObject(),(void *)CreateTIECATIExchangeSurface##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeSurface(classe) TIE_CATIExchangeSurface(classe)
#else
#define BOA_CATIExchangeSurface(classe) CATImplementBOA(CATIExchangeSurface, classe)
#endif

#endif
