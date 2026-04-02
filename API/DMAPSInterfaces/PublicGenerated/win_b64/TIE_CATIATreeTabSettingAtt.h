#ifndef __TIE_CATIATreeTabSettingAtt
#define __TIE_CATIATreeTabSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIATreeTabSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIATreeTabSettingAtt */
#define declare_TIE_CATIATreeTabSettingAtt(classe) \
 \
 \
class TIECATIATreeTabSettingAtt##classe : public CATIATreeTabSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIATreeTabSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ResourceFilter(CATLONG & oResFilter); \
      virtual HRESULT __stdcall put_ResourceFilter(CATLONG iResFilter); \
      virtual HRESULT __stdcall GetResourceFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetResourceFilterLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ItemsFilter(CATLONG & oItemsFilter); \
      virtual HRESULT __stdcall put_ItemsFilter(CATLONG iItemsFilter); \
      virtual HRESULT __stdcall GetItemsFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetItemsFilterLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ItemsPerRelationFilter(CATLONG & oItemsRelFilter); \
      virtual HRESULT __stdcall put_ItemsPerRelationFilter(CATLONG iItemsRelFilter); \
      virtual HRESULT __stdcall GetItemsPerRelationFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetItemsPerRelationFilterLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AttributesFilter(CATLONG & oItemsRelFilter); \
      virtual HRESULT __stdcall put_AttributesFilter(CATLONG iItemsRelFilter); \
      virtual HRESULT __stdcall GetAttributesFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAttributesFilterLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ApplicativeDataFilter(CATLONG & ovalue); \
      virtual HRESULT __stdcall put_ApplicativeDataFilter(CATLONG ivalue); \
      virtual HRESULT __stdcall GetApplicativeDataFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetApplicativeDataFilterLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_OutputProductFilter(CATLONG & ovalue); \
      virtual HRESULT __stdcall put_OutputProductFilter(CATLONG ivalue); \
      virtual HRESULT __stdcall GetOutputProductFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetOutputProductFilterLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_LogicalActFilter(CATLONG & ovalue); \
      virtual HRESULT __stdcall put_LogicalActFilter(CATLONG ivalue); \
      virtual HRESULT __stdcall GetLogicalActFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetLogicalActFilterLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_CollapseExpandFilter(CATLONG & ovalue); \
      virtual HRESULT __stdcall put_CollapseExpandFilter(CATLONG ivalue); \
      virtual HRESULT __stdcall GetCollapseExpandFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetCollapseExpandFilterLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AssignedViewer(CATLONG & ovalue); \
      virtual HRESULT __stdcall put_AssignedViewer(CATLONG ivalue); \
      virtual HRESULT __stdcall GetAssignedViewerInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAssignedViewerLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DisplayNameMode(CATLONG & ovalue); \
      virtual HRESULT __stdcall put_DisplayNameMode(CATLONG ivalue); \
      virtual HRESULT __stdcall GetDisplayNameModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDisplayNameModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_RenderStyle(CATLONG & ovalue); \
      virtual HRESULT __stdcall put_RenderStyle(CATLONG ivalue); \
      virtual HRESULT __stdcall GetRenderStyleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetRenderStyleLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DisplayOrder(CATLONG & oDisplayOrder); \
      virtual HRESULT __stdcall put_DisplayOrder(CATLONG iDisplayOrder); \
      virtual HRESULT __stdcall GetDisplayOrderInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDisplayOrderLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DisplayProcessOrder(CATLONG & oDisplayOrder); \
      virtual HRESULT __stdcall put_DisplayProcessOrder(CATLONG iDisplayOrder); \
      virtual HRESULT __stdcall GetDisplayProcessOrderInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDisplayProcessOrderLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_PasteSameInstance(CATLONG & oDisplayOrder); \
      virtual HRESULT __stdcall put_PasteSameInstance(CATLONG iDisplayOrder); \
      virtual HRESULT __stdcall GetPasteSameInstanceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetPasteSameInstanceLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall Commit(); \
      virtual HRESULT __stdcall Rollback(); \
      virtual HRESULT __stdcall ResetToAdminValues(); \
      virtual HRESULT __stdcall ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList); \
      virtual HRESULT __stdcall SaveRepository(); \
      virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
      virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
      virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
      virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
      virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \
};



