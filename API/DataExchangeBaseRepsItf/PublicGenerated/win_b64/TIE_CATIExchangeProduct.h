#ifndef __TIE_CATIExchangeProduct
#define __TIE_CATIExchangeProduct

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeProduct.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeProduct */
#define declare_TIE_CATIExchangeProduct(classe) \
 \
 \
class TIECATIExchangeProduct##classe : public CATIExchangeProduct \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeProduct, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetDocument(CATIExchangeInputDocument_var& oDocument) ; \
      virtual HRESULT GetFilePath(FilePath& oDocumentFilePath) ; \
      virtual HRESULT GetUID(CATLONG32& oProductUID) ; \
      virtual HRESULT GetInstanceList(CATListValCATIExchangeProductInstance_var& oInstances) ; \
      virtual HRESULT GetProductAttributes(CATUnicodeString& oName, CATUnicodeString& oRevision, CATUnicodeString& oDefinition, CATUnicodeString& oDescription, CATUnicodeString& oNomenclature, SourceTypes& oProductSource) ; \
      virtual HRESULT GetGeometricProperties(double  oCentroid[], double& oVolume, double& oWetArea, double& oTolerance) ; \
};



#define ENVTIEdeclare_CATIExchangeProduct(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetDocument(CATIExchangeInputDocument_var& oDocument) ; \
virtual HRESULT GetFilePath(FilePath& oDocumentFilePath) ; \
virtual HRESULT GetUID(CATLONG32& oProductUID) ; \
virtual HRESULT GetInstanceList(CATListValCATIExchangeProductInstance_var& oInstances) ; \
virtual HRESULT GetProductAttributes(CATUnicodeString& oName, CATUnicodeString& oRevision, CATUnicodeString& oDefinition, CATUnicodeString& oDescription, CATUnicodeString& oNomenclature, SourceTypes& oProductSource) ; \
virtual HRESULT GetGeometricProperties(double  oCentroid[], double& oVolume, double& oWetArea, double& oTolerance) ; \


#define ENVTIEdefine_CATIExchangeProduct(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetDocument(CATIExchangeInputDocument_var& oDocument)  \
{ \
return (ENVTIECALL(CATIExchangeProduct,ENVTIETypeLetter,ENVTIELetter)GetDocument(oDocument)); \
} \
HRESULT  ENVTIEName::GetFilePath(FilePath& oDocumentFilePath)  \
{ \
return (ENVTIECALL(CATIExchangeProduct,ENVTIETypeLetter,ENVTIELetter)GetFilePath(oDocumentFilePath)); \
} \
HRESULT  ENVTIEName::GetUID(CATLONG32& oProductUID)  \
{ \
return (ENVTIECALL(CATIExchangeProduct,ENVTIETypeLetter,ENVTIELetter)GetUID(oProductUID)); \
} \
HRESULT  ENVTIEName::GetInstanceList(CATListValCATIExchangeProductInstance_var& oInstances)  \
{ \
return (ENVTIECALL(CATIExchangeProduct,ENVTIETypeLetter,ENVTIELetter)GetInstanceList(oInstances)); \
} \
HRESULT  ENVTIEName::GetProductAttributes(CATUnicodeString& oName, CATUnicodeString& oRevision, CATUnicodeString& oDefinition, CATUnicodeString& oDescription, CATUnicodeString& oNomenclature, SourceTypes& oProductSource)  \
{ \
return (ENVTIECALL(CATIExchangeProduct,ENVTIETypeLetter,ENVTIELetter)GetProductAttributes(oName,oRevision,oDefinition,oDescription,oNomenclature,oProductSource)); \
} \
HRESULT  ENVTIEName::GetGeometricProperties(double  oCentroid[], double& oVolume, double& oWetArea, double& oTolerance)  \
{ \
return (ENVTIECALL(CATIExchangeProduct,ENVTIETypeLetter,ENVTIELetter)GetGeometricProperties(oCentroid,oVolume,oWetArea,oTolerance)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeProduct(classe)    TIECATIExchangeProduct##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeProduct(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeProduct, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeProduct, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeProduct, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeProduct, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeProduct, classe) \
 \
HRESULT  TIECATIExchangeProduct##classe::GetDocument(CATIExchangeInputDocument_var& oDocument)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDocument(oDocument)); \
} \
HRESULT  TIECATIExchangeProduct##classe::GetFilePath(FilePath& oDocumentFilePath)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFilePath(oDocumentFilePath)); \
} \
HRESULT  TIECATIExchangeProduct##classe::GetUID(CATLONG32& oProductUID)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUID(oProductUID)); \
} \
HRESULT  TIECATIExchangeProduct##classe::GetInstanceList(CATListValCATIExchangeProductInstance_var& oInstances)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInstanceList(oInstances)); \
} \
HRESULT  TIECATIExchangeProduct##classe::GetProductAttributes(CATUnicodeString& oName, CATUnicodeString& oRevision, CATUnicodeString& oDefinition, CATUnicodeString& oDescription, CATUnicodeString& oNomenclature, SourceTypes& oProductSource)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProductAttributes(oName,oRevision,oDefinition,oDescription,oNomenclature,oProductSource)); \
} \
HRESULT  TIECATIExchangeProduct##classe::GetGeometricProperties(double  oCentroid[], double& oVolume, double& oWetArea, double& oTolerance)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGeometricProperties(oCentroid,oVolume,oWetArea,oTolerance)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeProduct(classe) \
 \
 \
declare_TIE_CATIExchangeProduct(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeProduct##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeProduct,"CATIExchangeProduct",CATIExchangeProduct::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeProduct(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeProduct, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeProduct##classe(classe::MetaObject(),CATIExchangeProduct::MetaObject(),(void *)CreateTIECATIExchangeProduct##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeProduct(classe) \
 \
 \
declare_TIE_CATIExchangeProduct(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeProduct##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeProduct,"CATIExchangeProduct",CATIExchangeProduct::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeProduct(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeProduct, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeProduct##classe(classe::MetaObject(),CATIExchangeProduct::MetaObject(),(void *)CreateTIECATIExchangeProduct##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeProduct(classe) TIE_CATIExchangeProduct(classe)
#else
#define BOA_CATIExchangeProduct(classe) CATImplementBOA(CATIExchangeProduct, classe)
#endif

#endif
