#ifndef __TIE_CATIEhiPrtWkbCfgAddin
#define __TIE_CATIEhiPrtWkbCfgAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIEhiPrtWkbCfgAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIEhiPrtWkbCfgAddin */
#define declare_TIE_CATIEhiPrtWkbCfgAddin(classe) \
 \
 \
class TIECATIEhiPrtWkbCfgAddin##classe : public CATIEhiPrtWkbCfgAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIEhiPrtWkbCfgAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIEhiPrtWkbCfgAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIEhiPrtWkbCfgAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIEhiPrtWkbCfgAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIEhiPrtWkbCfgAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIEhiPrtWkbCfgAddin(classe)    TIECATIEhiPrtWkbCfgAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIEhiPrtWkbCfgAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIEhiPrtWkbCfgAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIEhiPrtWkbCfgAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIEhiPrtWkbCfgAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIEhiPrtWkbCfgAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIEhiPrtWkbCfgAddin, classe) \
 \
void               TIECATIEhiPrtWkbCfgAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIEhiPrtWkbCfgAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIEhiPrtWkbCfgAddin(classe) \
 \
 \
declare_TIE_CATIEhiPrtWkbCfgAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEhiPrtWkbCfgAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEhiPrtWkbCfgAddin,"CATIEhiPrtWkbCfgAddin",CATIEhiPrtWkbCfgAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEhiPrtWkbCfgAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIEhiPrtWkbCfgAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEhiPrtWkbCfgAddin##classe(classe::MetaObject(),CATIEhiPrtWkbCfgAddin::MetaObject(),(void *)CreateTIECATIEhiPrtWkbCfgAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIEhiPrtWkbCfgAddin(classe) \
 \
 \
declare_TIE_CATIEhiPrtWkbCfgAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIEhiPrtWkbCfgAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIEhiPrtWkbCfgAddin,"CATIEhiPrtWkbCfgAddin",CATIEhiPrtWkbCfgAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIEhiPrtWkbCfgAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIEhiPrtWkbCfgAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIEhiPrtWkbCfgAddin##classe(classe::MetaObject(),CATIEhiPrtWkbCfgAddin::MetaObject(),(void *)CreateTIECATIEhiPrtWkbCfgAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIEhiPrtWkbCfgAddin(classe) TIE_CATIEhiPrtWkbCfgAddin(classe)
#else
#define BOA_CATIEhiPrtWkbCfgAddin(classe) CATImplementBOA(CATIEhiPrtWkbCfgAddin, classe)
#endif

#endif
