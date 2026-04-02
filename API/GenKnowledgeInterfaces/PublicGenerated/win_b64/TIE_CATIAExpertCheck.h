#ifndef __TIE_CATIAExpertCheck
#define __TIE_CATIAExpertCheck

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAExpertCheck.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAExpertCheck */
#define declare_TIE_CATIAExpertCheck(classe) \
 \
 \
class TIECATIAExpertCheck##classe : public CATIAExpertCheck \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAExpertCheck, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Variables(CATBSTR & oVariablesBSTR); \
      virtual HRESULT __stdcall put_Variables(const CATBSTR & iVariablesBSTR); \
      virtual HRESULT __stdcall get_Body(CATBSTR & oBodyBSTR); \
      virtual HRESULT __stdcall put_Body(const CATBSTR & iBodyBSTR); \
      virtual HRESULT __stdcall get_Language(CATLONG & oLanguage); \
      virtual HRESULT __stdcall put_Language(CATLONG iLanguage); \
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



#define ENVTIEdeclare_CATIAExpertCheck(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Variables(CATBSTR & oVariablesBSTR); \
virtual HRESULT __stdcall put_Variables(const CATBSTR & iVariablesBSTR); \
virtual HRESULT __stdcall get_Body(CATBSTR & oBodyBSTR); \
virtual HRESULT __stdcall put_Body(const CATBSTR & iBodyBSTR); \
virtual HRESULT __stdcall get_Language(CATLONG & oLanguage); \
virtual HRESULT __stdcall put_Language(CATLONG iLanguage); \
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


