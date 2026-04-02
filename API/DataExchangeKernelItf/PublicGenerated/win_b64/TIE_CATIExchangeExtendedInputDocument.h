#ifndef __TIE_CATIExchangeExtendedInputDocument
#define __TIE_CATIExchangeExtendedInputDocument

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeExtendedInputDocument.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeExtendedInputDocument */
#define declare_TIE_CATIExchangeExtendedInputDocument(classe) \
 \
 \
class TIECATIExchangeExtendedInputDocument##classe : public CATIExchangeExtendedInputDocument \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeExtendedInputDocument, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetVersionStatus(XCADVersionStatus& oVersionStatus) ; \
      virtual HRESULT GetNativeSystemID(CATUnicodeString& oNativeSystemID, CATUnicodeString& oBuildDate) ; \
      virtual HRESULT GetDocumentAuthor(CATUnicodeString& oDocumentAuthor) ; \
      virtual HRESULT GetDocumentOrganization(CATUnicodeString& oDocumentOrganization) ; \
      virtual HRESULT GetDocumentAuthorization(CATUnicodeString& oDocumentAuthorization) ; \
      virtual HRESULT GetDocumentStatus(CATUnicodeString& oDocumentStatus) ; \
      virtual HRESULT GetDocumentRevision(CATUnicodeString& oDocumentRevision) ; \
};



#define ENVTIEdeclare_CATIExchangeExtendedInputDocument(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetVersionStatus(XCADVersionStatus& oVersionStatus) ; \
virtual HRESULT GetNativeSystemID(CATUnicodeString& oNativeSystemID, CATUnicodeString& oBuildDate) ; \
virtual HRESULT GetDocumentAuthor(CATUnicodeString& oDocumentAuthor) ; \
virtual HRESULT GetDocumentOrganization(CATUnicodeString& oDocumentOrganization) ; \
virtual HRESULT GetDocumentAuthorization(CATUnicodeString& oDocumentAuthorization) ; \
virtual HRESULT GetDocumentStatus(CATUnicodeString& oDocumentStatus) ; \
virtual HRESULT GetDocumentRevision(CATUnicodeString& oDocumentRevision) ; \


#define ENVTIEdefine_CATIExchangeExtendedInputDocument(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetVersionStatus(XCADVersionStatus& oVersionStatus)  \
{ \
return (ENVTIECALL(CATIExchangeExtendedInputDocument,ENVTIETypeLetter,ENVTIELetter)GetVersionStatus(oVersionStatus)); \
} \
HRESULT  ENVTIEName::GetNativeSystemID(CATUnicodeString& oNativeSystemID, CATUnicodeString& oBuildDate)  \
{ \
return (ENVTIECALL(CATIExchangeExtendedInputDocument,ENVTIETypeLetter,ENVTIELetter)GetNativeSystemID(oNativeSystemID,oBuildDate)); \
} \
HRESULT  ENVTIEName::GetDocumentAuthor(CATUnicodeString& oDocumentAuthor)  \
{ \
return (ENVTIECALL(CATIExchangeExtendedInputDocument,ENVTIETypeLetter,ENVTIELetter)GetDocumentAuthor(oDocumentAuthor)); \
} \
HRESULT  ENVTIEName::GetDocumentOrganization(CATUnicodeString& oDocumentOrganization)  \
{ \
return (ENVTIECALL(CATIExchangeExtendedInputDocument,ENVTIETypeLetter,ENVTIELetter)GetDocumentOrganization(oDocumentOrganization)); \
} \
HRESULT  ENVTIEName::GetDocumentAuthorization(CATUnicodeString& oDocumentAuthorization)  \
{ \
return (ENVTIECALL(CATIExchangeExtendedInputDocument,ENVTIETypeLetter,ENVTIELetter)GetDocumentAuthorization(oDocumentAuthorization)); \
} \
HRESULT  ENVTIEName::GetDocumentStatus(CATUnicodeString& oDocumentStatus)  \
{ \
return (ENVTIECALL(CATIExchangeExtendedInputDocument,ENVTIETypeLetter,ENVTIELetter)GetDocumentStatus(oDocumentStatus)); \
} \
HRESULT  ENVTIEName::GetDocumentRevision(CATUnicodeString& oDocumentRevision)  \
{ \
return (ENVTIECALL(CATIExchangeExtendedInputDocument,ENVTIETypeLetter,ENVTIELetter)GetDocumentRevision(oDocumentRevision)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeExtendedInputDocument(classe)    TIECATIExchangeExtendedInputDocument##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeExtendedInputDocument(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeExtendedInputDocument, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeExtendedInputDocument, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeExtendedInputDocument, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeExtendedInputDocument, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeExtendedInputDocument, classe) \
 \
HRESULT  TIECATIExchangeExtendedInputDocument##classe::GetVersionStatus(XCADVersionStatus& oVersionStatus)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetVersionStatus(oVersionStatus)); \
} \
HRESULT  TIECATIExchangeExtendedInputDocument##classe::GetNativeSystemID(CATUnicodeString& oNativeSystemID, CATUnicodeString& oBuildDate)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNativeSystemID(oNativeSystemID,oBuildDate)); \
} \
HRESULT  TIECATIExchangeExtendedInputDocument##classe::GetDocumentAuthor(CATUnicodeString& oDocumentAuthor)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDocumentAuthor(oDocumentAuthor)); \
} \
HRESULT  TIECATIExchangeExtendedInputDocument##classe::GetDocumentOrganization(CATUnicodeString& oDocumentOrganization)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDocumentOrganization(oDocumentOrganization)); \
} \
HRESULT  TIECATIExchangeExtendedInputDocument##classe::GetDocumentAuthorization(CATUnicodeString& oDocumentAuthorization)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDocumentAuthorization(oDocumentAuthorization)); \
} \
HRESULT  TIECATIExchangeExtendedInputDocument##classe::GetDocumentStatus(CATUnicodeString& oDocumentStatus)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDocumentStatus(oDocumentStatus)); \
} \
HRESULT  TIECATIExchangeExtendedInputDocument##classe::GetDocumentRevision(CATUnicodeString& oDocumentRevision)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDocumentRevision(oDocumentRevision)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeExtendedInputDocument(classe) \
 \
 \
declare_TIE_CATIExchangeExtendedInputDocument(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeExtendedInputDocument##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeExtendedInputDocument,"CATIExchangeExtendedInputDocument",CATIExchangeExtendedInputDocument::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeExtendedInputDocument(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeExtendedInputDocument, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeExtendedInputDocument##classe(classe::MetaObject(),CATIExchangeExtendedInputDocument::MetaObject(),(void *)CreateTIECATIExchangeExtendedInputDocument##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeExtendedInputDocument(classe) \
 \
 \
declare_TIE_CATIExchangeExtendedInputDocument(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeExtendedInputDocument##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeExtendedInputDocument,"CATIExchangeExtendedInputDocument",CATIExchangeExtendedInputDocument::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeExtendedInputDocument(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeExtendedInputDocument, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeExtendedInputDocument##classe(classe::MetaObject(),CATIExchangeExtendedInputDocument::MetaObject(),(void *)CreateTIECATIExchangeExtendedInputDocument##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeExtendedInputDocument(classe) TIE_CATIExchangeExtendedInputDocument(classe)
#else
#define BOA_CATIExchangeExtendedInputDocument(classe) CATImplementBOA(CATIExchangeExtendedInputDocument, classe)
#endif

#endif
