#ifndef __TIE_CATIWorkbenchInitialization
#define __TIE_CATIWorkbenchInitialization

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIWorkbenchInitialization.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIWorkbenchInitialization */
#define declare_TIE_CATIWorkbenchInitialization(classe) \
 \
 \
class TIECATIWorkbenchInitialization##classe : public CATIWorkbenchInitialization \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIWorkbenchInitialization, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void Init () ; \
      virtual void Dispose () ; \
};



#define ENVTIEdeclare_CATIWorkbenchInitialization(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void Init () ; \
virtual void Dispose () ; \


#define ENVTIEdefine_CATIWorkbenchInitialization(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void  ENVTIEName::Init ()  \
{ \
 (ENVTIECALL(CATIWorkbenchInitialization,ENVTIETypeLetter,ENVTIELetter)Init ()); \
} \
void  ENVTIEName::Dispose ()  \
{ \
 (ENVTIECALL(CATIWorkbenchInitialization,ENVTIETypeLetter,ENVTIELetter)Dispose ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIWorkbenchInitialization(classe)    TIECATIWorkbenchInitialization##classe


/* Common methods inside a TIE */
#define common_TIE_CATIWorkbenchInitialization(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIWorkbenchInitialization, classe) \
 \
 \
CATImplementTIEMethods(CATIWorkbenchInitialization, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIWorkbenchInitialization, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIWorkbenchInitialization, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIWorkbenchInitialization, classe) \
 \
void  TIECATIWorkbenchInitialization##classe::Init ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Init (); \
} \
void  TIECATIWorkbenchInitialization##classe::Dispose ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Dispose (); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIWorkbenchInitialization(classe) \
 \
 \
declare_TIE_CATIWorkbenchInitialization(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIWorkbenchInitialization##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIWorkbenchInitialization,"CATIWorkbenchInitialization",CATIWorkbenchInitialization::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIWorkbenchInitialization(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIWorkbenchInitialization, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIWorkbenchInitialization##classe(classe::MetaObject(),CATIWorkbenchInitialization::MetaObject(),(void *)CreateTIECATIWorkbenchInitialization##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIWorkbenchInitialization(classe) \
 \
 \
declare_TIE_CATIWorkbenchInitialization(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIWorkbenchInitialization##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIWorkbenchInitialization,"CATIWorkbenchInitialization",CATIWorkbenchInitialization::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIWorkbenchInitialization(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIWorkbenchInitialization, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIWorkbenchInitialization##classe(classe::MetaObject(),CATIWorkbenchInitialization::MetaObject(),(void *)CreateTIECATIWorkbenchInitialization##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIWorkbenchInitialization(classe) TIE_CATIWorkbenchInitialization(classe)
#else
#define BOA_CATIWorkbenchInitialization(classe) CATImplementBOA(CATIWorkbenchInitialization, classe)
#endif

#endif
