#ifndef __TIE_CATIBatchGridTask
#define __TIE_CATIBatchGridTask

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATIBatchGridTask.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIBatchGridTask */
#define declare_TIE_CATIBatchGridTask(classe) \
 \
 \
class TIECATIBatchGridTask##classe : public CATIBatchGridTask \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIBatchGridTask, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT  AddCondition(CATBatchGridCondition* iCond, int reset=0) ; \
};



#define ENVTIEdeclare_CATIBatchGridTask(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT  AddCondition(CATBatchGridCondition* iCond, int reset=0) ; \


#define ENVTIEdefine_CATIBatchGridTask(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT   ENVTIEName::AddCondition(CATBatchGridCondition* iCond, int reset)  \
{ \
return (ENVTIECALL(CATIBatchGridTask,ENVTIETypeLetter,ENVTIELetter)AddCondition(iCond,reset)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIBatchGridTask(classe)    TIECATIBatchGridTask##classe


/* Common methods inside a TIE */
#define common_TIE_CATIBatchGridTask(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIBatchGridTask, classe) \
 \
 \
CATImplementTIEMethods(CATIBatchGridTask, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIBatchGridTask, classe, 1) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIBatchGridTask, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIBatchGridTask, classe) \
 \
HRESULT   TIECATIBatchGridTask##classe::AddCondition(CATBatchGridCondition* iCond, int reset)  \
{ \
   return(((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddCondition(iCond,reset)); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIBatchGridTask(classe) \
 \
 \
declare_TIE_CATIBatchGridTask(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIBatchGridTask##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIBatchGridTask,"CATIBatchGridTask",CATIBatchGridTask::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIBatchGridTask(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIBatchGridTask, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIBatchGridTask##classe(classe::MetaObject(),CATIBatchGridTask::MetaObject(),(void *)CreateTIECATIBatchGridTask##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIBatchGridTask(classe) \
 \
 \
declare_TIE_CATIBatchGridTask(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIBatchGridTask##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIBatchGridTask,"CATIBatchGridTask",CATIBatchGridTask::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIBatchGridTask(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIBatchGridTask, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIBatchGridTask##classe(classe::MetaObject(),CATIBatchGridTask::MetaObject(),(void *)CreateTIECATIBatchGridTask##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIBatchGridTask(classe) TIE_CATIBatchGridTask(classe)
#else
#define BOA_CATIBatchGridTask(classe) CATImplementBOA(CATIBatchGridTask, classe)
#endif

#endif