#define ENVTIEdefine_CATIAExpertCheck(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Variables(CATBSTR & oVariablesBSTR) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)get_Variables(oVariablesBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::put_Variables(const CATBSTR & iVariablesBSTR) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)put_Variables(iVariablesBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::get_Body(CATBSTR & oBodyBSTR) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)get_Body(oBodyBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::put_Body(const CATBSTR & iBodyBSTR) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)put_Body(iBodyBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::get_Language(CATLONG & oLanguage) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)get_Language(oLanguage)); \
} \
HRESULT __stdcall  ENVTIEName::put_Language(CATLONG iLanguage) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)put_Language(iLanguage)); \
} \
HRESULT __stdcall  ENVTIEName::get_Failures(CATIAExpertReportObjects *& oFailCollection) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)get_Failures(oFailCollection)); \
} \
HRESULT __stdcall  ENVTIEName::get_Succeeds(CATIAExpertReportObjects *& oSucceedCollection) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)get_Succeeds(oSucceedCollection)); \
} \
HRESULT __stdcall  ENVTIEName::get_CorrectFunction(CATBSTR & oCorrectFunctionBSTR) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)get_CorrectFunction(oCorrectFunctionBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::put_CorrectFunction(const CATBSTR & iCorrectFunctionBSTR) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)put_CorrectFunction(iCorrectFunctionBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::get_CorrectFunctionType(CATLONG & oCorrectFunctionType) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)get_CorrectFunctionType(oCorrectFunctionType)); \
} \
HRESULT __stdcall  ENVTIEName::put_CorrectFunctionType(CATLONG iCorrectFunctionType) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)put_CorrectFunctionType(iCorrectFunctionType)); \
} \
HRESULT __stdcall  ENVTIEName::get_AutomaticCorrect(CAT_VARIANT_BOOL & oAutomatic) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)get_AutomaticCorrect(oAutomatic)); \
} \
HRESULT __stdcall  ENVTIEName::put_AutomaticCorrect(CAT_VARIANT_BOOL iAutomatic) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)put_AutomaticCorrect(iAutomatic)); \
} \
HRESULT __stdcall  ENVTIEName::get_Help(CATBSTR & oHelpBSTR) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)get_Help(oHelpBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::put_Help(const CATBSTR & iHelpBSTR) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)put_Help(iHelpBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::get_Justification(CATBSTR & oJustificationBSTR) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)get_Justification(oJustificationBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::put_Justification(const CATBSTR & iJustificationBSTR) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)put_Justification(iJustificationBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::get_CorrectFunctionComment(CATBSTR & oCommentBSTR) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)get_CorrectFunctionComment(oCommentBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::put_CorrectFunctionComment(const CATBSTR & iCommentBSTR) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)put_CorrectFunctionComment(iCommentBSTR)); \
} \
HRESULT __stdcall  ENVTIEName::get_CheckEdition(CATIAExpertCheck *& oCheckEdition) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)get_CheckEdition(oCheckEdition)); \
} \
HRESULT __stdcall  ENVTIEName::Highlight() \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)Highlight()); \
} \
HRESULT __stdcall  ENVTIEName::Correct() \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)Correct()); \
} \
HRESULT __stdcall  ENVTIEName::Status(CATLONG & oStatus) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)Status(oStatus)); \
} \
HRESULT __stdcall  ENVTIEName::get_Priority(double & oPriority) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)get_Priority(oPriority)); \
} \
HRESULT __stdcall  ENVTIEName::put_Priority(double iPriority) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)put_Priority(iPriority)); \
} \
HRESULT __stdcall  ENVTIEName::get_Comment(CATBSTR & oComment) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)get_Comment(oComment)); \
} \
HRESULT __stdcall  ENVTIEName::put_Comment(const CATBSTR & iComment) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)put_Comment(iComment)); \
} \
HRESULT __stdcall  ENVTIEName::Activate() \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)Activate()); \
} \
HRESULT __stdcall  ENVTIEName::Deactivate() \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)Deactivate()); \
} \
HRESULT __stdcall  ENVTIEName::Isactivate(CAT_VARIANT_BOOL & oActivated) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)Isactivate(oActivated)); \
} \
HRESULT __stdcall  ENVTIEName::AccurateType(CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)AccurateType(oName)); \
} \
HRESULT __stdcall  ENVTIEName::SetUseOnly() \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)SetUseOnly()); \
} \
HRESULT __stdcall  ENVTIEName::IsUseOnly(CAT_VARIANT_BOOL & oUseOnly) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)IsUseOnly(oUseOnly)); \
} \
HRESULT __stdcall  ENVTIEName::Parse(CATBSTR & oParseErrors) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)Parse(oParseErrors)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAExpertCheck,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAExpertCheck(classe)    TIECATIAExpertCheck##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAExpertCheck(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAExpertCheck, classe) \
 \
 \
CATImplementTIEMethods(CATIAExpertCheck, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAExpertCheck, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAExpertCheck, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAExpertCheck, classe) \
 \
