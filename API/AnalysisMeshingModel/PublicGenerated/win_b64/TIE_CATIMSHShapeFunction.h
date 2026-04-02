#ifndef __TIE_CATIMSHShapeFunction
#define __TIE_CATIMSHShapeFunction

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMSHShapeFunction.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMSHShapeFunction */
#define declare_TIE_CATIMSHShapeFunction(classe) \
 \
 \
class TIECATIMSHShapeFunction##classe : public CATIMSHShapeFunction \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMSHShapeFunction, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual const CATMSHFunctionsInfos * GetFunctionsInfos () const ; \
      virtual HRESULT EvalFunctions ( const double * Parameters, double * Functions ) const ; \
      virtual HRESULT EvalDerivateFunctions ( const double * Parameters, double * Derivates ) const ; \
      virtual HRESULT ClipParameters ( const double Parameters[], double ClippedParameters[], int &Clip ) const ; \
      virtual const double * GetNodesParameters () const ; \
      virtual const CATMSHIntegrationScheme * GetIntegrationScheme ( CATMSHIntegrationType Type ) const ; \
};



#define ENVTIEdeclare_CATIMSHShapeFunction(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual const CATMSHFunctionsInfos * GetFunctionsInfos () const ; \
virtual HRESULT EvalFunctions ( const double * Parameters, double * Functions ) const ; \
virtual HRESULT EvalDerivateFunctions ( const double * Parameters, double * Derivates ) const ; \
virtual HRESULT ClipParameters ( const double Parameters[], double ClippedParameters[], int &Clip ) const ; \
virtual const double * GetNodesParameters () const ; \
virtual const CATMSHIntegrationScheme * GetIntegrationScheme ( CATMSHIntegrationType Type ) const ; \


#define ENVTIEdefine_CATIMSHShapeFunction(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
const CATMSHFunctionsInfos *  ENVTIEName::GetFunctionsInfos () const  \
{ \
return (ENVTIECALL(CATIMSHShapeFunction,ENVTIETypeLetter,ENVTIELetter)GetFunctionsInfos ()); \
} \
HRESULT  ENVTIEName::EvalFunctions ( const double * Parameters, double * Functions ) const  \
{ \
return (ENVTIECALL(CATIMSHShapeFunction,ENVTIETypeLetter,ENVTIELetter)EvalFunctions (Parameters,Functions )); \
} \
HRESULT  ENVTIEName::EvalDerivateFunctions ( const double * Parameters, double * Derivates ) const  \
{ \
return (ENVTIECALL(CATIMSHShapeFunction,ENVTIETypeLetter,ENVTIELetter)EvalDerivateFunctions (Parameters,Derivates )); \
} \
HRESULT  ENVTIEName::ClipParameters ( const double Parameters[], double ClippedParameters[], int &Clip ) const  \
{ \
return (ENVTIECALL(CATIMSHShapeFunction,ENVTIETypeLetter,ENVTIELetter)ClipParameters (Parameters,ClippedParameters,Clip )); \
} \
const double *  ENVTIEName::GetNodesParameters () const  \
{ \
return (ENVTIECALL(CATIMSHShapeFunction,ENVTIETypeLetter,ENVTIELetter)GetNodesParameters ()); \
} \
const CATMSHIntegrationScheme *  ENVTIEName::GetIntegrationScheme ( CATMSHIntegrationType Type ) const  \
{ \
return (ENVTIECALL(CATIMSHShapeFunction,ENVTIETypeLetter,ENVTIELetter)GetIntegrationScheme (Type )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMSHShapeFunction(classe)    TIECATIMSHShapeFunction##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMSHShapeFunction(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMSHShapeFunction, classe) \
 \
 \
CATImplementTIEMethods(CATIMSHShapeFunction, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMSHShapeFunction, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMSHShapeFunction, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMSHShapeFunction, classe) \
 \
const CATMSHFunctionsInfos *  TIECATIMSHShapeFunction##classe::GetFunctionsInfos () const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFunctionsInfos ()); \
} \
HRESULT  TIECATIMSHShapeFunction##classe::EvalFunctions ( const double * Parameters, double * Functions ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EvalFunctions (Parameters,Functions )); \
} \
HRESULT  TIECATIMSHShapeFunction##classe::EvalDerivateFunctions ( const double * Parameters, double * Derivates ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EvalDerivateFunctions (Parameters,Derivates )); \
} \
HRESULT  TIECATIMSHShapeFunction##classe::ClipParameters ( const double Parameters[], double ClippedParameters[], int &Clip ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ClipParameters (Parameters,ClippedParameters,Clip )); \
} \
const double *  TIECATIMSHShapeFunction##classe::GetNodesParameters () const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNodesParameters ()); \
} \
const CATMSHIntegrationScheme *  TIECATIMSHShapeFunction##classe::GetIntegrationScheme ( CATMSHIntegrationType Type ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetIntegrationScheme (Type )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMSHShapeFunction(classe) \
 \
 \
declare_TIE_CATIMSHShapeFunction(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMSHShapeFunction##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMSHShapeFunction,"CATIMSHShapeFunction",CATIMSHShapeFunction::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMSHShapeFunction(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMSHShapeFunction, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMSHShapeFunction##classe(classe::MetaObject(),CATIMSHShapeFunction::MetaObject(),(void *)CreateTIECATIMSHShapeFunction##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMSHShapeFunction(classe) \
 \
 \
declare_TIE_CATIMSHShapeFunction(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMSHShapeFunction##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMSHShapeFunction,"CATIMSHShapeFunction",CATIMSHShapeFunction::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMSHShapeFunction(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMSHShapeFunction, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMSHShapeFunction##classe(classe::MetaObject(),CATIMSHShapeFunction::MetaObject(),(void *)CreateTIECATIMSHShapeFunction##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMSHShapeFunction(classe) TIE_CATIMSHShapeFunction(classe)
#else
#define BOA_CATIMSHShapeFunction(classe) CATImplementBOA(CATIMSHShapeFunction, classe)
#endif

#endif
