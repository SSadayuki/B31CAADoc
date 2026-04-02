#ifndef __TIE_CATIAV4V5SpaceSettingAtt
#define __TIE_CATIAV4V5SpaceSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAV4V5SpaceSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAV4V5SpaceSettingAtt */
#define declare_TIE_CATIAV4V5SpaceSettingAtt(classe) \
 \
 \
class TIECATIAV4V5SpaceSettingAtt##classe : public CATIAV4V5SpaceSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAV4V5SpaceSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_ExternalTypeDeformation(CATLONG & oExtType); \
      virtual HRESULT __stdcall put_ExternalTypeDeformation(CATLONG iExtType); \
      virtual HRESULT __stdcall SetExternalTypeDeformationLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetExternalTypeDeformationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_ExternalMaxDeformation(double & oExtMaxDef); \
      virtual HRESULT __stdcall put_ExternalMaxDeformation(double iExtMaxDef); \
      virtual HRESULT __stdcall SetExternalMaxDeformationLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetExternalMaxDeformationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_InternalTypeDeformation(CATLONG & oIntType); \
      virtual HRESULT __stdcall put_InternalTypeDeformation(CATLONG iIntType); \
      virtual HRESULT __stdcall SetInternalTypeDeformationLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetInternalTypeDeformationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_InternalMaxDeformation(double & oIntMaxDef); \
      virtual HRESULT __stdcall put_InternalMaxDeformation(double iIntMaxDef); \
      virtual HRESULT __stdcall SetInternalMaxDeformationLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetInternalMaxDeformationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_KeepSegmentation(CATLONG & oSegmentationState); \
      virtual HRESULT __stdcall put_KeepSegmentation(CATLONG iSegmentationState); \
      virtual HRESULT __stdcall SetKeepSegmentationLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetKeepSegmentationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DetailsModeUsual(CATLONG & oDetailsChoiceUsual); \
      virtual HRESULT __stdcall put_DetailsModeUsual(CATLONG iDetailsChoiceUsual); \
      virtual HRESULT __stdcall SetDetailsModeUsualLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetDetailsModeUsualInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DetailsModeExplode(CATLONG & oDetailsChoiceExplode); \
      virtual HRESULT __stdcall put_DetailsModeExplode(CATLONG iDetailsChoiceExplode); \
      virtual HRESULT __stdcall SetDetailsModeExplodeLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetDetailsModeExplodeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_DetailsModeWireframe(CATLONG & oDetailsChoiceWireframe); \
      virtual HRESULT __stdcall put_DetailsModeWireframe(CATLONG iDetailsChoiceWireframe); \
      virtual HRESULT __stdcall SetDetailsModeWireframeLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetDetailsModeWireframeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_SolidMU(CATBSTR & ochoiceMU); \
      virtual HRESULT __stdcall put_SolidMU(const CATBSTR & ichoiceMU); \
      virtual HRESULT __stdcall SetSolidMULock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetSolidMUInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_TextMigration(CATLONG & oTextMigrationState); \
      virtual HRESULT __stdcall put_TextMigration(CATLONG iTextMigrationState); \
      virtual HRESULT __stdcall SetTextMigrationLock(CAT_VARIANT_BOOL iLock); \
      virtual HRESULT __stdcall GetTextMigrationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
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



