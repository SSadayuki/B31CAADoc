#ifndef __TIE_CATIV4DataTranslator
#define __TIE_CATIV4DataTranslator

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIV4DataTranslator.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIV4DataTranslator */
#define declare_TIE_CATIV4DataTranslator(classe) \
 \
 \
class TIECATIV4DataTranslator##classe : public CATIV4DataTranslator \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIV4DataTranslator, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT GetUserIntent(CATV4iV4Element * V4Elem, int & oIntent) ; \
};



#define ENVTIEdeclare_CATIV4DataTranslator(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT GetUserIntent(CATV4iV4Element * V4Elem, int & oIntent) ; \


#define ENVTIEdefine_CATIV4DataTranslator(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::GetUserIntent(CATV4iV4Element * V4Elem, int & oIntent)  \
{ \
return (ENVTIECALL(CATIV4DataTranslator,ENVTIETypeLetter,ENVTIELetter)GetUserIntent(V4Elem,oIntent)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIV4DataTranslator(classe)    TIECATIV4DataTranslator##classe


/* Common methods inside a TIE */
#define common_TIE_CATIV4DataTranslator(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIV4DataTranslator, classe) \
 \
 \
CATImplementTIEMethods(CATIV4DataTranslator, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIV4DataTranslator, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIV4DataTranslator, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIV4DataTranslator, classe) \
 \
HRESULT  TIECATIV4DataTranslator##classe::GetUserIntent(CATV4iV4Element * V4Elem, int & oIntent)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUserIntent(V4Elem,oIntent)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIV4DataTranslator(classe) \
 \
 \
declare_TIE_CATIV4DataTranslator(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIV4DataTranslator##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIV4DataTranslator,"CATIV4DataTranslator",CATIV4DataTranslator::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIV4DataTranslator(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIV4DataTranslator, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIV4DataTranslator##classe(classe::MetaObject(),CATIV4DataTranslator::MetaObject(),(void *)CreateTIECATIV4DataTranslator##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIV4DataTranslator(classe) \
 \
 \
declare_TIE_CATIV4DataTranslator(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIV4DataTranslator##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIV4DataTranslator,"CATIV4DataTranslator",CATIV4DataTranslator::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIV4DataTranslator(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIV4DataTranslator, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIV4DataTranslator##classe(classe::MetaObject(),CATIV4DataTranslator::MetaObject(),(void *)CreateTIECATIV4DataTranslator##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIV4DataTranslator(classe) TIE_CATIV4DataTranslator(classe)
#else
#define BOA_CATIV4DataTranslator(classe) CATImplementBOA(CATIV4DataTranslator, classe)
#endif

#endif
