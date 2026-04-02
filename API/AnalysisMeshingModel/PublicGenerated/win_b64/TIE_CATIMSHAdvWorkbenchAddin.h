#ifndef __TIE_CATIMSHAdvWorkbenchAddin
#define __TIE_CATIMSHAdvWorkbenchAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIMSHAdvWorkbenchAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIMSHAdvWorkbenchAddin */
#define declare_TIE_CATIMSHAdvWorkbenchAddin(classe) \
 \
 \
class TIECATIMSHAdvWorkbenchAddin##classe : public CATIMSHAdvWorkbenchAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIMSHAdvWorkbenchAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIMSHAdvWorkbenchAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIMSHAdvWorkbenchAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIMSHAdvWorkbenchAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIMSHAdvWorkbenchAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIMSHAdvWorkbenchAddin(classe)    TIECATIMSHAdvWorkbenchAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIMSHAdvWorkbenchAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIMSHAdvWorkbenchAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIMSHAdvWorkbenchAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIMSHAdvWorkbenchAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIMSHAdvWorkbenchAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIMSHAdvWorkbenchAddin, classe) \
 \
void               TIECATIMSHAdvWorkbenchAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIMSHAdvWorkbenchAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIMSHAdvWorkbenchAddin(classe) \
 \
 \
declare_TIE_CATIMSHAdvWorkbenchAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMSHAdvWorkbenchAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMSHAdvWorkbenchAddin,"CATIMSHAdvWorkbenchAddin",CATIMSHAdvWorkbenchAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMSHAdvWorkbenchAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIMSHAdvWorkbenchAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMSHAdvWorkbenchAddin##classe(classe::MetaObject(),CATIMSHAdvWorkbenchAddin::MetaObject(),(void *)CreateTIECATIMSHAdvWorkbenchAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIMSHAdvWorkbenchAddin(classe) \
 \
 \
declare_TIE_CATIMSHAdvWorkbenchAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIMSHAdvWorkbenchAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIMSHAdvWorkbenchAddin,"CATIMSHAdvWorkbenchAddin",CATIMSHAdvWorkbenchAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIMSHAdvWorkbenchAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIMSHAdvWorkbenchAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIMSHAdvWorkbenchAddin##classe(classe::MetaObject(),CATIMSHAdvWorkbenchAddin::MetaObject(),(void *)CreateTIECATIMSHAdvWorkbenchAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIMSHAdvWorkbenchAddin(classe) TIE_CATIMSHAdvWorkbenchAddin(classe)
#else
#define BOA_CATIMSHAdvWorkbenchAddin(classe) CATImplementBOA(CATIMSHAdvWorkbenchAddin, classe)
#endif

#endif
