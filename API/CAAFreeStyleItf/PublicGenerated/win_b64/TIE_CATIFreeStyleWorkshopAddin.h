#ifndef __TIE_CATIFreeStyleWorkshopAddin
#define __TIE_CATIFreeStyleWorkshopAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIFreeStyleWorkshopAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIFreeStyleWorkshopAddin */
#define declare_TIE_CATIFreeStyleWorkshopAddin(classe) \
 \
 \
class TIECATIFreeStyleWorkshopAddin##classe : public CATIFreeStyleWorkshopAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIFreeStyleWorkshopAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIFreeStyleWorkshopAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIFreeStyleWorkshopAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIFreeStyleWorkshopAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIFreeStyleWorkshopAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIFreeStyleWorkshopAddin(classe)    TIECATIFreeStyleWorkshopAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIFreeStyleWorkshopAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIFreeStyleWorkshopAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIFreeStyleWorkshopAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIFreeStyleWorkshopAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIFreeStyleWorkshopAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIFreeStyleWorkshopAddin, classe) \
 \
void               TIECATIFreeStyleWorkshopAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIFreeStyleWorkshopAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIFreeStyleWorkshopAddin(classe) \
 \
 \
declare_TIE_CATIFreeStyleWorkshopAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIFreeStyleWorkshopAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIFreeStyleWorkshopAddin,"CATIFreeStyleWorkshopAddin",CATIFreeStyleWorkshopAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIFreeStyleWorkshopAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIFreeStyleWorkshopAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIFreeStyleWorkshopAddin##classe(classe::MetaObject(),CATIFreeStyleWorkshopAddin::MetaObject(),(void *)CreateTIECATIFreeStyleWorkshopAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIFreeStyleWorkshopAddin(classe) \
 \
 \
declare_TIE_CATIFreeStyleWorkshopAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIFreeStyleWorkshopAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIFreeStyleWorkshopAddin,"CATIFreeStyleWorkshopAddin",CATIFreeStyleWorkshopAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIFreeStyleWorkshopAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIFreeStyleWorkshopAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIFreeStyleWorkshopAddin##classe(classe::MetaObject(),CATIFreeStyleWorkshopAddin::MetaObject(),(void *)CreateTIECATIFreeStyleWorkshopAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIFreeStyleWorkshopAddin(classe) TIE_CATIFreeStyleWorkshopAddin(classe)
#else
#define BOA_CATIFreeStyleWorkshopAddin(classe) CATImplementBOA(CATIFreeStyleWorkshopAddin, classe)
#endif

#endif
