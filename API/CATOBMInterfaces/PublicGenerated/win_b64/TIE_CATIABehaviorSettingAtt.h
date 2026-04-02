#ifndef __TIE_CATIABehaviorSettingAtt
#define __TIE_CATIABehaviorSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIABehaviorSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIABehaviorSettingAtt */
#define declare_TIE_CATIABehaviorSettingAtt(classe) \
 \
 \
class TIECATIABehaviorSettingAtt##classe : public CATIABehaviorSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIABehaviorSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_BKTAccessRights(CATLONG & oBKTAccessRights); \
      virtual HRESULT __stdcall put_BKTAccessRights(CATLONG iBKTAccessRights); \
      virtual HRESULT __stdcall GetBKTAccessRightsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetBKTAccessRightsLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_BKTBehaviorOperationMessage(CATLONG & oBKTBehaviorOperationMessage); \
      virtual HRESULT __stdcall put_BKTBehaviorOperationMessage(CATLONG iBKTBehaviorOperationMessage); \
      virtual HRESULT __stdcall GetBKTBehaviorOperationMessageInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetBKTBehaviorOperationMessageLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_BKTSpecificationTree(CATLONG & oBKTSpecificationTree); \
      virtual HRESULT __stdcall put_BKTSpecificationTree(CATLONG iBKTSpecificationTree); \
      virtual HRESULT __stdcall GetBKTSpecificationTreeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetBKTSpecificationTreeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall Commit(); \
      virtual HRESULT __stdcall Rollback(); \
      virtual HRESULT __stdcall ResetToAdminValues(); \
      virtual HRESULT __stdcall ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList); \
      virtual HRESULT __stdcall SaveRepository(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIABehaviorSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_BKTAccessRights(CATLONG & oBKTAccessRights); \
virtual HRESULT __stdcall put_BKTAccessRights(CATLONG iBKTAccessRights); \
virtual HRESULT __stdcall GetBKTAccessRightsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetBKTAccessRightsLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_BKTBehaviorOperationMessage(CATLONG & oBKTBehaviorOperationMessage); \
virtual HRESULT __stdcall put_BKTBehaviorOperationMessage(CATLONG iBKTBehaviorOperationMessage); \
virtual HRESULT __stdcall GetBKTBehaviorOperationMessageInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetBKTBehaviorOperationMessageLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_BKTSpecificationTree(CATLONG & oBKTSpecificationTree); \
virtual HRESULT __stdcall put_BKTSpecificationTree(CATLONG iBKTSpecificationTree); \
virtual HRESULT __stdcall GetBKTSpecificationTreeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetBKTSpecificationTreeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall Commit(); \
virtual HRESULT __stdcall Rollback(); \
virtual HRESULT __stdcall ResetToAdminValues(); \
virtual HRESULT __stdcall ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList); \
virtual HRESULT __stdcall SaveRepository(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIABehaviorSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_BKTAccessRights(CATLONG & oBKTAccessRights) \
{ \
return (ENVTIECALL(CATIABehaviorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_BKTAccessRights(oBKTAccessRights)); \
} \
HRESULT __stdcall  ENVTIEName::put_BKTAccessRights(CATLONG iBKTAccessRights) \
{ \
return (ENVTIECALL(CATIABehaviorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_BKTAccessRights(iBKTAccessRights)); \
} \
HRESULT __stdcall  ENVTIEName::GetBKTAccessRightsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIABehaviorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetBKTAccessRightsInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetBKTAccessRightsLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIABehaviorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetBKTAccessRightsLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_BKTBehaviorOperationMessage(CATLONG & oBKTBehaviorOperationMessage) \
{ \
return (ENVTIECALL(CATIABehaviorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_BKTBehaviorOperationMessage(oBKTBehaviorOperationMessage)); \
} \
HRESULT __stdcall  ENVTIEName::put_BKTBehaviorOperationMessage(CATLONG iBKTBehaviorOperationMessage) \
{ \
return (ENVTIECALL(CATIABehaviorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_BKTBehaviorOperationMessage(iBKTBehaviorOperationMessage)); \
} \
HRESULT __stdcall  ENVTIEName::GetBKTBehaviorOperationMessageInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIABehaviorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetBKTBehaviorOperationMessageInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetBKTBehaviorOperationMessageLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIABehaviorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetBKTBehaviorOperationMessageLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_BKTSpecificationTree(CATLONG & oBKTSpecificationTree) \
{ \
return (ENVTIECALL(CATIABehaviorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_BKTSpecificationTree(oBKTSpecificationTree)); \
} \
HRESULT __stdcall  ENVTIEName::put_BKTSpecificationTree(CATLONG iBKTSpecificationTree) \
{ \
return (ENVTIECALL(CATIABehaviorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_BKTSpecificationTree(iBKTSpecificationTree)); \
} \
HRESULT __stdcall  ENVTIEName::GetBKTSpecificationTreeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIABehaviorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetBKTSpecificationTreeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetBKTSpecificationTreeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIABehaviorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetBKTSpecificationTreeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIABehaviorSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIABehaviorSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIABehaviorSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIABehaviorSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIABehaviorSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIABehaviorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIABehaviorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIABehaviorSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIABehaviorSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIABehaviorSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIABehaviorSettingAtt(classe)    TIECATIABehaviorSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIABehaviorSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIABehaviorSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIABehaviorSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIABehaviorSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIABehaviorSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIABehaviorSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIABehaviorSettingAtt##classe::get_BKTAccessRights(CATLONG & oBKTAccessRights) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oBKTAccessRights); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BKTAccessRights(oBKTAccessRights); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oBKTAccessRights); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorSettingAtt##classe::put_BKTAccessRights(CATLONG iBKTAccessRights) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iBKTAccessRights); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BKTAccessRights(iBKTAccessRights); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iBKTAccessRights); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorSettingAtt##classe::GetBKTAccessRightsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBKTAccessRightsInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorSettingAtt##classe::SetBKTAccessRightsLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBKTAccessRightsLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorSettingAtt##classe::get_BKTBehaviorOperationMessage(CATLONG & oBKTBehaviorOperationMessage) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oBKTBehaviorOperationMessage); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BKTBehaviorOperationMessage(oBKTBehaviorOperationMessage); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oBKTBehaviorOperationMessage); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorSettingAtt##classe::put_BKTBehaviorOperationMessage(CATLONG iBKTBehaviorOperationMessage) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iBKTBehaviorOperationMessage); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BKTBehaviorOperationMessage(iBKTBehaviorOperationMessage); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iBKTBehaviorOperationMessage); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorSettingAtt##classe::GetBKTBehaviorOperationMessageInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBKTBehaviorOperationMessageInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorSettingAtt##classe::SetBKTBehaviorOperationMessageLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBKTBehaviorOperationMessageLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorSettingAtt##classe::get_BKTSpecificationTree(CATLONG & oBKTSpecificationTree) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oBKTSpecificationTree); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BKTSpecificationTree(oBKTSpecificationTree); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oBKTSpecificationTree); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorSettingAtt##classe::put_BKTSpecificationTree(CATLONG iBKTSpecificationTree) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iBKTSpecificationTree); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BKTSpecificationTree(iBKTSpecificationTree); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iBKTSpecificationTree); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorSettingAtt##classe::GetBKTSpecificationTreeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBKTSpecificationTreeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorSettingAtt##classe::SetBKTSpecificationTreeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBKTSpecificationTreeLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIABehaviorSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIABehaviorSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIABehaviorSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIABehaviorSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIABehaviorSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIABehaviorSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIABehaviorSettingAtt(classe) \
 \
 \
declare_TIE_CATIABehaviorSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIABehaviorSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIABehaviorSettingAtt,"CATIABehaviorSettingAtt",CATIABehaviorSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIABehaviorSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIABehaviorSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIABehaviorSettingAtt##classe(classe::MetaObject(),CATIABehaviorSettingAtt::MetaObject(),(void *)CreateTIECATIABehaviorSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIABehaviorSettingAtt(classe) \
 \
 \
declare_TIE_CATIABehaviorSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIABehaviorSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIABehaviorSettingAtt,"CATIABehaviorSettingAtt",CATIABehaviorSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIABehaviorSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIABehaviorSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIABehaviorSettingAtt##classe(classe::MetaObject(),CATIABehaviorSettingAtt::MetaObject(),(void *)CreateTIECATIABehaviorSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIABehaviorSettingAtt(classe) TIE_CATIABehaviorSettingAtt(classe)
#else
#define BOA_CATIABehaviorSettingAtt(classe) CATImplementBOA(CATIABehaviorSettingAtt, classe)
#endif

#endif
