#ifndef __TIE_CATIElbContactInstance
#define __TIE_CATIElbContactInstance

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIElbContactInstance.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIElbContactInstance */
#define declare_TIE_CATIElbContactInstance(classe) \
 \
 \
class TIECATIElbContactInstance##classe : public CATIElbContactInstance \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIElbContactInstance, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Connect(CATIElbCavity * ipElecCavity, int & StatusOfGeometricalConstraint) ; \
      virtual HRESULT GetConnectedObject (	CATBaseUnknown *& opElecObject); \
      virtual HRESULT ListBundleCnctPts(CATListValCATBaseUnknown_var*& oBundleCnctPts) ; \
};



#define ENVTIEdeclare_CATIElbContactInstance(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Connect(CATIElbCavity * ipElecCavity, int & StatusOfGeometricalConstraint) ; \
virtual HRESULT GetConnectedObject (	CATBaseUnknown *& opElecObject); \
virtual HRESULT ListBundleCnctPts(CATListValCATBaseUnknown_var*& oBundleCnctPts) ; \


#define ENVTIEdefine_CATIElbContactInstance(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Connect(CATIElbCavity * ipElecCavity, int & StatusOfGeometricalConstraint)  \
{ \
return (ENVTIECALL(CATIElbContactInstance,ENVTIETypeLetter,ENVTIELetter)Connect(ipElecCavity,StatusOfGeometricalConstraint)); \
} \
HRESULT  ENVTIEName::GetConnectedObject (	CATBaseUnknown *& opElecObject) \
{ \
return (ENVTIECALL(CATIElbContactInstance,ENVTIETypeLetter,ENVTIELetter)GetConnectedObject (opElecObject)); \
} \
HRESULT  ENVTIEName::ListBundleCnctPts(CATListValCATBaseUnknown_var*& oBundleCnctPts)  \
{ \
return (ENVTIECALL(CATIElbContactInstance,ENVTIETypeLetter,ENVTIELetter)ListBundleCnctPts(oBundleCnctPts)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIElbContactInstance(classe)    TIECATIElbContactInstance##classe


/* Common methods inside a TIE */
#define common_TIE_CATIElbContactInstance(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIElbContactInstance, classe) \
 \
 \
CATImplementTIEMethods(CATIElbContactInstance, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIElbContactInstance, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIElbContactInstance, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIElbContactInstance, classe) \
 \
HRESULT  TIECATIElbContactInstance##classe::Connect(CATIElbCavity * ipElecCavity, int & StatusOfGeometricalConstraint)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Connect(ipElecCavity,StatusOfGeometricalConstraint)); \
} \
HRESULT  TIECATIElbContactInstance##classe::GetConnectedObject (	CATBaseUnknown *& opElecObject) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConnectedObject (opElecObject)); \
} \
HRESULT  TIECATIElbContactInstance##classe::ListBundleCnctPts(CATListValCATBaseUnknown_var*& oBundleCnctPts)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListBundleCnctPts(oBundleCnctPts)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIElbContactInstance(classe) \
 \
 \
declare_TIE_CATIElbContactInstance(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIElbContactInstance##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIElbContactInstance,"CATIElbContactInstance",CATIElbContactInstance::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIElbContactInstance(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIElbContactInstance, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIElbContactInstance##classe(classe::MetaObject(),CATIElbContactInstance::MetaObject(),(void *)CreateTIECATIElbContactInstance##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIElbContactInstance(classe) \
 \
 \
declare_TIE_CATIElbContactInstance(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIElbContactInstance##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIElbContactInstance,"CATIElbContactInstance",CATIElbContactInstance::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIElbContactInstance(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIElbContactInstance, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIElbContactInstance##classe(classe::MetaObject(),CATIElbContactInstance::MetaObject(),(void *)CreateTIECATIElbContactInstance##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIElbContactInstance(classe) TIE_CATIElbContactInstance(classe)
#else
#define BOA_CATIElbContactInstance(classe) CATImplementBOA(CATIElbContactInstance, classe)
#endif

#endif
