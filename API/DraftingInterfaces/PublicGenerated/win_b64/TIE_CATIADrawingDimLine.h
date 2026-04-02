#ifndef __TIE_CATIADrawingDimLine
#define __TIE_CATIADrawingDimLine

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADrawingDimLine.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADrawingDimLine */
#define declare_TIE_CATIADrawingDimLine(classe) \
 \
 \
class TIECATIADrawingDimLine##classe : public CATIADrawingDimLine \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADrawingDimLine, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_DimLineType(CATLONG & odimLineType); \
      virtual HRESULT __stdcall get_DimLineRep(CatDimLineRep & odimLineRep); \
      virtual HRESULT __stdcall get_DimLineGraphRep(CatDimLineGraphRep & odimLineGraphRep); \
      virtual HRESULT __stdcall put_DimLineGraphRep(CatDimLineGraphRep idimLineGraphRep); \
      virtual HRESULT __stdcall get_DimLineOrientation(CatDimOrientation & odimLineOrient); \
      virtual HRESULT __stdcall put_DimLineOrientation(CatDimOrientation idimLineOrient); \
      virtual HRESULT __stdcall get_DimLineReference(CatDimReference & odimLineRef); \
      virtual HRESULT __stdcall put_DimLineReference(CatDimReference idimLineRef); \
      virtual HRESULT __stdcall get_Color(CATLONG & oColorDimLine); \
      virtual HRESULT __stdcall put_Color(CATLONG iColorDimLine); \
      virtual HRESULT __stdcall get_Thickness(double & oThickDimLine); \
      virtual HRESULT __stdcall put_Thickness(double iThickDimLine); \
      virtual HRESULT __stdcall GetGeomInfo(CATSafeArrayVariant & oGeomInfos); \
      virtual HRESULT __stdcall GetSymbType(CATLONG Index, CatDimSymbols & oTypeSymb); \
      virtual HRESULT __stdcall SetSymbType(CATLONG Index, CatDimSymbols iSymbType); \
      virtual HRESULT __stdcall GetSymbColor(CATLONG Index, CATLONG & oColorSymb); \
      virtual HRESULT __stdcall SetSymbColor(CATLONG Index, CATLONG iColorSymb); \
      virtual HRESULT __stdcall GetSymbThickness(CATLONG Index, double & oThickSymb); \
      virtual HRESULT __stdcall SetSymbThickness(CATLONG Index, double iThickSymb); \
      virtual HRESULT __stdcall GetDimLineDir(double & oDirX, double & oDirY); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIADrawingDimLine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_DimLineType(CATLONG & odimLineType); \
