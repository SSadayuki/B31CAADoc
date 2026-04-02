#ifndef __TIE_CATISAXDeclHandler
#define __TIE_CATISAXDeclHandler

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISAXDeclHandler.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISAXDeclHandler */
#define declare_TIE_CATISAXDeclHandler(classe) \
 \
 \
class TIECATISAXDeclHandler##classe : public CATISAXDeclHandler \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISAXDeclHandler, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ElementDecl( const CATUnicodeString & iName, const CATUnicodeString & iModel) ; \
      virtual HRESULT AttributeDecl( const CATUnicodeString & iElementName, const CATUnicodeString & iAttributeName, const CATUnicodeString & iType, const CATUnicodeString & iValueDefault, const CATUnicodeString & iValue) ; \
      virtual HRESULT InternalEntityDecl( const CATUnicodeString & iName, const CATUnicodeString & iValue) ; \
      virtual HRESULT ExternalEntityDecl( const CATUnicodeString & iName, const CATUnicodeString & iPublicId, const CATUnicodeString & iSystemId) ; \
};



#define ENVTIEdeclare_CATISAXDeclHandler(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ElementDecl( const CATUnicodeString & iName, const CATUnicodeString & iModel) ; \
virtual HRESULT AttributeDecl( const CATUnicodeString & iElementName, const CATUnicodeString & iAttributeName, const CATUnicodeString & iType, const CATUnicodeString & iValueDefault, const CATUnicodeString & iValue) ; \
virtual HRESULT InternalEntityDecl( const CATUnicodeString & iName, const CATUnicodeString & iValue) ; \
virtual HRESULT ExternalEntityDecl( const CATUnicodeString & iName, const CATUnicodeString & iPublicId, const CATUnicodeString & iSystemId) ; \


#define ENVTIEdefine_CATISAXDeclHandler(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ElementDecl( const CATUnicodeString & iName, const CATUnicodeString & iModel)  \
{ \
return (ENVTIECALL(CATISAXDeclHandler,ENVTIETypeLetter,ENVTIELetter)ElementDecl(iName,iModel)); \
} \
HRESULT  ENVTIEName::AttributeDecl( const CATUnicodeString & iElementName, const CATUnicodeString & iAttributeName, const CATUnicodeString & iType, const CATUnicodeString & iValueDefault, const CATUnicodeString & iValue)  \
{ \
return (ENVTIECALL(CATISAXDeclHandler,ENVTIETypeLetter,ENVTIELetter)AttributeDecl(iElementName,iAttributeName,iType,iValueDefault,iValue)); \
} \
HRESULT  ENVTIEName::InternalEntityDecl( const CATUnicodeString & iName, const CATUnicodeString & iValue)  \
{ \
return (ENVTIECALL(CATISAXDeclHandler,ENVTIETypeLetter,ENVTIELetter)InternalEntityDecl(iName,iValue)); \
} \
HRESULT  ENVTIEName::ExternalEntityDecl( const CATUnicodeString & iName, const CATUnicodeString & iPublicId, const CATUnicodeString & iSystemId)  \
{ \
return (ENVTIECALL(CATISAXDeclHandler,ENVTIETypeLetter,ENVTIELetter)ExternalEntityDecl(iName,iPublicId,iSystemId)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISAXDeclHandler(classe)    TIECATISAXDeclHandler##classe


/* Common methods inside a TIE */
#define common_TIE_CATISAXDeclHandler(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISAXDeclHandler, classe) \
 \
 \
CATImplementTIEMethods(CATISAXDeclHandler, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISAXDeclHandler, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISAXDeclHandler, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISAXDeclHandler, classe) \
 \
HRESULT  TIECATISAXDeclHandler##classe::ElementDecl( const CATUnicodeString & iName, const CATUnicodeString & iModel)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ElementDecl(iName,iModel)); \
} \
HRESULT  TIECATISAXDeclHandler##classe::AttributeDecl( const CATUnicodeString & iElementName, const CATUnicodeString & iAttributeName, const CATUnicodeString & iType, const CATUnicodeString & iValueDefault, const CATUnicodeString & iValue)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AttributeDecl(iElementName,iAttributeName,iType,iValueDefault,iValue)); \
} \
HRESULT  TIECATISAXDeclHandler##classe::InternalEntityDecl( const CATUnicodeString & iName, const CATUnicodeString & iValue)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InternalEntityDecl(iName,iValue)); \
} \
HRESULT  TIECATISAXDeclHandler##classe::ExternalEntityDecl( const CATUnicodeString & iName, const CATUnicodeString & iPublicId, const CATUnicodeString & iSystemId)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ExternalEntityDecl(iName,iPublicId,iSystemId)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISAXDeclHandler(classe) \
 \
 \
declare_TIE_CATISAXDeclHandler(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISAXDeclHandler##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISAXDeclHandler,"CATISAXDeclHandler",CATISAXDeclHandler::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISAXDeclHandler(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISAXDeclHandler, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISAXDeclHandler##classe(classe::MetaObject(),CATISAXDeclHandler::MetaObject(),(void *)CreateTIECATISAXDeclHandler##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISAXDeclHandler(classe) \
 \
 \
declare_TIE_CATISAXDeclHandler(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISAXDeclHandler##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISAXDeclHandler,"CATISAXDeclHandler",CATISAXDeclHandler::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISAXDeclHandler(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISAXDeclHandler, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISAXDeclHandler##classe(classe::MetaObject(),CATISAXDeclHandler::MetaObject(),(void *)CreateTIECATISAXDeclHandler##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISAXDeclHandler(classe) TIE_CATISAXDeclHandler(classe)
#else
#define BOA_CATISAXDeclHandler(classe) CATImplementBOA(CATISAXDeclHandler, classe)
#endif

#endif
