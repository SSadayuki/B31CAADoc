#ifndef __TIE_CATICharacCollector
#define __TIE_CATICharacCollector

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICharacCollector.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICharacCollector */
#define declare_TIE_CATICharacCollector(classe) \
 \
 \
class TIECATICharacCollector##classe : public CATICharacCollector \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICharacCollector, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetAvailablePhysicalTypes(int                       & oNumber, const CATSamPhysicalType* & oPhysicalTypes, const CATString*          & oUnits) ; \
      virtual HRESULT GetAvailableEntityPhysicalTypes(CATSamPhysicalType          iCharacPhysicalType, int                       & oNumber, const CATSamPhysicalType* & oPhysicalTypes) ; \
      virtual HRESULT GetAvailableVersions(const CATSamPhysicalType     iPhysicalType, int                        & oNumber, const CATSamCharacVersion* & oVersions) ; \
      virtual HRESULT GetAvailablePositions(const CATSamPhysicalType    iPhysicalType, const CATSamCharacVersion & iVersion, int                       & oNumber, const CATString*          & oPositions) ; \
      virtual HRESULT GetNumberOfOccurrences(int & oNumberOfOccurrences) ; \
      virtual HRESULT GetCurrentOccurrence(int & oOccurrenceNumber) ; \
      virtual HRESULT SetCurrentOccurrence(const int iOccurrenceNumber) ; \
      virtual HRESULT IsAnAvailableDefinition(const CATSamPhysicalType            iPhysicalType, const CATSamCharacVersion         & iVersion, const CATString                   & iPosition, CATBoolean                        & oIsCollectable) ; \
      virtual HRESULT GetCharacCollector(const CATSamPhysicalType            iPhysicalType, const CATSamCharacVersion         & iVersion, const CATString                   & iPosition, const char* const                   iEntityFlags, const CATAnalysisCharacCollector* & oCharacCollector, const CATBoolean                    iCollectValues = TRUE, const CATSamPhysicalType            iEntiyPhysicalTypeToCollect = CATSamPhysicalTypeNone) ; \
      virtual HRESULT GetCharacCollectorsForOccurrences(int                                       & oNbCharacCollectors, const CATAnalysisCharacCollector* const * & oCharacCollectors, const CATBoolean                            iCollectValues = TRUE) ; \
      virtual HRESULT DeleteCharacCollector(const CATAnalysisCharacCollector* &iCharacCollector) ; \
      virtual HRESULT DeleteAll() ; \
      virtual HRESULT Update(CATBoolean iFullUpdate = TRUE) ; \
      virtual HRESULT SetContextModel(const CATAnalysisExplicitModel* iModelContext) ; \
      virtual HRESULT GetContextModel(const CATAnalysisExplicitModel* &oModelContext) ; \
      virtual HRESULT GetContext(CATAnalysisExplicitParent &oContext) ; \
};



