#ifndef __TIE_CATIUExitDRMAuthorization
#define __TIE_CATIUExitDRMAuthorization

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIUExitDRMAuthorization.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIUExitDRMAuthorization */
#define declare_TIE_CATIUExitDRMAuthorization(classe) \
 \
 \
class TIECATIUExitDRMAuthorization##classe : public CATIUExitDRMAuthorization \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIUExitDRMAuthorization, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT DRMInitAuthorization( const CATUC2Bytes * iDocumentID); \
      virtual HRESULT DRMReleaseAuthorization( const CATUC2Bytes * iDocumentID); \
      virtual HRESULT  IsGranted( DWORD iRightToCheck); \
      virtual  HRESULT DRMExportAuthorization ( void  *&oDRMAuthorization, size_t &oDRMAuthorizationSize) ; \
      virtual  HRESULT DRMFreeAuthorization (void *iDRMAuthorization) ; \
      virtual  HRESULT DRMImportAuthorization( const void *iDRMAuthorization, size_t iDRMAuthorizationSize) ; \
};



#define ENVTIEdeclare_CATIUExitDRMAuthorization(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT DRMInitAuthorization( const CATUC2Bytes * iDocumentID); \
virtual HRESULT DRMReleaseAuthorization( const CATUC2Bytes * iDocumentID); \
virtual HRESULT  IsGranted( DWORD iRightToCheck); \
virtual  HRESULT DRMExportAuthorization ( void  *&oDRMAuthorization, size_t &oDRMAuthorizationSize) ; \
virtual  HRESULT DRMFreeAuthorization (void *iDRMAuthorization) ; \
virtual  HRESULT DRMImportAuthorization( const void *iDRMAuthorization, size_t iDRMAuthorizationSize) ; \


#define ENVTIEdefine_CATIUExitDRMAuthorization(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::DRMInitAuthorization( const CATUC2Bytes * iDocumentID) \
{ \
return (ENVTIECALL(CATIUExitDRMAuthorization,ENVTIETypeLetter,ENVTIELetter)DRMInitAuthorization(iDocumentID)); \
} \
HRESULT  ENVTIEName::DRMReleaseAuthorization( const CATUC2Bytes * iDocumentID) \
{ \
return (ENVTIECALL(CATIUExitDRMAuthorization,ENVTIETypeLetter,ENVTIELetter)DRMReleaseAuthorization(iDocumentID)); \
} \
HRESULT   ENVTIEName::IsGranted( DWORD iRightToCheck) \
{ \
return (ENVTIECALL(CATIUExitDRMAuthorization,ENVTIETypeLetter,ENVTIELetter)IsGranted(iRightToCheck)); \
} \
HRESULT  ENVTIEName::DRMExportAuthorization ( void  *&oDRMAuthorization, size_t &oDRMAuthorizationSize)  \
{ \
return (ENVTIECALL(CATIUExitDRMAuthorization,ENVTIETypeLetter,ENVTIELetter)DRMExportAuthorization (oDRMAuthorization,oDRMAuthorizationSize)); \
} \
HRESULT  ENVTIEName::DRMFreeAuthorization (void *iDRMAuthorization)  \
{ \
return (ENVTIECALL(CATIUExitDRMAuthorization,ENVTIETypeLetter,ENVTIELetter)DRMFreeAuthorization (iDRMAuthorization)); \
} \
HRESULT  ENVTIEName::DRMImportAuthorization( const void *iDRMAuthorization, size_t iDRMAuthorizationSize)  \
{ \
return (ENVTIECALL(CATIUExitDRMAuthorization,ENVTIETypeLetter,ENVTIELetter)DRMImportAuthorization(iDRMAuthorization,iDRMAuthorizationSize)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIUExitDRMAuthorization(classe)    TIECATIUExitDRMAuthorization##classe


/* Common methods inside a TIE */
#define common_TIE_CATIUExitDRMAuthorization(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIUExitDRMAuthorization, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATIUExitDRMAuthorization, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATIUExitDRMAuthorization, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATIUExitDRMAuthorization, classe) \
 \
HRESULT  TIECATIUExitDRMAuthorization##classe::DRMInitAuthorization( const CATUC2Bytes * iDocumentID) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DRMInitAuthorization(iDocumentID)); \
} \
HRESULT  TIECATIUExitDRMAuthorization##classe::DRMReleaseAuthorization( const CATUC2Bytes * iDocumentID) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DRMReleaseAuthorization(iDocumentID)); \
} \
HRESULT   TIECATIUExitDRMAuthorization##classe::IsGranted( DWORD iRightToCheck) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsGranted(iRightToCheck)); \
} \
HRESULT  TIECATIUExitDRMAuthorization##classe::DRMExportAuthorization ( void  *&oDRMAuthorization, size_t &oDRMAuthorizationSize)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DRMExportAuthorization (oDRMAuthorization,oDRMAuthorizationSize)); \
} \
HRESULT  TIECATIUExitDRMAuthorization##classe::DRMFreeAuthorization (void *iDRMAuthorization)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DRMFreeAuthorization (iDRMAuthorization)); \
} \
HRESULT  TIECATIUExitDRMAuthorization##classe::DRMImportAuthorization( const void *iDRMAuthorization, size_t iDRMAuthorizationSize)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DRMImportAuthorization(iDRMAuthorization,iDRMAuthorizationSize)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIUExitDRMAuthorization(classe) \
 \
 \
declare_TIE_CATIUExitDRMAuthorization(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUExitDRMAuthorization##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUExitDRMAuthorization,"CATIUExitDRMAuthorization",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUExitDRMAuthorization(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIUExitDRMAuthorization, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUExitDRMAuthorization##classe(classe::MetaObject(),TIECATIUExitDRMAuthorization##classe::MetaObject(),(void *)CreateTIECATIUExitDRMAuthorization##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIUExitDRMAuthorization(classe) \
 \
 \
declare_TIE_CATIUExitDRMAuthorization(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUExitDRMAuthorization##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUExitDRMAuthorization,"CATIUExitDRMAuthorization",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUExitDRMAuthorization(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIUExitDRMAuthorization, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUExitDRMAuthorization##classe(classe::MetaObject(),TIECATIUExitDRMAuthorization##classe::MetaObject(),(void *)CreateTIECATIUExitDRMAuthorization##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIUExitDRMAuthorization(classe) TIE_CATIUExitDRMAuthorization(classe)
#else
#define BOA_CATIUExitDRMAuthorization(classe) CATImplementBOA(CATIUExitDRMAuthorization, classe)
#endif

#endif
