#ifndef __TIE_CATIADpmMachining
#define __TIE_CATIADpmMachining

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADpmMachining.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADpmMachining */
#define declare_TIE_CATIADpmMachining(classe) \
 \
 \
class TIECATIADpmMachining##classe : public CATIADpmMachining \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADpmMachining, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall SynchronizeDrawingLinks(const CATBSTR & iNewPath); \
      virtual HRESULT __stdcall Navigate(); \
      virtual HRESULT __stdcall GetExtractedDrawingPath(CATBSTR & oExtractedDrawingPath); \
      virtual HRESULT __stdcall CreateIPMInstance(CATBSTR & iInstancePartName); \
};



#define ENVTIEdeclare_CATIADpmMachining(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall SynchronizeDrawingLinks(const CATBSTR & iNewPath); \
virtual HRESULT __stdcall Navigate(); \
virtual HRESULT __stdcall GetExtractedDrawingPath(CATBSTR & oExtractedDrawingPath); \
virtual HRESULT __stdcall CreateIPMInstance(CATBSTR & iInstancePartName); \


#define ENVTIEdefine_CATIADpmMachining(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::SynchronizeDrawingLinks(const CATBSTR & iNewPath) \
{ \
return (ENVTIECALL(CATIADpmMachining,ENVTIETypeLetter,ENVTIELetter)SynchronizeDrawingLinks(iNewPath)); \
} \
HRESULT __stdcall  ENVTIEName::Navigate() \
{ \
return (ENVTIECALL(CATIADpmMachining,ENVTIETypeLetter,ENVTIELetter)Navigate()); \
} \
HRESULT __stdcall  ENVTIEName::GetExtractedDrawingPath(CATBSTR & oExtractedDrawingPath) \
{ \
return (ENVTIECALL(CATIADpmMachining,ENVTIETypeLetter,ENVTIELetter)GetExtractedDrawingPath(oExtractedDrawingPath)); \
} \
HRESULT __stdcall  ENVTIEName::CreateIPMInstance(CATBSTR & iInstancePartName) \
{ \
return (ENVTIECALL(CATIADpmMachining,ENVTIETypeLetter,ENVTIELetter)CreateIPMInstance(iInstancePartName)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADpmMachining(classe)    TIECATIADpmMachining##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADpmMachining(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADpmMachining, classe) \
 \
 \
CATImplementTIEMethods(CATIADpmMachining, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADpmMachining, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADpmMachining, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADpmMachining, classe) \
 \
HRESULT __stdcall  TIECATIADpmMachining##classe::SynchronizeDrawingLinks(const CATBSTR & iNewPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iNewPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SynchronizeDrawingLinks(iNewPath); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iNewPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADpmMachining##classe::Navigate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Navigate(); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADpmMachining##classe::GetExtractedDrawingPath(CATBSTR & oExtractedDrawingPath) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oExtractedDrawingPath); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetExtractedDrawingPath(oExtractedDrawingPath); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oExtractedDrawingPath); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADpmMachining##classe::CreateIPMInstance(CATBSTR & iInstancePartName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iInstancePartName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->CreateIPMInstance(iInstancePartName); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iInstancePartName); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADpmMachining(classe) \
 \
 \
declare_TIE_CATIADpmMachining(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADpmMachining##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADpmMachining,"CATIADpmMachining",CATIADpmMachining::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADpmMachining(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADpmMachining, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADpmMachining##classe(classe::MetaObject(),CATIADpmMachining::MetaObject(),(void *)CreateTIECATIADpmMachining##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADpmMachining(classe) \
 \
 \
declare_TIE_CATIADpmMachining(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADpmMachining##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADpmMachining,"CATIADpmMachining",CATIADpmMachining::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADpmMachining(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADpmMachining, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADpmMachining##classe(classe::MetaObject(),CATIADpmMachining::MetaObject(),(void *)CreateTIECATIADpmMachining##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADpmMachining(classe) TIE_CATIADpmMachining(classe)
#else
#define BOA_CATIADpmMachining(classe) CATImplementBOA(CATIADpmMachining, classe)
#endif

#endif