#define ENVTIEdeclare_CATIAV4V5SpaceSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_ExternalTypeDeformation(CATLONG & oExtType); \
virtual HRESULT __stdcall put_ExternalTypeDeformation(CATLONG iExtType); \
virtual HRESULT __stdcall SetExternalTypeDeformationLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetExternalTypeDeformationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_ExternalMaxDeformation(double & oExtMaxDef); \
virtual HRESULT __stdcall put_ExternalMaxDeformation(double iExtMaxDef); \
virtual HRESULT __stdcall SetExternalMaxDeformationLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetExternalMaxDeformationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_InternalTypeDeformation(CATLONG & oIntType); \
virtual HRESULT __stdcall put_InternalTypeDeformation(CATLONG iIntType); \
virtual HRESULT __stdcall SetInternalTypeDeformationLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetInternalTypeDeformationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_InternalMaxDeformation(double & oIntMaxDef); \
virtual HRESULT __stdcall put_InternalMaxDeformation(double iIntMaxDef); \
virtual HRESULT __stdcall SetInternalMaxDeformationLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetInternalMaxDeformationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_KeepSegmentation(CATLONG & oSegmentationState); \
virtual HRESULT __stdcall put_KeepSegmentation(CATLONG iSegmentationState); \
virtual HRESULT __stdcall SetKeepSegmentationLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetKeepSegmentationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DetailsModeUsual(CATLONG & oDetailsChoiceUsual); \
virtual HRESULT __stdcall put_DetailsModeUsual(CATLONG iDetailsChoiceUsual); \
virtual HRESULT __stdcall SetDetailsModeUsualLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetDetailsModeUsualInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DetailsModeExplode(CATLONG & oDetailsChoiceExplode); \
virtual HRESULT __stdcall put_DetailsModeExplode(CATLONG iDetailsChoiceExplode); \
virtual HRESULT __stdcall SetDetailsModeExplodeLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetDetailsModeExplodeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_DetailsModeWireframe(CATLONG & oDetailsChoiceWireframe); \
virtual HRESULT __stdcall put_DetailsModeWireframe(CATLONG iDetailsChoiceWireframe); \
virtual HRESULT __stdcall SetDetailsModeWireframeLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetDetailsModeWireframeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_SolidMU(CATBSTR & ochoiceMU); \
virtual HRESULT __stdcall put_SolidMU(const CATBSTR & ichoiceMU); \
virtual HRESULT __stdcall SetSolidMULock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetSolidMUInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_TextMigration(CATLONG & oTextMigrationState); \
virtual HRESULT __stdcall put_TextMigration(CATLONG iTextMigrationState); \
virtual HRESULT __stdcall SetTextMigrationLock(CAT_VARIANT_BOOL iLock); \
virtual HRESULT __stdcall GetTextMigrationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified); \
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


