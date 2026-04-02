#ifndef __TIE_CATI2DLMainWkbAddin
#define __TIE_CATI2DLMainWkbAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATI2DLMainWkbAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATI2DLMainWkbAddin */
#define declare_TIE_CATI2DLMainWkbAddin(classe) \
 \
 \
class TIECATI2DLMainWkbAddin##classe : public CATI2DLMainWkbAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATI2DLMainWkbAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATI2DLMainWkbAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATI2DLMainWkbAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATI2DLMainWkbAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATI2DLMainWkbAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATI2DLMainWkbAddin(classe)    TIECATI2DLMainWkbAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATI2DLMainWkbAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATI2DLMainWkbAddin, classe) \
 \
 \
CATImplementTIEMethods(CATI2DLMainWkbAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATI2DLMainWkbAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATI2DLMainWkbAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATI2DLMainWkbAddin, classe) \
 \
void               TIECATI2DLMainWkbAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATI2DLMainWkbAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATI2DLMainWkbAddin(classe) \
 \
 \
declare_TIE_CATI2DLMainWkbAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATI2DLMainWkbAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATI2DLMainWkbAddin,"CATI2DLMainWkbAddin",CATI2DLMainWkbAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATI2DLMainWkbAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATI2DLMainWkbAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATI2DLMainWkbAddin##classe(classe::MetaObject(),CATI2DLMainWkbAddin::MetaObject(),(void *)CreateTIECATI2DLMainWkbAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATI2DLMainWkbAddin(classe) \
 \
 \
declare_TIE_CATI2DLMainWkbAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATI2DLMainWkbAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATI2DLMainWkbAddin,"CATI2DLMainWkbAddin",CATI2DLMainWkbAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATI2DLMainWkbAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATI2DLMainWkbAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATI2DLMainWkbAddin##classe(classe::MetaObject(),CATI2DLMainWkbAddin::MetaObject(),(void *)CreateTIECATI2DLMainWkbAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATI2DLMainWkbAddin(classe) TIE_CATI2DLMainWkbAddin(classe)
#else
#define BOA_CATI2DLMainWkbAddin(classe) CATImplementBOA(CATI2DLMainWkbAddin, classe)
#endif

#endif
