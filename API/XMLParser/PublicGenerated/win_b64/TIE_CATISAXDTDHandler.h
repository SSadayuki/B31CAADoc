#ifndef __TIE_CATISAXDTDHandler
#define __TIE_CATISAXDTDHandler

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISAXDTDHandler.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISAXDTDHandler */
#define declare_TIE_CATISAXDTDHandler(classe) \
 \
 \
class TIECATISAXDTDHandler##classe : public CATISAXDTDHandler \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISAXDTDHandler, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT NotationDecl( const CATUnicodeString & iName, const CATUnicodeString & iPublicId, const CATUnicodeString & iSystemId) ; \
      virtual HRESULT UnparsedEntityDecl( const CATUnicodeString & iName, const CATUnicodeString & iPublicId, const CATUnicodeString & iSystemId, const CATUnicodeString & iNotationName) ; \
};



#define ENVTIEdeclare_CATISAXDTDHandler(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT NotationDecl( const CATUnicodeString & iName, const CATUnicodeString & iPublicId, const CATUnicodeString & iSystemId) ; \
virtual HRESULT UnparsedEntityDecl( const CATUnicodeString & iName, const CATUnicodeString & iPublicId, const CATUnicodeString & iSystemId, const CATUnicodeString & iNotationName) ; \


#define ENVTIEdefine_CATISAXDTDHandler(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::NotationDecl( const CATUnicodeString & iName, const CATUnicodeString & iPublicId, const CATUnicodeString & iSystemId)  \
{ \
return (ENVTIECALL(CATISAXDTDHandler,ENVTIETypeLetter,ENVTIELetter)NotationDecl(iName,iPublicId,iSystemId)); \
} \
HRESULT  ENVTIEName::UnparsedEntityDecl( const CATUnicodeString & iName, const CATUnicodeString & iPublicId, const CATUnicodeString & iSystemId, const CATUnicodeString & iNotationName)  \
{ \
return (ENVTIECALL(CATISAXDTDHandler,ENVTIETypeLetter,ENVTIELetter)UnparsedEntityDecl(iName,iPublicId,iSystemId,iNotationName)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISAXDTDHandler(classe)    TIECATISAXDTDHandler##classe


/* Common methods inside a TIE */
#define common_TIE_CATISAXDTDHandler(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISAXDTDHandler, classe) \
 \
 \
CATImplementTIEMethods(CATISAXDTDHandler, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISAXDTDHandler, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISAXDTDHandler, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISAXDTDHandler, classe) \
 \
HRESULT  TIECATISAXDTDHandler##classe::NotationDecl( const CATUnicodeString & iName, const CATUnicodeString & iPublicId, const CATUnicodeString & iSystemId)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->NotationDecl(iName,iPublicId,iSystemId)); \
} \
HRESULT  TIECATISAXDTDHandler##classe::UnparsedEntityDecl( const CATUnicodeString & iName, const CATUnicodeString & iPublicId, const CATUnicodeString & iSystemId, const CATUnicodeString & iNotationName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnparsedEntityDecl(iName,iPublicId,iSystemId,iNotationName)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISAXDTDHandler(classe) \
 \
 \
declare_TIE_CATISAXDTDHandler(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISAXDTDHandler##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISAXDTDHandler,"CATISAXDTDHandler",CATISAXDTDHandler::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISAXDTDHandler(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISAXDTDHandler, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISAXDTDHandler##classe(classe::MetaObject(),CATISAXDTDHandler::MetaObject(),(void *)CreateTIECATISAXDTDHandler##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISAXDTDHandler(classe) \
 \
 \
declare_TIE_CATISAXDTDHandler(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISAXDTDHandler##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISAXDTDHandler,"CATISAXDTDHandler",CATISAXDTDHandler::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISAXDTDHandler(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISAXDTDHandler, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISAXDTDHandler##classe(classe::MetaObject(),CATISAXDTDHandler::MetaObject(),(void *)CreateTIECATISAXDTDHandler##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISAXDTDHandler(classe) TIE_CATISAXDTDHandler(classe)
#else
#define BOA_CATISAXDTDHandler(classe) CATImplementBOA(CATISAXDTDHandler, classe)
#endif

#endif
