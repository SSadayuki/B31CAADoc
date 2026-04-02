#ifndef __TIE_CATIKnowledgeAdvisorAddin
#define __TIE_CATIKnowledgeAdvisorAddin

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIKnowledgeAdvisorAddin.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIKnowledgeAdvisorAddin */
#define declare_TIE_CATIKnowledgeAdvisorAddin(classe) \
 \
 \
class TIECATIKnowledgeAdvisorAddin##classe : public CATIKnowledgeAdvisorAddin \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIKnowledgeAdvisorAddin, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands () ; \
      virtual CATCmdContainer * CreateToolbars () ; \
};



#define ENVTIEdeclare_CATIKnowledgeAdvisorAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands () ; \
virtual CATCmdContainer * CreateToolbars () ; \


#define ENVTIEdefine_CATIKnowledgeAdvisorAddin(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands ()  \
{ \
 (ENVTIECALL(CATIKnowledgeAdvisorAddin,ENVTIETypeLetter,ENVTIELetter)CreateCommands ()); \
} \
CATCmdContainer *  ENVTIEName::CreateToolbars ()  \
{ \
return (ENVTIECALL(CATIKnowledgeAdvisorAddin,ENVTIETypeLetter,ENVTIELetter)CreateToolbars ()); \
} \


/* Name of the TIE class */
#define class_TIE_CATIKnowledgeAdvisorAddin(classe)    TIECATIKnowledgeAdvisorAddin##classe


/* Common methods inside a TIE */
#define common_TIE_CATIKnowledgeAdvisorAddin(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIKnowledgeAdvisorAddin, classe) \
 \
 \
CATImplementTIEMethods(CATIKnowledgeAdvisorAddin, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIKnowledgeAdvisorAddin, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIKnowledgeAdvisorAddin, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIKnowledgeAdvisorAddin, classe) \
 \
void               TIECATIKnowledgeAdvisorAddin##classe::CreateCommands ()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands (); \
} \
CATCmdContainer *  TIECATIKnowledgeAdvisorAddin##classe::CreateToolbars ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateToolbars ()); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIKnowledgeAdvisorAddin(classe) \
 \
 \
declare_TIE_CATIKnowledgeAdvisorAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIKnowledgeAdvisorAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIKnowledgeAdvisorAddin,"CATIKnowledgeAdvisorAddin",CATIKnowledgeAdvisorAddin::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIKnowledgeAdvisorAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIKnowledgeAdvisorAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIKnowledgeAdvisorAddin##classe(classe::MetaObject(),CATIKnowledgeAdvisorAddin::MetaObject(),(void *)CreateTIECATIKnowledgeAdvisorAddin##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIKnowledgeAdvisorAddin(classe) \
 \
 \
declare_TIE_CATIKnowledgeAdvisorAddin(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIKnowledgeAdvisorAddin##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIKnowledgeAdvisorAddin,"CATIKnowledgeAdvisorAddin",CATIKnowledgeAdvisorAddin::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIKnowledgeAdvisorAddin(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIKnowledgeAdvisorAddin, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIKnowledgeAdvisorAddin##classe(classe::MetaObject(),CATIKnowledgeAdvisorAddin::MetaObject(),(void *)CreateTIECATIKnowledgeAdvisorAddin##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIKnowledgeAdvisorAddin(classe) TIE_CATIKnowledgeAdvisorAddin(classe)
#else
#define BOA_CATIKnowledgeAdvisorAddin(classe) CATImplementBOA(CATIKnowledgeAdvisorAddin, classe)
#endif

#endif
