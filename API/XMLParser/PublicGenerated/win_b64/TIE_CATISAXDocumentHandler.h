#ifndef __TIE_CATISAXDocumentHandler
#define __TIE_CATISAXDocumentHandler

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISAXDocumentHandler.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISAXDocumentHandler */
#define declare_TIE_CATISAXDocumentHandler(classe) \
 \
 \
class TIECATISAXDocumentHandler##classe : public CATISAXDocumentHandler \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISAXDocumentHandler, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT StartDocument() ; \
      virtual HRESULT EndDocument() ; \
      virtual HRESULT StartElement( const CATUnicodeString & iName, const CATISAXAttributeList_var & iAttributes) ; \
      virtual HRESULT EndElement( const CATUnicodeString & iName) ; \
      virtual HRESULT Characters( const CATUnicodeString & iCharacters) ; \
      virtual HRESULT IgnorableWhiteSpace( const CATUnicodeString & iCharacters) ; \
      virtual HRESULT ProcessingInstruction( const CATUnicodeString & iTarget, const CATUnicodeString & iData) ; \
      virtual HRESULT SetDocumentLocator( const CATISAXLocator_var& iLocator) ; \
};



#define ENVTIEdeclare_CATISAXDocumentHandler(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT StartDocument() ; \
virtual HRESULT EndDocument() ; \
virtual HRESULT StartElement( const CATUnicodeString & iName, const CATISAXAttributeList_var & iAttributes) ; \
virtual HRESULT EndElement( const CATUnicodeString & iName) ; \
virtual HRESULT Characters( const CATUnicodeString & iCharacters) ; \
virtual HRESULT IgnorableWhiteSpace( const CATUnicodeString & iCharacters) ; \
virtual HRESULT ProcessingInstruction( const CATUnicodeString & iTarget, const CATUnicodeString & iData) ; \
virtual HRESULT SetDocumentLocator( const CATISAXLocator_var& iLocator) ; \


#define ENVTIEdefine_CATISAXDocumentHandler(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::StartDocument()  \
{ \
return (ENVTIECALL(CATISAXDocumentHandler,ENVTIETypeLetter,ENVTIELetter)StartDocument()); \
} \
HRESULT  ENVTIEName::EndDocument()  \
{ \
return (ENVTIECALL(CATISAXDocumentHandler,ENVTIETypeLetter,ENVTIELetter)EndDocument()); \
} \
HRESULT  ENVTIEName::StartElement( const CATUnicodeString & iName, const CATISAXAttributeList_var & iAttributes)  \
{ \
return (ENVTIECALL(CATISAXDocumentHandler,ENVTIETypeLetter,ENVTIELetter)StartElement(iName,iAttributes)); \
} \
HRESULT  ENVTIEName::EndElement( const CATUnicodeString & iName)  \
{ \
return (ENVTIECALL(CATISAXDocumentHandler,ENVTIETypeLetter,ENVTIELetter)EndElement(iName)); \
} \
HRESULT  ENVTIEName::Characters( const CATUnicodeString & iCharacters)  \
{ \
return (ENVTIECALL(CATISAXDocumentHandler,ENVTIETypeLetter,ENVTIELetter)Characters(iCharacters)); \
} \
HRESULT  ENVTIEName::IgnorableWhiteSpace( const CATUnicodeString & iCharacters)  \
{ \
return (ENVTIECALL(CATISAXDocumentHandler,ENVTIETypeLetter,ENVTIELetter)IgnorableWhiteSpace(iCharacters)); \
} \
HRESULT  ENVTIEName::ProcessingInstruction( const CATUnicodeString & iTarget, const CATUnicodeString & iData)  \
{ \
return (ENVTIECALL(CATISAXDocumentHandler,ENVTIETypeLetter,ENVTIELetter)ProcessingInstruction(iTarget,iData)); \
} \
HRESULT  ENVTIEName::SetDocumentLocator( const CATISAXLocator_var& iLocator)  \
{ \
return (ENVTIECALL(CATISAXDocumentHandler,ENVTIETypeLetter,ENVTIELetter)SetDocumentLocator(iLocator)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISAXDocumentHandler(classe)    TIECATISAXDocumentHandler##classe


/* Common methods inside a TIE */
#define common_TIE_CATISAXDocumentHandler(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISAXDocumentHandler, classe) \
 \
 \
CATImplementTIEMethods(CATISAXDocumentHandler, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISAXDocumentHandler, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISAXDocumentHandler, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISAXDocumentHandler, classe) \
 \
HRESULT  TIECATISAXDocumentHandler##classe::StartDocument()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->StartDocument()); \
} \
HRESULT  TIECATISAXDocumentHandler##classe::EndDocument()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EndDocument()); \
} \
HRESULT  TIECATISAXDocumentHandler##classe::StartElement( const CATUnicodeString & iName, const CATISAXAttributeList_var & iAttributes)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->StartElement(iName,iAttributes)); \
} \
HRESULT  TIECATISAXDocumentHandler##classe::EndElement( const CATUnicodeString & iName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EndElement(iName)); \
} \
HRESULT  TIECATISAXDocumentHandler##classe::Characters( const CATUnicodeString & iCharacters)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Characters(iCharacters)); \
} \
HRESULT  TIECATISAXDocumentHandler##classe::IgnorableWhiteSpace( const CATUnicodeString & iCharacters)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IgnorableWhiteSpace(iCharacters)); \
} \
HRESULT  TIECATISAXDocumentHandler##classe::ProcessingInstruction( const CATUnicodeString & iTarget, const CATUnicodeString & iData)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ProcessingInstruction(iTarget,iData)); \
} \
HRESULT  TIECATISAXDocumentHandler##classe::SetDocumentLocator( const CATISAXLocator_var& iLocator)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDocumentLocator(iLocator)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISAXDocumentHandler(classe) \
 \
 \
declare_TIE_CATISAXDocumentHandler(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISAXDocumentHandler##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISAXDocumentHandler,"CATISAXDocumentHandler",CATISAXDocumentHandler::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISAXDocumentHandler(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISAXDocumentHandler, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISAXDocumentHandler##classe(classe::MetaObject(),CATISAXDocumentHandler::MetaObject(),(void *)CreateTIECATISAXDocumentHandler##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISAXDocumentHandler(classe) \
 \
 \
declare_TIE_CATISAXDocumentHandler(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISAXDocumentHandler##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISAXDocumentHandler,"CATISAXDocumentHandler",CATISAXDocumentHandler::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISAXDocumentHandler(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISAXDocumentHandler, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISAXDocumentHandler##classe(classe::MetaObject(),CATISAXDocumentHandler::MetaObject(),(void *)CreateTIECATISAXDocumentHandler##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISAXDocumentHandler(classe) TIE_CATISAXDocumentHandler(classe)
#else
#define BOA_CATISAXDocumentHandler(classe) CATImplementBOA(CATISAXDocumentHandler, classe)
#endif

#endif
