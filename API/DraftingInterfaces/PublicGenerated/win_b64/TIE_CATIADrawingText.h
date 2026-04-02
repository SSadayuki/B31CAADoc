#ifndef __TIE_CATIADrawingText
#define __TIE_CATIADrawingText

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADrawingText.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADrawingText */
#define declare_TIE_CATIADrawingText(classe) \
 \
 \
class TIECATIADrawingText##classe : public CATIADrawingText \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADrawingText, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Text(CATBSTR & oText); \
      virtual HRESULT __stdcall put_Text(const CATBSTR & iText); \
      virtual HRESULT __stdcall get_x(double & oxposition); \
      virtual HRESULT __stdcall put_x(double oxposition); \
      virtual HRESULT __stdcall get_y(double & oyposition); \
      virtual HRESULT __stdcall put_y(double iyposition); \
      virtual HRESULT __stdcall get_Angle(double & oAngle); \
      virtual HRESULT __stdcall put_Angle(double iAngle); \
      virtual HRESULT __stdcall get_OrientationReference(CATLONG & oOri); \
      virtual HRESULT __stdcall put_OrientationReference(CATLONG iOri); \
      virtual HRESULT __stdcall get_WrappingWidth(double & oTewtWrapping); \
      virtual HRESULT __stdcall put_WrappingWidth(double iTewtWrapping); \
      virtual HRESULT __stdcall get_AnchorPosition(CatTextAnchorPosition & oTextAnchorPos); \
      virtual HRESULT __stdcall put_AnchorPosition(CatTextAnchorPosition iTextAnchorPos); \
      virtual HRESULT __stdcall get_AssociativeElement(CATBaseDispatch *& oAssociativeElement); \
      virtual HRESULT __stdcall put_AssociativeElement(CATBaseDispatch * iAssociativeElement); \
      virtual HRESULT __stdcall get_FrameType(CatTextFrameType & oTextFrameType); \
      virtual HRESULT __stdcall put_FrameType(CatTextFrameType iTextFrameType); \
      virtual HRESULT __stdcall ActivateFrame(CatTextFrameType itype); \
      virtual HRESULT __stdcall get_FrameName(CATBSTR & oFontName); \
      virtual HRESULT __stdcall put_FrameName(const CATBSTR & iFontName); \
      virtual HRESULT __stdcall SetParameterOnSubString(CatTextProperty iParam, CATLONG iFirst, CATLONG inbCharacter, CATLONG iVal); \
      virtual HRESULT __stdcall GetParameterOnSubString(CatTextProperty iParam, CATLONG iFirst, CATLONG inbCharacter, CATLONG & oval); \
      virtual HRESULT __stdcall SetFontSize(CATLONG iFirst, CATLONG inbCharacter, double iFontSize); \
      virtual HRESULT __stdcall GetFontSize(CATLONG iFirst, CATLONG inbCharacter, double & oFontSize); \
      virtual HRESULT __stdcall SetFontName(CATLONG iFirst, CATLONG inbCharacter, const CATBSTR & iFontName); \
      virtual HRESULT __stdcall GetFontName(CATLONG iFirst, CATLONG inbCharacter, CATBSTR & oFontName); \
      virtual HRESULT __stdcall InsertVariable(CATLONG iFirst, CATLONG inbCharacter, CATBaseDispatch * ibase); \
      virtual HRESULT __stdcall get_Leaders(CATIADrawingLeaders *& oLeaders); \
      virtual HRESULT __stdcall SetModifiableIn2DComponentInstances(); \
      virtual HRESULT __stdcall GetModifiableIn2DComponentInstances(CAT_VARIANT_BOOL & oModifiable); \
      virtual HRESULT __stdcall get_NbLink(CATLONG & oNbLink); \
      virtual HRESULT __stdcall GetParameterLink(CATLONG iIndex, CATBaseDispatch *& oPointedParm); \
      virtual HRESULT __stdcall get_TextProperties(CATIADrawingTextProperties *& oTextProperties); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIADrawingText(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Text(CATBSTR & oText); \
virtual HRESULT __stdcall put_Text(const CATBSTR & iText); \
virtual HRESULT __stdcall get_x(double & oxposition); \
virtual HRESULT __stdcall put_x(double oxposition); \
virtual HRESULT __stdcall get_y(double & oyposition); \
virtual HRESULT __stdcall put_y(double iyposition); \
virtual HRESULT __stdcall get_Angle(double & oAngle); \
virtual HRESULT __stdcall put_Angle(double iAngle); \
virtual HRESULT __stdcall get_OrientationReference(CATLONG & oOri); \
virtual HRESULT __stdcall put_OrientationReference(CATLONG iOri); \
virtual HRESULT __stdcall get_WrappingWidth(double & oTewtWrapping); \
virtual HRESULT __stdcall put_WrappingWidth(double iTewtWrapping); \
virtual HRESULT __stdcall get_AnchorPosition(CatTextAnchorPosition & oTextAnchorPos); \
virtual HRESULT __stdcall put_AnchorPosition(CatTextAnchorPosition iTextAnchorPos); \
virtual HRESULT __stdcall get_AssociativeElement(CATBaseDispatch *& oAssociativeElement); \
virtual HRESULT __stdcall put_AssociativeElement(CATBaseDispatch * iAssociativeElement); \
virtual HRESULT __stdcall get_FrameType(CatTextFrameType & oTextFrameType); \
virtual HRESULT __stdcall put_FrameType(CatTextFrameType iTextFrameType); \
virtual HRESULT __stdcall ActivateFrame(CatTextFrameType itype); \
virtual HRESULT __stdcall get_FrameName(CATBSTR & oFontName); \
virtual HRESULT __stdcall put_FrameName(const CATBSTR & iFontName); \
virtual HRESULT __stdcall SetParameterOnSubString(CatTextProperty iParam, CATLONG iFirst, CATLONG inbCharacter, CATLONG iVal); \
virtual HRESULT __stdcall GetParameterOnSubString(CatTextProperty iParam, CATLONG iFirst, CATLONG inbCharacter, CATLONG & oval); \
virtual HRESULT __stdcall SetFontSize(CATLONG iFirst, CATLONG inbCharacter, double iFontSize); \
virtual HRESULT __stdcall GetFontSize(CATLONG iFirst, CATLONG inbCharacter, double & oFontSize); \
virtual HRESULT __stdcall SetFontName(CATLONG iFirst, CATLONG inbCharacter, const CATBSTR & iFontName); \
virtual HRESULT __stdcall GetFontName(CATLONG iFirst, CATLONG inbCharacter, CATBSTR & oFontName); \
virtual HRESULT __stdcall InsertVariable(CATLONG iFirst, CATLONG inbCharacter, CATBaseDispatch * ibase); \
virtual HRESULT __stdcall get_Leaders(CATIADrawingLeaders *& oLeaders); \
virtual HRESULT __stdcall SetModifiableIn2DComponentInstances(); \
virtual HRESULT __stdcall GetModifiableIn2DComponentInstances(CAT_VARIANT_BOOL & oModifiable); \
virtual HRESULT __stdcall get_NbLink(CATLONG & oNbLink); \
virtual HRESULT __stdcall GetParameterLink(CATLONG iIndex, CATBaseDispatch *& oPointedParm); \
virtual HRESULT __stdcall get_TextProperties(CATIADrawingTextProperties *& oTextProperties); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIADrawingText(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Text(CATBSTR & oText) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)get_Text(oText)); \
} \
HRESULT __stdcall  ENVTIEName::put_Text(const CATBSTR & iText) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)put_Text(iText)); \
} \
HRESULT __stdcall  ENVTIEName::get_x(double & oxposition) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)get_x(oxposition)); \
} \
HRESULT __stdcall  ENVTIEName::put_x(double oxposition) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)put_x(oxposition)); \
} \
HRESULT __stdcall  ENVTIEName::get_y(double & oyposition) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)get_y(oyposition)); \
} \
HRESULT __stdcall  ENVTIEName::put_y(double iyposition) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)put_y(iyposition)); \
} \
HRESULT __stdcall  ENVTIEName::get_Angle(double & oAngle) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)get_Angle(oAngle)); \
} \
HRESULT __stdcall  ENVTIEName::put_Angle(double iAngle) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)put_Angle(iAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_OrientationReference(CATLONG & oOri) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)get_OrientationReference(oOri)); \
} \
HRESULT __stdcall  ENVTIEName::put_OrientationReference(CATLONG iOri) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)put_OrientationReference(iOri)); \
} \
HRESULT __stdcall  ENVTIEName::get_WrappingWidth(double & oTewtWrapping) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)get_WrappingWidth(oTewtWrapping)); \
} \
HRESULT __stdcall  ENVTIEName::put_WrappingWidth(double iTewtWrapping) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)put_WrappingWidth(iTewtWrapping)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnchorPosition(CatTextAnchorPosition & oTextAnchorPos) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)get_AnchorPosition(oTextAnchorPos)); \
} \
HRESULT __stdcall  ENVTIEName::put_AnchorPosition(CatTextAnchorPosition iTextAnchorPos) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)put_AnchorPosition(iTextAnchorPos)); \
} \
HRESULT __stdcall  ENVTIEName::get_AssociativeElement(CATBaseDispatch *& oAssociativeElement) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)get_AssociativeElement(oAssociativeElement)); \
} \
HRESULT __stdcall  ENVTIEName::put_AssociativeElement(CATBaseDispatch * iAssociativeElement) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)put_AssociativeElement(iAssociativeElement)); \
} \
HRESULT __stdcall  ENVTIEName::get_FrameType(CatTextFrameType & oTextFrameType) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)get_FrameType(oTextFrameType)); \
} \
HRESULT __stdcall  ENVTIEName::put_FrameType(CatTextFrameType iTextFrameType) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)put_FrameType(iTextFrameType)); \
} \
HRESULT __stdcall  ENVTIEName::ActivateFrame(CatTextFrameType itype) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)ActivateFrame(itype)); \
} \
HRESULT __stdcall  ENVTIEName::get_FrameName(CATBSTR & oFontName) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)get_FrameName(oFontName)); \
} \
HRESULT __stdcall  ENVTIEName::put_FrameName(const CATBSTR & iFontName) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)put_FrameName(iFontName)); \
} \
HRESULT __stdcall  ENVTIEName::SetParameterOnSubString(CatTextProperty iParam, CATLONG iFirst, CATLONG inbCharacter, CATLONG iVal) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)SetParameterOnSubString(iParam,iFirst,inbCharacter,iVal)); \
} \
HRESULT __stdcall  ENVTIEName::GetParameterOnSubString(CatTextProperty iParam, CATLONG iFirst, CATLONG inbCharacter, CATLONG & oval) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)GetParameterOnSubString(iParam,iFirst,inbCharacter,oval)); \
} \
HRESULT __stdcall  ENVTIEName::SetFontSize(CATLONG iFirst, CATLONG inbCharacter, double iFontSize) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)SetFontSize(iFirst,inbCharacter,iFontSize)); \
} \
HRESULT __stdcall  ENVTIEName::GetFontSize(CATLONG iFirst, CATLONG inbCharacter, double & oFontSize) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)GetFontSize(iFirst,inbCharacter,oFontSize)); \
} \
HRESULT __stdcall  ENVTIEName::SetFontName(CATLONG iFirst, CATLONG inbCharacter, const CATBSTR & iFontName) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)SetFontName(iFirst,inbCharacter,iFontName)); \
} \
HRESULT __stdcall  ENVTIEName::GetFontName(CATLONG iFirst, CATLONG inbCharacter, CATBSTR & oFontName) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)GetFontName(iFirst,inbCharacter,oFontName)); \
} \
HRESULT __stdcall  ENVTIEName::InsertVariable(CATLONG iFirst, CATLONG inbCharacter, CATBaseDispatch * ibase) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)InsertVariable(iFirst,inbCharacter,ibase)); \
} \
HRESULT __stdcall  ENVTIEName::get_Leaders(CATIADrawingLeaders *& oLeaders) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)get_Leaders(oLeaders)); \
} \
HRESULT __stdcall  ENVTIEName::SetModifiableIn2DComponentInstances() \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)SetModifiableIn2DComponentInstances()); \
} \
HRESULT __stdcall  ENVTIEName::GetModifiableIn2DComponentInstances(CAT_VARIANT_BOOL & oModifiable) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)GetModifiableIn2DComponentInstances(oModifiable)); \
} \
HRESULT __stdcall  ENVTIEName::get_NbLink(CATLONG & oNbLink) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)get_NbLink(oNbLink)); \
} \
HRESULT __stdcall  ENVTIEName::GetParameterLink(CATLONG iIndex, CATBaseDispatch *& oPointedParm) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)GetParameterLink(iIndex,oPointedParm)); \
} \
HRESULT __stdcall  ENVTIEName::get_TextProperties(CATIADrawingTextProperties *& oTextProperties) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)get_TextProperties(oTextProperties)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADrawingText,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADrawingText(classe)    TIECATIADrawingText##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADrawingText(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADrawingText, classe) \
 \
 \
