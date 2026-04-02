#ifndef __TIE_CATIHvuWkbCfgAddin
#define __TIE_CATIHvuWkbCfgAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIHvuWkbCfgAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIHvuWkbCfgAddin */
#define declare_TIE_CATIHvuWkbCfgAddin(classe) \
 \
 \
class TIECATIHvuWkbCfgAddin##classe : public CATIHvuWkbCfgAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIHvuWkbCfgAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIHvuWkbCfgAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIHvuWkbCfgAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIHvuWkbCfgAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIHvuWkbCfgAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIHvuWkbCfgAddin(classe)    TIECATIHvuWkbCfgAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIHvuWkbCfgAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIHvuWkbCfgAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIHvuWkbCfgAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIHvuWkbCfgAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIHvuWkbCfgAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIHvuWkbCfgAddin, classe) \
 \
void               TIECATIHvuWkbCfgAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIHvuWkbCfgAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIHvuWkbCfgAddin(classe) \
 \
 \
declare_TIE_CATIHvuWkbCfgAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIHvuWkbCfgAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIHvuWkbCfgAddin,"CATIHvuWkbCfgAddin",CATIHvuWkbCfgAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIHvuWkbCfgAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIHvuWkbCfgAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIHvuWkbCfgAddin##classe(classe::MetaObject(),CATIHvuWkbCfgAddin::MetaObject(),(void *)CreateTIECATIHvuWkbCfgAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIHvuWkbCfgAddin(classe) \
 \
 \
declare_TIE_CATIHvuWkbCfgAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIHvuWkbCfgAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIHvuWkbCfgAddin,"CATIHvuWkbCfgAddin",CATIHvuWkbCfgAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIHvuWkbCfgAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIHvuWkbCfgAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIHvuWkbCfgAddin##classe(classe::MetaObject(),CATIHvuWkbCfgAddin::MetaObject(),(void *)CreateTIECATIHvuWkbCfgAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIHvuWkbCfgAddin(classe) TIE_CATIHvuWkbCfgAddin(classe)
#else
#define BOA_CATIHvuWkbCfgAddin(classe) CATImplementBOA(CATIHvuWkbCfgAddin, classe)
#endif

#endif
