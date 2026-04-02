#ifndef __TIE_CATIElbPrdWkbCfgAddin
#define __TIE_CATIElbPrdWkbCfgAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIElbPrdWkbCfgAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIElbPrdWkbCfgAddin */
#define declare_TIE_CATIElbPrdWkbCfgAddin(classe) \
 \
 \
class TIECATIElbPrdWkbCfgAddin##classe : public CATIElbPrdWkbCfgAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIElbPrdWkbCfgAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIElbPrdWkbCfgAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIElbPrdWkbCfgAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIElbPrdWkbCfgAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIElbPrdWkbCfgAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIElbPrdWkbCfgAddin(classe)    TIECATIElbPrdWkbCfgAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIElbPrdWkbCfgAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIElbPrdWkbCfgAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIElbPrdWkbCfgAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIElbPrdWkbCfgAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIElbPrdWkbCfgAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIElbPrdWkbCfgAddin, classe) \
 \
void               TIECATIElbPrdWkbCfgAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIElbPrdWkbCfgAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIElbPrdWkbCfgAddin(classe) \
 \
 \
declare_TIE_CATIElbPrdWkbCfgAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIElbPrdWkbCfgAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIElbPrdWkbCfgAddin,"CATIElbPrdWkbCfgAddin",CATIElbPrdWkbCfgAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIElbPrdWkbCfgAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIElbPrdWkbCfgAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIElbPrdWkbCfgAddin##classe(classe::MetaObject(),CATIElbPrdWkbCfgAddin::MetaObject(),(void *)CreateTIECATIElbPrdWkbCfgAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIElbPrdWkbCfgAddin(classe) \
 \
 \
declare_TIE_CATIElbPrdWkbCfgAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIElbPrdWkbCfgAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIElbPrdWkbCfgAddin,"CATIElbPrdWkbCfgAddin",CATIElbPrdWkbCfgAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIElbPrdWkbCfgAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIElbPrdWkbCfgAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIElbPrdWkbCfgAddin##classe(classe::MetaObject(),CATIElbPrdWkbCfgAddin::MetaObject(),(void *)CreateTIECATIElbPrdWkbCfgAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIElbPrdWkbCfgAddin(classe) TIE_CATIElbPrdWkbCfgAddin(classe)
#else
#define BOA_CATIElbPrdWkbCfgAddin(classe) CATImplementBOA(CATIElbPrdWkbCfgAddin, classe)
#endif

#endif
