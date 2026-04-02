#ifndef __TIE_CATIDMUNavigatorAddin
#define __TIE_CATIDMUNavigatorAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIDMUNavigatorAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIDMUNavigatorAddin */
#define declare_TIE_CATIDMUNavigatorAddin(classe) \
 \
 \
class TIECATIDMUNavigatorAddin##classe : public CATIDMUNavigatorAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIDMUNavigatorAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIDMUNavigatorAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIDMUNavigatorAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIDMUNavigatorAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIDMUNavigatorAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIDMUNavigatorAddin(classe)    TIECATIDMUNavigatorAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIDMUNavigatorAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIDMUNavigatorAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIDMUNavigatorAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIDMUNavigatorAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIDMUNavigatorAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIDMUNavigatorAddin, classe) \
 \
void               TIECATIDMUNavigatorAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIDMUNavigatorAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIDMUNavigatorAddin(classe) \
 \
 \
declare_TIE_CATIDMUNavigatorAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDMUNavigatorAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDMUNavigatorAddin,"CATIDMUNavigatorAddin",CATIDMUNavigatorAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDMUNavigatorAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIDMUNavigatorAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDMUNavigatorAddin##classe(classe::MetaObject(),CATIDMUNavigatorAddin::MetaObject(),(void *)CreateTIECATIDMUNavigatorAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIDMUNavigatorAddin(classe) \
 \
 \
declare_TIE_CATIDMUNavigatorAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDMUNavigatorAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDMUNavigatorAddin,"CATIDMUNavigatorAddin",CATIDMUNavigatorAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDMUNavigatorAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIDMUNavigatorAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDMUNavigatorAddin##classe(classe::MetaObject(),CATIDMUNavigatorAddin::MetaObject(),(void *)CreateTIECATIDMUNavigatorAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIDMUNavigatorAddin(classe) TIE_CATIDMUNavigatorAddin(classe)
#else
#define BOA_CATIDMUNavigatorAddin(classe) CATImplementBOA(CATIDMUNavigatorAddin, classe)
#endif

#endif
