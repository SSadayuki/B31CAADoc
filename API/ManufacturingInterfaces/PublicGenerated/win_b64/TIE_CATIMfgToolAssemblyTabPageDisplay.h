#ifndef __TIE_CATIMfgToolAssemblyTabPageDisplay
#define __TIE_CATIMfgToolAssemblyTabPageDisplay

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgToolAssemblyTabPageDisplay.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgToolAssemblyTabPageDisplay */
#define declare_TIE_CATIMfgToolAssemblyTabPageDisplay(classe) \
 \
 \
class TIECATIMfgToolAssemblyTabPageDisplay##classe : public CATIMfgToolAssemblyTabPageDisplay \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgToolAssemblyTabPageDisplay, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
};



#define ENVTIEdeclare_CATIMfgToolAssemblyTabPageDisplay(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \


#define ENVTIEdefine_CATIMfgToolAssemblyTabPageDisplay(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \


/* Name of the TIE class */
#define class_TIE_CATIMfgToolAssemblyTabPageDisplay(classe)    TIECATIMfgToolAssemblyTabPageDisplay##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgToolAssemblyTabPageDisplay(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgToolAssemblyTabPageDisplay, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgToolAssemblyTabPageDisplay, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgToolAssemblyTabPageDisplay, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgToolAssemblyTabPageDisplay, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgToolAssemblyTabPageDisplay, classe) \
 \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgToolAssemblyTabPageDisplay(classe) \
 \
 \
declare_TIE_CATIMfgToolAssemblyTabPageDisplay(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgToolAssemblyTabPageDisplay##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgToolAssemblyTabPageDisplay,"CATIMfgToolAssemblyTabPageDisplay",CATIMfgToolAssemblyTabPageDisplay::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgToolAssemblyTabPageDisplay(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgToolAssemblyTabPageDisplay, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgToolAssemblyTabPageDisplay##classe(classe::MetaObject(),CATIMfgToolAssemblyTabPageDisplay::MetaObject(),(void *)CreateTIECATIMfgToolAssemblyTabPageDisplay##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgToolAssemblyTabPageDisplay(classe) \
 \
 \
declare_TIE_CATIMfgToolAssemblyTabPageDisplay(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgToolAssemblyTabPageDisplay##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgToolAssemblyTabPageDisplay,"CATIMfgToolAssemblyTabPageDisplay",CATIMfgToolAssemblyTabPageDisplay::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgToolAssemblyTabPageDisplay(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgToolAssemblyTabPageDisplay, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgToolAssemblyTabPageDisplay##classe(classe::MetaObject(),CATIMfgToolAssemblyTabPageDisplay::MetaObject(),(void *)CreateTIECATIMfgToolAssemblyTabPageDisplay##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgToolAssemblyTabPageDisplay(classe) TIE_CATIMfgToolAssemblyTabPageDisplay(classe)
#else
#define BOA_CATIMfgToolAssemblyTabPageDisplay(classe) CATImplementBOA(CATIMfgToolAssemblyTabPageDisplay, classe)
#endif

#endif
