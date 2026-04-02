#ifndef __TIE_CATICGMDomainBinder
#define __TIE_CATICGMDomainBinder

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICGMDomainBinder.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICGMDomainBinder */
#define declare_TIE_CATICGMDomainBinder(classe) \
 \
 \
class TIECATICGMDomainBinder##classe : public CATICGMDomainBinder \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICGMDomainBinder, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual const char* GetDomainName(); \
};



#define ENVTIEdeclare_CATICGMDomainBinder(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual const char* GetDomainName(); \


#define ENVTIEdefine_CATICGMDomainBinder(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
const char*  ENVTIEName::GetDomainName() \
{ \
return (ENVTIECALL(CATICGMDomainBinder,ENVTIETypeLetter,ENVTIELetter)GetDomainName()); \
} \


/* Name of the TIE class */
#define class_TIE_CATICGMDomainBinder(classe)    TIECATICGMDomainBinder##classe


/* Common methods inside a TIE */
#define common_TIE_CATICGMDomainBinder(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICGMDomainBinder, classe) \
 \
 \
CATImplementTIEMethods(CATICGMDomainBinder, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICGMDomainBinder, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICGMDomainBinder, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICGMDomainBinder, classe) \
 \
const char*  TIECATICGMDomainBinder##classe::GetDomainName() \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDomainName()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICGMDomainBinder(classe) \
 \
 \
declare_TIE_CATICGMDomainBinder(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICGMDomainBinder##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICGMDomainBinder,"CATICGMDomainBinder",CATICGMDomainBinder::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICGMDomainBinder(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICGMDomainBinder, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICGMDomainBinder##classe(classe::MetaObject(),CATICGMDomainBinder::MetaObject(),(void *)CreateTIECATICGMDomainBinder##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICGMDomainBinder(classe) \
 \
 \
declare_TIE_CATICGMDomainBinder(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICGMDomainBinder##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICGMDomainBinder,"CATICGMDomainBinder",CATICGMDomainBinder::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICGMDomainBinder(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICGMDomainBinder, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICGMDomainBinder##classe(classe::MetaObject(),CATICGMDomainBinder::MetaObject(),(void *)CreateTIECATICGMDomainBinder##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICGMDomainBinder(classe) TIE_CATICGMDomainBinder(classe)
#else
#define BOA_CATICGMDomainBinder(classe) CATImplementBOA(CATICGMDomainBinder, classe)
#endif

#endif
