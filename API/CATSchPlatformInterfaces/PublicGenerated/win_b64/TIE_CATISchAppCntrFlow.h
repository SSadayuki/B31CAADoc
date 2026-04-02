#ifndef __TIE_CATISchAppCntrFlow
#define __TIE_CATISchAppCntrFlow

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppCntrFlow.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppCntrFlow */
#define declare_TIE_CATISchAppCntrFlow(classe) \
 \
 \
class TIECATISchAppCntrFlow##classe : public CATISchAppCntrFlow \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppCntrFlow, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppGetFlowCapability ( CATSchCntrFlowCapability *oEFlowCapability) ; \
      virtual HRESULT AppSetFlowCapability ( CATSchCntrFlowCapability iEFlowCapability) ; \
      virtual HRESULT AppGetFlowReality ( CATSchCntrFlowReality *oEFlowReality) ; \
      virtual HRESULT AppSetFlowReality ( CATSchCntrFlowReality iEFlowReality) ; \
};



#define ENVTIEdeclare_CATISchAppCntrFlow(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppGetFlowCapability ( CATSchCntrFlowCapability *oEFlowCapability) ; \
virtual HRESULT AppSetFlowCapability ( CATSchCntrFlowCapability iEFlowCapability) ; \
virtual HRESULT AppGetFlowReality ( CATSchCntrFlowReality *oEFlowReality) ; \
virtual HRESULT AppSetFlowReality ( CATSchCntrFlowReality iEFlowReality) ; \


#define ENVTIEdefine_CATISchAppCntrFlow(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppGetFlowCapability ( CATSchCntrFlowCapability *oEFlowCapability)  \
{ \
return (ENVTIECALL(CATISchAppCntrFlow,ENVTIETypeLetter,ENVTIELetter)AppGetFlowCapability (oEFlowCapability)); \
} \
HRESULT  ENVTIEName::AppSetFlowCapability ( CATSchCntrFlowCapability iEFlowCapability)  \
{ \
return (ENVTIECALL(CATISchAppCntrFlow,ENVTIETypeLetter,ENVTIELetter)AppSetFlowCapability (iEFlowCapability)); \
} \
HRESULT  ENVTIEName::AppGetFlowReality ( CATSchCntrFlowReality *oEFlowReality)  \
{ \
return (ENVTIECALL(CATISchAppCntrFlow,ENVTIETypeLetter,ENVTIELetter)AppGetFlowReality (oEFlowReality)); \
} \
HRESULT  ENVTIEName::AppSetFlowReality ( CATSchCntrFlowReality iEFlowReality)  \
{ \
return (ENVTIECALL(CATISchAppCntrFlow,ENVTIETypeLetter,ENVTIELetter)AppSetFlowReality (iEFlowReality)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppCntrFlow(classe)    TIECATISchAppCntrFlow##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppCntrFlow(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppCntrFlow, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppCntrFlow, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppCntrFlow, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppCntrFlow, classe) \
 \
HRESULT  TIECATISchAppCntrFlow##classe::AppGetFlowCapability ( CATSchCntrFlowCapability *oEFlowCapability)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetFlowCapability (oEFlowCapability)); \
} \
HRESULT  TIECATISchAppCntrFlow##classe::AppSetFlowCapability ( CATSchCntrFlowCapability iEFlowCapability)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppSetFlowCapability (iEFlowCapability)); \
} \
HRESULT  TIECATISchAppCntrFlow##classe::AppGetFlowReality ( CATSchCntrFlowReality *oEFlowReality)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetFlowReality (oEFlowReality)); \
} \
HRESULT  TIECATISchAppCntrFlow##classe::AppSetFlowReality ( CATSchCntrFlowReality iEFlowReality)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppSetFlowReality (iEFlowReality)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppCntrFlow(classe) \
 \
 \
declare_TIE_CATISchAppCntrFlow(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppCntrFlow##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppCntrFlow,"CATISchAppCntrFlow",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppCntrFlow(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppCntrFlow, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppCntrFlow##classe(classe::MetaObject(),TIECATISchAppCntrFlow##classe::MetaObject(),(void *)CreateTIECATISchAppCntrFlow##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppCntrFlow(classe) \
 \
 \
declare_TIE_CATISchAppCntrFlow(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppCntrFlow##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppCntrFlow,"CATISchAppCntrFlow",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppCntrFlow(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppCntrFlow, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppCntrFlow##classe(classe::MetaObject(),TIECATISchAppCntrFlow##classe::MetaObject(),(void *)CreateTIECATISchAppCntrFlow##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppCntrFlow(classe) TIE_CATISchAppCntrFlow(classe)
#else
#define BOA_CATISchAppCntrFlow(classe) CATImplementBOA(CATISchAppCntrFlow, classe)
#endif

#endif
