#ifndef __TIE_CATICATALOGWorkshopAddin
#define __TIE_CATICATALOGWorkshopAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICATALOGWorkshopAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICATALOGWorkshopAddin */
#define declare_TIE_CATICATALOGWorkshopAddin(classe) \
 \
 \
class TIECATICATALOGWorkshopAddin##classe : public CATICATALOGWorkshopAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICATALOGWorkshopAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATICATALOGWorkshopAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATICATALOGWorkshopAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATICATALOGWorkshopAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATICATALOGWorkshopAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATICATALOGWorkshopAddin(classe)    TIECATICATALOGWorkshopAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATICATALOGWorkshopAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICATALOGWorkshopAddin, classe) \
 \
 \
CATImplementTIEMethods(CATICATALOGWorkshopAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICATALOGWorkshopAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICATALOGWorkshopAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICATALOGWorkshopAddin, classe) \
 \
void               TIECATICATALOGWorkshopAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATICATALOGWorkshopAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICATALOGWorkshopAddin(classe) \
 \
 \
declare_TIE_CATICATALOGWorkshopAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICATALOGWorkshopAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICATALOGWorkshopAddin,"CATICATALOGWorkshopAddin",CATICATALOGWorkshopAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICATALOGWorkshopAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICATALOGWorkshopAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICATALOGWorkshopAddin##classe(classe::MetaObject(),CATICATALOGWorkshopAddin::MetaObject(),(void *)CreateTIECATICATALOGWorkshopAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICATALOGWorkshopAddin(classe) \
 \
 \
declare_TIE_CATICATALOGWorkshopAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICATALOGWorkshopAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICATALOGWorkshopAddin,"CATICATALOGWorkshopAddin",CATICATALOGWorkshopAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICATALOGWorkshopAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICATALOGWorkshopAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICATALOGWorkshopAddin##classe(classe::MetaObject(),CATICATALOGWorkshopAddin::MetaObject(),(void *)CreateTIECATICATALOGWorkshopAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICATALOGWorkshopAddin(classe) TIE_CATICATALOGWorkshopAddin(classe)
#else
#define BOA_CATICATALOGWorkshopAddin(classe) CATImplementBOA(CATICATALOGWorkshopAddin, classe)
#endif

#endif
