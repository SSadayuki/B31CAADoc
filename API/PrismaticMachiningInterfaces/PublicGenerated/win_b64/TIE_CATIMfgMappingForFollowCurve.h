#ifndef __TIE_CATIMfgMappingForFollowCurve
#define __TIE_CATIMfgMappingForFollowCurve

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgMappingForFollowCurve.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgMappingForFollowCurve */
#define declare_TIE_CATIMfgMappingForFollowCurve(classe) \
 \
 \
class TIECATIMfgMappingForFollowCurve##classe : public CATIMfgMappingForFollowCurve \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgMappingForFollowCurve, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetGuidingCurves (CATListValCATBaseUnknown_var & oGuidingElements) ; \
      virtual HRESULT GetAuxiliaryGuidingCurves (CATListValCATBaseUnknown_var & oAuxGuidingElements) ; \
      virtual HRESULT GetChecks (CATListValCATBaseUnknown_var & oChecks) ; \
      virtual HRESULT GetRelimitingElements (CATListValCATBaseUnknown_var & oFirstRelimitingElements, CATListValCATBaseUnknown_var & oSecondRelimitingElements) ; \
};



#define ENVTIEdeclare_CATIMfgMappingForFollowCurve(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetGuidingCurves (CATListValCATBaseUnknown_var & oGuidingElements) ; \
virtual HRESULT GetAuxiliaryGuidingCurves (CATListValCATBaseUnknown_var & oAuxGuidingElements) ; \
virtual HRESULT GetChecks (CATListValCATBaseUnknown_var & oChecks) ; \
virtual HRESULT GetRelimitingElements (CATListValCATBaseUnknown_var & oFirstRelimitingElements, CATListValCATBaseUnknown_var & oSecondRelimitingElements) ; \


#define ENVTIEdefine_CATIMfgMappingForFollowCurve(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetGuidingCurves (CATListValCATBaseUnknown_var & oGuidingElements)  \
{ \
return (ENVTIECALL(CATIMfgMappingForFollowCurve,ENVTIETypeLetter,ENVTIELetter)GetGuidingCurves (oGuidingElements)); \
} \
HRESULT  ENVTIEName::GetAuxiliaryGuidingCurves (CATListValCATBaseUnknown_var & oAuxGuidingElements)  \
{ \
return (ENVTIECALL(CATIMfgMappingForFollowCurve,ENVTIETypeLetter,ENVTIELetter)GetAuxiliaryGuidingCurves (oAuxGuidingElements)); \
} \
HRESULT  ENVTIEName::GetChecks (CATListValCATBaseUnknown_var & oChecks)  \
{ \
return (ENVTIECALL(CATIMfgMappingForFollowCurve,ENVTIETypeLetter,ENVTIELetter)GetChecks (oChecks)); \
} \
HRESULT  ENVTIEName::GetRelimitingElements (CATListValCATBaseUnknown_var & oFirstRelimitingElements, CATListValCATBaseUnknown_var & oSecondRelimitingElements)  \
{ \
return (ENVTIECALL(CATIMfgMappingForFollowCurve,ENVTIETypeLetter,ENVTIELetter)GetRelimitingElements (oFirstRelimitingElements,oSecondRelimitingElements)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgMappingForFollowCurve(classe)    TIECATIMfgMappingForFollowCurve##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgMappingForFollowCurve(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgMappingForFollowCurve, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgMappingForFollowCurve, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgMappingForFollowCurve, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgMappingForFollowCurve, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgMappingForFollowCurve, classe) \
 \
HRESULT  TIECATIMfgMappingForFollowCurve##classe::GetGuidingCurves (CATListValCATBaseUnknown_var & oGuidingElements)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGuidingCurves (oGuidingElements)); \
} \
HRESULT  TIECATIMfgMappingForFollowCurve##classe::GetAuxiliaryGuidingCurves (CATListValCATBaseUnknown_var & oAuxGuidingElements)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAuxiliaryGuidingCurves (oAuxGuidingElements)); \
} \
HRESULT  TIECATIMfgMappingForFollowCurve##classe::GetChecks (CATListValCATBaseUnknown_var & oChecks)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetChecks (oChecks)); \
} \
HRESULT  TIECATIMfgMappingForFollowCurve##classe::GetRelimitingElements (CATListValCATBaseUnknown_var & oFirstRelimitingElements, CATListValCATBaseUnknown_var & oSecondRelimitingElements)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRelimitingElements (oFirstRelimitingElements,oSecondRelimitingElements)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgMappingForFollowCurve(classe) \
 \
 \
declare_TIE_CATIMfgMappingForFollowCurve(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMappingForFollowCurve##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMappingForFollowCurve,"CATIMfgMappingForFollowCurve",CATIMfgMappingForFollowCurve::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMappingForFollowCurve(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgMappingForFollowCurve, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMappingForFollowCurve##classe(classe::MetaObject(),CATIMfgMappingForFollowCurve::MetaObject(),(void *)CreateTIECATIMfgMappingForFollowCurve##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgMappingForFollowCurve(classe) \
 \
 \
declare_TIE_CATIMfgMappingForFollowCurve(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMappingForFollowCurve##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMappingForFollowCurve,"CATIMfgMappingForFollowCurve",CATIMfgMappingForFollowCurve::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMappingForFollowCurve(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgMappingForFollowCurve, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMappingForFollowCurve##classe(classe::MetaObject(),CATIMfgMappingForFollowCurve::MetaObject(),(void *)CreateTIECATIMfgMappingForFollowCurve##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgMappingForFollowCurve(classe) TIE_CATIMfgMappingForFollowCurve(classe)
#else
#define BOA_CATIMfgMappingForFollowCurve(classe) CATImplementBOA(CATIMfgMappingForFollowCurve, classe)
#endif

#endif
