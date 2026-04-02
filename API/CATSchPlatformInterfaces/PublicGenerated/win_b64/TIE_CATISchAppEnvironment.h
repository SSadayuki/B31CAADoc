#ifndef __TIE_CATISchAppEnvironment
#define __TIE_CATISchAppEnvironment

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISchAppEnvironment.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISchAppEnvironment */
#define declare_TIE_CATISchAppEnvironment(classe) \
 \
 \
class TIECATISchAppEnvironment##classe : public CATISchAppEnvironment \
{ \
   private: \
      CATDeclareCommonTIEMembers \
      CATDeclareNotCATBaseUnknownTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISchAppEnvironment, classe) \
      CATDeclareIUnknownMethodsForNotCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT AppInitWhenApplicationStarts () ; \
      virtual HRESULT AppCleanUpWhenApplicationEnds () ; \
      virtual HRESULT AppGetAppObjectContainer (CATIContainer **oAppObjCont) ; \
      virtual HRESULT AppLoadFeatFiles () ; \
};



#define ENVTIEdeclare_CATISchAppEnvironment(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT AppInitWhenApplicationStarts () ; \
virtual HRESULT AppCleanUpWhenApplicationEnds () ; \
virtual HRESULT AppGetAppObjectContainer (CATIContainer **oAppObjCont) ; \
virtual HRESULT AppLoadFeatFiles () ; \


#define ENVTIEdefine_CATISchAppEnvironment(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::AppInitWhenApplicationStarts ()  \
{ \
return (ENVTIECALL(CATISchAppEnvironment,ENVTIETypeLetter,ENVTIELetter)AppInitWhenApplicationStarts ()); \
} \
HRESULT  ENVTIEName::AppCleanUpWhenApplicationEnds ()  \
{ \
return (ENVTIECALL(CATISchAppEnvironment,ENVTIETypeLetter,ENVTIELetter)AppCleanUpWhenApplicationEnds ()); \
} \
HRESULT  ENVTIEName::AppGetAppObjectContainer (CATIContainer **oAppObjCont)  \
{ \
return (ENVTIECALL(CATISchAppEnvironment,ENVTIETypeLetter,ENVTIELetter)AppGetAppObjectContainer (oAppObjCont)); \
} \
HRESULT  ENVTIEName::AppLoadFeatFiles ()  \
{ \
return (ENVTIECALL(CATISchAppEnvironment,ENVTIETypeLetter,ENVTIELetter)AppLoadFeatFiles ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATISchAppEnvironment(classe)    TIECATISchAppEnvironment##classe


/* Common methods inside a TIE */
#define common_TIE_CATISchAppEnvironment(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISchAppEnvironment, classe) \
 \
 \
CATImplementNotCATBaseUnknownTIEMethods(CATISchAppEnvironment, classe) \
CATImplementIUnknownMethodsForNotCATBaseUnknownTIE(CATISchAppEnvironment, classe, 0) \
CATImplementCATBaseUnknownMethodsForTIE(CATISchAppEnvironment, classe) \
 \
HRESULT  TIECATISchAppEnvironment##classe::AppInitWhenApplicationStarts ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppInitWhenApplicationStarts ()); \
} \
HRESULT  TIECATISchAppEnvironment##classe::AppCleanUpWhenApplicationEnds ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppCleanUpWhenApplicationEnds ()); \
} \
HRESULT  TIECATISchAppEnvironment##classe::AppGetAppObjectContainer (CATIContainer **oAppObjCont)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetAppObjectContainer (oAppObjCont)); \
} \
HRESULT  TIECATISchAppEnvironment##classe::AppLoadFeatFiles ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppLoadFeatFiles ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISchAppEnvironment(classe) \
 \
 \
declare_TIE_CATISchAppEnvironment(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppEnvironment##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppEnvironment,"CATISchAppEnvironment",NULL,classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppEnvironment(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISchAppEnvironment, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppEnvironment##classe(classe::MetaObject(),TIECATISchAppEnvironment##classe::MetaObject(),(void *)CreateTIECATISchAppEnvironment##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISchAppEnvironment(classe) \
 \
 \
declare_TIE_CATISchAppEnvironment(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISchAppEnvironment##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISchAppEnvironment,"CATISchAppEnvironment",NULL,classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISchAppEnvironment(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISchAppEnvironment, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISchAppEnvironment##classe(classe::MetaObject(),TIECATISchAppEnvironment##classe::MetaObject(),(void *)CreateTIECATISchAppEnvironment##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISchAppEnvironment(classe) TIE_CATISchAppEnvironment(classe)
#else
#define BOA_CATISchAppEnvironment(classe) CATImplementBOA(CATISchAppEnvironment, classe)
#endif

#endif
