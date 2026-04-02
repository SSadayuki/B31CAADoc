#ifndef __TIE_CATI2DLBackWkbAddin
#define __TIE_CATI2DLBackWkbAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATI2DLBackWkbAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATI2DLBackWkbAddin */
#define declare_TIE_CATI2DLBackWkbAddin(classe) \
 \
 \
class TIECATI2DLBackWkbAddin##classe : public CATI2DLBackWkbAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATI2DLBackWkbAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATI2DLBackWkbAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATI2DLBackWkbAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATI2DLBackWkbAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATI2DLBackWkbAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATI2DLBackWkbAddin(classe)    TIECATI2DLBackWkbAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATI2DLBackWkbAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATI2DLBackWkbAddin, classe) \
 \
 \
CATImplementTIEMethods(CATI2DLBackWkbAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATI2DLBackWkbAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATI2DLBackWkbAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATI2DLBackWkbAddin, classe) \
 \
void               TIECATI2DLBackWkbAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATI2DLBackWkbAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATI2DLBackWkbAddin(classe) \
 \
 \
declare_TIE_CATI2DLBackWkbAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATI2DLBackWkbAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATI2DLBackWkbAddin,"CATI2DLBackWkbAddin",CATI2DLBackWkbAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATI2DLBackWkbAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATI2DLBackWkbAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATI2DLBackWkbAddin##classe(classe::MetaObject(),CATI2DLBackWkbAddin::MetaObject(),(void *)CreateTIECATI2DLBackWkbAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATI2DLBackWkbAddin(classe) \
 \
 \
declare_TIE_CATI2DLBackWkbAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATI2DLBackWkbAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATI2DLBackWkbAddin,"CATI2DLBackWkbAddin",CATI2DLBackWkbAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATI2DLBackWkbAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATI2DLBackWkbAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATI2DLBackWkbAddin##classe(classe::MetaObject(),CATI2DLBackWkbAddin::MetaObject(),(void *)CreateTIECATI2DLBackWkbAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATI2DLBackWkbAddin(classe) TIE_CATI2DLBackWkbAddin(classe)
#else
#define BOA_CATI2DLBackWkbAddin(classe) CATImplementBOA(CATI2DLBackWkbAddin, classe)
#endif

#endif
