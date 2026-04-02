#ifndef __TIE_CATIAEdgeFillet
#define __TIE_CATIAEdgeFillet

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAEdgeFillet.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAEdgeFillet */
#define declare_TIE_CATIAEdgeFillet(classe) \
 \
 \
class TIECATIAEdgeFillet##classe : public CATIAEdgeFillet \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAEdgeFillet, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_EdgePropagation(CatFilletEdgePropagation & oPropagation); \
      virtual HRESULT __stdcall put_EdgePropagation(CatFilletEdgePropagation iPropagation); \
      virtual HRESULT __stdcall get_EdgesToKeep(CATIAReferences *& oEdgesToKeep); \
      virtual HRESULT __stdcall AddEdgeToKeep(CATIAReference * iEdgeToKeep); \
      virtual HRESULT __stdcall WithdrawEdgeToKeep(CATIAReference * iEdgeToWithdraw); \
      virtual HRESULT __stdcall get_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation & oRelimitation); \
      virtual HRESULT __stdcall put_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation iRelimitation); \
      virtual HRESULT __stdcall get_FilletTrimSupport(CatFilletTrimSupport & oRelimitation); \
      virtual HRESULT __stdcall put_FilletTrimSupport(CatFilletTrimSupport iRelimitation); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAEdgeFillet(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_EdgePropagation(CatFilletEdgePropagation & oPropagation); \
virtual HRESULT __stdcall put_EdgePropagation(CatFilletEdgePropagation iPropagation); \
virtual HRESULT __stdcall get_EdgesToKeep(CATIAReferences *& oEdgesToKeep); \
virtual HRESULT __stdcall AddEdgeToKeep(CATIAReference * iEdgeToKeep); \
virtual HRESULT __stdcall WithdrawEdgeToKeep(CATIAReference * iEdgeToWithdraw); \
virtual HRESULT __stdcall get_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation & oRelimitation); \
virtual HRESULT __stdcall put_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation iRelimitation); \
virtual HRESULT __stdcall get_FilletTrimSupport(CatFilletTrimSupport & oRelimitation); \
virtual HRESULT __stdcall put_FilletTrimSupport(CatFilletTrimSupport iRelimitation); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAEdgeFillet(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_EdgePropagation(CatFilletEdgePropagation & oPropagation) \
{ \
return (ENVTIECALL(CATIAEdgeFillet,ENVTIETypeLetter,ENVTIELetter)get_EdgePropagation(oPropagation)); \
} \
HRESULT __stdcall  ENVTIEName::put_EdgePropagation(CatFilletEdgePropagation iPropagation) \
{ \
return (ENVTIECALL(CATIAEdgeFillet,ENVTIETypeLetter,ENVTIELetter)put_EdgePropagation(iPropagation)); \
} \
HRESULT __stdcall  ENVTIEName::get_EdgesToKeep(CATIAReferences *& oEdgesToKeep) \
{ \
return (ENVTIECALL(CATIAEdgeFillet,ENVTIETypeLetter,ENVTIELetter)get_EdgesToKeep(oEdgesToKeep)); \
} \
HRESULT __stdcall  ENVTIEName::AddEdgeToKeep(CATIAReference * iEdgeToKeep) \
{ \
return (ENVTIECALL(CATIAEdgeFillet,ENVTIETypeLetter,ENVTIELetter)AddEdgeToKeep(iEdgeToKeep)); \
} \
HRESULT __stdcall  ENVTIEName::WithdrawEdgeToKeep(CATIAReference * iEdgeToWithdraw) \
{ \
return (ENVTIECALL(CATIAEdgeFillet,ENVTIETypeLetter,ENVTIELetter)WithdrawEdgeToKeep(iEdgeToWithdraw)); \
} \
HRESULT __stdcall  ENVTIEName::get_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation & oRelimitation) \
{ \
return (ENVTIECALL(CATIAEdgeFillet,ENVTIETypeLetter,ENVTIELetter)get_FilletBoundaryRelimitation(oRelimitation)); \
} \
HRESULT __stdcall  ENVTIEName::put_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation iRelimitation) \
{ \
return (ENVTIECALL(CATIAEdgeFillet,ENVTIETypeLetter,ENVTIELetter)put_FilletBoundaryRelimitation(iRelimitation)); \
} \
HRESULT __stdcall  ENVTIEName::get_FilletTrimSupport(CatFilletTrimSupport & oRelimitation) \
{ \
return (ENVTIECALL(CATIAEdgeFillet,ENVTIETypeLetter,ENVTIELetter)get_FilletTrimSupport(oRelimitation)); \
} \
HRESULT __stdcall  ENVTIEName::put_FilletTrimSupport(CatFilletTrimSupport iRelimitation) \
{ \
return (ENVTIECALL(CATIAEdgeFillet,ENVTIETypeLetter,ENVTIELetter)put_FilletTrimSupport(iRelimitation)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAEdgeFillet,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAEdgeFillet,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAEdgeFillet,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAEdgeFillet,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAEdgeFillet,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAEdgeFillet(classe)    TIECATIAEdgeFillet##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAEdgeFillet(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAEdgeFillet, classe) \
 \
 \
CATImplementTIEMethods(CATIAEdgeFillet, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAEdgeFillet, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAEdgeFillet, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAEdgeFillet, classe) \
 \
HRESULT __stdcall  TIECATIAEdgeFillet##classe::get_EdgePropagation(CatFilletEdgePropagation & oPropagation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oPropagation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EdgePropagation(oPropagation); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oPropagation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAEdgeFillet##classe::put_EdgePropagation(CatFilletEdgePropagation iPropagation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iPropagation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_EdgePropagation(iPropagation); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iPropagation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAEdgeFillet##classe::get_EdgesToKeep(CATIAReferences *& oEdgesToKeep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oEdgesToKeep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EdgesToKeep(oEdgesToKeep); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oEdgesToKeep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAEdgeFillet##classe::AddEdgeToKeep(CATIAReference * iEdgeToKeep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iEdgeToKeep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddEdgeToKeep(iEdgeToKeep); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iEdgeToKeep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAEdgeFillet##classe::WithdrawEdgeToKeep(CATIAReference * iEdgeToWithdraw) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iEdgeToWithdraw); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->WithdrawEdgeToKeep(iEdgeToWithdraw); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iEdgeToWithdraw); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAEdgeFillet##classe::get_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation & oRelimitation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oRelimitation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FilletBoundaryRelimitation(oRelimitation); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oRelimitation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAEdgeFillet##classe::put_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation iRelimitation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iRelimitation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FilletBoundaryRelimitation(iRelimitation); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iRelimitation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAEdgeFillet##classe::get_FilletTrimSupport(CatFilletTrimSupport & oRelimitation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oRelimitation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FilletTrimSupport(oRelimitation); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oRelimitation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAEdgeFillet##classe::put_FilletTrimSupport(CatFilletTrimSupport iRelimitation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iRelimitation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FilletTrimSupport(iRelimitation); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iRelimitation); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAEdgeFillet##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAEdgeFillet##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAEdgeFillet##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAEdgeFillet##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAEdgeFillet##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAEdgeFillet(classe) \
 \
 \
declare_TIE_CATIAEdgeFillet(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAEdgeFillet##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAEdgeFillet,"CATIAEdgeFillet",CATIAEdgeFillet::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAEdgeFillet(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAEdgeFillet, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAEdgeFillet##classe(classe::MetaObject(),CATIAEdgeFillet::MetaObject(),(void *)CreateTIECATIAEdgeFillet##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAEdgeFillet(classe) \
 \
 \
declare_TIE_CATIAEdgeFillet(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAEdgeFillet##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAEdgeFillet,"CATIAEdgeFillet",CATIAEdgeFillet::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAEdgeFillet(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAEdgeFillet, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAEdgeFillet##classe(classe::MetaObject(),CATIAEdgeFillet::MetaObject(),(void *)CreateTIECATIAEdgeFillet##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAEdgeFillet(classe) TIE_CATIAEdgeFillet(classe)
#else
#define BOA_CATIAEdgeFillet(classe) CATImplementBOA(CATIAEdgeFillet, classe)
#endif

#endif
