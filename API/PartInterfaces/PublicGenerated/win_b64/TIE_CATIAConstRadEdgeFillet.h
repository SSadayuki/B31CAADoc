#ifndef __TIE_CATIAConstRadEdgeFillet
#define __TIE_CATIAConstRadEdgeFillet

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAConstRadEdgeFillet.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAConstRadEdgeFillet */
#define declare_TIE_CATIAConstRadEdgeFillet(classe) \
 \
 \
class TIECATIAConstRadEdgeFillet##classe : public CATIAConstRadEdgeFillet \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAConstRadEdgeFillet, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ObjectsToFillet(CATIAReferences *& oObjectsToFillet); \
      virtual HRESULT __stdcall get_Radius(CATIALength *& oRadius); \
      virtual HRESULT __stdcall AddObjectToFillet(CATIAReference * iObjectToFillet); \
      virtual HRESULT __stdcall WithdrawObjectToFillet(CATIAReference * iObjectToWithdraw); \
      virtual HRESULT __stdcall SwitchToVarFilletType(CATIAVarRadEdgeFillet *& opVarFillet); \
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



#define ENVTIEdeclare_CATIAConstRadEdgeFillet(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ObjectsToFillet(CATIAReferences *& oObjectsToFillet); \
virtual HRESULT __stdcall get_Radius(CATIALength *& oRadius); \
virtual HRESULT __stdcall AddObjectToFillet(CATIAReference * iObjectToFillet); \
virtual HRESULT __stdcall WithdrawObjectToFillet(CATIAReference * iObjectToWithdraw); \
virtual HRESULT __stdcall SwitchToVarFilletType(CATIAVarRadEdgeFillet *& opVarFillet); \
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