#define ENVTIEdeclare_CATICharacCollector(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetAvailablePhysicalTypes(int                       & oNumber, const CATSamPhysicalType* & oPhysicalTypes, const CATString*          & oUnits) ; \
virtual HRESULT GetAvailableEntityPhysicalTypes(CATSamPhysicalType          iCharacPhysicalType, int                       & oNumber, const CATSamPhysicalType* & oPhysicalTypes) ; \
virtual HRESULT GetAvailableVersions(const CATSamPhysicalType     iPhysicalType, int                        & oNumber, const CATSamCharacVersion* & oVersions) ; \
virtual HRESULT GetAvailablePositions(const CATSamPhysicalType    iPhysicalType, const CATSamCharacVersion & iVersion, int                       & oNumber, const CATString*          & oPositions) ; \
virtual HRESULT GetNumberOfOccurrences(int & oNumberOfOccurrences) ; \
virtual HRESULT GetCurrentOccurrence(int & oOccurrenceNumber) ; \
virtual HRESULT SetCurrentOccurrence(const int iOccurrenceNumber) ; \
virtual HRESULT IsAnAvailableDefinition(const CATSamPhysicalType            iPhysicalType, const CATSamCharacVersion         & iVersion, const CATString                   & iPosition, CATBoolean                        & oIsCollectable) ; \
virtual HRESULT GetCharacCollector(const CATSamPhysicalType            iPhysicalType, const CATSamCharacVersion         & iVersion, const CATString                   & iPosition, const char* const                   iEntityFlags, const CATAnalysisCharacCollector* & oCharacCollector, const CATBoolean                    iCollectValues = TRUE, const CATSamPhysicalType            iEntiyPhysicalTypeToCollect = CATSamPhysicalTypeNone) ; \
virtual HRESULT GetCharacCollectorsForOccurrences(int                                       & oNbCharacCollectors, const CATAnalysisCharacCollector* const * & oCharacCollectors, const CATBoolean                            iCollectValues = TRUE) ; \
virtual HRESULT DeleteCharacCollector(const CATAnalysisCharacCollector* &iCharacCollector) ; \
virtual HRESULT DeleteAll() ; \
virtual HRESULT Update(CATBoolean iFullUpdate = TRUE) ; \
virtual HRESULT SetContextModel(const CATAnalysisExplicitModel* iModelContext) ; \
virtual HRESULT GetContextModel(const CATAnalysisExplicitModel* &oModelContext) ; \
virtual HRESULT GetContext(CATAnalysisExplicitParent &oContext) ; \


