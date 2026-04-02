#ifndef __TIE_CATIAPartInfrastructureSettingAtt
#define __TIE_CATIAPartInfrastructureSettingAtt

#include <string.h>
#include "CATBaseUnknown.h"
#include "CATMetaClass.h"
#include "CATMacForTie.h"
#include "CATExitJournal.h"
#include "CATIAPartInfrastructureSettingAtt.h"
#include "JS0DSPA.h"


#ifdef _WINDOWS_SOURCE
#define Exported __declspec(dllexport)
#define Imported __declspec(dllimport)
#else
#define Exported 
#define Imported 
#endif


/* To link an implementation with the interface CATIAPartInfrastructureSettingAtt */
#define declare_TIE_CATIAPartInfrastructureSettingAtt(classe) \
 \
 \
class TIECATIAPartInfrastructureSettingAtt##classe : public CATIAPartInfrastructureSettingAtt \
{ \
   private: \
      CATDeclareCommonTIEMembers \
   public: \
      CATDeclareTIEMethods(CATIAPartInfrastructureSettingAtt, classe) \
      CATDeclareIUnknownMethodsForCATBaseUnknownTIE \
      CATDeclareIDispatchMethodsForCATBaseUnknownTIE \
      CATDeclareCATBaseUnknownMethodsForTIE \
      virtual HRESULT __stdcall get_NewWithAxisSystem(CAT_VARIANT_BOOL & oAxisSystemCreated); \
      virtual HRESULT __stdcall put_NewWithAxisSystem(CAT_VARIANT_BOOL iAxisSystemCreated); \
      virtual HRESULT __stdcall GetNewWithAxisSystemInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetNewWithAxisSystemLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_NewWithGS(CAT_VARIANT_BOOL & oGSCreated); \
      virtual HRESULT __stdcall put_NewWithGS(CAT_VARIANT_BOOL iGSCreated); \
      virtual HRESULT __stdcall GetNewWithGSInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetNewWithGSLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_NewWithOGS(CAT_VARIANT_BOOL & oOGSCreated); \
      virtual HRESULT __stdcall put_NewWithOGS(CAT_VARIANT_BOOL iGSCreated); \
      virtual HRESULT __stdcall GetNewWithOGSInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetNewWithOGSLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_NewWith3DSupport(CAT_VARIANT_BOOL & o3DSupportCreated); \
      virtual HRESULT __stdcall put_NewWith3DSupport(CAT_VARIANT_BOOL i3DSupportCreated); \
      virtual HRESULT __stdcall GetNewWith3DSupportInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetNewWith3DSupportLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_NewWithPanel(CAT_VARIANT_BOOL & oNewPartPanelDisplayed); \
      virtual HRESULT __stdcall put_NewWithPanel(CAT_VARIANT_BOOL iNewPartPanelDisplayed); \
      virtual HRESULT __stdcall GetNewWithPanelInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetNewWithPanelLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_UpdateMode(CatPartUpdateMode & oUpdateMode); \
      virtual HRESULT __stdcall put_UpdateMode(CatPartUpdateMode oUpdateMode); \
      virtual HRESULT __stdcall GetUpdateModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetUpdateModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_UpdateStoppedOnError(CAT_VARIANT_BOOL & oStoppedOnError); \
      virtual HRESULT __stdcall put_UpdateStoppedOnError(CAT_VARIANT_BOOL iStoppedOnError); \
      virtual HRESULT __stdcall GetUpdateStoppedOnErrorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetUpdateStoppedOnErrorLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_UpdateLinkedExternalReferences(CAT_VARIANT_BOOL & oExternalReferencesUpdated); \
      virtual HRESULT __stdcall put_UpdateLinkedExternalReferences(CAT_VARIANT_BOOL iExternalReferencesUpdated); \
      virtual HRESULT __stdcall GetUpdateLinkedExternalReferencesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetUpdateLinkedExternalReferencesLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_UpdateElementsRefreshed(CAT_VARIANT_BOOL & oElementsRefreshed); \
      virtual HRESULT __stdcall put_UpdateElementsRefreshed(CAT_VARIANT_BOOL iElementsRefreshed); \
      virtual HRESULT __stdcall GetUpdateElementsRefreshedInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetUpdateElementsRefreshedLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_HybridDesignMode(CAT_VARIANT_BOOL & oHybridDesign); \
      virtual HRESULT __stdcall put_HybridDesignMode(CAT_VARIANT_BOOL iHybridDesign); \
      virtual HRESULT __stdcall GetHybridDesignModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetHybridDesignModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_KnowledgeInHybridDesignMode(CAT_VARIANT_BOOL & oKnowledgeInHybridDesign); \
      virtual HRESULT __stdcall put_KnowledgeInHybridDesignMode(CAT_VARIANT_BOOL iKnowledgeInHybridDesign); \
      virtual HRESULT __stdcall GetKnowledgeInHybridDesignModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetKnowledgeInHybridDesignModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_SurfaceElementsLocation(CatPartSurfaceElementsLocation & oLocation); \
      virtual HRESULT __stdcall put_SurfaceElementsLocation(CatPartSurfaceElementsLocation iLocation); \
      virtual HRESULT __stdcall GetSurfaceElementsLocationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetSurfaceElementsLocationLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ExternalReferencesNodeInTree(CAT_VARIANT_BOOL & oNodeDisplayed); \
      virtual HRESULT __stdcall put_ExternalReferencesNodeInTree(CAT_VARIANT_BOOL iNodeDisplayed); \
      virtual HRESULT __stdcall GetExternalReferencesNodeInTreeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetExternalReferencesNodeInTreeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ConstraintsNodeInTree(CAT_VARIANT_BOOL & oNodeDisplayed); \
      virtual HRESULT __stdcall put_ConstraintsNodeInTree(CAT_VARIANT_BOOL iNodeDisplayed); \
      virtual HRESULT __stdcall GetConstraintsNodeInTreeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetConstraintsNodeInTreeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ParametersNodeInTree(CAT_VARIANT_BOOL & oNodeDisplayed); \
      virtual HRESULT __stdcall put_ParametersNodeInTree(CAT_VARIANT_BOOL iNodeDisplayed); \
      virtual HRESULT __stdcall GetParametersNodeInTreeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetParametersNodeInTreeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_RelationsNodeInTree(CAT_VARIANT_BOOL & oNodeDisplayed); \
      virtual HRESULT __stdcall put_RelationsNodeInTree(CAT_VARIANT_BOOL iNodeDisplayed); \
      virtual HRESULT __stdcall GetRelationsNodeInTreeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetRelationsNodeInTreeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_BodiesUnderOperationsInTree(CAT_VARIANT_BOOL & oNodeDisplayed); \
      virtual HRESULT __stdcall put_BodiesUnderOperationsInTree(CAT_VARIANT_BOOL iNodeDisplayed); \
      virtual HRESULT __stdcall GetBodiesUnderOperationsInTreeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetBodiesUnderOperationsInTreeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ExpandSketchBasedFeaturesNodeAtCreation(CAT_VARIANT_BOOL & oNodeExpanded); \
      virtual HRESULT __stdcall put_ExpandSketchBasedFeaturesNodeAtCreation(CAT_VARIANT_BOOL iNodeExpanded); \
      virtual HRESULT __stdcall GetExpandSketchBasedFeaturesNodeAtCreationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetExpandSketchBasedFeaturesNodeAtCreationLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_OnlyCurrentOperatedSolidSetInGeometry(CAT_VARIANT_BOOL & oDisplayed); \
      virtual HRESULT __stdcall put_OnlyCurrentOperatedSolidSetInGeometry(CAT_VARIANT_BOOL iDisplayed); \
      virtual HRESULT __stdcall GetOnlyCurrentOperatedSolidSetInGeometryInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetOnlyCurrentOperatedSolidSetInGeometryLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_OnlyCurrentSolidSetInGeometry(CAT_VARIANT_BOOL & oDisplayed); \
      virtual HRESULT __stdcall put_OnlyCurrentSolidSetInGeometry(CAT_VARIANT_BOOL iDisplayed); \
      virtual HRESULT __stdcall GetOnlyCurrentSolidSetInGeometryInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetOnlyCurrentSolidSetInGeometryLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DisplayGeometryAfterCurrent(CAT_VARIANT_BOOL & oDisplayed); \
      virtual HRESULT __stdcall put_DisplayGeometryAfterCurrent(CAT_VARIANT_BOOL iDisplayed); \
      virtual HRESULT __stdcall GetDisplayGeometryAfterCurrentInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDisplayGeometryAfterCurrentLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ConstraintsInGeometry(CAT_VARIANT_BOOL & oDisplayed); \
      virtual HRESULT __stdcall put_ConstraintsInGeometry(CAT_VARIANT_BOOL iDisplayed); \
      virtual HRESULT __stdcall GetConstraintsInGeometryInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetConstraintsInGeometryLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AxisSystemSize(short & oSize); \
      virtual HRESULT __stdcall put_AxisSystemSize(short iSize); \
      virtual HRESULT __stdcall GetAxisSystemSizeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAxisSystemSizeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ContextualFeaturesSelectableAtCreation(CAT_VARIANT_BOOL & oContextualFeaturesSelectable); \
      virtual HRESULT __stdcall put_ContextualFeaturesSelectableAtCreation(CAT_VARIANT_BOOL iContextualFeaturesSelectable); \
      virtual HRESULT __stdcall GetContextualFeaturesSelectableAtCreationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetContextualFeaturesSelectableAtCreationLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_LinkedExternalReferences(CAT_VARIANT_BOOL & oWithLink); \
      virtual HRESULT __stdcall put_LinkedExternalReferences(CAT_VARIANT_BOOL iWithLink); \
      virtual HRESULT __stdcall GetLinkedExternalReferencesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetLinkedExternalReferencesLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_LinkedExternalReferencesOnlyOnPublication(CAT_VARIANT_BOOL & oOnlyForPublishedElements); \
      virtual HRESULT __stdcall put_LinkedExternalReferencesOnlyOnPublication(CAT_VARIANT_BOOL iOnlyForPublishedElements); \
      virtual HRESULT __stdcall GetLinkedExternalReferencesOnlyOnPublicationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetLinkedExternalReferencesOnlyOnPublicationLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_LinkedExternalReferencesWarningAtCreation(CAT_VARIANT_BOOL & oWarningAtCreation); \
      virtual HRESULT __stdcall put_LinkedExternalReferencesWarningAtCreation(CAT_VARIANT_BOOL iWarningAtCreation); \
      virtual HRESULT __stdcall GetLinkedExternalReferencesWarningAtCreationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetLinkedExternalReferencesWarningAtCreationLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ExternalReferencesAsVisible(CAT_VARIANT_BOOL & oVisible); \
      virtual HRESULT __stdcall put_ExternalReferencesAsVisible(CAT_VARIANT_BOOL iVisible); \
      virtual HRESULT __stdcall GetExternalReferencesAsVisibleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetExternalReferencesAsVisibleLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ExternalReferencesAssemblyRootContext(CAT_VARIANT_BOOL & oRootContextUsed); \
      virtual HRESULT __stdcall put_ExternalReferencesAssemblyRootContext(CAT_VARIANT_BOOL iRootContextUsed); \
      virtual HRESULT __stdcall GetExternalReferencesAssemblyRootContextInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetExternalReferencesAssemblyRootContextLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_PublishTopologicalElements(CAT_VARIANT_BOOL & oTopologyAllowed); \
      virtual HRESULT __stdcall put_PublishTopologicalElements(CAT_VARIANT_BOOL iTopologyAllowed); \
      virtual HRESULT __stdcall GetPublishTopologicalElementsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetPublishTopologicalElementsLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DeleteWarningBox(CAT_VARIANT_BOOL & oDisplayed); \
      virtual HRESULT __stdcall put_DeleteWarningBox(CAT_VARIANT_BOOL iDisplayed); \
      virtual HRESULT __stdcall GetDeleteWarningBoxInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDeleteWarningBoxLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_AlsoDeleteExclusiveParents(CAT_VARIANT_BOOL & oDeleted); \
      virtual HRESULT __stdcall put_AlsoDeleteExclusiveParents(CAT_VARIANT_BOOL iDeleted); \
      virtual HRESULT __stdcall GetAlsoDeleteExclusiveParentsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetAlsoDeleteExclusiveParentsLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ReplaceOnlyAfterCurrent(CAT_VARIANT_BOOL & oOnlyAfterCurrent); \
      virtual HRESULT __stdcall put_ReplaceOnlyAfterCurrent(CAT_VARIANT_BOOL iOnlyAfterCurrent); \
      virtual HRESULT __stdcall GetReplaceOnlyAfterCurrentInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetReplaceOnlyAfterCurrentLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_NamingMode(CatPartElementsNamingMode & oNamingMode); \
      virtual HRESULT __stdcall put_NamingMode(CatPartElementsNamingMode iNamingMode); \
      virtual HRESULT __stdcall GetNamingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetNamingModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_TrueColorMode(CAT_VARIANT_BOOL & oActivated); \
      virtual HRESULT __stdcall put_TrueColorMode(CAT_VARIANT_BOOL iActivated); \
      virtual HRESULT __stdcall GetTrueColorModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall get_ColorSynchronizationMode(CAT_VARIANT_BOOL & oActivated); \
      virtual HRESULT __stdcall put_ColorSynchronizationMode(CAT_VARIANT_BOOL iActivated); \
      virtual HRESULT __stdcall GetColorSynchronizationModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetColorSynchronizationModeLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ColorSynchronizationModeOnFeature(CAT_VARIANT_BOOL & oActivated); \
      virtual HRESULT __stdcall put_ColorSynchronizationModeOnFeature(CAT_VARIANT_BOOL iActivated); \
      virtual HRESULT __stdcall GetColorSynchronizationModeOnFeatureInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetColorSynchronizationModeOnFeatureLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ColorSynchronizationModeManage(CAT_VARIANT_BOOL & oActivated); \
      virtual HRESULT __stdcall put_ColorSynchronizationModeManage(CAT_VARIANT_BOOL iActivated); \
      virtual HRESULT __stdcall GetColorSynchronizationModeManageInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetColorSynchronizationModeManageLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ColorSynchronizationModeOnSubElements(CAT_VARIANT_BOOL & oActivated); \
      virtual HRESULT __stdcall put_ColorSynchronizationModeOnSubElements(CAT_VARIANT_BOOL iActivated); \
      virtual HRESULT __stdcall GetColorSynchronizationModeOnSubElementsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetColorSynchronizationModeOnSubElementsLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_ColorSynchronizationEditability(CAT_VARIANT_BOOL & oActivated); \
      virtual HRESULT __stdcall put_ColorSynchronizationEditability(CAT_VARIANT_BOOL iActivated); \
      virtual HRESULT __stdcall GetColorSynchronizationEditabilityInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetColorSynchronizationEditabilityLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_DefaultColorsEditability(CAT_VARIANT_BOOL & oActivated); \
      virtual HRESULT __stdcall put_DefaultColorsEditability(CAT_VARIANT_BOOL iActivated); \
      virtual HRESULT __stdcall GetDefaultColorsEditabilityInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetDefaultColorsEditabilityLock(CAT_VARIANT_BOOL iLocked); \
      virtual HRESULT __stdcall get_Colors3DExperienceManagement(CAT_VARIANT_BOOL & oActivated); \
      virtual HRESULT __stdcall put_Colors3DExperienceManagement(CAT_VARIANT_BOOL iActivated); \
      virtual HRESULT __stdcall GetColors3DExperienceManagementInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
      virtual HRESULT __stdcall SetColors3DExperienceManagementLock(CAT_VARIANT_BOOL iLocked); \
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



#define ENVTIEdeclare_CATIAPartInfrastructureSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
virtual HRESULT __stdcall get_NewWithAxisSystem(CAT_VARIANT_BOOL & oAxisSystemCreated); \
virtual HRESULT __stdcall put_NewWithAxisSystem(CAT_VARIANT_BOOL iAxisSystemCreated); \
virtual HRESULT __stdcall GetNewWithAxisSystemInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetNewWithAxisSystemLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_NewWithGS(CAT_VARIANT_BOOL & oGSCreated); \
virtual HRESULT __stdcall put_NewWithGS(CAT_VARIANT_BOOL iGSCreated); \
virtual HRESULT __stdcall GetNewWithGSInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetNewWithGSLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_NewWithOGS(CAT_VARIANT_BOOL & oOGSCreated); \
virtual HRESULT __stdcall put_NewWithOGS(CAT_VARIANT_BOOL iGSCreated); \
virtual HRESULT __stdcall GetNewWithOGSInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetNewWithOGSLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_NewWith3DSupport(CAT_VARIANT_BOOL & o3DSupportCreated); \
virtual HRESULT __stdcall put_NewWith3DSupport(CAT_VARIANT_BOOL i3DSupportCreated); \
virtual HRESULT __stdcall GetNewWith3DSupportInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetNewWith3DSupportLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_NewWithPanel(CAT_VARIANT_BOOL & oNewPartPanelDisplayed); \
virtual HRESULT __stdcall put_NewWithPanel(CAT_VARIANT_BOOL iNewPartPanelDisplayed); \
virtual HRESULT __stdcall GetNewWithPanelInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetNewWithPanelLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_UpdateMode(CatPartUpdateMode & oUpdateMode); \
virtual HRESULT __stdcall put_UpdateMode(CatPartUpdateMode oUpdateMode); \
virtual HRESULT __stdcall GetUpdateModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetUpdateModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_UpdateStoppedOnError(CAT_VARIANT_BOOL & oStoppedOnError); \
virtual HRESULT __stdcall put_UpdateStoppedOnError(CAT_VARIANT_BOOL iStoppedOnError); \
virtual HRESULT __stdcall GetUpdateStoppedOnErrorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetUpdateStoppedOnErrorLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_UpdateLinkedExternalReferences(CAT_VARIANT_BOOL & oExternalReferencesUpdated); \
virtual HRESULT __stdcall put_UpdateLinkedExternalReferences(CAT_VARIANT_BOOL iExternalReferencesUpdated); \
virtual HRESULT __stdcall GetUpdateLinkedExternalReferencesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetUpdateLinkedExternalReferencesLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_UpdateElementsRefreshed(CAT_VARIANT_BOOL & oElementsRefreshed); \
virtual HRESULT __stdcall put_UpdateElementsRefreshed(CAT_VARIANT_BOOL iElementsRefreshed); \
virtual HRESULT __stdcall GetUpdateElementsRefreshedInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetUpdateElementsRefreshedLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_HybridDesignMode(CAT_VARIANT_BOOL & oHybridDesign); \
virtual HRESULT __stdcall put_HybridDesignMode(CAT_VARIANT_BOOL iHybridDesign); \
virtual HRESULT __stdcall GetHybridDesignModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetHybridDesignModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_KnowledgeInHybridDesignMode(CAT_VARIANT_BOOL & oKnowledgeInHybridDesign); \
virtual HRESULT __stdcall put_KnowledgeInHybridDesignMode(CAT_VARIANT_BOOL iKnowledgeInHybridDesign); \
virtual HRESULT __stdcall GetKnowledgeInHybridDesignModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetKnowledgeInHybridDesignModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_SurfaceElementsLocation(CatPartSurfaceElementsLocation & oLocation); \
virtual HRESULT __stdcall put_SurfaceElementsLocation(CatPartSurfaceElementsLocation iLocation); \
virtual HRESULT __stdcall GetSurfaceElementsLocationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetSurfaceElementsLocationLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ExternalReferencesNodeInTree(CAT_VARIANT_BOOL & oNodeDisplayed); \
virtual HRESULT __stdcall put_ExternalReferencesNodeInTree(CAT_VARIANT_BOOL iNodeDisplayed); \
virtual HRESULT __stdcall GetExternalReferencesNodeInTreeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetExternalReferencesNodeInTreeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ConstraintsNodeInTree(CAT_VARIANT_BOOL & oNodeDisplayed); \
virtual HRESULT __stdcall put_ConstraintsNodeInTree(CAT_VARIANT_BOOL iNodeDisplayed); \
virtual HRESULT __stdcall GetConstraintsNodeInTreeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetConstraintsNodeInTreeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ParametersNodeInTree(CAT_VARIANT_BOOL & oNodeDisplayed); \
virtual HRESULT __stdcall put_ParametersNodeInTree(CAT_VARIANT_BOOL iNodeDisplayed); \
virtual HRESULT __stdcall GetParametersNodeInTreeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetParametersNodeInTreeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_RelationsNodeInTree(CAT_VARIANT_BOOL & oNodeDisplayed); \
virtual HRESULT __stdcall put_RelationsNodeInTree(CAT_VARIANT_BOOL iNodeDisplayed); \
virtual HRESULT __stdcall GetRelationsNodeInTreeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetRelationsNodeInTreeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_BodiesUnderOperationsInTree(CAT_VARIANT_BOOL & oNodeDisplayed); \
virtual HRESULT __stdcall put_BodiesUnderOperationsInTree(CAT_VARIANT_BOOL iNodeDisplayed); \
virtual HRESULT __stdcall GetBodiesUnderOperationsInTreeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetBodiesUnderOperationsInTreeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ExpandSketchBasedFeaturesNodeAtCreation(CAT_VARIANT_BOOL & oNodeExpanded); \
virtual HRESULT __stdcall put_ExpandSketchBasedFeaturesNodeAtCreation(CAT_VARIANT_BOOL iNodeExpanded); \
virtual HRESULT __stdcall GetExpandSketchBasedFeaturesNodeAtCreationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetExpandSketchBasedFeaturesNodeAtCreationLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_OnlyCurrentOperatedSolidSetInGeometry(CAT_VARIANT_BOOL & oDisplayed); \
virtual HRESULT __stdcall put_OnlyCurrentOperatedSolidSetInGeometry(CAT_VARIANT_BOOL iDisplayed); \
virtual HRESULT __stdcall GetOnlyCurrentOperatedSolidSetInGeometryInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetOnlyCurrentOperatedSolidSetInGeometryLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_OnlyCurrentSolidSetInGeometry(CAT_VARIANT_BOOL & oDisplayed); \
virtual HRESULT __stdcall put_OnlyCurrentSolidSetInGeometry(CAT_VARIANT_BOOL iDisplayed); \
virtual HRESULT __stdcall GetOnlyCurrentSolidSetInGeometryInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetOnlyCurrentSolidSetInGeometryLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DisplayGeometryAfterCurrent(CAT_VARIANT_BOOL & oDisplayed); \
virtual HRESULT __stdcall put_DisplayGeometryAfterCurrent(CAT_VARIANT_BOOL iDisplayed); \
virtual HRESULT __stdcall GetDisplayGeometryAfterCurrentInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDisplayGeometryAfterCurrentLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ConstraintsInGeometry(CAT_VARIANT_BOOL & oDisplayed); \
virtual HRESULT __stdcall put_ConstraintsInGeometry(CAT_VARIANT_BOOL iDisplayed); \
virtual HRESULT __stdcall GetConstraintsInGeometryInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetConstraintsInGeometryLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AxisSystemSize(short & oSize); \
virtual HRESULT __stdcall put_AxisSystemSize(short iSize); \
virtual HRESULT __stdcall GetAxisSystemSizeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAxisSystemSizeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ContextualFeaturesSelectableAtCreation(CAT_VARIANT_BOOL & oContextualFeaturesSelectable); \
virtual HRESULT __stdcall put_ContextualFeaturesSelectableAtCreation(CAT_VARIANT_BOOL iContextualFeaturesSelectable); \
virtual HRESULT __stdcall GetContextualFeaturesSelectableAtCreationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetContextualFeaturesSelectableAtCreationLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_LinkedExternalReferences(CAT_VARIANT_BOOL & oWithLink); \
virtual HRESULT __stdcall put_LinkedExternalReferences(CAT_VARIANT_BOOL iWithLink); \
virtual HRESULT __stdcall GetLinkedExternalReferencesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetLinkedExternalReferencesLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_LinkedExternalReferencesOnlyOnPublication(CAT_VARIANT_BOOL & oOnlyForPublishedElements); \
virtual HRESULT __stdcall put_LinkedExternalReferencesOnlyOnPublication(CAT_VARIANT_BOOL iOnlyForPublishedElements); \
virtual HRESULT __stdcall GetLinkedExternalReferencesOnlyOnPublicationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetLinkedExternalReferencesOnlyOnPublicationLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_LinkedExternalReferencesWarningAtCreation(CAT_VARIANT_BOOL & oWarningAtCreation); \
virtual HRESULT __stdcall put_LinkedExternalReferencesWarningAtCreation(CAT_VARIANT_BOOL iWarningAtCreation); \
virtual HRESULT __stdcall GetLinkedExternalReferencesWarningAtCreationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetLinkedExternalReferencesWarningAtCreationLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ExternalReferencesAsVisible(CAT_VARIANT_BOOL & oVisible); \
virtual HRESULT __stdcall put_ExternalReferencesAsVisible(CAT_VARIANT_BOOL iVisible); \
virtual HRESULT __stdcall GetExternalReferencesAsVisibleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetExternalReferencesAsVisibleLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ExternalReferencesAssemblyRootContext(CAT_VARIANT_BOOL & oRootContextUsed); \
virtual HRESULT __stdcall put_ExternalReferencesAssemblyRootContext(CAT_VARIANT_BOOL iRootContextUsed); \
virtual HRESULT __stdcall GetExternalReferencesAssemblyRootContextInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetExternalReferencesAssemblyRootContextLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_PublishTopologicalElements(CAT_VARIANT_BOOL & oTopologyAllowed); \
virtual HRESULT __stdcall put_PublishTopologicalElements(CAT_VARIANT_BOOL iTopologyAllowed); \
virtual HRESULT __stdcall GetPublishTopologicalElementsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetPublishTopologicalElementsLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DeleteWarningBox(CAT_VARIANT_BOOL & oDisplayed); \
virtual HRESULT __stdcall put_DeleteWarningBox(CAT_VARIANT_BOOL iDisplayed); \
virtual HRESULT __stdcall GetDeleteWarningBoxInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDeleteWarningBoxLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_AlsoDeleteExclusiveParents(CAT_VARIANT_BOOL & oDeleted); \
virtual HRESULT __stdcall put_AlsoDeleteExclusiveParents(CAT_VARIANT_BOOL iDeleted); \
virtual HRESULT __stdcall GetAlsoDeleteExclusiveParentsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetAlsoDeleteExclusiveParentsLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ReplaceOnlyAfterCurrent(CAT_VARIANT_BOOL & oOnlyAfterCurrent); \
virtual HRESULT __stdcall put_ReplaceOnlyAfterCurrent(CAT_VARIANT_BOOL iOnlyAfterCurrent); \
virtual HRESULT __stdcall GetReplaceOnlyAfterCurrentInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetReplaceOnlyAfterCurrentLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_NamingMode(CatPartElementsNamingMode & oNamingMode); \
virtual HRESULT __stdcall put_NamingMode(CatPartElementsNamingMode iNamingMode); \
virtual HRESULT __stdcall GetNamingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetNamingModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_TrueColorMode(CAT_VARIANT_BOOL & oActivated); \
virtual HRESULT __stdcall put_TrueColorMode(CAT_VARIANT_BOOL iActivated); \
virtual HRESULT __stdcall GetTrueColorModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall get_ColorSynchronizationMode(CAT_VARIANT_BOOL & oActivated); \
virtual HRESULT __stdcall put_ColorSynchronizationMode(CAT_VARIANT_BOOL iActivated); \
virtual HRESULT __stdcall GetColorSynchronizationModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetColorSynchronizationModeLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ColorSynchronizationModeOnFeature(CAT_VARIANT_BOOL & oActivated); \
virtual HRESULT __stdcall put_ColorSynchronizationModeOnFeature(CAT_VARIANT_BOOL iActivated); \
virtual HRESULT __stdcall GetColorSynchronizationModeOnFeatureInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetColorSynchronizationModeOnFeatureLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ColorSynchronizationModeManage(CAT_VARIANT_BOOL & oActivated); \
virtual HRESULT __stdcall put_ColorSynchronizationModeManage(CAT_VARIANT_BOOL iActivated); \
virtual HRESULT __stdcall GetColorSynchronizationModeManageInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetColorSynchronizationModeManageLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ColorSynchronizationModeOnSubElements(CAT_VARIANT_BOOL & oActivated); \
virtual HRESULT __stdcall put_ColorSynchronizationModeOnSubElements(CAT_VARIANT_BOOL iActivated); \
virtual HRESULT __stdcall GetColorSynchronizationModeOnSubElementsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetColorSynchronizationModeOnSubElementsLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_ColorSynchronizationEditability(CAT_VARIANT_BOOL & oActivated); \
virtual HRESULT __stdcall put_ColorSynchronizationEditability(CAT_VARIANT_BOOL iActivated); \
virtual HRESULT __stdcall GetColorSynchronizationEditabilityInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetColorSynchronizationEditabilityLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_DefaultColorsEditability(CAT_VARIANT_BOOL & oActivated); \
virtual HRESULT __stdcall put_DefaultColorsEditability(CAT_VARIANT_BOOL iActivated); \
virtual HRESULT __stdcall GetDefaultColorsEditabilityInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetDefaultColorsEditabilityLock(CAT_VARIANT_BOOL iLocked); \
virtual HRESULT __stdcall get_Colors3DExperienceManagement(CAT_VARIANT_BOOL & oActivated); \
virtual HRESULT __stdcall put_Colors3DExperienceManagement(CAT_VARIANT_BOOL iActivated); \
virtual HRESULT __stdcall GetColors3DExperienceManagementInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified); \
virtual HRESULT __stdcall SetColors3DExperienceManagementLock(CAT_VARIANT_BOOL iLocked); \
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


