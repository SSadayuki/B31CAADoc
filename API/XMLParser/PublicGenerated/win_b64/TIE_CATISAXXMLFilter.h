#ifndef __TIE_CATISAXXMLFilter
#define __TIE_CATISAXXMLFilter

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISAXXMLFilter.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISAXXMLFilter */
#define declare_TIE_CATISAXXMLFilter(classe) \
 \
 \
class TIECATISAXXMLFilter##classe : public CATISAXXMLFilter \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISAXXMLFilter, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetParent( CATISAXXMLReader_var& oParent) ; \
      virtual HRESULT SetParent( const CATISAXXMLReader_var& iParent) ; \
      virtual HRESULT Parse( const CATISAXInputSource_var& iInputSource) ; \
      virtual HRESULT Parse( const CATUnicodeString & iSystemId) ; \
      virtual HRESULT GetContentHandler( CATISAXContentHandler_var& oContentHandler) ; \
      virtual HRESULT SetContentHandler( const CATISAXContentHandler_var& iContentHandler) ; \
      virtual HRESULT GetDTDHandler( CATISAXDTDHandler_var& oDTDHandler) ; \
      virtual HRESULT SetDTDHandler( const CATISAXDTDHandler_var& iDTDHandler) ; \
      virtual HRESULT GetEntityResolver( CATISAXEntityResolver_var& oEntityResolver) ; \
      virtual HRESULT SetEntityResolver( const CATISAXEntityResolver_var& iEntityResolver) ; \
      virtual HRESULT GetErrorHandler( CATISAXErrorHandler_var& oErrorHandler) ; \
      virtual HRESULT SetErrorHandler( const CATISAXErrorHandler_var& iErrorHandler) ; \
      virtual HRESULT GetFeature( const CATUnicodeString &iName, CATBoolean& oFeature) ; \
      virtual HRESULT SetFeature( const CATUnicodeString &iName, CATBoolean iFeature) ; \
      virtual HRESULT GetProperty( const CATUnicodeString &iName, CATVariant& oProperty) ; \
      virtual HRESULT SetProperty( const CATUnicodeString &iName, const CATVariant& iProperty) ; \
};



#define ENVTIEdeclare_CATISAXXMLFilter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetParent( CATISAXXMLReader_var& oParent) ; \
virtual HRESULT SetParent( const CATISAXXMLReader_var& iParent) ; \
virtual HRESULT Parse( const CATISAXInputSource_var& iInputSource) ; \
virtual HRESULT Parse( const CATUnicodeString & iSystemId) ; \
virtual HRESULT GetContentHandler( CATISAXContentHandler_var& oContentHandler) ; \
virtual HRESULT SetContentHandler( const CATISAXContentHandler_var& iContentHandler) ; \
virtual HRESULT GetDTDHandler( CATISAXDTDHandler_var& oDTDHandler) ; \
virtual HRESULT SetDTDHandler( const CATISAXDTDHandler_var& iDTDHandler) ; \
virtual HRESULT GetEntityResolver( CATISAXEntityResolver_var& oEntityResolver) ; \
virtual HRESULT SetEntityResolver( const CATISAXEntityResolver_var& iEntityResolver) ; \
virtual HRESULT GetErrorHandler( CATISAXErrorHandler_var& oErrorHandler) ; \
virtual HRESULT SetErrorHandler( const CATISAXErrorHandler_var& iErrorHandler) ; \
virtual HRESULT GetFeature( const CATUnicodeString &iName, CATBoolean& oFeature) ; \
virtual HRESULT SetFeature( const CATUnicodeString &iName, CATBoolean iFeature) ; \
virtual HRESULT GetProperty( const CATUnicodeString &iName, CATVariant& oProperty) ; \
virtual HRESULT SetProperty( const CATUnicodeString &iName, const CATVariant& iProperty) ; \


