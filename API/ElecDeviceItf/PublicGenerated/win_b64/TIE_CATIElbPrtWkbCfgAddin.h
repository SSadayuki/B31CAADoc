#ifndef __TIE_CATIElbPrtWkbCfgAddin
#define __TIE_CATIElbPrtWkbCfgAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIElbPrtWkbCfgAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIElbPrtWkbCfgAddin */
#define declare_TIE_CATIElbPrtWkbCfgAddin(classe) \
 \
 \
class TIECATIElbPrtWkbCfgAddin##classe : public CATIElbPrtWkbCfgAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIElbPrtWkbCfgAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIElbPrtWkbCfgAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIElbPrtWkbCfgAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIElbPrtWkbCfgAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIElbPrtWkbCfgAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIElbPrtWkbCfgAddin(classe)    TIECATIElbPrtWkbCfgAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIElbPrtWkbCfgAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIElbPrtWkbCfgAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIElbPrtWkbCfgAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIElbPrtWkbCfgAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIElbPrtWkbCfgAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIElbPrtWkbCfgAddin, classe) \
 \
void               TIECATIElbPrtWkbCfgAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIElbPrtWkbCfgAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIElbPrtWkbCfgAddin(classe) \
 \
 \
declare_TIE_CATIElbPrtWkbCfgAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIElbPrtWkbCfgAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIElbPrtWkbCfgAddin,"CATIElbPrtWkbCfgAddin",CATIElbPrtWkbCfgAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIElbPrtWkbCfgAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIElbPrtWkbCfgAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIElbPrtWkbCfgAddin##classe(classe::MetaObject(),CATIElbPrtWkbCfgAddin::MetaObject(),(void *)CreateTIECATIElbPrtWkbCfgAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIElbPrtWkbCfgAddin(classe) \
 \
 \
declare_TIE_CATIElbPrtWkbCfgAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIElbPrtWkbCfgAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIElbPrtWkbCfgAddin,"CATIElbPrtWkbCfgAddin",CATIElbPrtWkbCfgAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIElbPrtWkbCfgAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIElbPrtWkbCfgAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIElbPrtWkbCfgAddin##classe(classe::MetaObject(),CATIElbPrtWkbCfgAddin::MetaObject(),(void *)CreateTIECATIElbPrtWkbCfgAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIElbPrtWkbCfgAddin(classe) TIE_CATIElbPrtWkbCfgAddin(classe)
#else
#define BOA_CATIElbPrtWkbCfgAddin(classe) CATImplementBOA(CATIElbPrtWkbCfgAddin, classe)
#endif

#endif
