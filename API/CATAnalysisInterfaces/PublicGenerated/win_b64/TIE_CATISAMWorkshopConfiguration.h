#ifndef __TIE_CATISAMWorkshopConfiguration
#define __TIE_CATISAMWorkshopConfiguration

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATISAMWorkshopConfiguration.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATISAMWorkshopConfiguration */
#define declare_TIE_CATISAMWorkshopConfiguration(classe) \
 \
 \
class TIECATISAMWorkshopConfiguration##classe : public CATISAMWorkshopConfiguration \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATISAMWorkshopConfiguration, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands() ; \
      virtual CATCmdWorkbench * CreateWorkbench() ; \
      virtual CATClassId        GetAddinInterface () ; \
      virtual void              GetCustomInterfaces(CATListPV * oDefaultIIDList, CATListPV * oCustomIIDList) ; \
};



#define ENVTIEdeclare_CATISAMWorkshopConfiguration(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands() ; \
virtual CATCmdWorkbench * CreateWorkbench() ; \
virtual CATClassId        GetAddinInterface () ; \
virtual void              GetCustomInterfaces(CATListPV * oDefaultIIDList, CATListPV * oCustomIIDList) ; \


#define ENVTIEdefine_CATISAMWorkshopConfiguration(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands()  \
{ \
 (ENVTIECALL(CATISAMWorkshopConfiguration,ENVTIETypeLetter,ENVTIELetter)CreateCommands()); \
} \
CATCmdWorkbench *  ENVTIEName::CreateWorkbench()  \
{ \
return (ENVTIECALL(CATISAMWorkshopConfiguration,ENVTIETypeLetter,ENVTIELetter)CreateWorkbench()); \
} \
CATClassId         ENVTIEName::GetAddinInterface ()  \
{ \
return (ENVTIECALL(CATISAMWorkshopConfiguration,ENVTIETypeLetter,ENVTIELetter)GetAddinInterface ()); \
} \
void               ENVTIEName::GetCustomInterfaces(CATListPV * oDefaultIIDList, CATListPV * oCustomIIDList)  \
{ \
 (ENVTIECALL(CATISAMWorkshopConfiguration,ENVTIETypeLetter,ENVTIELetter)GetCustomInterfaces(oDefaultIIDList,oCustomIIDList)); \
} \


/* Name of the TIE class */
#define class_TIE_CATISAMWorkshopConfiguration(classe)    TIECATISAMWorkshopConfiguration##classe


/* Common methods inside a TIE */
#define common_TIE_CATISAMWorkshopConfiguration(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATISAMWorkshopConfiguration, classe) \
 \
 \
CATImplementTIEMethods(CATISAMWorkshopConfiguration, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATISAMWorkshopConfiguration, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATISAMWorkshopConfiguration, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATISAMWorkshopConfiguration, classe) \
 \
void               TIECATISAMWorkshopConfiguration##classe::CreateCommands()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands(); \
} \
CATCmdWorkbench *  TIECATISAMWorkshopConfiguration##classe::CreateWorkbench()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateWorkbench()); \
} \
CATClassId         TIECATISAMWorkshopConfiguration##classe::GetAddinInterface ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAddinInterface ()); \
} \
void               TIECATISAMWorkshopConfiguration##classe::GetCustomInterfaces(CATListPV * oDefaultIIDList, CATListPV * oCustomIIDList)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCustomInterfaces(oDefaultIIDList,oCustomIIDList); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATISAMWorkshopConfiguration(classe) \
 \
 \
declare_TIE_CATISAMWorkshopConfiguration(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISAMWorkshopConfiguration##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISAMWorkshopConfiguration,"CATISAMWorkshopConfiguration",CATISAMWorkshopConfiguration::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISAMWorkshopConfiguration(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATISAMWorkshopConfiguration, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISAMWorkshopConfiguration##classe(classe::MetaObject(),CATISAMWorkshopConfiguration::MetaObject(),(void *)CreateTIECATISAMWorkshopConfiguration##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATISAMWorkshopConfiguration(classe) \
 \
 \
declare_TIE_CATISAMWorkshopConfiguration(classe) \
 \
 \
CATMetaClass * __stdcall TIECATISAMWorkshopConfiguration##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATISAMWorkshopConfiguration,"CATISAMWorkshopConfiguration",CATISAMWorkshopConfiguration::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATISAMWorkshopConfiguration(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATISAMWorkshopConfiguration, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATISAMWorkshopConfiguration##classe(classe::MetaObject(),CATISAMWorkshopConfiguration::MetaObject(),(void *)CreateTIECATISAMWorkshopConfiguration##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATISAMWorkshopConfiguration(classe) TIE_CATISAMWorkshopConfiguration(classe)
#else
#define BOA_CATISAMWorkshopConfiguration(classe) CATImplementBOA(CATISAMWorkshopConfiguration, classe)
#endif

#endif
