#ifndef __TIE_CATIPiuWkbCfgAddin
#define __TIE_CATIPiuWkbCfgAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPiuWkbCfgAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPiuWkbCfgAddin */
#define declare_TIE_CATIPiuWkbCfgAddin(classe) \
 \
 \
class TIECATIPiuWkbCfgAddin##classe : public CATIPiuWkbCfgAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPiuWkbCfgAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIPiuWkbCfgAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIPiuWkbCfgAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIPiuWkbCfgAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIPiuWkbCfgAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPiuWkbCfgAddin(classe)    TIECATIPiuWkbCfgAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPiuWkbCfgAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPiuWkbCfgAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIPiuWkbCfgAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPiuWkbCfgAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPiuWkbCfgAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPiuWkbCfgAddin, classe) \
 \
void               TIECATIPiuWkbCfgAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIPiuWkbCfgAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPiuWkbCfgAddin(classe) \
 \
 \
declare_TIE_CATIPiuWkbCfgAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPiuWkbCfgAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPiuWkbCfgAddin,"CATIPiuWkbCfgAddin",CATIPiuWkbCfgAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPiuWkbCfgAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPiuWkbCfgAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPiuWkbCfgAddin##classe(classe::MetaObject(),CATIPiuWkbCfgAddin::MetaObject(),(void *)CreateTIECATIPiuWkbCfgAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPiuWkbCfgAddin(classe) \
 \
 \
declare_TIE_CATIPiuWkbCfgAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPiuWkbCfgAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPiuWkbCfgAddin,"CATIPiuWkbCfgAddin",CATIPiuWkbCfgAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPiuWkbCfgAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPiuWkbCfgAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPiuWkbCfgAddin##classe(classe::MetaObject(),CATIPiuWkbCfgAddin::MetaObject(),(void *)CreateTIECATIPiuWkbCfgAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPiuWkbCfgAddin(classe) TIE_CATIPiuWkbCfgAddin(classe)
#else
#define BOA_CATIPiuWkbCfgAddin(classe) CATImplementBOA(CATIPiuWkbCfgAddin, classe)
#endif

#endif
