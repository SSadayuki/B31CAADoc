#ifndef __TIE_CATIExchangeInputDocument
#define __TIE_CATIExchangeInputDocument

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIExchangeInputDocument.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIExchangeInputDocument */
#define declare_TIE_CATIExchangeInputDocument(classe) \
 \
 \
class TIECATIExchangeInputDocument##classe : public CATIExchangeInputDocument \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIExchangeInputDocument, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Initialize(const FilePath& iFile) ; \
      virtual HRESULT GetRepresentation  (const CATUnicodeString& iRepresentationName, CATIExchangeRepresentation_var& oExportRep) ; \
      virtual HRESULT GetDocumentPATH(FilePath& oDocFileName ) ; \
      virtual HRESULT GetDocumentURL( URL& oDocURL ) ; \
      virtual HRESULT GetDocumentDescription( CATUnicodeString& oDescription ) ; \
      virtual HRESULT SetLogError(CATIExchangeLogError* iLogError) ; \
      virtual HRESULT Close() ; \
      virtual HRESULT SetOption(const CATUnicodeString& iOptionName, const CATUnicodeString& iOptionValue) ; \
};



#define ENVTIEdeclare_CATIExchangeInputDocument(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Initialize(const FilePath& iFile) ; \
virtual HRESULT GetRepresentation  (const CATUnicodeString& iRepresentationName, CATIExchangeRepresentation_var& oExportRep) ; \
virtual HRESULT GetDocumentPATH(FilePath& oDocFileName ) ; \
virtual HRESULT GetDocumentURL( URL& oDocURL ) ; \
virtual HRESULT GetDocumentDescription( CATUnicodeString& oDescription ) ; \
virtual HRESULT SetLogError(CATIExchangeLogError* iLogError) ; \
virtual HRESULT Close() ; \
virtual HRESULT SetOption(const CATUnicodeString& iOptionName, const CATUnicodeString& iOptionValue) ; \


#define ENVTIEdefine_CATIExchangeInputDocument(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Initialize(const FilePath& iFile)  \
{ \
return (ENVTIECALL(CATIExchangeInputDocument,ENVTIETypeLetter,ENVTIELetter)Initialize(iFile)); \
} \
HRESULT  ENVTIEName::GetRepresentation  (const CATUnicodeString& iRepresentationName, CATIExchangeRepresentation_var& oExportRep)  \
{ \
return (ENVTIECALL(CATIExchangeInputDocument,ENVTIETypeLetter,ENVTIELetter)GetRepresentation  (iRepresentationName,oExportRep)); \
} \
HRESULT  ENVTIEName::GetDocumentPATH(FilePath& oDocFileName )  \
{ \
return (ENVTIECALL(CATIExchangeInputDocument,ENVTIETypeLetter,ENVTIELetter)GetDocumentPATH(oDocFileName )); \
} \
HRESULT  ENVTIEName::GetDocumentURL( URL& oDocURL )  \
{ \
return (ENVTIECALL(CATIExchangeInputDocument,ENVTIETypeLetter,ENVTIELetter)GetDocumentURL(oDocURL )); \
} \
HRESULT  ENVTIEName::GetDocumentDescription( CATUnicodeString& oDescription )  \
{ \
return (ENVTIECALL(CATIExchangeInputDocument,ENVTIETypeLetter,ENVTIELetter)GetDocumentDescription(oDescription )); \
} \
HRESULT  ENVTIEName::SetLogError(CATIExchangeLogError* iLogError)  \
{ \
return (ENVTIECALL(CATIExchangeInputDocument,ENVTIETypeLetter,ENVTIELetter)SetLogError(iLogError)); \
} \
HRESULT  ENVTIEName::Close()  \
{ \
return (ENVTIECALL(CATIExchangeInputDocument,ENVTIETypeLetter,ENVTIELetter)Close()); \
} \
HRESULT  ENVTIEName::SetOption(const CATUnicodeString& iOptionName, const CATUnicodeString& iOptionValue)  \
{ \
return (ENVTIECALL(CATIExchangeInputDocument,ENVTIETypeLetter,ENVTIELetter)SetOption(iOptionName,iOptionValue)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIExchangeInputDocument(classe)    TIECATIExchangeInputDocument##classe


/* Common methods inside a TIE */
#define common_TIE_CATIExchangeInputDocument(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIExchangeInputDocument, classe) \
 \
 \
CATImplementTIEMethods(CATIExchangeInputDocument, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIExchangeInputDocument, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIExchangeInputDocument, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIExchangeInputDocument, classe) \
 \
HRESULT  TIECATIExchangeInputDocument##classe::Initialize(const FilePath& iFile)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Initialize(iFile)); \
} \
HRESULT  TIECATIExchangeInputDocument##classe::GetRepresentation  (const CATUnicodeString& iRepresentationName, CATIExchangeRepresentation_var& oExportRep)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRepresentation  (iRepresentationName,oExportRep)); \
} \
HRESULT  TIECATIExchangeInputDocument##classe::GetDocumentPATH(FilePath& oDocFileName )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDocumentPATH(oDocFileName )); \
} \
HRESULT  TIECATIExchangeInputDocument##classe::GetDocumentURL( URL& oDocURL )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDocumentURL(oDocURL )); \
} \
HRESULT  TIECATIExchangeInputDocument##classe::GetDocumentDescription( CATUnicodeString& oDescription )  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDocumentDescription(oDescription )); \
} \
HRESULT  TIECATIExchangeInputDocument##classe::SetLogError(CATIExchangeLogError* iLogError)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLogError(iLogError)); \
} \
HRESULT  TIECATIExchangeInputDocument##classe::Close()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Close()); \
} \
HRESULT  TIECATIExchangeInputDocument##classe::SetOption(const CATUnicodeString& iOptionName, const CATUnicodeString& iOptionValue)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOption(iOptionName,iOptionValue)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIExchangeInputDocument(classe) \
 \
 \
declare_TIE_CATIExchangeInputDocument(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeInputDocument##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeInputDocument,"CATIExchangeInputDocument",CATIExchangeInputDocument::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeInputDocument(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIExchangeInputDocument, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeInputDocument##classe(classe::MetaObject(),CATIExchangeInputDocument::MetaObject(),(void *)CreateTIECATIExchangeInputDocument##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIExchangeInputDocument(classe) \
 \
 \
declare_TIE_CATIExchangeInputDocument(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIExchangeInputDocument##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIExchangeInputDocument,"CATIExchangeInputDocument",CATIExchangeInputDocument::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIExchangeInputDocument(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIExchangeInputDocument, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIExchangeInputDocument##classe(classe::MetaObject(),CATIExchangeInputDocument::MetaObject(),(void *)CreateTIECATIExchangeInputDocument##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIExchangeInputDocument(classe) TIE_CATIExchangeInputDocument(classe)
#else
#define BOA_CATIExchangeInputDocument(classe) CATImplementBOA(CATIExchangeInputDocument, classe)
#endif

#endif
