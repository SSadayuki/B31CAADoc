#ifndef __TIE_CATIADrawingSheet
#define __TIE_CATIADrawingSheet

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADrawingSheet.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADrawingSheet */
#define declare_TIE_CATIADrawingSheet(classe) \
 \
 \
class TIECATIADrawingSheet##classe : public CATIADrawingSheet \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADrawingSheet, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Views(CATIADrawingViews *& oViews); \
      virtual HRESULT __stdcall Activate(); \
      virtual HRESULT __stdcall SetAsDetail(); \
      virtual HRESULT __stdcall IsDetail(CAT_VARIANT_BOOL & oIsDetail); \
      virtual HRESULT __stdcall Update(); \
      virtual HRESULT __stdcall ForceUpdate(); \
      virtual HRESULT __stdcall GenerateDimensions(); \
      virtual HRESULT __stdcall get_PageSetup(CATIADrawingPageSetup *& oPageSetup); \
      virtual HRESULT __stdcall GetPaperWidth(double & oPaperWidth); \
      virtual HRESULT __stdcall SetPaperWidth(double oPaperWidth); \
      virtual HRESULT __stdcall GetPaperHeight(double & oPaperHeight); \
      virtual HRESULT __stdcall SetPaperHeight(double oPaperHeight); \
      virtual HRESULT __stdcall PrintOut(); \
      virtual HRESULT __stdcall PrintToFile(const CATBSTR & fileName); \
      virtual HRESULT __stdcall get_PaperSize(CatPaperSize & oPaperSize); \
      virtual HRESULT __stdcall put_PaperSize(CatPaperSize iPaperSize); \
      virtual HRESULT __stdcall get_PaperName(CATBSTR & oPaperName); \
      virtual HRESULT __stdcall put_PaperName(const CATBSTR & iPaperName); \
      virtual HRESULT __stdcall get_Orientation(CatPaperOrientation & orientation); \
      virtual HRESULT __stdcall put_Orientation(CatPaperOrientation orientation); \
      virtual HRESULT __stdcall get_Scale(double & oSheetScale); \
      virtual HRESULT __stdcall put_Scale(double iSheetScale); \
      virtual HRESULT __stdcall get_Scale2(double & oSheetScale); \
      virtual HRESULT __stdcall put_Scale2(double iSheetScale); \
      virtual HRESULT __stdcall get_ProjectionMethod(CatSheetProjectionMethod & oProjMethod); \
      virtual HRESULT __stdcall put_ProjectionMethod(CatSheetProjectionMethod iProjMethod); \
      virtual HRESULT __stdcall get_GenViewsPosMode(CatSheetGenViewsPosMode & oPosMode); \
      virtual HRESULT __stdcall put_GenViewsPosMode(CatSheetGenViewsPosMode iPosMode); \
      virtual HRESULT __stdcall Isolate(); \
      virtual HRESULT __stdcall get_PrintArea(CATIA2DPrintArea *& oPrintArea); \
      virtual HRESULT __stdcall reorder_Views(const CATSafeArrayVariant & iOrderedViews); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIADrawingSheet(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Views(CATIADrawingViews *& oViews); \
virtual HRESULT __stdcall Activate(); \
virtual HRESULT __stdcall SetAsDetail(); \
virtual HRESULT __stdcall IsDetail(CAT_VARIANT_BOOL & oIsDetail); \
virtual HRESULT __stdcall Update(); \
virtual HRESULT __stdcall ForceUpdate(); \
virtual HRESULT __stdcall GenerateDimensions(); \
virtual HRESULT __stdcall get_PageSetup(CATIADrawingPageSetup *& oPageSetup); \
virtual HRESULT __stdcall GetPaperWidth(double & oPaperWidth); \
virtual HRESULT __stdcall SetPaperWidth(double oPaperWidth); \
virtual HRESULT __stdcall GetPaperHeight(double & oPaperHeight); \
virtual HRESULT __stdcall SetPaperHeight(double oPaperHeight); \
virtual HRESULT __stdcall PrintOut(); \
virtual HRESULT __stdcall PrintToFile(const CATBSTR & fileName); \
virtual HRESULT __stdcall get_PaperSize(CatPaperSize & oPaperSize); \
virtual HRESULT __stdcall put_PaperSize(CatPaperSize iPaperSize); \
virtual HRESULT __stdcall get_PaperName(CATBSTR & oPaperName); \
virtual HRESULT __stdcall put_PaperName(const CATBSTR & iPaperName); \
virtual HRESULT __stdcall get_Orientation(CatPaperOrientation & orientation); \
virtual HRESULT __stdcall put_Orientation(CatPaperOrientation orientation); \
virtual HRESULT __stdcall get_Scale(double & oSheetScale); \
virtual HRESULT __stdcall put_Scale(double iSheetScale); \
virtual HRESULT __stdcall get_Scale2(double & oSheetScale); \
virtual HRESULT __stdcall put_Scale2(double iSheetScale); \
virtual HRESULT __stdcall get_ProjectionMethod(CatSheetProjectionMethod & oProjMethod); \
virtual HRESULT __stdcall put_ProjectionMethod(CatSheetProjectionMethod iProjMethod); \
virtual HRESULT __stdcall get_GenViewsPosMode(CatSheetGenViewsPosMode & oPosMode); \
virtual HRESULT __stdcall put_GenViewsPosMode(CatSheetGenViewsPosMode iPosMode); \
virtual HRESULT __stdcall Isolate(); \
virtual HRESULT __stdcall get_PrintArea(CATIA2DPrintArea *& oPrintArea); \
virtual HRESULT __stdcall reorder_Views(const CATSafeArrayVariant & iOrderedViews); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIADrawingSheet(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Views(CATIADrawingViews *& oViews) \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)get_Views(oViews)); \
} \
HRESULT __stdcall  ENVTIEName::Activate() \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)Activate()); \
} \
HRESULT __stdcall  ENVTIEName::SetAsDetail() \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)SetAsDetail()); \
} \
HRESULT __stdcall  ENVTIEName::IsDetail(CAT_VARIANT_BOOL & oIsDetail) \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)IsDetail(oIsDetail)); \
} \
HRESULT __stdcall  ENVTIEName::Update() \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)Update()); \
} \
HRESULT __stdcall  ENVTIEName::ForceUpdate() \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)ForceUpdate()); \
} \
HRESULT __stdcall  ENVTIEName::GenerateDimensions() \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)GenerateDimensions()); \
} \
HRESULT __stdcall  ENVTIEName::get_PageSetup(CATIADrawingPageSetup *& oPageSetup) \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)get_PageSetup(oPageSetup)); \
} \
HRESULT __stdcall  ENVTIEName::GetPaperWidth(double & oPaperWidth) \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)GetPaperWidth(oPaperWidth)); \
} \
HRESULT __stdcall  ENVTIEName::SetPaperWidth(double oPaperWidth) \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)SetPaperWidth(oPaperWidth)); \
} \
HRESULT __stdcall  ENVTIEName::GetPaperHeight(double & oPaperHeight) \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)GetPaperHeight(oPaperHeight)); \
} \
HRESULT __stdcall  ENVTIEName::SetPaperHeight(double oPaperHeight) \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)SetPaperHeight(oPaperHeight)); \
} \
HRESULT __stdcall  ENVTIEName::PrintOut() \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)PrintOut()); \
} \
HRESULT __stdcall  ENVTIEName::PrintToFile(const CATBSTR & fileName) \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)PrintToFile(fileName)); \
} \
HRESULT __stdcall  ENVTIEName::get_PaperSize(CatPaperSize & oPaperSize) \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)get_PaperSize(oPaperSize)); \
} \
HRESULT __stdcall  ENVTIEName::put_PaperSize(CatPaperSize iPaperSize) \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)put_PaperSize(iPaperSize)); \
} \
HRESULT __stdcall  ENVTIEName::get_PaperName(CATBSTR & oPaperName) \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)get_PaperName(oPaperName)); \
} \
HRESULT __stdcall  ENVTIEName::put_PaperName(const CATBSTR & iPaperName) \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)put_PaperName(iPaperName)); \
} \
HRESULT __stdcall  ENVTIEName::get_Orientation(CatPaperOrientation & orientation) \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)get_Orientation(orientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_Orientation(CatPaperOrientation orientation) \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)put_Orientation(orientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_Scale(double & oSheetScale) \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)get_Scale(oSheetScale)); \
} \
HRESULT __stdcall  ENVTIEName::put_Scale(double iSheetScale) \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)put_Scale(iSheetScale)); \
} \
HRESULT __stdcall  ENVTIEName::get_Scale2(double & oSheetScale) \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)get_Scale2(oSheetScale)); \
} \
HRESULT __stdcall  ENVTIEName::put_Scale2(double iSheetScale) \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)put_Scale2(iSheetScale)); \
} \
HRESULT __stdcall  ENVTIEName::get_ProjectionMethod(CatSheetProjectionMethod & oProjMethod) \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)get_ProjectionMethod(oProjMethod)); \
} \
HRESULT __stdcall  ENVTIEName::put_ProjectionMethod(CatSheetProjectionMethod iProjMethod) \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)put_ProjectionMethod(iProjMethod)); \
} \
HRESULT __stdcall  ENVTIEName::get_GenViewsPosMode(CatSheetGenViewsPosMode & oPosMode) \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)get_GenViewsPosMode(oPosMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_GenViewsPosMode(CatSheetGenViewsPosMode iPosMode) \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)put_GenViewsPosMode(iPosMode)); \
} \
HRESULT __stdcall  ENVTIEName::Isolate() \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)Isolate()); \
} \
HRESULT __stdcall  ENVTIEName::get_PrintArea(CATIA2DPrintArea *& oPrintArea) \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)get_PrintArea(oPrintArea)); \
} \
HRESULT __stdcall  ENVTIEName::reorder_Views(const CATSafeArrayVariant & iOrderedViews) \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)reorder_Views(iOrderedViews)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADrawingSheet,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADrawingSheet(classe)    TIECATIADrawingSheet##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADrawingSheet(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADrawingSheet, classe) \
 \
 \
