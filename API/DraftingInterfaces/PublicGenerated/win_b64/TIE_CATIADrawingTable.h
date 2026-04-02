#ifndef __TIE_CATIADrawingTable
#define __TIE_CATIADrawingTable

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADrawingTable.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADrawingTable */
#define declare_TIE_CATIADrawingTable(classe) \
 \
 \
class TIECATIADrawingTable##classe : public CATIADrawingTable \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADrawingTable, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_x(double & oPositionX); \
      virtual HRESULT __stdcall put_x(double oPositionX); \
      virtual HRESULT __stdcall get_y(double & oPositionY); \
      virtual HRESULT __stdcall put_y(double iPositionY); \
      virtual HRESULT __stdcall Move(double iDeltaX, double iDeltaY); \
      virtual HRESULT __stdcall get_Angle(double & oAngle); \
      virtual HRESULT __stdcall put_Angle(double iAngle); \
      virtual HRESULT __stdcall get_OrientationReference(CATLONG & oOri); \
      virtual HRESULT __stdcall put_OrientationReference(CATLONG iOri); \
      virtual HRESULT __stdcall Rotate(double iDeltaAngle); \
      virtual HRESULT __stdcall SetCellString(CATLONG iRow, CATLONG iCol, const CATBSTR & iString); \
      virtual HRESULT __stdcall GetCellString(CATLONG iRow, CATLONG iCol, CATBSTR & oString); \
      virtual HRESULT __stdcall SetCellObject(CATLONG iRow, CATLONG iCol, CATIADrawingText * iText); \
      virtual HRESULT __stdcall GetCellObject(CATLONG iRow, CATLONG iCol, CATIADrawingText *& oText); \
      virtual HRESULT __stdcall SetCellBorderType(CATLONG iRow, CATLONG iCol, CATLONG iType); \
      virtual HRESULT __stdcall GetCellBorderType(CATLONG iRow, CATLONG iCol, CatTableBorderType & oType); \
      virtual HRESULT __stdcall SetCellAlignment(CATLONG iRow, CATLONG iCol, CatTablePosition iAlign); \
      virtual HRESULT __stdcall GetCellAlignment(CATLONG iRow, CATLONG iCol, CatTablePosition & oAlign); \
      virtual HRESULT __stdcall SetCellName(CATLONG iRow, CATLONG iCol, const CATBSTR & iName); \
      virtual HRESULT __stdcall GetCellName(CATLONG iRow, CATLONG iCol, CATBSTR & oName); \
      virtual HRESULT __stdcall get_NumberOfRows(CATLONG & oRow); \
      virtual HRESULT __stdcall get_NumberOfColumns(CATLONG & oCol); \
      virtual HRESULT __stdcall SetRowSize(CATLONG iRow, double iRowSize); \
      virtual HRESULT __stdcall GetRowSize(CATLONG iRow, double & oRowSize); \
      virtual HRESULT __stdcall SetColumnSize(CATLONG iCol, double iColSize); \
      virtual HRESULT __stdcall GetColumnSize(CATLONG iCol, double & oColSize); \
      virtual HRESULT __stdcall AddRow(CATLONG iRow); \
      virtual HRESULT __stdcall RemoveRow(CATLONG iRow); \
      virtual HRESULT __stdcall AddColumn(CATLONG iCol); \
      virtual HRESULT __stdcall RemoveColumn(CATLONG iCol); \
      virtual HRESULT __stdcall get_AnchorPoint(CatTablePosition & oPos); \
      virtual HRESULT __stdcall put_AnchorPoint(CatTablePosition iPos); \
      virtual HRESULT __stdcall InvertMode(CatTableInvertMode iMode); \
      virtual HRESULT __stdcall get_ComputeMode(CatTableComputeMode & oMode); \
      virtual HRESULT __stdcall put_ComputeMode(CatTableComputeMode iMode); \
      virtual HRESULT __stdcall MergeCells(CATLONG iFirstRow, CATLONG iFirstCol, CATLONG iNbRowMerge, CATLONG iNbColMerge); \
      virtual HRESULT __stdcall UnMergeCells(CATLONG iRow, CATLONG iCol); \
      virtual HRESULT __stdcall GetCellsMerge(CATSafeArrayVariant & oListOfMergeCells); \
      virtual HRESULT __stdcall GetMergeInfos(CATLONG iRow, CATLONG iCol, CATLONG & oFirstRow, CATLONG & oFirstCol, CATLONG & oNbRow, CATLONG & oNbCol); \
      virtual HRESULT __stdcall get_Leaders(CATIADrawingLeaders *& oLeaders); \
      virtual HRESULT __stdcall get_TextProperties(CATIADrawingTextProperties *& oTextProperties); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIADrawingTable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_x(double & oPositionX); \
