#ifndef __TIE_CATIPrtCfgAddin
#define __TIE_CATIPrtCfgAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPrtCfgAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPrtCfgAddin */
#define declare_TIE_CATIPrtCfgAddin(classe) \
 \
 \
class TIECATIPrtCfgAddin##classe : public CATIPrtCfgAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPrtCfgAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIPrtCfgAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIPrtCfgAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIPrtCfgAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIPrtCfgAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPrtCfgAddin(classe)    TIECATIPrtCfgAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPrtCfgAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPrtCfgAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIPrtCfgAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPrtCfgAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPrtCfgAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPrtCfgAddin, classe) \
 \
void               TIECATIPrtCfgAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIPrtCfgAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPrtCfgAddin(classe) \
 \
 \
declare_TIE_CATIPrtCfgAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPrtCfgAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPrtCfgAddin,"CATIPrtCfgAddin",CATIPrtCfgAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPrtCfgAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPrtCfgAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPrtCfgAddin##classe(classe::MetaObject(),CATIPrtCfgAddin::MetaObject(),(void *)CreateTIECATIPrtCfgAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPrtCfgAddin(classe) \
 \
 \
declare_TIE_CATIPrtCfgAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPrtCfgAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPrtCfgAddin,"CATIPrtCfgAddin",CATIPrtCfgAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPrtCfgAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPrtCfgAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPrtCfgAddin##classe(classe::MetaObject(),CATIPrtCfgAddin::MetaObject(),(void *)CreateTIECATIPrtCfgAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPrtCfgAddin(classe) TIE_CATIPrtCfgAddin(classe)
#else
#define BOA_CATIPrtCfgAddin(classe) CATImplementBOA(CATIPrtCfgAddin, classe)
#endif

#endif
