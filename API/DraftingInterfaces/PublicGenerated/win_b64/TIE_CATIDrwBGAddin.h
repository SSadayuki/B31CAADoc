#ifndef __TIE_CATIDrwBGAddin
#define __TIE_CATIDrwBGAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIDrwBGAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIDrwBGAddin */
#define declare_TIE_CATIDrwBGAddin(classe) \
 \
 \
class TIECATIDrwBGAddin##classe : public CATIDrwBGAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIDrwBGAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIDrwBGAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIDrwBGAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIDrwBGAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIDrwBGAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIDrwBGAddin(classe)    TIECATIDrwBGAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIDrwBGAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIDrwBGAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIDrwBGAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIDrwBGAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIDrwBGAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIDrwBGAddin, classe) \
 \
void               TIECATIDrwBGAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIDrwBGAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIDrwBGAddin(classe) \
 \
 \
declare_TIE_CATIDrwBGAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDrwBGAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDrwBGAddin,"CATIDrwBGAddin",CATIDrwBGAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDrwBGAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIDrwBGAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDrwBGAddin##classe(classe::MetaObject(),CATIDrwBGAddin::MetaObject(),(void *)CreateTIECATIDrwBGAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIDrwBGAddin(classe) \
 \
 \
declare_TIE_CATIDrwBGAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDrwBGAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDrwBGAddin,"CATIDrwBGAddin",CATIDrwBGAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDrwBGAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIDrwBGAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDrwBGAddin##classe(classe::MetaObject(),CATIDrwBGAddin::MetaObject(),(void *)CreateTIECATIDrwBGAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIDrwBGAddin(classe) TIE_CATIDrwBGAddin(classe)
#else
#define BOA_CATIDrwBGAddin(classe) CATImplementBOA(CATIDrwBGAddin, classe)
#endif

#endif
