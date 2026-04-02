#ifndef __TIE_CATIADrawingDimExtLine
#define __TIE_CATIADrawingDimExtLine

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADrawingDimExtLine.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADrawingDimExtLine */
#define declare_TIE_CATIADrawingDimExtLine(classe) \
 \
 \
class TIECATIADrawingDimExtLine##classe : public CATIADrawingDimExtLine \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADrawingDimExtLine, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ExtLineType(CATLONG & oExtLineType); \
      virtual HRESULT __stdcall get_ExtLineSlant(double & oExtLineSlant); \
      virtual HRESULT __stdcall put_ExtLineSlant(double iExtLineSlant); \
      virtual HRESULT __stdcall get_Color(CATLONG & oColorExtLine); \
      virtual HRESULT __stdcall put_Color(CATLONG iColorExtLine); \
      virtual HRESULT __stdcall get_Thickness(double & oThickExtLine); \
      virtual HRESULT __stdcall put_Thickness(double iThickExtLine); \
      virtual HRESULT __stdcall GetGeomInfo(CATLONG iIndex, CATSafeArrayVariant & oGeomInfos); \
      virtual HRESULT __stdcall GetFunnel(CATLONG iIndex, CATLONG & oMode, double & oAngle, double & oHeight, double & oWidth); \
      virtual HRESULT __stdcall SetFunnel(CATLONG iIndex, CATLONG iMode, double iAngle, double iHeight, double iWidth); \
      virtual HRESULT __stdcall GetOverrun(CATLONG iIndex, double & oOverrun); \
      virtual HRESULT __stdcall SetOverrun(CATLONG iIndex, double iOverrun); \
      virtual HRESULT __stdcall GetGap(CATLONG iIndex, double & oGap); \
      virtual HRESULT __stdcall SetGap(CATLONG iIndex, double iGap); \
      virtual HRESULT __stdcall GetVisibility(CATLONG iIndex, CATLONG & oExtlineVisibility); \
      virtual HRESULT __stdcall SetVisibility(CATLONG iIndex, CATLONG iExtlineVisibility); \
      virtual HRESULT __stdcall AddInterrupt(CATLONG iIndex, const CATSafeArrayVariant & iTwoPoints); \
      virtual HRESULT __stdcall RemoveInterrupt(CATLONG iIndex); \
      virtual HRESULT __stdcall GetInterrupt(CATLONG iIndex, CATLONG & oNbIntOnExtLine); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIADrawingDimExtLine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ExtLineType(CATLONG & oExtLineType); \
