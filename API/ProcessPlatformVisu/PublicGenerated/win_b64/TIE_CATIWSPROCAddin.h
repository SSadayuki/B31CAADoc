#ifndef __TIE_CATIWSPROCAddin
#define __TIE_CATIWSPROCAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIWSPROCAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIWSPROCAddin */
#define declare_TIE_CATIWSPROCAddin(classe) \
 \
 \
class TIECATIWSPROCAddin##classe : public CATIWSPROCAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIWSPROCAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIWSPROCAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIWSPROCAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIWSPROCAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIWSPROCAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIWSPROCAddin(classe)    TIECATIWSPROCAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIWSPROCAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIWSPROCAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIWSPROCAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIWSPROCAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIWSPROCAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIWSPROCAddin, classe) \
 \
void               TIECATIWSPROCAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIWSPROCAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIWSPROCAddin(classe) \
 \
 \
declare_TIE_CATIWSPROCAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIWSPROCAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIWSPROCAddin,"CATIWSPROCAddin",CATIWSPROCAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIWSPROCAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIWSPROCAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIWSPROCAddin##classe(classe::MetaObject(),CATIWSPROCAddin::MetaObject(),(void *)CreateTIECATIWSPROCAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIWSPROCAddin(classe) \
 \
 \
declare_TIE_CATIWSPROCAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIWSPROCAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIWSPROCAddin,"CATIWSPROCAddin",CATIWSPROCAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIWSPROCAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIWSPROCAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIWSPROCAddin##classe(classe::MetaObject(),CATIWSPROCAddin::MetaObject(),(void *)CreateTIECATIWSPROCAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIWSPROCAddin(classe) TIE_CATIWSPROCAddin(classe)
#else
#define BOA_CATIWSPROCAddin(classe) CATImplementBOA(CATIWSPROCAddin, classe)
#endif

#endif
