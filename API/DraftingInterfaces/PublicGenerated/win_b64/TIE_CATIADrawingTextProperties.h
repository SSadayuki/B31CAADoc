#ifndef __TIE_CATIADrawingTextProperties
#define __TIE_CATIADrawingTextProperties

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADrawingTextProperties.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADrawingTextProperties */
#define declare_TIE_CATIADrawingTextProperties(classe) \
 \
 \
class TIECATIADrawingTextProperties##classe : public CATIADrawingTextProperties \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADrawingTextProperties, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_FontName(CATBSTR & oFontName); \
      virtual HRESULT __stdcall put_FontName(const CATBSTR & iFontName); \
      virtual HRESULT __stdcall get_FontSize(double & oFontSize); \
      virtual HRESULT __stdcall put_FontSize(double iFontSize); \
      virtual HRESULT __stdcall get_Bold(CATLONG & oVal); \
      virtual HRESULT __stdcall put_Bold(CATLONG iVal); \
      virtual HRESULT __stdcall get_Italic(CATLONG & oval); \
      virtual HRESULT __stdcall put_Italic(CATLONG ival); \
      virtual HRESULT __stdcall get_Underline(CATLONG & oval); \
      virtual HRESULT __stdcall put_Underline(CATLONG ival); \
      virtual HRESULT __stdcall get_Overline(CATLONG & oval); \
      virtual HRESULT __stdcall put_Overline(CATLONG ival); \
      virtual HRESULT __stdcall get_StrikeThru(CATLONG & oval); \
      virtual HRESULT __stdcall put_StrikeThru(CATLONG ival); \
      virtual HRESULT __stdcall get_Superscript(CATLONG & oval); \
      virtual HRESULT __stdcall put_Superscript(CATLONG ival); \
      virtual HRESULT __stdcall get_Subscript(CATLONG & oval); \
      virtual HRESULT __stdcall put_Subscript(CATLONG ival); \
      virtual HRESULT __stdcall get_Justification(CatJustification & oJustification); \
      virtual HRESULT __stdcall put_Justification(CatJustification iJustification); \
      virtual HRESULT __stdcall get_AnchorPoint(CatTextAnchorPosition & oAnchorPoint); \
      virtual HRESULT __stdcall put_AnchorPoint(CatTextAnchorPosition iAnchorPoint); \
      virtual HRESULT __stdcall get_FrameType(CatTextFrameType & oTextFrameType); \
      virtual HRESULT __stdcall put_FrameType(CatTextFrameType iTextFrameType); \
      virtual HRESULT __stdcall ActivateFrame(CatTextFrameType iType); \
      virtual HRESULT __stdcall get_FrameName(CATBSTR & oFontName); \
      virtual HRESULT __stdcall put_FrameName(const CATBSTR & iFontName); \
      virtual HRESULT __stdcall get_Color(CATLONG & oColor); \
      virtual HRESULT __stdcall put_Color(CATLONG iColor); \
      virtual HRESULT __stdcall get_Kerning(CATLONG & oVal); \
      virtual HRESULT __stdcall put_Kerning(CATLONG iVal); \
      virtual HRESULT __stdcall get_Mirror(CatTextFlipMode & oMirrorMode); \
      virtual HRESULT __stdcall put_Mirror(CatTextFlipMode iMirrorMode); \
      virtual HRESULT __stdcall Update(); \
      virtual HRESULT __stdcall get_Blanking(CatBlankingMode & oBlanking); \
      virtual HRESULT __stdcall put_Blanking(CatBlankingMode iBlanking); \
};