#define ENVTIEdefine_CATISAXXMLFilter(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetParent( CATISAXXMLReader_var& oParent)  \
{ \
return (ENVTIECALL(CATISAXXMLFilter,ENVTIETypeLetter,ENVTIELetter)GetParent(oParent)); \
} \
HRESULT  ENVTIEName::SetParent( const CATISAXXMLReader_var& iParent)  \
{ \
return (ENVTIECALL(CATISAXXMLFilter,ENVTIETypeLetter,ENVTIELetter)SetParent(iParent)); \
} \
HRESULT  ENVTIEName::Parse( const CATISAXInputSource_var& iInputSource)  \
{ \
return (ENVTIECALL(CATISAXXMLFilter,ENVTIETypeLetter,ENVTIELetter)Parse(iInputSource)); \
} \
HRESULT  ENVTIEName::Parse( const CATUnicodeString & iSystemId)  \
{ \
return (ENVTIECALL(CATISAXXMLFilter,ENVTIETypeLetter,ENVTIELetter)Parse(iSystemId)); \
} \
HRESULT  ENVTIEName::GetContentHandler( CATISAXContentHandler_var& oContentHandler)  \
{ \
return (ENVTIECALL(CATISAXXMLFilter,ENVTIETypeLetter,ENVTIELetter)GetContentHandler(oContentHandler)); \
} \
HRESULT  ENVTIEName::SetContentHandler( const CATISAXContentHandler_var& iContentHandler)  \
{ \
return (ENVTIECALL(CATISAXXMLFilter,ENVTIETypeLetter,ENVTIELetter)SetContentHandler(iContentHandler)); \
} \
HRESULT  ENVTIEName::GetDTDHandler( CATISAXDTDHandler_var& oDTDHandler)  \
{ \
return (ENVTIECALL(CATISAXXMLFilter,ENVTIETypeLetter,ENVTIELetter)GetDTDHandler(oDTDHandler)); \
} \
HRESULT  ENVTIEName::SetDTDHandler( const CATISAXDTDHandler_var& iDTDHandler)  \
{ \
return (ENVTIECALL(CATISAXXMLFilter,ENVTIETypeLetter,ENVTIELetter)SetDTDHandler(iDTDHandler)); \
} \
HRESULT  ENVTIEName::GetEntityResolver( CATISAXEntityResolver_var& oEntityResolver)  \
{ \
return (ENVTIECALL(CATISAXXMLFilter,ENVTIETypeLetter,ENVTIELetter)GetEntityResolver(oEntityResolver)); \
} \
HRESULT  ENVTIEName::SetEntityResolver( const CATISAXEntityResolver_var& iEntityResolver)  \
{ \
return (ENVTIECALL(CATISAXXMLFilter,ENVTIETypeLetter,ENVTIELetter)SetEntityResolver(iEntityResolver)); \
} \
HRESULT  ENVTIEName::GetErrorHandler( CATISAXErrorHandler_var& oErrorHandler)  \
{ \
return (ENVTIECALL(CATISAXXMLFilter,ENVTIETypeLetter,ENVTIELetter)GetErrorHandler(oErrorHandler)); \
} \
HRESULT  ENVTIEName::SetErrorHandler( const CATISAXErrorHandler_var& iErrorHandler)  \
{ \
return (ENVTIECALL(CATISAXXMLFilter,ENVTIETypeLetter,ENVTIELetter)SetErrorHandler(iErrorHandler)); \
} \
HRESULT  ENVTIEName::GetFeature( const CATUnicodeString &iName, CATBoolean& oFeature)  \
{ \
return (ENVTIECALL(CATISAXXMLFilter,ENVTIETypeLetter,ENVTIELetter)GetFeature(iName,oFeature)); \
} \
HRESULT  ENVTIEName::SetFeature( const CATUnicodeString &iName, CATBoolean iFeature)  \
{ \
return (ENVTIECALL(CATISAXXMLFilter,ENVTIETypeLetter,ENVTIELetter)SetFeature(iName,iFeature)); \
} \
HRESULT  ENVTIEName::GetProperty( const CATUnicodeString &iName, CATVariant& oProperty)  \
{ \
return (ENVTIECALL(CATISAXXMLFilter,ENVTIETypeLetter,ENVTIELetter)GetProperty(iName,oProperty)); \
} \
HRESULT  ENVTIEName::SetProperty( const CATUnicodeString &iName, const CATVariant& iProperty)  \
{ \
return (ENVTIECALL(CATISAXXMLFilter,ENVTIETypeLetter,ENVTIELetter)SetProperty(iName,iProperty)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISAXXMLFilter(classe)    TIECATISAXXMLFilter##classe


/* Common methods inside a TIE */
#define common_TIE_CATISAXXMLFilter(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISAXXMLFilter, classe) \
 \
 \
CATImplementTIEMethods(CATISAXXMLFilter, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISAXXMLFilter, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISAXXMLFilter, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISAXXMLFilter, classe) \
 \
HRESULT  TIECATISAXXMLFilter##classe::GetParent( CATISAXXMLReader_var& oParent)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetParent(oParent)); \
} \
HRESULT  TIECATISAXXMLFilter##classe::SetParent( const CATISAXXMLReader_var& iParent)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetParent(iParent)); \
} \
HRESULT  TIECATISAXXMLFilter##classe::Parse( const CATISAXInputSource_var& iInputSource)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Parse(iInputSource)); \
} \
HRESULT  TIECATISAXXMLFilter##classe::Parse( const CATUnicodeString & iSystemId)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Parse(iSystemId)); \
} \
HRESULT  TIECATISAXXMLFilter##classe::GetContentHandler( CATISAXContentHandler_var& oContentHandler)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetContentHandler(oContentHandler)); \
} \
HRESULT  TIECATISAXXMLFilter##classe::SetContentHandler( const CATISAXContentHandler_var& iContentHandler)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetContentHandler(iContentHandler)); \
} \
HRESULT  TIECATISAXXMLFilter##classe::GetDTDHandler( CATISAXDTDHandler_var& oDTDHandler)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDTDHandler(oDTDHandler)); \
} \
HRESULT  TIECATISAXXMLFilter##classe::SetDTDHandler( const CATISAXDTDHandler_var& iDTDHandler)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDTDHandler(iDTDHandler)); \
} \
HRESULT  TIECATISAXXMLFilter##classe::GetEntityResolver( CATISAXEntityResolver_var& oEntityResolver)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetEntityResolver(oEntityResolver)); \
} \
HRESULT  TIECATISAXXMLFilter##classe::SetEntityResolver( const CATISAXEntityResolver_var& iEntityResolver)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetEntityResolver(iEntityResolver)); \
} \
HRESULT  TIECATISAXXMLFilter##classe::GetErrorHandler( CATISAXErrorHandler_var& oErrorHandler)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetErrorHandler(oErrorHandler)); \
} \
HRESULT  TIECATISAXXMLFilter##classe::SetErrorHandler( const CATISAXErrorHandler_var& iErrorHandler)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetErrorHandler(iErrorHandler)); \
} \
HRESULT  TIECATISAXXMLFilter##classe::GetFeature( const CATUnicodeString &iName, CATBoolean& oFeature)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFeature(iName,oFeature)); \
} \
HRESULT  TIECATISAXXMLFilter##classe::SetFeature( const CATUnicodeString &iName, CATBoolean iFeature)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFeature(iName,iFeature)); \
} \
HRESULT  TIECATISAXXMLFilter##classe::GetProperty( const CATUnicodeString &iName, CATVariant& oProperty)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetProperty(iName,oProperty)); \
} \
HRESULT  TIECATISAXXMLFilter##classe::SetProperty( const CATUnicodeString &iName, const CATVariant& iProperty)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetProperty(iName,iProperty)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISAXXMLFilter(classe) \
 \
 \
declare_TIE_CATISAXXMLFilter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISAXXMLFilter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISAXXMLFilter,"CATISAXXMLFilter",CATISAXXMLFilter::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISAXXMLFilter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISAXXMLFilter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISAXXMLFilter##classe(classe::MetaObject(),CATISAXXMLFilter::MetaObject(),(void *)CreateTIECATISAXXMLFilter##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISAXXMLFilter(classe) \
 \
 \
declare_TIE_CATISAXXMLFilter(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISAXXMLFilter##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISAXXMLFilter,"CATISAXXMLFilter",CATISAXXMLFilter::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISAXXMLFilter(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISAXXMLFilter, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISAXXMLFilter##classe(classe::MetaObject(),CATISAXXMLFilter::MetaObject(),(void *)CreateTIECATISAXXMLFilter##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISAXXMLFilter(classe) TIE_CATISAXXMLFilter(classe)
#else
#define BOA_CATISAXXMLFilter(classe) CATImplementBOA(CATISAXXMLFilter, classe)
#endif

#endif
