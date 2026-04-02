#ifndef __TIE_CATITbuWkbCfgAddin
#define __TIE_CATITbuWkbCfgAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATITbuWkbCfgAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATITbuWkbCfgAddin */
#define declare_TIE_CATITbuWkbCfgAddin(classe) \
 \
 \
class TIECATITbuWkbCfgAddin##classe : public CATITbuWkbCfgAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATITbuWkbCfgAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATITbuWkbCfgAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATITbuWkbCfgAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATITbuWkbCfgAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATITbuWkbCfgAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATITbuWkbCfgAddin(classe)    TIECATITbuWkbCfgAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATITbuWkbCfgAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATITbuWkbCfgAddin, classe) \
 \
 \
CATImplementTIEMethods(CATITbuWkbCfgAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATITbuWkbCfgAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATITbuWkbCfgAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATITbuWkbCfgAddin, classe) \
 \
void               TIECATITbuWkbCfgAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATITbuWkbCfgAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATITbuWkbCfgAddin(classe) \
 \
 \
declare_TIE_CATITbuWkbCfgAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATITbuWkbCfgAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATITbuWkbCfgAddin,"CATITbuWkbCfgAddin",CATITbuWkbCfgAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATITbuWkbCfgAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATITbuWkbCfgAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATITbuWkbCfgAddin##classe(classe::MetaObject(),CATITbuWkbCfgAddin::MetaObject(),(void *)CreateTIECATITbuWkbCfgAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATITbuWkbCfgAddin(classe) \
 \
 \
declare_TIE_CATITbuWkbCfgAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATITbuWkbCfgAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATITbuWkbCfgAddin,"CATITbuWkbCfgAddin",CATITbuWkbCfgAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATITbuWkbCfgAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATITbuWkbCfgAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATITbuWkbCfgAddin##classe(classe::MetaObject(),CATITbuWkbCfgAddin::MetaObject(),(void *)CreateTIECATITbuWkbCfgAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATITbuWkbCfgAddin(classe) TIE_CATITbuWkbCfgAddin(classe)
#else
#define BOA_CATITbuWkbCfgAddin(classe) CATImplementBOA(CATITbuWkbCfgAddin, classe)
#endif

#endif
