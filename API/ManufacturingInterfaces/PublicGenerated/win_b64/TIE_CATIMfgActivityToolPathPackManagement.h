#ifndef __TIE_CATIMfgActivityToolPathPackManagement
#define __TIE_CATIMfgActivityToolPathPackManagement

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMfgActivityToolPathPackManagement.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMfgActivityToolPathPackManagement */
#define declare_TIE_CATIMfgActivityToolPathPackManagement(classe) \
 \
 \
class TIECATIMfgActivityToolPathPackManagement##classe : public CATIMfgActivityToolPathPackManagement \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMfgActivityToolPathPackManagement, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
};



#define ENVTIEdeclare_CATIMfgActivityToolPathPackManagement(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \


#define ENVTIEdefine_CATIMfgActivityToolPathPackManagement(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \


/* Name of the TIE class */
#define class_TIE_CATIMfgActivityToolPathPackManagement(classe)    TIECATIMfgActivityToolPathPackManagement##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMfgActivityToolPathPackManagement(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMfgActivityToolPathPackManagement, classe) \
 \
 \
CATImplementTIEMethods(CATIMfgActivityToolPathPackManagement, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMfgActivityToolPathPackManagement, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMfgActivityToolPathPackManagement, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMfgActivityToolPathPackManagement, classe) \
 \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMfgActivityToolPathPackManagement(classe) \
 \
 \
declare_TIE_CATIMfgActivityToolPathPackManagement(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgActivityToolPathPackManagement##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgActivityToolPathPackManagement,"CATIMfgActivityToolPathPackManagement",CATIMfgActivityToolPathPackManagement::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgActivityToolPathPackManagement(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMfgActivityToolPathPackManagement, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgActivityToolPathPackManagement##classe(classe::MetaObject(),CATIMfgActivityToolPathPackManagement::MetaObject(),(void *)CreateTIECATIMfgActivityToolPathPackManagement##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMfgActivityToolPathPackManagement(classe) \
 \
 \
declare_TIE_CATIMfgActivityToolPathPackManagement(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMfgActivityToolPathPackManagement##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMfgActivityToolPathPackManagement,"CATIMfgActivityToolPathPackManagement",CATIMfgActivityToolPathPackManagement::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMfgActivityToolPathPackManagement(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMfgActivityToolPathPackManagement, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMfgActivityToolPathPackManagement##classe(classe::MetaObject(),CATIMfgActivityToolPathPackManagement::MetaObject(),(void *)CreateTIECATIMfgActivityToolPathPackManagement##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMfgActivityToolPathPackManagement(classe) TIE_CATIMfgActivityToolPathPackManagement(classe)
#else
#define BOA_CATIMfgActivityToolPathPackManagement(classe) CATImplementBOA(CATIMfgActivityToolPathPackManagement, classe)
#endif

#endif
