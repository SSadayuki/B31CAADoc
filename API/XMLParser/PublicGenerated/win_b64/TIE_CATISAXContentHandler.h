#ifndef __TIE_CATISAXContentHandler
#define __TIE_CATISAXContentHandler

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISAXContentHandler.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISAXContentHandler */
#define declare_TIE_CATISAXContentHandler(classe) \
 \
 \
class TIECATISAXContentHandler##classe : public CATISAXContentHandler \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISAXContentHandler, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT StartDocument() ; \
      virtual HRESULT EndDocument() ; \
      virtual HRESULT StartElement( const CATUnicodeString & iURI, const CATUnicodeString & iLocalName, const CATUnicodeString & iQualifiedName, const CATISAXAttributes_var & iAttributes) ; \
      virtual HRESULT EndElement( const CATUnicodeString & iURI, const CATUnicodeString & iLocalName, const CATUnicodeString & iQualifiedName) ; \
      virtual HRESULT Characters( const CATUnicodeString & iCharacters) ; \
      virtual HRESULT IgnorableWhiteSpace( const CATUnicodeString & iCharacters) ; \
      virtual HRESULT ProcessingInstruction( const CATUnicodeString & iTarget, const CATUnicodeString & iData) ; \
      virtual HRESULT SetDocumentLocator( const CATISAXLocator_var& iLocator) ; \
      virtual HRESULT StartPrefixMapping( const CATUnicodeString & iPrefix, const CATUnicodeString & iURI) ; \
      virtual HRESULT EndPrefixMapping( const CATUnicodeString & iPrefix) ; \
      virtual HRESULT SkippedEntity( const CATUnicodeString & iName) ; \
};



#define ENVTIEdeclare_CATISAXContentHandler(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT StartDocument() ; \
virtual HRESULT EndDocument() ; \
virtual HRESULT StartElement( const CATUnicodeString & iURI, const CATUnicodeString & iLocalName, const CATUnicodeString & iQualifiedName, const CATISAXAttributes_var & iAttributes) ; \
virtual HRESULT EndElement( const CATUnicodeString & iURI, const CATUnicodeString & iLocalName, const CATUnicodeString & iQualifiedName) ; \
virtual HRESULT Characters( const CATUnicodeString & iCharacters) ; \
virtual HRESULT IgnorableWhiteSpace( const CATUnicodeString & iCharacters) ; \
virtual HRESULT ProcessingInstruction( const CATUnicodeString & iTarget, const CATUnicodeString & iData) ; \
virtual HRESULT SetDocumentLocator( const CATISAXLocator_var& iLocator) ; \
virtual HRESULT StartPrefixMapping( const CATUnicodeString & iPrefix, const CATUnicodeString & iURI) ; \
virtual HRESULT EndPrefixMapping( const CATUnicodeString & iPrefix) ; \
virtual HRESULT SkippedEntity( const CATUnicodeString & iName) ; \


