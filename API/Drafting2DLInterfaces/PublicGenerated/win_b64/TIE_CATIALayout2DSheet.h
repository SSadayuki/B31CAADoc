#ifndef __TIE_CATIALayout2DSheet
#define __TIE_CATIALayout2DSheet

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIALayout2DSheet.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIALayout2DSheet */
#define declare_TIE_CATIALayout2DSheet(classe) \
 \
 \
class TIECATIALayout2DSheet##classe : public CATIALayout2DSheet \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIALayout2DSheet, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_Views(CATIALayout2DViews *& oViews); \
      virtual HRESULT __stdcall get_PageSetup(CATIADrawingPageSetup *& oPageSetup); \
      virtual HRESULT __stdcall get_PrintArea(CATIA2DPrintArea *& oPrintArea); \
      virtual HRESULT __stdcall get_PaperWidth(double & oPaperWidth); \
      virtual HRESULT __stdcall put_PaperWidth(double oPaperWidth); \
      virtual HRESULT __stdcall get_PaperHeight(double & oPaperHeight); \
      virtual HRESULT __stdcall put_PaperHeight(double oPaperHeight); \
      virtual HRESULT __stdcall get_PaperSize(CatPaperSize & oPaperSize); \
      virtual HRESULT __stdcall put_PaperSize(CatPaperSize iPaperSize); \
      virtual HRESULT __stdcall get_PaperName(CATBSTR & oPaperName); \
      virtual HRESULT __stdcall put_PaperName(const CATBSTR & iPaperName); \
      virtual HRESULT __stdcall get_Orientation(CatPaperOrientation & orientation); \
      virtual HRESULT __stdcall put_Orientation(CatPaperOrientation orientation); \
      virtual HRESULT __stdcall get_SheetScale(double & oSheetScale); \
      virtual HRESULT __stdcall put_SheetScale(double iSheetScale); \
      virtual HRESULT __stdcall get_ProjectionMethod(CatSheetProjectionMethod & oProjMethod); \
      virtual HRESULT __stdcall put_ProjectionMethod(CatSheetProjectionMethod iProjMethod); \
      virtual HRESULT __stdcall Activate(); \
      virtual HRESULT __stdcall IsDetail(CAT_VARIANT_BOOL & oIsDetail); \
      virtual HRESULT __stdcall PrintOut(CatRenderingMode iRenderingMode); \
      virtual HRESULT __stdcall PrintToFile(const CATBSTR & fileName, CatRenderingMode iRenderingMode); \
      virtual HRESULT __stdcall PrintOut2(); \
      virtual HRESULT __stdcall PrintToFile2(const CATBSTR & fileName); \
      virtual HRESULT __stdcall get_VisuIn3D(CatVisuIn3DMode & oMode); \
      virtual HRESULT __stdcall put_VisuIn3D(CatVisuIn3DMode iMode); \
      virtual HRESULT __stdcall reorder_Views(const CATSafeArrayVariant & iOrderedViews); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIALayout2DSheet(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_Views(CATIALayout2DViews *& oViews); \
virtual HRESULT __stdcall get_PageSetup(CATIADrawingPageSetup *& oPageSetup); \
virtual HRESULT __stdcall get_PrintArea(CATIA2DPrintArea *& oPrintArea); \
virtual HRESULT __stdcall get_PaperWidth(double & oPaperWidth); \
virtual HRESULT __stdcall put_PaperWidth(double oPaperWidth); \
virtual HRESULT __stdcall get_PaperHeight(double & oPaperHeight); \
virtual HRESULT __stdcall put_PaperHeight(double oPaperHeight); \
virtual HRESULT __stdcall get_PaperSize(CatPaperSize & oPaperSize); \
virtual HRESULT __stdcall put_PaperSize(CatPaperSize iPaperSize); \
virtual HRESULT __stdcall get_PaperName(CATBSTR & oPaperName); \
virtual HRESULT __stdcall put_PaperName(const CATBSTR & iPaperName); \
virtual HRESULT __stdcall get_Orientation(CatPaperOrientation & orientation); \
virtual HRESULT __stdcall put_Orientation(CatPaperOrientation orientation); \
virtual HRESULT __stdcall get_SheetScale(double & oSheetScale); \
virtual HRESULT __stdcall put_SheetScale(double iSheetScale); \
virtual HRESULT __stdcall get_ProjectionMethod(CatSheetProjectionMethod & oProjMethod); \
virtual HRESULT __stdcall put_ProjectionMethod(CatSheetProjectionMethod iProjMethod); \
virtual HRESULT __stdcall Activate(); \
virtual HRESULT __stdcall IsDetail(CAT_VARIANT_BOOL & oIsDetail); \
virtual HRESULT __stdcall PrintOut(CatRenderingMode iRenderingMode); \
virtual HRESULT __stdcall PrintToFile(const CATBSTR & fileName, CatRenderingMode iRenderingMode); \
virtual HRESULT __stdcall PrintOut2(); \
virtual HRESULT __stdcall PrintToFile2(const CATBSTR & fileName); \
virtual HRESULT __stdcall get_VisuIn3D(CatVisuIn3DMode & oMode); \
virtual HRESULT __stdcall put_VisuIn3D(CatVisuIn3DMode iMode); \
virtual HRESULT __stdcall reorder_Views(const CATSafeArrayVariant & iOrderedViews); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIALayout2DSheet(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_Views(CATIALayout2DViews *& oViews) \
{ \
return (ENVTIECALL(CATIALayout2DSheet,ENVTIETypeLetter,ENVTIELetter)get_Views(oViews)); \
} \
HRESULT __stdcall  ENVTIEName::get_PageSetup(CATIADrawingPageSetup *& oPageSetup) \
{ \
return (ENVTIECALL(CATIALayout2DSheet,ENVTIETypeLetter,ENVTIELetter)get_PageSetup(oPageSetup)); \
} \
HRESULT __stdcall  ENVTIEName::get_PrintArea(CATIA2DPrintArea *& oPrintArea) \
{ \
return (ENVTIECALL(CATIALayout2DSheet,ENVTIETypeLetter,ENVTIELetter)get_PrintArea(oPrintArea)); \
} \
HRESULT __stdcall  ENVTIEName::get_PaperWidth(double & oPaperWidth) \
{ \
return (ENVTIECALL(CATIALayout2DSheet,ENVTIETypeLetter,ENVTIELetter)get_PaperWidth(oPaperWidth)); \
} \
HRESULT __stdcall  ENVTIEName::put_PaperWidth(double oPaperWidth) \
{ \
return (ENVTIECALL(CATIALayout2DSheet,ENVTIETypeLetter,ENVTIELetter)put_PaperWidth(oPaperWidth)); \
} \
HRESULT __stdcall  ENVTIEName::get_PaperHeight(double & oPaperHeight) \
{ \
return (ENVTIECALL(CATIALayout2DSheet,ENVTIETypeLetter,ENVTIELetter)get_PaperHeight(oPaperHeight)); \
} \
HRESULT __stdcall  ENVTIEName::put_PaperHeight(double oPaperHeight) \
{ \
return (ENVTIECALL(CATIALayout2DSheet,ENVTIETypeLetter,ENVTIELetter)put_PaperHeight(oPaperHeight)); \
} \
HRESULT __stdcall  ENVTIEName::get_PaperSize(CatPaperSize & oPaperSize) \
{ \
return (ENVTIECALL(CATIALayout2DSheet,ENVTIETypeLetter,ENVTIELetter)get_PaperSize(oPaperSize)); \
} \
HRESULT __stdcall  ENVTIEName::put_PaperSize(CatPaperSize iPaperSize) \
{ \
return (ENVTIECALL(CATIALayout2DSheet,ENVTIETypeLetter,ENVTIELetter)put_PaperSize(iPaperSize)); \
} \
HRESULT __stdcall  ENVTIEName::get_PaperName(CATBSTR & oPaperName) \
{ \
return (ENVTIECALL(CATIALayout2DSheet,ENVTIETypeLetter,ENVTIELetter)get_PaperName(oPaperName)); \
} \
HRESULT __stdcall  ENVTIEName::put_PaperName(const CATBSTR & iPaperName) \
{ \
return (ENVTIECALL(CATIALayout2DSheet,ENVTIETypeLetter,ENVTIELetter)put_PaperName(iPaperName)); \
} \
HRESULT __stdcall  ENVTIEName::get_Orientation(CatPaperOrientation & orientation) \
{ \
return (ENVTIECALL(CATIALayout2DSheet,ENVTIETypeLetter,ENVTIELetter)get_Orientation(orientation)); \
} \
HRESULT __stdcall  ENVTIEName::put_Orientation(CatPaperOrientation orientation) \
{ \
return (ENVTIECALL(CATIALayout2DSheet,ENVTIETypeLetter,ENVTIELetter)put_Orientation(orientation)); \
} \
HRESULT __stdcall  ENVTIEName::get_SheetScale(double & oSheetScale) \
{ \
return (ENVTIECALL(CATIALayout2DSheet,ENVTIETypeLetter,ENVTIELetter)get_SheetScale(oSheetScale)); \
} \
HRESULT __stdcall  ENVTIEName::put_SheetScale(double iSheetScale) \
{ \
return (ENVTIECALL(CATIALayout2DSheet,ENVTIETypeLetter,ENVTIELetter)put_SheetScale(iSheetScale)); \
} \
HRESULT __stdcall  ENVTIEName::get_ProjectionMethod(CatSheetProjectionMethod & oProjMethod) \
{ \
return (ENVTIECALL(CATIALayout2DSheet,ENVTIETypeLetter,ENVTIELetter)get_ProjectionMethod(oProjMethod)); \
} \
HRESULT __stdcall  ENVTIEName::put_ProjectionMethod(CatSheetProjectionMethod iProjMethod) \
{ \
return (ENVTIECALL(CATIALayout2DSheet,ENVTIETypeLetter,ENVTIELetter)put_ProjectionMethod(iProjMethod)); \
} \
HRESULT __stdcall  ENVTIEName::Activate() \
{ \
return (ENVTIECALL(CATIALayout2DSheet,ENVTIETypeLetter,ENVTIELetter)Activate()); \
} \
HRESULT __stdcall  ENVTIEName::IsDetail(CAT_VARIANT_BOOL & oIsDetail) \
{ \
return (ENVTIECALL(CATIALayout2DSheet,ENVTIETypeLetter,ENVTIELetter)IsDetail(oIsDetail)); \
} \
HRESULT __stdcall  ENVTIEName::PrintOut(CatRenderingMode iRenderingMode) \
{ \
return (ENVTIECALL(CATIALayout2DSheet,ENVTIETypeLetter,ENVTIELetter)PrintOut(iRenderingMode)); \
} \
HRESULT __stdcall  ENVTIEName::PrintToFile(const CATBSTR & fileName, CatRenderingMode iRenderingMode) \
{ \
return (ENVTIECALL(CATIALayout2DSheet,ENVTIETypeLetter,ENVTIELetter)PrintToFile(fileName,iRenderingMode)); \
} \
HRESULT __stdcall  ENVTIEName::PrintOut2() \
{ \
return (ENVTIECALL(CATIALayout2DSheet,ENVTIETypeLetter,ENVTIELetter)PrintOut2()); \
} \
HRESULT __stdcall  ENVTIEName::PrintToFile2(const CATBSTR & fileName) \
{ \
return (ENVTIECALL(CATIALayout2DSheet,ENVTIETypeLetter,ENVTIELetter)PrintToFile2(fileName)); \
} \
HRESULT __stdcall  ENVTIEName::get_VisuIn3D(CatVisuIn3DMode & oMode) \
{ \
return (ENVTIECALL(CATIALayout2DSheet,ENVTIETypeLetter,ENVTIELetter)get_VisuIn3D(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_VisuIn3D(CatVisuIn3DMode iMode) \
{ \
return (ENVTIECALL(CATIALayout2DSheet,ENVTIETypeLetter,ENVTIELetter)put_VisuIn3D(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::reorder_Views(const CATSafeArrayVariant & iOrderedViews) \
{ \
return (ENVTIECALL(CATIALayout2DSheet,ENVTIETypeLetter,ENVTIELetter)reorder_Views(iOrderedViews)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIALayout2DSheet,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIALayout2DSheet,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIALayout2DSheet,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIALayout2DSheet,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIALayout2DSheet,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIALayout2DSheet(classe)    TIECATIALayout2DSheet##classe


/* Common methods inside a TIE */
#define common_TIE_CATIALayout2DSheet(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIALayout2DSheet, classe) \
 \
 \
CATImplementTIEMethods(CATIALayout2DSheet, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIALayout2DSheet, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIALayout2DSheet, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIALayout2DSheet, classe) \
 \
HRESULT __stdcall  TIECATIALayout2DSheet##classe::get_Views(CATIALayout2DViews *& oViews) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oViews); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Views(oViews); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oViews); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DSheet##classe::get_PageSetup(CATIADrawingPageSetup *& oPageSetup) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oPageSetup); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PageSetup(oPageSetup); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oPageSetup); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DSheet##classe::get_PrintArea(CATIA2DPrintArea *& oPrintArea) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oPrintArea); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PrintArea(oPrintArea); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oPrintArea); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DSheet##classe::get_PaperWidth(double & oPaperWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&oPaperWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PaperWidth(oPaperWidth); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&oPaperWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DSheet##classe::put_PaperWidth(double oPaperWidth) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oPaperWidth); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PaperWidth(oPaperWidth); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oPaperWidth); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DSheet##classe::get_PaperHeight(double & oPaperHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oPaperHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PaperHeight(oPaperHeight); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oPaperHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DSheet##classe::put_PaperHeight(double oPaperHeight) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&oPaperHeight); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PaperHeight(oPaperHeight); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&oPaperHeight); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DSheet##classe::get_PaperSize(CatPaperSize & oPaperSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oPaperSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PaperSize(oPaperSize); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oPaperSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DSheet##classe::put_PaperSize(CatPaperSize iPaperSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iPaperSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PaperSize(iPaperSize); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iPaperSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DSheet##classe::get_PaperName(CATBSTR & oPaperName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&oPaperName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PaperName(oPaperName); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&oPaperName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DSheet##classe::put_PaperName(const CATBSTR & iPaperName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iPaperName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PaperName(iPaperName); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iPaperName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DSheet##classe::get_Orientation(CatPaperOrientation & orientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&orientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Orientation(orientation); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&orientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DSheet##classe::put_Orientation(CatPaperOrientation orientation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&orientation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Orientation(orientation); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&orientation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DSheet##classe::get_SheetScale(double & oSheetScale) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&oSheetScale); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SheetScale(oSheetScale); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&oSheetScale); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DSheet##classe::put_SheetScale(double iSheetScale) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iSheetScale); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SheetScale(iSheetScale); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iSheetScale); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DSheet##classe::get_ProjectionMethod(CatSheetProjectionMethod & oProjMethod) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&oProjMethod); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ProjectionMethod(oProjMethod); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&oProjMethod); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DSheet##classe::put_ProjectionMethod(CatSheetProjectionMethod iProjMethod) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iProjMethod); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ProjectionMethod(iProjMethod); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iProjMethod); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DSheet##classe::Activate() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Activate(); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DSheet##classe::IsDetail(CAT_VARIANT_BOOL & oIsDetail) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&oIsDetail); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->IsDetail(oIsDetail); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&oIsDetail); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DSheet##classe::PrintOut(CatRenderingMode iRenderingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iRenderingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PrintOut(iRenderingMode); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iRenderingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DSheet##classe::PrintToFile(const CATBSTR & fileName, CatRenderingMode iRenderingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&fileName,&iRenderingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PrintToFile(fileName,iRenderingMode); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&fileName,&iRenderingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DSheet##classe::PrintOut2() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PrintOut2(); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DSheet##classe::PrintToFile2(const CATBSTR & fileName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&fileName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->PrintToFile2(fileName); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&fileName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DSheet##classe::get_VisuIn3D(CatVisuIn3DMode & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_VisuIn3D(oMode); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DSheet##classe::put_VisuIn3D(CatVisuIn3DMode iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_VisuIn3D(iMode); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIALayout2DSheet##classe::reorder_Views(const CATSafeArrayVariant & iOrderedViews) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iOrderedViews); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->reorder_Views(iOrderedViews); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iOrderedViews); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALayout2DSheet##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALayout2DSheet##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALayout2DSheet##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALayout2DSheet##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIALayout2DSheet##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIALayout2DSheet(classe) \
 \
 \
declare_TIE_CATIALayout2DSheet(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIALayout2DSheet##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIALayout2DSheet,"CATIALayout2DSheet",CATIALayout2DSheet::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIALayout2DSheet(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIALayout2DSheet, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIALayout2DSheet##classe(classe::MetaObject(),CATIALayout2DSheet::MetaObject(),(void *)CreateTIECATIALayout2DSheet##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIALayout2DSheet(classe) \
 \
 \
declare_TIE_CATIALayout2DSheet(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIALayout2DSheet##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIALayout2DSheet,"CATIALayout2DSheet",CATIALayout2DSheet::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIALayout2DSheet(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIALayout2DSheet, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIALayout2DSheet##classe(classe::MetaObject(),CATIALayout2DSheet::MetaObject(),(void *)CreateTIECATIALayout2DSheet##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIALayout2DSheet(classe) TIE_CATIALayout2DSheet(classe)
#else
#define BOA_CATIALayout2DSheet(classe) CATImplementBOA(CATIALayout2DSheet, classe)
#endif

#endif
