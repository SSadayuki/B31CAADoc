#ifndef __TIE_CATICciRosetteTransferTypeFactoryServices
#define __TIE_CATICciRosetteTransferTypeFactoryServices

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICciRosetteTransferTypeFactoryServices.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICciRosetteTransferTypeFactoryServices */
#define declare_TIE_CATICciRosetteTransferTypeFactoryServices(classe) \
 \
 \
class TIECATICciRosetteTransferTypeFactoryServices##classe : public CATICciRosetteTransferTypeFactoryServices \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICciRosetteTransferTypeFactoryServices, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetListOfRosetteTransferTypes (CATListOfCATUnicodeString &oListOfLateTypeName, CATListOfCATUnicodeString & oListOfTransferTypeName); \
      virtual HRESULT CreateRosetteTransferType(const CATUnicodeString  &iLateTypeName, CATICciRosetteTransferType_var &ospRosetteTransferType); \
};



#define ENVTIEdeclare_CATICciRosetteTransferTypeFactoryServices(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetListOfRosetteTransferTypes (CATListOfCATUnicodeString &oListOfLateTypeName, CATListOfCATUnicodeString & oListOfTransferTypeName); \
virtual HRESULT CreateRosetteTransferType(const CATUnicodeString  &iLateTypeName, CATICciRosetteTransferType_var &ospRosetteTransferType); \


#define ENVTIEdefine_CATICciRosetteTransferTypeFactoryServices(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetListOfRosetteTransferTypes (CATListOfCATUnicodeString &oListOfLateTypeName, CATListOfCATUnicodeString & oListOfTransferTypeName) \
{ \
return (ENVTIECALL(CATICciRosetteTransferTypeFactoryServices,ENVTIETypeLetter,ENVTIELetter)GetListOfRosetteTransferTypes (oListOfLateTypeName,oListOfTransferTypeName)); \
} \
HRESULT  ENVTIEName::CreateRosetteTransferType(const CATUnicodeString  &iLateTypeName, CATICciRosetteTransferType_var &ospRosetteTransferType) \
{ \
return (ENVTIECALL(CATICciRosetteTransferTypeFactoryServices,ENVTIETypeLetter,ENVTIELetter)CreateRosetteTransferType(iLateTypeName,ospRosetteTransferType)); \
} \


/* Name of the TIE class */
#define class_TIE_CATICciRosetteTransferTypeFactoryServices(classe)    TIECATICciRosetteTransferTypeFactoryServices##classe


/* Common methods inside a TIE */
#define common_TIE_CATICciRosetteTransferTypeFactoryServices(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICciRosetteTransferTypeFactoryServices, classe) \
 \
 \
CATImplementTIEMethods(CATICciRosetteTransferTypeFactoryServices, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICciRosetteTransferTypeFactoryServices, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICciRosetteTransferTypeFactoryServices, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICciRosetteTransferTypeFactoryServices, classe) \
 \
HRESULT  TIECATICciRosetteTransferTypeFactoryServices##classe::GetListOfRosetteTransferTypes (CATListOfCATUnicodeString &oListOfLateTypeName, CATListOfCATUnicodeString & oListOfTransferTypeName) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetListOfRosetteTransferTypes (oListOfLateTypeName,oListOfTransferTypeName)); \
} \
HRESULT  TIECATICciRosetteTransferTypeFactoryServices##classe::CreateRosetteTransferType(const CATUnicodeString  &iLateTypeName, CATICciRosetteTransferType_var &ospRosetteTransferType) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateRosetteTransferType(iLateTypeName,ospRosetteTransferType)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICciRosetteTransferTypeFactoryServices(classe) \
 \
 \
declare_TIE_CATICciRosetteTransferTypeFactoryServices(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciRosetteTransferTypeFactoryServices##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciRosetteTransferTypeFactoryServices,"CATICciRosetteTransferTypeFactoryServices",CATICciRosetteTransferTypeFactoryServices::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciRosetteTransferTypeFactoryServices(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICciRosetteTransferTypeFactoryServices, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciRosetteTransferTypeFactoryServices##classe(classe::MetaObject(),CATICciRosetteTransferTypeFactoryServices::MetaObject(),(void *)CreateTIECATICciRosetteTransferTypeFactoryServices##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICciRosetteTransferTypeFactoryServices(classe) \
 \
 \
declare_TIE_CATICciRosetteTransferTypeFactoryServices(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciRosetteTransferTypeFactoryServices##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciRosetteTransferTypeFactoryServices,"CATICciRosetteTransferTypeFactoryServices",CATICciRosetteTransferTypeFactoryServices::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciRosetteTransferTypeFactoryServices(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICciRosetteTransferTypeFactoryServices, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciRosetteTransferTypeFactoryServices##classe(classe::MetaObject(),CATICciRosetteTransferTypeFactoryServices::MetaObject(),(void *)CreateTIECATICciRosetteTransferTypeFactoryServices##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICciRosetteTransferTypeFactoryServices(classe) TIE_CATICciRosetteTransferTypeFactoryServices(classe)
#else
#define BOA_CATICciRosetteTransferTypeFactoryServices(classe) CATImplementBOA(CATICciRosetteTransferTypeFactoryServices, classe)
#endif

#endif
