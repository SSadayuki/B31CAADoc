#ifndef __TIE_CATICciPhysicalEntityAdvancedParams
#define __TIE_CATICciPhysicalEntityAdvancedParams

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICciPhysicalEntityAdvancedParams.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICciPhysicalEntityAdvancedParams */
#define declare_TIE_CATICciPhysicalEntityAdvancedParams(classe) \
 \
 \
class TIECATICciPhysicalEntityAdvancedParams##classe : public CATICciPhysicalEntityAdvancedParams \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICciPhysicalEntityAdvancedParams, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetNameOfComponent       (CATUnicodeString & oComponentId, CATUnicodeString & oNLSComponentId) ; \
      virtual HRESULT GetListOfParametersInfos (CATListOfCATUnicodeString &oListOfParameterNames); \
      virtual HRESULT GetParameterValuation (const CATICciPhysicalEntity_var ispPlyEntity,const CATUnicodeString iParameterName, int & oHasAValue, CATUnicodeString &oValueAsString) ; \
      virtual HRESULT SetParameterValuation (const CATICciPhysicalEntity_var ispPlyEntity,const CATUnicodeString iParameterName, const CATUnicodeString iValueAsString, int & oIsValuated) ; \
};



#define ENVTIEdeclare_CATICciPhysicalEntityAdvancedParams(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetNameOfComponent       (CATUnicodeString & oComponentId, CATUnicodeString & oNLSComponentId) ; \
virtual HRESULT GetListOfParametersInfos (CATListOfCATUnicodeString &oListOfParameterNames); \
virtual HRESULT GetParameterValuation (const CATICciPhysicalEntity_var ispPlyEntity,const CATUnicodeString iParameterName, int & oHasAValue, CATUnicodeString &oValueAsString) ; \
virtual HRESULT SetParameterValuation (const CATICciPhysicalEntity_var ispPlyEntity,const CATUnicodeString iParameterName, const CATUnicodeString iValueAsString, int & oIsValuated) ; \


#define ENVTIEdefine_CATICciPhysicalEntityAdvancedParams(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetNameOfComponent       (CATUnicodeString & oComponentId, CATUnicodeString & oNLSComponentId)  \
{ \
return (ENVTIECALL(CATICciPhysicalEntityAdvancedParams,ENVTIETypeLetter,ENVTIELetter)GetNameOfComponent       (oComponentId,oNLSComponentId)); \
} \
HRESULT  ENVTIEName::GetListOfParametersInfos (CATListOfCATUnicodeString &oListOfParameterNames) \
{ \
return (ENVTIECALL(CATICciPhysicalEntityAdvancedParams,ENVTIETypeLetter,ENVTIELetter)GetListOfParametersInfos (oListOfParameterNames)); \
} \
HRESULT  ENVTIEName::GetParameterValuation (const CATICciPhysicalEntity_var ispPlyEntity,const CATUnicodeString iParameterName, int & oHasAValue, CATUnicodeString &oValueAsString)  \
{ \
return (ENVTIECALL(CATICciPhysicalEntityAdvancedParams,ENVTIETypeLetter,ENVTIELetter)GetParameterValuation (ispPlyEntity,iParameterName,oHasAValue,oValueAsString)); \
} \
HRESULT  ENVTIEName::SetParameterValuation (const CATICciPhysicalEntity_var ispPlyEntity,const CATUnicodeString iParameterName, const CATUnicodeString iValueAsString, int & oIsValuated)  \
{ \
return (ENVTIECALL(CATICciPhysicalEntityAdvancedParams,ENVTIETypeLetter,ENVTIELetter)SetParameterValuation (ispPlyEntity,iParameterName,iValueAsString,oIsValuated)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICciPhysicalEntityAdvancedParams(classe)    TIECATICciPhysicalEntityAdvancedParams##classe


/* Common methods inside a TIE */
#define common_TIE_CATICciPhysicalEntityAdvancedParams(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICciPhysicalEntityAdvancedParams, classe) \
 \
 \
CATImplementTIEMethods(CATICciPhysicalEntityAdvancedParams, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICciPhysicalEntityAdvancedParams, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICciPhysicalEntityAdvancedParams, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICciPhysicalEntityAdvancedParams, classe) \
 \
HRESULT  TIECATICciPhysicalEntityAdvancedParams##classe::GetNameOfComponent       (CATUnicodeString & oComponentId, CATUnicodeString & oNLSComponentId)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNameOfComponent       (oComponentId,oNLSComponentId)); \
} \
HRESULT  TIECATICciPhysicalEntityAdvancedParams##classe::GetListOfParametersInfos (CATListOfCATUnicodeString &oListOfParameterNames) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfParametersInfos (oListOfParameterNames)); \
} \
HRESULT  TIECATICciPhysicalEntityAdvancedParams##classe::GetParameterValuation (const CATICciPhysicalEntity_var ispPlyEntity,const CATUnicodeString iParameterName, int & oHasAValue, CATUnicodeString &oValueAsString)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetParameterValuation (ispPlyEntity,iParameterName,oHasAValue,oValueAsString)); \
} \
HRESULT  TIECATICciPhysicalEntityAdvancedParams##classe::SetParameterValuation (const CATICciPhysicalEntity_var ispPlyEntity,const CATUnicodeString iParameterName, const CATUnicodeString iValueAsString, int & oIsValuated)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetParameterValuation (ispPlyEntity,iParameterName,iValueAsString,oIsValuated)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICciPhysicalEntityAdvancedParams(classe) \
 \
 \
declare_TIE_CATICciPhysicalEntityAdvancedParams(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciPhysicalEntityAdvancedParams##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciPhysicalEntityAdvancedParams,"CATICciPhysicalEntityAdvancedParams",CATICciPhysicalEntityAdvancedParams::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciPhysicalEntityAdvancedParams(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICciPhysicalEntityAdvancedParams, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciPhysicalEntityAdvancedParams##classe(classe::MetaObject(),CATICciPhysicalEntityAdvancedParams::MetaObject(),(void *)CreateTIECATICciPhysicalEntityAdvancedParams##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICciPhysicalEntityAdvancedParams(classe) \
 \
 \
declare_TIE_CATICciPhysicalEntityAdvancedParams(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciPhysicalEntityAdvancedParams##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciPhysicalEntityAdvancedParams,"CATICciPhysicalEntityAdvancedParams",CATICciPhysicalEntityAdvancedParams::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciPhysicalEntityAdvancedParams(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICciPhysicalEntityAdvancedParams, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciPhysicalEntityAdvancedParams##classe(classe::MetaObject(),CATICciPhysicalEntityAdvancedParams::MetaObject(),(void *)CreateTIECATICciPhysicalEntityAdvancedParams##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICciPhysicalEntityAdvancedParams(classe) TIE_CATICciPhysicalEntityAdvancedParams(classe)
#else
#define BOA_CATICciPhysicalEntityAdvancedParams(classe) CATImplementBOA(CATICciPhysicalEntityAdvancedParams, classe)
#endif

#endif
