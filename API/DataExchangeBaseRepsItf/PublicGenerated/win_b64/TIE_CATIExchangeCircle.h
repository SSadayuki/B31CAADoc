#ifndef __TIE_CATIExchangeCircle
#define __TIE_CATIExchangeCircle

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeCircle.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeCircle */
#define declare_TIE_CATIExchangeCircle(classe) \
 \
 \
class TIECATIExchangeCircle##classe : public CATIExchangeCircle \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeCircle, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetCircleData(double *oCenterPoint, double *oAxisVector, double *oRadius) const ; \
      virtual HRESULT GetPointAtParam(int iParam, double* iParams, double* oPoints) const ; \
};



#define ENVTIEdeclare_CATIExchangeCircle(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetCircleData(double *oCenterPoint, double *oAxisVector, double *oRadius) const ; \
virtual HRESULT GetPointAtParam(int iParam, double* iParams, double* oPoints) const ; \


#define ENVTIEdefine_CATIExchangeCircle(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetCircleData(double *oCenterPoint, double *oAxisVector, double *oRadius) const  \
{ \
return (ENVTIECALL(CATIExchangeCircle,ENVTIETypeLetter,ENVTIELetter)GetCircleData(oCenterPoint,oAxisVector,oRadius)); \
} \
HRESULT  ENVTIEName::GetPointAtParam(int iParam, double* iParams, double* oPoints) const  \
{ \
return (ENVTIECALL(CATIExchangeCircle,ENVTIETypeLetter,ENVTIELetter)GetPointAtParam(iParam,iParams,oPoints)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeCircle(classe)    TIECATIExchangeCircle##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeCircle(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeCircle, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeCircle, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeCircle, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeCircle, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeCircle, classe) \
 \
HRESULT  TIECATIExchangeCircle##classe::GetCircleData(double *oCenterPoint, double *oAxisVector, double *oRadius) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCircleData(oCenterPoint,oAxisVector,oRadius)); \
} \
HRESULT  TIECATIExchangeCircle##classe::GetPointAtParam(int iParam, double* iParams, double* oPoints) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPointAtParam(iParam,iParams,oPoints)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeCircle(classe) \
 \
 \
declare_TIE_CATIExchangeCircle(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeCircle##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeCircle,"CATIExchangeCircle",CATIExchangeCircle::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeCircle(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeCircle, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeCircle##classe(classe::MetaObject(),CATIExchangeCircle::MetaObject(),(void *)CreateTIECATIExchangeCircle##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeCircle(classe) \
 \
 \
declare_TIE_CATIExchangeCircle(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeCircle##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeCircle,"CATIExchangeCircle",CATIExchangeCircle::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeCircle(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeCircle, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeCircle##classe(classe::MetaObject(),CATIExchangeCircle::MetaObject(),(void *)CreateTIECATIExchangeCircle##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeCircle(classe) TIE_CATIExchangeCircle(classe)
#else
#define BOA_CATIExchangeCircle(classe) CATImplementBOA(CATIExchangeCircle, classe)
#endif

#endif