#define ENVTIEdeclare_CATIATreeTabSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ResourceFilter(CATLONG & oResFilter); \
virtual HRESULT __stdcall put_ResourceFilter(CATLONG iResFilter); \
virtual HRESULT __stdcall GetResourceFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetResourceFilterLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ItemsFilter(CATLONG & oItemsFilter); \
virtual HRESULT __stdcall put_ItemsFilter(CATLONG iItemsFilter); \
virtual HRESULT __stdcall GetItemsFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetItemsFilterLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ItemsPerRelationFilter(CATLONG & oItemsRelFilter); \
virtual HRESULT __stdcall put_ItemsPerRelationFilter(CATLONG iItemsRelFilter); \
virtual HRESULT __stdcall GetItemsPerRelationFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetItemsPerRelationFilterLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AttributesFilter(CATLONG & oItemsRelFilter); \
virtual HRESULT __stdcall put_AttributesFilter(CATLONG iItemsRelFilter); \
virtual HRESULT __stdcall GetAttributesFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAttributesFilterLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ApplicativeDataFilter(CATLONG & ovalue); \
virtual HRESULT __stdcall put_ApplicativeDataFilter(CATLONG ivalue); \
virtual HRESULT __stdcall GetApplicativeDataFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetApplicativeDataFilterLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_OutputProductFilter(CATLONG & ovalue); \
virtual HRESULT __stdcall put_OutputProductFilter(CATLONG ivalue); \
virtual HRESULT __stdcall GetOutputProductFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetOutputProductFilterLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_LogicalActFilter(CATLONG & ovalue); \
virtual HRESULT __stdcall put_LogicalActFilter(CATLONG ivalue); \
virtual HRESULT __stdcall GetLogicalActFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetLogicalActFilterLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_CollapseExpandFilter(CATLONG & ovalue); \
virtual HRESULT __stdcall put_CollapseExpandFilter(CATLONG ivalue); \
virtual HRESULT __stdcall GetCollapseExpandFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetCollapseExpandFilterLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AssignedViewer(CATLONG & ovalue); \
virtual HRESULT __stdcall put_AssignedViewer(CATLONG ivalue); \
virtual HRESULT __stdcall GetAssignedViewerInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAssignedViewerLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DisplayNameMode(CATLONG & ovalue); \
virtual HRESULT __stdcall put_DisplayNameMode(CATLONG ivalue); \
virtual HRESULT __stdcall GetDisplayNameModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDisplayNameModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_RenderStyle(CATLONG & ovalue); \
virtual HRESULT __stdcall put_RenderStyle(CATLONG ivalue); \
virtual HRESULT __stdcall GetRenderStyleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetRenderStyleLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DisplayOrder(CATLONG & oDisplayOrder); \
virtual HRESULT __stdcall put_DisplayOrder(CATLONG iDisplayOrder); \
virtual HRESULT __stdcall GetDisplayOrderInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDisplayOrderLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DisplayProcessOrder(CATLONG & oDisplayOrder); \
virtual HRESULT __stdcall put_DisplayProcessOrder(CATLONG iDisplayOrder); \
virtual HRESULT __stdcall GetDisplayProcessOrderInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDisplayProcessOrderLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_PasteSameInstance(CATLONG & oDisplayOrder); \
virtual HRESULT __stdcall put_PasteSameInstance(CATLONG iDisplayOrder); \
virtual HRESULT __stdcall GetPasteSameInstanceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetPasteSameInstanceLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall Commit(); \
virtual HRESULT __stdcall Rollback(); \
virtual HRESULT __stdcall ResetToAdminValues(); \
virtual HRESULT __stdcall ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList); \
virtual HRESULT __stdcall SaveRepository(); \
virtual HRESULT  __stdcall get_Application(CATIAApplication *& oApplication); \
virtual HRESULT  __stdcall get_Parent(CATBaseDispatch *& oParent); \
virtual HRESULT  __stdcall get_Name(CATBSTR & oNameBSTR); \
virtual HRESULT  __stdcall put_Name(const CATBSTR & iNameBSTR); \
virtual HRESULT  __stdcall GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj); \


