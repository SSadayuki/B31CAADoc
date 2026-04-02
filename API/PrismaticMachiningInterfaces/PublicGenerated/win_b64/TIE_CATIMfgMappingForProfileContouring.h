#ifndef __TIE_CATIMfgMappingForProfileContouring
#define __TIE_CATIMfgMappingForProfileContouring

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgMappingForProfileContouring.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgMappingForProfileContouring */
#define declare_TIE_CATIMfgMappingForProfileContouring(classe) \
 \
 \
class TIECATIMfgMappingForProfileContouring##classe : public CATIMfgMappingForProfileContouring \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgMappingForProfileContouring, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetPart (CATBaseUnknown_var & oPartElement) ; \
      virtual HRESULT GetRelimitingPlane (CATBaseUnknown_var & oRelimitingPlane) ; \
      virtual HRESULT GetGuidingCurves (CATListValCATBaseUnknown_var & oGuidingElements, int & oSide, CATPoint* oExtremity = 0) ; \
      virtual HRESULT GetChecks (CATListValCATBaseUnknown_var & oChecks) ; \
      virtual HRESULT GetRelimitingElements (CATListValCATBaseUnknown_var & oFirstRelimitingElements, CATListValCATBaseUnknown_var & oSecondRelimitingElements) ; \
};



#define ENVTIEdeclare_CATIMfgMappingForProfileContouring(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetPart (CATBaseUnknown_var & oPartElement) ; \
virtual HRESULT GetRelimitingPlane (CATBaseUnknown_var & oRelimitingPlane) ; \
virtual HRESULT GetGuidingCurves (CATListValCATBaseUnknown_var & oGuidingElements, int & oSide, CATPoint* oExtremity = 0) ; \
virtual HRESULT GetChecks (CATListValCATBaseUnknown_var & oChecks) ; \
virtual HRESULT GetRelimitingElements (CATListValCATBaseUnknown_var & oFirstRelimitingElements, CATListValCATBaseUnknown_var & oSecondRelimitingElements) ; \


#define ENVTIEdefine_CATIMfgMappingForProfileContouring(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetPart (CATBaseUnknown_var & oPartElement)  \
{ \
return (ENVTIECALL(CATIMfgMappingForProfileContouring,ENVTIETypeLetter,ENVTIELetter)GetPart (oPartElement)); \
} \
HRESULT  ENVTIEName::GetRelimitingPlane (CATBaseUnknown_var & oRelimitingPlane)  \
{ \
return (ENVTIECALL(CATIMfgMappingForProfileContouring,ENVTIETypeLetter,ENVTIELetter)GetRelimitingPlane (oRelimitingPlane)); \
} \
HRESULT  ENVTIEName::GetGuidingCurves (CATListValCATBaseUnknown_var & oGuidingElements, int & oSide, CATPoint* oExtremity )  \
{ \
return (ENVTIECALL(CATIMfgMappingForProfileContouring,ENVTIETypeLetter,ENVTIELetter)GetGuidingCurves (oGuidingElements,oSide,oExtremity )); \
} \
HRESULT  ENVTIEName::GetChecks (CATListValCATBaseUnknown_var & oChecks)  \
{ \
return (ENVTIECALL(CATIMfgMappingForProfileContouring,ENVTIETypeLetter,ENVTIELetter)GetChecks (oChecks)); \
} \
HRESULT  ENVTIEName::GetRelimitingElements (CATListValCATBaseUnknown_var & oFirstRelimitingElements, CATListValCATBaseUnknown_var & oSecondRelimitingElements)  \
{ \
return (ENVTIECALL(CATIMfgMappingForProfileContouring,ENVTIETypeLetter,ENVTIELetter)GetRelimitingElements (oFirstRelimitingElements,oSecondRelimitingElements)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMfgMappingForProfileContouring(classe)    TIECATIMfgMappingForProfileContouring##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgMappingForProfileContouring(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgMappingForProfileContouring, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgMappingForProfileContouring, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgMappingForProfileContouring, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgMappingForProfileContouring, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgMappingForProfileContouring, classe) \
 \
HRESULT  TIECATIMfgMappingForProfileContouring##classe::GetPart (CATBaseUnknown_var & oPartElement)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPart (oPartElement)); \
} \
HRESULT  TIECATIMfgMappingForProfileContouring##classe::GetRelimitingPlane (CATBaseUnknown_var & oRelimitingPlane)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRelimitingPlane (oRelimitingPlane)); \
} \
HRESULT  TIECATIMfgMappingForProfileContouring##classe::GetGuidingCurves (CATListValCATBaseUnknown_var & oGuidingElements, int & oSide, CATPoint* oExtremity )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGuidingCurves (oGuidingElements,oSide,oExtremity )); \
} \
HRESULT  TIECATIMfgMappingForProfileContouring##classe::GetChecks (CATListValCATBaseUnknown_var & oChecks)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetChecks (oChecks)); \
} \
HRESULT  TIECATIMfgMappingForProfileContouring##classe::GetRelimitingElements (CATListValCATBaseUnknown_var & oFirstRelimitingElements, CATListValCATBaseUnknown_var & oSecondRelimitingElements)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRelimitingElements (oFirstRelimitingElements,oSecondRelimitingElements)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgMappingForProfileContouring(classe) \
 \
 \
declare_TIE_CATIMfgMappingForProfileContouring(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMappingForProfileContouring##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMappingForProfileContouring,"CATIMfgMappingForProfileContouring",CATIMfgMappingForProfileContouring::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMappingForProfileContouring(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgMappingForProfileContouring, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMappingForProfileContouring##classe(classe::MetaObject(),CATIMfgMappingForProfileContouring::MetaObject(),(void *)CreateTIECATIMfgMappingForProfileContouring##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgMappingForProfileContouring(classe) \
 \
 \
declare_TIE_CATIMfgMappingForProfileContouring(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgMappingForProfileContouring##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgMappingForProfileContouring,"CATIMfgMappingForProfileContouring",CATIMfgMappingForProfileContouring::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgMappingForProfileContouring(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgMappingForProfileContouring, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgMappingForProfileContouring##classe(classe::MetaObject(),CATIMfgMappingForProfileContouring::MetaObject(),(void *)CreateTIECATIMfgMappingForProfileContouring##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgMappingForProfileContouring(classe) TIE_CATIMfgMappingForProfileContouring(classe)
#else
#define BOA_CATIMfgMappingForProfileContouring(classe) CATImplementBOA(CATIMfgMappingForProfileContouring, classe)
#endif

#endif
