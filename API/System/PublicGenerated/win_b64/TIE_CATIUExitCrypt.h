#ifndef __TIE_CATIUExitCrypt
#define __TIE_CATIUExitCrypt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIUExitCrypt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIUExitCrypt */
#define declare_TIE_CATIUExitCrypt(classe) \
 \
 \
class TIECATIUExitCrypt##classe : public CATIUExitCrypt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIUExitCrypt, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Code ( const void *iBuffer, size_t iLen, void **CodedBuffer, size_t *oCodedLen); \
      virtual HRESULT Decode (const void *iCodedBuffer, size_t iCodedLen, void **DecodedBuffer, size_t *oDecodedLen); \
};



#define ENVTIEdeclare_CATIUExitCrypt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Code ( const void *iBuffer, size_t iLen, void **CodedBuffer, size_t *oCodedLen); \
virtual HRESULT Decode (const void *iCodedBuffer, size_t iCodedLen, void **DecodedBuffer, size_t *oDecodedLen); \


#define ENVTIEdefine_CATIUExitCrypt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Code ( const void *iBuffer, size_t iLen, void **CodedBuffer, size_t *oCodedLen) \
{ \
return (ENVTIECALL(CATIUExitCrypt,ENVTIETypeLetter,ENVTIELetter)Code (iBuffer,iLen,CodedBuffer,oCodedLen)); \
} \
HRESULT  ENVTIEName::Decode (const void *iCodedBuffer, size_t iCodedLen, void **DecodedBuffer, size_t *oDecodedLen) \
{ \
return (ENVTIECALL(CATIUExitCrypt,ENVTIETypeLetter,ENVTIELetter)Decode (iCodedBuffer,iCodedLen,DecodedBuffer,oDecodedLen)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIUExitCrypt(classe)    TIECATIUExitCrypt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIUExitCrypt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIUExitCrypt, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATIUExitCrypt, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATIUExitCrypt, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATIUExitCrypt, classe) \
 \
HRESULT  TIECATIUExitCrypt##classe::Code ( const void *iBuffer, size_t iLen, void **CodedBuffer, size_t *oCodedLen) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Code (iBuffer,iLen,CodedBuffer,oCodedLen)); \
} \
HRESULT  TIECATIUExitCrypt##classe::Decode (const void *iCodedBuffer, size_t iCodedLen, void **DecodedBuffer, size_t *oDecodedLen) \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Decode (iCodedBuffer,iCodedLen,DecodedBuffer,oDecodedLen)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIUExitCrypt(classe) \
 \
 \
declare_TIE_CATIUExitCrypt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUExitCrypt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUExitCrypt,"CATIUExitCrypt",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUExitCrypt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIUExitCrypt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUExitCrypt##classe(classe::MetaObject(),TIECATIUExitCrypt##classe::MetaObject(),(void *)CreateTIECATIUExitCrypt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIUExitCrypt(classe) \
 \
 \
declare_TIE_CATIUExitCrypt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIUExitCrypt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIUExitCrypt,"CATIUExitCrypt",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIUExitCrypt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIUExitCrypt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIUExitCrypt##classe(classe::MetaObject(),TIECATIUExitCrypt##classe::MetaObject(),(void *)CreateTIECATIUExitCrypt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIUExitCrypt(classe) TIE_CATIUExitCrypt(classe)
#else
#define BOA_CATIUExitCrypt(classe) CATImplementBOA(CATIUExitCrypt, classe)
#endif

#endif
