#ifndef __TIE_CATIAShell
#define __TIE_CATIAShell

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAShell.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAShell */
#define declare_TIE_CATIAShell(classe) \
 \
 \
class TIECATIAShell##classe : public CATIAShell \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAShell, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_InternalThickness(CATIALength *& oInternalThickness); \
      virtual HRESULT __stdcall get_ExternalThickness(CATIALength *& oExternalThickness); \
      virtual HRESULT __stdcall get_FacesToRemove(CATIAReferences *& oFacesToRemove); \
      virtual HRESULT __stdcall AddFaceToRemove(CATIAReference * iFaceToRemove); \
      virtual HRESULT __stdcall WithdrawFaceToRemove(CATIAReference * iFaceToWithdraw); \
      virtual HRESULT __stdcall AddFaceWithDifferentThickness(CATIAReference * iFaceToThicken); \
      virtual HRESULT __stdcall RemoveFaceWithDifferentThickness(CATIAReference * iFaceToRemove); \
      virtual HRESULT __stdcall SetVolumeSupport(CATIAReference * iVolumeSupport); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAShell(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_InternalThickness(CATIALength *& oInternalThickness); \
virtual HRESULT __stdcall get_ExternalThickness(CATIALength *& oExternalThickness); \
virtual HRESULT __stdcall get_FacesToRemove(CATIAReferences *& oFacesToRemove); \
virtual HRESULT __stdcall AddFaceToRemove(CATIAReference * iFaceToRemove); \
virtual HRESULT __stdcall WithdrawFaceToRemove(CATIAReference * iFaceToWithdraw); \
virtual HRESULT __stdcall AddFaceWithDifferentThickness(CATIAReference * iFaceToThicken); \
virtual HRESULT __stdcall RemoveFaceWithDifferentThickness(CATIAReference * iFaceToRemove); \
virtual HRESULT __stdcall SetVolumeSupport(CATIAReference * iVolumeSupport); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAShell(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_InternalThickness(CATIALength *& oInternalThickness) \
{ \
return (ENVTIECALL(CATIAShell,ENVTIETypeLetter,ENVTIELetter)get_InternalThickness(oInternalThickness)); \
} \
HRESULT __stdcall  ENVTIEName::get_ExternalThickness(CATIALength *& oExternalThickness) \
{ \
return (ENVTIECALL(CATIAShell,ENVTIETypeLetter,ENVTIELetter)get_ExternalThickness(oExternalThickness)); \
} \
HRESULT __stdcall  ENVTIEName::get_FacesToRemove(CATIAReferences *& oFacesToRemove) \
{ \
return (ENVTIECALL(CATIAShell,ENVTIETypeLetter,ENVTIELetter)get_FacesToRemove(oFacesToRemove)); \
} \
HRESULT __stdcall  ENVTIEName::AddFaceToRemove(CATIAReference * iFaceToRemove) \
{ \
return (ENVTIECALL(CATIAShell,ENVTIETypeLetter,ENVTIELetter)AddFaceToRemove(iFaceToRemove)); \
} \
HRESULT __stdcall  ENVTIEName::WithdrawFaceToRemove(CATIAReference * iFaceToWithdraw) \
{ \
return (ENVTIECALL(CATIAShell,ENVTIETypeLetter,ENVTIELetter)WithdrawFaceToRemove(iFaceToWithdraw)); \
} \
HRESULT __stdcall  ENVTIEName::AddFaceWithDifferentThickness(CATIAReference * iFaceToThicken) \
{ \
return (ENVTIECALL(CATIAShell,ENVTIETypeLetter,ENVTIELetter)AddFaceWithDifferentThickness(iFaceToThicken)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveFaceWithDifferentThickness(CATIAReference * iFaceToRemove) \
{ \
return (ENVTIECALL(CATIAShell,ENVTIETypeLetter,ENVTIELetter)RemoveFaceWithDifferentThickness(iFaceToRemove)); \
} \
HRESULT __stdcall  ENVTIEName::SetVolumeSupport(CATIAReference * iVolumeSupport) \
{ \
return (ENVTIECALL(CATIAShell,ENVTIETypeLetter,ENVTIELetter)SetVolumeSupport(iVolumeSupport)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAShell,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAShell,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAShell,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAShell,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAShell,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAShell(classe)    TIECATIAShell##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAShell(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAShell, classe) \
 \
 \
CATImplementTIEMethods(CATIAShell, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAShell, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAShell, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAShell, classe) \
 \
HRESULT __stdcall  TIECATIAShell##classe::get_InternalThickness(CATIALength *& oInternalThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oInternalThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InternalThickness(oInternalThickness); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oInternalThickness); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShell##classe::get_ExternalThickness(CATIALength *& oExternalThickness) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oExternalThickness); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExternalThickness(oExternalThickness); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oExternalThickness); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShell##classe::get_FacesToRemove(CATIAReferences *& oFacesToRemove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oFacesToRemove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FacesToRemove(oFacesToRemove); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oFacesToRemove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShell##classe::AddFaceToRemove(CATIAReference * iFaceToRemove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iFaceToRemove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddFaceToRemove(iFaceToRemove); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iFaceToRemove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShell##classe::WithdrawFaceToRemove(CATIAReference * iFaceToWithdraw) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iFaceToWithdraw); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->WithdrawFaceToRemove(iFaceToWithdraw); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iFaceToWithdraw); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShell##classe::AddFaceWithDifferentThickness(CATIAReference * iFaceToThicken) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iFaceToThicken); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddFaceWithDifferentThickness(iFaceToThicken); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iFaceToThicken); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShell##classe::RemoveFaceWithDifferentThickness(CATIAReference * iFaceToRemove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iFaceToRemove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveFaceWithDifferentThickness(iFaceToRemove); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iFaceToRemove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAShell##classe::SetVolumeSupport(CATIAReference * iVolumeSupport) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iVolumeSupport); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetVolumeSupport(iVolumeSupport); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iVolumeSupport); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShell##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShell##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShell##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShell##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAShell##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAShell(classe) \
 \
 \
declare_TIE_CATIAShell(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAShell##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAShell,"CATIAShell",CATIAShell::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAShell(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAShell, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAShell##classe(classe::MetaObject(),CATIAShell::MetaObject(),(void *)CreateTIECATIAShell##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAShell(classe) \
 \
 \
declare_TIE_CATIAShell(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAShell##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAShell,"CATIAShell",CATIAShell::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAShell(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAShell, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAShell##classe(classe::MetaObject(),CATIAShell::MetaObject(),(void *)CreateTIECATIAShell##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAShell(classe) TIE_CATIAShell(classe)
#else
#define BOA_CATIAShell(classe) CATImplementBOA(CATIAShell, classe)
#endif

#endif
