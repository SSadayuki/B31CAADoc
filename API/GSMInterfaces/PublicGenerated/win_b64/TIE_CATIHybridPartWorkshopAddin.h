#ifndef __TIE_CATIHybridPartWorkshopAddin
#define __TIE_CATIHybridPartWorkshopAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIHybridPartWorkshopAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIHybridPartWorkshopAddin */
#define declare_TIE_CATIHybridPartWorkshopAddin(classe) \
 \
 \
class TIECATIHybridPartWorkshopAddin##classe : public CATIHybridPartWorkshopAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIHybridPartWorkshopAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIHybridPartWorkshopAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIHybridPartWorkshopAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIHybridPartWorkshopAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIHybridPartWorkshopAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIHybridPartWorkshopAddin(classe)    TIECATIHybridPartWorkshopAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIHybridPartWorkshopAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIHybridPartWorkshopAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIHybridPartWorkshopAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIHybridPartWorkshopAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIHybridPartWorkshopAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIHybridPartWorkshopAddin, classe) \
 \
void               TIECATIHybridPartWorkshopAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIHybridPartWorkshopAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIHybridPartWorkshopAddin(classe) \
 \
 \
declare_TIE_CATIHybridPartWorkshopAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIHybridPartWorkshopAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIHybridPartWorkshopAddin,"CATIHybridPartWorkshopAddin",CATIHybridPartWorkshopAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIHybridPartWorkshopAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIHybridPartWorkshopAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIHybridPartWorkshopAddin##classe(classe::MetaObject(),CATIHybridPartWorkshopAddin::MetaObject(),(void *)CreateTIECATIHybridPartWorkshopAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIHybridPartWorkshopAddin(classe) \
 \
 \
declare_TIE_CATIHybridPartWorkshopAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIHybridPartWorkshopAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIHybridPartWorkshopAddin,"CATIHybridPartWorkshopAddin",CATIHybridPartWorkshopAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIHybridPartWorkshopAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIHybridPartWorkshopAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIHybridPartWorkshopAddin##classe(classe::MetaObject(),CATIHybridPartWorkshopAddin::MetaObject(),(void *)CreateTIECATIHybridPartWorkshopAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIHybridPartWorkshopAddin(classe) TIE_CATIHybridPartWorkshopAddin(classe)
#else
#define BOA_CATIHybridPartWorkshopAddin(classe) CATImplementBOA(CATIHybridPartWorkshopAddin, classe)
#endif

#endif
