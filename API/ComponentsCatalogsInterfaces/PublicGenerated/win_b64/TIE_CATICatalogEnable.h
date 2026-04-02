#ifndef __TIE_CATICatalogEnable
#define __TIE_CATICatalogEnable

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICatalogEnable.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICatalogEnable */
#define declare_TIE_CATICatalogEnable(classe) \
 \
 \
class TIECATICatalogEnable##classe : public CATICatalogEnable \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICatalogEnable, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
};



#define ENVTIEdeclare_CATICatalogEnable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \


#define ENVTIEdefine_CATICatalogEnable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \


/* Name of the TIE class */
#define class_TIE_CATICatalogEnable(classe)    TIECATICatalogEnable##classe


/* Common methods inside a TIE */
#define common_TIE_CATICatalogEnable(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICatalogEnable, classe) \
 \
 \
CATImplementTIEMethods(CATICatalogEnable, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICatalogEnable, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICatalogEnable, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICatalogEnable, classe) \
 \



/* Macro used to link an implementation with an interface */
#define TIE_CATICatalogEnable(classe) \
 \
 \
declare_TIE_CATICatalogEnable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICatalogEnable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICatalogEnable,"CATICatalogEnable",CATICatalogEnable::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICatalogEnable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICatalogEnable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICatalogEnable##classe(classe::MetaObject(),CATICatalogEnable::MetaObject(),(void *)CreateTIECATICatalogEnable##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICatalogEnable(classe) \
 \
 \
declare_TIE_CATICatalogEnable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICatalogEnable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICatalogEnable,"CATICatalogEnable",CATICatalogEnable::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICatalogEnable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICatalogEnable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICatalogEnable##classe(classe::MetaObject(),CATICatalogEnable::MetaObject(),(void *)CreateTIECATICatalogEnable##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICatalogEnable(classe) TIE_CATICatalogEnable(classe)
#else
#define BOA_CATICatalogEnable(classe) CATImplementBOA(CATICatalogEnable, classe)
#endif

#endif
