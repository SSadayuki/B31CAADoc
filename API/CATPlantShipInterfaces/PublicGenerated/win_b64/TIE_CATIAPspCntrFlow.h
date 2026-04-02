#ifndef __TIE_CATIAPspCntrFlow
#define __TIE_CATIAPspCntrFlow

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPspCntrFlow.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPspCntrFlow */
#define declare_TIE_CATIAPspCntrFlow(classe) \
 \
 \
class TIECATIAPspCntrFlow##classe : public CATIAPspCntrFlow \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPspCntrFlow, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_FlowCapability(CatPspIDLFlowCapability & oeFlowCapability); \
      virtual HRESULT __stdcall put_FlowCapability(CatPspIDLFlowCapability ieFlowCapability); \
      virtual HRESULT __stdcall get_FlowReality(CatPspIDLFlowReality & oeFlowReality); \
      virtual HRESULT __stdcall put_FlowReality(CatPspIDLFlowReality ieFlowReality); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAPspCntrFlow(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_FlowCapability(CatPspIDLFlowCapability & oeFlowCapability); \
virtual HRESULT __stdcall put_FlowCapability(CatPspIDLFlowCapability ieFlowCapability); \
virtual HRESULT __stdcall get_FlowReality(CatPspIDLFlowReality & oeFlowReality); \
virtual HRESULT __stdcall put_FlowReality(CatPspIDLFlowReality ieFlowReality); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAPspCntrFlow(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_FlowCapability(CatPspIDLFlowCapability & oeFlowCapability) \
{ \
return (ENVTIECALL(CATIAPspCntrFlow,ENVTIETypeLetter,ENVTIELetter)get_FlowCapability(oeFlowCapability)); \
} \
HRESULT __stdcall  ENVTIEName::put_FlowCapability(CatPspIDLFlowCapability ieFlowCapability) \
{ \
return (ENVTIECALL(CATIAPspCntrFlow,ENVTIETypeLetter,ENVTIELetter)put_FlowCapability(ieFlowCapability)); \
} \
HRESULT __stdcall  ENVTIEName::get_FlowReality(CatPspIDLFlowReality & oeFlowReality) \
{ \
return (ENVTIECALL(CATIAPspCntrFlow,ENVTIETypeLetter,ENVTIELetter)get_FlowReality(oeFlowReality)); \
} \
HRESULT __stdcall  ENVTIEName::put_FlowReality(CatPspIDLFlowReality ieFlowReality) \
{ \
return (ENVTIECALL(CATIAPspCntrFlow,ENVTIETypeLetter,ENVTIELetter)put_FlowReality(ieFlowReality)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPspCntrFlow,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPspCntrFlow,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspCntrFlow,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPspCntrFlow,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPspCntrFlow,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPspCntrFlow(classe)    TIECATIAPspCntrFlow##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPspCntrFlow(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPspCntrFlow, classe) \
 \
 \
CATImplementTIEMethods(CATIAPspCntrFlow, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPspCntrFlow, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPspCntrFlow, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPspCntrFlow, classe) \
 \
HRESULT __stdcall  TIECATIAPspCntrFlow##classe::get_FlowCapability(CatPspIDLFlowCapability & oeFlowCapability) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oeFlowCapability); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FlowCapability(oeFlowCapability); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oeFlowCapability); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspCntrFlow##classe::put_FlowCapability(CatPspIDLFlowCapability ieFlowCapability) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&ieFlowCapability); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FlowCapability(ieFlowCapability); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&ieFlowCapability); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspCntrFlow##classe::get_FlowReality(CatPspIDLFlowReality & oeFlowReality) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oeFlowReality); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FlowReality(oeFlowReality); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oeFlowReality); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPspCntrFlow##classe::put_FlowReality(CatPspIDLFlowReality ieFlowReality) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&ieFlowReality); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FlowReality(ieFlowReality); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&ieFlowReality); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspCntrFlow##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspCntrFlow##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspCntrFlow##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspCntrFlow##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPspCntrFlow##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPspCntrFlow(classe) \
 \
 \
declare_TIE_CATIAPspCntrFlow(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspCntrFlow##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspCntrFlow,"CATIAPspCntrFlow",CATIAPspCntrFlow::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspCntrFlow(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPspCntrFlow, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspCntrFlow##classe(classe::MetaObject(),CATIAPspCntrFlow::MetaObject(),(void *)CreateTIECATIAPspCntrFlow##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPspCntrFlow(classe) \
 \
 \
declare_TIE_CATIAPspCntrFlow(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPspCntrFlow##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPspCntrFlow,"CATIAPspCntrFlow",CATIAPspCntrFlow::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPspCntrFlow(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPspCntrFlow, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPspCntrFlow##classe(classe::MetaObject(),CATIAPspCntrFlow::MetaObject(),(void *)CreateTIECATIAPspCntrFlow##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPspCntrFlow(classe) TIE_CATIAPspCntrFlow(classe)
#else
#define BOA_CATIAPspCntrFlow(classe) CATImplementBOA(CATIAPspCntrFlow, classe)
#endif

#endif
