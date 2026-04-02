#ifndef __TIE_CATIASystemConfiguration
#define __TIE_CATIASystemConfiguration

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIASystemConfiguration.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASystemConfiguration */
#define declare_TIE_CATIASystemConfiguration(classe) \
 \
 \
class TIECATIASystemConfiguration##classe : public CATIASystemConfiguration \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASystemConfiguration, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_OperatingSystem(CATBSTR & oOperatingSystem); \
      virtual HRESULT __stdcall get_Version(CATLONG & oVersion); \
      virtual HRESULT __stdcall get_Release(CATLONG & oRelease); \
      virtual HRESULT __stdcall get_ServicePack(CATLONG & oServicePack); \
      virtual HRESULT __stdcall get_ProductCount(CATLONG & oProductCount); \
      virtual HRESULT __stdcall GetProductNames(CATSafeArrayVariant & ioProductNames); \
      virtual HRESULT __stdcall IsProductAuthorized(const CATBSTR & iProductName, CAT_VARIANT_BOOL & oAuthorized); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASystemConfiguration(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_OperatingSystem(CATBSTR & oOperatingSystem); \
virtual HRESULT __stdcall get_Version(CATLONG & oVersion); \
virtual HRESULT __stdcall get_Release(CATLONG & oRelease); \
virtual HRESULT __stdcall get_ServicePack(CATLONG & oServicePack); \
virtual HRESULT __stdcall get_ProductCount(CATLONG & oProductCount); \
virtual HRESULT __stdcall GetProductNames(CATSafeArrayVariant & ioProductNames); \
virtual HRESULT __stdcall IsProductAuthorized(const CATBSTR & iProductName, CAT_VARIANT_BOOL & oAuthorized); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASystemConfiguration(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_OperatingSystem(CATBSTR & oOperatingSystem) \
{ \
return (ENVTIECALL(CATIASystemConfiguration,ENVTIETypeLetter,ENVTIELetter)get_OperatingSystem(oOperatingSystem)); \
} \
HRESULT __stdcall  ENVTIEName::get_Version(CATLONG & oVersion) \
{ \
return (ENVTIECALL(CATIASystemConfiguration,ENVTIETypeLetter,ENVTIELetter)get_Version(oVersion)); \
} \
HRESULT __stdcall  ENVTIEName::get_Release(CATLONG & oRelease) \
{ \
return (ENVTIECALL(CATIASystemConfiguration,ENVTIETypeLetter,ENVTIELetter)get_Release(oRelease)); \
} \
HRESULT __stdcall  ENVTIEName::get_ServicePack(CATLONG & oServicePack) \
{ \
return (ENVTIECALL(CATIASystemConfiguration,ENVTIETypeLetter,ENVTIELetter)get_ServicePack(oServicePack)); \
} \
HRESULT __stdcall  ENVTIEName::get_ProductCount(CATLONG & oProductCount) \
{ \
return (ENVTIECALL(CATIASystemConfiguration,ENVTIETypeLetter,ENVTIELetter)get_ProductCount(oProductCount)); \
} \
HRESULT __stdcall  ENVTIEName::GetProductNames(CATSafeArrayVariant & ioProductNames) \
{ \
return (ENVTIECALL(CATIASystemConfiguration,ENVTIETypeLetter,ENVTIELetter)GetProductNames(ioProductNames)); \
} \
HRESULT __stdcall  ENVTIEName::IsProductAuthorized(const CATBSTR & iProductName, CAT_VARIANT_BOOL & oAuthorized) \
{ \
return (ENVTIECALL(CATIASystemConfiguration,ENVTIETypeLetter,ENVTIELetter)IsProductAuthorized(iProductName,oAuthorized)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASystemConfiguration,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASystemConfiguration,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASystemConfiguration,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASystemConfiguration,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASystemConfiguration,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASystemConfiguration(classe)    TIECATIASystemConfiguration##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASystemConfiguration(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASystemConfiguration, classe) \
 \
 \
CATImplementTIEMethods(CATIASystemConfiguration, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASystemConfiguration, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASystemConfiguration, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASystemConfiguration, classe) \
 \
HRESULT __stdcall  TIECATIASystemConfiguration##classe::get_OperatingSystem(CATBSTR & oOperatingSystem) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OperatingSystem(oOperatingSystem)); \
} \
HRESULT __stdcall  TIECATIASystemConfiguration##classe::get_Version(CATLONG & oVersion) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Version(oVersion)); \
} \
HRESULT __stdcall  TIECATIASystemConfiguration##classe::get_Release(CATLONG & oRelease) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Release(oRelease)); \
} \
HRESULT __stdcall  TIECATIASystemConfiguration##classe::get_ServicePack(CATLONG & oServicePack) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ServicePack(oServicePack)); \
} \
HRESULT __stdcall  TIECATIASystemConfiguration##classe::get_ProductCount(CATLONG & oProductCount) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ProductCount(oProductCount)); \
} \
HRESULT __stdcall  TIECATIASystemConfiguration##classe::GetProductNames(CATSafeArrayVariant & ioProductNames) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProductNames(ioProductNames)); \
} \
HRESULT __stdcall  TIECATIASystemConfiguration##classe::IsProductAuthorized(const CATBSTR & iProductName, CAT_VARIANT_BOOL & oAuthorized) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsProductAuthorized(iProductName,oAuthorized)); \
} \
HRESULT  __stdcall  TIECATIASystemConfiguration##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication)); \
} \
HRESULT  __stdcall  TIECATIASystemConfiguration##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent)); \
} \
HRESULT  __stdcall  TIECATIASystemConfiguration##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIASystemConfiguration##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  TIECATIASystemConfiguration##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASystemConfiguration(classe) \
 \
 \
declare_TIE_CATIASystemConfiguration(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASystemConfiguration##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASystemConfiguration,"CATIASystemConfiguration",CATIASystemConfiguration::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASystemConfiguration(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASystemConfiguration, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASystemConfiguration##classe(classe::MetaObject(),CATIASystemConfiguration::MetaObject(),(void *)CreateTIECATIASystemConfiguration##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASystemConfiguration(classe) \
 \
 \
declare_TIE_CATIASystemConfiguration(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASystemConfiguration##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASystemConfiguration,"CATIASystemConfiguration",CATIASystemConfiguration::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASystemConfiguration(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASystemConfiguration, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASystemConfiguration##classe(classe::MetaObject(),CATIASystemConfiguration::MetaObject(),(void *)CreateTIECATIASystemConfiguration##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASystemConfiguration(classe) TIE_CATIASystemConfiguration(classe)
#else
#define BOA_CATIASystemConfiguration(classe) CATImplementBOA(CATIASystemConfiguration, classe)
#endif

#endif
