#ifndef __TIE_CATIBuild
#define __TIE_CATIBuild

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIBuild.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIBuild */
#define declare_TIE_CATIBuild(classe) \
 \
 \
class TIECATIBuild##classe : public CATIBuild \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIBuild, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT Build() ; \
};



#define ENVTIEdeclare_CATIBuild(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT Build() ; \


#define ENVTIEdefine_CATIBuild(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::Build()  \
{ \
return (ENVTIECALL(CATIBuild,ENVTIETypeLetter,ENVTIELetter)Build()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIBuild(classe)    TIECATIBuild##classe


/* Common methods inside a TIE */
#define common_TIE_CATIBuild(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIBuild, classe) \
 \
 \
CATImplementTIEMethods(CATIBuild, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIBuild, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIBuild, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIBuild, classe) \
 \
HRESULT  TIECATIBuild##classe::Build()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Build()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIBuild(classe) \
 \
 \
declare_TIE_CATIBuild(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIBuild##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIBuild,"CATIBuild",CATIBuild::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIBuild(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIBuild, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIBuild##classe(classe::MetaObject(),CATIBuild::MetaObject(),(void *)CreateTIECATIBuild##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIBuild(classe) \
 \
 \
declare_TIE_CATIBuild(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIBuild##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIBuild,"CATIBuild",CATIBuild::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIBuild(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIBuild, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIBuild##classe(classe::MetaObject(),CATIBuild::MetaObject(),(void *)CreateTIECATIBuild##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIBuild(classe) TIE_CATIBuild(classe)
#else
#define BOA_CATIBuild(classe) CATImplementBOA(CATIBuild, classe)
#endif

#endif
