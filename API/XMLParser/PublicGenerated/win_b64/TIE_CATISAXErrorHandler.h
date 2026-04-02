#ifndef __TIE_CATISAXErrorHandler
#define __TIE_CATISAXErrorHandler

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISAXErrorHandler.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISAXErrorHandler */
#define declare_TIE_CATISAXErrorHandler(classe) \
 \
 \
class TIECATISAXErrorHandler##classe : public CATISAXErrorHandler \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISAXErrorHandler, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Error( CATSAXParseException* iException) ; \
      virtual HRESULT FatalError( CATSAXParseException* iException) ; \
      virtual HRESULT Warning( CATSAXParseException* iException) ; \
};



#define ENVTIEdeclare_CATISAXErrorHandler(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Error( CATSAXParseException* iException) ; \
virtual HRESULT FatalError( CATSAXParseException* iException) ; \
virtual HRESULT Warning( CATSAXParseException* iException) ; \


#define ENVTIEdefine_CATISAXErrorHandler(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Error( CATSAXParseException* iException)  \
{ \
return (ENVTIECALL(CATISAXErrorHandler,ENVTIETypeLetter,ENVTIELetter)Error(iException)); \
} \
HRESULT  ENVTIEName::FatalError( CATSAXParseException* iException)  \
{ \
return (ENVTIECALL(CATISAXErrorHandler,ENVTIETypeLetter,ENVTIELetter)FatalError(iException)); \
} \
HRESULT  ENVTIEName::Warning( CATSAXParseException* iException)  \
{ \
return (ENVTIECALL(CATISAXErrorHandler,ENVTIETypeLetter,ENVTIELetter)Warning(iException)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISAXErrorHandler(classe)    TIECATISAXErrorHandler##classe


/* Common methods inside a TIE */
#define common_TIE_CATISAXErrorHandler(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISAXErrorHandler, classe) \
 \
 \
CATImplementTIEMethods(CATISAXErrorHandler, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISAXErrorHandler, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISAXErrorHandler, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISAXErrorHandler, classe) \
 \
HRESULT  TIECATISAXErrorHandler##classe::Error( CATSAXParseException* iException)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Error(iException)); \
} \
HRESULT  TIECATISAXErrorHandler##classe::FatalError( CATSAXParseException* iException)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->FatalError(iException)); \
} \
HRESULT  TIECATISAXErrorHandler##classe::Warning( CATSAXParseException* iException)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Warning(iException)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISAXErrorHandler(classe) \
 \
 \
declare_TIE_CATISAXErrorHandler(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISAXErrorHandler##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISAXErrorHandler,"CATISAXErrorHandler",CATISAXErrorHandler::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISAXErrorHandler(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISAXErrorHandler, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISAXErrorHandler##classe(classe::MetaObject(),CATISAXErrorHandler::MetaObject(),(void *)CreateTIECATISAXErrorHandler##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISAXErrorHandler(classe) \
 \
 \
declare_TIE_CATISAXErrorHandler(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISAXErrorHandler##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISAXErrorHandler,"CATISAXErrorHandler",CATISAXErrorHandler::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISAXErrorHandler(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISAXErrorHandler, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISAXErrorHandler##classe(classe::MetaObject(),CATISAXErrorHandler::MetaObject(),(void *)CreateTIECATISAXErrorHandler##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISAXErrorHandler(classe) TIE_CATISAXErrorHandler(classe)
#else
#define BOA_CATISAXErrorHandler(classe) CATImplementBOA(CATISAXErrorHandler, classe)
#endif

#endif
