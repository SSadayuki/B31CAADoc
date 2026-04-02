#ifndef __TIE_CATITPSCfgAddin
#define __TIE_CATITPSCfgAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATITPSCfgAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATITPSCfgAddin */
#define declare_TIE_CATITPSCfgAddin(classe) \
 \
 \
class TIECATITPSCfgAddin##classe : public CATITPSCfgAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATITPSCfgAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATITPSCfgAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATITPSCfgAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATITPSCfgAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATITPSCfgAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATITPSCfgAddin(classe)    TIECATITPSCfgAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATITPSCfgAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATITPSCfgAddin, classe) \
 \
 \
CATImplementTIEMethods(CATITPSCfgAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATITPSCfgAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATITPSCfgAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATITPSCfgAddin, classe) \
 \
void               TIECATITPSCfgAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATITPSCfgAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATITPSCfgAddin(classe) \
 \
 \
declare_TIE_CATITPSCfgAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATITPSCfgAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATITPSCfgAddin,"CATITPSCfgAddin",CATITPSCfgAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATITPSCfgAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATITPSCfgAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATITPSCfgAddin##classe(classe::MetaObject(),CATITPSCfgAddin::MetaObject(),(void *)CreateTIECATITPSCfgAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATITPSCfgAddin(classe) \
 \
 \
declare_TIE_CATITPSCfgAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATITPSCfgAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATITPSCfgAddin,"CATITPSCfgAddin",CATITPSCfgAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATITPSCfgAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATITPSCfgAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATITPSCfgAddin##classe(classe::MetaObject(),CATITPSCfgAddin::MetaObject(),(void *)CreateTIECATITPSCfgAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATITPSCfgAddin(classe) TIE_CATITPSCfgAddin(classe)
#else
#define BOA_CATITPSCfgAddin(classe) CATImplementBOA(CATITPSCfgAddin, classe)
#endif

#endif
