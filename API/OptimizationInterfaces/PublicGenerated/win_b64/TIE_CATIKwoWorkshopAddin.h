#ifndef __TIE_CATIKwoWorkshopAddin
#define __TIE_CATIKwoWorkshopAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIKwoWorkshopAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIKwoWorkshopAddin */
#define declare_TIE_CATIKwoWorkshopAddin(classe) \
 \
 \
class TIECATIKwoWorkshopAddin##classe : public CATIKwoWorkshopAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIKwoWorkshopAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIKwoWorkshopAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIKwoWorkshopAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIKwoWorkshopAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIKwoWorkshopAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIKwoWorkshopAddin(classe)    TIECATIKwoWorkshopAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIKwoWorkshopAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIKwoWorkshopAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIKwoWorkshopAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIKwoWorkshopAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIKwoWorkshopAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIKwoWorkshopAddin, classe) \
 \
void               TIECATIKwoWorkshopAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIKwoWorkshopAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIKwoWorkshopAddin(classe) \
 \
 \
declare_TIE_CATIKwoWorkshopAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIKwoWorkshopAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIKwoWorkshopAddin,"CATIKwoWorkshopAddin",CATIKwoWorkshopAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIKwoWorkshopAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIKwoWorkshopAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIKwoWorkshopAddin##classe(classe::MetaObject(),CATIKwoWorkshopAddin::MetaObject(),(void *)CreateTIECATIKwoWorkshopAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIKwoWorkshopAddin(classe) \
 \
 \
declare_TIE_CATIKwoWorkshopAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIKwoWorkshopAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIKwoWorkshopAddin,"CATIKwoWorkshopAddin",CATIKwoWorkshopAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIKwoWorkshopAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIKwoWorkshopAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIKwoWorkshopAddin##classe(classe::MetaObject(),CATIKwoWorkshopAddin::MetaObject(),(void *)CreateTIECATIKwoWorkshopAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIKwoWorkshopAddin(classe) TIE_CATIKwoWorkshopAddin(classe)
#else
#define BOA_CATIKwoWorkshopAddin(classe) CATImplementBOA(CATIKwoWorkshopAddin, classe)
#endif

#endif
