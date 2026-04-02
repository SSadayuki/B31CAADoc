#ifndef __TIE_CATIADraftingSettingAtt
#define __TIE_CATIADraftingSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIADraftingSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIADraftingSettingAtt */
#define declare_TIE_CATIADraftingSettingAtt(classe) \
 \
 \
class TIECATIADraftingSettingAtt##classe : public CATIADraftingSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIADraftingSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_PreventFileNew(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_PreventFileNew(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall GetPreventFileNewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetPreventFileNewLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_PreventSwitchStandard(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_PreventSwitchStandard(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall GetPreventSwitchStandardInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetPreventSwitchStandardLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_PreventUpdateStandard(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_PreventUpdateStandard(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall GetPreventUpdateStandardInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetPreventUpdateStandardLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_PreventBackgroundAccess(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_PreventBackgroundAccess(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall GetPreventBackgroundAccessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetPreventBackgroundAccessLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_UseStyleCreateObjects(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_UseStyleCreateObjects(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall GetUseStyleCreateObjectsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetUseStyleCreateObjectsLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_CreateNewSheetFrom(CatDrwNewSheetFrom & oValue); \
      virtual HRESULT __stdcall put_CreateNewSheetFrom(CatDrwNewSheetFrom iValue); \
      virtual HRESULT __stdcall GetCreateNewSheetFromInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetCreateNewSheetFromLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_LockUserDefault(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_LockUserDefault(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall GetLockUserDefaultInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetLockUserDefaultLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_PreventSetAsDefault(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_PreventSetAsDefault(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall GetPreventSetAsDefaultInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetPreventSetAsDefaultLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DisplayResetButton(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_DisplayResetButton(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall GetDisplayResetButtonInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDisplayResetButtonLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_PreventGenViewStyle(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_PreventGenViewStyle(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall GetPreventGenViewStyleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetPreventGenViewStyleLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_PreventDimDriving3DCstr(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_PreventDimDriving3DCstr(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall GetPreventDimDriving3DCstrInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetPreventDimDriving3DCstrLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_PreventTrueDimensionCreation(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_PreventTrueDimensionCreation(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall GetPreventTrueDimensionCreationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetPreventTrueDimensionCreationLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_PreventViewGeomUpgrade(CAT_VARIANT_BOOL & oValue); \
      virtual HRESULT __stdcall put_PreventViewGeomUpgrade(CAT_VARIANT_BOOL iValue); \
      virtual HRESULT __stdcall GetPreventViewGeomUpgradeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetPreventViewGeomUpgradeLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIADraftingSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_PreventFileNew(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_PreventFileNew(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall GetPreventFileNewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetPreventFileNewLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_PreventSwitchStandard(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_PreventSwitchStandard(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall GetPreventSwitchStandardInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetPreventSwitchStandardLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_PreventUpdateStandard(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_PreventUpdateStandard(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall GetPreventUpdateStandardInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetPreventUpdateStandardLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_PreventBackgroundAccess(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_PreventBackgroundAccess(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall GetPreventBackgroundAccessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetPreventBackgroundAccessLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_UseStyleCreateObjects(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_UseStyleCreateObjects(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall GetUseStyleCreateObjectsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetUseStyleCreateObjectsLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_CreateNewSheetFrom(CatDrwNewSheetFrom & oValue); \
virtual HRESULT __stdcall put_CreateNewSheetFrom(CatDrwNewSheetFrom iValue); \
virtual HRESULT __stdcall GetCreateNewSheetFromInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetCreateNewSheetFromLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_LockUserDefault(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_LockUserDefault(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall GetLockUserDefaultInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetLockUserDefaultLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_PreventSetAsDefault(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_PreventSetAsDefault(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall GetPreventSetAsDefaultInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetPreventSetAsDefaultLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DisplayResetButton(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_DisplayResetButton(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall GetDisplayResetButtonInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDisplayResetButtonLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_PreventGenViewStyle(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_PreventGenViewStyle(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall GetPreventGenViewStyleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetPreventGenViewStyleLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_PreventDimDriving3DCstr(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_PreventDimDriving3DCstr(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall GetPreventDimDriving3DCstrInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetPreventDimDriving3DCstrLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_PreventTrueDimensionCreation(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_PreventTrueDimensionCreation(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall GetPreventTrueDimensionCreationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetPreventTrueDimensionCreationLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_PreventViewGeomUpgrade(CAT_VARIANT_BOOL & oValue); \
virtual HRESULT __stdcall put_PreventViewGeomUpgrade(CAT_VARIANT_BOOL iValue); \
virtual HRESULT __stdcall GetPreventViewGeomUpgradeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetPreventViewGeomUpgradeLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIADraftingSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_PreventFileNew(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_PreventFileNew(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_PreventFileNew(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_PreventFileNew(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetPreventFileNewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPreventFileNewInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetPreventFileNewLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPreventFileNewLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_PreventSwitchStandard(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_PreventSwitchStandard(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_PreventSwitchStandard(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_PreventSwitchStandard(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetPreventSwitchStandardInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPreventSwitchStandardInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetPreventSwitchStandardLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPreventSwitchStandardLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_PreventUpdateStandard(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_PreventUpdateStandard(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_PreventUpdateStandard(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_PreventUpdateStandard(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetPreventUpdateStandardInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPreventUpdateStandardInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetPreventUpdateStandardLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPreventUpdateStandardLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_PreventBackgroundAccess(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_PreventBackgroundAccess(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_PreventBackgroundAccess(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_PreventBackgroundAccess(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetPreventBackgroundAccessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPreventBackgroundAccessInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetPreventBackgroundAccessLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPreventBackgroundAccessLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_UseStyleCreateObjects(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_UseStyleCreateObjects(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_UseStyleCreateObjects(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_UseStyleCreateObjects(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetUseStyleCreateObjectsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetUseStyleCreateObjectsInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetUseStyleCreateObjectsLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetUseStyleCreateObjectsLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_CreateNewSheetFrom(CatDrwNewSheetFrom & oValue) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_CreateNewSheetFrom(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_CreateNewSheetFrom(CatDrwNewSheetFrom iValue) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_CreateNewSheetFrom(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetCreateNewSheetFromInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetCreateNewSheetFromInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetCreateNewSheetFromLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetCreateNewSheetFromLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_LockUserDefault(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_LockUserDefault(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_LockUserDefault(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_LockUserDefault(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetLockUserDefaultInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetLockUserDefaultInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetLockUserDefaultLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetLockUserDefaultLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_PreventSetAsDefault(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_PreventSetAsDefault(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_PreventSetAsDefault(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_PreventSetAsDefault(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetPreventSetAsDefaultInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPreventSetAsDefaultInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetPreventSetAsDefaultLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPreventSetAsDefaultLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DisplayResetButton(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DisplayResetButton(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_DisplayResetButton(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DisplayResetButton(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetDisplayResetButtonInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDisplayResetButtonInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDisplayResetButtonLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDisplayResetButtonLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_PreventGenViewStyle(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_PreventGenViewStyle(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_PreventGenViewStyle(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_PreventGenViewStyle(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetPreventGenViewStyleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPreventGenViewStyleInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetPreventGenViewStyleLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPreventGenViewStyleLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_PreventDimDriving3DCstr(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_PreventDimDriving3DCstr(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_PreventDimDriving3DCstr(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_PreventDimDriving3DCstr(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetPreventDimDriving3DCstrInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPreventDimDriving3DCstrInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetPreventDimDriving3DCstrLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPreventDimDriving3DCstrLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_PreventTrueDimensionCreation(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_PreventTrueDimensionCreation(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_PreventTrueDimensionCreation(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_PreventTrueDimensionCreation(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetPreventTrueDimensionCreationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPreventTrueDimensionCreationInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetPreventTrueDimensionCreationLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPreventTrueDimensionCreationLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_PreventViewGeomUpgrade(CAT_VARIANT_BOOL & oValue) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_PreventViewGeomUpgrade(oValue)); \
} \
HRESULT __stdcall  ENVTIEName::put_PreventViewGeomUpgrade(CAT_VARIANT_BOOL iValue) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_PreventViewGeomUpgrade(iValue)); \
} \
HRESULT __stdcall  ENVTIEName::GetPreventViewGeomUpgradeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPreventViewGeomUpgradeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetPreventViewGeomUpgradeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPreventViewGeomUpgradeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIADraftingSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIADraftingSettingAtt(classe)    TIECATIADraftingSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIADraftingSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIADraftingSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIADraftingSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIADraftingSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIADraftingSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIADraftingSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::get_PreventFileNew(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PreventFileNew(oValue); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::put_PreventFileNew(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PreventFileNew(iValue); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::GetPreventFileNewInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPreventFileNewInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::SetPreventFileNewLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPreventFileNewLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::get_PreventSwitchStandard(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PreventSwitchStandard(oValue); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::put_PreventSwitchStandard(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PreventSwitchStandard(iValue); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::GetPreventSwitchStandardInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPreventSwitchStandardInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::SetPreventSwitchStandardLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPreventSwitchStandardLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::get_PreventUpdateStandard(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PreventUpdateStandard(oValue); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::put_PreventUpdateStandard(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PreventUpdateStandard(iValue); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::GetPreventUpdateStandardInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPreventUpdateStandardInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::SetPreventUpdateStandardLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPreventUpdateStandardLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::get_PreventBackgroundAccess(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PreventBackgroundAccess(oValue); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::put_PreventBackgroundAccess(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PreventBackgroundAccess(iValue); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::GetPreventBackgroundAccessInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPreventBackgroundAccessInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::SetPreventBackgroundAccessLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPreventBackgroundAccessLock(iLocked); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::get_UseStyleCreateObjects(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UseStyleCreateObjects(oValue); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::put_UseStyleCreateObjects(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_UseStyleCreateObjects(iValue); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::GetUseStyleCreateObjectsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUseStyleCreateObjectsInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::SetUseStyleCreateObjectsLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUseStyleCreateObjectsLock(iLocked); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::get_CreateNewSheetFrom(CatDrwNewSheetFrom & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_CreateNewSheetFrom(oValue); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::put_CreateNewSheetFrom(CatDrwNewSheetFrom iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_CreateNewSheetFrom(iValue); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::GetCreateNewSheetFromInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetCreateNewSheetFromInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::SetCreateNewSheetFromLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetCreateNewSheetFromLock(iLocked); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::get_LockUserDefault(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LockUserDefault(oValue); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::put_LockUserDefault(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LockUserDefault(iValue); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::GetLockUserDefaultInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLockUserDefaultInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::SetLockUserDefaultLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLockUserDefaultLock(iLocked); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::get_PreventSetAsDefault(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PreventSetAsDefault(oValue); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::put_PreventSetAsDefault(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PreventSetAsDefault(iValue); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::GetPreventSetAsDefaultInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPreventSetAsDefaultInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::SetPreventSetAsDefaultLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPreventSetAsDefaultLock(iLocked); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::get_DisplayResetButton(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DisplayResetButton(oValue); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::put_DisplayResetButton(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DisplayResetButton(iValue); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::GetDisplayResetButtonInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDisplayResetButtonInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::SetDisplayResetButtonLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDisplayResetButtonLock(iLocked); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::get_PreventGenViewStyle(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PreventGenViewStyle(oValue); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::put_PreventGenViewStyle(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PreventGenViewStyle(iValue); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::GetPreventGenViewStyleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPreventGenViewStyleInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::SetPreventGenViewStyleLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPreventGenViewStyleLock(iLocked); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::get_PreventDimDriving3DCstr(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PreventDimDriving3DCstr(oValue); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::put_PreventDimDriving3DCstr(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PreventDimDriving3DCstr(iValue); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::GetPreventDimDriving3DCstrInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPreventDimDriving3DCstrInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::SetPreventDimDriving3DCstrLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPreventDimDriving3DCstrLock(iLocked); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::get_PreventTrueDimensionCreation(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PreventTrueDimensionCreation(oValue); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::put_PreventTrueDimensionCreation(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PreventTrueDimensionCreation(iValue); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::GetPreventTrueDimensionCreationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPreventTrueDimensionCreationInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::SetPreventTrueDimensionCreationLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPreventTrueDimensionCreationLock(iLocked); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::get_PreventViewGeomUpgrade(CAT_VARIANT_BOOL & oValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&oValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PreventViewGeomUpgrade(oValue); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&oValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::put_PreventViewGeomUpgrade(CAT_VARIANT_BOOL iValue) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&iValue); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PreventViewGeomUpgrade(iValue); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&iValue); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::GetPreventViewGeomUpgradeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPreventViewGeomUpgradeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::SetPreventViewGeomUpgradeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPreventViewGeomUpgradeLock(iLocked); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIADraftingSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADraftingSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADraftingSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADraftingSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,60,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,60,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADraftingSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,61,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,61,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIADraftingSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,62,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,62,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIADraftingSettingAtt(classe) \
 \
 \
declare_TIE_CATIADraftingSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADraftingSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADraftingSettingAtt,"CATIADraftingSettingAtt",CATIADraftingSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADraftingSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIADraftingSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADraftingSettingAtt##classe(classe::MetaObject(),CATIADraftingSettingAtt::MetaObject(),(void *)CreateTIECATIADraftingSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIADraftingSettingAtt(classe) \
 \
 \
declare_TIE_CATIADraftingSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIADraftingSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIADraftingSettingAtt,"CATIADraftingSettingAtt",CATIADraftingSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIADraftingSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIADraftingSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIADraftingSettingAtt##classe(classe::MetaObject(),CATIADraftingSettingAtt::MetaObject(),(void *)CreateTIECATIADraftingSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIADraftingSettingAtt(classe) TIE_CATIADraftingSettingAtt(classe)
#else
#define BOA_CATIADraftingSettingAtt(classe) CATImplementBOA(CATIADraftingSettingAtt, classe)
#endif

#endif
