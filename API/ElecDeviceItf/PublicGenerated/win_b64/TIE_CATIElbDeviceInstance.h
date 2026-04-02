#ifndef __TIE_CATIElbDeviceInstance
#define __TIE_CATIElbDeviceInstance

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIElbDeviceInstance.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIElbDeviceInstance */
#define declare_TIE_CATIElbDeviceInstance(classe) \
 \
 \
class TIECATIElbDeviceInstance##classe : public CATIElbDeviceInstance \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIElbDeviceInstance, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Disconnect (CATIElbDeviceInstance * ipDeviceInstance ) ; \
      virtual HRESULT GetConnectedDevice (CATBaseUnknown* 	ipCnctPt, CATBaseUnknown*&  opDevice, CATBaseUnknown*&  opCnctPt ) ; \
};



#define ENVTIEdeclare_CATIElbDeviceInstance(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Disconnect (CATIElbDeviceInstance * ipDeviceInstance ) ; \
virtual HRESULT GetConnectedDevice (CATBaseUnknown* 	ipCnctPt, CATBaseUnknown*&  opDevice, CATBaseUnknown*&  opCnctPt ) ; \


#define ENVTIEdefine_CATIElbDeviceInstance(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Disconnect (CATIElbDeviceInstance * ipDeviceInstance )  \
{ \
return (ENVTIECALL(CATIElbDeviceInstance,ENVTIETypeLetter,ENVTIELetter)Disconnect (ipDeviceInstance )); \
} \
HRESULT  ENVTIEName::GetConnectedDevice (CATBaseUnknown* 	ipCnctPt, CATBaseUnknown*&  opDevice, CATBaseUnknown*&  opCnctPt )  \
{ \
return (ENVTIECALL(CATIElbDeviceInstance,ENVTIETypeLetter,ENVTIELetter)GetConnectedDevice (ipCnctPt,opDevice,opCnctPt )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIElbDeviceInstance(classe)    TIECATIElbDeviceInstance##classe


/* Common methods inside a TIE */
#define common_TIE_CATIElbDeviceInstance(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIElbDeviceInstance, classe) \
 \
 \
CATImplementTIEMethods(CATIElbDeviceInstance, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIElbDeviceInstance, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIElbDeviceInstance, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIElbDeviceInstance, classe) \
 \
HRESULT  TIECATIElbDeviceInstance##classe::Disconnect (CATIElbDeviceInstance * ipDeviceInstance )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Disconnect (ipDeviceInstance )); \
} \
HRESULT  TIECATIElbDeviceInstance##classe::GetConnectedDevice (CATBaseUnknown* 	ipCnctPt, CATBaseUnknown*&  opDevice, CATBaseUnknown*&  opCnctPt )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConnectedDevice (ipCnctPt,opDevice,opCnctPt )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIElbDeviceInstance(classe) \
 \
 \
declare_TIE_CATIElbDeviceInstance(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIElbDeviceInstance##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIElbDeviceInstance,"CATIElbDeviceInstance",CATIElbDeviceInstance::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIElbDeviceInstance(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIElbDeviceInstance, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIElbDeviceInstance##classe(classe::MetaObject(),CATIElbDeviceInstance::MetaObject(),(void *)CreateTIECATIElbDeviceInstance##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIElbDeviceInstance(classe) \
 \
 \
declare_TIE_CATIElbDeviceInstance(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIElbDeviceInstance##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIElbDeviceInstance,"CATIElbDeviceInstance",CATIElbDeviceInstance::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIElbDeviceInstance(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIElbDeviceInstance, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIElbDeviceInstance##classe(classe::MetaObject(),CATIElbDeviceInstance::MetaObject(),(void *)CreateTIECATIElbDeviceInstance##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIElbDeviceInstance(classe) TIE_CATIElbDeviceInstance(classe)
#else
#define BOA_CATIElbDeviceInstance(classe) CATImplementBOA(CATIElbDeviceInstance, classe)
#endif

#endif