virtual HRESULT __stdcall get_ExtLineSlant(double & oExtLineSlant); \
virtual HRESULT __stdcall put_ExtLineSlant(double iExtLineSlant); \
virtual HRESULT __stdcall get_Color(CATLONG & oColorExtLine); \
virtual HRESULT __stdcall put_Color(CATLONG iColorExtLine); \
virtual HRESULT __stdcall get_Thickness(double & oThickExtLine); \
virtual HRESULT __stdcall put_Thickness(double iThickExtLine); \
virtual HRESULT __stdcall GetGeomInfo(CATLONG iIndex, CATSafeArrayVariant & oGeomInfos); \
virtual HRESULT __stdcall GetFunnel(CATLONG iIndex, CATLONG & oMode, double & oAngle, double & oHeight, double & oWidth); \
virtual HRESULT __stdcall SetFunnel(CATLONG iIndex, CATLONG iMode, double iAngle, double iHeight, double iWidth); \
virtual HRESULT __stdcall GetOverrun(CATLONG iIndex, double & oOverrun); \
virtual HRESULT __stdcall SetOverrun(CATLONG iIndex, double iOverrun); \
virtual HRESULT __stdcall GetGap(CATLONG iIndex, double & oGap); \
virtual HRESULT __stdcall SetGap(CATLONG iIndex, double iGap); \
virtual HRESULT __stdcall GetVisibility(CATLONG iIndex, CATLONG & oExtlineVisibility); \
virtual HRESULT __stdcall SetVisibility(CATLONG iIndex, CATLONG iExtlineVisibility); \
virtual HRESULT __stdcall AddInterrupt(CATLONG iIndex, const CATSafeArrayVariant & iTwoPoints); \
virtual HRESULT __stdcall RemoveInterrupt(CATLONG iIndex); \
virtual HRESULT __stdcall GetInterrupt(CATLONG iIndex, CATLONG & oNbIntOnExtLine); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIADrawingDimExtLine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ExtLineType(CATLONG & oExtLineType) \
{ \
return (ENVTIECALL(CATIADrawingDimExtLine,ENVTIETypeLetter,ENVTIELetter)get_ExtLineType(oExtLineType)); \
} \
HRESULT __stdcall  ENVTIEName::get_ExtLineSlant(double & oExtLineSlant) \
{ \
return (ENVTIECALL(CATIADrawingDimExtLine,ENVTIETypeLetter,ENVTIELetter)get_ExtLineSlant(oExtLineSlant)); \
} \
HRESULT __stdcall  ENVTIEName::put_ExtLineSlant(double iExtLineSlant) \
{ \
return (ENVTIECALL(CATIADrawingDimExtLine,ENVTIETypeLetter,ENVTIELetter)put_ExtLineSlant(iExtLineSlant)); \
} \
HRESULT __stdcall  ENVTIEName::get_Color(CATLONG & oColorExtLine) \
{ \
return (ENVTIECALL(CATIADrawingDimExtLine,ENVTIETypeLetter,ENVTIELetter)get_Color(oColorExtLine)); \
} \
HRESULT __stdcall  ENVTIEName::put_Color(CATLONG iColorExtLine) \
{ \
return (ENVTIECALL(CATIADrawingDimExtLine,ENVTIETypeLetter,ENVTIELetter)put_Color(iColorExtLine)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(double & oThickExtLine) \
{ \
return (ENVTIECALL(CATIADrawingDimExtLine,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickExtLine)); \
} \
HRESULT __stdcall  ENVTIEName::put_Thickness(double iThickExtLine) \
{ \
return (ENVTIECALL(CATIADrawingDimExtLine,ENVTIETypeLetter,ENVTIELetter)put_Thickness(iThickExtLine)); \
} \
HRESULT __stdcall  ENVTIEName::GetGeomInfo(CATLONG iIndex, CATSafeArrayVariant & oGeomInfos) \
{ \
return (ENVTIECALL(CATIADrawingDimExtLine,ENVTIETypeLetter,ENVTIELetter)GetGeomInfo(iIndex,oGeomInfos)); \
} \
HRESULT __stdcall  ENVTIEName::GetFunnel(CATLONG iIndex, CATLONG & oMode, double & oAngle, double & oHeight, double & oWidth) \
{ \
return (ENVTIECALL(CATIADrawingDimExtLine,ENVTIETypeLetter,ENVTIELetter)GetFunnel(iIndex,oMode,oAngle,oHeight,oWidth)); \
} \
HRESULT __stdcall  ENVTIEName::SetFunnel(CATLONG iIndex, CATLONG iMode, double iAngle, double iHeight, double iWidth) \
{ \
return (ENVTIECALL(CATIADrawingDimExtLine,ENVTIETypeLetter,ENVTIELetter)SetFunnel(iIndex,iMode,iAngle,iHeight,iWidth)); \
} \
HRESULT __stdcall  ENVTIEName::GetOverrun(CATLONG iIndex, double & oOverrun) \
{ \
return (ENVTIECALL(CATIADrawingDimExtLine,ENVTIETypeLetter,ENVTIELetter)GetOverrun(iIndex,oOverrun)); \
} \
HRESULT __stdcall  ENVTIEName::SetOverrun(CATLONG iIndex, double iOverrun) \
{ \
return (ENVTIECALL(CATIADrawingDimExtLine,ENVTIETypeLetter,ENVTIELetter)SetOverrun(iIndex,iOverrun)); \
} \
HRESULT __stdcall  ENVTIEName::GetGap(CATLONG iIndex, double & oGap) \
{ \
return (ENVTIECALL(CATIADrawingDimExtLine,ENVTIETypeLetter,ENVTIELetter)GetGap(iIndex,oGap)); \
} \
HRESULT __stdcall  ENVTIEName::SetGap(CATLONG iIndex, double iGap) \
{ \
return (ENVTIECALL(CATIADrawingDimExtLine,ENVTIETypeLetter,ENVTIELetter)SetGap(iIndex,iGap)); \
} \
HRESULT __stdcall  ENVTIEName::GetVisibility(CATLONG iIndex, CATLONG & oExtlineVisibility) \
{ \
return (ENVTIECALL(CATIADrawingDimExtLine,ENVTIETypeLetter,ENVTIELetter)GetVisibility(iIndex,oExtlineVisibility)); \
} \
HRESULT __stdcall  ENVTIEName::SetVisibility(CATLONG iIndex, CATLONG iExtlineVisibility) \
{ \
return (ENVTIECALL(CATIADrawingDimExtLine,ENVTIETypeLetter,ENVTIELetter)SetVisibility(iIndex,iExtlineVisibility)); \
} \
HRESULT __stdcall  ENVTIEName::AddInterrupt(CATLONG iIndex, const CATSafeArrayVariant & iTwoPoints) \
{ \
return (ENVTIECALL(CATIADrawingDimExtLine,ENVTIETypeLetter,ENVTIELetter)AddInterrupt(iIndex,iTwoPoints)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveInterrupt(CATLONG iIndex) \
{ \
return (ENVTIECALL(CATIADrawingDimExtLine,ENVTIETypeLetter,ENVTIELetter)RemoveInterrupt(iIndex)); \
} \
HRESULT __stdcall  ENVTIEName::GetInterrupt(CATLONG iIndex, CATLONG & oNbIntOnExtLine) \
{ \
return (ENVTIECALL(CATIADrawingDimExtLine,ENVTIETypeLetter,ENVTIELetter)GetInterrupt(iIndex,oNbIntOnExtLine)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADrawingDimExtLine,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADrawingDimExtLine,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingDimExtLine,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingDimExtLine,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADrawingDimExtLine,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADrawingDimExtLine(classe)    TIECATIADrawingDimExtLine##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADrawingDimExtLine(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADrawingDimExtLine, classe) \
 \
 \
CATImplementTIEMethods(CATIADrawingDimExtLine, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADrawingDimExtLine, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADrawingDimExtLine, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADrawingDimExtLine, classe) \
 \
HRESULT __stdcall  TIECATIADrawingDimExtLine##classe::get_ExtLineType(CATLONG & oExtLineType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oExtLineType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExtLineType(oExtLineType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oExtLineType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimExtLine##classe::get_ExtLineSlant(double & oExtLineSlant) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oExtLineSlant); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExtLineSlant(oExtLineSlant); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oExtLineSlant); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimExtLine##classe::put_ExtLineSlant(double iExtLineSlant) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iExtLineSlant); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ExtLineSlant(iExtLineSlant); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iExtLineSlant); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimExtLine##classe::get_Color(CATLONG & oColorExtLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oColorExtLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Color(oColorExtLine); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oColorExtLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimExtLine##classe::put_Color(CATLONG iColorExtLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iColorExtLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Color(iColorExtLine); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iColorExtLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimExtLine##classe::get_Thickness(double & oThickExtLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oThickExtLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickExtLine); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oThickExtLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimExtLine##classe::put_Thickness(double iThickExtLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iThickExtLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Thickness(iThickExtLine); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iThickExtLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimExtLine##classe::GetGeomInfo(CATLONG iIndex, CATSafeArrayVariant & oGeomInfos) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iIndex,&oGeomInfos); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGeomInfo(iIndex,oGeomInfos); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iIndex,&oGeomInfos); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimExtLine##classe::GetFunnel(CATLONG iIndex, CATLONG & oMode, double & oAngle, double & oHeight, double & oWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iIndex,&oMode,&oAngle,&oHeight,&oWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetFunnel(iIndex,oMode,oAngle,oHeight,oWidth); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iIndex,&oMode,&oAngle,&oHeight,&oWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimExtLine##classe::SetFunnel(CATLONG iIndex, CATLONG iMode, double iAngle, double iHeight, double iWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iIndex,&iMode,&iAngle,&iHeight,&iWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetFunnel(iIndex,iMode,iAngle,iHeight,iWidth); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iIndex,&iMode,&iAngle,&iHeight,&iWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimExtLine##classe::GetOverrun(CATLONG iIndex, double & oOverrun) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iIndex,&oOverrun); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOverrun(iIndex,oOverrun); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iIndex,&oOverrun); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimExtLine##classe::SetOverrun(CATLONG iIndex, double iOverrun) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iIndex,&iOverrun); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOverrun(iIndex,iOverrun); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iIndex,&iOverrun); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimExtLine##classe::GetGap(CATLONG iIndex, double & oGap) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iIndex,&oGap); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGap(iIndex,oGap); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iIndex,&oGap); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimExtLine##classe::SetGap(CATLONG iIndex, double iGap) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iIndex,&iGap); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetGap(iIndex,iGap); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iIndex,&iGap); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimExtLine##classe::GetVisibility(CATLONG iIndex, CATLONG & oExtlineVisibility) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iIndex,&oExtlineVisibility); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetVisibility(iIndex,oExtlineVisibility); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iIndex,&oExtlineVisibility); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimExtLine##classe::SetVisibility(CATLONG iIndex, CATLONG iExtlineVisibility) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iIndex,&iExtlineVisibility); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetVisibility(iIndex,iExtlineVisibility); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iIndex,&iExtlineVisibility); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimExtLine##classe::AddInterrupt(CATLONG iIndex, const CATSafeArrayVariant & iTwoPoints) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iIndex,&iTwoPoints); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddInterrupt(iIndex,iTwoPoints); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iIndex,&iTwoPoints); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimExtLine##classe::RemoveInterrupt(CATLONG iIndex) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iIndex); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveInterrupt(iIndex); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iIndex); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimExtLine##classe::GetInterrupt(CATLONG iIndex, CATLONG & oNbIntOnExtLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iIndex,&oNbIntOnExtLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInterrupt(iIndex,oNbIntOnExtLine); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iIndex,&oNbIntOnExtLine); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingDimExtLine##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingDimExtLine##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingDimExtLine##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingDimExtLine##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingDimExtLine##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADrawingDimExtLine(classe) \
 \
 \
declare_TIE_CATIADrawingDimExtLine(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingDimExtLine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingDimExtLine,"CATIADrawingDimExtLine",CATIADrawingDimExtLine::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingDimExtLine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADrawingDimExtLine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingDimExtLine##classe(classe::MetaObject(),CATIADrawingDimExtLine::MetaObject(),(void *)CreateTIECATIADrawingDimExtLine##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADrawingDimExtLine(classe) \
 \
 \
declare_TIE_CATIADrawingDimExtLine(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingDimExtLine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingDimExtLine,"CATIADrawingDimExtLine",CATIADrawingDimExtLine::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingDimExtLine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADrawingDimExtLine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingDimExtLine##classe(classe::MetaObject(),CATIADrawingDimExtLine::MetaObject(),(void *)CreateTIECATIADrawingDimExtLine##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADrawingDimExtLine(classe) TIE_CATIADrawingDimExtLine(classe)
#else
#define BOA_CATIADrawingDimExtLine(classe) CATImplementBOA(CATIADrawingDimExtLine, classe)
#endif

#endif