#define ENVTIEdefine_CATICharacCollector(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetAvailablePhysicalTypes(int                       & oNumber, const CATSamPhysicalType* & oPhysicalTypes, const CATString*          & oUnits)  \
{ \
return (ENVTIECALL(CATICharacCollector,ENVTIETypeLetter,ENVTIELetter)GetAvailablePhysicalTypes(oNumber,oPhysicalTypes,oUnits)); \
} \
HRESULT  ENVTIEName::GetAvailableEntityPhysicalTypes(CATSamPhysicalType          iCharacPhysicalType, int                       & oNumber, const CATSamPhysicalType* & oPhysicalTypes)  \
{ \
return (ENVTIECALL(CATICharacCollector,ENVTIETypeLetter,ENVTIELetter)GetAvailableEntityPhysicalTypes(iCharacPhysicalType,oNumber,oPhysicalTypes)); \
} \
HRESULT  ENVTIEName::GetAvailableVersions(const CATSamPhysicalType     iPhysicalType, int                        & oNumber, const CATSamCharacVersion* & oVersions)  \
{ \
return (ENVTIECALL(CATICharacCollector,ENVTIETypeLetter,ENVTIELetter)GetAvailableVersions(iPhysicalType,oNumber,oVersions)); \
} \
HRESULT  ENVTIEName::GetAvailablePositions(const CATSamPhysicalType    iPhysicalType, const CATSamCharacVersion & iVersion, int                       & oNumber, const CATString*          & oPositions)  \
{ \
return (ENVTIECALL(CATICharacCollector,ENVTIETypeLetter,ENVTIELetter)GetAvailablePositions(iPhysicalType,iVersion,oNumber,oPositions)); \
} \
HRESULT  ENVTIEName::GetNumberOfOccurrences(int & oNumberOfOccurrences)  \
{ \
return (ENVTIECALL(CATICharacCollector,ENVTIETypeLetter,ENVTIELetter)GetNumberOfOccurrences(oNumberOfOccurrences)); \
} \
HRESULT  ENVTIEName::GetCurrentOccurrence(int & oOccurrenceNumber)  \
{ \
return (ENVTIECALL(CATICharacCollector,ENVTIETypeLetter,ENVTIELetter)GetCurrentOccurrence(oOccurrenceNumber)); \
} \
HRESULT  ENVTIEName::SetCurrentOccurrence(const int iOccurrenceNumber)  \
{ \
return (ENVTIECALL(CATICharacCollector,ENVTIETypeLetter,ENVTIELetter)SetCurrentOccurrence(iOccurrenceNumber)); \
} \
HRESULT  ENVTIEName::IsAnAvailableDefinition(const CATSamPhysicalType            iPhysicalType, const CATSamCharacVersion         & iVersion, const CATString                   & iPosition, CATBoolean                        & oIsCollectable)  \
{ \
return (ENVTIECALL(CATICharacCollector,ENVTIETypeLetter,ENVTIELetter)IsAnAvailableDefinition(iPhysicalType,iVersion,iPosition,oIsCollectable)); \
} \
HRESULT  ENVTIEName::GetCharacCollector(const CATSamPhysicalType            iPhysicalType, const CATSamCharacVersion         & iVersion, const CATString                   & iPosition, const char* const                   iEntityFlags, const CATAnalysisCharacCollector* & oCharacCollector, const CATBoolean                    iCollectValues , const CATSamPhysicalType            iEntiyPhysicalTypeToCollect )  \
{ \
return (ENVTIECALL(CATICharacCollector,ENVTIETypeLetter,ENVTIELetter)GetCharacCollector(iPhysicalType,iVersion,iPosition,iEntityFlags,oCharacCollector,iCollectValues ,iEntiyPhysicalTypeToCollect )); \
} \
HRESULT  ENVTIEName::GetCharacCollectorsForOccurrences(int                                       & oNbCharacCollectors, const CATAnalysisCharacCollector* const * & oCharacCollectors, const CATBoolean                            iCollectValues )  \
{ \
return (ENVTIECALL(CATICharacCollector,ENVTIETypeLetter,ENVTIELetter)GetCharacCollectorsForOccurrences(oNbCharacCollectors,oCharacCollectors,iCollectValues )); \
} \
HRESULT  ENVTIEName::DeleteCharacCollector(const CATAnalysisCharacCollector* &iCharacCollector)  \
{ \
return (ENVTIECALL(CATICharacCollector,ENVTIETypeLetter,ENVTIELetter)DeleteCharacCollector(iCharacCollector)); \
} \
HRESULT  ENVTIEName::DeleteAll()  \
{ \
return (ENVTIECALL(CATICharacCollector,ENVTIETypeLetter,ENVTIELetter)DeleteAll()); \
} \
HRESULT  ENVTIEName::Update(CATBoolean iFullUpdate )  \
{ \
return (ENVTIECALL(CATICharacCollector,ENVTIETypeLetter,ENVTIELetter)Update(iFullUpdate )); \
} \
HRESULT  ENVTIEName::SetContextModel(const CATAnalysisExplicitModel* iModelContext)  \
{ \
return (ENVTIECALL(CATICharacCollector,ENVTIETypeLetter,ENVTIELetter)SetContextModel(iModelContext)); \
} \
HRESULT  ENVTIEName::GetContextModel(const CATAnalysisExplicitModel* &oModelContext)  \
{ \
return (ENVTIECALL(CATICharacCollector,ENVTIETypeLetter,ENVTIELetter)GetContextModel(oModelContext)); \
} \
HRESULT  ENVTIEName::GetContext(CATAnalysisExplicitParent &oContext)  \
{ \
return (ENVTIECALL(CATICharacCollector,ENVTIETypeLetter,ENVTIELetter)GetContext(oContext)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICharacCollector(classe)    TIECATICharacCollector##classe


/* Common methods inside a TIE */
#define common_TIE_CATICharacCollector(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICharacCollector, classe) \
 \
 \
CATImplementTIEMethods(CATICharacCollector, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICharacCollector, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICharacCollector, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICharacCollector, classe) \
 \
HRESULT  TIECATICharacCollector##classe::GetAvailablePhysicalTypes(int                       & oNumber, const CATSamPhysicalType* & oPhysicalTypes, const CATString*          & oUnits)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAvailablePhysicalTypes(oNumber,oPhysicalTypes,oUnits)); \
} \
HRESULT  TIECATICharacCollector##classe::GetAvailableEntityPhysicalTypes(CATSamPhysicalType          iCharacPhysicalType, int                       & oNumber, const CATSamPhysicalType* & oPhysicalTypes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAvailableEntityPhysicalTypes(iCharacPhysicalType,oNumber,oPhysicalTypes)); \
} \
HRESULT  TIECATICharacCollector##classe::GetAvailableVersions(const CATSamPhysicalType     iPhysicalType, int                        & oNumber, const CATSamCharacVersion* & oVersions)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAvailableVersions(iPhysicalType,oNumber,oVersions)); \
} \
HRESULT  TIECATICharacCollector##classe::GetAvailablePositions(const CATSamPhysicalType    iPhysicalType, const CATSamCharacVersion & iVersion, int                       & oNumber, const CATString*          & oPositions)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAvailablePositions(iPhysicalType,iVersion,oNumber,oPositions)); \
} \
HRESULT  TIECATICharacCollector##classe::GetNumberOfOccurrences(int & oNumberOfOccurrences)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNumberOfOccurrences(oNumberOfOccurrences)); \
} \
HRESULT  TIECATICharacCollector##classe::GetCurrentOccurrence(int & oOccurrenceNumber)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCurrentOccurrence(oOccurrenceNumber)); \
} \
HRESULT  TIECATICharacCollector##classe::SetCurrentOccurrence(const int iOccurrenceNumber)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCurrentOccurrence(iOccurrenceNumber)); \
} \
HRESULT  TIECATICharacCollector##classe::IsAnAvailableDefinition(const CATSamPhysicalType            iPhysicalType, const CATSamCharacVersion         & iVersion, const CATString                   & iPosition, CATBoolean                        & oIsCollectable)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsAnAvailableDefinition(iPhysicalType,iVersion,iPosition,oIsCollectable)); \
} \
HRESULT  TIECATICharacCollector##classe::GetCharacCollector(const CATSamPhysicalType            iPhysicalType, const CATSamCharacVersion         & iVersion, const CATString                   & iPosition, const char* const                   iEntityFlags, const CATAnalysisCharacCollector* & oCharacCollector, const CATBoolean                    iCollectValues , const CATSamPhysicalType            iEntiyPhysicalTypeToCollect )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCharacCollector(iPhysicalType,iVersion,iPosition,iEntityFlags,oCharacCollector,iCollectValues ,iEntiyPhysicalTypeToCollect )); \
} \
HRESULT  TIECATICharacCollector##classe::GetCharacCollectorsForOccurrences(int                                       & oNbCharacCollectors, const CATAnalysisCharacCollector* const * & oCharacCollectors, const CATBoolean                            iCollectValues )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCharacCollectorsForOccurrences(oNbCharacCollectors,oCharacCollectors,iCollectValues )); \
} \
HRESULT  TIECATICharacCollector##classe::DeleteCharacCollector(const CATAnalysisCharacCollector* &iCharacCollector)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DeleteCharacCollector(iCharacCollector)); \
} \
HRESULT  TIECATICharacCollector##classe::DeleteAll()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DeleteAll()); \
} \
HRESULT  TIECATICharacCollector##classe::Update(CATBoolean iFullUpdate )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Update(iFullUpdate )); \
} \
HRESULT  TIECATICharacCollector##classe::SetContextModel(const CATAnalysisExplicitModel* iModelContext)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetContextModel(iModelContext)); \
} \
HRESULT  TIECATICharacCollector##classe::GetContextModel(const CATAnalysisExplicitModel* &oModelContext)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetContextModel(oModelContext)); \
} \
HRESULT  TIECATICharacCollector##classe::GetContext(CATAnalysisExplicitParent &oContext)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetContext(oContext)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICharacCollector(classe) \
 \
 \
declare_TIE_CATICharacCollector(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICharacCollector##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICharacCollector,"CATICharacCollector",CATICharacCollector::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICharacCollector(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICharacCollector, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICharacCollector##classe(classe::MetaObject(),CATICharacCollector::MetaObject(),(void *)CreateTIECATICharacCollector##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICharacCollector(classe) \
 \
 \
declare_TIE_CATICharacCollector(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICharacCollector##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICharacCollector,"CATICharacCollector",CATICharacCollector::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICharacCollector(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICharacCollector, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICharacCollector##classe(classe::MetaObject(),CATICharacCollector::MetaObject(),(void *)CreateTIECATICharacCollector##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICharacCollector(classe) TIE_CATICharacCollector(classe)
#else
#define BOA_CATICharacCollector(classe) CATImplementBOA(CATICharacCollector, classe)
#endif

#endif
