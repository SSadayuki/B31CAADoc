#ifndef __TIE_CATIManufacturingProgramAddin
#define __TIE_CATIManufacturingProgramAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIManufacturingProgramAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIManufacturingProgramAddin */
#define declare_TIE_CATIManufacturingProgramAddin(classe) \
 \
 \
class TIECATIManufacturingProgramAddin##classe : public CATIManufacturingProgramAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIManufacturingProgramAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIManufacturingProgramAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIManufacturingProgramAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIManufacturingProgramAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIManufacturingProgramAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIManufacturingProgramAddin(classe)    TIECATIManufacturingProgramAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIManufacturingProgramAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIManufacturingProgramAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIManufacturingProgramAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIManufacturingProgramAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIManufacturingProgramAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIManufacturingProgramAddin, classe) \
 \
void               TIECATIManufacturingProgramAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIManufacturingProgramAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIManufacturingProgramAddin(classe) \
 \
 \
declare_TIE_CATIManufacturingProgramAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIManufacturingProgramAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIManufacturingProgramAddin,"CATIManufacturingProgramAddin",CATIManufacturingProgramAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIManufacturingProgramAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIManufacturingProgramAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIManufacturingProgramAddin##classe(classe::MetaObject(),CATIManufacturingProgramAddin::MetaObject(),(void *)CreateTIECATIManufacturingProgramAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIManufacturingProgramAddin(classe) \
 \
 \
declare_TIE_CATIManufacturingProgramAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIManufacturingProgramAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIManufacturingProgramAddin,"CATIManufacturingProgramAddin",CATIManufacturingProgramAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIManufacturingProgramAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIManufacturingProgramAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIManufacturingProgramAddin##classe(classe::MetaObject(),CATIManufacturingProgramAddin::MetaObject(),(void *)CreateTIECATIManufacturingProgramAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIManufacturingProgramAddin(classe) TIE_CATIManufacturingProgramAddin(classe)
#else
#define BOA_CATIManufacturingProgramAddin(classe) CATImplementBOA(CATIManufacturingProgramAddin, classe)
#endif

#endif
