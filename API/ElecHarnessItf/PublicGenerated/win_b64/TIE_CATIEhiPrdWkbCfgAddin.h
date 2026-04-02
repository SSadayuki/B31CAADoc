#ifndef __TIE_CATIEhiPrdWkbCfgAddin
#define __TIE_CATIEhiPrdWkbCfgAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIEhiPrdWkbCfgAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIEhiPrdWkbCfgAddin */
#define declare_TIE_CATIEhiPrdWkbCfgAddin(classe) \
 \
 \
class TIECATIEhiPrdWkbCfgAddin##classe : public CATIEhiPrdWkbCfgAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIEhiPrdWkbCfgAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIEhiPrdWkbCfgAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIEhiPrdWkbCfgAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIEhiPrdWkbCfgAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIEhiPrdWkbCfgAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIEhiPrdWkbCfgAddin(classe)    TIECATIEhiPrdWkbCfgAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIEhiPrdWkbCfgAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIEhiPrdWkbCfgAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIEhiPrdWkbCfgAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIEhiPrdWkbCfgAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIEhiPrdWkbCfgAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIEhiPrdWkbCfgAddin, classe) \
 \
void               TIECATIEhiPrdWkbCfgAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIEhiPrdWkbCfgAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIEhiPrdWkbCfgAddin(classe) \
 \
 \
declare_TIE_CATIEhiPrdWkbCfgAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEhiPrdWkbCfgAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEhiPrdWkbCfgAddin,"CATIEhiPrdWkbCfgAddin",CATIEhiPrdWkbCfgAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEhiPrdWkbCfgAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIEhiPrdWkbCfgAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEhiPrdWkbCfgAddin##classe(classe::MetaObject(),CATIEhiPrdWkbCfgAddin::MetaObject(),(void *)CreateTIECATIEhiPrdWkbCfgAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIEhiPrdWkbCfgAddin(classe) \
 \
 \
declare_TIE_CATIEhiPrdWkbCfgAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEhiPrdWkbCfgAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEhiPrdWkbCfgAddin,"CATIEhiPrdWkbCfgAddin",CATIEhiPrdWkbCfgAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEhiPrdWkbCfgAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIEhiPrdWkbCfgAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEhiPrdWkbCfgAddin##classe(classe::MetaObject(),CATIEhiPrdWkbCfgAddin::MetaObject(),(void *)CreateTIECATIEhiPrdWkbCfgAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIEhiPrdWkbCfgAddin(classe) TIE_CATIEhiPrdWkbCfgAddin(classe)
#else
#define BOA_CATIEhiPrdWkbCfgAddin(classe) CATImplementBOA(CATIEhiPrdWkbCfgAddin, classe)
#endif

#endif
