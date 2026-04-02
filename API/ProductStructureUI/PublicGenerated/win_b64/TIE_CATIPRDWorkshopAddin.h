#ifndef __TIE_CATIPRDWorkshopAddin
#define __TIE_CATIPRDWorkshopAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPRDWorkshopAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPRDWorkshopAddin */
#define declare_TIE_CATIPRDWorkshopAddin(classe) \
 \
 \
class TIECATIPRDWorkshopAddin##classe : public CATIPRDWorkshopAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPRDWorkshopAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIPRDWorkshopAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIPRDWorkshopAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIPRDWorkshopAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIPRDWorkshopAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPRDWorkshopAddin(classe)    TIECATIPRDWorkshopAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPRDWorkshopAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPRDWorkshopAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIPRDWorkshopAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPRDWorkshopAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPRDWorkshopAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPRDWorkshopAddin, classe) \
 \
void               TIECATIPRDWorkshopAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIPRDWorkshopAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPRDWorkshopAddin(classe) \
 \
 \
declare_TIE_CATIPRDWorkshopAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPRDWorkshopAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPRDWorkshopAddin,"CATIPRDWorkshopAddin",CATIPRDWorkshopAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPRDWorkshopAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPRDWorkshopAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPRDWorkshopAddin##classe(classe::MetaObject(),CATIPRDWorkshopAddin::MetaObject(),(void *)CreateTIECATIPRDWorkshopAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPRDWorkshopAddin(classe) \
 \
 \
declare_TIE_CATIPRDWorkshopAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPRDWorkshopAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPRDWorkshopAddin,"CATIPRDWorkshopAddin",CATIPRDWorkshopAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPRDWorkshopAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPRDWorkshopAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPRDWorkshopAddin##classe(classe::MetaObject(),CATIPRDWorkshopAddin::MetaObject(),(void *)CreateTIECATIPRDWorkshopAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPRDWorkshopAddin(classe) TIE_CATIPRDWorkshopAddin(classe)
#else
#define BOA_CATIPRDWorkshopAddin(classe) CATImplementBOA(CATIPRDWorkshopAddin, classe)
#endif

#endif
