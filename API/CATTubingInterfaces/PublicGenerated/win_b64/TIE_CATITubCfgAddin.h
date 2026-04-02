#ifndef __TIE_CATITubCfgAddin
#define __TIE_CATITubCfgAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATITubCfgAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATITubCfgAddin */
#define declare_TIE_CATITubCfgAddin(classe) \
 \
 \
class TIECATITubCfgAddin##classe : public CATITubCfgAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATITubCfgAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATITubCfgAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATITubCfgAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATITubCfgAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATITubCfgAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATITubCfgAddin(classe)    TIECATITubCfgAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATITubCfgAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATITubCfgAddin, classe) \
 \
 \
CATImplementTIEMethods(CATITubCfgAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATITubCfgAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATITubCfgAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATITubCfgAddin, classe) \
 \
void               TIECATITubCfgAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATITubCfgAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATITubCfgAddin(classe) \
 \
 \
declare_TIE_CATITubCfgAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATITubCfgAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATITubCfgAddin,"CATITubCfgAddin",CATITubCfgAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATITubCfgAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATITubCfgAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATITubCfgAddin##classe(classe::MetaObject(),CATITubCfgAddin::MetaObject(),(void *)CreateTIECATITubCfgAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATITubCfgAddin(classe) \
 \
 \
declare_TIE_CATITubCfgAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATITubCfgAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATITubCfgAddin,"CATITubCfgAddin",CATITubCfgAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATITubCfgAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATITubCfgAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATITubCfgAddin##classe(classe::MetaObject(),CATITubCfgAddin::MetaObject(),(void *)CreateTIECATITubCfgAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATITubCfgAddin(classe) TIE_CATITubCfgAddin(classe)
#else
#define BOA_CATITubCfgAddin(classe) CATImplementBOA(CATITubCfgAddin, classe)
#endif

#endif
