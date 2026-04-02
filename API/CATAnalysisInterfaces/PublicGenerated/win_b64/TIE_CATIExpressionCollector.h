#ifndef __TIE_CATIExpressionCollector
#define __TIE_CATIExpressionCollector

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExpressionCollector.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExpressionCollector */
#define declare_TIE_CATIExpressionCollector(classe) \
 \
 \
class TIECATIExpressionCollector##classe : public CATIExpressionCollector \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExpressionCollector, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetAvailableExpressions(const CATAnalysisExplicitExpression& iDefinition, CATAnalysisExplicitListUsr& oDefinitions) ; \
      virtual HRESULT CollectValues(CATAnalysisExplicitExpression& iExpression) ; \
      virtual HRESULT GetNumberOfExpressions(int &oNumber) ; \
      virtual HRESULT GetExpression(int iNumber, CATAnalysisExplicitExpression &oExpression, const CATBoolean iCollectValues = TRUE) ; \
      virtual HRESULT DeleteExpression(CATAnalysisExplicitExpression &ioExpression) ; \
      virtual HRESULT DeleteAll() ; \
      virtual HRESULT Update() ; \
};



#define ENVTIEdeclare_CATIExpressionCollector(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetAvailableExpressions(const CATAnalysisExplicitExpression& iDefinition, CATAnalysisExplicitListUsr& oDefinitions) ; \
virtual HRESULT CollectValues(CATAnalysisExplicitExpression& iExpression) ; \
virtual HRESULT GetNumberOfExpressions(int &oNumber) ; \
virtual HRESULT GetExpression(int iNumber, CATAnalysisExplicitExpression &oExpression, const CATBoolean iCollectValues = TRUE) ; \
virtual HRESULT DeleteExpression(CATAnalysisExplicitExpression &ioExpression) ; \
virtual HRESULT DeleteAll() ; \
virtual HRESULT Update() ; \


#define ENVTIEdefine_CATIExpressionCollector(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetAvailableExpressions(const CATAnalysisExplicitExpression& iDefinition, CATAnalysisExplicitListUsr& oDefinitions)  \
{ \
return (ENVTIECALL(CATIExpressionCollector,ENVTIETypeLetter,ENVTIELetter)GetAvailableExpressions(iDefinition,oDefinitions)); \
} \
HRESULT  ENVTIEName::CollectValues(CATAnalysisExplicitExpression& iExpression)  \
{ \
return (ENVTIECALL(CATIExpressionCollector,ENVTIETypeLetter,ENVTIELetter)CollectValues(iExpression)); \
} \
HRESULT  ENVTIEName::GetNumberOfExpressions(int &oNumber)  \
{ \
return (ENVTIECALL(CATIExpressionCollector,ENVTIETypeLetter,ENVTIELetter)GetNumberOfExpressions(oNumber)); \
} \
HRESULT  ENVTIEName::GetExpression(int iNumber, CATAnalysisExplicitExpression &oExpression, const CATBoolean iCollectValues )  \
{ \
return (ENVTIECALL(CATIExpressionCollector,ENVTIETypeLetter,ENVTIELetter)GetExpression(iNumber,oExpression,iCollectValues )); \
} \
HRESULT  ENVTIEName::DeleteExpression(CATAnalysisExplicitExpression &ioExpression)  \
{ \
return (ENVTIECALL(CATIExpressionCollector,ENVTIETypeLetter,ENVTIELetter)DeleteExpression(ioExpression)); \
} \
HRESULT  ENVTIEName::DeleteAll()  \
{ \
return (ENVTIECALL(CATIExpressionCollector,ENVTIETypeLetter,ENVTIELetter)DeleteAll()); \
} \
HRESULT  ENVTIEName::Update()  \
{ \
return (ENVTIECALL(CATIExpressionCollector,ENVTIETypeLetter,ENVTIELetter)Update()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExpressionCollector(classe)    TIECATIExpressionCollector##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExpressionCollector(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExpressionCollector, classe) \
 \
 \
CATImplementTIEMethods(CATIExpressionCollector, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExpressionCollector, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExpressionCollector, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExpressionCollector, classe) \
 \
HRESULT  TIECATIExpressionCollector##classe::GetAvailableExpressions(const CATAnalysisExplicitExpression& iDefinition, CATAnalysisExplicitListUsr& oDefinitions)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAvailableExpressions(iDefinition,oDefinitions)); \
} \
HRESULT  TIECATIExpressionCollector##classe::CollectValues(CATAnalysisExplicitExpression& iExpression)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CollectValues(iExpression)); \
} \
HRESULT  TIECATIExpressionCollector##classe::GetNumberOfExpressions(int &oNumber)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumberOfExpressions(oNumber)); \
} \
HRESULT  TIECATIExpressionCollector##classe::GetExpression(int iNumber, CATAnalysisExplicitExpression &oExpression, const CATBoolean iCollectValues )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetExpression(iNumber,oExpression,iCollectValues )); \
} \
HRESULT  TIECATIExpressionCollector##classe::DeleteExpression(CATAnalysisExplicitExpression &ioExpression)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DeleteExpression(ioExpression)); \
} \
HRESULT  TIECATIExpressionCollector##classe::DeleteAll()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DeleteAll()); \
} \
HRESULT  TIECATIExpressionCollector##classe::Update()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Update()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExpressionCollector(classe) \
 \
 \
declare_TIE_CATIExpressionCollector(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExpressionCollector##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExpressionCollector,"CATIExpressionCollector",CATIExpressionCollector::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExpressionCollector(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExpressionCollector, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExpressionCollector##classe(classe::MetaObject(),CATIExpressionCollector::MetaObject(),(void *)CreateTIECATIExpressionCollector##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExpressionCollector(classe) \
 \
 \
declare_TIE_CATIExpressionCollector(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExpressionCollector##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExpressionCollector,"CATIExpressionCollector",CATIExpressionCollector::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExpressionCollector(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExpressionCollector, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExpressionCollector##classe(classe::MetaObject(),CATIExpressionCollector::MetaObject(),(void *)CreateTIECATIExpressionCollector##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExpressionCollector(classe) TIE_CATIExpressionCollector(classe)
#else
#define BOA_CATIExpressionCollector(classe) CATImplementBOA(CATIExpressionCollector, classe)
#endif

#endif