CATImplementTIEMethods(CATIADrawingText, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADrawingText, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADrawingText, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADrawingText, classe) \
 \
HRESULT __stdcall  TIECATIADrawingText##classe::get_Text(CATBSTR & oText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Text(oText); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oText); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::put_Text(const CATBSTR & iText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Text(iText); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iText); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::get_x(double & oxposition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oxposition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_x(oxposition); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oxposition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::put_x(double oxposition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oxposition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_x(oxposition); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oxposition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::get_y(double & oyposition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oyposition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_y(oyposition); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oyposition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::put_y(double iyposition) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iyposition); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_y(iyposition); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iyposition); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::get_Angle(double & oAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Angle(oAngle); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::put_Angle(double iAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Angle(iAngle); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::get_OrientationReference(CATLONG & oOri) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oOri); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OrientationReference(oOri); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oOri); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::put_OrientationReference(CATLONG iOri) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iOri); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OrientationReference(iOri); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iOri); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::get_WrappingWidth(double & oTewtWrapping) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oTewtWrapping); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_WrappingWidth(oTewtWrapping); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oTewtWrapping); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::put_WrappingWidth(double iTewtWrapping) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iTewtWrapping); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_WrappingWidth(iTewtWrapping); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iTewtWrapping); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::get_AnchorPosition(CatTextAnchorPosition & oTextAnchorPos) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oTextAnchorPos); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnchorPosition(oTextAnchorPos); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oTextAnchorPos); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::put_AnchorPosition(CatTextAnchorPosition iTextAnchorPos) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iTextAnchorPos); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AnchorPosition(iTextAnchorPos); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iTextAnchorPos); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::get_AssociativeElement(CATBaseDispatch *& oAssociativeElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oAssociativeElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AssociativeElement(oAssociativeElement); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oAssociativeElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::put_AssociativeElement(CATBaseDispatch * iAssociativeElement) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iAssociativeElement); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AssociativeElement(iAssociativeElement); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iAssociativeElement); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::get_FrameType(CatTextFrameType & oTextFrameType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oTextFrameType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FrameType(oTextFrameType); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oTextFrameType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::put_FrameType(CatTextFrameType iTextFrameType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iTextFrameType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FrameType(iTextFrameType); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iTextFrameType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::ActivateFrame(CatTextFrameType itype) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&itype); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ActivateFrame(itype); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&itype); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::get_FrameName(CATBSTR & oFontName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oFontName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_FrameName(oFontName); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oFontName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::put_FrameName(const CATBSTR & iFontName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&iFontName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_FrameName(iFontName); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&iFontName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::SetParameterOnSubString(CatTextProperty iParam, CATLONG iFirst, CATLONG inbCharacter, CATLONG iVal) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iParam,&iFirst,&inbCharacter,&iVal); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetParameterOnSubString(iParam,iFirst,inbCharacter,iVal); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iParam,&iFirst,&inbCharacter,&iVal); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::GetParameterOnSubString(CatTextProperty iParam, CATLONG iFirst, CATLONG inbCharacter, CATLONG & oval) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iParam,&iFirst,&inbCharacter,&oval); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetParameterOnSubString(iParam,iFirst,inbCharacter,oval); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iParam,&iFirst,&inbCharacter,&oval); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::SetFontSize(CATLONG iFirst, CATLONG inbCharacter, double iFontSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iFirst,&inbCharacter,&iFontSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFontSize(iFirst,inbCharacter,iFontSize); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iFirst,&inbCharacter,&iFontSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::GetFontSize(CATLONG iFirst, CATLONG inbCharacter, double & oFontSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iFirst,&inbCharacter,&oFontSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFontSize(iFirst,inbCharacter,oFontSize); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iFirst,&inbCharacter,&oFontSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::SetFontName(CATLONG iFirst, CATLONG inbCharacter, const CATBSTR & iFontName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iFirst,&inbCharacter,&iFontName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFontName(iFirst,inbCharacter,iFontName); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iFirst,&inbCharacter,&iFontName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::GetFontName(CATLONG iFirst, CATLONG inbCharacter, CATBSTR & oFontName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iFirst,&inbCharacter,&oFontName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFontName(iFirst,inbCharacter,oFontName); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iFirst,&inbCharacter,&oFontName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::InsertVariable(CATLONG iFirst, CATLONG inbCharacter, CATBaseDispatch * ibase) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iFirst,&inbCharacter,&ibase); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InsertVariable(iFirst,inbCharacter,ibase); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iFirst,&inbCharacter,&ibase); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::get_Leaders(CATIADrawingLeaders *& oLeaders) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oLeaders); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Leaders(oLeaders); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oLeaders); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::SetModifiableIn2DComponentInstances() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetModifiableIn2DComponentInstances(); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::GetModifiableIn2DComponentInstances(CAT_VARIANT_BOOL & oModifiable) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oModifiable); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetModifiableIn2DComponentInstances(oModifiable); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oModifiable); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::get_NbLink(CATLONG & oNbLink) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oNbLink); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NbLink(oNbLink); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oNbLink); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::GetParameterLink(CATLONG iIndex, CATBaseDispatch *& oPointedParm) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iIndex,&oPointedParm); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetParameterLink(iIndex,oPointedParm); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iIndex,&oPointedParm); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingText##classe::get_TextProperties(CATIADrawingTextProperties *& oTextProperties) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oTextProperties); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TextProperties(oTextProperties); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oTextProperties); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingText##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingText##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingText##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingText##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingText##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADrawingText(classe) \
 \
 \
declare_TIE_CATIADrawingText(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingText##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingText,"CATIADrawingText",CATIADrawingText::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingText(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADrawingText, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingText##classe(classe::MetaObject(),CATIADrawingText::MetaObject(),(void *)CreateTIECATIADrawingText##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADrawingText(classe) \
 \
 \
declare_TIE_CATIADrawingText(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingText##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingText,"CATIADrawingText",CATIADrawingText::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingText(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADrawingText, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingText##classe(classe::MetaObject(),CATIADrawingText::MetaObject(),(void *)CreateTIECATIADrawingText##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADrawingText(classe) TIE_CATIADrawingText(classe)
#else
#define BOA_CATIADrawingText(classe) CATImplementBOA(CATIADrawingText, classe)
#endif

#endif
