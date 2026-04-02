#ifndef __TIE_CATISAXEntityResolver
#define __TIE_CATISAXEntityResolver

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISAXEntityResolver.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISAXEntityResolver */
#define declare_TIE_CATISAXEntityResolver(classe) \
 \
 \
class TIECATISAXEntityResolver##classe : public CATISAXEntityResolver \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISAXEntityResolver, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT ResolveEntity( const CATUnicodeString & iPublicId, const CATUnicodeString & iSystemId, CATISAXInputSource_var& oInputSource) ; \
};



#define ENVTIEdeclare_CATISAXEntityResolver(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT ResolveEntity( const CATUnicodeString & iPublicId, const CATUnicodeString & iSystemId, CATISAXInputSource_var& oInputSource) ; \


#define ENVTIEdefine_CATISAXEntityResolver(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::ResolveEntity( const CATUnicodeString & iPublicId, const CATUnicodeString & iSystemId, CATISAXInputSource_var& oInputSource)  \
{ \
return (ENVTIECALL(CATISAXEntityResolver,ENVTIETypeLetter,ENVTIELetter)ResolveEntity(iPublicId,iSystemId,oInputSource)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISAXEntityResolver(classe)    TIECATISAXEntityResolver##classe


/* Common methods inside a TIE */
#define common_TIE_CATISAXEntityResolver(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISAXEntityResolver, classe) \
 \
 \
CATImplementTIEMethods(CATISAXEntityResolver, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISAXEntityResolver, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISAXEntityResolver, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISAXEntityResolver, classe) \
 \
HRESULT  TIECATISAXEntityResolver##classe::ResolveEntity( const CATUnicodeString & iPublicId, const CATUnicodeString & iSystemId, CATISAXInputSource_var& oInputSource)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResolveEntity(iPublicId,iSystemId,oInputSource)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISAXEntityResolver(classe) \
 \
 \
declare_TIE_CATISAXEntityResolver(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISAXEntityResolver##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISAXEntityResolver,"CATISAXEntityResolver",CATISAXEntityResolver::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISAXEntityResolver(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISAXEntityResolver, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISAXEntityResolver##classe(classe::MetaObject(),CATISAXEntityResolver::MetaObject(),(void *)CreateTIECATISAXEntityResolver##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISAXEntityResolver(classe) \
 \
 \
declare_TIE_CATISAXEntityResolver(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISAXEntityResolver##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISAXEntityResolver,"CATISAXEntityResolver",CATISAXEntityResolver::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISAXEntityResolver(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISAXEntityResolver, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISAXEntityResolver##classe(classe::MetaObject(),CATISAXEntityResolver::MetaObject(),(void *)CreateTIECATISAXEntityResolver##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISAXEntityResolver(classe) TIE_CATISAXEntityResolver(classe)
#else
#define BOA_CATISAXEntityResolver(classe) CATImplementBOA(CATISAXEntityResolver, classe)
#endif

#endif
