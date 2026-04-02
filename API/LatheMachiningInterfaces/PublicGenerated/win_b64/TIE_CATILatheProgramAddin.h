#ifndef __TIE_CATILatheProgramAddin
#define __TIE_CATILatheProgramAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATILatheProgramAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATILatheProgramAddin */
#define declare_TIE_CATILatheProgramAddin(classe) \
 \
 \
class TIECATILatheProgramAddin##classe : public CATILatheProgramAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATILatheProgramAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATILatheProgramAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATILatheProgramAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATILatheProgramAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATILatheProgramAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATILatheProgramAddin(classe)    TIECATILatheProgramAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATILatheProgramAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATILatheProgramAddin, classe) \
 \
 \
CATImplementTIEMethods(CATILatheProgramAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATILatheProgramAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATILatheProgramAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATILatheProgramAddin, classe) \
 \
void               TIECATILatheProgramAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATILatheProgramAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATILatheProgramAddin(classe) \
 \
 \
declare_TIE_CATILatheProgramAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATILatheProgramAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATILatheProgramAddin,"CATILatheProgramAddin",CATILatheProgramAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATILatheProgramAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATILatheProgramAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATILatheProgramAddin##classe(classe::MetaObject(),CATILatheProgramAddin::MetaObject(),(void *)CreateTIECATILatheProgramAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATILatheProgramAddin(classe) \
 \
 \
declare_TIE_CATILatheProgramAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATILatheProgramAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATILatheProgramAddin,"CATILatheProgramAddin",CATILatheProgramAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATILatheProgramAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATILatheProgramAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATILatheProgramAddin##classe(classe::MetaObject(),CATILatheProgramAddin::MetaObject(),(void *)CreateTIECATILatheProgramAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATILatheProgramAddin(classe) TIE_CATILatheProgramAddin(classe)
#else
#define BOA_CATILatheProgramAddin(classe) CATImplementBOA(CATILatheProgramAddin, classe)
#endif

#endif
