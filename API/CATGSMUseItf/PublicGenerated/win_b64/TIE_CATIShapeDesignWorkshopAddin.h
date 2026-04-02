#ifndef __TIE_CATIShapeDesignWorkshopAddin
#define __TIE_CATIShapeDesignWorkshopAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIShapeDesignWorkshopAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIShapeDesignWorkshopAddin */
#define declare_TIE_CATIShapeDesignWorkshopAddin(classe) \
 \
 \
class TIECATIShapeDesignWorkshopAddin##classe : public CATIShapeDesignWorkshopAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIShapeDesignWorkshopAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIShapeDesignWorkshopAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIShapeDesignWorkshopAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIShapeDesignWorkshopAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIShapeDesignWorkshopAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIShapeDesignWorkshopAddin(classe)    TIECATIShapeDesignWorkshopAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIShapeDesignWorkshopAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIShapeDesignWorkshopAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIShapeDesignWorkshopAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIShapeDesignWorkshopAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIShapeDesignWorkshopAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIShapeDesignWorkshopAddin, classe) \
 \
void               TIECATIShapeDesignWorkshopAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIShapeDesignWorkshopAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIShapeDesignWorkshopAddin(classe) \
 \
 \
declare_TIE_CATIShapeDesignWorkshopAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIShapeDesignWorkshopAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIShapeDesignWorkshopAddin,"CATIShapeDesignWorkshopAddin",CATIShapeDesignWorkshopAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIShapeDesignWorkshopAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIShapeDesignWorkshopAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIShapeDesignWorkshopAddin##classe(classe::MetaObject(),CATIShapeDesignWorkshopAddin::MetaObject(),(void *)CreateTIECATIShapeDesignWorkshopAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIShapeDesignWorkshopAddin(classe) \
 \
 \
declare_TIE_CATIShapeDesignWorkshopAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIShapeDesignWorkshopAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIShapeDesignWorkshopAddin,"CATIShapeDesignWorkshopAddin",CATIShapeDesignWorkshopAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIShapeDesignWorkshopAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIShapeDesignWorkshopAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIShapeDesignWorkshopAddin##classe(classe::MetaObject(),CATIShapeDesignWorkshopAddin::MetaObject(),(void *)CreateTIECATIShapeDesignWorkshopAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIShapeDesignWorkshopAddin(classe) TIE_CATIShapeDesignWorkshopAddin(classe)
#else
#define BOA_CATIShapeDesignWorkshopAddin(classe) CATImplementBOA(CATIShapeDesignWorkshopAddin, classe)
#endif

#endif
