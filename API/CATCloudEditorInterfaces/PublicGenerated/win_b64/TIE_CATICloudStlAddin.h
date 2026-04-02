#ifndef __TIE_CATICloudStlAddin
#define __TIE_CATICloudStlAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICloudStlAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICloudStlAddin */
#define declare_TIE_CATICloudStlAddin(classe) \
 \
 \
class TIECATICloudStlAddin##classe : public CATICloudStlAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICloudStlAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATICloudStlAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATICloudStlAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATICloudStlAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATICloudStlAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATICloudStlAddin(classe)    TIECATICloudStlAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATICloudStlAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICloudStlAddin, classe) \
 \
 \
CATImplementTIEMethods(CATICloudStlAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICloudStlAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICloudStlAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICloudStlAddin, classe) \
 \
void               TIECATICloudStlAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATICloudStlAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICloudStlAddin(classe) \
 \
 \
declare_TIE_CATICloudStlAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICloudStlAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICloudStlAddin,"CATICloudStlAddin",CATICloudStlAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICloudStlAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICloudStlAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICloudStlAddin##classe(classe::MetaObject(),CATICloudStlAddin::MetaObject(),(void *)CreateTIECATICloudStlAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICloudStlAddin(classe) \
 \
 \
declare_TIE_CATICloudStlAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICloudStlAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICloudStlAddin,"CATICloudStlAddin",CATICloudStlAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICloudStlAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICloudStlAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICloudStlAddin##classe(classe::MetaObject(),CATICloudStlAddin::MetaObject(),(void *)CreateTIECATICloudStlAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICloudStlAddin(classe) TIE_CATICloudStlAddin(classe)
#else
#define BOA_CATICloudStlAddin(classe) CATImplementBOA(CATICloudStlAddin, classe)
#endif

#endif
