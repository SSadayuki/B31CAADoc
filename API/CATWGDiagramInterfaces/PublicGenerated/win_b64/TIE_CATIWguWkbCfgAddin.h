#ifndef __TIE_CATIWguWkbCfgAddin
#define __TIE_CATIWguWkbCfgAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIWguWkbCfgAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIWguWkbCfgAddin */
#define declare_TIE_CATIWguWkbCfgAddin(classe) \
 \
 \
class TIECATIWguWkbCfgAddin##classe : public CATIWguWkbCfgAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIWguWkbCfgAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIWguWkbCfgAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIWguWkbCfgAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIWguWkbCfgAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIWguWkbCfgAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIWguWkbCfgAddin(classe)    TIECATIWguWkbCfgAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIWguWkbCfgAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIWguWkbCfgAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIWguWkbCfgAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIWguWkbCfgAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIWguWkbCfgAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIWguWkbCfgAddin, classe) \
 \
void               TIECATIWguWkbCfgAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIWguWkbCfgAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIWguWkbCfgAddin(classe) \
 \
 \
declare_TIE_CATIWguWkbCfgAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIWguWkbCfgAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIWguWkbCfgAddin,"CATIWguWkbCfgAddin",CATIWguWkbCfgAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIWguWkbCfgAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIWguWkbCfgAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIWguWkbCfgAddin##classe(classe::MetaObject(),CATIWguWkbCfgAddin::MetaObject(),(void *)CreateTIECATIWguWkbCfgAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIWguWkbCfgAddin(classe) \
 \
 \
declare_TIE_CATIWguWkbCfgAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIWguWkbCfgAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIWguWkbCfgAddin,"CATIWguWkbCfgAddin",CATIWguWkbCfgAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIWguWkbCfgAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIWguWkbCfgAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIWguWkbCfgAddin##classe(classe::MetaObject(),CATIWguWkbCfgAddin::MetaObject(),(void *)CreateTIECATIWguWkbCfgAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIWguWkbCfgAddin(classe) TIE_CATIWguWkbCfgAddin(classe)
#else
#define BOA_CATIWguWkbCfgAddin(classe) CATImplementBOA(CATIWguWkbCfgAddin, classe)
#endif

#endif