virtual HRESULT __stdcall get_DimLineRep(CatDimLineRep & odimLineRep); \
virtual HRESULT __stdcall get_DimLineGraphRep(CatDimLineGraphRep & odimLineGraphRep); \
virtual HRESULT __stdcall put_DimLineGraphRep(CatDimLineGraphRep idimLineGraphRep); \
virtual HRESULT __stdcall get_DimLineOrientation(CatDimOrientation & odimLineOrient); \
virtual HRESULT __stdcall put_DimLineOrientation(CatDimOrientation idimLineOrient); \
virtual HRESULT __stdcall get_DimLineReference(CatDimReference & odimLineRef); \
virtual HRESULT __stdcall put_DimLineReference(CatDimReference idimLineRef); \
virtual HRESULT __stdcall get_Color(CATLONG & oColorDimLine); \
virtual HRESULT __stdcall put_Color(CATLONG iColorDimLine); \
virtual HRESULT __stdcall get_Thickness(double & oThickDimLine); \
virtual HRESULT __stdcall put_Thickness(double iThickDimLine); \
virtual HRESULT __stdcall GetGeomInfo(CATSafeArrayVariant & oGeomInfos); \
virtual HRESULT __stdcall GetSymbType(CATLONG Index, CatDimSymbols & oTypeSymb); \
virtual HRESULT __stdcall SetSymbType(CATLONG Index, CatDimSymbols iSymbType); \
virtual HRESULT __stdcall GetSymbColor(CATLONG Index, CATLONG & oColorSymb); \
virtual HRESULT __stdcall SetSymbColor(CATLONG Index, CATLONG iColorSymb); \
virtual HRESULT __stdcall GetSymbThickness(CATLONG Index, double & oThickSymb); \
virtual HRESULT __stdcall SetSymbThickness(CATLONG Index, double iThickSymb); \
virtual HRESULT __stdcall GetDimLineDir(double & oDirX, double & oDirY); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIADrawingDimLine(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_DimLineType(CATLONG & odimLineType) \
{ \
return (ENVTIECALL(CATIADrawingDimLine,ENVTIETypeLetter,ENVTIELetter)get_DimLineType(odimLineType)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimLineRep(CatDimLineRep & odimLineRep) \
{ \
return (ENVTIECALL(CATIADrawingDimLine,ENVTIETypeLetter,ENVTIELetter)get_DimLineRep(odimLineRep)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimLineGraphRep(CatDimLineGraphRep & odimLineGraphRep) \
{ \
return (ENVTIECALL(CATIADrawingDimLine,ENVTIETypeLetter,ENVTIELetter)get_DimLineGraphRep(odimLineGraphRep)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimLineGraphRep(CatDimLineGraphRep idimLineGraphRep) \
{ \
return (ENVTIECALL(CATIADrawingDimLine,ENVTIETypeLetter,ENVTIELetter)put_DimLineGraphRep(idimLineGraphRep)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimLineOrientation(CatDimOrientation & odimLineOrient) \
{ \
return (ENVTIECALL(CATIADrawingDimLine,ENVTIETypeLetter,ENVTIELetter)get_DimLineOrientation(odimLineOrient)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimLineOrientation(CatDimOrientation idimLineOrient) \
{ \
return (ENVTIECALL(CATIADrawingDimLine,ENVTIETypeLetter,ENVTIELetter)put_DimLineOrientation(idimLineOrient)); \
} \
HRESULT __stdcall  ENVTIEName::get_DimLineReference(CatDimReference & odimLineRef) \
{ \
return (ENVTIECALL(CATIADrawingDimLine,ENVTIETypeLetter,ENVTIELetter)get_DimLineReference(odimLineRef)); \
} \
HRESULT __stdcall  ENVTIEName::put_DimLineReference(CatDimReference idimLineRef) \
{ \
return (ENVTIECALL(CATIADrawingDimLine,ENVTIETypeLetter,ENVTIELetter)put_DimLineReference(idimLineRef)); \
} \
HRESULT __stdcall  ENVTIEName::get_Color(CATLONG & oColorDimLine) \
{ \
return (ENVTIECALL(CATIADrawingDimLine,ENVTIETypeLetter,ENVTIELetter)get_Color(oColorDimLine)); \
} \
HRESULT __stdcall  ENVTIEName::put_Color(CATLONG iColorDimLine) \
{ \
return (ENVTIECALL(CATIADrawingDimLine,ENVTIETypeLetter,ENVTIELetter)put_Color(iColorDimLine)); \
} \
HRESULT __stdcall  ENVTIEName::get_Thickness(double & oThickDimLine) \
{ \
return (ENVTIECALL(CATIADrawingDimLine,ENVTIETypeLetter,ENVTIELetter)get_Thickness(oThickDimLine)); \
} \
HRESULT __stdcall  ENVTIEName::put_Thickness(double iThickDimLine) \
{ \
return (ENVTIECALL(CATIADrawingDimLine,ENVTIETypeLetter,ENVTIELetter)put_Thickness(iThickDimLine)); \
} \
HRESULT __stdcall  ENVTIEName::GetGeomInfo(CATSafeArrayVariant & oGeomInfos) \
{ \
return (ENVTIECALL(CATIADrawingDimLine,ENVTIETypeLetter,ENVTIELetter)GetGeomInfo(oGeomInfos)); \
} \
HRESULT __stdcall  ENVTIEName::GetSymbType(CATLONG Index, CatDimSymbols & oTypeSymb) \
{ \
return (ENVTIECALL(CATIADrawingDimLine,ENVTIETypeLetter,ENVTIELetter)GetSymbType(Index,oTypeSymb)); \
} \
HRESULT __stdcall  ENVTIEName::SetSymbType(CATLONG Index, CatDimSymbols iSymbType) \
{ \
return (ENVTIECALL(CATIADrawingDimLine,ENVTIETypeLetter,ENVTIELetter)SetSymbType(Index,iSymbType)); \
} \
HRESULT __stdcall  ENVTIEName::GetSymbColor(CATLONG Index, CATLONG & oColorSymb) \
{ \
return (ENVTIECALL(CATIADrawingDimLine,ENVTIETypeLetter,ENVTIELetter)GetSymbColor(Index,oColorSymb)); \
} \
HRESULT __stdcall  ENVTIEName::SetSymbColor(CATLONG Index, CATLONG iColorSymb) \
{ \
return (ENVTIECALL(CATIADrawingDimLine,ENVTIETypeLetter,ENVTIELetter)SetSymbColor(Index,iColorSymb)); \
} \
HRESULT __stdcall  ENVTIEName::GetSymbThickness(CATLONG Index, double & oThickSymb) \
{ \
return (ENVTIECALL(CATIADrawingDimLine,ENVTIETypeLetter,ENVTIELetter)GetSymbThickness(Index,oThickSymb)); \
} \
HRESULT __stdcall  ENVTIEName::SetSymbThickness(CATLONG Index, double iThickSymb) \
{ \
return (ENVTIECALL(CATIADrawingDimLine,ENVTIETypeLetter,ENVTIELetter)SetSymbThickness(Index,iThickSymb)); \
} \
HRESULT __stdcall  ENVTIEName::GetDimLineDir(double & oDirX, double & oDirY) \
{ \
return (ENVTIECALL(CATIADrawingDimLine,ENVTIETypeLetter,ENVTIELetter)GetDimLineDir(oDirX,oDirY)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADrawingDimLine,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADrawingDimLine,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingDimLine,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingDimLine,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADrawingDimLine,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADrawingDimLine(classe)    TIECATIADrawingDimLine##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADrawingDimLine(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADrawingDimLine, classe) \
 \
 \
CATImplementTIEMethods(CATIADrawingDimLine, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADrawingDimLine, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADrawingDimLine, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADrawingDimLine, classe) \
 \
HRESULT __stdcall  TIECATIADrawingDimLine##classe::get_DimLineType(CATLONG & odimLineType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&odimLineType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimLineType(odimLineType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&odimLineType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimLine##classe::get_DimLineRep(CatDimLineRep & odimLineRep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&odimLineRep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimLineRep(odimLineRep); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&odimLineRep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimLine##classe::get_DimLineGraphRep(CatDimLineGraphRep & odimLineGraphRep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&odimLineGraphRep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimLineGraphRep(odimLineGraphRep); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&odimLineGraphRep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimLine##classe::put_DimLineGraphRep(CatDimLineGraphRep idimLineGraphRep) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&idimLineGraphRep); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimLineGraphRep(idimLineGraphRep); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&idimLineGraphRep); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimLine##classe::get_DimLineOrientation(CatDimOrientation & odimLineOrient) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&odimLineOrient); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimLineOrientation(odimLineOrient); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&odimLineOrient); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimLine##classe::put_DimLineOrientation(CatDimOrientation idimLineOrient) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&idimLineOrient); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimLineOrientation(idimLineOrient); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&idimLineOrient); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimLine##classe::get_DimLineReference(CatDimReference & odimLineRef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&odimLineRef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DimLineReference(odimLineRef); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&odimLineRef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimLine##classe::put_DimLineReference(CatDimReference idimLineRef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&idimLineRef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DimLineReference(idimLineRef); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&idimLineRef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimLine##classe::get_Color(CATLONG & oColorDimLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oColorDimLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Color(oColorDimLine); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oColorDimLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimLine##classe::put_Color(CATLONG iColorDimLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iColorDimLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Color(iColorDimLine); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iColorDimLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimLine##classe::get_Thickness(double & oThickDimLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oThickDimLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Thickness(oThickDimLine); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oThickDimLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimLine##classe::put_Thickness(double iThickDimLine) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iThickDimLine); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Thickness(iThickDimLine); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iThickDimLine); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimLine##classe::GetGeomInfo(CATSafeArrayVariant & oGeomInfos) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oGeomInfos); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetGeomInfo(oGeomInfos); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oGeomInfos); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimLine##classe::GetSymbType(CATLONG Index, CatDimSymbols & oTypeSymb) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&Index,&oTypeSymb); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSymbType(Index,oTypeSymb); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&Index,&oTypeSymb); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimLine##classe::SetSymbType(CATLONG Index, CatDimSymbols iSymbType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&Index,&iSymbType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSymbType(Index,iSymbType); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&Index,&iSymbType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimLine##classe::GetSymbColor(CATLONG Index, CATLONG & oColorSymb) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&Index,&oColorSymb); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSymbColor(Index,oColorSymb); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&Index,&oColorSymb); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimLine##classe::SetSymbColor(CATLONG Index, CATLONG iColorSymb) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&Index,&iColorSymb); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSymbColor(Index,iColorSymb); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&Index,&iColorSymb); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimLine##classe::GetSymbThickness(CATLONG Index, double & oThickSymb) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&Index,&oThickSymb); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSymbThickness(Index,oThickSymb); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&Index,&oThickSymb); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimLine##classe::SetSymbThickness(CATLONG Index, double iThickSymb) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&Index,&iThickSymb); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSymbThickness(Index,iThickSymb); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&Index,&iThickSymb); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingDimLine##classe::GetDimLineDir(double & oDirX, double & oDirY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&oDirX,&oDirY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDimLineDir(oDirX,oDirY); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&oDirX,&oDirY); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingDimLine##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingDimLine##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingDimLine##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingDimLine##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingDimLine##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADrawingDimLine(classe) \
 \
 \
declare_TIE_CATIADrawingDimLine(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingDimLine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingDimLine,"CATIADrawingDimLine",CATIADrawingDimLine::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingDimLine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADrawingDimLine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingDimLine##classe(classe::MetaObject(),CATIADrawingDimLine::MetaObject(),(void *)CreateTIECATIADrawingDimLine##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADrawingDimLine(classe) \
 \
 \
declare_TIE_CATIADrawingDimLine(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingDimLine##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingDimLine,"CATIADrawingDimLine",CATIADrawingDimLine::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingDimLine(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADrawingDimLine, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingDimLine##classe(classe::MetaObject(),CATIADrawingDimLine::MetaObject(),(void *)CreateTIECATIADrawingDimLine##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADrawingDimLine(classe) TIE_CATIADrawingDimLine(classe)
#else
#define BOA_CATIADrawingDimLine(classe) CATImplementBOA(CATIADrawingDimLine, classe)
#endif

#endif
