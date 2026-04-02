#ifndef __TIE_CATIElbUipDevices
#define __TIE_CATIElbUipDevices

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIElbUipDevices.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIElbUipDevices */
#define declare_TIE_CATIElbUipDevices(classe) \
 \
 \
class TIECATIElbUipDevices##classe : public CATIElbUipDevices \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIElbUipDevices, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ListDevices(const CATListValCATUnicodeString *iListOfSystems, CATLONG32 &oDevicesCount, CATElbDevice *&oListOfDevices) ; \
      virtual HRESULT ListDeviceComposition(const CATUnicodeString iDeviceId, CATLONG32 &oDevicesCount, CATElbDevice *&oListOfDevices) ; \
      virtual HRESULT GetMatingConnector(const CATUnicodeString iConnectorId, CATUnicodeString &oMatingConnectorId) ; \
};



#define ENVTIEdeclare_CATIElbUipDevices(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ListDevices(const CATListValCATUnicodeString *iListOfSystems, CATLONG32 &oDevicesCount, CATElbDevice *&oListOfDevices) ; \
virtual HRESULT ListDeviceComposition(const CATUnicodeString iDeviceId, CATLONG32 &oDevicesCount, CATElbDevice *&oListOfDevices) ; \
virtual HRESULT GetMatingConnector(const CATUnicodeString iConnectorId, CATUnicodeString &oMatingConnectorId) ; \


#define ENVTIEdefine_CATIElbUipDevices(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ListDevices(const CATListValCATUnicodeString *iListOfSystems, CATLONG32 &oDevicesCount, CATElbDevice *&oListOfDevices)  \
{ \
return (ENVTIECALL(CATIElbUipDevices,ENVTIETypeLetter,ENVTIELetter)ListDevices(iListOfSystems,oDevicesCount,oListOfDevices)); \
} \
HRESULT  ENVTIEName::ListDeviceComposition(const CATUnicodeString iDeviceId, CATLONG32 &oDevicesCount, CATElbDevice *&oListOfDevices)  \
{ \
return (ENVTIECALL(CATIElbUipDevices,ENVTIETypeLetter,ENVTIELetter)ListDeviceComposition(iDeviceId,oDevicesCount,oListOfDevices)); \
} \
HRESULT  ENVTIEName::GetMatingConnector(const CATUnicodeString iConnectorId, CATUnicodeString &oMatingConnectorId)  \
{ \
return (ENVTIECALL(CATIElbUipDevices,ENVTIETypeLetter,ENVTIELetter)GetMatingConnector(iConnectorId,oMatingConnectorId)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIElbUipDevices(classe)    TIECATIElbUipDevices##classe


/* Common methods inside a TIE */
#define common_TIE_CATIElbUipDevices(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIElbUipDevices, classe) \
 \
 \
CATImplementTIEMethods(CATIElbUipDevices, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIElbUipDevices, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIElbUipDevices, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIElbUipDevices, classe) \
 \
HRESULT  TIECATIElbUipDevices##classe::ListDevices(const CATListValCATUnicodeString *iListOfSystems, CATLONG32 &oDevicesCount, CATElbDevice *&oListOfDevices)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListDevices(iListOfSystems,oDevicesCount,oListOfDevices)); \
} \
HRESULT  TIECATIElbUipDevices##classe::ListDeviceComposition(const CATUnicodeString iDeviceId, CATLONG32 &oDevicesCount, CATElbDevice *&oListOfDevices)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListDeviceComposition(iDeviceId,oDevicesCount,oListOfDevices)); \
} \
HRESULT  TIECATIElbUipDevices##classe::GetMatingConnector(const CATUnicodeString iConnectorId, CATUnicodeString &oMatingConnectorId)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMatingConnector(iConnectorId,oMatingConnectorId)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIElbUipDevices(classe) \
 \
 \
declare_TIE_CATIElbUipDevices(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIElbUipDevices##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIElbUipDevices,"CATIElbUipDevices",CATIElbUipDevices::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIElbUipDevices(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIElbUipDevices, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIElbUipDevices##classe(classe::MetaObject(),CATIElbUipDevices::MetaObject(),(void *)CreateTIECATIElbUipDevices##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIElbUipDevices(classe) \
 \
 \
declare_TIE_CATIElbUipDevices(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIElbUipDevices##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIElbUipDevices,"CATIElbUipDevices",CATIElbUipDevices::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIElbUipDevices(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIElbUipDevices, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIElbUipDevices##classe(classe::MetaObject(),CATIElbUipDevices::MetaObject(),(void *)CreateTIECATIElbUipDevices##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIElbUipDevices(classe) TIE_CATIElbUipDevices(classe)
#else
#define BOA_CATIElbUipDevices(classe) CATImplementBOA(CATIElbUipDevices, classe)
#endif

#endif
