#ifndef __TIE_CATIScuWksConfiguration
#define __TIE_CATIScuWksConfiguration

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIScuWksConfiguration.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIScuWksConfiguration */
#define declare_TIE_CATIScuWksConfiguration(classe) \
 \
 \
class TIECATIScuWksConfiguration##classe : public CATIScuWksConfiguration \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIScuWksConfiguration, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands() ; \
      virtual CATCmdWorkbench * CreateWorkbench() ; \
      virtual CATClassId        GetAddinInterface () ; \
      virtual void              GetCustomInterfaces(CATListPV * oDefaultIIDList, CATListPV * oCustomIIDList) ; \
};



#define ENVTIEdeclare_CATIScuWksConfiguration(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands() ; \
virtual CATCmdWorkbench * CreateWorkbench() ; \
virtual CATClassId        GetAddinInterface () ; \
virtual void              GetCustomInterfaces(CATListPV * oDefaultIIDList, CATListPV * oCustomIIDList) ; \


#define ENVTIEdefine_CATIScuWksConfiguration(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands()  \
{ \
 (ENVTIECALL(CATIScuWksConfiguration,ENVTIETypeLetter,ENVTIELetter)CreateCommands()); \
} \
CATCmdWorkbench *  ENVTIEName::CreateWorkbench()  \
{ \
return (ENVTIECALL(CATIScuWksConfiguration,ENVTIETypeLetter,ENVTIELetter)CreateWorkbench()); \
} \
CATClassId         ENVTIEName::GetAddinInterface ()  \
{ \
return (ENVTIECALL(CATIScuWksConfiguration,ENVTIETypeLetter,ENVTIELetter)GetAddinInterface ()); \
} \
void               ENVTIEName::GetCustomInterfaces(CATListPV * oDefaultIIDList, CATListPV * oCustomIIDList)  \
{ \
 (ENVTIECALL(CATIScuWksConfiguration,ENVTIETypeLetter,ENVTIELetter)GetCustomInterfaces(oDefaultIIDList,oCustomIIDList)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIScuWksConfiguration(classe)    TIECATIScuWksConfiguration##classe


/* Common methods inside a TIE */
#define common_TIE_CATIScuWksConfiguration(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIScuWksConfiguration, classe) \
 \
 \
CATImplementTIEMethods(CATIScuWksConfiguration, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIScuWksConfiguration, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIScuWksConfiguration, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIScuWksConfiguration, classe) \
 \
void               TIECATIScuWksConfiguration##classe::CreateCommands()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands(); \
} \
CATCmdWorkbench *  TIECATIScuWksConfiguration##classe::CreateWorkbench()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateWorkbench()); \
} \
CATClassId         TIECATIScuWksConfiguration##classe::GetAddinInterface ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAddinInterface ()); \
} \
void               TIECATIScuWksConfiguration##classe::GetCustomInterfaces(CATListPV * oDefaultIIDList, CATListPV * oCustomIIDList)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCustomInterfaces(oDefaultIIDList,oCustomIIDList); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIScuWksConfiguration(classe) \
 \
 \
declare_TIE_CATIScuWksConfiguration(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIScuWksConfiguration##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIScuWksConfiguration,"CATIScuWksConfiguration",CATIScuWksConfiguration::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIScuWksConfiguration(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIScuWksConfiguration, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIScuWksConfiguration##classe(classe::MetaObject(),CATIScuWksConfiguration::MetaObject(),(void *)CreateTIECATIScuWksConfiguration##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIScuWksConfiguration(classe) \
 \
 \
declare_TIE_CATIScuWksConfiguration(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIScuWksConfiguration##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIScuWksConfiguration,"CATIScuWksConfiguration",CATIScuWksConfiguration::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIScuWksConfiguration(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIScuWksConfiguration, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIScuWksConfiguration##classe(classe::MetaObject(),CATIScuWksConfiguration::MetaObject(),(void *)CreateTIECATIScuWksConfiguration##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIScuWksConfiguration(classe) TIE_CATIScuWksConfiguration(classe)
#else
#define BOA_CATIScuWksConfiguration(classe) CATImplementBOA(CATIScuWksConfiguration, classe)
#endif

#endif
