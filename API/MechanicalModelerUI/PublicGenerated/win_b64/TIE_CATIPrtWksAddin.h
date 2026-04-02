#ifndef __TIE_CATIPrtWksAddin
#define __TIE_CATIPrtWksAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPrtWksAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPrtWksAddin */
#define declare_TIE_CATIPrtWksAddin(classe) \
 \
 \
class TIECATIPrtWksAddin##classe : public CATIPrtWksAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPrtWksAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIPrtWksAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIPrtWksAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIPrtWksAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIPrtWksAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPrtWksAddin(classe)    TIECATIPrtWksAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPrtWksAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPrtWksAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIPrtWksAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPrtWksAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPrtWksAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPrtWksAddin, classe) \
 \
void               TIECATIPrtWksAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIPrtWksAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPrtWksAddin(classe) \
 \
 \
declare_TIE_CATIPrtWksAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPrtWksAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPrtWksAddin,"CATIPrtWksAddin",CATIPrtWksAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPrtWksAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPrtWksAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPrtWksAddin##classe(classe::MetaObject(),CATIPrtWksAddin::MetaObject(),(void *)CreateTIECATIPrtWksAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPrtWksAddin(classe) \
 \
 \
declare_TIE_CATIPrtWksAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPrtWksAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPrtWksAddin,"CATIPrtWksAddin",CATIPrtWksAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPrtWksAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPrtWksAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPrtWksAddin##classe(classe::MetaObject(),CATIPrtWksAddin::MetaObject(),(void *)CreateTIECATIPrtWksAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPrtWksAddin(classe) TIE_CATIPrtWksAddin(classe)
#else
#define BOA_CATIPrtWksAddin(classe) CATImplementBOA(CATIPrtWksAddin, classe)
#endif

#endif
