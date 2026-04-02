#ifndef __TIE_CATIDocAlias
#define __TIE_CATIDocAlias

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIDocAlias.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIDocAlias */
#define declare_TIE_CATIDocAlias(classe) \
 \
 \
class TIECATIDocAlias##classe : public CATIDocAlias \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIDocAlias, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual CATUnicodeString GiveDocSuffix() ; \
};



#define ENVTIEdeclare_CATIDocAlias(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual CATUnicodeString GiveDocSuffix() ; \


#define ENVTIEdefine_CATIDocAlias(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
CATUnicodeString  ENVTIEName::GiveDocSuffix()  \
{ \
return (ENVTIECALL(CATIDocAlias,ENVTIETypeLetter,ENVTIELetter)GiveDocSuffix()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIDocAlias(classe)    TIECATIDocAlias##classe


/* Common methods inside a TIE */
#define common_TIE_CATIDocAlias(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIDocAlias, classe) \
 \
 \
CATImplementTIEMethods(CATIDocAlias, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIDocAlias, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIDocAlias, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIDocAlias, classe) \
 \
CATUnicodeString  TIECATIDocAlias##classe::GiveDocSuffix()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GiveDocSuffix()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIDocAlias(classe) \
 \
 \
declare_TIE_CATIDocAlias(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDocAlias##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDocAlias,"CATIDocAlias",CATIDocAlias::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDocAlias(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIDocAlias, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDocAlias##classe(classe::MetaObject(),CATIDocAlias::MetaObject(),(void *)CreateTIECATIDocAlias##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIDocAlias(classe) \
 \
 \
declare_TIE_CATIDocAlias(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDocAlias##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDocAlias,"CATIDocAlias",CATIDocAlias::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDocAlias(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIDocAlias, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDocAlias##classe(classe::MetaObject(),CATIDocAlias::MetaObject(),(void *)CreateTIECATIDocAlias##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIDocAlias(classe) TIE_CATIDocAlias(classe)
#else
#define BOA_CATIDocAlias(classe) CATImplementBOA(CATIDocAlias, classe)
#endif

#endif