#define ENVTIEdefine_CATIAPartInfrastructureSettingAtt(ENVTIEName,ENVTIETypeLetter,ENVTIELetter) \
HRESULT __stdcall  ENVTIEName::get_NewWithAxisSystem(CAT_VARIANT_BOOL & oAxisSystemCreated) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_NewWithAxisSystem(oAxisSystemCreated)); \
} \
HRESULT __stdcall  ENVTIEName::put_NewWithAxisSystem(CAT_VARIANT_BOOL iAxisSystemCreated) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_NewWithAxisSystem(iAxisSystemCreated)); \
} \
HRESULT __stdcall  ENVTIEName::GetNewWithAxisSystemInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetNewWithAxisSystemInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetNewWithAxisSystemLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetNewWithAxisSystemLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_NewWithGS(CAT_VARIANT_BOOL & oGSCreated) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_NewWithGS(oGSCreated)); \
} \
HRESULT __stdcall  ENVTIEName::put_NewWithGS(CAT_VARIANT_BOOL iGSCreated) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_NewWithGS(iGSCreated)); \
} \
HRESULT __stdcall  ENVTIEName::GetNewWithGSInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetNewWithGSInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetNewWithGSLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetNewWithGSLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_NewWithOGS(CAT_VARIANT_BOOL & oOGSCreated) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_NewWithOGS(oOGSCreated)); \
} \
HRESULT __stdcall  ENVTIEName::put_NewWithOGS(CAT_VARIANT_BOOL iGSCreated) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_NewWithOGS(iGSCreated)); \
} \
HRESULT __stdcall  ENVTIEName::GetNewWithOGSInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetNewWithOGSInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetNewWithOGSLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetNewWithOGSLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_NewWith3DSupport(CAT_VARIANT_BOOL & o3DSupportCreated) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_NewWith3DSupport(o3DSupportCreated)); \
} \
HRESULT __stdcall  ENVTIEName::put_NewWith3DSupport(CAT_VARIANT_BOOL i3DSupportCreated) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_NewWith3DSupport(i3DSupportCreated)); \
} \
HRESULT __stdcall  ENVTIEName::GetNewWith3DSupportInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetNewWith3DSupportInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetNewWith3DSupportLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetNewWith3DSupportLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_NewWithPanel(CAT_VARIANT_BOOL & oNewPartPanelDisplayed) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_NewWithPanel(oNewPartPanelDisplayed)); \
} \
HRESULT __stdcall  ENVTIEName::put_NewWithPanel(CAT_VARIANT_BOOL iNewPartPanelDisplayed) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_NewWithPanel(iNewPartPanelDisplayed)); \
} \
HRESULT __stdcall  ENVTIEName::GetNewWithPanelInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetNewWithPanelInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetNewWithPanelLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetNewWithPanelLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_UpdateMode(CatPartUpdateMode & oUpdateMode) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_UpdateMode(oUpdateMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_UpdateMode(CatPartUpdateMode oUpdateMode) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_UpdateMode(oUpdateMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetUpdateModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetUpdateModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetUpdateModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetUpdateModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_UpdateStoppedOnError(CAT_VARIANT_BOOL & oStoppedOnError) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_UpdateStoppedOnError(oStoppedOnError)); \
} \
HRESULT __stdcall  ENVTIEName::put_UpdateStoppedOnError(CAT_VARIANT_BOOL iStoppedOnError) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_UpdateStoppedOnError(iStoppedOnError)); \
} \
HRESULT __stdcall  ENVTIEName::GetUpdateStoppedOnErrorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetUpdateStoppedOnErrorInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetUpdateStoppedOnErrorLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetUpdateStoppedOnErrorLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_UpdateLinkedExternalReferences(CAT_VARIANT_BOOL & oExternalReferencesUpdated) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_UpdateLinkedExternalReferences(oExternalReferencesUpdated)); \
} \
HRESULT __stdcall  ENVTIEName::put_UpdateLinkedExternalReferences(CAT_VARIANT_BOOL iExternalReferencesUpdated) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_UpdateLinkedExternalReferences(iExternalReferencesUpdated)); \
} \
HRESULT __stdcall  ENVTIEName::GetUpdateLinkedExternalReferencesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetUpdateLinkedExternalReferencesInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetUpdateLinkedExternalReferencesLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetUpdateLinkedExternalReferencesLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_UpdateElementsRefreshed(CAT_VARIANT_BOOL & oElementsRefreshed) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_UpdateElementsRefreshed(oElementsRefreshed)); \
} \
HRESULT __stdcall  ENVTIEName::put_UpdateElementsRefreshed(CAT_VARIANT_BOOL iElementsRefreshed) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_UpdateElementsRefreshed(iElementsRefreshed)); \
} \
HRESULT __stdcall  ENVTIEName::GetUpdateElementsRefreshedInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetUpdateElementsRefreshedInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetUpdateElementsRefreshedLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetUpdateElementsRefreshedLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_HybridDesignMode(CAT_VARIANT_BOOL & oHybridDesign) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_HybridDesignMode(oHybridDesign)); \
} \
HRESULT __stdcall  ENVTIEName::put_HybridDesignMode(CAT_VARIANT_BOOL iHybridDesign) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_HybridDesignMode(iHybridDesign)); \
} \
HRESULT __stdcall  ENVTIEName::GetHybridDesignModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetHybridDesignModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetHybridDesignModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetHybridDesignModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_KnowledgeInHybridDesignMode(CAT_VARIANT_BOOL & oKnowledgeInHybridDesign) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_KnowledgeInHybridDesignMode(oKnowledgeInHybridDesign)); \
} \
HRESULT __stdcall  ENVTIEName::put_KnowledgeInHybridDesignMode(CAT_VARIANT_BOOL iKnowledgeInHybridDesign) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_KnowledgeInHybridDesignMode(iKnowledgeInHybridDesign)); \
} \
HRESULT __stdcall  ENVTIEName::GetKnowledgeInHybridDesignModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetKnowledgeInHybridDesignModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetKnowledgeInHybridDesignModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetKnowledgeInHybridDesignModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_SurfaceElementsLocation(CatPartSurfaceElementsLocation & oLocation) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_SurfaceElementsLocation(oLocation)); \
} \
HRESULT __stdcall  ENVTIEName::put_SurfaceElementsLocation(CatPartSurfaceElementsLocation iLocation) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_SurfaceElementsLocation(iLocation)); \
} \
HRESULT __stdcall  ENVTIEName::GetSurfaceElementsLocationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetSurfaceElementsLocationInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetSurfaceElementsLocationLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetSurfaceElementsLocationLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ExternalReferencesNodeInTree(CAT_VARIANT_BOOL & oNodeDisplayed) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ExternalReferencesNodeInTree(oNodeDisplayed)); \
} \
HRESULT __stdcall  ENVTIEName::put_ExternalReferencesNodeInTree(CAT_VARIANT_BOOL iNodeDisplayed) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ExternalReferencesNodeInTree(iNodeDisplayed)); \
} \
HRESULT __stdcall  ENVTIEName::GetExternalReferencesNodeInTreeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetExternalReferencesNodeInTreeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetExternalReferencesNodeInTreeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetExternalReferencesNodeInTreeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ConstraintsNodeInTree(CAT_VARIANT_BOOL & oNodeDisplayed) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ConstraintsNodeInTree(oNodeDisplayed)); \
} \
HRESULT __stdcall  ENVTIEName::put_ConstraintsNodeInTree(CAT_VARIANT_BOOL iNodeDisplayed) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ConstraintsNodeInTree(iNodeDisplayed)); \
} \
HRESULT __stdcall  ENVTIEName::GetConstraintsNodeInTreeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetConstraintsNodeInTreeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetConstraintsNodeInTreeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetConstraintsNodeInTreeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ParametersNodeInTree(CAT_VARIANT_BOOL & oNodeDisplayed) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ParametersNodeInTree(oNodeDisplayed)); \
} \
HRESULT __stdcall  ENVTIEName::put_ParametersNodeInTree(CAT_VARIANT_BOOL iNodeDisplayed) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ParametersNodeInTree(iNodeDisplayed)); \
} \
HRESULT __stdcall  ENVTIEName::GetParametersNodeInTreeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetParametersNodeInTreeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetParametersNodeInTreeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetParametersNodeInTreeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_RelationsNodeInTree(CAT_VARIANT_BOOL & oNodeDisplayed) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_RelationsNodeInTree(oNodeDisplayed)); \
} \
HRESULT __stdcall  ENVTIEName::put_RelationsNodeInTree(CAT_VARIANT_BOOL iNodeDisplayed) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_RelationsNodeInTree(iNodeDisplayed)); \
} \
HRESULT __stdcall  ENVTIEName::GetRelationsNodeInTreeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetRelationsNodeInTreeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetRelationsNodeInTreeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetRelationsNodeInTreeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_BodiesUnderOperationsInTree(CAT_VARIANT_BOOL & oNodeDisplayed) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_BodiesUnderOperationsInTree(oNodeDisplayed)); \
} \
HRESULT __stdcall  ENVTIEName::put_BodiesUnderOperationsInTree(CAT_VARIANT_BOOL iNodeDisplayed) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_BodiesUnderOperationsInTree(iNodeDisplayed)); \
} \
HRESULT __stdcall  ENVTIEName::GetBodiesUnderOperationsInTreeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetBodiesUnderOperationsInTreeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetBodiesUnderOperationsInTreeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetBodiesUnderOperationsInTreeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ExpandSketchBasedFeaturesNodeAtCreation(CAT_VARIANT_BOOL & oNodeExpanded) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ExpandSketchBasedFeaturesNodeAtCreation(oNodeExpanded)); \
} \
HRESULT __stdcall  ENVTIEName::put_ExpandSketchBasedFeaturesNodeAtCreation(CAT_VARIANT_BOOL iNodeExpanded) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ExpandSketchBasedFeaturesNodeAtCreation(iNodeExpanded)); \
} \
HRESULT __stdcall  ENVTIEName::GetExpandSketchBasedFeaturesNodeAtCreationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetExpandSketchBasedFeaturesNodeAtCreationInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetExpandSketchBasedFeaturesNodeAtCreationLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetExpandSketchBasedFeaturesNodeAtCreationLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_OnlyCurrentOperatedSolidSetInGeometry(CAT_VARIANT_BOOL & oDisplayed) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_OnlyCurrentOperatedSolidSetInGeometry(oDisplayed)); \
} \
HRESULT __stdcall  ENVTIEName::put_OnlyCurrentOperatedSolidSetInGeometry(CAT_VARIANT_BOOL iDisplayed) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_OnlyCurrentOperatedSolidSetInGeometry(iDisplayed)); \
} \
HRESULT __stdcall  ENVTIEName::GetOnlyCurrentOperatedSolidSetInGeometryInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetOnlyCurrentOperatedSolidSetInGeometryInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetOnlyCurrentOperatedSolidSetInGeometryLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetOnlyCurrentOperatedSolidSetInGeometryLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_OnlyCurrentSolidSetInGeometry(CAT_VARIANT_BOOL & oDisplayed) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_OnlyCurrentSolidSetInGeometry(oDisplayed)); \
} \
HRESULT __stdcall  ENVTIEName::put_OnlyCurrentSolidSetInGeometry(CAT_VARIANT_BOOL iDisplayed) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_OnlyCurrentSolidSetInGeometry(iDisplayed)); \
} \
HRESULT __stdcall  ENVTIEName::GetOnlyCurrentSolidSetInGeometryInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetOnlyCurrentSolidSetInGeometryInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetOnlyCurrentSolidSetInGeometryLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetOnlyCurrentSolidSetInGeometryLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DisplayGeometryAfterCurrent(CAT_VARIANT_BOOL & oDisplayed) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DisplayGeometryAfterCurrent(oDisplayed)); \
} \
HRESULT __stdcall  ENVTIEName::put_DisplayGeometryAfterCurrent(CAT_VARIANT_BOOL iDisplayed) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DisplayGeometryAfterCurrent(iDisplayed)); \
} \
HRESULT __stdcall  ENVTIEName::GetDisplayGeometryAfterCurrentInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDisplayGeometryAfterCurrentInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDisplayGeometryAfterCurrentLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDisplayGeometryAfterCurrentLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ConstraintsInGeometry(CAT_VARIANT_BOOL & oDisplayed) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ConstraintsInGeometry(oDisplayed)); \
} \
HRESULT __stdcall  ENVTIEName::put_ConstraintsInGeometry(CAT_VARIANT_BOOL iDisplayed) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ConstraintsInGeometry(iDisplayed)); \
} \
HRESULT __stdcall  ENVTIEName::GetConstraintsInGeometryInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetConstraintsInGeometryInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetConstraintsInGeometryLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetConstraintsInGeometryLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AxisSystemSize(short & oSize) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AxisSystemSize(oSize)); \
} \
HRESULT __stdcall  ENVTIEName::put_AxisSystemSize(short iSize) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AxisSystemSize(iSize)); \
} \
HRESULT __stdcall  ENVTIEName::GetAxisSystemSizeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAxisSystemSizeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAxisSystemSizeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAxisSystemSizeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ContextualFeaturesSelectableAtCreation(CAT_VARIANT_BOOL & oContextualFeaturesSelectable) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ContextualFeaturesSelectableAtCreation(oContextualFeaturesSelectable)); \
} \
HRESULT __stdcall  ENVTIEName::put_ContextualFeaturesSelectableAtCreation(CAT_VARIANT_BOOL iContextualFeaturesSelectable) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ContextualFeaturesSelectableAtCreation(iContextualFeaturesSelectable)); \
} \
HRESULT __stdcall  ENVTIEName::GetContextualFeaturesSelectableAtCreationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetContextualFeaturesSelectableAtCreationInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetContextualFeaturesSelectableAtCreationLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetContextualFeaturesSelectableAtCreationLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_LinkedExternalReferences(CAT_VARIANT_BOOL & oWithLink) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_LinkedExternalReferences(oWithLink)); \
} \
HRESULT __stdcall  ENVTIEName::put_LinkedExternalReferences(CAT_VARIANT_BOOL iWithLink) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_LinkedExternalReferences(iWithLink)); \
} \
HRESULT __stdcall  ENVTIEName::GetLinkedExternalReferencesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetLinkedExternalReferencesInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetLinkedExternalReferencesLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetLinkedExternalReferencesLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_LinkedExternalReferencesOnlyOnPublication(CAT_VARIANT_BOOL & oOnlyForPublishedElements) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_LinkedExternalReferencesOnlyOnPublication(oOnlyForPublishedElements)); \
} \
HRESULT __stdcall  ENVTIEName::put_LinkedExternalReferencesOnlyOnPublication(CAT_VARIANT_BOOL iOnlyForPublishedElements) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_LinkedExternalReferencesOnlyOnPublication(iOnlyForPublishedElements)); \
} \
HRESULT __stdcall  ENVTIEName::GetLinkedExternalReferencesOnlyOnPublicationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetLinkedExternalReferencesOnlyOnPublicationInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetLinkedExternalReferencesOnlyOnPublicationLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetLinkedExternalReferencesOnlyOnPublicationLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_LinkedExternalReferencesWarningAtCreation(CAT_VARIANT_BOOL & oWarningAtCreation) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_LinkedExternalReferencesWarningAtCreation(oWarningAtCreation)); \
} \
HRESULT __stdcall  ENVTIEName::put_LinkedExternalReferencesWarningAtCreation(CAT_VARIANT_BOOL iWarningAtCreation) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_LinkedExternalReferencesWarningAtCreation(iWarningAtCreation)); \
} \
HRESULT __stdcall  ENVTIEName::GetLinkedExternalReferencesWarningAtCreationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetLinkedExternalReferencesWarningAtCreationInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetLinkedExternalReferencesWarningAtCreationLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetLinkedExternalReferencesWarningAtCreationLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ExternalReferencesAsVisible(CAT_VARIANT_BOOL & oVisible) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ExternalReferencesAsVisible(oVisible)); \
} \
HRESULT __stdcall  ENVTIEName::put_ExternalReferencesAsVisible(CAT_VARIANT_BOOL iVisible) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ExternalReferencesAsVisible(iVisible)); \
} \
HRESULT __stdcall  ENVTIEName::GetExternalReferencesAsVisibleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetExternalReferencesAsVisibleInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetExternalReferencesAsVisibleLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetExternalReferencesAsVisibleLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ExternalReferencesAssemblyRootContext(CAT_VARIANT_BOOL & oRootContextUsed) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ExternalReferencesAssemblyRootContext(oRootContextUsed)); \
} \
HRESULT __stdcall  ENVTIEName::put_ExternalReferencesAssemblyRootContext(CAT_VARIANT_BOOL iRootContextUsed) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ExternalReferencesAssemblyRootContext(iRootContextUsed)); \
} \
HRESULT __stdcall  ENVTIEName::GetExternalReferencesAssemblyRootContextInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetExternalReferencesAssemblyRootContextInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetExternalReferencesAssemblyRootContextLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetExternalReferencesAssemblyRootContextLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_PublishTopologicalElements(CAT_VARIANT_BOOL & oTopologyAllowed) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_PublishTopologicalElements(oTopologyAllowed)); \
} \
HRESULT __stdcall  ENVTIEName::put_PublishTopologicalElements(CAT_VARIANT_BOOL iTopologyAllowed) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_PublishTopologicalElements(iTopologyAllowed)); \
} \
HRESULT __stdcall  ENVTIEName::GetPublishTopologicalElementsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetPublishTopologicalElementsInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetPublishTopologicalElementsLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetPublishTopologicalElementsLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DeleteWarningBox(CAT_VARIANT_BOOL & oDisplayed) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DeleteWarningBox(oDisplayed)); \
} \
HRESULT __stdcall  ENVTIEName::put_DeleteWarningBox(CAT_VARIANT_BOOL iDisplayed) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DeleteWarningBox(iDisplayed)); \
} \
HRESULT __stdcall  ENVTIEName::GetDeleteWarningBoxInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDeleteWarningBoxInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDeleteWarningBoxLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDeleteWarningBoxLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_AlsoDeleteExclusiveParents(CAT_VARIANT_BOOL & oDeleted) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_AlsoDeleteExclusiveParents(oDeleted)); \
} \
HRESULT __stdcall  ENVTIEName::put_AlsoDeleteExclusiveParents(CAT_VARIANT_BOOL iDeleted) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_AlsoDeleteExclusiveParents(iDeleted)); \
} \
HRESULT __stdcall  ENVTIEName::GetAlsoDeleteExclusiveParentsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetAlsoDeleteExclusiveParentsInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetAlsoDeleteExclusiveParentsLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetAlsoDeleteExclusiveParentsLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ReplaceOnlyAfterCurrent(CAT_VARIANT_BOOL & oOnlyAfterCurrent) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ReplaceOnlyAfterCurrent(oOnlyAfterCurrent)); \
} \
HRESULT __stdcall  ENVTIEName::put_ReplaceOnlyAfterCurrent(CAT_VARIANT_BOOL iOnlyAfterCurrent) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ReplaceOnlyAfterCurrent(iOnlyAfterCurrent)); \
} \
HRESULT __stdcall  ENVTIEName::GetReplaceOnlyAfterCurrentInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetReplaceOnlyAfterCurrentInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetReplaceOnlyAfterCurrentLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetReplaceOnlyAfterCurrentLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_NamingMode(CatPartElementsNamingMode & oNamingMode) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_NamingMode(oNamingMode)); \
} \
HRESULT __stdcall  ENVTIEName::put_NamingMode(CatPartElementsNamingMode iNamingMode) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_NamingMode(iNamingMode)); \
} \
HRESULT __stdcall  ENVTIEName::GetNamingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetNamingModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetNamingModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetNamingModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_TrueColorMode(CAT_VARIANT_BOOL & oActivated) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_TrueColorMode(oActivated)); \
} \
HRESULT __stdcall  ENVTIEName::put_TrueColorMode(CAT_VARIANT_BOOL iActivated) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_TrueColorMode(iActivated)); \
} \
HRESULT __stdcall  ENVTIEName::GetTrueColorModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetTrueColorModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::get_ColorSynchronizationMode(CAT_VARIANT_BOOL & oActivated) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ColorSynchronizationMode(oActivated)); \
} \
HRESULT __stdcall  ENVTIEName::put_ColorSynchronizationMode(CAT_VARIANT_BOOL iActivated) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ColorSynchronizationMode(iActivated)); \
} \
HRESULT __stdcall  ENVTIEName::GetColorSynchronizationModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetColorSynchronizationModeInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetColorSynchronizationModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetColorSynchronizationModeLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ColorSynchronizationModeOnFeature(CAT_VARIANT_BOOL & oActivated) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ColorSynchronizationModeOnFeature(oActivated)); \
} \
HRESULT __stdcall  ENVTIEName::put_ColorSynchronizationModeOnFeature(CAT_VARIANT_BOOL iActivated) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ColorSynchronizationModeOnFeature(iActivated)); \
} \
HRESULT __stdcall  ENVTIEName::GetColorSynchronizationModeOnFeatureInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetColorSynchronizationModeOnFeatureInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetColorSynchronizationModeOnFeatureLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetColorSynchronizationModeOnFeatureLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ColorSynchronizationModeManage(CAT_VARIANT_BOOL & oActivated) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ColorSynchronizationModeManage(oActivated)); \
} \
HRESULT __stdcall  ENVTIEName::put_ColorSynchronizationModeManage(CAT_VARIANT_BOOL iActivated) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ColorSynchronizationModeManage(iActivated)); \
} \
HRESULT __stdcall  ENVTIEName::GetColorSynchronizationModeManageInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetColorSynchronizationModeManageInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetColorSynchronizationModeManageLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetColorSynchronizationModeManageLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ColorSynchronizationModeOnSubElements(CAT_VARIANT_BOOL & oActivated) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ColorSynchronizationModeOnSubElements(oActivated)); \
} \
HRESULT __stdcall  ENVTIEName::put_ColorSynchronizationModeOnSubElements(CAT_VARIANT_BOOL iActivated) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ColorSynchronizationModeOnSubElements(iActivated)); \
} \
HRESULT __stdcall  ENVTIEName::GetColorSynchronizationModeOnSubElementsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetColorSynchronizationModeOnSubElementsInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetColorSynchronizationModeOnSubElementsLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetColorSynchronizationModeOnSubElementsLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_ColorSynchronizationEditability(CAT_VARIANT_BOOL & oActivated) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_ColorSynchronizationEditability(oActivated)); \
} \
HRESULT __stdcall  ENVTIEName::put_ColorSynchronizationEditability(CAT_VARIANT_BOOL iActivated) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_ColorSynchronizationEditability(iActivated)); \
} \
HRESULT __stdcall  ENVTIEName::GetColorSynchronizationEditabilityInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetColorSynchronizationEditabilityInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetColorSynchronizationEditabilityLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetColorSynchronizationEditabilityLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_DefaultColorsEditability(CAT_VARIANT_BOOL & oActivated) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_DefaultColorsEditability(oActivated)); \
} \
HRESULT __stdcall  ENVTIEName::put_DefaultColorsEditability(CAT_VARIANT_BOOL iActivated) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_DefaultColorsEditability(iActivated)); \
} \
HRESULT __stdcall  ENVTIEName::GetDefaultColorsEditabilityInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetDefaultColorsEditabilityInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetDefaultColorsEditabilityLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetDefaultColorsEditabilityLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::get_Colors3DExperienceManagement(CAT_VARIANT_BOOL & oActivated) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Colors3DExperienceManagement(oActivated)); \
} \
HRESULT __stdcall  ENVTIEName::put_Colors3DExperienceManagement(CAT_VARIANT_BOOL iActivated) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Colors3DExperienceManagement(iActivated)); \
} \
HRESULT __stdcall  ENVTIEName::GetColors3DExperienceManagementInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetColors3DExperienceManagementInfo(ioAdminLevel,ioLocked,oModified)); \
} \
HRESULT __stdcall  ENVTIEName::SetColors3DExperienceManagementLock(CAT_VARIANT_BOOL iLocked) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SetColors3DExperienceManagementLock(iLocked)); \
} \
HRESULT __stdcall  ENVTIEName::Commit() \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)Commit()); \
} \
HRESULT __stdcall  ENVTIEName::Rollback() \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)Rollback()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValues() \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValues()); \
} \
HRESULT __stdcall  ENVTIEName::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)ResetToAdminValuesByName(iAttList)); \
} \
HRESULT __stdcall  ENVTIEName::SaveRepository() \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)SaveRepository()); \
} \
HRESULT  __stdcall  ENVTIEName::get_Application(CATIAApplication *& oApplication) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Application(oApplication)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Parent(CATBaseDispatch *& oParent) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Parent(oParent)); \
} \
HRESULT  __stdcall  ENVTIEName::get_Name(CATBSTR & oNameBSTR) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)get_Name(oNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::put_Name(const CATBSTR & iNameBSTR) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)put_Name(iNameBSTR)); \
} \
HRESULT  __stdcall  ENVTIEName::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
return (ENVTIECALL(CATIAPartInfrastructureSettingAtt,ENVTIETypeLetter,ENVTIELetter)GetItem(IDName,RealObj)); \
} \


