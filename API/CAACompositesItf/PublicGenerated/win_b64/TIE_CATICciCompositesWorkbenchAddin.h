#ifndef __TIE_CATICciCompositesWorkbenchAddin
#define __TIE_CATICciCompositesWorkbenchAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICciCompositesWorkbenchAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICciCompositesWorkbenchAddin */
#define declare_TIE_CATICciCompositesWorkbenchAddin(classe) \
 \
 \
class TIECATICciCompositesWorkbenchAddin##classe : public CATICciCompositesWorkbenchAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICciCompositesWorkbenchAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATICciCompositesWorkbenchAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATICciCompositesWorkbenchAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATICciCompositesWorkbenchAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATICciCompositesWorkbenchAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATICciCompositesWorkbenchAddin(classe)    TIECATICciCompositesWorkbenchAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATICciCompositesWorkbenchAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICciCompositesWorkbenchAddin, classe) \
 \
 \
CATImplementTIEMethods(CATICciCompositesWorkbenchAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICciCompositesWorkbenchAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICciCompositesWorkbenchAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICciCompositesWorkbenchAddin, classe) \
 \
void               TIECATICciCompositesWorkbenchAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATICciCompositesWorkbenchAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICciCompositesWorkbenchAddin(classe) \
 \
 \
declare_TIE_CATICciCompositesWorkbenchAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciCompositesWorkbenchAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciCompositesWorkbenchAddin,"CATICciCompositesWorkbenchAddin",CATICciCompositesWorkbenchAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciCompositesWorkbenchAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICciCompositesWorkbenchAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciCompositesWorkbenchAddin##classe(classe::MetaObject(),CATICciCompositesWorkbenchAddin::MetaObject(),(void *)CreateTIECATICciCompositesWorkbenchAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICciCompositesWorkbenchAddin(classe) \
 \
 \
declare_TIE_CATICciCompositesWorkbenchAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICciCompositesWorkbenchAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICciCompositesWorkbenchAddin,"CATICciCompositesWorkbenchAddin",CATICciCompositesWorkbenchAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICciCompositesWorkbenchAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICciCompositesWorkbenchAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICciCompositesWorkbenchAddin##classe(classe::MetaObject(),CATICciCompositesWorkbenchAddin::MetaObject(),(void *)CreateTIECATICciCompositesWorkbenchAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICciCompositesWorkbenchAddin(classe) TIE_CATICciCompositesWorkbenchAddin(classe)
#else
#define BOA_CATICciCompositesWorkbenchAddin(classe) CATImplementBOA(CATICciCompositesWorkbenchAddin, classe)
#endif

#endif
