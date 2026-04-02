#ifndef __TIE_CATIPRDWorkshopConfiguration
#define __TIE_CATIPRDWorkshopConfiguration

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIPRDWorkshopConfiguration.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIPRDWorkshopConfiguration */
#define declare_TIE_CATIPRDWorkshopConfiguration(classe) \
 \
 \
class TIECATIPRDWorkshopConfiguration##classe : public CATIPRDWorkshopConfiguration \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIPRDWorkshopConfiguration, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands() ; \
      virtual CATCmdWorkbench * CreateWorkbench() ; \
      virtual CATClassId        GetAddinInterface () ; \
      virtual void              GetCustomInterfaces(CATListPV * oDefaultIIDList, CATListPV * oCustomIIDList) ; \
};



#define ENVTIEdeclare_CATIPRDWorkshopConfiguration(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands() ; \
virtual CATCmdWorkbench * CreateWorkbench() ; \
virtual CATClassId        GetAddinInterface () ; \
virtual void              GetCustomInterfaces(CATListPV * oDefaultIIDList, CATListPV * oCustomIIDList) ; \


#define ENVTIEdefine_CATIPRDWorkshopConfiguration(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands()  \
{ \
 (ENVTIECALL(CATIPRDWorkshopConfiguration,ENVTIETypeLetter,ENVTIELetter)CreateCommands()); \
} \
CATCmdWorkbench *  ENVTIEName::CreateWorkbench()  \
{ \
return (ENVTIECALL(CATIPRDWorkshopConfiguration,ENVTIETypeLetter,ENVTIELetter)CreateWorkbench()); \
} \
CATClassId         ENVTIEName::GetAddinInterface ()  \
{ \
return (ENVTIECALL(CATIPRDWorkshopConfiguration,ENVTIETypeLetter,ENVTIELetter)GetAddinInterface ()); \
} \
void               ENVTIEName::GetCustomInterfaces(CATListPV * oDefaultIIDList, CATListPV * oCustomIIDList)  \
{ \
 (ENVTIECALL(CATIPRDWorkshopConfiguration,ENVTIETypeLetter,ENVTIELetter)GetCustomInterfaces(oDefaultIIDList,oCustomIIDList)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIPRDWorkshopConfiguration(classe)    TIECATIPRDWorkshopConfiguration##classe


/* Common methods inside a TIE */
#define common_TIE_CATIPRDWorkshopConfiguration(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIPRDWorkshopConfiguration, classe) \
 \
 \
CATImplementTIEMethods(CATIPRDWorkshopConfiguration, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIPRDWorkshopConfiguration, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIPRDWorkshopConfiguration, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIPRDWorkshopConfiguration, classe) \
 \
void               TIECATIPRDWorkshopConfiguration##classe::CreateCommands()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands(); \
} \
CATCmdWorkbench *  TIECATIPRDWorkshopConfiguration##classe::CreateWorkbench()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateWorkbench()); \
} \
CATClassId         TIECATIPRDWorkshopConfiguration##classe::GetAddinInterface ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAddinInterface ()); \
} \
void               TIECATIPRDWorkshopConfiguration##classe::GetCustomInterfaces(CATListPV * oDefaultIIDList, CATListPV * oCustomIIDList)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCustomInterfaces(oDefaultIIDList,oCustomIIDList); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIPRDWorkshopConfiguration(classe) \
 \
 \
declare_TIE_CATIPRDWorkshopConfiguration(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPRDWorkshopConfiguration##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPRDWorkshopConfiguration,"CATIPRDWorkshopConfiguration",CATIPRDWorkshopConfiguration::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPRDWorkshopConfiguration(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIPRDWorkshopConfiguration, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPRDWorkshopConfiguration##classe(classe::MetaObject(),CATIPRDWorkshopConfiguration::MetaObject(),(void *)CreateTIECATIPRDWorkshopConfiguration##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIPRDWorkshopConfiguration(classe) \
 \
 \
declare_TIE_CATIPRDWorkshopConfiguration(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIPRDWorkshopConfiguration##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIPRDWorkshopConfiguration,"CATIPRDWorkshopConfiguration",CATIPRDWorkshopConfiguration::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIPRDWorkshopConfiguration(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIPRDWorkshopConfiguration, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIPRDWorkshopConfiguration##classe(classe::MetaObject(),CATIPRDWorkshopConfiguration::MetaObject(),(void *)CreateTIECATIPRDWorkshopConfiguration##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIPRDWorkshopConfiguration(classe) TIE_CATIPRDWorkshopConfiguration(classe)
#else
#define BOA_CATIPRDWorkshopConfiguration(classe) CATImplementBOA(CATIPRDWorkshopConfiguration, classe)
#endif

#endif
