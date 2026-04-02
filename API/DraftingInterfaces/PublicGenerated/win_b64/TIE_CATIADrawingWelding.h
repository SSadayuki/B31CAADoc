#ifndef __TIE_CATIADrawingWelding
#define __TIE_CATIADrawingWelding

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADrawingWelding.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADrawingWelding */
#define declare_TIE_CATIADrawingWelding(classe) \
 \
 \
class TIECATIADrawingWelding##classe : public CATIADrawingWelding \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADrawingWelding, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_x(double & oxposition); \
      virtual HRESULT __stdcall put_x(double oxposition); \
      virtual HRESULT __stdcall get_y(double & oyposition); \
      virtual HRESULT __stdcall put_y(double iyposition); \
      virtual HRESULT __stdcall get_Angle(double & oAngle); \
      virtual HRESULT __stdcall put_Angle(double iAngle); \
      virtual HRESULT __stdcall GetSymbol(CatWelding iWeld, CatWeldingSymbol & oSymbol); \
      virtual HRESULT __stdcall SetSymbol(CatWeldingSymbol iSymbol, CatWelding iweld); \
      virtual HRESULT __stdcall GetAdditionalSymbol(CatWelding iWeld, CatWeldAdditionalSymbol & oSymbol); \
      virtual HRESULT __stdcall SetAdditionalSymbol(CatWeldAdditionalSymbol iSymbol, CatWelding iweld); \
      virtual HRESULT __stdcall GetTextRange(CatWeldingField iField, CATIADrawingTextRange *& oTextRange); \
      virtual HRESULT __stdcall get_TextProperties(CATIADrawingTextProperties *& oTextProperties); \
      virtual HRESULT __stdcall get_Leaders(CATIADrawingLeaders *& oLeaders); \
      virtual HRESULT __stdcall get_WeldingSide(CatWeldingSide & oWeldingSide); \
      virtual HRESULT __stdcall put_WeldingSide(CatWeldingSide iWeldingSide); \
      virtual HRESULT __stdcall get_IdentificationLineSide(CatWeldingSide & oWeldingSide); \
      virtual HRESULT __stdcall put_IdentificationLineSide(CatWeldingSide iWeldingSide); \
      virtual HRESULT __stdcall get_WeldingTail(CatDftWeldingTail & oWeldingTail); \
      virtual HRESULT __stdcall put_WeldingTail(CatDftWeldingTail iWeldingTail); \
      virtual HRESULT __stdcall GetFinishSymbol(CatWelding iWeld, CatDftWeldFinishSymbol & oFinishSymbol); \
      virtual HRESULT __stdcall SetFinishSymbol(CatDftWeldFinishSymbol iFinishSymbol, CatWelding iWeld); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIADrawingWelding(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_x(double & oxposition); \
virtual HRESULT __stdcall put_x(double oxposition); \
virtual HRESULT __stdcall get_y(double & oyposition); \
virtual HRESULT __stdcall put_y(double iyposition); \
virtual HRESULT __stdcall get_Angle(double & oAngle); \
virtual HRESULT __stdcall put_Angle(double iAngle); \
virtual HRESULT __stdcall GetSymbol(CatWelding iWeld, CatWeldingSymbol & oSymbol); \
virtual HRESULT __stdcall SetSymbol(CatWeldingSymbol iSymbol, CatWelding iweld); \
virtual HRESULT __stdcall GetAdditionalSymbol(CatWelding iWeld, CatWeldAdditionalSymbol & oSymbol); \
virtual HRESULT __stdcall SetAdditionalSymbol(CatWeldAdditionalSymbol iSymbol, CatWelding iweld); \
virtual HRESULT __stdcall GetTextRange(CatWeldingField iField, CATIADrawingTextRange *& oTextRange); \
virtual HRESULT __stdcall get_TextProperties(CATIADrawingTextProperties *& oTextProperties); \
virtual HRESULT __stdcall get_Leaders(CATIADrawingLeaders *& oLeaders); \
virtual HRESULT __stdcall get_WeldingSide(CatWeldingSide & oWeldingSide); \
virtual HRESULT __stdcall put_WeldingSide(CatWeldingSide iWeldingSide); \
virtual HRESULT __stdcall get_IdentificationLineSide(CatWeldingSide & oWeldingSide); \
virtual HRESULT __stdcall put_IdentificationLineSide(CatWeldingSide iWeldingSide); \
virtual HRESULT __stdcall get_WeldingTail(CatDftWeldingTail & oWeldingTail); \
virtual HRESULT __stdcall put_WeldingTail(CatDftWeldingTail iWeldingTail); \
virtual HRESULT __stdcall GetFinishSymbol(CatWelding iWeld, CatDftWeldFinishSymbol & oFinishSymbol); \
virtual HRESULT __stdcall SetFinishSymbol(CatDftWeldFinishSymbol iFinishSymbol, CatWelding iWeld); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIADrawingWelding(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_x(double & oxposition) \
{ \
return (ENVTIECALL(CATIADrawingWelding,ENVTIETypeLetter,ENVTIELetter)get_x(oxposition)); \
} \
HRESULT __stdcall  ENVTIEName::put_x(double oxposition) \
{ \
return (ENVTIECALL(CATIADrawingWelding,ENVTIETypeLetter,ENVTIELetter)put_x(oxposition)); \
} \
HRESULT __stdcall  ENVTIEName::get_y(double & oyposition) \
{ \
return (ENVTIECALL(CATIADrawingWelding,ENVTIETypeLetter,ENVTIELetter)get_y(oyposition)); \
} \
HRESULT __stdcall  ENVTIEName::put_y(double iyposition) \
{ \
return (ENVTIECALL(CATIADrawingWelding,ENVTIETypeLetter,ENVTIELetter)put_y(iyposition)); \
} \
HRESULT __stdcall  ENVTIEName::get_Angle(double & oAngle) \
{ \
return (ENVTIECALL(CATIADrawingWelding,ENVTIETypeLetter,ENVTIELetter)get_Angle(oAngle)); \
} \
HRESULT __stdcall  ENVTIEName::put_Angle(double iAngle) \
{ \
return (ENVTIECALL(CATIADrawingWelding,ENVTIETypeLetter,ENVTIELetter)put_Angle(iAngle)); \
} \
HRESULT __stdcall  ENVTIEName::GetSymbol(CatWelding iWeld, CatWeldingSymbol & oSymbol) \
{ \
return (ENVTIECALL(CATIADrawingWelding,ENVTIETypeLetter,ENVTIELetter)GetSymbol(iWeld,oSymbol)); \
} \
HRESULT __stdcall  ENVTIEName::SetSymbol(CatWeldingSymbol iSymbol, CatWelding iweld) \
{ \
return (ENVTIECALL(CATIADrawingWelding,ENVTIETypeLetter,ENVTIELetter)SetSymbol(iSymbol,iweld)); \
} \
HRESULT __stdcall  ENVTIEName::GetAdditionalSymbol(CatWelding iWeld, CatWeldAdditionalSymbol & oSymbol) \
{ \
return (ENVTIECALL(CATIADrawingWelding,ENVTIETypeLetter,ENVTIELetter)GetAdditionalSymbol(iWeld,oSymbol)); \
} \
HRESULT __stdcall  ENVTIEName::SetAdditionalSymbol(CatWeldAdditionalSymbol iSymbol, CatWelding iweld) \
{ \
return (ENVTIECALL(CATIADrawingWelding,ENVTIETypeLetter,ENVTIELetter)SetAdditionalSymbol(iSymbol,iweld)); \
} \
HRESULT __stdcall  ENVTIEName::GetTextRange(CatWeldingField iField, CATIADrawingTextRange *& oTextRange) \
{ \
return (ENVTIECALL(CATIADrawingWelding,ENVTIETypeLetter,ENVTIELetter)GetTextRange(iField,oTextRange)); \
} \
HRESULT __stdcall  ENVTIEName::get_TextProperties(CATIADrawingTextProperties *& oTextProperties) \
{ \
return (ENVTIECALL(CATIADrawingWelding,ENVTIETypeLetter,ENVTIELetter)get_TextProperties(oTextProperties)); \
} \
HRESULT __stdcall  ENVTIEName::get_Leaders(CATIADrawingLeaders *& oLeaders) \
{ \
return (ENVTIECALL(CATIADrawingWelding,ENVTIETypeLetter,ENVTIELetter)get_Leaders(oLeaders)); \
} \
HRESULT __stdcall  ENVTIEName::get_WeldingSide(CatWeldingSide & oWeldingSide) \
{ \
return (ENVTIECALL(CATIADrawingWelding,ENVTIETypeLetter,ENVTIELetter)get_WeldingSide(oWeldingSide)); \
} \
HRESULT __stdcall  ENVTIEName::put_WeldingSide(CatWeldingSide iWeldingSide) \
{ \
return (ENVTIECALL(CATIADrawingWelding,ENVTIETypeLetter,ENVTIELetter)put_WeldingSide(iWeldingSide)); \
} \
HRESULT __stdcall  ENVTIEName::get_IdentificationLineSide(CatWeldingSide & oWeldingSide) \
{ \
return (ENVTIECALL(CATIADrawingWelding,ENVTIETypeLetter,ENVTIELetter)get_IdentificationLineSide(oWeldingSide)); \
} \
HRESULT __stdcall  ENVTIEName::put_IdentificationLineSide(CatWeldingSide iWeldingSide) \
{ \
return (ENVTIECALL(CATIADrawingWelding,ENVTIETypeLetter,ENVTIELetter)put_IdentificationLineSide(iWeldingSide)); \
} \
HRESULT __stdcall  ENVTIEName::get_WeldingTail(CatDftWeldingTail & oWeldingTail) \
{ \
return (ENVTIECALL(CATIADrawingWelding,ENVTIETypeLetter,ENVTIELetter)get_WeldingTail(oWeldingTail)); \
} \
HRESULT __stdcall  ENVTIEName::put_WeldingTail(CatDftWeldingTail iWeldingTail) \
{ \
return (ENVTIECALL(CATIADrawingWelding,ENVTIETypeLetter,ENVTIELetter)put_WeldingTail(iWeldingTail)); \
} \
HRESULT __stdcall  ENVTIEName::GetFinishSymbol(CatWelding iWeld, CatDftWeldFinishSymbol & oFinishSymbol) \
{ \
return (ENVTIECALL(CATIADrawingWelding,ENVTIETypeLetter,ENVTIELetter)GetFinishSymbol(iWeld,oFinishSymbol)); \
} \
HRESULT __stdcall  ENVTIEName::SetFinishSymbol(CatDftWeldFinishSymbol iFinishSymbol, CatWelding iWeld) \
{ \
return (ENVTIECALL(CATIADrawingWelding,ENVTIETypeLetter,ENVTIELetter)SetFinishSymbol(iFinishSymbol,iWeld)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADrawingWelding,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADrawingWelding,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingWelding,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingWelding,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADrawingWelding,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADrawingWelding(classe)    TIECATIADrawingWelding##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADrawingWelding(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADrawingWelding, classe) \
 \
 \
CATImplementTIEMethods(CATIADrawingWelding, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADrawingWelding, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADrawingWelding, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADrawingWelding, classe) \
 \
HRESULT __stdcall  TIECATIADrawingWelding##classe::get_x(double & oxposition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oxposition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_x(oxposition); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oxposition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingWelding##classe::put_x(double oxposition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oxposition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_x(oxposition); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oxposition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingWelding##classe::get_y(double & oyposition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oyposition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_y(oyposition); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oyposition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingWelding##classe::put_y(double iyposition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iyposition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_y(iyposition); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iyposition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingWelding##classe::get_Angle(double & oAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Angle(oAngle); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingWelding##classe::put_Angle(double iAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Angle(iAngle); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingWelding##classe::GetSymbol(CatWelding iWeld, CatWeldingSymbol & oSymbol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iWeld,&oSymbol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSymbol(iWeld,oSymbol); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iWeld,&oSymbol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingWelding##classe::SetSymbol(CatWeldingSymbol iSymbol, CatWelding iweld) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iSymbol,&iweld); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSymbol(iSymbol,iweld); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iSymbol,&iweld); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingWelding##classe::GetAdditionalSymbol(CatWelding iWeld, CatWeldAdditionalSymbol & oSymbol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iWeld,&oSymbol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAdditionalSymbol(iWeld,oSymbol); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iWeld,&oSymbol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingWelding##classe::SetAdditionalSymbol(CatWeldAdditionalSymbol iSymbol, CatWelding iweld) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iSymbol,&iweld); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAdditionalSymbol(iSymbol,iweld); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iSymbol,&iweld); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingWelding##classe::GetTextRange(CatWeldingField iField, CATIADrawingTextRange *& oTextRange) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iField,&oTextRange); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTextRange(iField,oTextRange); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iField,&oTextRange); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingWelding##classe::get_TextProperties(CATIADrawingTextProperties *& oTextProperties) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oTextProperties); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TextProperties(oTextProperties); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oTextProperties); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingWelding##classe::get_Leaders(CATIADrawingLeaders *& oLeaders) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oLeaders); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Leaders(oLeaders); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oLeaders); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingWelding##classe::get_WeldingSide(CatWeldingSide & oWeldingSide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oWeldingSide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_WeldingSide(oWeldingSide); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oWeldingSide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingWelding##classe::put_WeldingSide(CatWeldingSide iWeldingSide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iWeldingSide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_WeldingSide(iWeldingSide); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iWeldingSide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingWelding##classe::get_IdentificationLineSide(CatWeldingSide & oWeldingSide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oWeldingSide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_IdentificationLineSide(oWeldingSide); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oWeldingSide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingWelding##classe::put_IdentificationLineSide(CatWeldingSide iWeldingSide) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iWeldingSide); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_IdentificationLineSide(iWeldingSide); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iWeldingSide); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingWelding##classe::get_WeldingTail(CatDftWeldingTail & oWeldingTail) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&oWeldingTail); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_WeldingTail(oWeldingTail); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&oWeldingTail); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingWelding##classe::put_WeldingTail(CatDftWeldingTail iWeldingTail) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iWeldingTail); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_WeldingTail(iWeldingTail); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iWeldingTail); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingWelding##classe::GetFinishSymbol(CatWelding iWeld, CatDftWeldFinishSymbol & oFinishSymbol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iWeld,&oFinishSymbol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFinishSymbol(iWeld,oFinishSymbol); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iWeld,&oFinishSymbol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingWelding##classe::SetFinishSymbol(CatDftWeldFinishSymbol iFinishSymbol, CatWelding iWeld) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iFinishSymbol,&iWeld); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFinishSymbol(iFinishSymbol,iWeld); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iFinishSymbol,&iWeld); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingWelding##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingWelding##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingWelding##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingWelding##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingWelding##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADrawingWelding(classe) \
 \
 \
declare_TIE_CATIADrawingWelding(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingWelding##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingWelding,"CATIADrawingWelding",CATIADrawingWelding::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingWelding(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADrawingWelding, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingWelding##classe(classe::MetaObject(),CATIADrawingWelding::MetaObject(),(void *)CreateTIECATIADrawingWelding##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADrawingWelding(classe) \
 \
 \
declare_TIE_CATIADrawingWelding(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingWelding##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingWelding,"CATIADrawingWelding",CATIADrawingWelding::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingWelding(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADrawingWelding, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingWelding##classe(classe::MetaObject(),CATIADrawingWelding::MetaObject(),(void *)CreateTIECATIADrawingWelding##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADrawingWelding(classe) TIE_CATIADrawingWelding(classe)
#else
#define BOA_CATIADrawingWelding(classe) CATImplementBOA(CATIADrawingWelding, classe)
#endif

#endif