virtual HRESULT __stdcall put_x(double oPositionX); \
virtual HRESULT __stdcall get_y(double & oPositionY); \
virtual HRESULT __stdcall put_y(double iPositionY); \
virtual HRESULT __stdcall Move(double iDeltaX, double iDeltaY); \
virtual HRESULT __stdcall get_Angle(double & oAngle); \
virtual HRESULT __stdcall put_Angle(double iAngle); \
virtual HRESULT __stdcall get_OrientationReference(CATLONG & oOri); \
virtual HRESULT __stdcall put_OrientationReference(CATLONG iOri); \
virtual HRESULT __stdcall Rotate(double iDeltaAngle); \
virtual HRESULT __stdcall SetCellString(CATLONG iRow, CATLONG iCol, const CATBSTR & iString); \
virtual HRESULT __stdcall GetCellString(CATLONG iRow, CATLONG iCol, CATBSTR & oString); \
virtual HRESULT __stdcall SetCellObject(CATLONG iRow, CATLONG iCol, CATIADrawingText * iText); \
virtual HRESULT __stdcall GetCellObject(CATLONG iRow, CATLONG iCol, CATIADrawingText *& oText); \
virtual HRESULT __stdcall SetCellBorderType(CATLONG iRow, CATLONG iCol, CATLONG iType); \
virtual HRESULT __stdcall GetCellBorderType(CATLONG iRow, CATLONG iCol, CatTableBorderType & oType); \
virtual HRESULT __stdcall SetCellAlignment(CATLONG iRow, CATLONG iCol, CatTablePosition iAlign); \
virtual HRESULT __stdcall GetCellAlignment(CATLONG iRow, CATLONG iCol, CatTablePosition & oAlign); \
virtual HRESULT __stdcall SetCellName(CATLONG iRow, CATLONG iCol, const CATBSTR & iName); \
virtual HRESULT __stdcall GetCellName(CATLONG iRow, CATLONG iCol, CATBSTR & oName); \
virtual HRESULT __stdcall get_NumberOfRows(CATLONG & oRow); \
virtual HRESULT __stdcall get_NumberOfColumns(CATLONG & oCol); \
virtual HRESULT __stdcall SetRowSize(CATLONG iRow, double iRowSize); \
virtual HRESULT __stdcall GetRowSize(CATLONG iRow, double & oRowSize); \
virtual HRESULT __stdcall SetColumnSize(CATLONG iCol, double iColSize); \
virtual HRESULT __stdcall GetColumnSize(CATLONG iCol, double & oColSize); \
virtual HRESULT __stdcall AddRow(CATLONG iRow); \
virtual HRESULT __stdcall RemoveRow(CATLONG iRow); \
virtual HRESULT __stdcall AddColumn(CATLONG iCol); \
virtual HRESULT __stdcall RemoveColumn(CATLONG iCol); \
virtual HRESULT __stdcall get_AnchorPoint(CatTablePosition & oPos); \
virtual HRESULT __stdcall put_AnchorPoint(CatTablePosition iPos); \
virtual HRESULT __stdcall InvertMode(CatTableInvertMode iMode); \
virtual HRESULT __stdcall get_ComputeMode(CatTableComputeMode & oMode); \
virtual HRESULT __stdcall put_ComputeMode(CatTableComputeMode iMode); \
virtual HRESULT __stdcall MergeCells(CATLONG iFirstRow, CATLONG iFirstCol, CATLONG iNbRowMerge, CATLONG iNbColMerge); \
virtual HRESULT __stdcall UnMergeCells(CATLONG iRow, CATLONG iCol); \
virtual HRESULT __stdcall GetCellsMerge(CATSafeArrayVariant & oListOfMergeCells); \
virtual HRESULT __stdcall GetMergeInfos(CATLONG iRow, CATLONG iCol, CATLONG & oFirstRow, CATLONG & oFirstCol, CATLONG & oNbRow, CATLONG & oNbCol); \
virtual HRESULT __stdcall get_Leaders(CATIADrawingLeaders *& oLeaders); \
virtual HRESULT __stdcall get_TextProperties(CATIADrawingTextProperties *& oTextProperties); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIADrawingTable(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_x(double & oPositionX) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)get_x(oPositionX)); \
} \
HRESULT __stdcall  ENVTIEName::put_x(double oPositionX) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)put_x(oPositionX)); \
} \
HRESULT __stdcall  ENVTIEName::get_y(double & oPositionY) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)get_y(oPositionY)); \
} \
HRESULT __stdcall  ENVTIEName::put_y(double iPositionY) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)put_y(iPositionY)); \
} \
HRESULT __stdcall  ENVTIEName::Move(double iDeltaX, double iDeltaY) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)Move(iDeltaX,iDeltaY)); \
} \
HRESULT __stdcall  ENVTIEName::get_Angle(double & oAngle) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)get_Angle(oAngle)); \
} \
HRESULT __stdcall  ENVTIEName::put_Angle(double iAngle) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)put_Angle(iAngle)); \
} \
HRESULT __stdcall  ENVTIEName::get_OrientationReference(CATLONG & oOri) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)get_OrientationReference(oOri)); \
} \
HRESULT __stdcall  ENVTIEName::put_OrientationReference(CATLONG iOri) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)put_OrientationReference(iOri)); \
} \
HRESULT __stdcall  ENVTIEName::Rotate(double iDeltaAngle) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)Rotate(iDeltaAngle)); \
} \
HRESULT __stdcall  ENVTIEName::SetCellString(CATLONG iRow, CATLONG iCol, const CATBSTR & iString) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)SetCellString(iRow,iCol,iString)); \
} \
HRESULT __stdcall  ENVTIEName::GetCellString(CATLONG iRow, CATLONG iCol, CATBSTR & oString) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)GetCellString(iRow,iCol,oString)); \
} \
HRESULT __stdcall  ENVTIEName::SetCellObject(CATLONG iRow, CATLONG iCol, CATIADrawingText * iText) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)SetCellObject(iRow,iCol,iText)); \
} \
HRESULT __stdcall  ENVTIEName::GetCellObject(CATLONG iRow, CATLONG iCol, CATIADrawingText *& oText) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)GetCellObject(iRow,iCol,oText)); \
} \
HRESULT __stdcall  ENVTIEName::SetCellBorderType(CATLONG iRow, CATLONG iCol, CATLONG iType) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)SetCellBorderType(iRow,iCol,iType)); \
} \
HRESULT __stdcall  ENVTIEName::GetCellBorderType(CATLONG iRow, CATLONG iCol, CatTableBorderType & oType) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)GetCellBorderType(iRow,iCol,oType)); \
} \
HRESULT __stdcall  ENVTIEName::SetCellAlignment(CATLONG iRow, CATLONG iCol, CatTablePosition iAlign) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)SetCellAlignment(iRow,iCol,iAlign)); \
} \
HRESULT __stdcall  ENVTIEName::GetCellAlignment(CATLONG iRow, CATLONG iCol, CatTablePosition & oAlign) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)GetCellAlignment(iRow,iCol,oAlign)); \
} \
HRESULT __stdcall  ENVTIEName::SetCellName(CATLONG iRow, CATLONG iCol, const CATBSTR & iName) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)SetCellName(iRow,iCol,iName)); \
} \
HRESULT __stdcall  ENVTIEName::GetCellName(CATLONG iRow, CATLONG iCol, CATBSTR & oName) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)GetCellName(iRow,iCol,oName)); \
} \
HRESULT __stdcall  ENVTIEName::get_NumberOfRows(CATLONG & oRow) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)get_NumberOfRows(oRow)); \
} \
HRESULT __stdcall  ENVTIEName::get_NumberOfColumns(CATLONG & oCol) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)get_NumberOfColumns(oCol)); \
} \
HRESULT __stdcall  ENVTIEName::SetRowSize(CATLONG iRow, double iRowSize) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)SetRowSize(iRow,iRowSize)); \
} \
HRESULT __stdcall  ENVTIEName::GetRowSize(CATLONG iRow, double & oRowSize) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)GetRowSize(iRow,oRowSize)); \
} \
HRESULT __stdcall  ENVTIEName::SetColumnSize(CATLONG iCol, double iColSize) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)SetColumnSize(iCol,iColSize)); \
} \
HRESULT __stdcall  ENVTIEName::GetColumnSize(CATLONG iCol, double & oColSize) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)GetColumnSize(iCol,oColSize)); \
} \
HRESULT __stdcall  ENVTIEName::AddRow(CATLONG iRow) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)AddRow(iRow)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveRow(CATLONG iRow) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)RemoveRow(iRow)); \
} \
HRESULT __stdcall  ENVTIEName::AddColumn(CATLONG iCol) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)AddColumn(iCol)); \
} \
HRESULT __stdcall  ENVTIEName::RemoveColumn(CATLONG iCol) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)RemoveColumn(iCol)); \
} \
HRESULT __stdcall  ENVTIEName::get_AnchorPoint(CatTablePosition & oPos) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)get_AnchorPoint(oPos)); \
} \
HRESULT __stdcall  ENVTIEName::put_AnchorPoint(CatTablePosition iPos) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)put_AnchorPoint(iPos)); \
} \
HRESULT __stdcall  ENVTIEName::InvertMode(CatTableInvertMode iMode) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)InvertMode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::get_ComputeMode(CatTableComputeMode & oMode) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)get_ComputeMode(oMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_ComputeMode(CatTableComputeMode iMode) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)put_ComputeMode(iMode)); \
} \
HRESULT __stdcall  ENVTIEName::MergeCells(CATLONG iFirstRow, CATLONG iFirstCol, CATLONG iNbRowMerge, CATLONG iNbColMerge) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)MergeCells(iFirstRow,iFirstCol,iNbRowMerge,iNbColMerge)); \
} \
HRESULT __stdcall  ENVTIEName::UnMergeCells(CATLONG iRow, CATLONG iCol) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)UnMergeCells(iRow,iCol)); \
} \
HRESULT __stdcall  ENVTIEName::GetCellsMerge(CATSafeArrayVariant & oListOfMergeCells) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)GetCellsMerge(oListOfMergeCells)); \
} \
HRESULT __stdcall  ENVTIEName::GetMergeInfos(CATLONG iRow, CATLONG iCol, CATLONG & oFirstRow, CATLONG & oFirstCol, CATLONG & oNbRow, CATLONG & oNbCol) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)GetMergeInfos(iRow,iCol,oFirstRow,oFirstCol,oNbRow,oNbCol)); \
} \
HRESULT __stdcall  ENVTIEName::get_Leaders(CATIADrawingLeaders *& oLeaders) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)get_Leaders(oLeaders)); \
} \
HRESULT __stdcall  ENVTIEName::get_TextProperties(CATIADrawingTextProperties *& oTextProperties) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)get_TextProperties(oTextProperties)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADrawingTable,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADrawingTable(classe)    TIECATIADrawingTable##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADrawingTable(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADrawingTable, classe) \
 \
 \
