#ifndef __TIE_CATIPrsConfigurationAddin
#define __TIE_CATIPrsConfigurationAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPrsConfigurationAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPrsConfigurationAddin */
#define declare_TIE_CATIPrsConfigurationAddin(classe) \
 \
 \
class TIECATIPrsConfigurationAddin##classe : public CATIPrsConfigurationAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPrsConfigurationAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIPrsConfigurationAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIPrsConfigurationAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIPrsConfigurationAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIPrsConfigurationAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPrsConfigurationAddin(classe)    TIECATIPrsConfigurationAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPrsConfigurationAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPrsConfigurationAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIPrsConfigurationAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPrsConfigurationAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPrsConfigurationAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPrsConfigurationAddin, classe) \
 \
void               TIECATIPrsConfigurationAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIPrsConfigurationAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPrsConfigurationAddin(classe) \
 \
 \
declare_TIE_CATIPrsConfigurationAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPrsConfigurationAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPrsConfigurationAddin,"CATIPrsConfigurationAddin",CATIPrsConfigurationAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPrsConfigurationAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPrsConfigurationAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPrsConfigurationAddin##classe(classe::MetaObject(),CATIPrsConfigurationAddin::MetaObject(),(void *)CreateTIECATIPrsConfigurationAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPrsConfigurationAddin(classe) \
 \
 \
declare_TIE_CATIPrsConfigurationAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPrsConfigurationAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPrsConfigurationAddin,"CATIPrsConfigurationAddin",CATIPrsConfigurationAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPrsConfigurationAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPrsConfigurationAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPrsConfigurationAddin##classe(classe::MetaObject(),CATIPrsConfigurationAddin::MetaObject(),(void *)CreateTIECATIPrsConfigurationAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPrsConfigurationAddin(classe) TIE_CATIPrsConfigurationAddin(classe)
#else
#define BOA_CATIPrsConfigurationAddin(classe) CATImplementBOA(CATIPrsConfigurationAddin, classe)
#endif

#endif
