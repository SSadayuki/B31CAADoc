#ifndef __TIE_CATIAfrActivateWorkbench
#define __TIE_CATIAfrActivateWorkbench

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAfrActivateWorkbench.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAfrActivateWorkbench */
#define declare_TIE_CATIAfrActivateWorkbench(classe) \
 \
 \
class TIECATIAfrActivateWorkbench##classe : public CATIAfrActivateWorkbench \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAfrActivateWorkbench, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATString & GetInitialWorkbench () ; \
};



#define ENVTIEdeclare_CATIAfrActivateWorkbench(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATString & GetInitialWorkbench () ; \


#define ENVTIEdefine_CATIAfrActivateWorkbench(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATString &  ENVTIEName::GetInitialWorkbench ()  \
{ \
return (ENVTIECALL(CATIAfrActivateWorkbench,ENVTIETypeLetter,ENVTIELetter)GetInitialWorkbench ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAfrActivateWorkbench(classe)    TIECATIAfrActivateWorkbench##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAfrActivateWorkbench(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAfrActivateWorkbench, classe) \
 \
 \
CATImplementTIEMethods(CATIAfrActivateWorkbench, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAfrActivateWorkbench, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAfrActivateWorkbench, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAfrActivateWorkbench, classe) \
 \
CATString &  TIECATIAfrActivateWorkbench##classe::GetInitialWorkbench ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInitialWorkbench ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAfrActivateWorkbench(classe) \
 \
 \
declare_TIE_CATIAfrActivateWorkbench(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAfrActivateWorkbench##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAfrActivateWorkbench,"CATIAfrActivateWorkbench",CATIAfrActivateWorkbench::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAfrActivateWorkbench(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAfrActivateWorkbench, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAfrActivateWorkbench##classe(classe::MetaObject(),CATIAfrActivateWorkbench::MetaObject(),(void *)CreateTIECATIAfrActivateWorkbench##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAfrActivateWorkbench(classe) \
 \
 \
declare_TIE_CATIAfrActivateWorkbench(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAfrActivateWorkbench##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAfrActivateWorkbench,"CATIAfrActivateWorkbench",CATIAfrActivateWorkbench::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAfrActivateWorkbench(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAfrActivateWorkbench, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAfrActivateWorkbench##classe(classe::MetaObject(),CATIAfrActivateWorkbench::MetaObject(),(void *)CreateTIECATIAfrActivateWorkbench##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAfrActivateWorkbench(classe) TIE_CATIAfrActivateWorkbench(classe)
#else
#define BOA_CATIAfrActivateWorkbench(classe) CATImplementBOA(CATIAfrActivateWorkbench, classe)
#endif

#endif