#define ENVTIEdeclare_CATIADrawingTextProperties(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_FontName(CATBSTR & oFontName); \
virtual HRESULT __stdcall put_FontName(const CATBSTR & iFontName); \
virtual HRESULT __stdcall get_FontSize(double & oFontSize); \
virtual HRESULT __stdcall put_FontSize(double iFontSize); \
virtual HRESULT __stdcall get_Bold(CATLONG & oVal); \
virtual HRESULT __stdcall put_Bold(CATLONG iVal); \
virtual HRESULT __stdcall get_Italic(CATLONG & oval); \
virtual HRESULT __stdcall put_Italic(CATLONG ival); \
virtual HRESULT __stdcall get_Underline(CATLONG & oval); \
virtual HRESULT __stdcall put_Underline(CATLONG ival); \
virtual HRESULT __stdcall get_Overline(CATLONG & oval); \
virtual HRESULT __stdcall put_Overline(CATLONG ival); \
virtual HRESULT __stdcall get_StrikeThru(CATLONG & oval); \
virtual HRESULT __stdcall put_StrikeThru(CATLONG ival); \
virtual HRESULT __stdcall get_Superscript(CATLONG & oval); \
virtual HRESULT __stdcall put_Superscript(CATLONG ival); \
virtual HRESULT __stdcall get_Subscript(CATLONG & oval); \
virtual HRESULT __stdcall put_Subscript(CATLONG ival); \
virtual HRESULT __stdcall get_Justification(CatJustification & oJustification); \
virtual HRESULT __stdcall put_Justification(CatJustification iJustification); \
virtual HRESULT __stdcall get_AnchorPoint(CatTextAnchorPosition & oAnchorPoint); \
virtual HRESULT __stdcall put_AnchorPoint(CatTextAnchorPosition iAnchorPoint); \
virtual HRESULT __stdcall get_FrameType(CatTextFrameType & oTextFrameType); \
virtual HRESULT __stdcall put_FrameType(CatTextFrameType iTextFrameType); \
virtual HRESULT __stdcall ActivateFrame(CatTextFrameType iType); \
virtual HRESULT __stdcall get_FrameName(CATBSTR & oFontName); \
virtual HRESULT __stdcall put_FrameName(const CATBSTR & iFontName); \
virtual HRESULT __stdcall get_Color(CATLONG & oColor); \
virtual HRESULT __stdcall put_Color(CATLONG iColor); \
virtual HRESULT __stdcall get_Kerning(CATLONG & oVal); \
virtual HRESULT __stdcall put_Kerning(CATLONG iVal); \
virtual HRESULT __stdcall get_Mirror(CatTextFlipMode & oMirrorMode); \
virtual HRESULT __stdcall put_Mirror(CatTextFlipMode iMirrorMode); \
virtual HRESULT __stdcall Update(); \
virtual HRESULT __stdcall get_Blanking(CatBlankingMode & oBlanking); \
virtual HRESULT __stdcall put_Blanking(CatBlankingMode iBlanking); \