#define ENVTIEdefine_CATISAXContentHandler(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::StartDocument()  \
{ \
return (ENVTIECALL(CATISAXContentHandler,ENVTIETypeLetter,ENVTIELetter)StartDocument()); \
} \
HRESULT  ENVTIEName::EndDocument()  \
{ \
return (ENVTIECALL(CATISAXContentHandler,ENVTIETypeLetter,ENVTIELetter)EndDocument()); \
} \
HRESULT  ENVTIEName::StartElement( const CATUnicodeString & iURI, const CATUnicodeString & iLocalName, const CATUnicodeString & iQualifiedName, const CATISAXAttributes_var & iAttributes)  \
{ \
return (ENVTIECALL(CATISAXContentHandler,ENVTIETypeLetter,ENVTIELetter)StartElement(iURI,iLocalName,iQualifiedName,iAttributes)); \
} \
HRESULT  ENVTIEName::EndElement( const CATUnicodeString & iURI, const CATUnicodeString & iLocalName, const CATUnicodeString & iQualifiedName)  \
{ \
return (ENVTIECALL(CATISAXContentHandler,ENVTIETypeLetter,ENVTIELetter)EndElement(iURI,iLocalName,iQualifiedName)); \
} \
HRESULT  ENVTIEName::Characters( const CATUnicodeString & iCharacters)  \
{ \
return (ENVTIECALL(CATISAXContentHandler,ENVTIETypeLetter,ENVTIELetter)Characters(iCharacters)); \
} \
HRESULT  ENVTIEName::IgnorableWhiteSpace( const CATUnicodeString & iCharacters)  \
{ \
return (ENVTIECALL(CATISAXContentHandler,ENVTIETypeLetter,ENVTIELetter)IgnorableWhiteSpace(iCharacters)); \
} \
HRESULT  ENVTIEName::ProcessingInstruction( const CATUnicodeString & iTarget, const CATUnicodeString & iData)  \
{ \
return (ENVTIECALL(CATISAXContentHandler,ENVTIETypeLetter,ENVTIELetter)ProcessingInstruction(iTarget,iData)); \
} \
HRESULT  ENVTIEName::SetDocumentLocator( const CATISAXLocator_var& iLocator)  \
{ \
return (ENVTIECALL(CATISAXContentHandler,ENVTIETypeLetter,ENVTIELetter)SetDocumentLocator(iLocator)); \
} \
HRESULT  ENVTIEName::StartPrefixMapping( const CATUnicodeString & iPrefix, const CATUnicodeString & iURI)  \
{ \
return (ENVTIECALL(CATISAXContentHandler,ENVTIETypeLetter,ENVTIELetter)StartPrefixMapping(iPrefix,iURI)); \
} \
HRESULT  ENVTIEName::EndPrefixMapping( const CATUnicodeString & iPrefix)  \
{ \
return (ENVTIECALL(CATISAXContentHandler,ENVTIETypeLetter,ENVTIELetter)EndPrefixMapping(iPrefix)); \
} \
HRESULT  ENVTIEName::SkippedEntity( const CATUnicodeString & iName)  \
{ \
return (ENVTIECALL(CATISAXContentHandler,ENVTIETypeLetter,ENVTIELetter)SkippedEntity(iName)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISAXContentHandler(classe)    TIECATISAXContentHandler##classe


/* Common methods inside a TIE */
#define common_TIE_CATISAXContentHandler(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISAXContentHandler, classe) \
 \
 \
CATImplementTIEMethods(CATISAXContentHandler, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISAXContentHandler, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISAXContentHandler, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISAXContentHandler, classe) \
 \
HRESULT  TIECATISAXContentHandler##classe::StartDocument()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->StartDocument()); \
} \
HRESULT  TIECATISAXContentHandler##classe::EndDocument()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EndDocument()); \
} \
HRESULT  TIECATISAXContentHandler##classe::StartElement( const CATUnicodeString & iURI, const CATUnicodeString & iLocalName, const CATUnicodeString & iQualifiedName, const CATISAXAttributes_var & iAttributes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->StartElement(iURI,iLocalName,iQualifiedName,iAttributes)); \
} \
HRESULT  TIECATISAXContentHandler##classe::EndElement( const CATUnicodeString & iURI, const CATUnicodeString & iLocalName, const CATUnicodeString & iQualifiedName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EndElement(iURI,iLocalName,iQualifiedName)); \
} \
HRESULT  TIECATISAXContentHandler##classe::Characters( const CATUnicodeString & iCharacters)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Characters(iCharacters)); \
} \
HRESULT  TIECATISAXContentHandler##classe::IgnorableWhiteSpace( const CATUnicodeString & iCharacters)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IgnorableWhiteSpace(iCharacters)); \
} \
HRESULT  TIECATISAXContentHandler##classe::ProcessingInstruction( const CATUnicodeString & iTarget, const CATUnicodeString & iData)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ProcessingInstruction(iTarget,iData)); \
} \
HRESULT  TIECATISAXContentHandler##classe::SetDocumentLocator( const CATISAXLocator_var& iLocator)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDocumentLocator(iLocator)); \
} \
HRESULT  TIECATISAXContentHandler##classe::StartPrefixMapping( const CATUnicodeString & iPrefix, const CATUnicodeString & iURI)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->StartPrefixMapping(iPrefix,iURI)); \
} \
HRESULT  TIECATISAXContentHandler##classe::EndPrefixMapping( const CATUnicodeString & iPrefix)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EndPrefixMapping(iPrefix)); \
} \
HRESULT  TIECATISAXContentHandler##classe::SkippedEntity( const CATUnicodeString & iName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SkippedEntity(iName)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISAXContentHandler(classe) \
 \
 \
declare_TIE_CATISAXContentHandler(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISAXContentHandler##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISAXContentHandler,"CATISAXContentHandler",CATISAXContentHandler::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISAXContentHandler(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISAXContentHandler, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISAXContentHandler##classe(classe::MetaObject(),CATISAXContentHandler::MetaObject(),(void *)CreateTIECATISAXContentHandler##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISAXContentHandler(classe) \
 \
 \
declare_TIE_CATISAXContentHandler(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISAXContentHandler##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISAXContentHandler,"CATISAXContentHandler",CATISAXContentHandler::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISAXContentHandler(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISAXContentHandler, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISAXContentHandler##classe(classe::MetaObject(),CATISAXContentHandler::MetaObject(),(void *)CreateTIECATISAXContentHandler##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISAXContentHandler(classe) TIE_CATISAXContentHandler(classe)
#else
#define BOA_CATISAXContentHandler(classe) CATImplementBOA(CATISAXContentHandler, classe)
#endif

#endif