HRESULT __stdcall  TIECATIAExpertCheck##classe::get_Variables(CATBSTR & oVariablesBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oVariablesBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Variables(oVariablesBSTR); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oVariablesBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::put_Variables(const CATBSTR & iVariablesBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iVariablesBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Variables(iVariablesBSTR); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iVariablesBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::get_Body(CATBSTR & oBodyBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oBodyBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Body(oBodyBSTR); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oBodyBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::put_Body(const CATBSTR & iBodyBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iBodyBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Body(iBodyBSTR); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iBodyBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::get_Language(CATLONG & oLanguage) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oLanguage); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Language(oLanguage); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oLanguage); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::put_Language(CATLONG iLanguage) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iLanguage); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Language(iLanguage); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iLanguage); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::get_Failures(CATIAExpertReportObjects *& oFailCollection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oFailCollection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Failures(oFailCollection); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oFailCollection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::get_Succeeds(CATIAExpertReportObjects *& oSucceedCollection) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oSucceedCollection); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Succeeds(oSucceedCollection); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oSucceedCollection); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::get_CorrectFunction(CATBSTR & oCorrectFunctionBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oCorrectFunctionBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CorrectFunction(oCorrectFunctionBSTR); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oCorrectFunctionBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::put_CorrectFunction(const CATBSTR & iCorrectFunctionBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iCorrectFunctionBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CorrectFunction(iCorrectFunctionBSTR); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iCorrectFunctionBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::get_CorrectFunctionType(CATLONG & oCorrectFunctionType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oCorrectFunctionType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CorrectFunctionType(oCorrectFunctionType); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oCorrectFunctionType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::put_CorrectFunctionType(CATLONG iCorrectFunctionType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iCorrectFunctionType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CorrectFunctionType(iCorrectFunctionType); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iCorrectFunctionType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::get_AutomaticCorrect(CAT_VARIANT_BOOL & oAutomatic) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oAutomatic); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AutomaticCorrect(oAutomatic); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oAutomatic); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::put_AutomaticCorrect(CAT_VARIANT_BOOL iAutomatic) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iAutomatic); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AutomaticCorrect(iAutomatic); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iAutomatic); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::get_Help(CATBSTR & oHelpBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oHelpBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Help(oHelpBSTR); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oHelpBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::put_Help(const CATBSTR & iHelpBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iHelpBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Help(iHelpBSTR); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iHelpBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::get_Justification(CATBSTR & oJustificationBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oJustificationBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Justification(oJustificationBSTR); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oJustificationBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::put_Justification(const CATBSTR & iJustificationBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iJustificationBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Justification(iJustificationBSTR); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iJustificationBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::get_CorrectFunctionComment(CATBSTR & oCommentBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oCommentBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CorrectFunctionComment(oCommentBSTR); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oCommentBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::put_CorrectFunctionComment(const CATBSTR & iCommentBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iCommentBSTR); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CorrectFunctionComment(iCommentBSTR); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iCommentBSTR); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::get_CheckEdition(CATIAExpertCheck *& oCheckEdition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oCheckEdition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CheckEdition(oCheckEdition); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oCheckEdition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::Highlight() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Highlight(); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::Correct() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Correct(); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::Status(CATLONG & oStatus) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oStatus); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Status(oStatus); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oStatus); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::get_Priority(double & oPriority) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oPriority); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Priority(oPriority); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oPriority); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::put_Priority(double iPriority) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iPriority); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Priority(iPriority); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iPriority); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::get_Comment(CATBSTR & oComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Comment(oComment); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::put_Comment(const CATBSTR & iComment) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iComment); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Comment(iComment); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iComment); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::Activate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Activate(); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::Deactivate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Deactivate(); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::Isactivate(CAT_VARIANT_BOOL & oActivated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oActivated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Isactivate(oActivated); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oActivated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::AccurateType(CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AccurateType(oName); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::SetUseOnly() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUseOnly(); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::IsUseOnly(CAT_VARIANT_BOOL & oUseOnly) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oUseOnly); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsUseOnly(oUseOnly); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oUseOnly); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAExpertCheck##classe::Parse(CATBSTR & oParseErrors) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oParseErrors); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Parse(oParseErrors); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oParseErrors); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertCheck##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertCheck##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertCheck##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertCheck##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAExpertCheck##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAExpertCheck(classe) \
 \
 \
declare_TIE_CATIAExpertCheck(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAExpertCheck##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAExpertCheck,"CATIAExpertCheck",CATIAExpertCheck::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAExpertCheck(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAExpertCheck, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAExpertCheck##classe(classe::MetaObject(),CATIAExpertCheck::MetaObject(),(void *)CreateTIECATIAExpertCheck##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAExpertCheck(classe) \
 \
 \
declare_TIE_CATIAExpertCheck(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAExpertCheck##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAExpertCheck,"CATIAExpertCheck",CATIAExpertCheck::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAExpertCheck(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAExpertCheck, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAExpertCheck##classe(classe::MetaObject(),CATIAExpertCheck::MetaObject(),(void *)CreateTIECATIAExpertCheck##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAExpertCheck(classe) TIE_CATIAExpertCheck(classe)
#else
#define BOA_CATIAExpertCheck(classe) CATImplementBOA(CATIAExpertCheck, classe)
#endif

#endif
