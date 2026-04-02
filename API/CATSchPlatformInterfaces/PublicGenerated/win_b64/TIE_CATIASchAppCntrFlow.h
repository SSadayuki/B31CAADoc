#ifndef __TIE_CATIASchAppCntrFlow
#define __TIE_CATIASchAppCntrFlow

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchAppCntrFlow.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchAppCntrFlow */
#define declare_TIE_CATIASchAppCntrFlow(classe) \
 \
 \
class TIECATIASchAppCntrFlow##classe : public CATIASchAppCntrFlow \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchAppCntrFlow, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AppGetFlowCapability(CatSchIDLCntrFlowCapability & oEFlowCapability); \
      virtual HRESULT __stdcall AppSetFlowCapability(CatSchIDLCntrFlowCapability iEFlowCapability); \
      virtual HRESULT __stdcall AppGetFlowReality(CatSchIDLCntrFlowReality & oEFlowReality); \
      virtual HRESULT __stdcall AppSetFlowReality(CatSchIDLCntrFlowReality iEFlowReality); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchAppCntrFlow(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AppGetFlowCapability(CatSchIDLCntrFlowCapability & oEFlowCapability); \
virtual HRESULT __stdcall AppSetFlowCapability(CatSchIDLCntrFlowCapability iEFlowCapability); \
virtual HRESULT __stdcall AppGetFlowReality(CatSchIDLCntrFlowReality & oEFlowReality); \
virtual HRESULT __stdcall AppSetFlowReality(CatSchIDLCntrFlowReality iEFlowReality); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchAppCntrFlow(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AppGetFlowCapability(CatSchIDLCntrFlowCapability & oEFlowCapability) \
{ \
return (ENVTIECALL(CATIASchAppCntrFlow,ENVTIETypeLetter,ENVTIELetter)AppGetFlowCapability(oEFlowCapability)); \
} \
HRESULT __stdcall  ENVTIEName::AppSetFlowCapability(CatSchIDLCntrFlowCapability iEFlowCapability) \
{ \
return (ENVTIECALL(CATIASchAppCntrFlow,ENVTIETypeLetter,ENVTIELetter)AppSetFlowCapability(iEFlowCapability)); \
} \
HRESULT __stdcall  ENVTIEName::AppGetFlowReality(CatSchIDLCntrFlowReality & oEFlowReality) \
{ \
return (ENVTIECALL(CATIASchAppCntrFlow,ENVTIETypeLetter,ENVTIELetter)AppGetFlowReality(oEFlowReality)); \
} \
HRESULT __stdcall  ENVTIEName::AppSetFlowReality(CatSchIDLCntrFlowReality iEFlowReality) \
{ \
return (ENVTIECALL(CATIASchAppCntrFlow,ENVTIETypeLetter,ENVTIELetter)AppSetFlowReality(iEFlowReality)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchAppCntrFlow,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchAppCntrFlow,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppCntrFlow,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchAppCntrFlow,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchAppCntrFlow,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchAppCntrFlow(classe)    TIECATIASchAppCntrFlow##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchAppCntrFlow(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchAppCntrFlow, classe) \
 \
 \
CATImplementTIEMethods(CATIASchAppCntrFlow, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchAppCntrFlow, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchAppCntrFlow, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchAppCntrFlow, classe) \
 \
HRESULT __stdcall  TIECATIASchAppCntrFlow##classe::AppGetFlowCapability(CatSchIDLCntrFlowCapability & oEFlowCapability) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oEFlowCapability); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetFlowCapability(oEFlowCapability); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oEFlowCapability); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppCntrFlow##classe::AppSetFlowCapability(CatSchIDLCntrFlowCapability iEFlowCapability) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iEFlowCapability); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppSetFlowCapability(iEFlowCapability); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iEFlowCapability); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppCntrFlow##classe::AppGetFlowReality(CatSchIDLCntrFlowReality & oEFlowReality) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oEFlowReality); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppGetFlowReality(oEFlowReality); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oEFlowReality); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchAppCntrFlow##classe::AppSetFlowReality(CatSchIDLCntrFlowReality iEFlowReality) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iEFlowReality); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AppSetFlowReality(iEFlowReality); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iEFlowReality); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppCntrFlow##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppCntrFlow##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppCntrFlow##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppCntrFlow##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchAppCntrFlow##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchAppCntrFlow(classe) \
 \
 \
declare_TIE_CATIASchAppCntrFlow(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppCntrFlow##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppCntrFlow,"CATIASchAppCntrFlow",CATIASchAppCntrFlow::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppCntrFlow(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchAppCntrFlow, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppCntrFlow##classe(classe::MetaObject(),CATIASchAppCntrFlow::MetaObject(),(void *)CreateTIECATIASchAppCntrFlow##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchAppCntrFlow(classe) \
 \
 \
declare_TIE_CATIASchAppCntrFlow(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchAppCntrFlow##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchAppCntrFlow,"CATIASchAppCntrFlow",CATIASchAppCntrFlow::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchAppCntrFlow(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchAppCntrFlow, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchAppCntrFlow##classe(classe::MetaObject(),CATIASchAppCntrFlow::MetaObject(),(void *)CreateTIECATIASchAppCntrFlow##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchAppCntrFlow(classe) TIE_CATIASchAppCntrFlow(classe)
#else
#define BOA_CATIASchAppCntrFlow(classe) CATImplementBOA(CATIASchAppCntrFlow, classe)
#endif

#endif
