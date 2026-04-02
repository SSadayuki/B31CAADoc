#ifndef __TIE_CATIAExpertCheckRuntime
#define __TIE_CATIAExpertCheckRuntime

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAExpertCheckRuntime.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAExpertCheckRuntime */
#define declare_TIE_CATIAExpertCheckRuntime(classe) \
 \
 \
class TIECATIAExpertCheckRuntime##classe : public CATIAExpertCheckRuntime \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAExpertCheckRuntime, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Failures(CATIAExpertReportObjects *& oFailCollection); \
      virtual HRESULT __stdcall get_Succeeds(CATIAExpertReportObjects *& oSucceedCollection); \
      virtual HRESULT __stdcall get_CorrectFunction(CATBSTR & oCorrectFunctionBSTR); \
      virtual HRESULT __stdcall put_CorrectFunction(const CATBSTR & iCorrectFunctionBSTR); \
      virtual HRESULT __stdcall get_CorrectFunctionType(CATLONG & oCorrectFunctionType); \
      virtual HRESULT __stdcall put_CorrectFunctionType(CATLONG iCorrectFunctionType); \
      virtual HRESULT __stdcall get_AutomaticCorrect(CAT_VARIANT_BOOL & oAutomatic); \
      virtual HRESULT __stdcall put_AutomaticCorrect(CAT_VARIANT_BOOL iAutomatic); \
      virtual HRESULT __stdcall get_Help(CATBSTR & oHelpBSTR); \
      virtual HRESULT __stdcall put_Help(const CATBSTR & iHelpBSTR); \
      virtual HRESULT __stdcall get_Justification(CATBSTR & oJustificationBSTR); \
      virtual HRESULT __stdcall put_Justification(const CATBSTR & iJustificationBSTR); \
      virtual HRESULT __stdcall get_CorrectFunctionComment(CATBSTR & oCommentBSTR); \
      virtual HRESULT __stdcall put_CorrectFunctionComment(const CATBSTR & iCommentBSTR); \
      virtual HRESULT __stdcall get_CheckEdition(CATIAExpertCheck *& oCheckEdition); \
      virtual HRESULT __stdcall Highlight(); \
      virtual HRESULT __stdcall Correct(); \
      virtual HRESULT __stdcall Status(CATLONG & oStatus); \
      virtual HRESULT __stdcall get_Priority(double & oPriority); \
      virtual HRESULT __stdcall put_Priority(double iPriority); \
      virtual HRESULT __stdcall get_Comment(CATBSTR & oComment); \
      virtual HRESULT __stdcall put_Comment(const CATBSTR & iComment); \
      virtual HRESULT __stdcall Activate(); \
      virtual HRESULT __stdcall Deactivate(); \
      virtual HRESULT __stdcall Isactivate(CAT_VARIANT_BOOL & oActivated); \
      virtual HRESULT __stdcall AccurateType(CATBSTR & oName); \
      virtual HRESULT __stdcall SetUseOnly(); \
      virtual HRESULT __stdcall IsUseOnly(CAT_VARIANT_BOOL & oUseOnly); \
      virtual HRESULT __stdcall Parse(CATBSTR & oParseErrors); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIAExpertCheckRuntime(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Failures(CATIAExpertReportObjects *& oFailCollection); \
virtual HRESULT __stdcall get_Succeeds(CATIAExpertReportObjects *& oSucceedCollection); \
virtual HRESULT __stdcall get_CorrectFunction(CATBSTR & oCorrectFunctionBSTR); \
virtual HRESULT __stdcall put_CorrectFunction(const CATBSTR & iCorrectFunctionBSTR); \
virtual HRESULT __stdcall get_CorrectFunctionType(CATLONG & oCorrectFunctionType); \
virtual HRESULT __stdcall put_CorrectFunctionType(CATLONG iCorrectFunctionType); \
virtual HRESULT __stdcall get_AutomaticCorrect(CAT_VARIANT_BOOL & oAutomatic); \
virtual HRESULT __stdcall put_AutomaticCorrect(CAT_VARIANT_BOOL iAutomatic); \
virtual HRESULT __stdcall get_Help(CATBSTR & oHelpBSTR); \
virtual HRESULT __stdcall put_Help(const CATBSTR & iHelpBSTR); \
virtual HRESULT __stdcall get_Justification(CATBSTR & oJustificationBSTR); \
virtual HRESULT __stdcall put_Justification(const CATBSTR & iJustificationBSTR); \
virtual HRESULT __stdcall get_CorrectFunctionComment(CATBSTR & oCommentBSTR); \
virtual HRESULT __stdcall put_CorrectFunctionComment(const CATBSTR & iCommentBSTR); \
virtual HRESULT __stdcall get_CheckEdition(CATIAExpertCheck *& oCheckEdition); \
virtual HRESULT __stdcall Highlight(); \
virtual HRESULT __stdcall Correct(); \
virtual HRESULT __stdcall Status(CATLONG & oStatus); \
virtual HRESULT __stdcall get_Priority(double & oPriority); \
virtual HRESULT __stdcall put_Priority(double iPriority); \
virtual HRESULT __stdcall get_Comment(CATBSTR & oComment); \
virtual HRESULT __stdcall put_Comment(const CATBSTR & iComment); \
virtual HRESULT __stdcall Activate(); \
virtual HRESULT __stdcall Deactivate(); \
virtual HRESULT __stdcall Isactivate(CAT_VARIANT_BOOL & oActivated); \
virtual HRESULT __stdcall AccurateType(CATBSTR & oName); \
virtual HRESULT __stdcall SetUseOnly(); \
virtual HRESULT __stdcall IsUseOnly(CAT_VARIANT_BOOL & oUseOnly); \
virtual HRESULT __stdcall Parse(CATBSTR & oParseErrors); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIAExpertCheckRuntime(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Failures(CATIAExpertReportObjects *& oFailCollection) \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)get_Failures(oFailCollection)); \
} \
HRESULT __stdcall  ENVTIEName::get_Succeeds(CATIAExpertReportObjects *& oSucceedCollection) \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)get_Succeeds(oSucceedCollection)); \
} \
HRESULT __stdcall  ENVTIEName::get_CorrectFunction(CATBSTR & oCorrectFunctionBSTR) \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)get_CorrectFunction(oCorrectFunctionBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::put_CorrectFunction(const CATBSTR & iCorrectFunctionBSTR) \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)put_CorrectFunction(iCorrectFunctionBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::get_CorrectFunctionType(CATLONG & oCorrectFunctionType) \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)get_CorrectFunctionType(oCorrectFunctionType)); \
} \
HRESULT __stdcall  ENVTIEName::put_CorrectFunctionType(CATLONG iCorrectFunctionType) \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)put_CorrectFunctionType(iCorrectFunctionType)); \
} \
HRESULT __stdcall  ENVTIEName::get_AutomaticCorrect(CAT_VARIANT_BOOL & oAutomatic) \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)get_AutomaticCorrect(oAutomatic)); \
} \
HRESULT __stdcall  ENVTIEName::put_AutomaticCorrect(CAT_VARIANT_BOOL iAutomatic) \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)put_AutomaticCorrect(iAutomatic)); \
} \
HRESULT __stdcall  ENVTIEName::get_Help(CATBSTR & oHelpBSTR) \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)get_Help(oHelpBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::put_Help(const CATBSTR & iHelpBSTR) \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)put_Help(iHelpBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::get_Justification(CATBSTR & oJustificationBSTR) \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)get_Justification(oJustificationBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::put_Justification(const CATBSTR & iJustificationBSTR) \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)put_Justification(iJustificationBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::get_CorrectFunctionComment(CATBSTR & oCommentBSTR) \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)get_CorrectFunctionComment(oCommentBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::put_CorrectFunctionComment(const CATBSTR & iCommentBSTR) \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)put_CorrectFunctionComment(iCommentBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::get_CheckEdition(CATIAExpertCheck *& oCheckEdition) \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)get_CheckEdition(oCheckEdition)); \
} \
HRESULT __stdcall  ENVTIEName::Highlight() \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)Highlight()); \
} \
HRESULT __stdcall  ENVTIEName::Correct() \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)Correct()); \
} \
HRESULT __stdcall  ENVTIEName::Status(CATLONG & oStatus) \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)Status(oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_Priority(double & oPriority) \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)get_Priority(oPriority)); \
} \
HRESULT __stdcall  ENVTIEName::put_Priority(double iPriority) \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)put_Priority(iPriority)); \
} \
HRESULT __stdcall  ENVTIEName::get_Comment(CATBSTR & oComment) \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)get_Comment(oComment)); \
} \
HRESULT __stdcall  ENVTIEName::put_Comment(const CATBSTR & iComment) \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)put_Comment(iComment)); \
} \
HRESULT __stdcall  ENVTIEName::Activate() \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)Activate()); \
} \
HRESULT __stdcall  ENVTIEName::Deactivate() \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)Deactivate()); \
} \
HRESULT __stdcall  ENVTIEName::Isactivate(CAT_VARIANT_BOOL & oActivated) \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)Isactivate(oActivated)); \
} \
HRESULT __stdcall  ENVTIEName::AccurateType(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)AccurateType(oName)); \
} \
HRESULT __stdcall  ENVTIEName::SetUseOnly() \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)SetUseOnly()); \
} \
HRESULT __stdcall  ENVTIEName::IsUseOnly(CAT_VARIANT_BOOL & oUseOnly) \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)IsUseOnly(oUseOnly)); \
} \
HRESULT __stdcall  ENVTIEName::Parse(CATBSTR & oParseErrors) \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)Parse(oParseErrors)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAExpertCheckRuntime,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAExpertCheckRuntime(classe)    TIECATIAExpertCheckRuntime##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAExpertCheckRuntime(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAExpertCheckRuntime, classe) \
 \
 \