#define ENVTIEdefine_CATIAV4V5SpaceSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_ExternalTypeDeformation(CATLONG & oExtType) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ExternalTypeDeformation(oExtType)); \
} \
HRESULT __stdcall  ENVTIEName::put_ExternalTypeDeformation(CATLONG iExtType) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ExternalTypeDeformation(iExtType)); \
} \
HRESULT __stdcall  ENVTIEName::SetExternalTypeDeformationLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetExternalTypeDeformationLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetExternalTypeDeformationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetExternalTypeDeformationInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_ExternalMaxDeformation(double & oExtMaxDef) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ExternalMaxDeformation(oExtMaxDef)); \
} \
HRESULT __stdcall  ENVTIEName::put_ExternalMaxDeformation(double iExtMaxDef) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ExternalMaxDeformation(iExtMaxDef)); \
} \
HRESULT __stdcall  ENVTIEName::SetExternalMaxDeformationLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetExternalMaxDeformationLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetExternalMaxDeformationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetExternalMaxDeformationInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_InternalTypeDeformation(CATLONG & oIntType) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_InternalTypeDeformation(oIntType)); \
} \
HRESULT __stdcall  ENVTIEName::put_InternalTypeDeformation(CATLONG iIntType) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_InternalTypeDeformation(iIntType)); \
} \
HRESULT __stdcall  ENVTIEName::SetInternalTypeDeformationLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetInternalTypeDeformationLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetInternalTypeDeformationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetInternalTypeDeformationInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_InternalMaxDeformation(double & oIntMaxDef) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_InternalMaxDeformation(oIntMaxDef)); \
} \
HRESULT __stdcall  ENVTIEName::put_InternalMaxDeformation(double iIntMaxDef) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_InternalMaxDeformation(iIntMaxDef)); \
} \
HRESULT __stdcall  ENVTIEName::SetInternalMaxDeformationLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetInternalMaxDeformationLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetInternalMaxDeformationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetInternalMaxDeformationInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_KeepSegmentation(CATLONG & oSegmentationState) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_KeepSegmentation(oSegmentationState)); \
} \
HRESULT __stdcall  ENVTIEName::put_KeepSegmentation(CATLONG iSegmentationState) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_KeepSegmentation(iSegmentationState)); \
} \
HRESULT __stdcall  ENVTIEName::SetKeepSegmentationLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetKeepSegmentationLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetKeepSegmentationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetKeepSegmentationInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DetailsModeUsual(CATLONG & oDetailsChoiceUsual) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DetailsModeUsual(oDetailsChoiceUsual)); \
} \
HRESULT __stdcall  ENVTIEName::put_DetailsModeUsual(CATLONG iDetailsChoiceUsual) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DetailsModeUsual(iDetailsChoiceUsual)); \
} \
HRESULT __stdcall  ENVTIEName::SetDetailsModeUsualLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDetailsModeUsualLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetDetailsModeUsualInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDetailsModeUsualInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DetailsModeExplode(CATLONG & oDetailsChoiceExplode) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DetailsModeExplode(oDetailsChoiceExplode)); \
} \
HRESULT __stdcall  ENVTIEName::put_DetailsModeExplode(CATLONG iDetailsChoiceExplode) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DetailsModeExplode(iDetailsChoiceExplode)); \
} \
HRESULT __stdcall  ENVTIEName::SetDetailsModeExplodeLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDetailsModeExplodeLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetDetailsModeExplodeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDetailsModeExplodeInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_DetailsModeWireframe(CATLONG & oDetailsChoiceWireframe) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DetailsModeWireframe(oDetailsChoiceWireframe)); \
} \
HRESULT __stdcall  ENVTIEName::put_DetailsModeWireframe(CATLONG iDetailsChoiceWireframe) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DetailsModeWireframe(iDetailsChoiceWireframe)); \
} \
HRESULT __stdcall  ENVTIEName::SetDetailsModeWireframeLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDetailsModeWireframeLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetDetailsModeWireframeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDetailsModeWireframeInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_SolidMU(CATBSTR & ochoiceMU) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SolidMU(ochoiceMU)); \
} \
HRESULT __stdcall  ENVTIEName::put_SolidMU(const CATBSTR & ichoiceMU) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SolidMU(ichoiceMU)); \
} \
HRESULT __stdcall  ENVTIEName::SetSolidMULock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSolidMULock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetSolidMUInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSolidMUInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_TextMigration(CATLONG & oTextMigrationState) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_TextMigration(oTextMigrationState)); \
} \
HRESULT __stdcall  ENVTIEName::put_TextMigration(CATLONG iTextMigrationState) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_TextMigration(iTextMigrationState)); \
} \
HRESULT __stdcall  ENVTIEName::SetTextMigrationLock(CAT_VARIANT_BOOL iLock) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetTextMigrationLock(iLock)); \
} \
HRESULT __stdcall  ENVTIEName::GetTextMigrationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetTextMigrationInfo(AdminLevel,oLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAV4V5SpaceSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAV4V5SpaceSettingAtt(classe)    TIECATIAV4V5SpaceSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAV4V5SpaceSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAV4V5SpaceSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAV4V5SpaceSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAV4V5SpaceSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAV4V5SpaceSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAV4V5SpaceSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::get_ExternalTypeDeformation(CATLONG & oExtType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oExtType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExternalTypeDeformation(oExtType); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oExtType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::put_ExternalTypeDeformation(CATLONG iExtType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iExtType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ExternalTypeDeformation(iExtType); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iExtType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::SetExternalTypeDeformationLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetExternalTypeDeformationLock(iLock); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::GetExternalTypeDeformationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetExternalTypeDeformationInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::get_ExternalMaxDeformation(double & oExtMaxDef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oExtMaxDef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExternalMaxDeformation(oExtMaxDef); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oExtMaxDef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::put_ExternalMaxDeformation(double iExtMaxDef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iExtMaxDef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ExternalMaxDeformation(iExtMaxDef); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iExtMaxDef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::SetExternalMaxDeformationLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetExternalMaxDeformationLock(iLock); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::GetExternalMaxDeformationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetExternalMaxDeformationInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::get_InternalTypeDeformation(CATLONG & oIntType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oIntType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InternalTypeDeformation(oIntType); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oIntType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::put_InternalTypeDeformation(CATLONG iIntType) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iIntType); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_InternalTypeDeformation(iIntType); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iIntType); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::SetInternalTypeDeformationLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetInternalTypeDeformationLock(iLock); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::GetInternalTypeDeformationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInternalTypeDeformationInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::get_InternalMaxDeformation(double & oIntMaxDef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&oIntMaxDef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_InternalMaxDeformation(oIntMaxDef); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&oIntMaxDef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::put_InternalMaxDeformation(double iIntMaxDef) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&iIntMaxDef); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_InternalMaxDeformation(iIntMaxDef); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&iIntMaxDef); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::SetInternalMaxDeformationLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetInternalMaxDeformationLock(iLock); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::GetInternalMaxDeformationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetInternalMaxDeformationInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::get_KeepSegmentation(CATLONG & oSegmentationState) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oSegmentationState); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_KeepSegmentation(oSegmentationState); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oSegmentationState); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::put_KeepSegmentation(CATLONG iSegmentationState) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iSegmentationState); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_KeepSegmentation(iSegmentationState); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iSegmentationState); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::SetKeepSegmentationLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetKeepSegmentationLock(iLock); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::GetKeepSegmentationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetKeepSegmentationInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::get_DetailsModeUsual(CATLONG & oDetailsChoiceUsual) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oDetailsChoiceUsual); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DetailsModeUsual(oDetailsChoiceUsual); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oDetailsChoiceUsual); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::put_DetailsModeUsual(CATLONG iDetailsChoiceUsual) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&iDetailsChoiceUsual); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DetailsModeUsual(iDetailsChoiceUsual); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&iDetailsChoiceUsual); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::SetDetailsModeUsualLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDetailsModeUsualLock(iLock); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::GetDetailsModeUsualInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDetailsModeUsualInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::get_DetailsModeExplode(CATLONG & oDetailsChoiceExplode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oDetailsChoiceExplode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DetailsModeExplode(oDetailsChoiceExplode); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oDetailsChoiceExplode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::put_DetailsModeExplode(CATLONG iDetailsChoiceExplode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iDetailsChoiceExplode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DetailsModeExplode(iDetailsChoiceExplode); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iDetailsChoiceExplode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::SetDetailsModeExplodeLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDetailsModeExplodeLock(iLock); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::GetDetailsModeExplodeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDetailsModeExplodeInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::get_DetailsModeWireframe(CATLONG & oDetailsChoiceWireframe) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oDetailsChoiceWireframe); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DetailsModeWireframe(oDetailsChoiceWireframe); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oDetailsChoiceWireframe); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::put_DetailsModeWireframe(CATLONG iDetailsChoiceWireframe) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iDetailsChoiceWireframe); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DetailsModeWireframe(iDetailsChoiceWireframe); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iDetailsChoiceWireframe); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::SetDetailsModeWireframeLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDetailsModeWireframeLock(iLock); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::GetDetailsModeWireframeInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDetailsModeWireframeInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::get_SolidMU(CATBSTR & ochoiceMU) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&ochoiceMU); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SolidMU(ochoiceMU); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&ochoiceMU); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::put_SolidMU(const CATBSTR & ichoiceMU) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&ichoiceMU); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SolidMU(ichoiceMU); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&ichoiceMU); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::SetSolidMULock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSolidMULock(iLock); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::GetSolidMUInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSolidMUInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::get_TextMigration(CATLONG & oTextMigrationState) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oTextMigrationState); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TextMigration(oTextMigrationState); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oTextMigrationState); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::put_TextMigration(CATLONG iTextMigrationState) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iTextMigrationState); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TextMigration(iTextMigrationState); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iTextMigrationState); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::SetTextMigrationLock(CAT_VARIANT_BOOL iLock) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&iLock); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetTextMigrationLock(iLock); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&iLock); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::GetTextMigrationInfo(CATBSTR & AdminLevel, CATBSTR & oLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&AdminLevel,&oLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTextMigrationInfo(AdminLevel,oLocked,oModified); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&AdminLevel,&oLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAV4V5SpaceSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAV4V5SpaceSettingAtt(classe) \
 \
 \
declare_TIE_CATIAV4V5SpaceSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAV4V5SpaceSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAV4V5SpaceSettingAtt,"CATIAV4V5SpaceSettingAtt",CATIAV4V5SpaceSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAV4V5SpaceSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAV4V5SpaceSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAV4V5SpaceSettingAtt##classe(classe::MetaObject(),CATIAV4V5SpaceSettingAtt::MetaObject(),(void *)CreateTIECATIAV4V5SpaceSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAV4V5SpaceSettingAtt(classe) \
 \
 \
declare_TIE_CATIAV4V5SpaceSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAV4V5SpaceSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAV4V5SpaceSettingAtt,"CATIAV4V5SpaceSettingAtt",CATIAV4V5SpaceSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAV4V5SpaceSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAV4V5SpaceSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAV4V5SpaceSettingAtt##classe(classe::MetaObject(),CATIAV4V5SpaceSettingAtt::MetaObject(),(void *)CreateTIECATIAV4V5SpaceSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAV4V5SpaceSettingAtt(classe) TIE_CATIAV4V5SpaceSettingAtt(classe)
#else
#define BOA_CATIAV4V5SpaceSettingAtt(classe) CATImplementBOA(CATIAV4V5SpaceSettingAtt, classe)
#endif

#endif
