#ifndef __TIE_CATISAXLexicalHandler
#define __TIE_CATISAXLexicalHandler

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISAXLexicalHandler.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISAXLexicalHandler */
#define declare_TIE_CATISAXLexicalHandler(classe) \
 \
 \
class TIECATISAXLexicalHandler##classe : public CATISAXLexicalHandler \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISAXLexicalHandler, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Comment( const CATUnicodeString & iComment) ; \
      virtual HRESULT EndCDATA() ; \
      virtual HRESULT EndDTD() ; \
      virtual HRESULT EndEntity( const CATUnicodeString & iName) ; \
      virtual HRESULT StartCDATA() ; \
      virtual HRESULT StartDTD( const CATUnicodeString & iName, const CATUnicodeString & iPublicId, const CATUnicodeString & iSystemId) ; \
      virtual HRESULT StartEntity( const CATUnicodeString & iName) ; \
};



#define ENVTIEdeclare_CATISAXLexicalHandler(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Comment( const CATUnicodeString & iComment) ; \
virtual HRESULT EndCDATA() ; \
virtual HRESULT EndDTD() ; \
virtual HRESULT EndEntity( const CATUnicodeString & iName) ; \
virtual HRESULT StartCDATA() ; \
virtual HRESULT StartDTD( const CATUnicodeString & iName, const CATUnicodeString & iPublicId, const CATUnicodeString & iSystemId) ; \
virtual HRESULT StartEntity( const CATUnicodeString & iName) ; \


#define ENVTIEdefine_CATISAXLexicalHandler(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Comment( const CATUnicodeString & iComment)  \
{ \
return (ENVTIECALL(CATISAXLexicalHandler,ENVTIETypeLetter,ENVTIELetter)Comment(iComment)); \
} \
HRESULT  ENVTIEName::EndCDATA()  \
{ \
return (ENVTIECALL(CATISAXLexicalHandler,ENVTIETypeLetter,ENVTIELetter)EndCDATA()); \
} \
HRESULT  ENVTIEName::EndDTD()  \
{ \
return (ENVTIECALL(CATISAXLexicalHandler,ENVTIETypeLetter,ENVTIELetter)EndDTD()); \
} \
HRESULT  ENVTIEName::EndEntity( const CATUnicodeString & iName)  \
{ \
return (ENVTIECALL(CATISAXLexicalHandler,ENVTIETypeLetter,ENVTIELetter)EndEntity(iName)); \
} \
HRESULT  ENVTIEName::StartCDATA()  \
{ \
return (ENVTIECALL(CATISAXLexicalHandler,ENVTIETypeLetter,ENVTIELetter)StartCDATA()); \
} \
HRESULT  ENVTIEName::StartDTD( const CATUnicodeString & iName, const CATUnicodeString & iPublicId, const CATUnicodeString & iSystemId)  \
{ \
return (ENVTIECALL(CATISAXLexicalHandler,ENVTIETypeLetter,ENVTIELetter)StartDTD(iName,iPublicId,iSystemId)); \
} \
HRESULT  ENVTIEName::StartEntity( const CATUnicodeString & iName)  \
{ \
return (ENVTIECALL(CATISAXLexicalHandler,ENVTIETypeLetter,ENVTIELetter)StartEntity(iName)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISAXLexicalHandler(classe)    TIECATISAXLexicalHandler##classe


/* Common methods inside a TIE */
#define common_TIE_CATISAXLexicalHandler(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISAXLexicalHandler, classe) \
 \
 \
CATImplementTIEMethods(CATISAXLexicalHandler, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISAXLexicalHandler, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISAXLexicalHandler, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISAXLexicalHandler, classe) \
 \
HRESULT  TIECATISAXLexicalHandler##classe::Comment( const CATUnicodeString & iComment)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Comment(iComment)); \
} \
HRESULT  TIECATISAXLexicalHandler##classe::EndCDATA()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EndCDATA()); \
} \
HRESULT  TIECATISAXLexicalHandler##classe::EndDTD()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EndDTD()); \
} \
HRESULT  TIECATISAXLexicalHandler##classe::EndEntity( const CATUnicodeString & iName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->EndEntity(iName)); \
} \
HRESULT  TIECATISAXLexicalHandler##classe::StartCDATA()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->StartCDATA()); \
} \
HRESULT  TIECATISAXLexicalHandler##classe::StartDTD( const CATUnicodeString & iName, const CATUnicodeString & iPublicId, const CATUnicodeString & iSystemId)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->StartDTD(iName,iPublicId,iSystemId)); \
} \
HRESULT  TIECATISAXLexicalHandler##classe::StartEntity( const CATUnicodeString & iName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->StartEntity(iName)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISAXLexicalHandler(classe) \
 \
 \
declare_TIE_CATISAXLexicalHandler(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISAXLexicalHandler##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISAXLexicalHandler,"CATISAXLexicalHandler",CATISAXLexicalHandler::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISAXLexicalHandler(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISAXLexicalHandler, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISAXLexicalHandler##classe(classe::MetaObject(),CATISAXLexicalHandler::MetaObject(),(void *)CreateTIECATISAXLexicalHandler##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISAXLexicalHandler(classe) \
 \
 \
declare_TIE_CATISAXLexicalHandler(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISAXLexicalHandler##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISAXLexicalHandler,"CATISAXLexicalHandler",CATISAXLexicalHandler::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISAXLexicalHandler(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISAXLexicalHandler, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISAXLexicalHandler##classe(classe::MetaObject(),CATISAXLexicalHandler::MetaObject(),(void *)CreateTIECATISAXLexicalHandler##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISAXLexicalHandler(classe) TIE_CATISAXLexicalHandler(classe)
#else
#define BOA_CATISAXLexicalHandler(classe) CATImplementBOA(CATISAXLexicalHandler, classe)
#endif

#endif
