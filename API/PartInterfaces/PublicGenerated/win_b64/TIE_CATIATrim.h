#ifndef __TIE_CATIATrim
#define __TIE_CATIATrim

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIATrim.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIATrim */
#define declare_TIE_CATIATrim(classe) \
 \
 \
class TIECATIATrim##classe : public CATIATrim \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIATrim, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddFaceToRemove(CATIAReference * iFaceToRemove); \
      virtual HRESULT __stdcall AddFaceToRemove2(CATIAReference * iFaceToRemove, CATIAReference * iFaceAdjacentForRemove); \
      virtual HRESULT __stdcall WithdrawFaceToRemove(CATIAReference * iFaceToWithdraw); \
      virtual HRESULT __stdcall WithdrawFaceToRemove2(CATIAReference * iFaceToWithdraw, CATIAReference * iFaceAdjacentForRemove); \
      virtual HRESULT __stdcall AddFaceToKeep(CATIAReference * iFaceToKeep); \
      virtual HRESULT __stdcall AddFaceToKeep2(CATIAReference * iFaceToKeep, CATIAReference * iFaceAdjacentForKeep); \
      virtual HRESULT __stdcall WithdrawFaceToKeep(CATIAReference * iFaceToWithdraw); \
      virtual HRESULT __stdcall WithdrawFaceToKeep2(CATIAReference * iFaceToWithdraw, CATIAReference * iFaceAdjacentForKeep); \
      virtual HRESULT __stdcall get_Body(CATIABody *& oBody); \
      virtual HRESULT __stdcall SetOperatedObject(CATIAReference * iReferenceObject); \
      virtual HRESULT __stdcall SetOperatingVolume(CATIAReference * iReferenceObject); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIATrim(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddFaceToRemove(CATIAReference * iFaceToRemove); \
virtual HRESULT __stdcall AddFaceToRemove2(CATIAReference * iFaceToRemove, CATIAReference * iFaceAdjacentForRemove); \
virtual HRESULT __stdcall WithdrawFaceToRemove(CATIAReference * iFaceToWithdraw); \
virtual HRESULT __stdcall WithdrawFaceToRemove2(CATIAReference * iFaceToWithdraw, CATIAReference * iFaceAdjacentForRemove); \
virtual HRESULT __stdcall AddFaceToKeep(CATIAReference * iFaceToKeep); \
virtual HRESULT __stdcall AddFaceToKeep2(CATIAReference * iFaceToKeep, CATIAReference * iFaceAdjacentForKeep); \
virtual HRESULT __stdcall WithdrawFaceToKeep(CATIAReference * iFaceToWithdraw); \
virtual HRESULT __stdcall WithdrawFaceToKeep2(CATIAReference * iFaceToWithdraw, CATIAReference * iFaceAdjacentForKeep); \
virtual HRESULT __stdcall get_Body(CATIABody *& oBody); \
virtual HRESULT __stdcall SetOperatedObject(CATIAReference * iReferenceObject); \
virtual HRESULT __stdcall SetOperatingVolume(CATIAReference * iReferenceObject); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIATrim(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddFaceToRemove(CATIAReference * iFaceToRemove) \
{ \
return (ENVTIECALL(CATIATrim,ENVTIETypeLetter,ENVTIELetter)AddFaceToRemove(iFaceToRemove)); \
} \
HRESULT __stdcall  ENVTIEName::AddFaceToRemove2(CATIAReference * iFaceToRemove, CATIAReference * iFaceAdjacentForRemove) \
{ \
return (ENVTIECALL(CATIATrim,ENVTIETypeLetter,ENVTIELetter)AddFaceToRemove2(iFaceToRemove,iFaceAdjacentForRemove)); \
} \
HRESULT __stdcall  ENVTIEName::WithdrawFaceToRemove(CATIAReference * iFaceToWithdraw) \
{ \
return (ENVTIECALL(CATIATrim,ENVTIETypeLetter,ENVTIELetter)WithdrawFaceToRemove(iFaceToWithdraw)); \
} \
HRESULT __stdcall  ENVTIEName::WithdrawFaceToRemove2(CATIAReference * iFaceToWithdraw, CATIAReference * iFaceAdjacentForRemove) \
{ \
return (ENVTIECALL(CATIATrim,ENVTIETypeLetter,ENVTIELetter)WithdrawFaceToRemove2(iFaceToWithdraw,iFaceAdjacentForRemove)); \
} \
HRESULT __stdcall  ENVTIEName::AddFaceToKeep(CATIAReference * iFaceToKeep) \
{ \
return (ENVTIECALL(CATIATrim,ENVTIETypeLetter,ENVTIELetter)AddFaceToKeep(iFaceToKeep)); \
} \
HRESULT __stdcall  ENVTIEName::AddFaceToKeep2(CATIAReference * iFaceToKeep, CATIAReference * iFaceAdjacentForKeep) \
{ \
return (ENVTIECALL(CATIATrim,ENVTIETypeLetter,ENVTIELetter)AddFaceToKeep2(iFaceToKeep,iFaceAdjacentForKeep)); \
} \
HRESULT __stdcall  ENVTIEName::WithdrawFaceToKeep(CATIAReference * iFaceToWithdraw) \
{ \
return (ENVTIECALL(CATIATrim,ENVTIETypeLetter,ENVTIELetter)WithdrawFaceToKeep(iFaceToWithdraw)); \
} \
HRESULT __stdcall  ENVTIEName::WithdrawFaceToKeep2(CATIAReference * iFaceToWithdraw, CATIAReference * iFaceAdjacentForKeep) \
{ \
return (ENVTIECALL(CATIATrim,ENVTIETypeLetter,ENVTIELetter)WithdrawFaceToKeep2(iFaceToWithdraw,iFaceAdjacentForKeep)); \
} \
HRESULT __stdcall  ENVTIEName::get_Body(CATIABody *& oBody) \
{ \
return (ENVTIECALL(CATIATrim,ENVTIETypeLetter,ENVTIELetter)get_Body(oBody)); \
} \
HRESULT __stdcall  ENVTIEName::SetOperatedObject(CATIAReference * iReferenceObject) \
{ \
return (ENVTIECALL(CATIATrim,ENVTIETypeLetter,ENVTIELetter)SetOperatedObject(iReferenceObject)); \
} \
HRESULT __stdcall  ENVTIEName::SetOperatingVolume(CATIAReference * iReferenceObject) \
{ \
return (ENVTIECALL(CATIATrim,ENVTIETypeLetter,ENVTIELetter)SetOperatingVolume(iReferenceObject)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIATrim,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIATrim,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIATrim,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIATrim,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIATrim,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIATrim(classe)    TIECATIATrim##classe


/* Common methods inside a TIE */
#define common_TIE_CATIATrim(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIATrim, classe) \
 \
 \
CATImplementTIEMethods(CATIATrim, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIATrim, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIATrim, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIATrim, classe) \
 \
HRESULT __stdcall  TIECATIATrim##classe::AddFaceToRemove(CATIAReference * iFaceToRemove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iFaceToRemove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddFaceToRemove(iFaceToRemove); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iFaceToRemove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrim##classe::AddFaceToRemove2(CATIAReference * iFaceToRemove, CATIAReference * iFaceAdjacentForRemove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iFaceToRemove,&iFaceAdjacentForRemove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddFaceToRemove2(iFaceToRemove,iFaceAdjacentForRemove); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iFaceToRemove,&iFaceAdjacentForRemove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrim##classe::WithdrawFaceToRemove(CATIAReference * iFaceToWithdraw) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iFaceToWithdraw); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->WithdrawFaceToRemove(iFaceToWithdraw); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iFaceToWithdraw); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrim##classe::WithdrawFaceToRemove2(CATIAReference * iFaceToWithdraw, CATIAReference * iFaceAdjacentForRemove) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iFaceToWithdraw,&iFaceAdjacentForRemove); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->WithdrawFaceToRemove2(iFaceToWithdraw,iFaceAdjacentForRemove); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iFaceToWithdraw,&iFaceAdjacentForRemove); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrim##classe::AddFaceToKeep(CATIAReference * iFaceToKeep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iFaceToKeep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddFaceToKeep(iFaceToKeep); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iFaceToKeep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrim##classe::AddFaceToKeep2(CATIAReference * iFaceToKeep, CATIAReference * iFaceAdjacentForKeep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iFaceToKeep,&iFaceAdjacentForKeep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddFaceToKeep2(iFaceToKeep,iFaceAdjacentForKeep); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iFaceToKeep,&iFaceAdjacentForKeep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrim##classe::WithdrawFaceToKeep(CATIAReference * iFaceToWithdraw) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iFaceToWithdraw); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->WithdrawFaceToKeep(iFaceToWithdraw); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iFaceToWithdraw); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrim##classe::WithdrawFaceToKeep2(CATIAReference * iFaceToWithdraw, CATIAReference * iFaceAdjacentForKeep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iFaceToWithdraw,&iFaceAdjacentForKeep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->WithdrawFaceToKeep2(iFaceToWithdraw,iFaceAdjacentForKeep); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iFaceToWithdraw,&iFaceAdjacentForKeep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrim##classe::get_Body(CATIABody *& oBody) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oBody); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Body(oBody); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oBody); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrim##classe::SetOperatedObject(CATIAReference * iReferenceObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iReferenceObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOperatedObject(iReferenceObject); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iReferenceObject); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATrim##classe::SetOperatingVolume(CATIAReference * iReferenceObject) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iReferenceObject); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOperatingVolume(iReferenceObject); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iReferenceObject); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATrim##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATrim##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATrim##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATrim##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATrim##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIATrim(classe) \
 \
 \
declare_TIE_CATIATrim(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATrim##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATrim,"CATIATrim",CATIATrim::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATrim(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIATrim, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATrim##classe(classe::MetaObject(),CATIATrim::MetaObject(),(void *)CreateTIECATIATrim##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIATrim(classe) \
 \
 \
declare_TIE_CATIATrim(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATrim##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATrim,"CATIATrim",CATIATrim::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATrim(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIATrim, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATrim##classe(classe::MetaObject(),CATIATrim::MetaObject(),(void *)CreateTIECATIATrim##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIATrim(classe) TIE_CATIATrim(classe)
#else
#define BOA_CATIATrim(classe) CATImplementBOA(CATIATrim, classe)
#endif

#endif
