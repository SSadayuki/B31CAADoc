#ifndef __TIE_CATIGPSCfgAddin
#define __TIE_CATIGPSCfgAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIGPSCfgAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIGPSCfgAddin */
#define declare_TIE_CATIGPSCfgAddin(classe) \
 \
 \
class TIECATIGPSCfgAddin##classe : public CATIGPSCfgAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIGPSCfgAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIGPSCfgAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIGPSCfgAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIGPSCfgAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIGPSCfgAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIGPSCfgAddin(classe)    TIECATIGPSCfgAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIGPSCfgAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIGPSCfgAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIGPSCfgAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIGPSCfgAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIGPSCfgAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIGPSCfgAddin, classe) \
 \
void               TIECATIGPSCfgAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIGPSCfgAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIGPSCfgAddin(classe) \
 \
 \
declare_TIE_CATIGPSCfgAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIGPSCfgAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIGPSCfgAddin,"CATIGPSCfgAddin",CATIGPSCfgAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIGPSCfgAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIGPSCfgAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIGPSCfgAddin##classe(classe::MetaObject(),CATIGPSCfgAddin::MetaObject(),(void *)CreateTIECATIGPSCfgAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIGPSCfgAddin(classe) \
 \
 \
declare_TIE_CATIGPSCfgAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIGPSCfgAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIGPSCfgAddin,"CATIGPSCfgAddin",CATIGPSCfgAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIGPSCfgAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIGPSCfgAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIGPSCfgAddin##classe(classe::MetaObject(),CATIGPSCfgAddin::MetaObject(),(void *)CreateTIECATIGPSCfgAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIGPSCfgAddin(classe) TIE_CATIGPSCfgAddin(classe)
#else
#define BOA_CATIGPSCfgAddin(classe) CATImplementBOA(CATIGPSCfgAddin, classe)
#endif

#endif