/* Name of the TIE class */
#define class_TIE_CATIAPartInfrastructureSettingAtt(classe)    TIECATIAPartInfrastructureSettingAtt##classe


/* Common methods inside a TIE */
#define common_TIE_CATIAPartInfrastructureSettingAtt(classe) \
 \
 \
/* Static initialization */ \
CATDefineCommonTIEMembers(CATIAPartInfrastructureSettingAtt, classe) \
 \
 \
CATImplementTIEMethods(CATIAPartInfrastructureSettingAtt, classe) \
CATImplementIUnknownMethodsForCATBaseUnknownTIE(CATIAPartInfrastructureSettingAtt, classe, 2) \
CATImplementIDispatchMethodsForCATBaseUnknownTIE(CATIAPartInfrastructureSettingAtt, classe) \
CATImplementCATBaseUnknownMethodsForTIE(CATIAPartInfrastructureSettingAtt, classe) \
 \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_NewWithAxisSystem(CAT_VARIANT_BOOL & oAxisSystemCreated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,1,&_Trac2,&oAxisSystemCreated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NewWithAxisSystem(oAxisSystemCreated); \
   ExitAfterCall(this,1,_Trac2,&_ret_arg,&oAxisSystemCreated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_NewWithAxisSystem(CAT_VARIANT_BOOL iAxisSystemCreated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,2,&_Trac2,&iAxisSystemCreated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_NewWithAxisSystem(iAxisSystemCreated); \
   ExitAfterCall(this,2,_Trac2,&_ret_arg,&iAxisSystemCreated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetNewWithAxisSystemInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,3,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNewWithAxisSystemInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,3,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetNewWithAxisSystemLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,4,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetNewWithAxisSystemLock(iLocked); \
   ExitAfterCall(this,4,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_NewWithGS(CAT_VARIANT_BOOL & oGSCreated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,5,&_Trac2,&oGSCreated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NewWithGS(oGSCreated); \
   ExitAfterCall(this,5,_Trac2,&_ret_arg,&oGSCreated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_NewWithGS(CAT_VARIANT_BOOL iGSCreated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,6,&_Trac2,&iGSCreated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_NewWithGS(iGSCreated); \
   ExitAfterCall(this,6,_Trac2,&_ret_arg,&iGSCreated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetNewWithGSInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,7,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNewWithGSInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,7,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetNewWithGSLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,8,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetNewWithGSLock(iLocked); \
   ExitAfterCall(this,8,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_NewWithOGS(CAT_VARIANT_BOOL & oOGSCreated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,9,&_Trac2,&oOGSCreated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NewWithOGS(oOGSCreated); \
   ExitAfterCall(this,9,_Trac2,&_ret_arg,&oOGSCreated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_NewWithOGS(CAT_VARIANT_BOOL iGSCreated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,10,&_Trac2,&iGSCreated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_NewWithOGS(iGSCreated); \
   ExitAfterCall(this,10,_Trac2,&_ret_arg,&iGSCreated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetNewWithOGSInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,11,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNewWithOGSInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,11,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetNewWithOGSLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,12,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetNewWithOGSLock(iLocked); \
   ExitAfterCall(this,12,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_NewWith3DSupport(CAT_VARIANT_BOOL & o3DSupportCreated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,13,&_Trac2,&o3DSupportCreated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NewWith3DSupport(o3DSupportCreated); \
   ExitAfterCall(this,13,_Trac2,&_ret_arg,&o3DSupportCreated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_NewWith3DSupport(CAT_VARIANT_BOOL i3DSupportCreated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,14,&_Trac2,&i3DSupportCreated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_NewWith3DSupport(i3DSupportCreated); \
   ExitAfterCall(this,14,_Trac2,&_ret_arg,&i3DSupportCreated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetNewWith3DSupportInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,15,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNewWith3DSupportInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,15,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetNewWith3DSupportLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,16,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetNewWith3DSupportLock(iLocked); \
   ExitAfterCall(this,16,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_NewWithPanel(CAT_VARIANT_BOOL & oNewPartPanelDisplayed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,17,&_Trac2,&oNewPartPanelDisplayed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NewWithPanel(oNewPartPanelDisplayed); \
   ExitAfterCall(this,17,_Trac2,&_ret_arg,&oNewPartPanelDisplayed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_NewWithPanel(CAT_VARIANT_BOOL iNewPartPanelDisplayed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,18,&_Trac2,&iNewPartPanelDisplayed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_NewWithPanel(iNewPartPanelDisplayed); \
   ExitAfterCall(this,18,_Trac2,&_ret_arg,&iNewPartPanelDisplayed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetNewWithPanelInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,19,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNewWithPanelInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,19,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetNewWithPanelLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,20,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetNewWithPanelLock(iLocked); \
   ExitAfterCall(this,20,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_UpdateMode(CatPartUpdateMode & oUpdateMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,21,&_Trac2,&oUpdateMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UpdateMode(oUpdateMode); \
   ExitAfterCall(this,21,_Trac2,&_ret_arg,&oUpdateMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_UpdateMode(CatPartUpdateMode oUpdateMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,22,&_Trac2,&oUpdateMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_UpdateMode(oUpdateMode); \
   ExitAfterCall(this,22,_Trac2,&_ret_arg,&oUpdateMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetUpdateModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,23,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUpdateModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,23,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetUpdateModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,24,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUpdateModeLock(iLocked); \
   ExitAfterCall(this,24,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_UpdateStoppedOnError(CAT_VARIANT_BOOL & oStoppedOnError) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,25,&_Trac2,&oStoppedOnError); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UpdateStoppedOnError(oStoppedOnError); \
   ExitAfterCall(this,25,_Trac2,&_ret_arg,&oStoppedOnError); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_UpdateStoppedOnError(CAT_VARIANT_BOOL iStoppedOnError) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,26,&_Trac2,&iStoppedOnError); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_UpdateStoppedOnError(iStoppedOnError); \
   ExitAfterCall(this,26,_Trac2,&_ret_arg,&iStoppedOnError); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetUpdateStoppedOnErrorInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,27,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUpdateStoppedOnErrorInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,27,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetUpdateStoppedOnErrorLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,28,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUpdateStoppedOnErrorLock(iLocked); \
   ExitAfterCall(this,28,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_UpdateLinkedExternalReferences(CAT_VARIANT_BOOL & oExternalReferencesUpdated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,29,&_Trac2,&oExternalReferencesUpdated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UpdateLinkedExternalReferences(oExternalReferencesUpdated); \
   ExitAfterCall(this,29,_Trac2,&_ret_arg,&oExternalReferencesUpdated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_UpdateLinkedExternalReferences(CAT_VARIANT_BOOL iExternalReferencesUpdated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,30,&_Trac2,&iExternalReferencesUpdated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_UpdateLinkedExternalReferences(iExternalReferencesUpdated); \
   ExitAfterCall(this,30,_Trac2,&_ret_arg,&iExternalReferencesUpdated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetUpdateLinkedExternalReferencesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,31,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUpdateLinkedExternalReferencesInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,31,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetUpdateLinkedExternalReferencesLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,32,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUpdateLinkedExternalReferencesLock(iLocked); \
   ExitAfterCall(this,32,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_UpdateElementsRefreshed(CAT_VARIANT_BOOL & oElementsRefreshed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,33,&_Trac2,&oElementsRefreshed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_UpdateElementsRefreshed(oElementsRefreshed); \
   ExitAfterCall(this,33,_Trac2,&_ret_arg,&oElementsRefreshed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_UpdateElementsRefreshed(CAT_VARIANT_BOOL iElementsRefreshed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,34,&_Trac2,&iElementsRefreshed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_UpdateElementsRefreshed(iElementsRefreshed); \
   ExitAfterCall(this,34,_Trac2,&_ret_arg,&iElementsRefreshed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetUpdateElementsRefreshedInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,35,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetUpdateElementsRefreshedInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,35,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetUpdateElementsRefreshedLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,36,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetUpdateElementsRefreshedLock(iLocked); \
   ExitAfterCall(this,36,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_HybridDesignMode(CAT_VARIANT_BOOL & oHybridDesign) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,37,&_Trac2,&oHybridDesign); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_HybridDesignMode(oHybridDesign); \
   ExitAfterCall(this,37,_Trac2,&_ret_arg,&oHybridDesign); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_HybridDesignMode(CAT_VARIANT_BOOL iHybridDesign) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,38,&_Trac2,&iHybridDesign); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_HybridDesignMode(iHybridDesign); \
   ExitAfterCall(this,38,_Trac2,&_ret_arg,&iHybridDesign); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetHybridDesignModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,39,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetHybridDesignModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,39,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetHybridDesignModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,40,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetHybridDesignModeLock(iLocked); \
   ExitAfterCall(this,40,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_KnowledgeInHybridDesignMode(CAT_VARIANT_BOOL & oKnowledgeInHybridDesign) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,41,&_Trac2,&oKnowledgeInHybridDesign); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_KnowledgeInHybridDesignMode(oKnowledgeInHybridDesign); \
   ExitAfterCall(this,41,_Trac2,&_ret_arg,&oKnowledgeInHybridDesign); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_KnowledgeInHybridDesignMode(CAT_VARIANT_BOOL iKnowledgeInHybridDesign) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,42,&_Trac2,&iKnowledgeInHybridDesign); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_KnowledgeInHybridDesignMode(iKnowledgeInHybridDesign); \
   ExitAfterCall(this,42,_Trac2,&_ret_arg,&iKnowledgeInHybridDesign); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetKnowledgeInHybridDesignModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,43,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetKnowledgeInHybridDesignModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,43,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetKnowledgeInHybridDesignModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,44,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetKnowledgeInHybridDesignModeLock(iLocked); \
   ExitAfterCall(this,44,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_SurfaceElementsLocation(CatPartSurfaceElementsLocation & oLocation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,45,&_Trac2,&oLocation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_SurfaceElementsLocation(oLocation); \
   ExitAfterCall(this,45,_Trac2,&_ret_arg,&oLocation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_SurfaceElementsLocation(CatPartSurfaceElementsLocation iLocation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,46,&_Trac2,&iLocation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_SurfaceElementsLocation(iLocation); \
   ExitAfterCall(this,46,_Trac2,&_ret_arg,&iLocation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetSurfaceElementsLocationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,47,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetSurfaceElementsLocationInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,47,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetSurfaceElementsLocationLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,48,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetSurfaceElementsLocationLock(iLocked); \
   ExitAfterCall(this,48,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_ExternalReferencesNodeInTree(CAT_VARIANT_BOOL & oNodeDisplayed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,49,&_Trac2,&oNodeDisplayed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExternalReferencesNodeInTree(oNodeDisplayed); \
   ExitAfterCall(this,49,_Trac2,&_ret_arg,&oNodeDisplayed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_ExternalReferencesNodeInTree(CAT_VARIANT_BOOL iNodeDisplayed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,50,&_Trac2,&iNodeDisplayed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ExternalReferencesNodeInTree(iNodeDisplayed); \
   ExitAfterCall(this,50,_Trac2,&_ret_arg,&iNodeDisplayed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetExternalReferencesNodeInTreeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,51,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetExternalReferencesNodeInTreeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,51,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetExternalReferencesNodeInTreeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,52,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetExternalReferencesNodeInTreeLock(iLocked); \
   ExitAfterCall(this,52,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_ConstraintsNodeInTree(CAT_VARIANT_BOOL & oNodeDisplayed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,53,&_Trac2,&oNodeDisplayed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ConstraintsNodeInTree(oNodeDisplayed); \
   ExitAfterCall(this,53,_Trac2,&_ret_arg,&oNodeDisplayed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_ConstraintsNodeInTree(CAT_VARIANT_BOOL iNodeDisplayed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,54,&_Trac2,&iNodeDisplayed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ConstraintsNodeInTree(iNodeDisplayed); \
   ExitAfterCall(this,54,_Trac2,&_ret_arg,&iNodeDisplayed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetConstraintsNodeInTreeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,55,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConstraintsNodeInTreeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,55,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetConstraintsNodeInTreeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,56,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetConstraintsNodeInTreeLock(iLocked); \
   ExitAfterCall(this,56,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_ParametersNodeInTree(CAT_VARIANT_BOOL & oNodeDisplayed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,57,&_Trac2,&oNodeDisplayed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ParametersNodeInTree(oNodeDisplayed); \
   ExitAfterCall(this,57,_Trac2,&_ret_arg,&oNodeDisplayed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_ParametersNodeInTree(CAT_VARIANT_BOOL iNodeDisplayed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,58,&_Trac2,&iNodeDisplayed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ParametersNodeInTree(iNodeDisplayed); \
   ExitAfterCall(this,58,_Trac2,&_ret_arg,&iNodeDisplayed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetParametersNodeInTreeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,59,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetParametersNodeInTreeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,59,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetParametersNodeInTreeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,60,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetParametersNodeInTreeLock(iLocked); \
   ExitAfterCall(this,60,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_RelationsNodeInTree(CAT_VARIANT_BOOL & oNodeDisplayed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,61,&_Trac2,&oNodeDisplayed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_RelationsNodeInTree(oNodeDisplayed); \
   ExitAfterCall(this,61,_Trac2,&_ret_arg,&oNodeDisplayed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_RelationsNodeInTree(CAT_VARIANT_BOOL iNodeDisplayed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,62,&_Trac2,&iNodeDisplayed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_RelationsNodeInTree(iNodeDisplayed); \
   ExitAfterCall(this,62,_Trac2,&_ret_arg,&iNodeDisplayed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetRelationsNodeInTreeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,63,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetRelationsNodeInTreeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,63,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetRelationsNodeInTreeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,64,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetRelationsNodeInTreeLock(iLocked); \
   ExitAfterCall(this,64,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_BodiesUnderOperationsInTree(CAT_VARIANT_BOOL & oNodeDisplayed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,65,&_Trac2,&oNodeDisplayed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_BodiesUnderOperationsInTree(oNodeDisplayed); \
   ExitAfterCall(this,65,_Trac2,&_ret_arg,&oNodeDisplayed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_BodiesUnderOperationsInTree(CAT_VARIANT_BOOL iNodeDisplayed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,66,&_Trac2,&iNodeDisplayed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_BodiesUnderOperationsInTree(iNodeDisplayed); \
   ExitAfterCall(this,66,_Trac2,&_ret_arg,&iNodeDisplayed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetBodiesUnderOperationsInTreeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,67,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetBodiesUnderOperationsInTreeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,67,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetBodiesUnderOperationsInTreeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,68,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetBodiesUnderOperationsInTreeLock(iLocked); \
   ExitAfterCall(this,68,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_ExpandSketchBasedFeaturesNodeAtCreation(CAT_VARIANT_BOOL & oNodeExpanded) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,69,&_Trac2,&oNodeExpanded); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExpandSketchBasedFeaturesNodeAtCreation(oNodeExpanded); \
   ExitAfterCall(this,69,_Trac2,&_ret_arg,&oNodeExpanded); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_ExpandSketchBasedFeaturesNodeAtCreation(CAT_VARIANT_BOOL iNodeExpanded) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,70,&_Trac2,&iNodeExpanded); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ExpandSketchBasedFeaturesNodeAtCreation(iNodeExpanded); \
   ExitAfterCall(this,70,_Trac2,&_ret_arg,&iNodeExpanded); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetExpandSketchBasedFeaturesNodeAtCreationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,71,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetExpandSketchBasedFeaturesNodeAtCreationInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,71,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetExpandSketchBasedFeaturesNodeAtCreationLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,72,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetExpandSketchBasedFeaturesNodeAtCreationLock(iLocked); \
   ExitAfterCall(this,72,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_OnlyCurrentOperatedSolidSetInGeometry(CAT_VARIANT_BOOL & oDisplayed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,73,&_Trac2,&oDisplayed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OnlyCurrentOperatedSolidSetInGeometry(oDisplayed); \
   ExitAfterCall(this,73,_Trac2,&_ret_arg,&oDisplayed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_OnlyCurrentOperatedSolidSetInGeometry(CAT_VARIANT_BOOL iDisplayed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,74,&_Trac2,&iDisplayed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OnlyCurrentOperatedSolidSetInGeometry(iDisplayed); \
   ExitAfterCall(this,74,_Trac2,&_ret_arg,&iDisplayed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetOnlyCurrentOperatedSolidSetInGeometryInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,75,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOnlyCurrentOperatedSolidSetInGeometryInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,75,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetOnlyCurrentOperatedSolidSetInGeometryLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,76,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOnlyCurrentOperatedSolidSetInGeometryLock(iLocked); \
   ExitAfterCall(this,76,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_OnlyCurrentSolidSetInGeometry(CAT_VARIANT_BOOL & oDisplayed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,77,&_Trac2,&oDisplayed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_OnlyCurrentSolidSetInGeometry(oDisplayed); \
   ExitAfterCall(this,77,_Trac2,&_ret_arg,&oDisplayed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_OnlyCurrentSolidSetInGeometry(CAT_VARIANT_BOOL iDisplayed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,78,&_Trac2,&iDisplayed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_OnlyCurrentSolidSetInGeometry(iDisplayed); \
   ExitAfterCall(this,78,_Trac2,&_ret_arg,&iDisplayed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetOnlyCurrentSolidSetInGeometryInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,79,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetOnlyCurrentSolidSetInGeometryInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,79,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetOnlyCurrentSolidSetInGeometryLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,80,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetOnlyCurrentSolidSetInGeometryLock(iLocked); \
   ExitAfterCall(this,80,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_DisplayGeometryAfterCurrent(CAT_VARIANT_BOOL & oDisplayed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,81,&_Trac2,&oDisplayed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DisplayGeometryAfterCurrent(oDisplayed); \
   ExitAfterCall(this,81,_Trac2,&_ret_arg,&oDisplayed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_DisplayGeometryAfterCurrent(CAT_VARIANT_BOOL iDisplayed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,82,&_Trac2,&iDisplayed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DisplayGeometryAfterCurrent(iDisplayed); \
   ExitAfterCall(this,82,_Trac2,&_ret_arg,&iDisplayed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetDisplayGeometryAfterCurrentInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,83,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDisplayGeometryAfterCurrentInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,83,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetDisplayGeometryAfterCurrentLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,84,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDisplayGeometryAfterCurrentLock(iLocked); \
   ExitAfterCall(this,84,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_ConstraintsInGeometry(CAT_VARIANT_BOOL & oDisplayed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,85,&_Trac2,&oDisplayed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ConstraintsInGeometry(oDisplayed); \
   ExitAfterCall(this,85,_Trac2,&_ret_arg,&oDisplayed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_ConstraintsInGeometry(CAT_VARIANT_BOOL iDisplayed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,86,&_Trac2,&iDisplayed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ConstraintsInGeometry(iDisplayed); \
   ExitAfterCall(this,86,_Trac2,&_ret_arg,&iDisplayed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetConstraintsInGeometryInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,87,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetConstraintsInGeometryInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,87,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetConstraintsInGeometryLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,88,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetConstraintsInGeometryLock(iLocked); \
   ExitAfterCall(this,88,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_AxisSystemSize(short & oSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,89,&_Trac2,&oSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AxisSystemSize(oSize); \
   ExitAfterCall(this,89,_Trac2,&_ret_arg,&oSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_AxisSystemSize(short iSize) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,90,&_Trac2,&iSize); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AxisSystemSize(iSize); \
   ExitAfterCall(this,90,_Trac2,&_ret_arg,&iSize); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetAxisSystemSizeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,91,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAxisSystemSizeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,91,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetAxisSystemSizeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,92,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAxisSystemSizeLock(iLocked); \
   ExitAfterCall(this,92,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_ContextualFeaturesSelectableAtCreation(CAT_VARIANT_BOOL & oContextualFeaturesSelectable) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,93,&_Trac2,&oContextualFeaturesSelectable); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ContextualFeaturesSelectableAtCreation(oContextualFeaturesSelectable); \
   ExitAfterCall(this,93,_Trac2,&_ret_arg,&oContextualFeaturesSelectable); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_ContextualFeaturesSelectableAtCreation(CAT_VARIANT_BOOL iContextualFeaturesSelectable) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,94,&_Trac2,&iContextualFeaturesSelectable); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ContextualFeaturesSelectableAtCreation(iContextualFeaturesSelectable); \
   ExitAfterCall(this,94,_Trac2,&_ret_arg,&iContextualFeaturesSelectable); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetContextualFeaturesSelectableAtCreationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,95,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetContextualFeaturesSelectableAtCreationInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,95,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetContextualFeaturesSelectableAtCreationLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,96,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetContextualFeaturesSelectableAtCreationLock(iLocked); \
   ExitAfterCall(this,96,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_LinkedExternalReferences(CAT_VARIANT_BOOL & oWithLink) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,97,&_Trac2,&oWithLink); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LinkedExternalReferences(oWithLink); \
   ExitAfterCall(this,97,_Trac2,&_ret_arg,&oWithLink); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_LinkedExternalReferences(CAT_VARIANT_BOOL iWithLink) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,98,&_Trac2,&iWithLink); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LinkedExternalReferences(iWithLink); \
   ExitAfterCall(this,98,_Trac2,&_ret_arg,&iWithLink); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetLinkedExternalReferencesInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,99,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLinkedExternalReferencesInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,99,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetLinkedExternalReferencesLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,100,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLinkedExternalReferencesLock(iLocked); \
   ExitAfterCall(this,100,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_LinkedExternalReferencesOnlyOnPublication(CAT_VARIANT_BOOL & oOnlyForPublishedElements) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,101,&_Trac2,&oOnlyForPublishedElements); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LinkedExternalReferencesOnlyOnPublication(oOnlyForPublishedElements); \
   ExitAfterCall(this,101,_Trac2,&_ret_arg,&oOnlyForPublishedElements); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_LinkedExternalReferencesOnlyOnPublication(CAT_VARIANT_BOOL iOnlyForPublishedElements) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,102,&_Trac2,&iOnlyForPublishedElements); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LinkedExternalReferencesOnlyOnPublication(iOnlyForPublishedElements); \
   ExitAfterCall(this,102,_Trac2,&_ret_arg,&iOnlyForPublishedElements); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetLinkedExternalReferencesOnlyOnPublicationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,103,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLinkedExternalReferencesOnlyOnPublicationInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,103,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetLinkedExternalReferencesOnlyOnPublicationLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,104,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLinkedExternalReferencesOnlyOnPublicationLock(iLocked); \
   ExitAfterCall(this,104,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_LinkedExternalReferencesWarningAtCreation(CAT_VARIANT_BOOL & oWarningAtCreation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,105,&_Trac2,&oWarningAtCreation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_LinkedExternalReferencesWarningAtCreation(oWarningAtCreation); \
   ExitAfterCall(this,105,_Trac2,&_ret_arg,&oWarningAtCreation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_LinkedExternalReferencesWarningAtCreation(CAT_VARIANT_BOOL iWarningAtCreation) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,106,&_Trac2,&iWarningAtCreation); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_LinkedExternalReferencesWarningAtCreation(iWarningAtCreation); \
   ExitAfterCall(this,106,_Trac2,&_ret_arg,&iWarningAtCreation); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetLinkedExternalReferencesWarningAtCreationInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,107,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetLinkedExternalReferencesWarningAtCreationInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,107,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetLinkedExternalReferencesWarningAtCreationLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,108,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetLinkedExternalReferencesWarningAtCreationLock(iLocked); \
   ExitAfterCall(this,108,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_ExternalReferencesAsVisible(CAT_VARIANT_BOOL & oVisible) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,109,&_Trac2,&oVisible); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExternalReferencesAsVisible(oVisible); \
   ExitAfterCall(this,109,_Trac2,&_ret_arg,&oVisible); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_ExternalReferencesAsVisible(CAT_VARIANT_BOOL iVisible) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,110,&_Trac2,&iVisible); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ExternalReferencesAsVisible(iVisible); \
   ExitAfterCall(this,110,_Trac2,&_ret_arg,&iVisible); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetExternalReferencesAsVisibleInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,111,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetExternalReferencesAsVisibleInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,111,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetExternalReferencesAsVisibleLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,112,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetExternalReferencesAsVisibleLock(iLocked); \
   ExitAfterCall(this,112,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_ExternalReferencesAssemblyRootContext(CAT_VARIANT_BOOL & oRootContextUsed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,113,&_Trac2,&oRootContextUsed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ExternalReferencesAssemblyRootContext(oRootContextUsed); \
   ExitAfterCall(this,113,_Trac2,&_ret_arg,&oRootContextUsed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_ExternalReferencesAssemblyRootContext(CAT_VARIANT_BOOL iRootContextUsed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,114,&_Trac2,&iRootContextUsed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ExternalReferencesAssemblyRootContext(iRootContextUsed); \
   ExitAfterCall(this,114,_Trac2,&_ret_arg,&iRootContextUsed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetExternalReferencesAssemblyRootContextInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,115,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetExternalReferencesAssemblyRootContextInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,115,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetExternalReferencesAssemblyRootContextLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,116,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetExternalReferencesAssemblyRootContextLock(iLocked); \
   ExitAfterCall(this,116,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_PublishTopologicalElements(CAT_VARIANT_BOOL & oTopologyAllowed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,117,&_Trac2,&oTopologyAllowed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_PublishTopologicalElements(oTopologyAllowed); \
   ExitAfterCall(this,117,_Trac2,&_ret_arg,&oTopologyAllowed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_PublishTopologicalElements(CAT_VARIANT_BOOL iTopologyAllowed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,118,&_Trac2,&iTopologyAllowed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_PublishTopologicalElements(iTopologyAllowed); \
   ExitAfterCall(this,118,_Trac2,&_ret_arg,&iTopologyAllowed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetPublishTopologicalElementsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,119,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetPublishTopologicalElementsInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,119,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetPublishTopologicalElementsLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,120,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetPublishTopologicalElementsLock(iLocked); \
   ExitAfterCall(this,120,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_DeleteWarningBox(CAT_VARIANT_BOOL & oDisplayed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,121,&_Trac2,&oDisplayed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DeleteWarningBox(oDisplayed); \
   ExitAfterCall(this,121,_Trac2,&_ret_arg,&oDisplayed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_DeleteWarningBox(CAT_VARIANT_BOOL iDisplayed) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,122,&_Trac2,&iDisplayed); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DeleteWarningBox(iDisplayed); \
   ExitAfterCall(this,122,_Trac2,&_ret_arg,&iDisplayed); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetDeleteWarningBoxInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,123,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDeleteWarningBoxInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,123,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetDeleteWarningBoxLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,124,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDeleteWarningBoxLock(iLocked); \
   ExitAfterCall(this,124,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_AlsoDeleteExclusiveParents(CAT_VARIANT_BOOL & oDeleted) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,125,&_Trac2,&oDeleted); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_AlsoDeleteExclusiveParents(oDeleted); \
   ExitAfterCall(this,125,_Trac2,&_ret_arg,&oDeleted); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_AlsoDeleteExclusiveParents(CAT_VARIANT_BOOL iDeleted) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,126,&_Trac2,&iDeleted); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_AlsoDeleteExclusiveParents(iDeleted); \
   ExitAfterCall(this,126,_Trac2,&_ret_arg,&iDeleted); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetAlsoDeleteExclusiveParentsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,127,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetAlsoDeleteExclusiveParentsInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,127,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetAlsoDeleteExclusiveParentsLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,128,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetAlsoDeleteExclusiveParentsLock(iLocked); \
   ExitAfterCall(this,128,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_ReplaceOnlyAfterCurrent(CAT_VARIANT_BOOL & oOnlyAfterCurrent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,129,&_Trac2,&oOnlyAfterCurrent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ReplaceOnlyAfterCurrent(oOnlyAfterCurrent); \
   ExitAfterCall(this,129,_Trac2,&_ret_arg,&oOnlyAfterCurrent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_ReplaceOnlyAfterCurrent(CAT_VARIANT_BOOL iOnlyAfterCurrent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,130,&_Trac2,&iOnlyAfterCurrent); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ReplaceOnlyAfterCurrent(iOnlyAfterCurrent); \
   ExitAfterCall(this,130,_Trac2,&_ret_arg,&iOnlyAfterCurrent); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetReplaceOnlyAfterCurrentInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,131,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetReplaceOnlyAfterCurrentInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,131,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetReplaceOnlyAfterCurrentLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,132,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetReplaceOnlyAfterCurrentLock(iLocked); \
   ExitAfterCall(this,132,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_NamingMode(CatPartElementsNamingMode & oNamingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,133,&_Trac2,&oNamingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_NamingMode(oNamingMode); \
   ExitAfterCall(this,133,_Trac2,&_ret_arg,&oNamingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_NamingMode(CatPartElementsNamingMode iNamingMode) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,134,&_Trac2,&iNamingMode); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_NamingMode(iNamingMode); \
   ExitAfterCall(this,134,_Trac2,&_ret_arg,&iNamingMode); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetNamingModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,135,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetNamingModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,135,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetNamingModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,136,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetNamingModeLock(iLocked); \
   ExitAfterCall(this,136,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_TrueColorMode(CAT_VARIANT_BOOL & oActivated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,137,&_Trac2,&oActivated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_TrueColorMode(oActivated); \
   ExitAfterCall(this,137,_Trac2,&_ret_arg,&oActivated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_TrueColorMode(CAT_VARIANT_BOOL iActivated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,138,&_Trac2,&iActivated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_TrueColorMode(iActivated); \
   ExitAfterCall(this,138,_Trac2,&_ret_arg,&iActivated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetTrueColorModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,139,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetTrueColorModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,139,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_ColorSynchronizationMode(CAT_VARIANT_BOOL & oActivated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,140,&_Trac2,&oActivated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ColorSynchronizationMode(oActivated); \
   ExitAfterCall(this,140,_Trac2,&_ret_arg,&oActivated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_ColorSynchronizationMode(CAT_VARIANT_BOOL iActivated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,141,&_Trac2,&iActivated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ColorSynchronizationMode(iActivated); \
   ExitAfterCall(this,141,_Trac2,&_ret_arg,&iActivated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetColorSynchronizationModeInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,142,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetColorSynchronizationModeInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,142,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetColorSynchronizationModeLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,143,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetColorSynchronizationModeLock(iLocked); \
   ExitAfterCall(this,143,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_ColorSynchronizationModeOnFeature(CAT_VARIANT_BOOL & oActivated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,144,&_Trac2,&oActivated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ColorSynchronizationModeOnFeature(oActivated); \
   ExitAfterCall(this,144,_Trac2,&_ret_arg,&oActivated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_ColorSynchronizationModeOnFeature(CAT_VARIANT_BOOL iActivated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,145,&_Trac2,&iActivated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ColorSynchronizationModeOnFeature(iActivated); \
   ExitAfterCall(this,145,_Trac2,&_ret_arg,&iActivated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetColorSynchronizationModeOnFeatureInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,146,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetColorSynchronizationModeOnFeatureInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,146,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetColorSynchronizationModeOnFeatureLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,147,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetColorSynchronizationModeOnFeatureLock(iLocked); \
   ExitAfterCall(this,147,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_ColorSynchronizationModeManage(CAT_VARIANT_BOOL & oActivated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,148,&_Trac2,&oActivated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ColorSynchronizationModeManage(oActivated); \
   ExitAfterCall(this,148,_Trac2,&_ret_arg,&oActivated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_ColorSynchronizationModeManage(CAT_VARIANT_BOOL iActivated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,149,&_Trac2,&iActivated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ColorSynchronizationModeManage(iActivated); \
   ExitAfterCall(this,149,_Trac2,&_ret_arg,&iActivated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetColorSynchronizationModeManageInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,150,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetColorSynchronizationModeManageInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,150,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetColorSynchronizationModeManageLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,151,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetColorSynchronizationModeManageLock(iLocked); \
   ExitAfterCall(this,151,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_ColorSynchronizationModeOnSubElements(CAT_VARIANT_BOOL & oActivated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,152,&_Trac2,&oActivated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ColorSynchronizationModeOnSubElements(oActivated); \
   ExitAfterCall(this,152,_Trac2,&_ret_arg,&oActivated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_ColorSynchronizationModeOnSubElements(CAT_VARIANT_BOOL iActivated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,153,&_Trac2,&iActivated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ColorSynchronizationModeOnSubElements(iActivated); \
   ExitAfterCall(this,153,_Trac2,&_ret_arg,&iActivated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetColorSynchronizationModeOnSubElementsInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,154,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetColorSynchronizationModeOnSubElementsInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,154,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetColorSynchronizationModeOnSubElementsLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,155,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetColorSynchronizationModeOnSubElementsLock(iLocked); \
   ExitAfterCall(this,155,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_ColorSynchronizationEditability(CAT_VARIANT_BOOL & oActivated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,156,&_Trac2,&oActivated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_ColorSynchronizationEditability(oActivated); \
   ExitAfterCall(this,156,_Trac2,&_ret_arg,&oActivated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_ColorSynchronizationEditability(CAT_VARIANT_BOOL iActivated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,157,&_Trac2,&iActivated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_ColorSynchronizationEditability(iActivated); \
   ExitAfterCall(this,157,_Trac2,&_ret_arg,&iActivated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetColorSynchronizationEditabilityInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,158,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetColorSynchronizationEditabilityInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,158,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetColorSynchronizationEditabilityLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,159,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetColorSynchronizationEditabilityLock(iLocked); \
   ExitAfterCall(this,159,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_DefaultColorsEditability(CAT_VARIANT_BOOL & oActivated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,160,&_Trac2,&oActivated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_DefaultColorsEditability(oActivated); \
   ExitAfterCall(this,160,_Trac2,&_ret_arg,&oActivated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_DefaultColorsEditability(CAT_VARIANT_BOOL iActivated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,161,&_Trac2,&iActivated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_DefaultColorsEditability(iActivated); \
   ExitAfterCall(this,161,_Trac2,&_ret_arg,&iActivated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetDefaultColorsEditabilityInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,162,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetDefaultColorsEditabilityInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,162,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetDefaultColorsEditabilityLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,163,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetDefaultColorsEditabilityLock(iLocked); \
   ExitAfterCall(this,163,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_Colors3DExperienceManagement(CAT_VARIANT_BOOL & oActivated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,164,&_Trac2,&oActivated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Colors3DExperienceManagement(oActivated); \
   ExitAfterCall(this,164,_Trac2,&_ret_arg,&oActivated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_Colors3DExperienceManagement(CAT_VARIANT_BOOL iActivated) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,165,&_Trac2,&iActivated); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Colors3DExperienceManagement(iActivated); \
   ExitAfterCall(this,165,_Trac2,&_ret_arg,&iActivated); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetColors3DExperienceManagementInfo(CATBSTR & ioAdminLevel, CATBSTR & ioLocked, CAT_VARIANT_BOOL & oModified) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,166,&_Trac2,&ioAdminLevel,&ioLocked,&oModified); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetColors3DExperienceManagementInfo(ioAdminLevel,ioLocked,oModified); \
   ExitAfterCall(this,166,_Trac2,&_ret_arg,&ioAdminLevel,&ioLocked,&oModified); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SetColors3DExperienceManagementLock(CAT_VARIANT_BOOL iLocked) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,167,&_Trac2,&iLocked); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SetColors3DExperienceManagementLock(iLocked); \
   ExitAfterCall(this,167,_Trac2,&_ret_arg,&iLocked); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::Commit() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,168,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Commit(); \
   ExitAfterCall(this,168,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::Rollback() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,169,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->Rollback(); \
   ExitAfterCall(this,169,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::ResetToAdminValues() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,170,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValues(); \
   ExitAfterCall(this,170,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::ResetToAdminValuesByName(const CATSafeArrayVariant & iAttList) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,171,&_Trac2,&iAttList); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->ResetToAdminValuesByName(iAttList); \
   ExitAfterCall(this,171,_Trac2,&_ret_arg,&iAttList); \
   return(_ret_arg); \
} \
HRESULT __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::SaveRepository() \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,172,&_Trac2); \
   HRESULT  _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->SaveRepository(); \
   ExitAfterCall(this,172,_Trac2,&_ret_arg); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_Application(CATIAApplication *& oApplication) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,173,&_Trac2,&oApplication); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Application(oApplication); \
   ExitAfterCall(this,173,_Trac2,&_ret_arg,&oApplication); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_Parent(CATBaseDispatch *& oParent) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,174,&_Trac2,&oParent); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Parent(oParent); \
   ExitAfterCall(this,174,_Trac2,&_ret_arg,&oParent); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::get_Name(CATBSTR & oNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,175,&_Trac2,&oNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->get_Name(oNameBSTR); \
   ExitAfterCall(this,175,_Trac2,&_ret_arg,&oNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::put_Name(const CATBSTR & iNameBSTR) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,176,&_Trac2,&iNameBSTR); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->put_Name(iNameBSTR); \
   ExitAfterCall(this,176,_Trac2,&_ret_arg,&iNameBSTR); \
   return(_ret_arg); \
} \
HRESULT  __stdcall  TIECATIAPartInfrastructureSettingAtt##classe::GetItem(const CATBSTR & IDName, CATBaseDispatch *& RealObj) \
{ \
   CATICallTrac2 *_Trac2; \
   ExitBeforeCall(this,177,&_Trac2,&IDName,&RealObj); \
   HRESULT   _ret_arg = ((classe *)Tie_Method(NecessaryData.ForTIE,ptstat))->GetItem(IDName,RealObj); \
   ExitAfterCall(this,177,_Trac2,&_ret_arg,&IDName,&RealObj); \
   return(_ret_arg); \
} \



/* Macro used to link an implementation with an interface */
#define TIE_CATIAPartInfrastructureSettingAtt(classe) \
 \
 \
declare_TIE_CATIAPartInfrastructureSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPartInfrastructureSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPartInfrastructureSettingAtt,"CATIAPartInfrastructureSettingAtt",CATIAPartInfrastructureSettingAtt::MetaObject(),classe::MetaObject(),TIE); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPartInfrastructureSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIECreation(CATIAPartInfrastructureSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPartInfrastructureSettingAtt##classe(classe::MetaObject(),CATIAPartInfrastructureSettingAtt::MetaObject(),(void *)CreateTIECATIAPartInfrastructureSettingAtt##classe)



/* Macro used to link an implementation with an interface */
/* This TIE is chained on the implementation object */
#define TIEchain_CATIAPartInfrastructureSettingAtt(classe) \
 \
 \
declare_TIE_CATIAPartInfrastructureSettingAtt(classe) \
 \
 \
CATMetaClass * __stdcall TIECATIAPartInfrastructureSettingAtt##classe::MetaObject() \
{ \
   if (!meta_object) \
   { \
      meta_object=new CATMetaClass(&IID_CATIAPartInfrastructureSettingAtt,"CATIAPartInfrastructureSettingAtt",CATIAPartInfrastructureSettingAtt::MetaObject(),classe::MetaObject(),TIEchain); \
   } \
   return(meta_object); \
} \
 \
 \
common_TIE_CATIAPartInfrastructureSettingAtt(classe) \
 \
 \
/* creator function of the interface */ \
/* encapsulate the new */ \
CATImplementTIEchainCreation(CATIAPartInfrastructureSettingAtt, classe) \
 \
/* to put information into the dictionary */ \
static CATFillDictionary DicCATIAPartInfrastructureSettingAtt##classe(classe::MetaObject(),CATIAPartInfrastructureSettingAtt::MetaObject(),(void *)CreateTIECATIAPartInfrastructureSettingAtt##classe)


/* Macro to switch between BOA and TIE at build time */ 
#ifdef CATSYS_BOA_IS_TIE
#define BOA_CATIAPartInfrastructureSettingAtt(classe) TIE_CATIAPartInfrastructureSettingAtt(classe)
#else
#define BOA_CATIAPartInfrastructureSettingAtt(classe) CATImplementBOA(CATIAPartInfrastructureSettingAtt, classe)
#endif

#endif
