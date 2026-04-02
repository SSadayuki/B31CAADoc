#ifndef __TIE_CATIMfgApplicativeWorkbench
#define __TIE_CATIMfgApplicativeWorkbench

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgApplicativeWorkbench.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgApplicativeWorkbench */
#define declare_TIE_CATIMfgApplicativeWorkbench(classe) \
 \
 \
class TIECATIMfgApplicativeWorkbench##classe : public CATIMfgApplicativeWorkbench \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgApplicativeWorkbench, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
};



#define ENVTIEdeclare_CATIMfgApplicativeWorkbench(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \


#define ENVTIEdefine_CATIMfgApplicativeWorkbench(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \


/* Name of the TIE class */
#define class_TIE_CATIMfgApplicativeWorkbench(classe)    TIECATIMfgApplicativeWorkbench##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgApplicativeWorkbench(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgApplicativeWorkbench, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgApplicativeWorkbench, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgApplicativeWorkbench, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgApplicativeWorkbench, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgApplicativeWorkbench, classe) \
 \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgApplicativeWorkbench(classe) \
 \
 \
declare_TIE_CATIMfgApplicativeWorkbench(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgApplicativeWorkbench##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgApplicativeWorkbench,"CATIMfgApplicativeWorkbench",CATIMfgApplicativeWorkbench::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgApplicativeWorkbench(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgApplicativeWorkbench, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgApplicativeWorkbench##classe(classe::MetaObject(),CATIMfgApplicativeWorkbench::MetaObject(),(void *)CreateTIECATIMfgApplicativeWorkbench##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgApplicativeWorkbench(classe) \
 \
 \
declare_TIE_CATIMfgApplicativeWorkbench(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgApplicativeWorkbench##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgApplicativeWorkbench,"CATIMfgApplicativeWorkbench",CATIMfgApplicativeWorkbench::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgApplicativeWorkbench(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgApplicativeWorkbench, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgApplicativeWorkbench##classe(classe::MetaObject(),CATIMfgApplicativeWorkbench::MetaObject(),(void *)CreateTIECATIMfgApplicativeWorkbench##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgApplicativeWorkbench(classe) TIE_CATIMfgApplicativeWorkbench(classe)
#else
#define BOA_CATIMfgApplicativeWorkbench(classe) CATImplementBOA(CATIMfgApplicativeWorkbench, classe)
#endif

#endif
