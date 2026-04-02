#ifndef __TIE_CATIDMUFittingAddin
#define __TIE_CATIDMUFittingAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIDMUFittingAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIDMUFittingAddin */
#define declare_TIE_CATIDMUFittingAddin(classe) \
 \
 \
class TIECATIDMUFittingAddin##classe : public CATIDMUFittingAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIDMUFittingAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIDMUFittingAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIDMUFittingAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIDMUFittingAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIDMUFittingAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIDMUFittingAddin(classe)    TIECATIDMUFittingAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIDMUFittingAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIDMUFittingAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIDMUFittingAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIDMUFittingAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIDMUFittingAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIDMUFittingAddin, classe) \
 \
void               TIECATIDMUFittingAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIDMUFittingAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIDMUFittingAddin(classe) \
 \
 \
declare_TIE_CATIDMUFittingAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDMUFittingAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDMUFittingAddin,"CATIDMUFittingAddin",CATIDMUFittingAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDMUFittingAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIDMUFittingAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDMUFittingAddin##classe(classe::MetaObject(),CATIDMUFittingAddin::MetaObject(),(void *)CreateTIECATIDMUFittingAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIDMUFittingAddin(classe) \
 \
 \
declare_TIE_CATIDMUFittingAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDMUFittingAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDMUFittingAddin,"CATIDMUFittingAddin",CATIDMUFittingAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDMUFittingAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIDMUFittingAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDMUFittingAddin##classe(classe::MetaObject(),CATIDMUFittingAddin::MetaObject(),(void *)CreateTIECATIDMUFittingAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIDMUFittingAddin(classe) TIE_CATIDMUFittingAddin(classe)
#else
#define BOA_CATIDMUFittingAddin(classe) CATImplementBOA(CATIDMUFittingAddin, classe)
#endif

#endif
