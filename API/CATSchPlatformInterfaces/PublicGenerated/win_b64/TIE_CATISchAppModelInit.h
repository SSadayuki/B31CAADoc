#ifndef __TIE_CATISchAppModelInit
#define __TIE_CATISchAppModelInit

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppModelInit.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppModelInit */
#define declare_TIE_CATISchAppModelInit(classe) \
 \
 \
class TIECATISchAppModelInit##classe : public CATISchAppModelInit \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppModelInit, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppInit (const CATDocument *iDoc) ; \
};



#define ENVTIEdeclare_CATISchAppModelInit(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppInit (const CATDocument *iDoc) ; \


#define ENVTIEdefine_CATISchAppModelInit(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppInit (const CATDocument *iDoc)  \
{ \
return (ENVTIECALL(CATISchAppModelInit,ENVTIETypeLetter,ENVTIELetter)AppInit (iDoc)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppModelInit(classe)    TIECATISchAppModelInit##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppModelInit(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppModelInit, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppModelInit, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppModelInit, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppModelInit, classe) \
 \
HRESULT  TIECATISchAppModelInit##classe::AppInit (const CATDocument *iDoc)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppInit (iDoc)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppModelInit(classe) \
 \
 \
declare_TIE_CATISchAppModelInit(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppModelInit##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppModelInit,"CATISchAppModelInit",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppModelInit(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppModelInit, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppModelInit##classe(classe::MetaObject(),TIECATISchAppModelInit##classe::MetaObject(),(void *)CreateTIECATISchAppModelInit##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppModelInit(classe) \
 \
 \
declare_TIE_CATISchAppModelInit(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppModelInit##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppModelInit,"CATISchAppModelInit",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppModelInit(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppModelInit, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppModelInit##classe(classe::MetaObject(),TIECATISchAppModelInit##classe::MetaObject(),(void *)CreateTIECATISchAppModelInit##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppModelInit(classe) TIE_CATISchAppModelInit(classe)
#else
#define BOA_CATISchAppModelInit(classe) CATImplementBOA(CATISchAppModelInit, classe)
#endif

#endif
