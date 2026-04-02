#ifndef __TIE_CATIAMGProgramAddin
#define __TIE_CATIAMGProgramAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIAMGProgramAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAMGProgramAddin */
#define declare_TIE_CATIAMGProgramAddin(classe) \
 \
 \
class TIECATIAMGProgramAddin##classe : public CATIAMGProgramAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAMGProgramAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIAMGProgramAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIAMGProgramAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIAMGProgramAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIAMGProgramAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAMGProgramAddin(classe)    TIECATIAMGProgramAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAMGProgramAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAMGProgramAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIAMGProgramAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAMGProgramAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAMGProgramAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAMGProgramAddin, classe) \
 \
void               TIECATIAMGProgramAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIAMGProgramAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAMGProgramAddin(classe) \
 \
 \
declare_TIE_CATIAMGProgramAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMGProgramAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMGProgramAddin,"CATIAMGProgramAddin",CATIAMGProgramAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMGProgramAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAMGProgramAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMGProgramAddin##classe(classe::MetaObject(),CATIAMGProgramAddin::MetaObject(),(void *)CreateTIECATIAMGProgramAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAMGProgramAddin(classe) \
 \
 \
declare_TIE_CATIAMGProgramAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAMGProgramAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAMGProgramAddin,"CATIAMGProgramAddin",CATIAMGProgramAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAMGProgramAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAMGProgramAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAMGProgramAddin##classe(classe::MetaObject(),CATIAMGProgramAddin::MetaObject(),(void *)CreateTIECATIAMGProgramAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAMGProgramAddin(classe) TIE_CATIAMGProgramAddin(classe)
#else
#define BOA_CATIAMGProgramAddin(classe) CATImplementBOA(CATIAMGProgramAddin, classe)
#endif

#endif
