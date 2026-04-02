#ifndef __TIE_CATIDrwAddin
#define __TIE_CATIDrwAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIDrwAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIDrwAddin */
#define declare_TIE_CATIDrwAddin(classe) \
 \
 \
class TIECATIDrwAddin##classe : public CATIDrwAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIDrwAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIDrwAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIDrwAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIDrwAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIDrwAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIDrwAddin(classe)    TIECATIDrwAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIDrwAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIDrwAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIDrwAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIDrwAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIDrwAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIDrwAddin, classe) \
 \
void               TIECATIDrwAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIDrwAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIDrwAddin(classe) \
 \
 \
declare_TIE_CATIDrwAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDrwAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDrwAddin,"CATIDrwAddin",CATIDrwAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDrwAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIDrwAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDrwAddin##classe(classe::MetaObject(),CATIDrwAddin::MetaObject(),(void *)CreateTIECATIDrwAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIDrwAddin(classe) \
 \
 \
declare_TIE_CATIDrwAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDrwAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDrwAddin,"CATIDrwAddin",CATIDrwAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDrwAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIDrwAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDrwAddin##classe(classe::MetaObject(),CATIDrwAddin::MetaObject(),(void *)CreateTIECATIDrwAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIDrwAddin(classe) TIE_CATIDrwAddin(classe)
#else
#define BOA_CATIDrwAddin(classe) CATImplementBOA(CATIDrwAddin, classe)
#endif

#endif