#define ENVTIEdefine_CATIAConstRadEdgeFillet(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ObjectsToFillet(CATIAReferences *& oObjectsToFillet) \
{ \
return (ENVTIECALL(CATIAConstRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)get_ObjectsToFillet(oObjectsToFillet)); \
} \
HRESULT __stdcall  ENVTIEName::get_Radius(CATIALength *& oRadius) \
{ \
return (ENVTIECALL(CATIAConstRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)get_Radius(oRadius)); \
} \
HRESULT __stdcall  ENVTIEName::AddObjectToFillet(CATIAReference * iObjectToFillet) \
{ \
return (ENVTIECALL(CATIAConstRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)AddObjectToFillet(iObjectToFillet)); \
} \
HRESULT __stdcall  ENVTIEName::WithdrawObjectToFillet(CATIAReference * iObjectToWithdraw) \
{ \
return (ENVTIECALL(CATIAConstRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)WithdrawObjectToFillet(iObjectToWithdraw)); \
} \
HRESULT __stdcall  ENVTIEName::SwitchToVarFilletType(CATIAVarRadEdgeFillet *& opVarFillet) \
{ \
return (ENVTIECALL(CATIAConstRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)SwitchToVarFilletType(opVarFillet)); \
} \
HRESULT __stdcall  ENVTIEName::get_EdgePropagation(CatFilletEdgePropagation & oPropagation) \
{ \
return (ENVTIECALL(CATIAConstRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)get_EdgePropagation(oPropagation)); \
} \
HRESULT __stdcall  ENVTIEName::put_EdgePropagation(CatFilletEdgePropagation iPropagation) \
{ \
return (ENVTIECALL(CATIAConstRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)put_EdgePropagation(iPropagation)); \
} \
HRESULT __stdcall  ENVTIEName::get_EdgesToKeep(CATIAReferences *& oEdgesToKeep) \
{ \
return (ENVTIECALL(CATIAConstRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)get_EdgesToKeep(oEdgesToKeep)); \
} \
HRESULT __stdcall  ENVTIEName::AddEdgeToKeep(CATIAReference * iEdgeToKeep) \
{ \
return (ENVTIECALL(CATIAConstRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)AddEdgeToKeep(iEdgeToKeep)); \
} \
HRESULT __stdcall  ENVTIEName::WithdrawEdgeToKeep(CATIAReference * iEdgeToWithdraw) \
{ \
return (ENVTIECALL(CATIAConstRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)WithdrawEdgeToKeep(iEdgeToWithdraw)); \
} \
HRESULT __stdcall  ENVTIEName::get_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation & oRelimitation) \
{ \
return (ENVTIECALL(CATIAConstRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)get_FilletBoundaryRelimitation(oRelimitation)); \
} \
HRESULT __stdcall  ENVTIEName::put_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation iRelimitation) \
{ \
return (ENVTIECALL(CATIAConstRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)put_FilletBoundaryRelimitation(iRelimitation)); \
} \
HRESULT __stdcall  ENVTIEName::get_FilletTrimSupport(CatFilletTrimSupport & oRelimitation) \
{ \
return (ENVTIECALL(CATIAConstRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)get_FilletTrimSupport(oRelimitation)); \
} \
HRESULT __stdcall  ENVTIEName::put_FilletTrimSupport(CatFilletTrimSupport iRelimitation) \
{ \
return (ENVTIECALL(CATIAConstRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)put_FilletTrimSupport(iRelimitation)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAConstRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAConstRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAConstRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAConstRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAConstRadEdgeFillet,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAConstRadEdgeFillet(classe)    TIECATIAConstRadEdgeFillet##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAConstRadEdgeFillet(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAConstRadEdgeFillet, classe) \
 \
 \
CATImplementTIEMethods(CATIAConstRadEdgeFillet, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAConstRadEdgeFillet, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAConstRadEdgeFillet, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAConstRadEdgeFillet, classe) \
 \
HRESULT __stdcall  TIECATIAConstRadEdgeFillet##classe::get_ObjectsToFillet(CATIAReferences *& oObjectsToFillet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oObjectsToFillet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ObjectsToFillet(oObjectsToFillet); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oObjectsToFillet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstRadEdgeFillet##classe::get_Radius(CATIALength *& oRadius) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oRadius); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Radius(oRadius); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oRadius); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstRadEdgeFillet##classe::AddObjectToFillet(CATIAReference * iObjectToFillet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iObjectToFillet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddObjectToFillet(iObjectToFillet); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iObjectToFillet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstRadEdgeFillet##classe::WithdrawObjectToFillet(CATIAReference * iObjectToWithdraw) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iObjectToWithdraw); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->WithdrawObjectToFillet(iObjectToWithdraw); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iObjectToWithdraw); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstRadEdgeFillet##classe::SwitchToVarFilletType(CATIAVarRadEdgeFillet *& opVarFillet) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&opVarFillet); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SwitchToVarFilletType(opVarFillet); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&opVarFillet); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstRadEdgeFillet##classe::get_EdgePropagation(CatFilletEdgePropagation & oPropagation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oPropagation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EdgePropagation(oPropagation); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oPropagation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstRadEdgeFillet##classe::put_EdgePropagation(CatFilletEdgePropagation iPropagation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iPropagation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_EdgePropagation(iPropagation); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iPropagation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstRadEdgeFillet##classe::get_EdgesToKeep(CATIAReferences *& oEdgesToKeep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oEdgesToKeep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_EdgesToKeep(oEdgesToKeep); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oEdgesToKeep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstRadEdgeFillet##classe::AddEdgeToKeep(CATIAReference * iEdgeToKeep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iEdgeToKeep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddEdgeToKeep(iEdgeToKeep); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iEdgeToKeep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstRadEdgeFillet##classe::WithdrawEdgeToKeep(CATIAReference * iEdgeToWithdraw) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iEdgeToWithdraw); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->WithdrawEdgeToKeep(iEdgeToWithdraw); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iEdgeToWithdraw); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstRadEdgeFillet##classe::get_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation & oRelimitation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oRelimitation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FilletBoundaryRelimitation(oRelimitation); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oRelimitation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstRadEdgeFillet##classe::put_FilletBoundaryRelimitation(CatFilletBoundaryRelimitation iRelimitation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iRelimitation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FilletBoundaryRelimitation(iRelimitation); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iRelimitation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstRadEdgeFillet##classe::get_FilletTrimSupport(CatFilletTrimSupport & oRelimitation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oRelimitation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FilletTrimSupport(oRelimitation); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oRelimitation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAConstRadEdgeFillet##classe::put_FilletTrimSupport(CatFilletTrimSupport iRelimitation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iRelimitation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FilletTrimSupport(iRelimitation); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iRelimitation); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAConstRadEdgeFillet##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAConstRadEdgeFillet##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAConstRadEdgeFillet##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAConstRadEdgeFillet##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAConstRadEdgeFillet##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAConstRadEdgeFillet(classe) \
 \
 \
declare_TIE_CATIAConstRadEdgeFillet(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAConstRadEdgeFillet##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAConstRadEdgeFillet,"CATIAConstRadEdgeFillet",CATIAConstRadEdgeFillet::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAConstRadEdgeFillet(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAConstRadEdgeFillet, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAConstRadEdgeFillet##classe(classe::MetaObject(),CATIAConstRadEdgeFillet::MetaObject(),(void *)CreateTIECATIAConstRadEdgeFillet##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAConstRadEdgeFillet(classe) \
 \
 \
declare_TIE_CATIAConstRadEdgeFillet(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAConstRadEdgeFillet##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAConstRadEdgeFillet,"CATIAConstRadEdgeFillet",CATIAConstRadEdgeFillet::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAConstRadEdgeFillet(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAConstRadEdgeFillet, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAConstRadEdgeFillet##classe(classe::MetaObject(),CATIAConstRadEdgeFillet::MetaObject(),(void *)CreateTIECATIAConstRadEdgeFillet##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAConstRadEdgeFillet(classe) TIE_CATIAConstRadEdgeFillet(classe)
#else
#define BOA_CATIAConstRadEdgeFillet(classe) CATImplementBOA(CATIAConstRadEdgeFillet, classe)
#endif

#endif
