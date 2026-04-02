#ifndef __TIE_CATIASfmManager
#define __TIE_CATIASfmManager

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASfmManager.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASfmManager */
#define declare_TIE_CATIASfmManager(classe) \
 \
 \
class TIECATIASfmManager##classe : public CATIASfmManager \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASfmManager, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall InitResources(); \
      virtual HRESULT __stdcall AddHull(); \
      virtual HRESULT __stdcall SynchronizePlanes(); \
      virtual HRESULT __stdcall SynchronizeHull(); \
      virtual HRESULT __stdcall GetPlaneSystems(CATIAReferences *& oPlaneSystems); \
      virtual HRESULT __stdcall GetReferencePlane(const CATVariant & iPlaneSystemIndex, const CATVariant & iPlaneIndex, CATIAReference *& oReferencePlane); \
      virtual HRESULT __stdcall GetHull(CATIAReference *& oHull); \
      virtual HRESULT __stdcall GetSuperPlates(CATIAReferences *& oSuperPlates); \
      virtual HRESULT __stdcall GetSuperStiffeners(CATIAReferences *& oSuperStiffeners); \
      virtual HRESULT __stdcall GetSuperStiffenersOnFreeEdge(CATIAReferences *& oSuperStiffenersOnFreeEdge); \
      virtual HRESULT __stdcall GetSuperMembers(CATIAReferences *& oSuperMembers); \
      virtual HRESULT __stdcall GetAllUC1Welds(CATIASfmWelds *& oWelds); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASfmManager(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall InitResources(); \
virtual HRESULT __stdcall AddHull(); \
virtual HRESULT __stdcall SynchronizePlanes(); \
virtual HRESULT __stdcall SynchronizeHull(); \
virtual HRESULT __stdcall GetPlaneSystems(CATIAReferences *& oPlaneSystems); \
virtual HRESULT __stdcall GetReferencePlane(const CATVariant & iPlaneSystemIndex, const CATVariant & iPlaneIndex, CATIAReference *& oReferencePlane); \
virtual HRESULT __stdcall GetHull(CATIAReference *& oHull); \
virtual HRESULT __stdcall GetSuperPlates(CATIAReferences *& oSuperPlates); \
virtual HRESULT __stdcall GetSuperStiffeners(CATIAReferences *& oSuperStiffeners); \
virtual HRESULT __stdcall GetSuperStiffenersOnFreeEdge(CATIAReferences *& oSuperStiffenersOnFreeEdge); \
virtual HRESULT __stdcall GetSuperMembers(CATIAReferences *& oSuperMembers); \
virtual HRESULT __stdcall GetAllUC1Welds(CATIASfmWelds *& oWelds); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASfmManager(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::InitResources() \
{ \
return (ENVTIECALL(CATIASfmManager,ENVTIETypeLetter,ENVTIELetter)InitResources()); \
} \
HRESULT __stdcall  ENVTIEName::AddHull() \
{ \
return (ENVTIECALL(CATIASfmManager,ENVTIETypeLetter,ENVTIELetter)AddHull()); \
} \
HRESULT __stdcall  ENVTIEName::SynchronizePlanes() \
{ \
return (ENVTIECALL(CATIASfmManager,ENVTIETypeLetter,ENVTIELetter)SynchronizePlanes()); \
} \
HRESULT __stdcall  ENVTIEName::SynchronizeHull() \
{ \
return (ENVTIECALL(CATIASfmManager,ENVTIETypeLetter,ENVTIELetter)SynchronizeHull()); \
} \
HRESULT __stdcall  ENVTIEName::GetPlaneSystems(CATIAReferences *& oPlaneSystems) \
{ \
return (ENVTIECALL(CATIASfmManager,ENVTIETypeLetter,ENVTIELetter)GetPlaneSystems(oPlaneSystems)); \
} \
HRESULT __stdcall  ENVTIEName::GetReferencePlane(const CATVariant & iPlaneSystemIndex, const CATVariant & iPlaneIndex, CATIAReference *& oReferencePlane) \
{ \
return (ENVTIECALL(CATIASfmManager,ENVTIETypeLetter,ENVTIELetter)GetReferencePlane(iPlaneSystemIndex,iPlaneIndex,oReferencePlane)); \
} \
HRESULT __stdcall  ENVTIEName::GetHull(CATIAReference *& oHull) \
{ \
return (ENVTIECALL(CATIASfmManager,ENVTIETypeLetter,ENVTIELetter)GetHull(oHull)); \
} \
HRESULT __stdcall  ENVTIEName::GetSuperPlates(CATIAReferences *& oSuperPlates) \
{ \
return (ENVTIECALL(CATIASfmManager,ENVTIETypeLetter,ENVTIELetter)GetSuperPlates(oSuperPlates)); \
} \
HRESULT __stdcall  ENVTIEName::GetSuperStiffeners(CATIAReferences *& oSuperStiffeners) \
{ \
return (ENVTIECALL(CATIASfmManager,ENVTIETypeLetter,ENVTIELetter)GetSuperStiffeners(oSuperStiffeners)); \
} \
HRESULT __stdcall  ENVTIEName::GetSuperStiffenersOnFreeEdge(CATIAReferences *& oSuperStiffenersOnFreeEdge) \
{ \
return (ENVTIECALL(CATIASfmManager,ENVTIETypeLetter,ENVTIELetter)GetSuperStiffenersOnFreeEdge(oSuperStiffenersOnFreeEdge)); \
} \
HRESULT __stdcall  ENVTIEName::GetSuperMembers(CATIAReferences *& oSuperMembers) \
{ \
return (ENVTIECALL(CATIASfmManager,ENVTIETypeLetter,ENVTIELetter)GetSuperMembers(oSuperMembers)); \
} \
HRESULT __stdcall  ENVTIEName::GetAllUC1Welds(CATIASfmWelds *& oWelds) \
{ \
return (ENVTIECALL(CATIASfmManager,ENVTIETypeLetter,ENVTIELetter)GetAllUC1Welds(oWelds)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASfmManager,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASfmManager,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmManager,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASfmManager,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASfmManager,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASfmManager(classe)    TIECATIASfmManager##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASfmManager(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASfmManager, classe) \
 \
 \
CATImplementTIEMethods(CATIASfmManager, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASfmManager, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASfmManager, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASfmManager, classe) \
 \
HRESULT __stdcall  TIECATIASfmManager##classe::InitResources() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InitResources(); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmManager##classe::AddHull() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddHull(); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmManager##classe::SynchronizePlanes() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SynchronizePlanes(); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmManager##classe::SynchronizeHull() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SynchronizeHull(); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmManager##classe::GetPlaneSystems(CATIAReferences *& oPlaneSystems) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oPlaneSystems); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPlaneSystems(oPlaneSystems); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oPlaneSystems); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmManager##classe::GetReferencePlane(const CATVariant & iPlaneSystemIndex, const CATVariant & iPlaneIndex, CATIAReference *& oReferencePlane) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iPlaneSystemIndex,&iPlaneIndex,&oReferencePlane); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetReferencePlane(iPlaneSystemIndex,iPlaneIndex,oReferencePlane); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iPlaneSystemIndex,&iPlaneIndex,&oReferencePlane); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmManager##classe::GetHull(CATIAReference *& oHull) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oHull); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetHull(oHull); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oHull); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmManager##classe::GetSuperPlates(CATIAReferences *& oSuperPlates) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oSuperPlates); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSuperPlates(oSuperPlates); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oSuperPlates); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmManager##classe::GetSuperStiffeners(CATIAReferences *& oSuperStiffeners) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oSuperStiffeners); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSuperStiffeners(oSuperStiffeners); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oSuperStiffeners); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmManager##classe::GetSuperStiffenersOnFreeEdge(CATIAReferences *& oSuperStiffenersOnFreeEdge) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oSuperStiffenersOnFreeEdge); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSuperStiffenersOnFreeEdge(oSuperStiffenersOnFreeEdge); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oSuperStiffenersOnFreeEdge); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmManager##classe::GetSuperMembers(CATIAReferences *& oSuperMembers) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oSuperMembers); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSuperMembers(oSuperMembers); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oSuperMembers); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASfmManager##classe::GetAllUC1Welds(CATIASfmWelds *& oWelds) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oWelds); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAllUC1Welds(oWelds); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oWelds); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmManager##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmManager##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmManager##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmManager##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASfmManager##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASfmManager(classe) \
 \
 \
declare_TIE_CATIASfmManager(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmManager##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmManager,"CATIASfmManager",CATIASfmManager::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmManager(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASfmManager, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmManager##classe(classe::MetaObject(),CATIASfmManager::MetaObject(),(void *)CreateTIECATIASfmManager##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASfmManager(classe) \
 \
 \
declare_TIE_CATIASfmManager(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASfmManager##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASfmManager,"CATIASfmManager",CATIASfmManager::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASfmManager(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASfmManager, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASfmManager##classe(classe::MetaObject(),CATIASfmManager::MetaObject(),(void *)CreateTIECATIASfmManager##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASfmManager(classe) TIE_CATIASfmManager(classe)
#else
#define BOA_CATIASfmManager(classe) CATImplementBOA(CATIASfmManager, classe)
#endif

#endif