CATImplementTIEMethods(CATIAExpertCheckRuntime, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAExpertCheckRuntime, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAExpertCheckRuntime, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAExpertCheckRuntime, classe) \
 \
HRESULT __stdcall  TIECATIAExpertCheckRuntime##classe::get_Failures(CATIAExpertReportObjects *& oFailCollection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oFailCollection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Failures(oFailCollection); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oFailCollection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheckRuntime##classe::get_Succeeds(CATIAExpertReportObjects *& oSucceedCollection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oSucceedCollection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Succeeds(oSucceedCollection); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oSucceedCollection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheckRuntime##classe::get_CorrectFunction(CATBSTR & oCorrectFunctionBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oCorrectFunctionBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CorrectFunction(oCorrectFunctionBSTR); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oCorrectFunctionBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheckRuntime##classe::put_CorrectFunction(const CATBSTR & iCorrectFunctionBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iCorrectFunctionBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CorrectFunction(iCorrectFunctionBSTR); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iCorrectFunctionBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheckRuntime##classe::get_CorrectFunctionType(CATLONG & oCorrectFunctionType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oCorrectFunctionType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CorrectFunctionType(oCorrectFunctionType); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oCorrectFunctionType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheckRuntime##classe::put_CorrectFunctionType(CATLONG iCorrectFunctionType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iCorrectFunctionType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CorrectFunctionType(iCorrectFunctionType); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iCorrectFunctionType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheckRuntime##classe::get_AutomaticCorrect(CAT_VARIANT_BOOL & oAutomatic) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oAutomatic); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AutomaticCorrect(oAutomatic); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oAutomatic); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheckRuntime##classe::put_AutomaticCorrect(CAT_VARIANT_BOOL iAutomatic) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iAutomatic); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AutomaticCorrect(iAutomatic); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iAutomatic); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheckRuntime##classe::get_Help(CATBSTR & oHelpBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oHelpBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Help(oHelpBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oHelpBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheckRuntime##classe::put_Help(const CATBSTR & iHelpBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iHelpBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Help(iHelpBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iHelpBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheckRuntime##classe::get_Justification(CATBSTR & oJustificationBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oJustificationBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Justification(oJustificationBSTR); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oJustificationBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheckRuntime##classe::put_Justification(const CATBSTR & iJustificationBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iJustificationBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Justification(iJustificationBSTR); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iJustificationBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheckRuntime##classe::get_CorrectFunctionComment(CATBSTR & oCommentBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oCommentBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CorrectFunctionComment(oCommentBSTR); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oCommentBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheckRuntime##classe::put_CorrectFunctionComment(const CATBSTR & iCommentBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iCommentBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CorrectFunctionComment(iCommentBSTR); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iCommentBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheckRuntime##classe::get_CheckEdition(CATIAExpertCheck *& oCheckEdition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oCheckEdition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CheckEdition(oCheckEdition); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oCheckEdition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheckRuntime##classe::Highlight() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Highlight(); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheckRuntime##classe::Correct() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Correct(); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheckRuntime##classe::Status(CATLONG & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Status(oStatus); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheckRuntime##classe::get_Priority(double & oPriority) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oPriority); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Priority(oPriority); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oPriority); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheckRuntime##classe::put_Priority(double iPriority) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iPriority); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Priority(iPriority); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iPriority); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheckRuntime##classe::get_Comment(CATBSTR & oComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Comment(oComment); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheckRuntime##classe::put_Comment(const CATBSTR & iComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Comment(iComment); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheckRuntime##classe::Activate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Activate(); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheckRuntime##classe::Deactivate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Deactivate(); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheckRuntime##classe::Isactivate(CAT_VARIANT_BOOL & oActivated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oActivated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Isactivate(oActivated); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oActivated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheckRuntime##classe::AccurateType(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AccurateType(oName); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheckRuntime##classe::SetUseOnly() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUseOnly(); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheckRuntime##classe::IsUseOnly(CAT_VARIANT_BOOL & oUseOnly) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oUseOnly); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsUseOnly(oUseOnly); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oUseOnly); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheckRuntime##classe::Parse(CATBSTR & oParseErrors) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oParseErrors); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Parse(oParseErrors); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oParseErrors); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertCheckRuntime##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertCheckRuntime##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertCheckRuntime##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertCheckRuntime##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertCheckRuntime##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAExpertCheckRuntime(classe) \
 \
 \
declare_TIE_CATIAExpertCheckRuntime(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAExpertCheckRuntime##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAExpertCheckRuntime,"CATIAExpertCheckRuntime",CATIAExpertCheckRuntime::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAExpertCheckRuntime(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAExpertCheckRuntime, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAExpertCheckRuntime##classe(classe::MetaObject(),CATIAExpertCheckRuntime::MetaObject(),(void *)CreateTIECATIAExpertCheckRuntime##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAExpertCheckRuntime(classe) \
 \
 \
declare_TIE_CATIAExpertCheckRuntime(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAExpertCheckRuntime##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAExpertCheckRuntime,"CATIAExpertCheckRuntime",CATIAExpertCheckRuntime::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAExpertCheckRuntime(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAExpertCheckRuntime, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAExpertCheckRuntime##classe(classe::MetaObject(),CATIAExpertCheckRuntime::MetaObject(),(void *)CreateTIECATIAExpertCheckRuntime##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAExpertCheckRuntime(classe) TIE_CATIAExpertCheckRuntime(classe)
#else
#define BOA_CATIAExpertCheckRuntime(classe) CATImplementBOA(CATIAExpertCheckRuntime, classe)
#endif

#endif
