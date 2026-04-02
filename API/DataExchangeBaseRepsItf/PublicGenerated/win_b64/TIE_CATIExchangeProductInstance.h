#ifndef __TIE_CATIExchangeProductInstance
#define __TIE_CATIExchangeProductInstance

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeProductInstance.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeProductInstance */
#define declare_TIE_CATIExchangeProductInstance(classe) \
 \
 \
class TIECATIExchangeProductInstance##classe : public CATIExchangeProductInstance \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeProductInstance, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetReferenceProduct(CATIExchangeProduct_var& oProduct) ; \
      virtual HRESULT GetUID(CATLONG32& oInstanceUID) ; \
      virtual HRESULT GetInstanceAttributes(CATUnicodeString& oName, CATUnicodeString& oDescription) ; \
      virtual HRESULT GetTransformation(double oRot[3][3], double oTrans[3]) ; \
      virtual HRESULT GetGeometricProperties(double  oCentroid[], double& oVolume, double& oWetArea, double& oTolerance) ; \
};



#define ENVTIEdeclare_CATIExchangeProductInstance(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetReferenceProduct(CATIExchangeProduct_var& oProduct) ; \
virtual HRESULT GetUID(CATLONG32& oInstanceUID) ; \
virtual HRESULT GetInstanceAttributes(CATUnicodeString& oName, CATUnicodeString& oDescription) ; \
virtual HRESULT GetTransformation(double oRot[3][3], double oTrans[3]) ; \
virtual HRESULT GetGeometricProperties(double  oCentroid[], double& oVolume, double& oWetArea, double& oTolerance) ; \


#define ENVTIEdefine_CATIExchangeProductInstance(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetReferenceProduct(CATIExchangeProduct_var& oProduct)  \
{ \
return (ENVTIECALL(CATIExchangeProductInstance,ENVTIETypeLetter,ENVTIELetter)GetReferenceProduct(oProduct)); \
} \
HRESULT  ENVTIEName::GetUID(CATLONG32& oInstanceUID)  \
{ \
return (ENVTIECALL(CATIExchangeProductInstance,ENVTIETypeLetter,ENVTIELetter)GetUID(oInstanceUID)); \
} \
HRESULT  ENVTIEName::GetInstanceAttributes(CATUnicodeString& oName, CATUnicodeString& oDescription)  \
{ \
return (ENVTIECALL(CATIExchangeProductInstance,ENVTIETypeLetter,ENVTIELetter)GetInstanceAttributes(oName,oDescription)); \
} \
HRESULT  ENVTIEName::GetTransformation(double oRot[3][3], double oTrans[3])  \
{ \
return (ENVTIECALL(CATIExchangeProductInstance,ENVTIETypeLetter,ENVTIELetter)GetTransformation(oRot,oTrans)); \
} \
HRESULT  ENVTIEName::GetGeometricProperties(double  oCentroid[], double& oVolume, double& oWetArea, double& oTolerance)  \
{ \
return (ENVTIECALL(CATIExchangeProductInstance,ENVTIETypeLetter,ENVTIELetter)GetGeometricProperties(oCentroid,oVolume,oWetArea,oTolerance)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeProductInstance(classe)    TIECATIExchangeProductInstance##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeProductInstance(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeProductInstance, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeProductInstance, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeProductInstance, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeProductInstance, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeProductInstance, classe) \
 \
HRESULT  TIECATIExchangeProductInstance##classe::GetReferenceProduct(CATIExchangeProduct_var& oProduct)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetReferenceProduct(oProduct)); \
} \
HRESULT  TIECATIExchangeProductInstance##classe::GetUID(CATLONG32& oInstanceUID)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUID(oInstanceUID)); \
} \
HRESULT  TIECATIExchangeProductInstance##classe::GetInstanceAttributes(CATUnicodeString& oName, CATUnicodeString& oDescription)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInstanceAttributes(oName,oDescription)); \
} \
HRESULT  TIECATIExchangeProductInstance##classe::GetTransformation(double oRot[3][3], double oTrans[3])  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTransformation(oRot,oTrans)); \
} \
HRESULT  TIECATIExchangeProductInstance##classe::GetGeometricProperties(double  oCentroid[], double& oVolume, double& oWetArea, double& oTolerance)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGeometricProperties(oCentroid,oVolume,oWetArea,oTolerance)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeProductInstance(classe) \
 \
 \
declare_TIE_CATIExchangeProductInstance(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeProductInstance##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeProductInstance,"CATIExchangeProductInstance",CATIExchangeProductInstance::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeProductInstance(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeProductInstance, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeProductInstance##classe(classe::MetaObject(),CATIExchangeProductInstance::MetaObject(),(void *)CreateTIECATIExchangeProductInstance##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeProductInstance(classe) \
 \
 \
declare_TIE_CATIExchangeProductInstance(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeProductInstance##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeProductInstance,"CATIExchangeProductInstance",CATIExchangeProductInstance::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeProductInstance(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeProductInstance, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeProductInstance##classe(classe::MetaObject(),CATIExchangeProductInstance::MetaObject(),(void *)CreateTIECATIExchangeProductInstance##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeProductInstance(classe) TIE_CATIExchangeProductInstance(classe)
#else
#define BOA_CATIExchangeProductInstance(classe) CATImplementBOA(CATIExchangeProductInstance, classe)
#endif

#endif