CATImplementTIEMethods(CATIADrawingTable, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADrawingTable, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADrawingTable, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADrawingTable, classe) \
 \
HRESULT __stdcall  TIECATIADrawingTable##classe::get_x(double & oPositionX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oPositionX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_x(oPositionX); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oPositionX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::put_x(double oPositionX) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&oPositionX); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_x(oPositionX); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&oPositionX); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::get_y(double & oPositionY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&oPositionY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_y(oPositionY); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&oPositionY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::put_y(double iPositionY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iPositionY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_y(iPositionY); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iPositionY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::Move(double iDeltaX, double iDeltaY) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&iDeltaX,&iDeltaY); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Move(iDeltaX,iDeltaY); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&iDeltaX,&iDeltaY); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::get_Angle(double & oAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&oAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Angle(oAngle); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&oAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::put_Angle(double iAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Angle(iAngle); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::get_OrientationReference(CATLONG & oOri) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&oOri); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OrientationReference(oOri); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&oOri); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::put_OrientationReference(CATLONG iOri) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&iOri); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OrientationReference(iOri); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&iOri); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::Rotate(double iDeltaAngle) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iDeltaAngle); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rotate(iDeltaAngle); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iDeltaAngle); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::SetCellString(CATLONG iRow, CATLONG iCol, const CATBSTR & iString) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iRow,&iCol,&iString); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCellString(iRow,iCol,iString); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iRow,&iCol,&iString); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::GetCellString(CATLONG iRow, CATLONG iCol, CATBSTR & oString) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iRow,&iCol,&oString); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCellString(iRow,iCol,oString); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iRow,&iCol,&oString); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::SetCellObject(CATLONG iRow, CATLONG iCol, CATIADrawingText * iText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&iRow,&iCol,&iText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCellObject(iRow,iCol,iText); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&iRow,&iCol,&iText); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::GetCellObject(CATLONG iRow, CATLONG iCol, CATIADrawingText *& oText) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iRow,&iCol,&oText); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCellObject(iRow,iCol,oText); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iRow,&iCol,&oText); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::SetCellBorderType(CATLONG iRow, CATLONG iCol, CATLONG iType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iRow,&iCol,&iType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCellBorderType(iRow,iCol,iType); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iRow,&iCol,&iType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::GetCellBorderType(CATLONG iRow, CATLONG iCol, CatTableBorderType & oType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iRow,&iCol,&oType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCellBorderType(iRow,iCol,oType); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iRow,&iCol,&oType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::SetCellAlignment(CATLONG iRow, CATLONG iCol, CatTablePosition iAlign) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&iRow,&iCol,&iAlign); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCellAlignment(iRow,iCol,iAlign); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&iRow,&iCol,&iAlign); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::GetCellAlignment(CATLONG iRow, CATLONG iCol, CatTablePosition & oAlign) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iRow,&iCol,&oAlign); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCellAlignment(iRow,iCol,oAlign); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iRow,&iCol,&oAlign); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::SetCellName(CATLONG iRow, CATLONG iCol, const CATBSTR & iName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iRow,&iCol,&iName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCellName(iRow,iCol,iName); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iRow,&iCol,&iName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::GetCellName(CATLONG iRow, CATLONG iCol, CATBSTR & oName) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iRow,&iCol,&oName); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCellName(iRow,iCol,oName); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iRow,&iCol,&oName); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::get_NumberOfRows(CATLONG & oRow) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oRow); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NumberOfRows(oRow); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oRow); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::get_NumberOfColumns(CATLONG & oCol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oCol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NumberOfColumns(oCol); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oCol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::SetRowSize(CATLONG iRow, double iRowSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iRow,&iRowSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRowSize(iRow,iRowSize); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iRow,&iRowSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::GetRowSize(CATLONG iRow, double & oRowSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iRow,&oRowSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRowSize(iRow,oRowSize); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iRow,&oRowSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::SetColumnSize(CATLONG iCol, double iColSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&iCol,&iColSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetColumnSize(iCol,iColSize); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&iCol,&iColSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::GetColumnSize(CATLONG iCol, double & oColSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iCol,&oColSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetColumnSize(iCol,oColSize); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iCol,&oColSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::AddRow(CATLONG iRow) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iRow); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddRow(iRow); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iRow); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::RemoveRow(CATLONG iRow) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iRow); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveRow(iRow); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iRow); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::AddColumn(CATLONG iCol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&iCol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->AddColumn(iCol); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&iCol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::RemoveColumn(CATLONG iCol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iCol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->RemoveColumn(iCol); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iCol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::get_AnchorPoint(CatTablePosition & oPos) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&oPos); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AnchorPoint(oPos); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&oPos); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::put_AnchorPoint(CatTablePosition iPos) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iPos); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AnchorPoint(iPos); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iPos); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::InvertMode(CatTableInvertMode iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->InvertMode(iMode); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::get_ComputeMode(CatTableComputeMode & oMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&oMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ComputeMode(oMode); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&oMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::put_ComputeMode(CatTableComputeMode iMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&iMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ComputeMode(iMode); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&iMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::MergeCells(CATLONG iFirstRow, CATLONG iFirstCol, CATLONG iNbRowMerge, CATLONG iNbColMerge) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iFirstRow,&iFirstCol,&iNbRowMerge,&iNbColMerge); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->MergeCells(iFirstRow,iFirstCol,iNbRowMerge,iNbColMerge); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iFirstRow,&iFirstCol,&iNbRowMerge,&iNbColMerge); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::UnMergeCells(CATLONG iRow, CATLONG iCol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&iRow,&iCol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->UnMergeCells(iRow,iCol); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&iRow,&iCol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::GetCellsMerge(CATSafeArrayVariant & oListOfMergeCells) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&oListOfMergeCells); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCellsMerge(oListOfMergeCells); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&oListOfMergeCells); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::GetMergeInfos(CATLONG iRow, CATLONG iCol, CATLONG & oFirstRow, CATLONG & oFirstCol, CATLONG & oNbRow, CATLONG & oNbCol) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&iRow,&iCol,&oFirstRow,&oFirstCol,&oNbRow,&oNbCol); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetMergeInfos(iRow,iCol,oFirstRow,oFirstCol,oNbRow,oNbCol); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&iRow,&iCol,&oFirstRow,&oFirstCol,&oNbRow,&oNbCol); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::get_Leaders(CATIADrawingLeaders *& oLeaders) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&oLeaders); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Leaders(oLeaders); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&oLeaders); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADrawingTable##classe::get_TextProperties(CATIADrawingTextProperties *& oTextProperties) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oTextProperties); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TextProperties(oTextProperties); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oTextProperties); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingTable##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingTable##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingTable##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingTable##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADrawingTable##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADrawingTable(classe) \
 \
 \
declare_TIE_CATIADrawingTable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingTable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingTable,"CATIADrawingTable",CATIADrawingTable::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingTable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADrawingTable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingTable##classe(classe::MetaObject(),CATIADrawingTable::MetaObject(),(void *)CreateTIECATIADrawingTable##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADrawingTable(classe) \
 \
 \
declare_TIE_CATIADrawingTable(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADrawingTable##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADrawingTable,"CATIADrawingTable",CATIADrawingTable::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADrawingTable(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADrawingTable, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADrawingTable##classe(classe::MetaObject(),CATIADrawingTable::MetaObject(),(void *)CreateTIECATIADrawingTable##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADrawingTable(classe) TIE_CATIADrawingTable(classe)
#else
#define BOA_CATIADrawingTable(classe) CATImplementBOA(CATIADrawingTable, classe)
#endif

#endif
