#ifndef __TIE_CATIASchCompFlow
#define __TIE_CATIASchCompFlow

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIASchCompFlow.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIASchCompFlow */
#define declare_TIE_CATIASchCompFlow(classe) \
 \
 \
class TIECATIASchCompFlow##classe : public CATIASchCompFlow \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIASchCompFlow, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddInternalFlow(CATIASchListOfObjects * iLFlowCntrs, CATIASchInternalFlow *& oInternalFlowAdded); \
      virtual HRESULT __stdcall AddInternalFlowSpecifyGRR(CATIASchListOfObjects * iLFlowCntrs, CATIASchListOfObjects * iLOwnerGRR, CATIASchInternalFlow *& oInternalFlowAdded); \
      virtual HRESULT __stdcall RemoveInternalFlow(CATIASchInternalFlow * iInternalFlowToRemove); \
      virtual HRESULT __stdcall ListInternalFlows(CATIASchListOfObjects *& oLInternalFlow); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIASchCompFlow(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddInternalFlow(CATIASchListOfObjects * iLFlowCntrs, CATIASchInternalFlow *& oInternalFlowAdded); \
virtual HRESULT __stdcall AddInternalFlowSpecifyGRR(CATIASchListOfObjects * iLFlowCntrs, CATIASchListOfObjects * iLOwnerGRR, CATIASchInternalFlow *& oInternalFlowAdded); \
virtual HRESULT __stdcall RemoveInternalFlow(CATIASchInternalFlow * iInternalFlowToRemove); \
virtual HRESULT __stdcall ListInternalFlows(CATIASchListOfObjects *& oLInternalFlow); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIASchCompFlow(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddInternalFlow(CATIASchListOfObjects * iLFlowCntrs, CATIASchInternalFlow *& oInternalFlowAdded) \
{ \
return (ENVTIECALL(CATIASchCompFlow,ENVTIETypeLetter,ENVTIELetter)AddInternalFlow(iLFlowCntrs,oInternalFlowAdded)); \
} \
HRESULT __stdcall  ENVTIEName::AddInternalFlowSpecifyGRR(CATIASchListOfObjects * iLFlowCntrs, CATIASchListOfObjects * iLOwnerGRR, CATIASchInternalFlow *& oInternalFlowAdded) \
{ \
return (ENVTIECALL(CATIASchCompFlow,ENVTIETypeLetter,ENVTIELetter)AddInternalFlowSpecifyGRR(iLFlowCntrs,iLOwnerGRR,oInternalFlowAdded)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveInternalFlow(CATIASchInternalFlow * iInternalFlowToRemove) \
{ \
return (ENVTIECALL(CATIASchCompFlow,ENVTIETypeLetter,ENVTIELetter)RemoveInternalFlow(iInternalFlowToRemove)); \
} \
HRESULT __stdcall  ENVTIEName::ListInternalFlows(CATIASchListOfObjects *& oLInternalFlow) \
{ \
return (ENVTIECALL(CATIASchCompFlow,ENVTIETypeLetter,ENVTIELetter)ListInternalFlows(oLInternalFlow)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIASchCompFlow,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIASchCompFlow,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIASchCompFlow,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIASchCompFlow,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIASchCompFlow,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIASchCompFlow(classe)    TIECATIASchCompFlow##classe


/* Common methods inside a TIE */
#define common_TIE_CATIASchCompFlow(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIASchCompFlow, classe) \
 \
 \
CATImplementTIEMethods(CATIASchCompFlow, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIASchCompFlow, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIASchCompFlow, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIASchCompFlow, classe) \
 \
HRESULT __stdcall  TIECATIASchCompFlow##classe::AddInternalFlow(CATIASchListOfObjects * iLFlowCntrs, CATIASchInternalFlow *& oInternalFlowAdded) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iLFlowCntrs,&oInternalFlowAdded); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddInternalFlow(iLFlowCntrs,oInternalFlowAdded); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iLFlowCntrs,&oInternalFlowAdded); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchCompFlow##classe::AddInternalFlowSpecifyGRR(CATIASchListOfObjects * iLFlowCntrs, CATIASchListOfObjects * iLOwnerGRR, CATIASchInternalFlow *& oInternalFlowAdded) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iLFlowCntrs,&iLOwnerGRR,&oInternalFlowAdded); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddInternalFlowSpecifyGRR(iLFlowCntrs,iLOwnerGRR,oInternalFlowAdded); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iLFlowCntrs,&iLOwnerGRR,&oInternalFlowAdded); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchCompFlow##classe::RemoveInternalFlow(CATIASchInternalFlow * iInternalFlowToRemove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iInternalFlowToRemove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveInternalFlow(iInternalFlowToRemove); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iInternalFlowToRemove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIASchCompFlow##classe::ListInternalFlows(CATIASchListOfObjects *& oLInternalFlow) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oLInternalFlow); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ListInternalFlows(oLInternalFlow); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oLInternalFlow); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCompFlow##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCompFlow##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCompFlow##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCompFlow##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIASchCompFlow##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIASchCompFlow(classe) \
 \
 \
declare_TIE_CATIASchCompFlow(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchCompFlow##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchCompFlow,"CATIASchCompFlow",CATIASchCompFlow::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchCompFlow(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIASchCompFlow, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchCompFlow##classe(classe::MetaObject(),CATIASchCompFlow::MetaObject(),(void *)CreateTIECATIASchCompFlow##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIASchCompFlow(classe) \
 \
 \
declare_TIE_CATIASchCompFlow(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIASchCompFlow##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIASchCompFlow,"CATIASchCompFlow",CATIASchCompFlow::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIASchCompFlow(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIASchCompFlow, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIASchCompFlow##classe(classe::MetaObject(),CATIASchCompFlow::MetaObject(),(void *)CreateTIECATIASchCompFlow##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIASchCompFlow(classe) TIE_CATIASchCompFlow(classe)
#else
#define BOA_CATIASchCompFlow(classe) CATImplementBOA(CATIASchCompFlow, classe)
#endif

#endif
