#ifndef __TIE_CATIPrtWksConfiguration
#define __TIE_CATIPrtWksConfiguration

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPrtWksConfiguration.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPrtWksConfiguration */
#define declare_TIE_CATIPrtWksConfiguration(classe) \
 \
 \
class TIECATIPrtWksConfiguration##classe : public CATIPrtWksConfiguration \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPrtWksConfiguration, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands() ; \
      virtual CATCmdWorkbench * CreateWorkbench() ; \
      virtual CATClassId        GetAddinInterface () ; \
      virtual void              GetCustomInterfaces(CATListPV * oDefaultIIDList, CATListPV * oCustomIIDList) ; \
};



#define ENVTIEdeclare_CATIPrtWksConfiguration(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands() ; \
virtual CATCmdWorkbench * CreateWorkbench() ; \
virtual CATClassId        GetAddinInterface () ; \
virtual void              GetCustomInterfaces(CATListPV * oDefaultIIDList, CATListPV * oCustomIIDList) ; \


#define ENVTIEdefine_CATIPrtWksConfiguration(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands()  \
{ \
 (ENVTIECALL(CATIPrtWksConfiguration,ENVTIETypeLetter,ENVTIELetter)CreateCommands()); \
} \
CATCmdWorkbench *  ENVTIEName::CreateWorkbench()  \
{ \
return (ENVTIECALL(CATIPrtWksConfiguration,ENVTIETypeLetter,ENVTIELetter)CreateWorkbench()); \
} \
CATClassId         ENVTIEName::GetAddinInterface ()  \
{ \
return (ENVTIECALL(CATIPrtWksConfiguration,ENVTIETypeLetter,ENVTIELetter)GetAddinInterface ()); \
} \
void               ENVTIEName::GetCustomInterfaces(CATListPV * oDefaultIIDList, CATListPV * oCustomIIDList)  \
{ \
 (ENVTIECALL(CATIPrtWksConfiguration,ENVTIETypeLetter,ENVTIELetter)GetCustomInterfaces(oDefaultIIDList,oCustomIIDList)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPrtWksConfiguration(classe)    TIECATIPrtWksConfiguration##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPrtWksConfiguration(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPrtWksConfiguration, classe) \
 \
 \
CATImplementTIEMethods(CATIPrtWksConfiguration, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPrtWksConfiguration, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPrtWksConfiguration, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPrtWksConfiguration, classe) \
 \
void               TIECATIPrtWksConfiguration##classe::CreateCommands()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands(); \
} \
CATCmdWorkbench *  TIECATIPrtWksConfiguration##classe::CreateWorkbench()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateWorkbench()); \
} \
CATClassId         TIECATIPrtWksConfiguration##classe::GetAddinInterface ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAddinInterface ()); \
} \
void               TIECATIPrtWksConfiguration##classe::GetCustomInterfaces(CATListPV * oDefaultIIDList, CATListPV * oCustomIIDList)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCustomInterfaces(oDefaultIIDList,oCustomIIDList); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPrtWksConfiguration(classe) \
 \
 \
declare_TIE_CATIPrtWksConfiguration(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPrtWksConfiguration##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPrtWksConfiguration,"CATIPrtWksConfiguration",CATIPrtWksConfiguration::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPrtWksConfiguration(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPrtWksConfiguration, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPrtWksConfiguration##classe(classe::MetaObject(),CATIPrtWksConfiguration::MetaObject(),(void *)CreateTIECATIPrtWksConfiguration##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPrtWksConfiguration(classe) \
 \
 \
declare_TIE_CATIPrtWksConfiguration(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPrtWksConfiguration##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPrtWksConfiguration,"CATIPrtWksConfiguration",CATIPrtWksConfiguration::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPrtWksConfiguration(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPrtWksConfiguration, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPrtWksConfiguration##classe(classe::MetaObject(),CATIPrtWksConfiguration::MetaObject(),(void *)CreateTIECATIPrtWksConfiguration##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPrtWksConfiguration(classe) TIE_CATIPrtWksConfiguration(classe)
#else
#define BOA_CATIPrtWksConfiguration(classe) CATImplementBOA(CATIPrtWksConfiguration, classe)
#endif

#endif
