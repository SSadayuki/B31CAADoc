#ifndef __TIE_CATIDRWFRAMEAddin
#define __TIE_CATIDRWFRAMEAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIDRWFRAMEAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIDRWFRAMEAddin */
#define declare_TIE_CATIDRWFRAMEAddin(classe) \
 \
 \
class TIECATIDRWFRAMEAddin##classe : public CATIDRWFRAMEAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIDRWFRAMEAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIDRWFRAMEAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIDRWFRAMEAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIDRWFRAMEAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIDRWFRAMEAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIDRWFRAMEAddin(classe)    TIECATIDRWFRAMEAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIDRWFRAMEAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIDRWFRAMEAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIDRWFRAMEAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIDRWFRAMEAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIDRWFRAMEAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIDRWFRAMEAddin, classe) \
 \
void               TIECATIDRWFRAMEAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIDRWFRAMEAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIDRWFRAMEAddin(classe) \
 \
 \
declare_TIE_CATIDRWFRAMEAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDRWFRAMEAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDRWFRAMEAddin,"CATIDRWFRAMEAddin",CATIDRWFRAMEAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDRWFRAMEAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIDRWFRAMEAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDRWFRAMEAddin##classe(classe::MetaObject(),CATIDRWFRAMEAddin::MetaObject(),(void *)CreateTIECATIDRWFRAMEAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIDRWFRAMEAddin(classe) \
 \
 \
declare_TIE_CATIDRWFRAMEAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDRWFRAMEAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDRWFRAMEAddin,"CATIDRWFRAMEAddin",CATIDRWFRAMEAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDRWFRAMEAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIDRWFRAMEAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDRWFRAMEAddin##classe(classe::MetaObject(),CATIDRWFRAMEAddin::MetaObject(),(void *)CreateTIECATIDRWFRAMEAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIDRWFRAMEAddin(classe) TIE_CATIDRWFRAMEAddin(classe)
#else
#define BOA_CATIDRWFRAMEAddin(classe) CATImplementBOA(CATIDRWFRAMEAddin, classe)
#endif

#endif
