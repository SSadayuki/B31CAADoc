#ifndef __TIE_CATICCSWorkbenchAddin
#define __TIE_CATICCSWorkbenchAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICCSWorkbenchAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICCSWorkbenchAddin */
#define declare_TIE_CATICCSWorkbenchAddin(classe) \
 \
 \
class TIECATICCSWorkbenchAddin##classe : public CATICCSWorkbenchAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICCSWorkbenchAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATICCSWorkbenchAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATICCSWorkbenchAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATICCSWorkbenchAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATICCSWorkbenchAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATICCSWorkbenchAddin(classe)    TIECATICCSWorkbenchAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATICCSWorkbenchAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICCSWorkbenchAddin, classe) \
 \
 \
CATImplementTIEMethods(CATICCSWorkbenchAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICCSWorkbenchAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICCSWorkbenchAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICCSWorkbenchAddin, classe) \
 \
void               TIECATICCSWorkbenchAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATICCSWorkbenchAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICCSWorkbenchAddin(classe) \
 \
 \
declare_TIE_CATICCSWorkbenchAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICCSWorkbenchAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICCSWorkbenchAddin,"CATICCSWorkbenchAddin",CATICCSWorkbenchAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICCSWorkbenchAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICCSWorkbenchAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICCSWorkbenchAddin##classe(classe::MetaObject(),CATICCSWorkbenchAddin::MetaObject(),(void *)CreateTIECATICCSWorkbenchAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICCSWorkbenchAddin(classe) \
 \
 \
declare_TIE_CATICCSWorkbenchAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICCSWorkbenchAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICCSWorkbenchAddin,"CATICCSWorkbenchAddin",CATICCSWorkbenchAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICCSWorkbenchAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICCSWorkbenchAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICCSWorkbenchAddin##classe(classe::MetaObject(),CATICCSWorkbenchAddin::MetaObject(),(void *)CreateTIECATICCSWorkbenchAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICCSWorkbenchAddin(classe) TIE_CATICCSWorkbenchAddin(classe)
#else
#define BOA_CATICCSWorkbenchAddin(classe) CATImplementBOA(CATICCSWorkbenchAddin, classe)
#endif

#endif