#define ENVTIEdefine_CATIATreeTabSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ResourceFilter(CATLONG & oResFilter) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ResourceFilter(oResFilter)); \
} \
HRESULT __stdcall  ENVTIEName::put_ResourceFilter(CATLONG iResFilter) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ResourceFilter(iResFilter)); \
} \
HRESULT __stdcall  ENVTIEName::GetResourceFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetResourceFilterInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetResourceFilterLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetResourceFilterLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ItemsFilter(CATLONG & oItemsFilter) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ItemsFilter(oItemsFilter)); \
} \
HRESULT __stdcall  ENVTIEName::put_ItemsFilter(CATLONG iItemsFilter) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ItemsFilter(iItemsFilter)); \
} \
HRESULT __stdcall  ENVTIEName::GetItemsFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItemsFilterInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetItemsFilterLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetItemsFilterLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ItemsPerRelationFilter(CATLONG & oItemsRelFilter) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ItemsPerRelationFilter(oItemsRelFilter)); \
} \
HRESULT __stdcall  ENVTIEName::put_ItemsPerRelationFilter(CATLONG iItemsRelFilter) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ItemsPerRelationFilter(iItemsRelFilter)); \
} \
HRESULT __stdcall  ENVTIEName::GetItemsPerRelationFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItemsPerRelationFilterInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetItemsPerRelationFilterLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetItemsPerRelationFilterLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AttributesFilter(CATLONG & oItemsRelFilter) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AttributesFilter(oItemsRelFilter)); \
} \
HRESULT __stdcall  ENVTIEName::put_AttributesFilter(CATLONG iItemsRelFilter) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AttributesFilter(iItemsRelFilter)); \
} \
HRESULT __stdcall  ENVTIEName::GetAttributesFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAttributesFilterInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAttributesFilterLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAttributesFilterLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ApplicativeDataFilter(CATLONG & ovalue) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ApplicativeDataFilter(ovalue)); \
} \
HRESULT __stdcall  ENVTIEName::put_ApplicativeDataFilter(CATLONG ivalue) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ApplicativeDataFilter(ivalue)); \
} \
HRESULT __stdcall  ENVTIEName::GetApplicativeDataFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetApplicativeDataFilterInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetApplicativeDataFilterLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetApplicativeDataFilterLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_OutputProductFilter(CATLONG & ovalue) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_OutputProductFilter(ovalue)); \
} \
HRESULT __stdcall  ENVTIEName::put_OutputProductFilter(CATLONG ivalue) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_OutputProductFilter(ivalue)); \
} \
HRESULT __stdcall  ENVTIEName::GetOutputProductFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetOutputProductFilterInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetOutputProductFilterLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetOutputProductFilterLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_LogicalActFilter(CATLONG & ovalue) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_LogicalActFilter(ovalue)); \
} \
HRESULT __stdcall  ENVTIEName::put_LogicalActFilter(CATLONG ivalue) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_LogicalActFilter(ivalue)); \
} \
HRESULT __stdcall  ENVTIEName::GetLogicalActFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetLogicalActFilterInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetLogicalActFilterLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetLogicalActFilterLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_CollapseExpandFilter(CATLONG & ovalue) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_CollapseExpandFilter(ovalue)); \
} \
HRESULT __stdcall  ENVTIEName::put_CollapseExpandFilter(CATLONG ivalue) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_CollapseExpandFilter(ivalue)); \
} \
HRESULT __stdcall  ENVTIEName::GetCollapseExpandFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetCollapseExpandFilterInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetCollapseExpandFilterLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetCollapseExpandFilterLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AssignedViewer(CATLONG & ovalue) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AssignedViewer(ovalue)); \
} \
HRESULT __stdcall  ENVTIEName::put_AssignedViewer(CATLONG ivalue) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AssignedViewer(ivalue)); \
} \
HRESULT __stdcall  ENVTIEName::GetAssignedViewerInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAssignedViewerInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAssignedViewerLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAssignedViewerLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DisplayNameMode(CATLONG & ovalue) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DisplayNameMode(ovalue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DisplayNameMode(CATLONG ivalue) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DisplayNameMode(ivalue)); \
} \
HRESULT __stdcall  ENVTIEName::GetDisplayNameModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDisplayNameModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDisplayNameModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDisplayNameModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_RenderStyle(CATLONG & ovalue) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_RenderStyle(ovalue)); \
} \
HRESULT __stdcall  ENVTIEName::put_RenderStyle(CATLONG ivalue) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_RenderStyle(ivalue)); \
} \
HRESULT __stdcall  ENVTIEName::GetRenderStyleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetRenderStyleInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetRenderStyleLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetRenderStyleLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DisplayOrder(CATLONG & oDisplayOrder) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DisplayOrder(oDisplayOrder)); \
} \
HRESULT __stdcall  ENVTIEName::put_DisplayOrder(CATLONG iDisplayOrder) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DisplayOrder(iDisplayOrder)); \
} \
HRESULT __stdcall  ENVTIEName::GetDisplayOrderInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDisplayOrderInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDisplayOrderLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDisplayOrderLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DisplayProcessOrder(CATLONG & oDisplayOrder) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DisplayProcessOrder(oDisplayOrder)); \
} \
HRESULT __stdcall  ENVTIEName::put_DisplayProcessOrder(CATLONG iDisplayOrder) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DisplayProcessOrder(iDisplayOrder)); \
} \
HRESULT __stdcall  ENVTIEName::GetDisplayProcessOrderInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDisplayProcessOrderInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDisplayProcessOrderLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDisplayProcessOrderLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_PasteSameInstance(CATLONG & oDisplayOrder) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_PasteSameInstance(oDisplayOrder)); \
} \
HRESULT __stdcall  ENVTIEName::put_PasteSameInstance(CATLONG iDisplayOrder) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_PasteSameInstance(iDisplayOrder)); \
} \
HRESULT __stdcall  ENVTIEName::GetPasteSameInstanceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPasteSameInstanceInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetPasteSameInstanceLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPasteSameInstanceLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIATreeTabSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIATreeTabSettingAtt(classe)    TIECATIATreeTabSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIATreeTabSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIATreeTabSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIATreeTabSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIATreeTabSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIATreeTabSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIATreeTabSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::get_ResourceFilter(CATLONG & oResFilter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oResFilter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ResourceFilter(oResFilter); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oResFilter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::put_ResourceFilter(CATLONG iResFilter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iResFilter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ResourceFilter(iResFilter); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iResFilter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::GetResourceFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetResourceFilterInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::SetResourceFilterLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetResourceFilterLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::get_ItemsFilter(CATLONG & oItemsFilter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oItemsFilter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ItemsFilter(oItemsFilter); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oItemsFilter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::put_ItemsFilter(CATLONG iItemsFilter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iItemsFilter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ItemsFilter(iItemsFilter); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iItemsFilter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::GetItemsFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItemsFilterInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::SetItemsFilterLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetItemsFilterLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::get_ItemsPerRelationFilter(CATLONG & oItemsRelFilter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oItemsRelFilter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ItemsPerRelationFilter(oItemsRelFilter); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oItemsRelFilter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::put_ItemsPerRelationFilter(CATLONG iItemsRelFilter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iItemsRelFilter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ItemsPerRelationFilter(iItemsRelFilter); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iItemsRelFilter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::GetItemsPerRelationFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItemsPerRelationFilterInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::SetItemsPerRelationFilterLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetItemsPerRelationFilterLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::get_AttributesFilter(CATLONG & oItemsRelFilter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oItemsRelFilter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AttributesFilter(oItemsRelFilter); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oItemsRelFilter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::put_AttributesFilter(CATLONG iItemsRelFilter) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iItemsRelFilter); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AttributesFilter(iItemsRelFilter); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iItemsRelFilter); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::GetAttributesFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAttributesFilterInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::SetAttributesFilterLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAttributesFilterLock(iLocked); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::get_ApplicativeDataFilter(CATLONG & ovalue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&ovalue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ApplicativeDataFilter(ovalue); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&ovalue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::put_ApplicativeDataFilter(CATLONG ivalue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&ivalue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ApplicativeDataFilter(ivalue); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&ivalue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::GetApplicativeDataFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetApplicativeDataFilterInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::SetApplicativeDataFilterLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetApplicativeDataFilterLock(iLocked); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::get_OutputProductFilter(CATLONG & ovalue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&ovalue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OutputProductFilter(ovalue); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&ovalue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::put_OutputProductFilter(CATLONG ivalue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&ivalue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OutputProductFilter(ivalue); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&ivalue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::GetOutputProductFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOutputProductFilterInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::SetOutputProductFilterLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOutputProductFilterLock(iLocked); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::get_LogicalActFilter(CATLONG & ovalue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&ovalue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LogicalActFilter(ovalue); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&ovalue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::put_LogicalActFilter(CATLONG ivalue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&ivalue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LogicalActFilter(ivalue); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&ivalue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::GetLogicalActFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLogicalActFilterInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::SetLogicalActFilterLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLogicalActFilterLock(iLocked); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::get_CollapseExpandFilter(CATLONG & ovalue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&ovalue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CollapseExpandFilter(ovalue); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&ovalue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::put_CollapseExpandFilter(CATLONG ivalue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&ivalue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CollapseExpandFilter(ivalue); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&ivalue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::GetCollapseExpandFilterInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCollapseExpandFilterInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::SetCollapseExpandFilterLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCollapseExpandFilterLock(iLocked); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::get_AssignedViewer(CATLONG & ovalue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&ovalue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AssignedViewer(ovalue); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&ovalue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::put_AssignedViewer(CATLONG ivalue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&ivalue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AssignedViewer(ivalue); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&ivalue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::GetAssignedViewerInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAssignedViewerInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::SetAssignedViewerLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAssignedViewerLock(iLocked); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::get_DisplayNameMode(CATLONG & ovalue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&ovalue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DisplayNameMode(ovalue); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&ovalue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::put_DisplayNameMode(CATLONG ivalue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&ivalue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DisplayNameMode(ivalue); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&ivalue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::GetDisplayNameModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDisplayNameModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::SetDisplayNameModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDisplayNameModeLock(iLocked); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::get_RenderStyle(CATLONG & ovalue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&ovalue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RenderStyle(ovalue); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&ovalue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::put_RenderStyle(CATLONG ivalue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&ivalue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RenderStyle(ivalue); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&ivalue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::GetRenderStyleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRenderStyleInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::SetRenderStyleLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRenderStyleLock(iLocked); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::get_DisplayOrder(CATLONG & oDisplayOrder) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&oDisplayOrder); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DisplayOrder(oDisplayOrder); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&oDisplayOrder); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::put_DisplayOrder(CATLONG iDisplayOrder) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&iDisplayOrder); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DisplayOrder(iDisplayOrder); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&iDisplayOrder); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::GetDisplayOrderInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDisplayOrderInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::SetDisplayOrderLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDisplayOrderLock(iLocked); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::get_DisplayProcessOrder(CATLONG & oDisplayOrder) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&oDisplayOrder); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DisplayProcessOrder(oDisplayOrder); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&oDisplayOrder); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::put_DisplayProcessOrder(CATLONG iDisplayOrder) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&iDisplayOrder); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DisplayProcessOrder(iDisplayOrder); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&iDisplayOrder); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::GetDisplayProcessOrderInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDisplayProcessOrderInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::SetDisplayProcessOrderLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDisplayProcessOrderLock(iLocked); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::get_PasteSameInstance(CATLONG & oDisplayOrder) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&oDisplayOrder); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PasteSameInstance(oDisplayOrder); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&oDisplayOrder); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::put_PasteSameInstance(CATLONG iDisplayOrder) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&iDisplayOrder); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PasteSameInstance(iDisplayOrder); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&iDisplayOrder); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::GetPasteSameInstanceInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPasteSameInstanceInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::SetPasteSameInstanceLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPasteSameInstanceLock(iLocked); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,60,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,60,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIATreeTabSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,61,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,61,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATreeTabSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,62,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,62,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATreeTabSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,63,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,63,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATreeTabSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,64,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,64,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATreeTabSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,65,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,65,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIATreeTabSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,66,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,66,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIATreeTabSettingAtt(classe) \
 \
 \
declare_TIE_CATIATreeTabSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATreeTabSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATreeTabSettingAtt,"CATIATreeTabSettingAtt",CATIATreeTabSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATreeTabSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIATreeTabSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATreeTabSettingAtt##classe(classe::MetaObject(),CATIATreeTabSettingAtt::MetaObject(),(void *)CreateTIECATIATreeTabSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIATreeTabSettingAtt(classe) \
 \
 \
declare_TIE_CATIATreeTabSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIATreeTabSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIATreeTabSettingAtt,"CATIATreeTabSettingAtt",CATIATreeTabSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIATreeTabSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIATreeTabSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIATreeTabSettingAtt##classe(classe::MetaObject(),CATIATreeTabSettingAtt::MetaObject(),(void *)CreateTIECATIATreeTabSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIATreeTabSettingAtt(classe) TIE_CATIATreeTabSettingAtt(classe)
#else
#define BOA_CATIATreeTabSettingAtt(classe) CATImplementBOA(CATIATreeTabSettingAtt, classe)
#endif

#endif
