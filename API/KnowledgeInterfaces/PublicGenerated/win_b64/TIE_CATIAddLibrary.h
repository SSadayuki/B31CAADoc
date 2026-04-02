#ifndef __TIE_CATIAddLibrary
#define __TIE_CATIAddLibrary

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAddLibrary.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAddLibrary */
#define declare_TIE_CATIAddLibrary(classe) \
 \
 \
class TIECATIAddLibrary##classe : public CATIAddLibrary \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAddLibrary, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void Add ()  ; \
};



#define ENVTIEdeclare_CATIAddLibrary(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void Add ()  ; \


#define ENVTIEdefine_CATIAddLibrary(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void  ENVTIEName::Add ()   \
{ \
 (ENVTIECALL(CATIAddLibrary,ENVTIETypeLetter,ENVTIELetter)Add ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAddLibrary(classe)    TIECATIAddLibrary##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAddLibrary(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAddLibrary, classe) \
 \
 \
CATImplementTIEMethods(CATIAddLibrary, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAddLibrary, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAddLibrary, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAddLibrary, classe) \
 \
void  TIECATIAddLibrary##classe::Add ()   \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add (); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAddLibrary(classe) \
 \
 \
declare_TIE_CATIAddLibrary(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAddLibrary##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAddLibrary,"CATIAddLibrary",CATIAddLibrary::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAddLibrary(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAddLibrary, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAddLibrary##classe(classe::MetaObject(),CATIAddLibrary::MetaObject(),(void *)CreateTIECATIAddLibrary##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAddLibrary(classe) \
 \
 \
declare_TIE_CATIAddLibrary(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAddLibrary##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAddLibrary,"CATIAddLibrary",CATIAddLibrary::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAddLibrary(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAddLibrary, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAddLibrary##classe(classe::MetaObject(),CATIAddLibrary::MetaObject(),(void *)CreateTIECATIAddLibrary##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAddLibrary(classe) TIE_CATIAddLibrary(classe)
#else
#define BOA_CATIAddLibrary(classe) CATImplementBOA(CATIAddLibrary, classe)
#endif

#endif
