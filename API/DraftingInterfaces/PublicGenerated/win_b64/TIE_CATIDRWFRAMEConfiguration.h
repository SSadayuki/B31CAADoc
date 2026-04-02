#ifndef __TIE_CATIDRWFRAMEConfiguration
#define __TIE_CATIDRWFRAMEConfiguration

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIDRWFRAMEConfiguration.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIDRWFRAMEConfiguration */
#define declare_TIE_CATIDRWFRAMEConfiguration(classe) \
 \
 \
class TIECATIDRWFRAMEConfiguration##classe : public CATIDRWFRAMEConfiguration \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIDRWFRAMEConfiguration, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands() ; \
      virtual CATCmdWorkbench * CreateWorkbench() ; \
      virtual CATClassId        GetAddinInterface () ; \
      virtual void              GetCustomInterfaces(CATListPV * oDefaultIIDList, CATListPV * oCustomIIDList) ; \
};



#define ENVTIEdeclare_CATIDRWFRAMEConfiguration(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands() ; \
virtual CATCmdWorkbench * CreateWorkbench() ; \
virtual CATClassId        GetAddinInterface () ; \
virtual void              GetCustomInterfaces(CATListPV * oDefaultIIDList, CATListPV * oCustomIIDList) ; \


#define ENVTIEdefine_CATIDRWFRAMEConfiguration(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands()  \
{ \
 (ENVTIECALL(CATIDRWFRAMEConfiguration,ENVTIETypeLetter,ENVTIELetter)CreateCommands()); \
} \
CATCmdWorkbench *  ENVTIEName::CreateWorkbench()  \
{ \
return (ENVTIECALL(CATIDRWFRAMEConfiguration,ENVTIETypeLetter,ENVTIELetter)CreateWorkbench()); \
} \
CATClassId         ENVTIEName::GetAddinInterface ()  \
{ \
return (ENVTIECALL(CATIDRWFRAMEConfiguration,ENVTIETypeLetter,ENVTIELetter)GetAddinInterface ()); \
} \
void               ENVTIEName::GetCustomInterfaces(CATListPV * oDefaultIIDList, CATListPV * oCustomIIDList)  \
{ \
 (ENVTIECALL(CATIDRWFRAMEConfiguration,ENVTIETypeLetter,ENVTIELetter)GetCustomInterfaces(oDefaultIIDList,oCustomIIDList)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIDRWFRAMEConfiguration(classe)    TIECATIDRWFRAMEConfiguration##classe


/* Common methods inside a TIE */
#define common_TIE_CATIDRWFRAMEConfiguration(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIDRWFRAMEConfiguration, classe) \
 \
 \
CATImplementTIEMethods(CATIDRWFRAMEConfiguration, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIDRWFRAMEConfiguration, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIDRWFRAMEConfiguration, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIDRWFRAMEConfiguration, classe) \
 \
void               TIECATIDRWFRAMEConfiguration##classe::CreateCommands()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands(); \
} \
CATCmdWorkbench *  TIECATIDRWFRAMEConfiguration##classe::CreateWorkbench()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateWorkbench()); \
} \
CATClassId         TIECATIDRWFRAMEConfiguration##classe::GetAddinInterface ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAddinInterface ()); \
} \
void               TIECATIDRWFRAMEConfiguration##classe::GetCustomInterfaces(CATListPV * oDefaultIIDList, CATListPV * oCustomIIDList)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCustomInterfaces(oDefaultIIDList,oCustomIIDList); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIDRWFRAMEConfiguration(classe) \
 \
 \
declare_TIE_CATIDRWFRAMEConfiguration(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDRWFRAMEConfiguration##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDRWFRAMEConfiguration,"CATIDRWFRAMEConfiguration",CATIDRWFRAMEConfiguration::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDRWFRAMEConfiguration(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIDRWFRAMEConfiguration, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDRWFRAMEConfiguration##classe(classe::MetaObject(),CATIDRWFRAMEConfiguration::MetaObject(),(void *)CreateTIECATIDRWFRAMEConfiguration##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIDRWFRAMEConfiguration(classe) \
 \
 \
declare_TIE_CATIDRWFRAMEConfiguration(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIDRWFRAMEConfiguration##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIDRWFRAMEConfiguration,"CATIDRWFRAMEConfiguration",CATIDRWFRAMEConfiguration::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIDRWFRAMEConfiguration(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIDRWFRAMEConfiguration, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIDRWFRAMEConfiguration##classe(classe::MetaObject(),CATIDRWFRAMEConfiguration::MetaObject(),(void *)CreateTIECATIDRWFRAMEConfiguration##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIDRWFRAMEConfiguration(classe) TIE_CATIDRWFRAMEConfiguration(classe)
#else
#define BOA_CATIDRWFRAMEConfiguration(classe) CATImplementBOA(CATIDRWFRAMEConfiguration, classe)
#endif

#endif
