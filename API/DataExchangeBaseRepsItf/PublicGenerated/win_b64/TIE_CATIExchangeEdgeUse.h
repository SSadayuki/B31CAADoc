#ifndef __TIE_CATIExchangeEdgeUse
#define __TIE_CATIExchangeEdgeUse

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeEdgeUse.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeEdgeUse */
#define declare_TIE_CATIExchangeEdgeUse(classe) \
 \
 \
class TIECATIExchangeEdgeUse##classe : public CATIExchangeEdgeUse \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeEdgeUse, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATIExchangeEdge_var GetEdge() ; \
      virtual int IsOpposedToEdge() ; \
      virtual CATIExchangePCurve_var GetPCurve() ; \
      virtual HRESULT GetPParams(double & oStartParam, double & oEndParam) const ; \
      virtual HRESULT GetPVertices(double oStartPoint[2],double oEndPoint[2]) const ; \
};



#define ENVTIEdeclare_CATIExchangeEdgeUse(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATIExchangeEdge_var GetEdge() ; \
virtual int IsOpposedToEdge() ; \
virtual CATIExchangePCurve_var GetPCurve() ; \
virtual HRESULT GetPParams(double & oStartParam, double & oEndParam) const ; \
virtual HRESULT GetPVertices(double oStartPoint[2],double oEndPoint[2]) const ; \


#define ENVTIEdefine_CATIExchangeEdgeUse(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATIExchangeEdge_var  ENVTIEName::GetEdge()  \
{ \
return (ENVTIECALL(CATIExchangeEdgeUse,ENVTIETypeLetter,ENVTIELetter)GetEdge()); \
} \
int  ENVTIEName::IsOpposedToEdge()  \
{ \
return (ENVTIECALL(CATIExchangeEdgeUse,ENVTIETypeLetter,ENVTIELetter)IsOpposedToEdge()); \
} \
CATIExchangePCurve_var  ENVTIEName::GetPCurve()  \
{ \
return (ENVTIECALL(CATIExchangeEdgeUse,ENVTIETypeLetter,ENVTIELetter)GetPCurve()); \
} \
HRESULT  ENVTIEName::GetPParams(double & oStartParam, double & oEndParam) const  \
{ \
return (ENVTIECALL(CATIExchangeEdgeUse,ENVTIETypeLetter,ENVTIELetter)GetPParams(oStartParam,oEndParam)); \
} \
HRESULT  ENVTIEName::GetPVertices(double oStartPoint[2],double oEndPoint[2]) const  \
{ \
return (ENVTIECALL(CATIExchangeEdgeUse,ENVTIETypeLetter,ENVTIELetter)GetPVertices(oStartPoint,oEndPoint)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeEdgeUse(classe)    TIECATIExchangeEdgeUse##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeEdgeUse(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeEdgeUse, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeEdgeUse, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeEdgeUse, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeEdgeUse, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeEdgeUse, classe) \
 \
CATIExchangeEdge_var  TIECATIExchangeEdgeUse##classe::GetEdge()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEdge()); \
} \
int  TIECATIExchangeEdgeUse##classe::IsOpposedToEdge()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsOpposedToEdge()); \
} \
CATIExchangePCurve_var  TIECATIExchangeEdgeUse##classe::GetPCurve()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPCurve()); \
} \
HRESULT  TIECATIExchangeEdgeUse##classe::GetPParams(double & oStartParam, double & oEndParam) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPParams(oStartParam,oEndParam)); \
} \
HRESULT  TIECATIExchangeEdgeUse##classe::GetPVertices(double oStartPoint[2],double oEndPoint[2]) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPVertices(oStartPoint,oEndPoint)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeEdgeUse(classe) \
 \
 \
declare_TIE_CATIExchangeEdgeUse(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeEdgeUse##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeEdgeUse,"CATIExchangeEdgeUse",CATIExchangeEdgeUse::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeEdgeUse(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeEdgeUse, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeEdgeUse##classe(classe::MetaObject(),CATIExchangeEdgeUse::MetaObject(),(void *)CreateTIECATIExchangeEdgeUse##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeEdgeUse(classe) \
 \
 \
declare_TIE_CATIExchangeEdgeUse(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeEdgeUse##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeEdgeUse,"CATIExchangeEdgeUse",CATIExchangeEdgeUse::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeEdgeUse(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeEdgeUse, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeEdgeUse##classe(classe::MetaObject(),CATIExchangeEdgeUse::MetaObject(),(void *)CreateTIECATIExchangeEdgeUse##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeEdgeUse(classe) TIE_CATIExchangeEdgeUse(classe)
#else
#define BOA_CATIExchangeEdgeUse(classe) CATImplementBOA(CATIExchangeEdgeUse, classe)
#endif

#endif
