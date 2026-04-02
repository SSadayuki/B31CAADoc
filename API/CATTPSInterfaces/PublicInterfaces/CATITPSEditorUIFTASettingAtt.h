
#ifndef CATITPSEditorUIFTASettingAtt_H
#define CATITPSEditorUIFTASettingAtt_H

#include "CATTPSItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATIAFTASettingAtt.h"

// COPYRIGHT Dassault Systemes 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATTPSItfCPP IID IID_CATITPSEditorUIFTASettingAtt;
#else
extern "C" const IID IID_CATITPSEditorUIFTASettingAtt ;
#endif

class CATSettingInfo;
class CATUnicodeString;

/**
 * Interface dedicated to manage setting of FTA
 */

class ExportedByCATTPSItfCPP CATITPSEditorUIFTASettingAtt: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Retrieves the Non Semantic Allways Upgrade for general tolerance attribute.
     */
     virtual HRESULT GetNonSemanticAllwaysUpgradeGeneralTol( unsigned char* oValue ) = 0;

    /**
     * Retrieves the Non Semantic Allways Upgrade attribute.
     */
     virtual HRESULT GetNonSemanticAllwaysUpgrade( unsigned char* oValue ) = 0;

    /**
     * Retrieves the Non Semantic TolAllowed attribute.
     */
     virtual HRESULT GetNonSemanticTolAllowed( unsigned char* oValue ) = 0;

    /**
     * Retrieves the Non Semantic Dim Allowed attribute.
     */
     virtual HRESULT GetNonSemanticDimAllowed( unsigned char* oValue ) = 0;

    /**
     * Retrieves the Noa Creation attribute.
     */
     virtual HRESULT GetNoaCreation( unsigned char* oValue ) = 0;

    /**
     * Retrieves the Non Semantic Marked attribute.
     */
     virtual HRESULT GetNonSemanticMarked( unsigned char* oValue ) = 0;

    /**
     * Retrieves the Select Published Geometry attribute.
     */
     virtual HRESULT GetSelectPublishedGeometry( unsigned char* oValue ) = 0;

    /**
     * Retrieves the rotation snap angle attribute.
     */
     virtual HRESULT GetRotationSnapAngle( double* oValue ) = 0;

    /**
     * Retrieves the rotation snap auto attribute.
     */
     virtual HRESULT GetRotationSnapAuto( unsigned char* oValue ) = 0;

    /**
     * Retrieves the parameters in tree attribute.
     */
     virtual HRESULT GetParametersInTree( unsigned char* oValue ) = 0;

    /**
     * Retrieves the Shifted Profile attribute.
     */
     virtual HRESULT GetShiftedProfile( unsigned char* oValue ) = 0;

    /**
     * Retrieves the Highlight Def Annot attribute.
     */
     virtual HRESULT GetHighlightDefAnnot( unsigned char* oValue ) = 0;

    /**
     * Retrieves the DimORunCre attribute.
     */
     virtual HRESULT GetDimORunCre( unsigned char* oValue ) = 0;

    /**
     * Retrieves the DimORunMod attribute.
     */
     virtual HRESULT GetDimORunMod( unsigned char* oValue ) = 0;

    /**
     * Retrieves the DimBlankingCre attribute.
     */
     virtual HRESULT GetDimBlankingCre( unsigned char* oValue ) = 0;

    /**
     * Retrieves the DimBlankingMod attribute.
     */
     virtual HRESULT GetDimBlankingMod( unsigned char* oValue ) = 0;

    /**
     * Retrieves the DimBeforeCre attribute.
     */
     virtual HRESULT GetDimBeforeCre( unsigned char* oValue ) = 0;

    /**
     * Retrieves the DimBeforeMod attribute.
     */
     virtual HRESULT GetDimBeforeMod( unsigned char* oValue ) = 0;

    /**
     * Retrieves the DimAfterCre attribute.
     */
     virtual HRESULT GetDimAfterCre( unsigned char* oValue ) = 0;

    /**
     * Retrieves the DimAfterMod attribute.
     */
     virtual HRESULT GetDimAfterMod( unsigned char* oValue ) = 0;

    /**
     * Retrieves the DimMoveValueCre attribute.
     */
     virtual HRESULT GetDimMoveValueCre( unsigned char* oValue ) = 0;

    /**
     * Retrieves the DimMoveValueMod attribute.
     */
     virtual HRESULT GetDimMoveValueMod( unsigned char* oValue ) = 0;

    /**
     * Retrieves the DimMoveDimLineCre attribute.
     */
     virtual HRESULT GetDimMoveDimLineCre( unsigned char* oValue ) = 0;

    /**
     * Retrieves the DimMoveDimLineMod attribute.
     */
     virtual HRESULT GetDimMoveDimLineMod( unsigned char* oValue ) = 0;

    /**
     * Retrieves the DimMove2dPartCre attribute.
     */
     virtual HRESULT GetDimMove2dPartCre( unsigned char* oValue ) = 0;

    /**
     * Retrieves the DimMove2dPartMod attribute.
     */
     virtual HRESULT GetDimMove2dPartMod( unsigned char* oValue ) = 0;

    /**
     * Retrieves the DimMoveLeaderCre attribute.
     * @param oValue
     *   Output value of the Dimension Leader creation check box status.
     * If return code E_FAIL oValue is not obtained.
     * If return code S_OK oValue is obtained.
     * 
     */
     virtual HRESULT GetDimMoveLeaderCre( unsigned char* oValue ) = 0;

    /**
     * Retrieves the DimMoveLeaderMod attribute.
     * @param oValue
     *   Output value of the Dimension Leader modification check box status. 
     * If return code E_FAIL oValue is not obtained.
     * If return code S_OK oValue is obtained.
     */
     virtual HRESULT GetDimMoveLeaderMod( unsigned char* oValue ) = 0;


    /**
     * Retrieves the Dimension Oriented Default Symbol attribute.
     */
     virtual HRESULT GetDimOriDefaultSymb( unsigned char* oValue ) = 0;

     /**
     * Retrieves the Dimension Line UpBase Length attribute.
     */
     virtual HRESULT GetDimLineUpBaseLength( double* oValue ) = 0;

     /**
     * Retrieves the Dimension Line UpBase Angle attribute.
     */
     virtual HRESULT GetDimLineUpBaseAngle( double* oValue ) = 0;

     /**
     * Retrieves the Dimension Line Up Stack attribute.
     */
     virtual HRESULT GetDimLineUpStack( unsigned char* oValue ) = 0;

     /**
     * Retrieves the Dimension Line Up Cumul attribute.
     */
     virtual HRESULT GetDimLineUpCumul( unsigned char* oValue ) = 0;

     /**
     * Retrieves the Dimension Line Up Funnel attribute.
     */
     virtual HRESULT GetDimLineUpFunnel( unsigned char* oValue ) = 0;

     /**
     * Retrieves the Dimension Manual Positionning attribute.
     */
     virtual HRESULT GetDimManualPositionning( unsigned char* oValue ) = 0;

     /**
     * Retrieves the Dimension Constant Offset attribute.
     */
     virtual HRESULT GetDimConstantOffset( unsigned char* oValue ) = 0;

     /**
     * Retrieves the Dimension Line Posistion Value attribute.
     */
     virtual HRESULT GetDimLinePosValue( double* oValue ) = 0;

     /**
     * Retrieves the Dimension Snapping attribute.
     */
     virtual HRESULT GetDimSnapping( unsigned char* oValue ) = 0;

     /**
     * Retrieves the Dimension Move Sub Part attribute.
     */
     virtual HRESULT GetDimMoveSubPart( unsigned char* oValue ) = 0;

     /**
     * Retrieves the Dimension Configure Snapping attribute.
     */
     virtual HRESULT GetDimConfigureSnapping( CATFTADimConfigureSnapping* oValue ) = 0;

     /**
     * Retrieves the Dimension Create On Center or Edge attribute.
     */
     virtual HRESULT GetDimCreateOn( CATFTADimCreateOn* oValue ) = 0;

     /**
     * Retrieves the general tolerance class attribute.
     */
     virtual HRESULT GetGeneralTolClass( unsigned char* oValue  ) = 0;

     /**
     * Retrieves the general tolerance class attribute.
     */
     virtual HRESULT GetAngulaireGeneralTolClass( unsigned char* oValue  ) = 0;

    /**
     * Retrieves the Body Hide In Capture attribute.
     */
     virtual HRESULT GetBodyHideInCapture( unsigned char* oValue  ) = 0;

     /**
     * Retrieves the attribute.
     */
     virtual HRESULT GetAttValue( const char* ipSettingName, unsigned char* oValue ) = 0;

    /**
     * Retrieves the attribute.
     */
     virtual HRESULT GetAttValue( const char* ipSettingName, double* oValue ) = 0;

    /**
     * Sets the Non Semantic Allways Upgrade for general tolerance attribute.
     */
     virtual HRESULT SetNonSemanticAllwaysUpgradeGeneralTol( unsigned char iValue ) = 0;

    /**
     * Sets the Non Semantic Allways Upgrade attribute.
     */
     virtual HRESULT SetNonSemanticAllwaysUpgrade( unsigned char iValue ) = 0;

    /**
     * Sets the Non Semantic TolAllowed attribute.
     */
     virtual HRESULT SetNonSemanticTolAllowed( unsigned char iValue ) = 0;

    /**
     * Sets the Non Semantic Dim Allowed attribute.
     */
     virtual HRESULT SetNonSemanticDimAllowed( unsigned char iValue ) = 0;

    /**
     * Sets the Noa Creation attribute.
     */
     virtual HRESULT SetNoaCreation( unsigned char iValue ) = 0;

    /**
     * Sets the Non Semantic Marked attribute.
     */
     virtual HRESULT SetNonSemanticMarked( unsigned char iValue ) = 0;

    /**
     * Sets the Select Published Geometry attribute.
     */
     virtual HRESULT SetSelectPublishedGeometry( unsigned char iValue ) = 0;

    /**
     * Sets the rotation snap angle attribute.
     */
     virtual HRESULT SetRotationSnapAngle( double iValue ) = 0;

    /**
     * Sets the rotation snap auto attribute.
     */
     virtual HRESULT SetRotationSnapAuto( unsigned char iValue ) = 0;

    /**
     * Sets the parameters in tree attribute.
     */
     virtual HRESULT SetParametersInTree( unsigned char iValue ) = 0;

     /**
     * Sets the Shifted Profile attribute.
     */
     virtual HRESULT SetShiftedProfile( unsigned char iValue ) = 0;

     /**
     * Sets the Highlight Def Annot attribute.
     */
     virtual HRESULT SetHighlightDefAnnot( unsigned char iValue ) = 0;

    /**
     * Sets the DimORunCre attribute.
     */
     virtual HRESULT SetDimORunCre( unsigned char iValue ) = 0;

    /**
     * Sets the DimORunMod attribute.
     */
     virtual HRESULT SetDimORunMod( unsigned char iValue ) = 0;

    /**
     * Sets the DimBlankingCre attribute.
     */
     virtual HRESULT SetDimBlankingCre( unsigned char iValue ) = 0;

    /**
     * Sets the DimBlankingMod attribute.
     */
     virtual HRESULT SetDimBlankingMod( unsigned char iValue ) = 0;

    /**
     * Sets the DimBeforeCre attribute.
     */
     virtual HRESULT SetDimBeforeCre( unsigned char iValue ) = 0;

    /**
     * Sets the DimBeforeMod attribute.
     */
     virtual HRESULT SetDimBeforeMod( unsigned char iValue ) = 0;

    /**
     * Sets the DimAfterCre attribute.
     */
     virtual HRESULT SetDimAfterCre( unsigned char iValue ) = 0;

    /**
     * Sets the DimAfterMod attribute.
     */
     virtual HRESULT SetDimAfterMod( unsigned char iValue ) = 0;

    /**
     * Sets the DimMoveValueCre attribute.
     */
     virtual HRESULT SetDimMoveValueCre( unsigned char iValue ) = 0;

    /**
     * Sets the DimMoveValueMod attribute.
     */
     virtual HRESULT SetDimMoveValueMod( unsigned char iValue ) = 0;

    /**
     * Sets the DimMoveDimLineCre attribute.
     */
     virtual HRESULT SetDimMoveDimLineCre( unsigned char iValue ) = 0;

    /**
     * Sets the DimMoveDimLineMod attribute.
     */
     virtual HRESULT SetDimMoveDimLineMod( unsigned char iValue ) = 0;

    /**
     * Sets the DimMove2dPartCre attribute.
     */
     virtual HRESULT SetDimMove2dPartCre( unsigned char iValue ) = 0;

    /**
     * Sets the DimMove2dPartMod attribute.
     */
     virtual HRESULT SetDimMove2dPartMod( unsigned char iValue ) = 0;

     /**
     * Sets the DimMoveLeaderCre attribute.
     * @param iValue
     *   Input value of the Dimension Leader creation check box status. 
     *   If return code E_FAIL iValue is not set.
     *   If return code S_OK iValue is set.
     */
     virtual HRESULT SetDimMoveLeaderCre( unsigned char iValue ) = 0;

    /**
     * Sets the DimMoveLeaderMod attribute.
     * @param iValue
     *   Input value of the Dimension Leader modification check box status.
     * If return code E_FAIL iValue is not set.
     * If return code S_OK iValue is set.
     */
     virtual HRESULT SetDimMoveLeaderMod( unsigned char iValue ) = 0;


    /**
     * Sets the Dimension Oriented Default Symbol attribute.
     */
     virtual HRESULT SetDimOriDefaultSymb( unsigned char iValue ) = 0;

     /**
     * Sets the Dimension Line UpBase Length attribute.
     */
     virtual HRESULT SetDimLineUpBaseLength( double iValue ) = 0;

     /**
     * Sets the Dimension Line UpBase Angle attribute.
     */
     virtual HRESULT SetDimLineUpBaseAngle( double iValue ) = 0;

     /**
     * Sets the Dimension Line Up Stack attribute.
     */
     virtual HRESULT SetDimLineUpStack( unsigned char iValue ) = 0;

     /**
     * Sets the Dimension Line Up Cumul attribute.
     */
     virtual HRESULT SetDimLineUpCumul( unsigned char iValue ) = 0;

     /**
     * Sets the Dimension Line Up Funnel attribute.
     */
     virtual HRESULT SetDimLineUpFunnel( unsigned char iValue ) = 0;

     /**
     * Sets the Dimension Manual Positionning attribute.
     */
     virtual HRESULT SetDimManualPositionning( unsigned char iValue ) = 0;

     /**
     * Sets the Dimension Line Posistion Value attribute.
     */
     virtual HRESULT SetDimLinePosValue( double iValue ) = 0;

     /**
     * Sets the Dimension Constant Offset attribute.
     */
     virtual HRESULT SetDimConstantOffset( unsigned char iValue ) = 0;

     /**
     * Sets the Dimension Snapping attribute.
     */
     virtual HRESULT SetDimSnapping( unsigned char iValue ) = 0;

     /**
     * Sets the Dimension Move Sub Part attribute.
     */
     virtual HRESULT SetDimMoveSubPart( unsigned char iValue ) = 0;

     /**
     * Sets the Dimension Configure Snapping attribute.
     */
     virtual HRESULT SetDimConfigureSnapping( CATFTADimConfigureSnapping iValue ) = 0;

     /**
     * Sets the Dimension Create On Center or Edge attribute.
     */
     virtual HRESULT SetDimCreateOn( CATFTADimCreateOn iValue ) = 0;

     /**
     * Sets the general tolerance class attribute.
     */
     virtual HRESULT SetGeneralTolClass( unsigned char iValue  ) = 0;

     /**
     * Sets the general tolerance class attribute.
     */
     virtual HRESULT SetAngulaireGeneralTolClass( unsigned char iValue  ) = 0;

     /**
     * Sets the Body Hide In Capture attribute.
     */
     virtual HRESULT SetBodyHideInCapture( unsigned char iValue  ) = 0;

     /**
     * Sets the attribute.
     */
     virtual HRESULT SetAttValue( const char* ipSettingName, unsigned char iValue ) = 0;

    /**
     * Sets the attribute.
     */
     virtual HRESULT SetAttValue( const char* ipSettingName, double iValue ) = 0;

    /**
     * Retrieves the Non Semantic Allways Upgrade for general tolerance attribute.
     */
     virtual HRESULT GetNonSemanticAllwaysUpgradeGeneralTolInfo( 
                                                    CATSettingInfo* oInfo ) = 0;

    /**
     * Retrieves the state of the Non Semantic Allways Upgrade parameter.
     */
     virtual HRESULT GetNonSemanticAllwaysUpgradeInfo( CATSettingInfo* oInfo ) = 0;

    /**
     * Retrieves the state of the Non Semantic TolAllowed parameter.
     */
     virtual HRESULT GetNonSemanticTolAllowedInfo( CATSettingInfo* oInfo ) = 0;

    /**
     * Retrieves the state of the Non Semantic Dim Allowed parameter.
     */
     virtual HRESULT GetNonSemanticDimAllowedInfo( CATSettingInfo* oInfo ) = 0;

    /**
     * Retrieves the state of the Noa Creation parameter.
     */
     virtual HRESULT GetNoaCreationInfo( CATSettingInfo* oInfo ) = 0;

    /**
     * Retrieves the state of the Non Semantic Marked parameter.
     */
     virtual HRESULT GetNonSemanticMarkedInfo( CATSettingInfo* oInfo ) = 0;

    /**
     * Retrieves the state of the Published Geometry parameter.
     */
     virtual HRESULT GetSelectPublishedGeometryInfo( CATSettingInfo* oInfo ) = 0;

    /**
     * Retrieves the rotation snap angle parameter.
     */
     virtual HRESULT GetRotationSnapAngleInfo( CATSettingInfo* oInfo ) = 0;

    /**
     * Retrieves the rotation snap auto parameter.
     */
     virtual HRESULT GetRotationSnapAutoInfo( CATSettingInfo* oInfo ) = 0;

    /**
     * Retrieves the Parameters In Tree parameter.
     */
     virtual HRESULT GetParametersInTreeInfo( CATSettingInfo* oInfo ) = 0;

     /**
     * Retrieves the Shifted Profile parameter.
     */
     virtual HRESULT GetShiftedProfileInfo( CATSettingInfo* oInfo ) = 0;

     /**
     * Retrieves the Highlight Def Annot parameter.
     */
     virtual HRESULT GetHighlightDefAnnotInfo( CATSettingInfo* oInfo ) = 0;

    /**
     * Retrieves the state of the DimORunCre attribute.
     */
     virtual HRESULT GetDimORunCreInfo( CATSettingInfo* oInfo ) = 0;

    /**
     * Retrieves the state of the DimORunMod attribute.
     */
     virtual HRESULT GetDimORunModInfo( CATSettingInfo* oInfo ) = 0;

    /**
     * Retrieves the state of the DimBlankingCre attribute.
     */
     virtual HRESULT GetDimBlankingCreInfo( CATSettingInfo* oInfo ) = 0;

    /**
     * Retrieves the state of the DimBlankingMod attribute.
     */
     virtual HRESULT GetDimBlankingModInfo( CATSettingInfo* oInfo ) = 0;

    /**
     * Retrieves the state of the DimBeforeCre attribute.
     */
     virtual HRESULT GetDimBeforeCreInfo( CATSettingInfo* oInfo ) = 0;

    /**
     * Retrieves the state of the DimBeforeMod attribute.
     */
     virtual HRESULT GetDimBeforeModInfo( CATSettingInfo* oInfo ) = 0;

    /**
     * Retrieves the state of the DimAfterCre attribute.
     */
     virtual HRESULT GetDimAfterCreInfo( CATSettingInfo* oInfo ) = 0;

    /**
     * Retrieves the state of the DimAfterMod attribute.
     */
     virtual HRESULT GetDimAfterModInfo( CATSettingInfo* oInfo ) = 0;

    /**
     * Retrieves the state of the DimMoveValueCre attribute.
     */
     virtual HRESULT GetDimMoveValueCreInfo( CATSettingInfo* oInfo ) = 0;

    /**
     * Retrieves the state of the DimMoveValueMod attribute.
     */
     virtual HRESULT GetDimMoveValueModInfo( CATSettingInfo* oInfo ) = 0;

    /**
     * Retrieves the state of the DimMoveDimLineCre attribute.
     */
     virtual HRESULT GetDimMoveDimLineCreInfo( CATSettingInfo* oInfo ) = 0;

    /**
     * Retrieves the state of the DimMoveDimLineMod attribute.
     */
     virtual HRESULT GetDimMoveDimLineModInfo( CATSettingInfo* oInfo ) = 0;

    /**
     * Retrieves the state of the DimMove2dPartCre attribute.
     */
     virtual HRESULT GetDimMove2dPartCreInfo( CATSettingInfo* oInfo ) = 0;

    /**
     * Retrieves the state of the DimMove2dPartMod attribute.
     */
     virtual HRESULT GetDimMove2dPartModInfo( CATSettingInfo* oInfo ) = 0;

     /**
     * Retrieves the state of the DimMoveLeaderCre attribute.
     * @param oInfo
     *   Output giving the setting information of the check box status.
     * If return code E_FAIL setting information is not obtained.
     * If return code S_OK  setting information is obtained.
     *
     */
     virtual HRESULT GetDimMoveLeaderCreInfo( CATSettingInfo* oInfo ) = 0;

    /**
     * Retrieves the state of the DimMoveLeaderMod attribute.
     * @param oInfo
     *   Output giving the setting information of the check box status.
     * If return code E_FAIL setting information is not obtained.
     * If return code S_OK  setting information is obtained.
     *
     */
     virtual HRESULT GetDimMoveLeaderModInfo( CATSettingInfo* oInfo ) = 0;

    /**
     * Retrieves the state of the Dimension Oriented Default Symbol attribute.
     */
     virtual HRESULT GetDimOriDefaultSymbInfo( CATSettingInfo* oInfo ) = 0;

     /**
     * Retrieves the Dimension Line UpBase Length attribute.
     */
     virtual HRESULT GetDimLineUpBaseLengthInfo( CATSettingInfo* oInfo ) = 0;

     /**
     * Retrieves the Dimension Line UpBase Angle attribute.
     */
     virtual HRESULT GetDimLineUpBaseAngleInfo( CATSettingInfo* oInfo ) = 0;

     /**
     * Retrieves the Dimension Line Up Stack attribute.
     */
     virtual HRESULT GetDimLineUpStackInfo( CATSettingInfo* oInfo ) = 0;

     /**
     * Retrieves the Dimension Line Up Cumul attribute.
     */
     virtual HRESULT GetDimLineUpCumulInfo( CATSettingInfo* oInfo ) = 0;

     /**
     * Retrieves the Dimension Line Up Funnel attribute.
     */
     virtual HRESULT GetDimLineUpFunnelInfo( CATSettingInfo* oInfo ) = 0;

     /**
     * Retrieves the Dimension Manual Positionning attribute.
     */
     virtual HRESULT GetDimManualPositionningInfo( CATSettingInfo* oInfo ) = 0;

     /**
     * Retrieves the Dimension Constant Offset attribute.
     */
     virtual HRESULT GetDimConstantOffsetInfo( CATSettingInfo* oInfo ) = 0;

     /**
     * Retrieves the Dimension Line Posistion Value attribute.
     */
     virtual HRESULT GetDimLinePosValueInfo( CATSettingInfo* oInfo ) = 0;

     /**
     * Retrieves the Dimension Snapping attribute.
     */
     virtual HRESULT GetDimSnappingInfo( CATSettingInfo* oInfo ) = 0;

     /**
     * Retrieves the Dimension Move Sub Part attribute.
     */
     virtual HRESULT GetDimMoveSubPartInfo( CATSettingInfo* oInfo ) = 0;

     /**
     * Retrieves the Dimension Configure Snapping attribute.
     */
     virtual HRESULT GetDimConfigureSnappingInfo( CATSettingInfo* oInfo ) = 0;

     /**
     * Retrieves the Dimension Create On Center or Edge attribute.
     */
     virtual HRESULT GetDimCreateOnInfo( CATSettingInfo* oInfo ) = 0;

     /**
     * Retrieves the general tolerance class attribute.
     */
     virtual HRESULT GetGeneralTolClassInfo( CATSettingInfo* oInfo ) = 0;

     /**
     * Retrieves the general tolerance class attribute.
     */
     virtual HRESULT GetAngulaireGeneralTolClassInfo( CATSettingInfo* oInfo ) = 0;

     /**
     * Retrieves the Body Hide In Capture attribute.
     */
     virtual HRESULT GetBodyHideInCaptureInfo( CATSettingInfo* oInfo ) = 0;

     /**
     * Retrieves the parameter.
     */
     virtual HRESULT GetAttInfo( const char* ipSettingName, CATSettingInfo* oInfo ) = 0;

    /**
     * Locks or unlocks the Non Semantic Allways Upgrade for general tolerance attribute.
     */
     virtual HRESULT SetNonSemanticAllwaysUpgradeGeneralTolLock( 
                                                     unsigned char iLocked ) = 0;

    /** 
     * Locks or unlocks the Non Semantic Allways Upgrade parameter.
     */
     virtual HRESULT SetNonSemanticAllwaysUpgradeLock( unsigned char iLocked ) = 0;

    /** 
     * Locks or unlocks the Non Semantic TolAllowed parameter.
     */
     virtual HRESULT SetNonSemanticTolAllowedLock( unsigned char iLocked ) = 0;

    /** 
     * Locks or unlocks the Non Semantic Dim Allowed parameter.
     */
     virtual HRESULT SetNonSemanticDimAllowedLock( unsigned char iLocked ) = 0;

    /** 
     * Locks or unlocks the Noa Creation parameter.
     */
     virtual HRESULT SetNoaCreationLock( unsigned char iLocked ) = 0;

    /** 
     * Locks or unlocks the Non Semantic Marked parameter.
     */
     virtual HRESULT SetNonSemanticMarkedLock( unsigned char iLocked ) = 0;

    /** 
     * Locks or unlocks the Select Published Geometry parameter.
     */
     virtual HRESULT SetSelectPublishedGeometryLock( unsigned char iLocked ) = 0;

    /** 
     * Locks or unlocks the rotation snap angle parameter.
     */
     virtual HRESULT SetRotationSnapAngleLock( unsigned char iLocked ) = 0;

     /** 
     * Locks or unlocks the rotation snap auto parameter.
     */
     virtual HRESULT SetRotationSnapAutoLock( unsigned char iLocked ) = 0;

     /** 
     * Locks or unlocks the Parameters In Tree parameter.
     */
     virtual HRESULT SetParametersInTreeLock( unsigned char iLocked ) = 0;

     /** 
     * Locks or unlocks the Shifted Profile parameter.
     */
     virtual HRESULT SetShiftedProfileLock( unsigned char iLocked ) = 0;

     /** 
     * Locks or unlocks the HighlightDef Annot parameter.
     */
     virtual HRESULT SetHighlightDefAnnotLock( unsigned char iLocked ) = 0;

    /**
     * Locks or unlocks the DimORunCre attribute.
     */
     virtual HRESULT SetDimORunCreLock( unsigned char iLocked ) = 0;

    /**
     * Locks or unlocks the DimORunMod attribute.
     */
     virtual HRESULT SetDimORunModLock( unsigned char iLocked ) = 0;

    /**
     * Locks or unlocks the DimBlankingCre attribute.
     */
     virtual HRESULT SetDimBlankingCreLock( unsigned char iLocked ) = 0;

    /**
     * Locks or unlocks the DimBlankingMod attribute.
     */
     virtual HRESULT SetDimBlankingModLock( unsigned char iLocked ) = 0;

    /**
     * Locks or unlocks the DimBeforeCre attribute.
     */
     virtual HRESULT SetDimBeforeCreLock( unsigned char iLocked ) = 0;

    /**
     * Locks or unlocks the DimBeforeMod attribute.
     */
     virtual HRESULT SetDimBeforeModLock( unsigned char iLocked ) = 0;

    /**
     * Locks or unlocks the DimAfterCre attribute.
     */
     virtual HRESULT SetDimAfterCreLock( unsigned char iLocked ) = 0;

    /**
     * Locks or unlocks the DimAfterMod attribute.
     */
     virtual HRESULT SetDimAfterModLock( unsigned char iLocked ) = 0;

    /**
     * Locks or unlocks the DimMoveValueCre attribute.
     */
     virtual HRESULT SetDimMoveValueCreLock( unsigned char iLocked ) = 0;

    /**
     * Locks or unlocks the DimMoveValueMod attribute.
     */
     virtual HRESULT SetDimMoveValueModLock( unsigned char iLocked ) = 0;

    /**
     * Locks or unlocks the DimMoveDimLineCre attribute.
     */
     virtual HRESULT SetDimMoveDimLineCreLock( unsigned char iLocked ) = 0;

    /**
     * Locks or unlocks the DimMoveDimLineMod attribute.
     */
     virtual HRESULT SetDimMoveDimLineModLock( unsigned char iLocked ) = 0;

      /**
     * Locks or unlocks the DimMove2dPartCre attribute.
     */
     virtual HRESULT SetDimMove2dPartCreLock( unsigned char iLocked ) = 0;

    /**
     * Locks or unlocks the DimMove2dPartMod attribute.
     */
     virtual HRESULT SetDimMove2dPartModLock( unsigned char iLocked ) = 0;


    /**
     * Locks or unlocks the DimMoveLeaderCre attribute.
     * @param iLocked
     *   Input value sets the lock/unlock status of the option.
     * If return code E_FAIL iLocked is not set.
     * If return code S_OK iLocked is set.
     *
     */
     virtual HRESULT SetDimMoveLeaderCreLock( unsigned char iLocked ) = 0;

    /**
     * Locks or unlocks the DimMoveLeaderMod attribute.
     * @param iLocked
     *   Input value sets the lock/unlock status of the option.
     * If return code E_FAIL iLocked is not set.
     * If return code S_OK iLocked is set.
     *
     */
     virtual HRESULT SetDimMoveLeaderModLock( unsigned char iLocked ) = 0;

    /**
     * Locks or unlocks the Dimension Oriented Default Symbol attribute.
     */
     virtual HRESULT SetDimOriDefaultSymbLock( unsigned char iLocked ) = 0;

     /**
     * Locks or unlocks the Dimension Line UpBase Length attribute.
     */
     virtual HRESULT SetDimLineUpBaseLengthLock( unsigned char iLocked ) = 0;

     /**
     * Locks or unlocks the Dimension Line UpBase Angle attribute.
     */
     virtual HRESULT SetDimLineUpBaseAngleLock( unsigned char iLocked ) = 0;

     /**
     * Locks or unlocks the Dimension Line Up Stack attribute.
     */
     virtual HRESULT SetDimLineUpStackLock( unsigned char iLocked ) = 0;

     /**
     * Locks or unlocks the Dimension Line Up Cumul attribute.
     */
     virtual HRESULT SetDimLineUpCumulLock( unsigned char iLocked ) = 0;

     /**
     * Locks or unlocks the Dimension Line Up Funnel attribute.
     */
     virtual HRESULT SetDimLineUpFunnelLock( unsigned char iLocked ) = 0;

     /**
     * Locks or unlocks the Dimension Manual Positionning attribute.
     */
     virtual HRESULT SetDimManualPositionningLock( unsigned char iLocked ) = 0;

     /**
     * Locks or unlocks the Dimension Constant Offset attribute.
     */
     virtual HRESULT SetDimConstantOffsetLock( unsigned char iLocked ) = 0;

     /**
     * Locks or unlocks the Dimension Line Posistion Value attribute.
     */
     virtual HRESULT SetDimLinePosValueLock( unsigned char iLocked ) = 0;

     /**
     * Locks or unlocks the Dimension Snapping attribute.
     */
     virtual HRESULT SetDimSnappingLock( unsigned char iLocked ) = 0;

     /**
     * Locks or unlocks the Dimension Move Sub Part attribute.
     */
     virtual HRESULT SetDimMoveSubPartLock( unsigned char iLocked ) = 0;

     /**
     * Locks or unlocks the Dimension Configure Snapping attribute.
     */
     virtual HRESULT SetDimConfigureSnappingLock( unsigned char iLocked ) = 0;

     /**
     * Locks or unlocks the Dimension Create On Center or Edge attribute.
     */
     virtual HRESULT SetDimCreateOnLock( unsigned char iLocked ) = 0;

     /**
     * Locks or unlocks the general tolerance class attribute.
     */
     virtual HRESULT SetGeneralTolClassLock( unsigned char iLocked ) = 0;

     /**
     * Locks or unlocks the general tolerance class attribute.
     */
     virtual HRESULT SetAngulaireGeneralTolClassLock( unsigned char iLocked ) = 0;

    /**
     * Locks or unlocks the Body Hide In Capture attribute.
     */
     virtual HRESULT SetBodyHideInCaptureLock( unsigned char iLocked ) = 0;

     /**
     * Retrieves the Pattern of section when the sectionning is activate.
     */
     virtual HRESULT GetSectPattern( unsigned char* oState ) = 0;

    /**
     * Sets the Pattern of section when the sectionning is activate attribute.
     */
     virtual HRESULT SetSectPattern( unsigned char iState ) = 0;

    /** 
     * Retrieves information about the Pattern of section when the sectionning is activate 
       setting parameter value.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSectPatternInfo( CATSettingInfo* oInfo ) = 0;

    /** 
     * Locks or unlocks the Pattern of section when the sectionning is activate
       setting parameter value.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSectPatternLock( unsigned char iLocked ) = 0;

     /**
    * Retrieves the Display Alphabetic Order attribute.
    */
    virtual HRESULT GetAlphabeticOrder( unsigned char* oState ) = 0;

    /**
     * Sets the Display Alphabetic Order attribute.
     */
     virtual HRESULT SetAlphabeticOrder( unsigned char iState ) = 0;

    /** 
     * Retrieves information about the Display Alphabetic Order attribute
       setting parameter value.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetAlphabeticOrderInfo( CATSettingInfo* oInfo ) = 0;

    /** 
     * Locks or unlocks the Display Alphabetic Order attribute
       setting parameter value.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetAlphabeticOrderLock( unsigned char iLocked ) = 0;

     /** 
     * Locks or unlocks the parameter.
     */
     virtual HRESULT SetAttLock( const char* ipSettingName, unsigned char iLocked ) = 0;


     /** Sets the DimLineUpOffsetToRefLength attribute. */
     virtual HRESULT SetDimLineUpOffsetToRefLength(const double &oVal) = 0;
     /** Retrieves the DimLineUpOffsetToRefLength attribute. */
     virtual HRESULT GetDimLineUpOffsetToRefLength(double &oVal) = 0;
     /** Retrieves information about the DimLineUpOffsetToRefLength attribute */
     virtual HRESULT GetDimLineUpOffsetToRefLengthInfo(CATSettingInfo *oInfo) = 0;
     /** Locks or unlocks the DimLineUpOffsetToRefLength attribute */
     virtual HRESULT SetDimLineUpOffsetToRefLengthLock(unsigned char iLocked) = 0;

     /** Sets the DimLineUpOffsetToRefAngle attribute. */
     virtual HRESULT SetDimLineUpOffsetToRefAngle(const double &oVal) = 0;
     /** Retrieves the DimLineUpOffsetToRefAngle attribute. */
     virtual HRESULT GetDimLineUpOffsetToRefAngle(double &oVal) = 0;
     /** Retrieves information about the DimLineUpOffsetToRefAngle attribute */
     virtual HRESULT GetDimLineUpOffsetToRefAngleInfo(CATSettingInfo *oInfo) = 0;
     /** Locks or unlocks the DimLineUpOffsetToRefAngle attribute */
     virtual HRESULT SetDimLineUpOffsetToRefAngleLock(unsigned char iLocked) = 0;

     /** Sets the DimLineUpOffsetBetDimLength attribute. */
     virtual HRESULT SetDimLineUpOffsetBetDimLength(const double &oVal) = 0;
     /** Retrieves the DimLineUpOffsetBetDimLength attribute. */
     virtual HRESULT GetDimLineUpOffsetBetDimLength(double &oVal) = 0;
     /** Retrieves information about the DimLineUpOffsetBetDimLength attribute */
     virtual HRESULT GetDimLineUpOffsetBetDimLengthInfo(CATSettingInfo *oInfo) = 0;
     /** Locks or unlocks the DimLineUpOffsetBetDimLength attribute */
     virtual HRESULT SetDimLineUpOffsetBetDimLengthLock(unsigned char iLocked) = 0;

     /** Sets the DimLineUpOffsetBetDimAngle attribute. */
     virtual HRESULT SetDimLineUpOffsetBetDimAngle(const double &oVal) = 0;
     /** Retrieves the DimLineUpOffsetBetDimAngle attribute. */
     virtual HRESULT GetDimLineUpOffsetBetDimAngle(double &oVal) = 0;
     /** Retrieves information about the DimLineUpOffsetBetDimAngle attribute */
     virtual HRESULT GetDimLineUpOffsetBetDimAngleInfo(CATSettingInfo *oInfo) = 0;
     /** Locks or unlocks the DimLineUpOffsetBetDimAngle attribute  */
     virtual HRESULT SetDimLineUpOffsetBetDimAngleLock(unsigned char iLocked) = 0;

    /** Sets the CATFTAChamferGeneralTolClass attribute.
     * @param iValue
     *  The value that is set
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetCATFTAChamferGeneralTolClass( const int &iValue  ) = 0;
    /** Retrieves the CATFTAChamferGeneralTolClass attribute.
     * @param ioValue
     *  The value that is retrieved
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetCATFTAChamferGeneralTolClass( int &oValue  ) = 0;
     /**
     * Retrieves the state of the AnalysisDisplayMode parameter.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetCATFTAChamferGeneralTolClassInfo( CATSettingInfo* oInfo ) = 0;
    /** 
     * Locks or unlocks the CATFTAChamferGeneralTolClass parameter.
     * <br><b>Role</b>: Locks or unlocks the CATFTAChamferGeneralTolClass parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetCATFTAChamferGeneralTolClassLock( unsigned char iLocked ) = 0;

    /** Sets the CATFTAUseLastTolerances attribute.
     * @param iValue
     *  The value that is set
     *	<b>Legal values</b>:
     *	<br><tt>True :</tt>   to set the parameter.
     * 	<br><tt>False.:</tt>   to unset the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetCATFTAUseLastTolerances(const boolean &iValue) = 0;
     /** Retrieves the PreventViewGeomUpgrade attribute.
     * @param ioValue
     *  The value that is retrieved
     *	<b>Legal values</b>:
     *	<br><tt>True :</tt>   the parameter.is set
     * 	<br><tt>False.:</tt>   the parameter.is unset
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetCATFTAUseLastTolerances(boolean &ioValue) = 0;
    /**
     * Retrieves the state of the CATFTAUseLastTolerances parameter.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetCATFTAUseLastTolerancesInfo(CATSettingInfo *oInfo) = 0;
    /** 
     * Locks or unlocks the CATFTAUseLastTolerances parameter.
     * <br><b>Role</b>: Locks or unlocks the CATFTAUseLastTolerances parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetCATFTAUseLastTolerancesLock(unsigned char iLocked) = 0; 

    /** Sets the CATFTAEdgesColor attribute.
    * @param iValueR
    *  The RValue of the color
    *  <b>Legal values</b>:
    *  <br><tt>0-255</tt>
    * @param iValueG
    *  The GValue of the color
    *  <b>Legal values</b>:
    *  <br><tt>0-255</tt>
    * @param iValueB
    *  The RValue of the color
    *  <b>Legal values</b>:
    *  <br><tt>0-255</tt>
    * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
    */
     virtual HRESULT SetCATFTAEdgesColor(unsigned int iValueR, unsigned int iValueG, unsigned int iValueB) = 0;
    /** Retrieves the CATFTAEdgesColor attribute. 
    * @param oValueR
    *  The RValue of the color
    *  <b>Legal values</b>:
    *  <br><tt>0-255</tt>
    * @param oValueG
    *  The GValue of the color
    *  <b>Legal values</b>:
    *  <br><tt>0-255</tt>
    * @param oValueB
    *  The RValue of the color
    *  <b>Legal values</b>:
    *  <br><tt>0-255</tt>
    * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
    */
     virtual HRESULT GetCATFTAEdgesColor(unsigned int &oValueR,unsigned int &oValueG,unsigned int &oValueB) = 0;
    /**
     * Retrieves the state of the CATFTAEdgesColor parameter.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetCATFTAEdgesColorInfo(CATSettingInfo *oInfo) = 0;
    /** 
     * Locks or unlocks the CATFTAEdgesColor parameter.
     * <br><b>Role</b>: Locks or unlocks the CATFTAEdgesColor parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetCATFTAEdgesColorLock(unsigned char iLocked) = 0;

     /** Sets the CATFTAEdgesLineType attribute.
     * @param iValue
     *  The value that is set
     * @return
     *  <b>Legal values</b>:
     *  <br><tt>S_OK :</tt>   on Success
     *   <br><tt>E_FAIL:</tt>  on failure
    */
     virtual HRESULT SetCATFTAEdgesLineType(const unsigned int &iValue) = 0;
    /** Retrieves the CATFTAEdgesLineType attribute.
     * @param oValue
     *  The value that is retrived
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetCATFTAEdgesLineType(unsigned int &oValue) = 0;
    /**
     * Retrieves the state of the CATFTAEdgesLineType parameter.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetCATFTAEdgesLineTypeInfo(CATSettingInfo *oInfo) = 0;
    /** 
     * Locks or unlocks the CATFTAEdgesLineType parameter.
     * <br><b>Role</b>: Locks or unlocks the CATFTAEdgesLineType parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetCATFTAEdgesLineTypeLock(unsigned char iLocked) = 0;

    /** Sets the CATFTAEdgesThickness attribute.
     * @param iValue
     *  The value that is set
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetCATFTAEdgesThickness(const unsigned int &iValue) = 0;
    /** Retrieves the CATFTAEdgesThickness attribute.
     * @param oValue
     *  The value that is retrieved
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetCATFTAEdgesThickness(unsigned int &oValue) = 0;
    /**
     * Retrieves the state of the CATFTAEdgesThickness parameter.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetCATFTAEdgesThicknessInfo(CATSettingInfo *oInfo) = 0;
    /** 
     * Locks or unlocks the CATFTAEdgesThickness parameter.
     * <br><b>Role</b>: Locks or unlocks the CATFTAEdgesThickness parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetCATFTAEdgesThicknessLock(unsigned char iLocked) = 0;

   /** Retrieves the CATFTAEdgesThickness attribute.
     * @param iValue [in]
     *   The value that is Set.
     *
     * @return
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetCATFTAUFAutoTolerancing(const CATUnicodeString &iValue) = 0;
    /** Retrieves the CATFTAEdgesThickness attribute.
     * @param oValue [out]
     *  The value that is retrived
     *
     * @return
     *  <br><tt>S_OK :</tt>   on Success
     *  <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetCATFTAUFAutoTolerancing(CATUnicodeString &oValue) = 0;
    /**
     * Retrieves the state of the CATFTAUFAutoTolerancing parameter.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetCATFTAUFAutoTolerancingInfo(CATSettingInfo *oInfo) = 0;
    /** 
     * Locks or unlocks the CATFTAEdgesThickness parameter.
     * <br><b>Role</b>: Locks or unlocks the CATFTAEdgesThickness parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetCATFTAUFAutoTolerancingLock(unsigned char iLocked) = 0;

    /** Retrieves the AnalysisDisplayMode attribute.
     * @param ioValue
     *  The value that is retrieved
     *	<b>Legal values</b>:
     *	<br><tt>True :</tt>   the parameter.is set
     * 	<br><tt>False.:</tt>   the parameter.is unset
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetAnalysisDisplayMode(boolean &ioValue) = 0;
        /** Sets the AnalysisDisplayMode attribute.
     * @param iValue
     *  The value that is set
     *	<b>Legal values</b>:
     *	<br><tt>True :</tt>   to set the parameter.
     * 	<br><tt>False.:</tt>   to unset the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetAnalysisDisplayMode(const boolean &iValue) = 0;
    /**
     * Retrieves the state of the AnalysisDisplayMode parameter.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetAnalysisDisplayModeInfo(CATSettingInfo *oInfo) = 0;
    /** 
     * Locks or unlocks the AnalysisDisplayMode parameter.
     * <br><b>Role</b>: Locks or unlocks the AnalysisDisplayMode parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetAnalysisDisplayModeLock(unsigned char iLocked) = 0;

    /** Retrieves the AnnotDimOnDeletedGeom attribute.
     * @param ioValue
     *  The value that is retrieved
     *	<b>Legal values</b>:
     *	<br><tt>True :</tt>   the parameter.is set
     * 	<br><tt>False.:</tt>   the parameter.is unset
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetAnnotDimOnDeletedGeom(boolean &ioValue) = 0;
        /** Sets the AnnotDimOnDeletedGeom attribute.
     * @param iValue
     *  The value that is set
     *	<b>Legal values</b>:
     *	<br><tt>True :</tt>   to set the parameter.
     * 	<br><tt>False.:</tt>   to unset the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetAnnotDimOnDeletedGeom(const boolean &iValue) = 0;
    /**
     * Retrieves the state of the AnnotDimOnDeletedGeom parameter.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetAnnotDimOnDeletedGeomInfo(CATSettingInfo *oInfo) = 0;
    /** 
     * Locks or unlocks the AnnotDimOnDeletedGeom parameter.
     * <br><b>Role</b>: Locks or unlocks the AnnotDimOnDeletedGeom parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetAnnotDimOnDeletedGeomLock(unsigned char iLocked) = 0;
    /** Retrieves the AnnotDimOnDeletedGeomColor attribute. 
    * @param oValueR
    *  The RValue of the color
    *  <b>Legal values</b>:
    *  <br><tt>0-255</tt>
    * @param oValueG
    *  The GValue of the color
    *  <b>Legal values</b>:
    *  <br><tt>0-255</tt>
    * @param oValueB
    *  The RValue of the color
    *  <b>Legal values</b>:
    *  <br><tt>0-255</tt>
    * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
    */
    virtual HRESULT GetAnnotDimOnDeletedGeomColor(int &oValueR, int &oValueG, int &oValueB) = 0;
   /** Sets the AnnotDimOnDeletedGeomColor attribute.
    * @param iValueR
    *  The RValue of the color
    *  <b>Legal values</b>:
    *  <br><tt>0-255</tt>
    * @param iValueG
    *  The GValue of the color
    *  <b>Legal values</b>:
    *  <br><tt>0-255</tt>
    * @param iValueB
    *  The RValue of the color
    *  <b>Legal values</b>:
    *  <br><tt>0-255</tt>
    * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
    */
    virtual HRESULT SetAnnotDimOnDeletedGeomColor(int iValueR, int iValueG, int iValueB) = 0;
    /**
     * Retrieves the state of the AnnotDimOnDeletedGeomColor parameter.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetAnnotDimOnDeletedGeomColorInfo(CATSettingInfo *oInfo) = 0;
    /** 
     * Locks or unlocks the AnnotDimOnDeletedGeomColor parameter.
     * <br><b>Role</b>: Locks or unlocks the AnnotDimOnDeletedGeomColor parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetAnnotDimOnDeletedGeomColorLock(unsigned char iLocked) = 0;
   /** Retrieves the AnnotDimOnUnloadedGeom attribute.
     * @param ioValue
     *  The value that is retrieved
     *	<b>Legal values</b>:
     *	<br><tt>True :</tt>   the parameter.is set
     * 	<br><tt>False.:</tt>   the parameter.is unset
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetAnnotDimOnUnloadedGeom(boolean &ioValue) = 0;
   /** Sets the AnnotDimOnUnloadedGeom attribute.
     * @param iValue
     *  The value that is set
     *	<b>Legal values</b>:
     *	<br><tt>True :</tt>   to set the parameter.
     * 	<br><tt>False.:</tt>   to unset the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetAnnotDimOnUnloadedGeom(const boolean &iValue) = 0;
    /**
     * Retrieves the state of the AnnotDimOnUnloadedGeom parameter.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetAnnotDimOnUnloadedGeomInfo(CATSettingInfo *oInfo) = 0;
    /** 
     * Locks or unlocks the AnnotDimOnUnloadedGeom parameter.
     * <br><b>Role</b>: Locks or unlocks the AnnotDimOnUnloadedGeom parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetAnnotDimOnUnloadedGeomLock(unsigned char iLocked) = 0;
    /** Retrieves the AnnotDimOnUnloadedGeomColor attribute. 
    * @param oValueR
    *  The RValue of the color
    *  <b>Legal values</b>:
    *  <br><tt>0-255</tt>
    * @param oValueG
    *  The GValue of the color
    *  <b>Legal values</b>:
    *  <br><tt>0-255</tt>
    * @param oValueB
    *  The RValue of the color
    *  <b>Legal values</b>:
    *  <br><tt>0-255</tt>
    * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
    */
    virtual HRESULT GetAnnotDimOnUnloadedGeomColor(int &oValueR,  int &oValueG,  int &oValueB) = 0;
    /** Sets the AnnotDimOnUnloadedGeomColor attribute.
    * @param iValueR
    *  The RValue of the color
    *  <b>Legal values</b>:
    *  <br><tt>0-255</tt>
    * @param iValueG
    *  The GValue of the color
    *  <b>Legal values</b>:
    *  <br><tt>0-255</tt>
    * @param iValueB
    *  The RValue of the color
    *  <b>Legal values</b>:
    *  <br><tt>0-255</tt>
    * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
    */
    virtual HRESULT SetAnnotDimOnUnloadedGeomColor( int iValueR,  int iValueG,  int iValueB) = 0;
    /**
     * Retrieves the state of the AnnotDimOnUnloadedGeomColor parameter.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetAnnotDimOnUnloadedGeomColorInfo(CATSettingInfo *oInfo) = 0;
    /** 
     * Locks or unlocks the AnnotDimOnUnloadedGeomColor parameter.
     * <br><b>Role</b>: Locks or unlocks the AnnotDimOnUnloadedGeomColor parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetAnnotDimOnUnloadedGeomColorLock(unsigned char iLocked) = 0;

    /** Retrieves the AnnotDimInvalid attribute.
     * @param ioValue
     *  The value that is retrieved
     *	<b>Legal values</b>:
     *	<br><tt>True :</tt>   the parameter.is set
     * 	<br><tt>False.:</tt>   the parameter.is unset
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetAnnotDimInvalid(boolean &ioValue) = 0;
     /** Sets the AnnotDimInvalid attribute.
     * @param iValue
     *  The value that is set
     *	<b>Legal values</b>:
     *	<br><tt>True :</tt>   to set the parameter.
     * 	<br><tt>False.:</tt>   to unset the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetAnnotDimInvalid(const boolean &iValue) = 0;
    /**
     * Retrieves the state of the AnnotDimInvalid parameter.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetAnnotDimInvalidInfo(CATSettingInfo *oInfo) = 0;
    /** 
     * Locks or unlocks the AnnotDimInvalid parameter.
     * <br><b>Role</b>: Locks or unlocks the AnnotDimInvalid parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetAnnotDimInvalidLock(unsigned char iLocked) = 0;
    /** Retrieves the AnnotDimInvalidColor attribute. 
    * @param oValueR
    *  The RValue of the color
    *  <b>Legal values</b>:
    *  <br><tt>0-255</tt>
    * @param oValueG
    *  The GValue of the color
    *  <b>Legal values</b>:
    *  <br><tt>0-255</tt>
    * @param oValueB
    *  The RValue of the color
    *  <b>Legal values</b>:
    *  <br><tt>0-255</tt>
    * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
    */
    virtual HRESULT GetAnnotDimInvalidColor(int &oValueR,  int &oValueG,  int &oValueB) = 0;
   /** Sets the AnnotDimInvalidColor attribute.
    * @param iValueR
    *  The RValue of the color
    *  <b>Legal values</b>:
    *  <br><tt>0-255</tt>
    * @param iValueG
    *  The GValue of the color
    *  <b>Legal values</b>:
    *  <br><tt>0-255</tt>
    * @param iValueB
    *  The RValue of the color
    *  <b>Legal values</b>:
    *  <br><tt>0-255</tt>
    * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
    */
    virtual HRESULT SetAnnotDimInvalidColor( int iValueR,  int iValueG,  int iValueB) = 0;
    /**
     * Retrieves the state of the AnnotDimOnUnloadedGeomColor parameter.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetAnnotDimInvalidColorInfo(CATSettingInfo *oInfo) = 0;
    /** 
     * Locks or unlocks the AnnotDimOnUnloadedGeomColor parameter.
     * <br><b>Role</b>: Locks or unlocks the AnnotDimOnUnloadedGeomColor parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetAnnotDimInvalidColorLock(unsigned char iLocked) = 0;
     /** Retrieves the TrueDimension attribute.
     * @param ioValue
     *  The value that is retrieved
     *	<b>Legal values</b>:
     *	<br><tt>True :</tt>   the parameter.is set
     * 	<br><tt>False.:</tt>   the parameter.is unset
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetTrueDimension(boolean &ioValue) = 0;
        /** Sets the TrueDimension attribute.
     * @param iValue
     *  The value that is set
     *	<b>Legal values</b>:
     *	<br><tt>True :</tt>   to set the parameter.
     * 	<br><tt>False.:</tt>   to unset the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetTrueDimension(const boolean &iValue) = 0;
    /**
     * Retrieves the state of the TrueDimension parameter.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetTrueDimensionInfo(CATSettingInfo *oInfo) = 0;
    /** 
     * Locks or unlocks the TrueDimension parameter.
     * <br><b>Role</b>: Locks or unlocks the TrueDimension parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetTrueDimensionLock(unsigned char iLocked) = 0;
    /** Retrieves the TrueDimensionColor attribute. 
    * @param oValueR
    *  The RValue of the color
    *  <b>Legal values</b>:
    *  <br><tt>0-255</tt>
    * @param oValueG
    *  The GValue of the color
    *  <b>Legal values</b>:
    *  <br><tt>0-255</tt>
    * @param oValueB
    *  The RValue of the color
    *  <b>Legal values</b>:
    *  <br><tt>0-255</tt>
    * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
    */
    virtual HRESULT GetTrueDimensionColor( int &oValueR,  int &oValueG,  int &oValueB) = 0;
   /** Sets the TrueDimensionColor attribute.
    * @param iValueR
    *  The RValue of the color
    *  <b>Legal values</b>:
    *  <br><tt>0-255</tt>
    * @param iValueG
    *  The GValue of the color
    *  <b>Legal values</b>:
    *  <br><tt>0-255</tt>
    * @param iValueB
    *  The RValue of the color
    *  <b>Legal values</b>:
    *  <br><tt>0-255</tt>
    * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
    */
    virtual HRESULT SetTrueDimensionColor( int iValueR,  int iValueG,  int iValueB) = 0;
    /**
     * Retrieves the state of the TrueDimensionColor parameter.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetTrueDimensionColorInfo(CATSettingInfo *oInfo) = 0;
    /** 
     * Locks or unlocks the TrueDimensionColor parameter.
     * <br><b>Role</b>: Locks or unlocks the TrueDimensionColor parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetTrueDimensionColorLock(unsigned char iLocked) = 0;

    /** Retrieves the AnnotOnZeroZSetting attribute.
     * @param ioValue
     *  The value that is retrieved
     *	<b>Legal values</b>:
     *	<br><tt>True :</tt>   the parameter.is set
     * 	<br><tt>False.:</tt>   the parameter.is unset
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetAnnotOnZeroZSetting(boolean &ioValue) = 0;
      /** Sets the AnnotOnZeroZSetting attribute.
     * @param iValue
     *  The value that is set
     *	<b>Legal values</b>:
     *	<br><tt>True :</tt>   to set the parameter.
     * 	<br><tt>False.:</tt>   to unset the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetAnnotOnZeroZSetting(const boolean &iValue) = 0;
    /**
     * Retrieves the state of the AnnotOnZeroZSetting parameter.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT GetAnnotOnZeroZSettingInfo(CATSettingInfo *oInfo) = 0;
    /** 
     * Locks or unlocks the AnnotOnZeroZSetting parameter.
     * <br><b>Role</b>: Locks or unlocks the AnnotOnZeroZSetting parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
    virtual HRESULT SetAnnotOnZeroZSettingLock(unsigned char iLocked) = 0;
};
#endif
