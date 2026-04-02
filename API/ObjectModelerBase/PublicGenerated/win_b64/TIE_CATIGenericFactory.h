#ifndef __TIE_CATIGenericFactory
#define __TIE_CATIGenericFactory

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIGenericFactory.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIGenericFactory */
#define declare_TIE_CATIGenericFactory(classe) \
 \
 \
class TIECATIGenericFactory##classe : public CATIGenericFactory \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIGenericFactory, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual unsigned char       Support( const CATUnicodeString& iEditName ) const ; \
      virtual CATBaseUnknown*     Create ( const CATUnicodeString& iIntfName ) const ; \
};



#define ENVTIEdeclare_CATIGenericFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual unsigned char       Support( const CATUnicodeString& iEditName ) const ; \
virtual CATBaseUnknown*     Create ( const CATUnicodeString& iIntfName ) const ; \


#define ENVTIEdefine_CATIGenericFactory(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
unsigned char        ENVTIEName::Support( const CATUnicodeString& iEditName ) const  \
{ \
return (ENVTIECALL(CATIGenericFactory,ENVTIETypeLetter,ENVTIELetter)Support(iEditName )); \
} \
CATBaseUnknown*      ENVTIEName::Create ( const CATUnicodeString& iIntfName ) const  \
{ \
return (ENVTIECALL(CATIGenericFactory,ENVTIETypeLetter,ENVTIELetter)Create (iIntfName )); \
} \


/* Name of the TIE class */
#define class_TIE_CATIGenericFactory(classe)    TIECATIGenericFactory##classe


/* Common methods inside a TIE */
#define common_TIE_CATIGenericFactory(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIGenericFactory, classe) \
 \
 \
CATImplementTIEMethods(CATIGenericFactory, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIGenericFactory, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIGenericFactory, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIGenericFactory, classe) \
 \
unsigned char        TIECATIGenericFactory##classe::Support( const CATUnicodeString& iEditName ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Support(iEditName )); \
} \
CATBaseUnknown*      TIECATIGenericFactory##classe::Create ( const CATUnicodeString& iIntfName ) const  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Create (iIntfName )); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIGenericFactory(classe) \
 \
 \
declare_TIE_CATIGenericFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIGenericFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIGenericFactory,"CATIGenericFactory",CATIGenericFactory::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIGenericFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIGenericFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIGenericFactory##classe(classe::MetaObject(),CATIGenericFactory::MetaObject(),(void *)CreateTIECATIGenericFactory##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIGenericFactory(classe) \
 \
 \
declare_TIE_CATIGenericFactory(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIGenericFactory##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIGenericFactory,"CATIGenericFactory",CATIGenericFactory::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIGenericFactory(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIGenericFactory, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIGenericFactory##classe(classe::MetaObject(),CATIGenericFactory::MetaObject(),(void *)CreateTIECATIGenericFactory##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIGenericFactory(classe) TIE_CATIGenericFactory(classe)
#else
#define BOA_CATIGenericFactory(classe) CATImplementBOA(CATIGenericFactory, classe)
#endif

#endif
