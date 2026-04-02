#ifndef __TIE_CATIOsmVolatileContainer
#define __TIE_CATIOsmVolatileContainer

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIOsmVolatileContainer.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIOsmVolatileContainer */
#define declare_TIE_CATIOsmVolatileContainer(classe) \
 \
 \
class TIECATIOsmVolatileContainer##classe : public CATIOsmVolatileContainer \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIOsmVolatileContainer, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
};



#define ENVTIEdeclare_CATIOsmVolatileContainer(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \


#define ENVTIEdefine_CATIOsmVolatileContainer(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \


/* Name of the TIE class */
#define class_TIE_CATIOsmVolatileContainer(classe)    TIECATIOsmVolatileContainer##classe


/* Common methods inside a TIE */
#define common_TIE_CATIOsmVolatileContainer(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIOsmVolatileContainer, classe) \
 \
 \
CATImplementTIEMethods(CATIOsmVolatileContainer, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIOsmVolatileContainer, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIOsmVolatileContainer, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIOsmVolatileContainer, classe) \
 \



/* Macro used to link an implementation with an interface */
#define TIE_CATIOsmVolatileContainer(classe) \
 \
 \
declare_TIE_CATIOsmVolatileContainer(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIOsmVolatileContainer##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIOsmVolatileContainer,"CATIOsmVolatileContainer",CATIOsmVolatileContainer::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIOsmVolatileContainer(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIOsmVolatileContainer, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIOsmVolatileContainer##classe(classe::MetaObject(),CATIOsmVolatileContainer::MetaObject(),(void *)CreateTIECATIOsmVolatileContainer##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIOsmVolatileContainer(classe) \
 \
 \
declare_TIE_CATIOsmVolatileContainer(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIOsmVolatileContainer##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIOsmVolatileContainer,"CATIOsmVolatileContainer",CATIOsmVolatileContainer::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIOsmVolatileContainer(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIOsmVolatileContainer, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIOsmVolatileContainer##classe(classe::MetaObject(),CATIOsmVolatileContainer::MetaObject(),(void *)CreateTIECATIOsmVolatileContainer##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIOsmVolatileContainer(classe) TIE_CATIOsmVolatileContainer(classe)
#else
#define BOA_CATIOsmVolatileContainer(classe) CATImplementBOA(CATIOsmVolatileContainer, classe)
#endif

#endif
