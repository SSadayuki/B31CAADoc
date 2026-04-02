#ifndef __TIE_CATICATSAMWorkshopAddin
#define __TIE_CATICATSAMWorkshopAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICATSAMWorkshopAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICATSAMWorkshopAddin */
#define declare_TIE_CATICATSAMWorkshopAddin(classe) \
 \
 \
class TIECATICATSAMWorkshopAddin##classe : public CATICATSAMWorkshopAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICATSAMWorkshopAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATICATSAMWorkshopAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATICATSAMWorkshopAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATICATSAMWorkshopAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATICATSAMWorkshopAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATICATSAMWorkshopAddin(classe)    TIECATICATSAMWorkshopAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATICATSAMWorkshopAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICATSAMWorkshopAddin, classe) \
 \
 \
CATImplementTIEMethods(CATICATSAMWorkshopAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICATSAMWorkshopAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICATSAMWorkshopAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICATSAMWorkshopAddin, classe) \
 \
void               TIECATICATSAMWorkshopAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATICATSAMWorkshopAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICATSAMWorkshopAddin(classe) \
 \
 \
declare_TIE_CATICATSAMWorkshopAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICATSAMWorkshopAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICATSAMWorkshopAddin,"CATICATSAMWorkshopAddin",CATICATSAMWorkshopAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICATSAMWorkshopAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICATSAMWorkshopAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICATSAMWorkshopAddin##classe(classe::MetaObject(),CATICATSAMWorkshopAddin::MetaObject(),(void *)CreateTIECATICATSAMWorkshopAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICATSAMWorkshopAddin(classe) \
 \
 \
declare_TIE_CATICATSAMWorkshopAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICATSAMWorkshopAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICATSAMWorkshopAddin,"CATICATSAMWorkshopAddin",CATICATSAMWorkshopAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICATSAMWorkshopAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICATSAMWorkshopAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICATSAMWorkshopAddin##classe(classe::MetaObject(),CATICATSAMWorkshopAddin::MetaObject(),(void *)CreateTIECATICATSAMWorkshopAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICATSAMWorkshopAddin(classe) TIE_CATICATSAMWorkshopAddin(classe)
#else
#define BOA_CATICATSAMWorkshopAddin(classe) CATImplementBOA(CATICATSAMWorkshopAddin, classe)
#endif

#endif
