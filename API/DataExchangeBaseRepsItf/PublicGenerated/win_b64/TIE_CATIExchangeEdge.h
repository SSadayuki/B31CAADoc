#ifndef __TIE_CATIExchangeEdge
#define __TIE_CATIExchangeEdge

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeEdge.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeEdge */
#define declare_TIE_CATIExchangeEdge(classe) \
 \
 \
class TIECATIExchangeEdge##classe : public CATIExchangeEdge \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeEdge, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATIExchangeCurve_var GetCurve() ; \
      virtual CATIExchangeVertex_var GetStartVertex() ; \
      virtual CATIExchangeVertex_var GetEndVertex() ; \
      virtual HRESULT GetLimitsOnCv(double * oValue) ; \
      virtual int IsParamReversed() ; \
      virtual HRESULT GetGeometricProperties (double & oLength) const ; \
};



#define ENVTIEdeclare_CATIExchangeEdge(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATIExchangeCurve_var GetCurve() ; \
virtual CATIExchangeVertex_var GetStartVertex() ; \
virtual CATIExchangeVertex_var GetEndVertex() ; \
virtual HRESULT GetLimitsOnCv(double * oValue) ; \
virtual int IsParamReversed() ; \
virtual HRESULT GetGeometricProperties (double & oLength) const ; \


#define ENVTIEdefine_CATIExchangeEdge(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATIExchangeCurve_var  ENVTIEName::GetCurve()  \
{ \
return (ENVTIECALL(CATIExchangeEdge,ENVTIETypeLetter,ENVTIELetter)GetCurve()); \
} \
CATIExchangeVertex_var  ENVTIEName::GetStartVertex()  \
{ \
return (ENVTIECALL(CATIExchangeEdge,ENVTIETypeLetter,ENVTIELetter)GetStartVertex()); \
} \
CATIExchangeVertex_var  ENVTIEName::GetEndVertex()  \
{ \
return (ENVTIECALL(CATIExchangeEdge,ENVTIETypeLetter,ENVTIELetter)GetEndVertex()); \
} \
HRESULT  ENVTIEName::GetLimitsOnCv(double * oValue)  \
{ \
return (ENVTIECALL(CATIExchangeEdge,ENVTIETypeLetter,ENVTIELetter)GetLimitsOnCv(oValue)); \
} \
int  ENVTIEName::IsParamReversed()  \
{ \
return (ENVTIECALL(CATIExchangeEdge,ENVTIETypeLetter,ENVTIELetter)IsParamReversed()); \
} \
HRESULT  ENVTIEName::GetGeometricProperties (double & oLength) const  \
{ \
return (ENVTIECALL(CATIExchangeEdge,ENVTIETypeLetter,ENVTIELetter)GetGeometricProperties (oLength)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeEdge(classe)    TIECATIExchangeEdge##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeEdge(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeEdge, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeEdge, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeEdge, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeEdge, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeEdge, classe) \
 \
CATIExchangeCurve_var  TIECATIExchangeEdge##classe::GetCurve()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCurve()); \
} \
CATIExchangeVertex_var  TIECATIExchangeEdge##classe::GetStartVertex()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetStartVertex()); \
} \
CATIExchangeVertex_var  TIECATIExchangeEdge##classe::GetEndVertex()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEndVertex()); \
} \
HRESULT  TIECATIExchangeEdge##classe::GetLimitsOnCv(double * oValue)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLimitsOnCv(oValue)); \
} \
int  TIECATIExchangeEdge##classe::IsParamReversed()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsParamReversed()); \
} \
HRESULT  TIECATIExchangeEdge##classe::GetGeometricProperties (double & oLength) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGeometricProperties (oLength)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeEdge(classe) \
 \
 \
declare_TIE_CATIExchangeEdge(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeEdge##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeEdge,"CATIExchangeEdge",CATIExchangeEdge::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeEdge(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeEdge, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeEdge##classe(classe::MetaObject(),CATIExchangeEdge::MetaObject(),(void *)CreateTIECATIExchangeEdge##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeEdge(classe) \
 \
 \
declare_TIE_CATIExchangeEdge(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeEdge##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeEdge,"CATIExchangeEdge",CATIExchangeEdge::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeEdge(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeEdge, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeEdge##classe(classe::MetaObject(),CATIExchangeEdge::MetaObject(),(void *)CreateTIECATIExchangeEdge##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeEdge(classe) TIE_CATIExchangeEdge(classe)
#else
#define BOA_CATIExchangeEdge(classe) CATImplementBOA(CATIExchangeEdge, classe)
#endif

#endif
