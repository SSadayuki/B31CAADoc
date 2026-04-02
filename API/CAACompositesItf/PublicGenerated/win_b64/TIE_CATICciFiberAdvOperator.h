#ifndef __TIE_CATICciFiberAdvOperator
#define __TIE_CATICciFiberAdvOperator

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICciFiberAdvOperator.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICciFiberAdvOperator */
#define declare_TIE_CATICciFiberAdvOperator(classe) \
 \
 \
class TIECATICciFiberAdvOperator##classe : public CATICciFiberAdvOperator \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICciFiberAdvOperator, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void GetListOfFiberinitTypes(CATListOfCATUnicodeString & oListOfFiberTypes, CATListOfCATUnicodeString & oListOfNLSFiberTypes) ; \
      virtual void GetListOfAnalysisDeformationTypes (CATListOfCATUnicodeString & oListOfAnalysisDefTypes, CATListOfCATUnicodeString & oListOfNLSAnalysisDefTypes) ; \
      virtual void GetListOfAnalysisOtherTypes (CATListOfCATUnicodeString & oListOfAnalyseOtherTypes, CATListOfCATUnicodeString & oListOfNLSAnalysisOtherTypes) ; \
      virtual HRESULT    SetSectorActivationState   (CATListOfInt & iListOfSectorActivationState)  ; \
      virtual HRESULT    SetFiberProducibilityFeature   (const CATISpecObject_var spProducibility)  ; \
      virtual HRESULT  SetFiberAnalysisMode (const CompAnalysisMode  iAnaType) ; \
      virtual HRESULT  GetsFiberMeshColorResult (CATUnicodeString &oTypeOfAnalysis, int &oNbColorInfos,  CATListOfInt  & oListOfColorU,CATListOfInt  & oListOfColorV) ; \
};



#define ENVTIEdeclare_CATICciFiberAdvOperator(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void GetListOfFiberinitTypes(CATListOfCATUnicodeString & oListOfFiberTypes, CATListOfCATUnicodeString & oListOfNLSFiberTypes) ; \
virtual void GetListOfAnalysisDeformationTypes (CATListOfCATUnicodeString & oListOfAnalysisDefTypes, CATListOfCATUnicodeString & oListOfNLSAnalysisDefTypes) ; \
virtual void GetListOfAnalysisOtherTypes (CATListOfCATUnicodeString & oListOfAnalyseOtherTypes, CATListOfCATUnicodeString & oListOfNLSAnalysisOtherTypes) ; \
virtual HRESULT    SetSectorActivationState   (CATListOfInt & iListOfSectorActivationState)  ; \
virtual HRESULT    SetFiberProducibilityFeature   (const CATISpecObject_var spProducibility)  ; \
virtual HRESULT  SetFiberAnalysisMode (const CompAnalysisMode  iAnaType) ; \
virtual HRESULT  GetsFiberMeshColorResult (CATUnicodeString &oTypeOfAnalysis, int &oNbColorInfos,  CATListOfInt  & oListOfColorU,CATListOfInt  & oListOfColorV) ; \


