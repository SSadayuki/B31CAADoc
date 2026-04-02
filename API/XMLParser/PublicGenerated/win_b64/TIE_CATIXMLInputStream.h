#ifndef __TIE_CATIXMLInputStream
#define __TIE_CATIXMLInputStream

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIXMLInputStream.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIXMLInputStream */
#define declare_TIE_CATIXMLInputStream(classe) \
 \
 \
class TIECATIXMLInputStream##classe : public CATIXMLInputStream \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIXMLInputStream, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Read( unsigned char* ioByteArray, unsigned int iByteArrayCapacity, unsigned int& oSizeRead) ; \
};



#define ENVTIEdeclare_CATIXMLInputStream(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Read( unsigned char* ioByteArray, unsigned int iByteArrayCapacity, unsigned int& oSizeRead) ; \


#define ENVTIEdefine_CATIXMLInputStream(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Read( unsigned char* ioByteArray, unsigned int iByteArrayCapacity, unsigned int& oSizeRead)  \
{ \
return (ENVTIECALL(CATIXMLInputStream,ENVTIETypeLetter,ENVTIELetter)Read(ioByteArray,iByteArrayCapacity,oSizeRead)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIXMLInputStream(classe)    TIECATIXMLInputStream##classe


/* Common methods inside a TIE */
#define common_TIE_CATIXMLInputStream(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIXMLInputStream, classe) \
 \
 \
CATImplementTIEMethods(CATIXMLInputStream, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIXMLInputStream, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIXMLInputStream, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIXMLInputStream, classe) \
 \
HRESULT  TIECATIXMLInputStream##classe::Read( unsigned char* ioByteArray, unsigned int iByteArrayCapacity, unsigned int& oSizeRead)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Read(ioByteArray,iByteArrayCapacity,oSizeRead)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIXMLInputStream(classe) \
 \
 \
declare_TIE_CATIXMLInputStream(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIXMLInputStream##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIXMLInputStream,"CATIXMLInputStream",CATIXMLInputStream::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIXMLInputStream(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIXMLInputStream, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIXMLInputStream##classe(classe::MetaObject(),CATIXMLInputStream::MetaObject(),(void *)CreateTIECATIXMLInputStream##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIXMLInputStream(classe) \
 \
 \
declare_TIE_CATIXMLInputStream(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIXMLInputStream##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIXMLInputStream,"CATIXMLInputStream",CATIXMLInputStream::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIXMLInputStream(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIXMLInputStream, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIXMLInputStream##classe(classe::MetaObject(),CATIXMLInputStream::MetaObject(),(void *)CreateTIECATIXMLInputStream##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIXMLInputStream(classe) TIE_CATIXMLInputStream(classe)
#else
#define BOA_CATIXMLInputStream(classe) CATImplementBOA(CATIXMLInputStream, classe)
#endif

#endif
