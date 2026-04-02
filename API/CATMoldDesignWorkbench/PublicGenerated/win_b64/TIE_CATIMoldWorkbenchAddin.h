#ifndef __TIE_CATIMoldWorkbenchAddin
#define __TIE_CATIMoldWorkbenchAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMoldWorkbenchAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMoldWorkbenchAddin */
#define declare_TIE_CATIMoldWorkbenchAddin(classe) \
 \
 \
class TIECATIMoldWorkbenchAddin##classe : public CATIMoldWorkbenchAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMoldWorkbenchAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIMoldWorkbenchAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIMoldWorkbenchAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIMoldWorkbenchAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIMoldWorkbenchAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMoldWorkbenchAddin(classe)    TIECATIMoldWorkbenchAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMoldWorkbenchAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMoldWorkbenchAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIMoldWorkbenchAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMoldWorkbenchAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMoldWorkbenchAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMoldWorkbenchAddin, classe) \
 \
void               TIECATIMoldWorkbenchAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIMoldWorkbenchAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMoldWorkbenchAddin(classe) \
 \
 \
declare_TIE_CATIMoldWorkbenchAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMoldWorkbenchAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMoldWorkbenchAddin,"CATIMoldWorkbenchAddin",CATIMoldWorkbenchAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMoldWorkbenchAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMoldWorkbenchAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMoldWorkbenchAddin##classe(classe::MetaObject(),CATIMoldWorkbenchAddin::MetaObject(),(void *)CreateTIECATIMoldWorkbenchAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMoldWorkbenchAddin(classe) \
 \
 \
declare_TIE_CATIMoldWorkbenchAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMoldWorkbenchAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMoldWorkbenchAddin,"CATIMoldWorkbenchAddin",CATIMoldWorkbenchAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMoldWorkbenchAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMoldWorkbenchAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMoldWorkbenchAddin##classe(classe::MetaObject(),CATIMoldWorkbenchAddin::MetaObject(),(void *)CreateTIECATIMoldWorkbenchAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMoldWorkbenchAddin(classe) TIE_CATIMoldWorkbenchAddin(classe)
#else
#define BOA_CATIMoldWorkbenchAddin(classe) CATImplementBOA(CATIMoldWorkbenchAddin, classe)
#endif

#endif
