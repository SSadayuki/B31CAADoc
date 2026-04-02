#ifndef __TIE_CATICS0WKSAddin
#define __TIE_CATICS0WKSAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICS0WKSAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICS0WKSAddin */
#define declare_TIE_CATICS0WKSAddin(classe) \
 \
 \
class TIECATICS0WKSAddin##classe : public CATICS0WKSAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICS0WKSAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATICS0WKSAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATICS0WKSAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATICS0WKSAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATICS0WKSAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATICS0WKSAddin(classe)    TIECATICS0WKSAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATICS0WKSAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICS0WKSAddin, classe) \
 \
 \
CATImplementTIEMethods(CATICS0WKSAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICS0WKSAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICS0WKSAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICS0WKSAddin, classe) \
 \
void               TIECATICS0WKSAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATICS0WKSAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICS0WKSAddin(classe) \
 \
 \
declare_TIE_CATICS0WKSAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICS0WKSAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICS0WKSAddin,"CATICS0WKSAddin",CATICS0WKSAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICS0WKSAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICS0WKSAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICS0WKSAddin##classe(classe::MetaObject(),CATICS0WKSAddin::MetaObject(),(void *)CreateTIECATICS0WKSAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICS0WKSAddin(classe) \
 \
 \
declare_TIE_CATICS0WKSAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICS0WKSAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICS0WKSAddin,"CATICS0WKSAddin",CATICS0WKSAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICS0WKSAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICS0WKSAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICS0WKSAddin##classe(classe::MetaObject(),CATICS0WKSAddin::MetaObject(),(void *)CreateTIECATICS0WKSAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICS0WKSAddin(classe) TIE_CATICS0WKSAddin(classe)
#else
#define BOA_CATICS0WKSAddin(classe) CATImplementBOA(CATICS0WKSAddin, classe)
#endif

#endif
