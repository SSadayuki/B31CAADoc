#ifndef __TIE_CATIUExitDRMDocument
#define __TIE_CATIUExitDRMDocument

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIUExitDRMDocument.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIUExitDRMDocument */
#define declare_TIE_CATIUExitDRMDocument(classe) \
 \
 \
class TIECATIUExitDRMDocument##classe : public CATIUExitDRMDocument \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIUExitDRMDocument, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT DRMCreateContext( const CATUC2Bytes * iDocumentID); \
      virtual HRESULT DRMCloseContext() ; \
      virtual  HRESULT DRMExportEnveloppe ( void  *&oDRMEnvelope, size_t &oDRMEnvelopeSize) ; \
      virtual  HRESULT DRMFreeEnveloppe (void *oDRMEnvelope) ; \
      virtual  HRESULT DRMImportEnveloppe( const void *iDRMEnveloppe, size_t iDRMEnveloppeSize) ; \
      virtual  HRESULT DRMGetLibUID( GUID &oUID) ; \
};



#define ENVTIEdeclare_CATIUExitDRMDocument(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT DRMCreateContext( const CATUC2Bytes * iDocumentID); \
virtual HRESULT DRMCloseContext() ; \
virtual  HRESULT DRMExportEnveloppe ( void  *&oDRMEnvelope, size_t &oDRMEnvelopeSize) ; \
virtual  HRESULT DRMFreeEnveloppe (void *oDRMEnvelope) ; \
virtual  HRESULT DRMImportEnveloppe( const void *iDRMEnveloppe, size_t iDRMEnveloppeSize) ; \
virtual  HRESULT DRMGetLibUID( GUID &oUID) ; \


#define ENVTIEdefine_CATIUExitDRMDocument(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::DRMCreateContext( const CATUC2Bytes * iDocumentID) \
{ \
return (ENVTIECALL(CATIUExitDRMDocument,ENVTIETypeLetter,ENVTIELetter)DRMCreateContext(iDocumentID)); \
} \
HRESULT  ENVTIEName::DRMCloseContext()  \
{ \
return (ENVTIECALL(CATIUExitDRMDocument,ENVTIETypeLetter,ENVTIELetter)DRMCloseContext()); \
} \
HRESULT  ENVTIEName::DRMExportEnveloppe ( void  *&oDRMEnvelope, size_t &oDRMEnvelopeSize)  \
{ \
return (ENVTIECALL(CATIUExitDRMDocument,ENVTIETypeLetter,ENVTIELetter)DRMExportEnveloppe (oDRMEnvelope,oDRMEnvelopeSize)); \
} \
HRESULT  ENVTIEName::DRMFreeEnveloppe (void *oDRMEnvelope)  \
{ \
return (ENVTIECALL(CATIUExitDRMDocument,ENVTIETypeLetter,ENVTIELetter)DRMFreeEnveloppe (oDRMEnvelope)); \
} \
HRESULT  ENVTIEName::DRMImportEnveloppe( const void *iDRMEnveloppe, size_t iDRMEnveloppeSize)  \
{ \
return (ENVTIECALL(CATIUExitDRMDocument,ENVTIETypeLetter,ENVTIELetter)DRMImportEnveloppe(iDRMEnveloppe,iDRMEnveloppeSize)); \
} \
HRESULT  ENVTIEName::DRMGetLibUID( GUID &oUID)  \
{ \
return (ENVTIECALL(CATIUExitDRMDocument,ENVTIETypeLetter,ENVTIELetter)DRMGetLibUID(oUID)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIUExitDRMDocument(classe)    TIECATIUExitDRMDocument##classe


/* Common methods inside a TIE */
#define common_TIE_CATIUExitDRMDocument(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIUExitDRMDocument, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATIUExitDRMDocument, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATIUExitDRMDocument, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATIUExitDRMDocument, classe) \
 \
HRESULT  TIECATIUExitDRMDocument##classe::DRMCreateContext( const CATUC2Bytes * iDocumentID) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DRMCreateContext(iDocumentID)); \
} \
HRESULT  TIECATIUExitDRMDocument##classe::DRMCloseContext()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DRMCloseContext()); \
} \
HRESULT  TIECATIUExitDRMDocument##classe::DRMExportEnveloppe ( void  *&oDRMEnvelope, size_t &oDRMEnvelopeSize)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DRMExportEnveloppe (oDRMEnvelope,oDRMEnvelopeSize)); \
} \
HRESULT  TIECATIUExitDRMDocument##classe::DRMFreeEnveloppe (void *oDRMEnvelope)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DRMFreeEnveloppe (oDRMEnvelope)); \
} \
HRESULT  TIECATIUExitDRMDocument##classe::DRMImportEnveloppe( const void *iDRMEnveloppe, size_t iDRMEnveloppeSize)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DRMImportEnveloppe(iDRMEnveloppe,iDRMEnveloppeSize)); \
} \
HRESULT  TIECATIUExitDRMDocument##classe::DRMGetLibUID( GUID &oUID)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->DRMGetLibUID(oUID)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIUExitDRMDocument(classe) \
 \
 \
declare_TIE_CATIUExitDRMDocument(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUExitDRMDocument##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUExitDRMDocument,"CATIUExitDRMDocument",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUExitDRMDocument(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIUExitDRMDocument, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUExitDRMDocument##classe(classe::MetaObject(),TIECATIUExitDRMDocument##classe::MetaObject(),(void *)CreateTIECATIUExitDRMDocument##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIUExitDRMDocument(classe) \
 \
 \
declare_TIE_CATIUExitDRMDocument(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUExitDRMDocument##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUExitDRMDocument,"CATIUExitDRMDocument",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUExitDRMDocument(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIUExitDRMDocument, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUExitDRMDocument##classe(classe::MetaObject(),TIECATIUExitDRMDocument##classe::MetaObject(),(void *)CreateTIECATIUExitDRMDocument##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIUExitDRMDocument(classe) TIE_CATIUExitDRMDocument(classe)
#else
#define BOA_CATIUExitDRMDocument(classe) CATImplementBOA(CATIUExitDRMDocument, classe)
#endif

#endif
