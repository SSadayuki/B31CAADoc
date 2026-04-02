#ifndef __TIE_CATISearchInformation
#define __TIE_CATISearchInformation

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISearchInformation.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISearchInformation */
#define declare_TIE_CATISearchInformation(classe) \
 \
 \
class TIECATISearchInformation##classe : public CATISearchInformation \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISearchInformation, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
};



#define ENVTIEdeclare_CATISearchInformation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \


#define ENVTIEdefine_CATISearchInformation(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \


/* Name of the TIE class */
#define class_TIE_CATISearchInformation(classe)    TIECATISearchInformation##classe


/* Common methods inside a TIE */
#define common_TIE_CATISearchInformation(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISearchInformation, classe) \
 \
 \
CATImplementTIEMethods(CATISearchInformation, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISearchInformation, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISearchInformation, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISearchInformation, classe) \
 \



/* Macro used to link an implementation with an interface */
#define TIE_CATISearchInformation(classe) \
 \
 \
declare_TIE_CATISearchInformation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISearchInformation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISearchInformation,"CATISearchInformation",CATISearchInformation::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISearchInformation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISearchInformation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISearchInformation##classe(classe::MetaObject(),CATISearchInformation::MetaObject(),(void *)CreateTIECATISearchInformation##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISearchInformation(classe) \
 \
 \
declare_TIE_CATISearchInformation(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISearchInformation##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISearchInformation,"CATISearchInformation",CATISearchInformation::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISearchInformation(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISearchInformation, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISearchInformation##classe(classe::MetaObject(),CATISearchInformation::MetaObject(),(void *)CreateTIECATISearchInformation##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISearchInformation(classe) TIE_CATISearchInformation(classe)
#else
#define BOA_CATISearchInformation(classe) CATImplementBOA(CATISearchInformation, classe)
#endif

#endif
