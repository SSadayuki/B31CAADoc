#ifndef __TIE_CATIProgressTask
#define __TIE_CATIProgressTask

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIProgressTask.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIProgressTask */
#define declare_TIE_CATIProgressTask(classe) \
 \
 \
class TIECATIProgressTask##classe : public CATIProgressTask \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIProgressTask, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT PerformTask    (CATIProgressTaskUI  * iUI, void * iUserData) ; \
      virtual HRESULT GetCatalogName (CATString           * oCatalogName) ; \
      virtual HRESULT GetIcon        (CATString           * oIcon) ; \
};



#define ENVTIEdeclare_CATIProgressTask(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT PerformTask    (CATIProgressTaskUI  * iUI, void * iUserData) ; \
virtual HRESULT GetCatalogName (CATString           * oCatalogName) ; \
virtual HRESULT GetIcon        (CATString           * oIcon) ; \


#define ENVTIEdefine_CATIProgressTask(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT  ENVTIEName::PerformTask    (CATIProgressTaskUI  * iUI, void * iUserData)  \
{ \
return (ENVTIECALL(CATIProgressTask,ENVTIETypeLetter,ENVTIELetter)PerformTask    (iUI,iUserData)); \
} \
HRESULT  ENVTIEName::GetCatalogName (CATString           * oCatalogName)  \
{ \
return (ENVTIECALL(CATIProgressTask,ENVTIETypeLetter,ENVTIELetter)GetCatalogName (oCatalogName)); \
} \
HRESULT  ENVTIEName::GetIcon        (CATString           * oIcon)  \
{ \
return (ENVTIECALL(CATIProgressTask,ENVTIETypeLetter,ENVTIELetter)GetIcon        (oIcon)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIProgressTask(classe)    TIECATIProgressTask##classe


/* Common methods inside a TIE */
#define common_TIE_CATIProgressTask(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIProgressTask, classe) \
 \
 \
CATImplementTIEMethods(CATIProgressTask, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIProgressTask, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIProgressTask, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIProgressTask, classe) \
 \
HRESULT  TIECATIProgressTask##classe::PerformTask    (CATIProgressTaskUI  * iUI, void * iUserData)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PerformTask    (iUI,iUserData)); \
} \
HRESULT  TIECATIProgressTask##classe::GetCatalogName (CATString           * oCatalogName)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCatalogName (oCatalogName)); \
} \
HRESULT  TIECATIProgressTask##classe::GetIcon        (CATString           * oIcon)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetIcon        (oIcon)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIProgressTask(classe) \
 \
 \
declare_TIE_CATIProgressTask(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIProgressTask##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIProgressTask,"CATIProgressTask",CATIProgressTask::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIProgressTask(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIProgressTask, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIProgressTask##classe(classe::MetaObject(),CATIProgressTask::MetaObject(),(void *)CreateTIECATIProgressTask##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIProgressTask(classe) \
 \
 \
declare_TIE_CATIProgressTask(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIProgressTask##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIProgressTask,"CATIProgressTask",CATIProgressTask::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIProgressTask(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIProgressTask, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIProgressTask##classe(classe::MetaObject(),CATIProgressTask::MetaObject(),(void *)CreateTIECATIProgressTask##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIProgressTask(classe) TIE_CATIProgressTask(classe)
#else
#define BOA_CATIProgressTask(classe) CATImplementBOA(CATIProgressTask, classe)
#endif

#endif
