#ifndef __TIE_CATIALaw
#define __TIE_CATIALaw

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIALaw.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIALaw */
#define declare_TIE_CATIALaw(classe) \
 \
 \
class TIECATIALaw##classe : public CATIALaw \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIALaw, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall AddFormalParameter(const CATBSTR & iName, const CATBSTR & iMagnitude); \
      virtual HRESULT __stdcall RemoveFormalParameter(const CATBSTR & iName); \
      virtual HRESULT __stdcall get_Value(CATBSTR & oValue); \
      virtual HRESULT __stdcall get_Comment(CATBSTR & oComment); \
      virtual HRESULT __stdcall put_Comment(const CATBSTR & iComment); \
      virtual HRESULT __stdcall Rename(const CATBSTR & iName); \
      virtual HRESULT __stdcall Modify(const CATBSTR & iValue); \
      virtual HRESULT __stdcall get_NbInParameters(CATLONG & oNbInputs); \
      virtual HRESULT __stdcall get_NbOutParameters(CATLONG & oNbOutputs); \
      virtual HRESULT __stdcall GetInParameter(CATLONG iIndex, CATIABase *& oParameter); \
      virtual HRESULT __stdcall GetOutParameter(CATLONG iIndex, CATIAParameter *& oParameter); \
      virtual HRESULT __stdcall get_Context(CATIABase *& oContext); \
      virtual HRESULT __stdcall get_Activated(CAT_VARIANT_BOOL & oActivated); \
      virtual HRESULT __stdcall Activate(); \
      virtual HRESULT __stdcall Deactivate(); \
      virtual HRESULT __stdcall get_Hidden(CAT_VARIANT_BOOL & oHidden); \
      virtual HRESULT __stdcall put_Hidden(CAT_VARIANT_BOOL iHidden); \
      virtual HRESULT __stdcall get_IsConst(CAT_VARIANT_BOOL & oIsConst); \
      virtual HRESULT __stdcall put_IsConst(CAT_VARIANT_BOOL iIsConst); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIALaw(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall AddFormalParameter(const CATBSTR & iName, const CATBSTR & iMagnitude); \
virtual HRESULT __stdcall RemoveFormalParameter(const CATBSTR & iName); \
virtual HRESULT __stdcall get_Value(CATBSTR & oValue); \
virtual HRESULT __stdcall get_Comment(CATBSTR & oComment); \
virtual HRESULT __stdcall put_Comment(const CATBSTR & iComment); \
virtual HRESULT __stdcall Rename(const CATBSTR & iName); \
virtual HRESULT __stdcall Modify(const CATBSTR & iValue); \
virtual HRESULT __stdcall get_NbInParameters(CATLONG & oNbInputs); \
virtual HRESULT __stdcall get_NbOutParameters(CATLONG & oNbOutputs); \
virtual HRESULT __stdcall GetInParameter(CATLONG iIndex, CATIABase *& oParameter); \
virtual HRESULT __stdcall GetOutParameter(CATLONG iIndex, CATIAParameter *& oParameter); \
virtual HRESULT __stdcall get_Context(CATIABase *& oContext); \
virtual HRESULT __stdcall get_Activated(CAT_VARIANT_BOOL & oActivated); \
virtual HRESULT __stdcall Activate(); \
virtual HRESULT __stdcall Deactivate(); \
virtual HRESULT __stdcall get_Hidden(CAT_VARIANT_BOOL & oHidden); \
virtual HRESULT __stdcall put_Hidden(CAT_VARIANT_BOOL iHidden); \
virtual HRESULT __stdcall get_IsConst(CAT_VARIANT_BOOL & oIsConst); \
virtual HRESULT __stdcall put_IsConst(CAT_VARIANT_BOOL iIsConst); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIALaw(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::AddFormalParameter(const CATBSTR & iName, const CATBSTR & iMagnitude) \
{ \
return (ENVTIECALL(CATIALaw,ENVTIETypeLetter,ENVTIELetter)AddFormalParameter(iName,iMagnitude)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveFormalParameter(const CATBSTR & iName) \
{ \
return (ENVTIECALL(CATIALaw,ENVTIETypeLetter,ENVTIELetter)RemoveFormalParameter(iName)); \
} \
HRESULT __stdcall  ENVTIEName::get_Value(CATBSTR & oValue) \
{ \
return (ENVTIECALL(CATIALaw,ENVTIETypeLetter,ENVTIELetter)get_Value(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_Comment(CATBSTR & oComment) \
{ \
return (ENVTIECALL(CATIALaw,ENVTIETypeLetter,ENVTIELetter)get_Comment(oComment)); \
} \
HRESULT __stdcall  ENVTIEName::put_Comment(const CATBSTR & iComment) \
{ \
return (ENVTIECALL(CATIALaw,ENVTIETypeLetter,ENVTIELetter)put_Comment(iComment)); \
} \
HRESULT __stdcall  ENVTIEName::Rename(const CATBSTR & iName) \
{ \
return (ENVTIECALL(CATIALaw,ENVTIETypeLetter,ENVTIELetter)Rename(iName)); \
} \
HRESULT __stdcall  ENVTIEName::Modify(const CATBSTR & iValue) \
{ \
return (ENVTIECALL(CATIALaw,ENVTIETypeLetter,ENVTIELetter)Modify(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::get_NbInParameters(CATLONG & oNbInputs) \
{ \
return (ENVTIECALL(CATIALaw,ENVTIETypeLetter,ENVTIELetter)get_NbInParameters(oNbInputs)); \
} \
HRESULT __stdcall  ENVTIEName::get_NbOutParameters(CATLONG & oNbOutputs) \
{ \
return (ENVTIECALL(CATIALaw,ENVTIETypeLetter,ENVTIELetter)get_NbOutParameters(oNbOutputs)); \
} \
HRESULT __stdcall  ENVTIEName::GetInParameter(CATLONG iIndex, CATIABase *& oParameter) \
{ \
return (ENVTIECALL(CATIALaw,ENVTIETypeLetter,ENVTIELetter)GetInParameter(iIndex,oParameter)); \
} \
HRESULT __stdcall  ENVTIEName::GetOutParameter(CATLONG iIndex, CATIAParameter *& oParameter) \
{ \
return (ENVTIECALL(CATIALaw,ENVTIETypeLetter,ENVTIELetter)GetOutParameter(iIndex,oParameter)); \
} \
HRESULT __stdcall  ENVTIEName::get_Context(CATIABase *& oContext) \
{ \
return (ENVTIECALL(CATIALaw,ENVTIETypeLetter,ENVTIELetter)get_Context(oContext)); \
} \
HRESULT __stdcall  ENVTIEName::get_Activated(CAT_VARIANT_BOOL & oActivated) \
{ \
return (ENVTIECALL(CATIALaw,ENVTIETypeLetter,ENVTIELetter)get_Activated(oActivated)); \
} \
HRESULT __stdcall  ENVTIEName::Activate() \
{ \
return (ENVTIECALL(CATIALaw,ENVTIETypeLetter,ENVTIELetter)Activate()); \
} \
HRESULT __stdcall  ENVTIEName::Deactivate() \
{ \
return (ENVTIECALL(CATIALaw,ENVTIETypeLetter,ENVTIELetter)Deactivate()); \
} \
HRESULT __stdcall  ENVTIEName::get_Hidden(CAT_VARIANT_BOOL & oHidden) \
{ \
return (ENVTIECALL(CATIALaw,ENVTIETypeLetter,ENVTIELetter)get_Hidden(oHidden)); \
} \
HRESULT __stdcall  ENVTIEName::put_Hidden(CAT_VARIANT_BOOL iHidden) \
{ \
return (ENVTIECALL(CATIALaw,ENVTIETypeLetter,ENVTIELetter)put_Hidden(iHidden)); \
} \
HRESULT __stdcall  ENVTIEName::get_IsConst(CAT_VARIANT_BOOL & oIsConst) \
{ \
return (ENVTIECALL(CATIALaw,ENVTIETypeLetter,ENVTIELetter)get_IsConst(oIsConst)); \
} \
HRESULT __stdcall  ENVTIEName::put_IsConst(CAT_VARIANT_BOOL iIsConst) \
{ \
return (ENVTIECALL(CATIALaw,ENVTIETypeLetter,ENVTIELetter)put_IsConst(iIsConst)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIALaw,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIALaw,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIALaw,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIALaw,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIALaw,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIALaw(classe)    TIECATIALaw##classe


/* Common methods inside a TIE */
#define common_TIE_CATIALaw(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIALaw, classe) \
 \
 \
CATImplementTIEMethods(CATIALaw, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIALaw, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIALaw, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIALaw, classe) \
 \
HRESULT __stdcall  TIECATIALaw##classe::AddFormalParameter(const CATBSTR & iName, const CATBSTR & iMagnitude) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&iName,&iMagnitude); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddFormalParameter(iName,iMagnitude); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&iName,&iMagnitude); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALaw##classe::RemoveFormalParameter(const CATBSTR & iName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveFormalParameter(iName); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALaw##classe::get_Value(CATBSTR & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Value(oValue); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALaw##classe::get_Comment(CATBSTR & oComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Comment(oComment); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALaw##classe::put_Comment(const CATBSTR & iComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Comment(iComment); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALaw##classe::Rename(const CATBSTR & iName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rename(iName); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALaw##classe::Modify(const CATBSTR & iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Modify(iValue); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALaw##classe::get_NbInParameters(CATLONG & oNbInputs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oNbInputs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NbInParameters(oNbInputs); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oNbInputs); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALaw##classe::get_NbOutParameters(CATLONG & oNbOutputs) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oNbOutputs); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NbOutParameters(oNbOutputs); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oNbOutputs); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALaw##classe::GetInParameter(CATLONG iIndex, CATIABase *& oParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iIndex,&oParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInParameter(iIndex,oParameter); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iIndex,&oParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALaw##classe::GetOutParameter(CATLONG iIndex, CATIAParameter *& oParameter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iIndex,&oParameter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOutParameter(iIndex,oParameter); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iIndex,&oParameter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALaw##classe::get_Context(CATIABase *& oContext) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oContext); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Context(oContext); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oContext); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALaw##classe::get_Activated(CAT_VARIANT_BOOL & oActivated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oActivated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Activated(oActivated); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oActivated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALaw##classe::Activate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Activate(); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALaw##classe::Deactivate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Deactivate(); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALaw##classe::get_Hidden(CAT_VARIANT_BOOL & oHidden) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oHidden); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Hidden(oHidden); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oHidden); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALaw##classe::put_Hidden(CAT_VARIANT_BOOL iHidden) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iHidden); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Hidden(iHidden); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iHidden); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALaw##classe::get_IsConst(CAT_VARIANT_BOOL & oIsConst) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oIsConst); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IsConst(oIsConst); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oIsConst); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALaw##classe::put_IsConst(CAT_VARIANT_BOOL iIsConst) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iIsConst); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_IsConst(iIsConst); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iIsConst); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALaw##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALaw##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALaw##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALaw##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALaw##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIALaw(classe) \
 \
 \
declare_TIE_CATIALaw(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIALaw##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIALaw,"CATIALaw",CATIALaw::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIALaw(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIALaw, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIALaw##classe(classe::MetaObject(),CATIALaw::MetaObject(),(void *)CreateTIECATIALaw##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIALaw(classe) \
 \
 \
declare_TIE_CATIALaw(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIALaw##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIALaw,"CATIALaw",CATIALaw::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIALaw(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIALaw, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIALaw##classe(classe::MetaObject(),CATIALaw::MetaObject(),(void *)CreateTIECATIALaw##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIALaw(classe) TIE_CATIALaw(classe)
#else
#define BOA_CATIALaw(classe) CATImplementBOA(CATIALaw, classe)
#endif

#endif