CATImplementTIEMethods(CATIADrawingSheet, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADrawingSheet, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADrawingSheet, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADrawingSheet, classe) \
 \
HRESULT __stdcall  TIECATIADrawingSheet##classe::get_Views(CATIADrawingViews *& oViews) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oViews); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Views(oViews); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oViews); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheet##classe::Activate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Activate(); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheet##classe::SetAsDetail() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAsDetail(); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheet##classe::IsDetail(CAT_VARIANT_BOOL & oIsDetail) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oIsDetail); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsDetail(oIsDetail); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oIsDetail); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheet##classe::Update() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Update(); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheet##classe::ForceUpdate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ForceUpdate(); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheet##classe::GenerateDimensions() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GenerateDimensions(); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheet##classe::get_PageSetup(CATIADrawingPageSetup *& oPageSetup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oPageSetup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PageSetup(oPageSetup); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oPageSetup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheet##classe::GetPaperWidth(double & oPaperWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oPaperWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPaperWidth(oPaperWidth); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oPaperWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheet##classe::SetPaperWidth(double oPaperWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oPaperWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPaperWidth(oPaperWidth); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oPaperWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheet##classe::GetPaperHeight(double & oPaperHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&oPaperHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPaperHeight(oPaperHeight); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&oPaperHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheet##classe::SetPaperHeight(double oPaperHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&oPaperHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPaperHeight(oPaperHeight); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&oPaperHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheet##classe::PrintOut() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PrintOut(); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheet##classe::PrintToFile(const CATBSTR & fileName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&fileName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PrintToFile(fileName); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&fileName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheet##classe::get_PaperSize(CatPaperSize & oPaperSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&oPaperSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PaperSize(oPaperSize); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&oPaperSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheet##classe::put_PaperSize(CatPaperSize iPaperSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iPaperSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PaperSize(iPaperSize); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iPaperSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheet##classe::get_PaperName(CATBSTR & oPaperName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oPaperName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PaperName(oPaperName); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oPaperName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheet##classe::put_PaperName(const CATBSTR & iPaperName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iPaperName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PaperName(iPaperName); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iPaperName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheet##classe::get_Orientation(CatPaperOrientation & orientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&orientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Orientation(orientation); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&orientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheet##classe::put_Orientation(CatPaperOrientation orientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&orientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Orientation(orientation); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&orientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheet##classe::get_Scale(double & oSheetScale) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oSheetScale); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Scale(oSheetScale); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oSheetScale); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheet##classe::put_Scale(double iSheetScale) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iSheetScale); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Scale(iSheetScale); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iSheetScale); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheet##classe::get_Scale2(double & oSheetScale) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&oSheetScale); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Scale2(oSheetScale); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&oSheetScale); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheet##classe::put_Scale2(double iSheetScale) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iSheetScale); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Scale2(iSheetScale); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iSheetScale); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheet##classe::get_ProjectionMethod(CatSheetProjectionMethod & oProjMethod) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oProjMethod); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ProjectionMethod(oProjMethod); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oProjMethod); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheet##classe::put_ProjectionMethod(CatSheetProjectionMethod iProjMethod) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iProjMethod); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ProjectionMethod(iProjMethod); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iProjMethod); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheet##classe::get_GenViewsPosMode(CatSheetGenViewsPosMode & oPosMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oPosMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_GenViewsPosMode(oPosMode); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oPosMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheet##classe::put_GenViewsPosMode(CatSheetGenViewsPosMode iPosMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iPosMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_GenViewsPosMode(iPosMode); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iPosMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheet##classe::Isolate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Isolate(); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheet##classe::get_PrintArea(CATIA2DPrintArea *& oPrintArea) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&oPrintArea); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PrintArea(oPrintArea); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&oPrintArea); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingSheet##classe::reorder_Views(const CATSafeArrayVariant & iOrderedViews) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iOrderedViews); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->reorder_Views(iOrderedViews); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iOrderedViews); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingSheet##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingSheet##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingSheet##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingSheet##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingSheet##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADrawingSheet(classe) \
 \
 \
declare_TIE_CATIADrawingSheet(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingSheet##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingSheet,"CATIADrawingSheet",CATIADrawingSheet::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingSheet(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADrawingSheet, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingSheet##classe(classe::MetaObject(),CATIADrawingSheet::MetaObject(),(void *)CreateTIECATIADrawingSheet##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADrawingSheet(classe) \
 \
 \
declare_TIE_CATIADrawingSheet(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingSheet##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingSheet,"CATIADrawingSheet",CATIADrawingSheet::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingSheet(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADrawingSheet, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingSheet##classe(classe::MetaObject(),CATIADrawingSheet::MetaObject(),(void *)CreateTIECATIADrawingSheet##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADrawingSheet(classe) TIE_CATIADrawingSheet(classe)
#else
#define BOA_CATIADrawingSheet(classe) CATImplementBOA(CATIADrawingSheet, classe)
#endif

#endif
