#ifndef __TIE_CATIAssyWorkBenchAddin
#define __TIE_CATIAssyWorkBenchAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAssyWorkBenchAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAssyWorkBenchAddin */
#define declare_TIE_CATIAssyWorkBenchAddin(classe) \
 \
 \
class TIECATIAssyWorkBenchAddin##classe : public CATIAssyWorkBenchAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAssyWorkBenchAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIAssyWorkBenchAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIAssyWorkBenchAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIAssyWorkBenchAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIAssyWorkBenchAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAssyWorkBenchAddin(classe)    TIECATIAssyWorkBenchAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAssyWorkBenchAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAssyWorkBenchAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIAssyWorkBenchAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAssyWorkBenchAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAssyWorkBenchAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAssyWorkBenchAddin, classe) \
 \
void               TIECATIAssyWorkBenchAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIAssyWorkBenchAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAssyWorkBenchAddin(classe) \
 \
 \
declare_TIE_CATIAssyWorkBenchAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAssyWorkBenchAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAssyWorkBenchAddin,"CATIAssyWorkBenchAddin",CATIAssyWorkBenchAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAssyWorkBenchAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAssyWorkBenchAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAssyWorkBenchAddin##classe(classe::MetaObject(),CATIAssyWorkBenchAddin::MetaObject(),(void *)CreateTIECATIAssyWorkBenchAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAssyWorkBenchAddin(classe) \
 \
 \
declare_TIE_CATIAssyWorkBenchAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAssyWorkBenchAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAssyWorkBenchAddin,"CATIAssyWorkBenchAddin",CATIAssyWorkBenchAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAssyWorkBenchAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAssyWorkBenchAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAssyWorkBenchAddin##classe(classe::MetaObject(),CATIAssyWorkBenchAddin::MetaObject(),(void *)CreateTIECATIAssyWorkBenchAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAssyWorkBenchAddin(classe) TIE_CATIAssyWorkBenchAddin(classe)
#else
#define BOA_CATIAssyWorkBenchAddin(classe) CATImplementBOA(CATIAssyWorkBenchAddin, classe)
#endif

#endif