#define ENVTIEdefine_CATICciFiberAdvOperator(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void  ENVTIEName::GetListOfFiberinitTypes(CATListOfCATUnicodeString & oListOfFiberTypes, CATListOfCATUnicodeString & oListOfNLSFiberTypes)  \
{ \
 (ENVTIECALL(CATICciFiberAdvOperator,ENVTIETypeLetter,ENVTIELetter)GetListOfFiberinitTypes(oListOfFiberTypes,oListOfNLSFiberTypes)); \
} \
void  ENVTIEName::GetListOfAnalysisDeformationTypes (CATListOfCATUnicodeString & oListOfAnalysisDefTypes, CATListOfCATUnicodeString & oListOfNLSAnalysisDefTypes)  \
{ \
 (ENVTIECALL(CATICciFiberAdvOperator,ENVTIETypeLetter,ENVTIELetter)GetListOfAnalysisDeformationTypes (oListOfAnalysisDefTypes,oListOfNLSAnalysisDefTypes)); \
} \
void  ENVTIEName::GetListOfAnalysisOtherTypes (CATListOfCATUnicodeString & oListOfAnalyseOtherTypes, CATListOfCATUnicodeString & oListOfNLSAnalysisOtherTypes)  \
{ \
 (ENVTIECALL(CATICciFiberAdvOperator,ENVTIETypeLetter,ENVTIELetter)GetListOfAnalysisOtherTypes (oListOfAnalyseOtherTypes,oListOfNLSAnalysisOtherTypes)); \
} \
HRESULT     ENVTIEName::SetSectorActivationState   (CATListOfInt & iListOfSectorActivationState)   \
{ \
return (ENVTIECALL(CATICciFiberAdvOperator,ENVTIETypeLetter,ENVTIELetter)SetSectorActivationState   (iListOfSectorActivationState)); \
} \
HRESULT     ENVTIEName::SetFiberProducibilityFeature   (const CATISpecObject_var spProducibility)   \
{ \
return (ENVTIECALL(CATICciFiberAdvOperator,ENVTIETypeLetter,ENVTIELetter)SetFiberProducibilityFeature   (spProducibility)); \
} \
HRESULT   ENVTIEName::SetFiberAnalysisMode (const CompAnalysisMode  iAnaType)  \
{ \
return (ENVTIECALL(CATICciFiberAdvOperator,ENVTIETypeLetter,ENVTIELetter)SetFiberAnalysisMode (iAnaType)); \
} \
HRESULT   ENVTIEName::GetsFiberMeshColorResult (CATUnicodeString &oTypeOfAnalysis, int &oNbColorInfos,  CATListOfInt  & oListOfColorU,CATListOfInt  & oListOfColorV)  \
{ \
return (ENVTIECALL(CATICciFiberAdvOperator,ENVTIETypeLetter,ENVTIELetter)GetsFiberMeshColorResult (oTypeOfAnalysis,oNbColorInfos,oListOfColorU,oListOfColorV)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICciFiberAdvOperator(classe)    TIECATICciFiberAdvOperator##classe


/* Common methods inside a TIE */
#define common_TIE_CATICciFiberAdvOperator(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICciFiberAdvOperator, classe) \
 \
 \
CATImplementTIEMethods(CATICciFiberAdvOperator, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICciFiberAdvOperator, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICciFiberAdvOperator, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICciFiberAdvOperator, classe) \
 \
void  TIECATICciFiberAdvOperator##classe::GetListOfFiberinitTypes(CATListOfCATUnicodeString & oListOfFiberTypes, CATListOfCATUnicodeString & oListOfNLSFiberTypes)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfFiberinitTypes(oListOfFiberTypes,oListOfNLSFiberTypes); \
} \
void  TIECATICciFiberAdvOperator##classe::GetListOfAnalysisDeformationTypes (CATListOfCATUnicodeString & oListOfAnalysisDefTypes, CATListOfCATUnicodeString & oListOfNLSAnalysisDefTypes)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfAnalysisDeformationTypes (oListOfAnalysisDefTypes,oListOfNLSAnalysisDefTypes); \
} \
void  TIECATICciFiberAdvOperator##classe::GetListOfAnalysisOtherTypes (CATListOfCATUnicodeString & oListOfAnalyseOtherTypes, CATListOfCATUnicodeString & oListOfNLSAnalysisOtherTypes)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfAnalysisOtherTypes (oListOfAnalyseOtherTypes,oListOfNLSAnalysisOtherTypes); \
} \
HRESULT     TIECATICciFiberAdvOperator##classe::SetSectorActivationState   (CATListOfInt & iListOfSectorActivationState)   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSectorActivationState   (iListOfSectorActivationState)); \
} \
HRESULT     TIECATICciFiberAdvOperator##classe::SetFiberProducibilityFeature   (const CATISpecObject_var spProducibility)   \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFiberProducibilityFeature   (spProducibility)); \
} \
HRESULT   TIECATICciFiberAdvOperator##classe::SetFiberAnalysisMode (const CompAnalysisMode  iAnaType)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFiberAnalysisMode (iAnaType)); \
} \
HRESULT   TIECATICciFiberAdvOperator##classe::GetsFiberMeshColorResult (CATUnicodeString &oTypeOfAnalysis, int &oNbColorInfos,  CATListOfInt  & oListOfColorU,CATListOfInt  & oListOfColorV)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetsFiberMeshColorResult (oTypeOfAnalysis,oNbColorInfos,oListOfColorU,oListOfColorV)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICciFiberAdvOperator(classe) \
 \
 \
declare_TIE_CATICciFiberAdvOperator(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciFiberAdvOperator##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciFiberAdvOperator,"CATICciFiberAdvOperator",CATICciFiberAdvOperator::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciFiberAdvOperator(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICciFiberAdvOperator, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciFiberAdvOperator##classe(classe::MetaObject(),CATICciFiberAdvOperator::MetaObject(),(void *)CreateTIECATICciFiberAdvOperator##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICciFiberAdvOperator(classe) \
 \
 \
declare_TIE_CATICciFiberAdvOperator(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciFiberAdvOperator##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciFiberAdvOperator,"CATICciFiberAdvOperator",CATICciFiberAdvOperator::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciFiberAdvOperator(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICciFiberAdvOperator, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciFiberAdvOperator##classe(classe::MetaObject(),CATICciFiberAdvOperator::MetaObject(),(void *)CreateTIECATICciFiberAdvOperator##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICciFiberAdvOperator(classe) TIE_CATICciFiberAdvOperator(classe)
#else
#define BOA_CATICciFiberAdvOperator(classe) CATImplementBOA(CATICciFiberAdvOperator, classe)
#endif

#endif
