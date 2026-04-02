#ifndef __TIE_CATIEhfPrdWkbCfgAddin
#define __TIE_CATIEhfPrdWkbCfgAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIEhfPrdWkbCfgAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIEhfPrdWkbCfgAddin */
#define declare_TIE_CATIEhfPrdWkbCfgAddin(classe) \
 \
 \
class TIECATIEhfPrdWkbCfgAddin##classe : public CATIEhfPrdWkbCfgAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIEhfPrdWkbCfgAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIEhfPrdWkbCfgAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIEhfPrdWkbCfgAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIEhfPrdWkbCfgAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIEhfPrdWkbCfgAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIEhfPrdWkbCfgAddin(classe)    TIECATIEhfPrdWkbCfgAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIEhfPrdWkbCfgAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIEhfPrdWkbCfgAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIEhfPrdWkbCfgAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIEhfPrdWkbCfgAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIEhfPrdWkbCfgAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIEhfPrdWkbCfgAddin, classe) \
 \
void               TIECATIEhfPrdWkbCfgAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIEhfPrdWkbCfgAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIEhfPrdWkbCfgAddin(classe) \
 \
 \
declare_TIE_CATIEhfPrdWkbCfgAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEhfPrdWkbCfgAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEhfPrdWkbCfgAddin,"CATIEhfPrdWkbCfgAddin",CATIEhfPrdWkbCfgAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEhfPrdWkbCfgAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIEhfPrdWkbCfgAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEhfPrdWkbCfgAddin##classe(classe::MetaObject(),CATIEhfPrdWkbCfgAddin::MetaObject(),(void *)CreateTIECATIEhfPrdWkbCfgAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIEhfPrdWkbCfgAddin(classe) \
 \
 \
declare_TIE_CATIEhfPrdWkbCfgAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEhfPrdWkbCfgAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEhfPrdWkbCfgAddin,"CATIEhfPrdWkbCfgAddin",CATIEhfPrdWkbCfgAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEhfPrdWkbCfgAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIEhfPrdWkbCfgAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEhfPrdWkbCfgAddin##classe(classe::MetaObject(),CATIEhfPrdWkbCfgAddin::MetaObject(),(void *)CreateTIECATIEhfPrdWkbCfgAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIEhfPrdWkbCfgAddin(classe) TIE_CATIEhfPrdWkbCfgAddin(classe)
#else
#define BOA_CATIEhfPrdWkbCfgAddin(classe) CATImplementBOA(CATIEhfPrdWkbCfgAddin, classe)
#endif

#endif
