#ifndef __TIE_CATISmgProgramAddin
#define __TIE_CATISmgProgramAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISmgProgramAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISmgProgramAddin */
#define declare_TIE_CATISmgProgramAddin(classe) \
 \
 \
class TIECATISmgProgramAddin##classe : public CATISmgProgramAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISmgProgramAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATISmgProgramAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATISmgProgramAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATISmgProgramAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATISmgProgramAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATISmgProgramAddin(classe)    TIECATISmgProgramAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATISmgProgramAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISmgProgramAddin, classe) \
 \
 \
CATImplementTIEMethods(CATISmgProgramAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISmgProgramAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISmgProgramAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISmgProgramAddin, classe) \
 \
void               TIECATISmgProgramAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATISmgProgramAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISmgProgramAddin(classe) \
 \
 \
declare_TIE_CATISmgProgramAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISmgProgramAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISmgProgramAddin,"CATISmgProgramAddin",CATISmgProgramAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISmgProgramAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISmgProgramAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISmgProgramAddin##classe(classe::MetaObject(),CATISmgProgramAddin::MetaObject(),(void *)CreateTIECATISmgProgramAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISmgProgramAddin(classe) \
 \
 \
declare_TIE_CATISmgProgramAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISmgProgramAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISmgProgramAddin,"CATISmgProgramAddin",CATISmgProgramAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISmgProgramAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISmgProgramAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISmgProgramAddin##classe(classe::MetaObject(),CATISmgProgramAddin::MetaObject(),(void *)CreateTIECATISmgProgramAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISmgProgramAddin(classe) TIE_CATISmgProgramAddin(classe)
#else
#define BOA_CATISmgProgramAddin(classe) CATImplementBOA(CATISmgProgramAddin, classe)
#endif

#endif
