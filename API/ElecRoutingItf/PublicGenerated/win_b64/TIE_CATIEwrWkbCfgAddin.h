#ifndef __TIE_CATIEwrWkbCfgAddin
#define __TIE_CATIEwrWkbCfgAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIEwrWkbCfgAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIEwrWkbCfgAddin */
#define declare_TIE_CATIEwrWkbCfgAddin(classe) \
 \
 \
class TIECATIEwrWkbCfgAddin##classe : public CATIEwrWkbCfgAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIEwrWkbCfgAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIEwrWkbCfgAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIEwrWkbCfgAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIEwrWkbCfgAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIEwrWkbCfgAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIEwrWkbCfgAddin(classe)    TIECATIEwrWkbCfgAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIEwrWkbCfgAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIEwrWkbCfgAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIEwrWkbCfgAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIEwrWkbCfgAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIEwrWkbCfgAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIEwrWkbCfgAddin, classe) \
 \
void               TIECATIEwrWkbCfgAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIEwrWkbCfgAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIEwrWkbCfgAddin(classe) \
 \
 \
declare_TIE_CATIEwrWkbCfgAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEwrWkbCfgAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEwrWkbCfgAddin,"CATIEwrWkbCfgAddin",CATIEwrWkbCfgAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEwrWkbCfgAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIEwrWkbCfgAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEwrWkbCfgAddin##classe(classe::MetaObject(),CATIEwrWkbCfgAddin::MetaObject(),(void *)CreateTIECATIEwrWkbCfgAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIEwrWkbCfgAddin(classe) \
 \
 \
declare_TIE_CATIEwrWkbCfgAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEwrWkbCfgAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEwrWkbCfgAddin,"CATIEwrWkbCfgAddin",CATIEwrWkbCfgAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEwrWkbCfgAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIEwrWkbCfgAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEwrWkbCfgAddin##classe(classe::MetaObject(),CATIEwrWkbCfgAddin::MetaObject(),(void *)CreateTIECATIEwrWkbCfgAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIEwrWkbCfgAddin(classe) TIE_CATIEwrWkbCfgAddin(classe)
#else
#define BOA_CATIEwrWkbCfgAddin(classe) CATImplementBOA(CATIEwrWkbCfgAddin, classe)
#endif

#endif
