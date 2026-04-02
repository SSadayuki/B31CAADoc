#ifndef __TIE_CATIAddTypeLibrary
#define __TIE_CATIAddTypeLibrary

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAddTypeLibrary.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAddTypeLibrary */
#define declare_TIE_CATIAddTypeLibrary(classe) \
 \
 \
class TIECATIAddTypeLibrary##classe : public CATIAddTypeLibrary \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAddTypeLibrary, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void Add ()  ; \
};



#define ENVTIEdeclare_CATIAddTypeLibrary(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void Add ()  ; \


#define ENVTIEdefine_CATIAddTypeLibrary(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void  ENVTIEName::Add ()   \
{ \
 (ENVTIECALL(CATIAddTypeLibrary,ENVTIETypeLetter,ENVTIELetter)Add ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAddTypeLibrary(classe)    TIECATIAddTypeLibrary##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAddTypeLibrary(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAddTypeLibrary, classe) \
 \
 \
CATImplementTIEMethods(CATIAddTypeLibrary, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAddTypeLibrary, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAddTypeLibrary, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAddTypeLibrary, classe) \
 \
void  TIECATIAddTypeLibrary##classe::Add ()   \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Add (); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAddTypeLibrary(classe) \
 \
 \
declare_TIE_CATIAddTypeLibrary(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAddTypeLibrary##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAddTypeLibrary,"CATIAddTypeLibrary",CATIAddTypeLibrary::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAddTypeLibrary(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAddTypeLibrary, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAddTypeLibrary##classe(classe::MetaObject(),CATIAddTypeLibrary::MetaObject(),(void *)CreateTIECATIAddTypeLibrary##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAddTypeLibrary(classe) \
 \
 \
declare_TIE_CATIAddTypeLibrary(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAddTypeLibrary##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAddTypeLibrary,"CATIAddTypeLibrary",CATIAddTypeLibrary::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAddTypeLibrary(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAddTypeLibrary, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAddTypeLibrary##classe(classe::MetaObject(),CATIAddTypeLibrary::MetaObject(),(void *)CreateTIECATIAddTypeLibrary##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAddTypeLibrary(classe) TIE_CATIAddTypeLibrary(classe)
#else
#define BOA_CATIAddTypeLibrary(classe) CATImplementBOA(CATIAddTypeLibrary, classe)
#endif

#endif