#define ENVTIEdefine_CATIADrawingTextProperties(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_FontName(CATBSTR & oFontName) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)get_FontName(oFontName)); \
} \
HRESULT __stdcall  ENVTIEName::put_FontName(const CATBSTR & iFontName) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)put_FontName(iFontName)); \
} \
HRESULT __stdcall  ENVTIEName::get_FontSize(double & oFontSize) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)get_FontSize(oFontSize)); \
} \
HRESULT __stdcall  ENVTIEName::put_FontSize(double iFontSize) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)put_FontSize(iFontSize)); \
} \
HRESULT __stdcall  ENVTIEName::get_Bold(CATLONG & oVal) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)get_Bold(oVal)); \
} \
HRESULT __stdcall  ENVTIEName::put_Bold(CATLONG iVal) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)put_Bold(iVal)); \
} \
HRESULT __stdcall  ENVTIEName::get_Italic(CATLONG & oval) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)get_Italic(oval)); \
} \
HRESULT __stdcall  ENVTIEName::put_Italic(CATLONG ival) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)put_Italic(ival)); \
} \
HRESULT __stdcall  ENVTIEName::get_Underline(CATLONG & oval) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)get_Underline(oval)); \
} \
HRESULT __stdcall  ENVTIEName::put_Underline(CATLONG ival) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)put_Underline(ival)); \
} \
HRESULT __stdcall  ENVTIEName::get_Overline(CATLONG & oval) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)get_Overline(oval)); \
} \
HRESULT __stdcall  ENVTIEName::put_Overline(CATLONG ival) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)put_Overline(ival)); \
} \
HRESULT __stdcall  ENVTIEName::get_StrikeThru(CATLONG & oval) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)get_StrikeThru(oval)); \
} \
HRESULT __stdcall  ENVTIEName::put_StrikeThru(CATLONG ival) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)put_StrikeThru(ival)); \
} \
HRESULT __stdcall  ENVTIEName::get_Superscript(CATLONG & oval) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)get_Superscript(oval)); \
} \
HRESULT __stdcall  ENVTIEName::put_Superscript(CATLONG ival) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)put_Superscript(ival)); \
} \
HRESULT __stdcall  ENVTIEName::get_Subscript(CATLONG & oval) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)get_Subscript(oval)); \
} \
HRESULT __stdcall  ENVTIEName::put_Subscript(CATLONG ival) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)put_Subscript(ival)); \
} \
HRESULT __stdcall  ENVTIEName::get_Justification(CatJustification & oJustification) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)get_Justification(oJustification)); \
} \
HRESULT __stdcall  ENVTIEName::put_Justification(CatJustification iJustification) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)put_Justification(iJustification)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnchorPoint(CatTextAnchorPosition & oAnchorPoint) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)get_AnchorPoint(oAnchorPoint)); \
} \
HRESULT __stdcall  ENVTIEName::put_AnchorPoint(CatTextAnchorPosition iAnchorPoint) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)put_AnchorPoint(iAnchorPoint)); \
} \
HRESULT __stdcall  ENVTIEName::get_FrameType(CatTextFrameType & oTextFrameType) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)get_FrameType(oTextFrameType)); \
} \
HRESULT __stdcall  ENVTIEName::put_FrameType(CatTextFrameType iTextFrameType) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)put_FrameType(iTextFrameType)); \
} \
HRESULT __stdcall  ENVTIEName::ActivateFrame(CatTextFrameType iType) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)ActivateFrame(iType)); \
} \
HRESULT __stdcall  ENVTIEName::get_FrameName(CATBSTR & oFontName) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)get_FrameName(oFontName)); \
} \
HRESULT __stdcall  ENVTIEName::put_FrameName(const CATBSTR & iFontName) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)put_FrameName(iFontName)); \
} \
HRESULT __stdcall  ENVTIEName::get_Color(CATLONG & oColor) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)get_Color(oColor)); \
} \
HRESULT __stdcall  ENVTIEName::put_Color(CATLONG iColor) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)put_Color(iColor)); \
} \
HRESULT __stdcall  ENVTIEName::get_Kerning(CATLONG & oVal) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)get_Kerning(oVal)); \
} \
HRESULT __stdcall  ENVTIEName::put_Kerning(CATLONG iVal) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)put_Kerning(iVal)); \
} \
HRESULT __stdcall  ENVTIEName::get_Mirror(CatTextFlipMode & oMirrorMode) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)get_Mirror(oMirrorMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_Mirror(CatTextFlipMode iMirrorMode) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)put_Mirror(iMirrorMode)); \
} \
HRESULT __stdcall  ENVTIEName::Update() \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)Update()); \
} \
HRESULT __stdcall  ENVTIEName::get_Blanking(CatBlankingMode & oBlanking) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)get_Blanking(oBlanking)); \
} \
HRESULT __stdcall  ENVTIEName::put_Blanking(CatBlankingMode iBlanking) \
{ \
return (ENVTIECALL(CATIADrawingTextProperties,ENVTIETypeLetter,ENVTIELetter)put_Blanking(iBlanking)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADrawingTextProperties(classe)    TIECATIADrawingTextProperties##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADrawingTextProperties(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADrawingTextProperties, classe) \
 \
 \
CATImplementTIEMethods(CATIADrawingTextProperties, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADrawingTextProperties, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADrawingTextProperties, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADrawingTextProperties, classe) \
 \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::get_FontName(CATBSTR & oFontName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oFontName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FontName(oFontName); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oFontName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::put_FontName(const CATBSTR & iFontName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iFontName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FontName(iFontName); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iFontName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::get_FontSize(double & oFontSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oFontSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FontSize(oFontSize); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oFontSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::put_FontSize(double iFontSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iFontSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FontSize(iFontSize); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iFontSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::get_Bold(CATLONG & oVal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oVal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Bold(oVal); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oVal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::put_Bold(CATLONG iVal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iVal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Bold(iVal); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iVal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::get_Italic(CATLONG & oval) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oval); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Italic(oval); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oval); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::put_Italic(CATLONG ival) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&ival); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Italic(ival); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&ival); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::get_Underline(CATLONG & oval) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oval); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Underline(oval); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oval); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::put_Underline(CATLONG ival) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&ival); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Underline(ival); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&ival); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::get_Overline(CATLONG & oval) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oval); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Overline(oval); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oval); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::put_Overline(CATLONG ival) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&ival); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Overline(ival); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&ival); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::get_StrikeThru(CATLONG & oval) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oval); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_StrikeThru(oval); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oval); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::put_StrikeThru(CATLONG ival) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&ival); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_StrikeThru(ival); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&ival); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::get_Superscript(CATLONG & oval) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oval); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Superscript(oval); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oval); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::put_Superscript(CATLONG ival) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&ival); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Superscript(ival); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&ival); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::get_Subscript(CATLONG & oval) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oval); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Subscript(oval); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oval); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::put_Subscript(CATLONG ival) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&ival); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Subscript(ival); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&ival); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::get_Justification(CatJustification & oJustification) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oJustification); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Justification(oJustification); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oJustification); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::put_Justification(CatJustification iJustification) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iJustification); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Justification(iJustification); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iJustification); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::get_AnchorPoint(CatTextAnchorPosition & oAnchorPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oAnchorPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnchorPoint(oAnchorPoint); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oAnchorPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::put_AnchorPoint(CatTextAnchorPosition iAnchorPoint) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iAnchorPoint); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AnchorPoint(iAnchorPoint); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iAnchorPoint); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::get_FrameType(CatTextFrameType & oTextFrameType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oTextFrameType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FrameType(oTextFrameType); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oTextFrameType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::put_FrameType(CatTextFrameType iTextFrameType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iTextFrameType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FrameType(iTextFrameType); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iTextFrameType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::ActivateFrame(CatTextFrameType iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ActivateFrame(iType); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::get_FrameName(CATBSTR & oFontName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&oFontName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FrameName(oFontName); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&oFontName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::put_FrameName(const CATBSTR & iFontName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iFontName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FrameName(iFontName); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iFontName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::get_Color(CATLONG & oColor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oColor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Color(oColor); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oColor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::put_Color(CATLONG iColor) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iColor); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Color(iColor); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iColor); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::get_Kerning(CATLONG & oVal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oVal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Kerning(oVal); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oVal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::put_Kerning(CATLONG iVal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iVal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Kerning(iVal); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iVal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::get_Mirror(CatTextFlipMode & oMirrorMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oMirrorMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Mirror(oMirrorMode); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oMirrorMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::put_Mirror(CatTextFlipMode iMirrorMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iMirrorMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Mirror(iMirrorMode); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iMirrorMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::Update() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Update(); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::get_Blanking(CatBlankingMode & oBlanking) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oBlanking); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Blanking(oBlanking); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oBlanking); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTextProperties##classe::put_Blanking(CatBlankingMode iBlanking) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iBlanking); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Blanking(iBlanking); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iBlanking); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADrawingTextProperties(classe) \
 \
 \
declare_TIE_CATIADrawingTextProperties(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingTextProperties##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingTextProperties,"CATIADrawingTextProperties",CATIADrawingTextProperties::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingTextProperties(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADrawingTextProperties, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingTextProperties##classe(classe::MetaObject(),CATIADrawingTextProperties::MetaObject(),(void *)CreateTIECATIADrawingTextProperties##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADrawingTextProperties(classe) \
 \
 \
declare_TIE_CATIADrawingTextProperties(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingTextProperties##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingTextProperties,"CATIADrawingTextProperties",CATIADrawingTextProperties::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingTextProperties(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADrawingTextProperties, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingTextProperties##classe(classe::MetaObject(),CATIADrawingTextProperties::MetaObject(),(void *)CreateTIECATIADrawingTextProperties##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADrawingTextProperties(classe) TIE_CATIADrawingTextProperties(classe)
#else
#define BOA_CATIADrawingTextProperties(classe) CATImplementBOA(CATIADrawingTextProperties, classe)
#endif

#endif
