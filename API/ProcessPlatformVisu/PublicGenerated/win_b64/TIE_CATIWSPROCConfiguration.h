#ifndef __TIE_CATIWSPROCConfiguration
#define __TIE_CATIWSPROCConfiguration

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIWSPROCConfiguration.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIWSPROCConfiguration */
#define declare_TIE_CATIWSPROCConfiguration(classe) \
 \
 \
class TIECATIWSPROCConfiguration##classe : public CATIWSPROCConfiguration \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIWSPROCConfiguration, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual void              CreateCommands() ; \
      virtual CATCmdWorkbench * CreateWorkbench() ; \
      virtual CATClassId        GetAddinInterface () ; \
      virtual void              GetCustomInterfaces(CATListPV * oDefaultIIDList, CATListPV * oCustomIIDList) ; \
};



#define ENVTIEdeclare_CATIWSPROCConfiguration(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual void              CreateCommands() ; \
virtual CATCmdWorkbench * CreateWorkbench() ; \
virtual CATClassId        GetAddinInterface () ; \
virtual void              GetCustomInterfaces(CATListPV * oDefaultIIDList, CATListPV * oCustomIIDList) ; \


#define ENVTIEdefine_CATIWSPROCConfiguration(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
void               ENVTIEName::CreateCommands()  \
{ \
 (ENVTIECALL(CATIWSPROCConfiguration,ENVTIETypeLetter,ENVTIELetter)CreateCommands()); \
} \
CATCmdWorkbench *  ENVTIEName::CreateWorkbench()  \
{ \
return (ENVTIECALL(CATIWSPROCConfiguration,ENVTIETypeLetter,ENVTIELetter)CreateWorkbench()); \
} \
CATClassId         ENVTIEName::GetAddinInterface ()  \
{ \
return (ENVTIECALL(CATIWSPROCConfiguration,ENVTIETypeLetter,ENVTIELetter)GetAddinInterface ()); \
} \
void               ENVTIEName::GetCustomInterfaces(CATListPV * oDefaultIIDList, CATListPV * oCustomIIDList)  \
{ \
 (ENVTIECALL(CATIWSPROCConfiguration,ENVTIETypeLetter,ENVTIELetter)GetCustomInterfaces(oDefaultIIDList,oCustomIIDList)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIWSPROCConfiguration(classe)    TIECATIWSPROCConfiguration##classe


/* Common methods inside a TIE */
#define common_TIE_CATIWSPROCConfiguration(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIWSPROCConfiguration, classe) \
 \
 \
CATImplementTIEMethods(CATIWSPROCConfiguration, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIWSPROCConfiguration, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIWSPROCConfiguration, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIWSPROCConfiguration, classe) \
 \
void               TIECATIWSPROCConfiguration##classe::CreateCommands()  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateCommands(); \
} \
CATCmdWorkbench *  TIECATIWSPROCConfiguration##classe::CreateWorkbench()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateWorkbench()); \
} \
CATClassId         TIECATIWSPROCConfiguration##classe::GetAddinInterface ()  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAddinInterface ()); \
} \
void               TIECATIWSPROCConfiguration##classe::GetCustomInterfaces(CATListPV * oDefaultIIDList, CATListPV * oCustomIIDList)  \
{ \
   ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCustomInterfaces(oDefaultIIDList,oCustomIIDList); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIWSPROCConfiguration(classe) \
 \
 \
declare_TIE_CATIWSPROCConfiguration(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIWSPROCConfiguration##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIWSPROCConfiguration,"CATIWSPROCConfiguration",CATIWSPROCConfiguration::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIWSPROCConfiguration(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIWSPROCConfiguration, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIWSPROCConfiguration##classe(classe::MetaObject(),CATIWSPROCConfiguration::MetaObject(),(void *)CreateTIECATIWSPROCConfiguration##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIWSPROCConfiguration(classe) \
 \
 \
declare_TIE_CATIWSPROCConfiguration(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIWSPROCConfiguration##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIWSPROCConfiguration,"CATIWSPROCConfiguration",CATIWSPROCConfiguration::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIWSPROCConfiguration(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIWSPROCConfiguration, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIWSPROCConfiguration##classe(classe::MetaObject(),CATIWSPROCConfiguration::MetaObject(),(void *)CreateTIECATIWSPROCConfiguration##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIWSPROCConfiguration(classe) TIE_CATIWSPROCConfiguration(classe)
#else
#define BOA_CATIWSPROCConfiguration(classe) CATImplementBOA(CATIWSPROCConfiguration, classe)
#endif

#endif
