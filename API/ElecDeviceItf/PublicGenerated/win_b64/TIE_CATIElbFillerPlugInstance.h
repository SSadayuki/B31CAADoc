#ifndef __TIE_CATIElbFillerPlugInstance
#define __TIE_CATIElbFillerPlugInstance

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIElbFillerPlugInstance.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIElbFillerPlugInstance */
#define declare_TIE_CATIElbFillerPlugInstance(classe) \
 \
 \
class TIECATIElbFillerPlugInstance##classe : public CATIElbFillerPlugInstance \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIElbFillerPlugInstance, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Connect(CATIElbCavity * ipElecCavity, int & StatusOfGeometricalConstraint) ; \
      virtual HRESULT GetConnectedObject (	CATBaseUnknown *& opElecObject); \
};



#define ENVTIEdeclare_CATIElbFillerPlugInstance(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Connect(CATIElbCavity * ipElecCavity, int & StatusOfGeometricalConstraint) ; \
virtual HRESULT GetConnectedObject (	CATBaseUnknown *& opElecObject); \


#define ENVTIEdefine_CATIElbFillerPlugInstance(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Connect(CATIElbCavity * ipElecCavity, int & StatusOfGeometricalConstraint)  \
{ \
return (ENVTIECALL(CATIElbFillerPlugInstance,ENVTIETypeLetter,ENVTIELetter)Connect(ipElecCavity,StatusOfGeometricalConstraint)); \
} \
HRESULT  ENVTIEName::GetConnectedObject (	CATBaseUnknown *& opElecObject) \
{ \
return (ENVTIECALL(CATIElbFillerPlugInstance,ENVTIETypeLetter,ENVTIELetter)GetConnectedObject (opElecObject)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIElbFillerPlugInstance(classe)    TIECATIElbFillerPlugInstance##classe


/* Common methods inside a TIE */
#define common_TIE_CATIElbFillerPlugInstance(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIElbFillerPlugInstance, classe) \
 \
 \
CATImplementTIEMethods(CATIElbFillerPlugInstance, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIElbFillerPlugInstance, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIElbFillerPlugInstance, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIElbFillerPlugInstance, classe) \
 \
HRESULT  TIECATIElbFillerPlugInstance##classe::Connect(CATIElbCavity * ipElecCavity, int & StatusOfGeometricalConstraint)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Connect(ipElecCavity,StatusOfGeometricalConstraint)); \
} \
HRESULT  TIECATIElbFillerPlugInstance##classe::GetConnectedObject (	CATBaseUnknown *& opElecObject) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConnectedObject (opElecObject)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIElbFillerPlugInstance(classe) \
 \
 \
declare_TIE_CATIElbFillerPlugInstance(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIElbFillerPlugInstance##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIElbFillerPlugInstance,"CATIElbFillerPlugInstance",CATIElbFillerPlugInstance::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIElbFillerPlugInstance(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIElbFillerPlugInstance, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIElbFillerPlugInstance##classe(classe::MetaObject(),CATIElbFillerPlugInstance::MetaObject(),(void *)CreateTIECATIElbFillerPlugInstance##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIElbFillerPlugInstance(classe) \
 \
 \
declare_TIE_CATIElbFillerPlugInstance(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIElbFillerPlugInstance##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIElbFillerPlugInstance,"CATIElbFillerPlugInstance",CATIElbFillerPlugInstance::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIElbFillerPlugInstance(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIElbFillerPlugInstance, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIElbFillerPlugInstance##classe(classe::MetaObject(),CATIElbFillerPlugInstance::MetaObject(),(void *)CreateTIECATIElbFillerPlugInstance##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIElbFillerPlugInstance(classe) TIE_CATIElbFillerPlugInstance(classe)
#else
#define BOA_CATIElbFillerPlugInstance(classe) CATImplementBOA(CATIElbFillerPlugInstance, classe)
#endif

#endif
