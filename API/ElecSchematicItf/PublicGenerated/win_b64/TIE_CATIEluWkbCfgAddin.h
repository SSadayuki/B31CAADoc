#ifndef __TIE_CATIEluWkbCfgAddin
#define __TIE_CATIEluWkbCfgAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIEluWkbCfgAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIEluWkbCfgAddin */
#define declare_TIE_CATIEluWkbCfgAddin(classe) \
 \
 \
class TIECATIEluWkbCfgAddin##classe : public CATIEluWkbCfgAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIEluWkbCfgAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIEluWkbCfgAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIEluWkbCfgAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIEluWkbCfgAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIEluWkbCfgAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIEluWkbCfgAddin(classe)    TIECATIEluWkbCfgAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIEluWkbCfgAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIEluWkbCfgAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIEluWkbCfgAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIEluWkbCfgAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIEluWkbCfgAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIEluWkbCfgAddin, classe) \
 \
void               TIECATIEluWkbCfgAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIEluWkbCfgAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIEluWkbCfgAddin(classe) \
 \
 \
declare_TIE_CATIEluWkbCfgAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEluWkbCfgAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEluWkbCfgAddin,"CATIEluWkbCfgAddin",CATIEluWkbCfgAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEluWkbCfgAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIEluWkbCfgAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEluWkbCfgAddin##classe(classe::MetaObject(),CATIEluWkbCfgAddin::MetaObject(),(void *)CreateTIECATIEluWkbCfgAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIEluWkbCfgAddin(classe) \
 \
 \
declare_TIE_CATIEluWkbCfgAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEluWkbCfgAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEluWkbCfgAddin,"CATIEluWkbCfgAddin",CATIEluWkbCfgAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEluWkbCfgAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIEluWkbCfgAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEluWkbCfgAddin##classe(classe::MetaObject(),CATIEluWkbCfgAddin::MetaObject(),(void *)CreateTIECATIEluWkbCfgAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIEluWkbCfgAddin(classe) TIE_CATIEluWkbCfgAddin(classe)
#else
#define BOA_CATIEluWkbCfgAddin(classe) CATImplementBOA(CATIEluWkbCfgAddin, classe)
#endif

#endif
