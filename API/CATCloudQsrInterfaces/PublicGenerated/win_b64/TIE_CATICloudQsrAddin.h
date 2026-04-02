#ifndef __TIE_CATICloudQsrAddin
#define __TIE_CATICloudQsrAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATICloudQsrAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATICloudQsrAddin */
#define declare_TIE_CATICloudQsrAddin(classe) \
 \
 \
class TIECATICloudQsrAddin##classe : public CATICloudQsrAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATICloudQsrAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATICloudQsrAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATICloudQsrAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATICloudQsrAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATICloudQsrAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATICloudQsrAddin(classe)    TIECATICloudQsrAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATICloudQsrAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATICloudQsrAddin, classe) \
 \
 \
CATImplementTIEMethods(CATICloudQsrAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATICloudQsrAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATICloudQsrAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATICloudQsrAddin, classe) \
 \
void               TIECATICloudQsrAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATICloudQsrAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATICloudQsrAddin(classe) \
 \
 \
declare_TIE_CATICloudQsrAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICloudQsrAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICloudQsrAddin,"CATICloudQsrAddin",CATICloudQsrAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICloudQsrAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATICloudQsrAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICloudQsrAddin##classe(classe::MetaObject(),CATICloudQsrAddin::MetaObject(),(void *)CreateTIECATICloudQsrAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATICloudQsrAddin(classe) \
 \
 \
declare_TIE_CATICloudQsrAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATICloudQsrAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATICloudQsrAddin,"CATICloudQsrAddin",CATICloudQsrAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATICloudQsrAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATICloudQsrAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATICloudQsrAddin##classe(classe::MetaObject(),CATICloudQsrAddin::MetaObject(),(void *)CreateTIECATICloudQsrAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATICloudQsrAddin(classe) TIE_CATICloudQsrAddin(classe)
#else
#define BOA_CATICloudQsrAddin(classe) CATImplementBOA(CATICloudQsrAddin, classe)
#endif

#endif
