// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================

#ifndef __CATMfgToolConstant_h__
#define __CATMfgToolConstant_h__
/**
* @CAA2Level L1
* @CAA2Usage U3
*/
//
// Only Manufacturing can use these strings
//
#include "MfgItfEnv.h"

class CATUnicodeString;


// Liste des types disponibles sur les outils 
// --------------------------------------------------------------- 
ExportedByMfgItfEnv extern const CATUnicodeString MfgRootTool;

ExportedByMfgItfEnv extern const CATUnicodeString MfgBaseTool;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgBaseTool;

ExportedByMfgItfEnv extern const CATUnicodeString MfgAxialTool;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgAxialTool;

ExportedByMfgItfEnv extern const CATUnicodeString MfgMillTool;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgMillTool;

ExportedByMfgItfEnv extern const CATUnicodeString MfgToolCorrector;

ExportedByMfgItfEnv extern const CATUnicodeString MfgAPTTool;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgAPTTool;

ExportedByMfgItfEnv extern const CATUnicodeString MfgDrillTool;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgDrillTool;

ExportedByMfgItfEnv extern const CATUnicodeString MfgSpotDrillTool;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgSpotDrillTool;

ExportedByMfgItfEnv extern const CATUnicodeString MfgCenterDrillTool;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgCenterDrillTool;

ExportedByMfgItfEnv extern const CATUnicodeString MfgCountersinkTool;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgCountersinkTool;

ExportedByMfgItfEnv extern const CATUnicodeString MfgTapTool;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgTapTool;

ExportedByMfgItfEnv extern const CATUnicodeString MfgMultiDiamDrillTool;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgMultiDiamDrillTool;

ExportedByMfgItfEnv extern const CATUnicodeString MfgTwoSidesChamferingTool;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgTwoSidesChamferingTool;

ExportedByMfgItfEnv extern const CATUnicodeString MfgBoringAndChamferingTool;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgBoringAndChamferingTool;

ExportedByMfgItfEnv extern const CATUnicodeString MfgBoringBarTool;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgBoringBarTool;

ExportedByMfgItfEnv extern const CATUnicodeString MfgReamerTool;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgReamerTool;

ExportedByMfgItfEnv extern const CATUnicodeString MfgTSlotterTool;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgTSlotterTool;

ExportedByMfgItfEnv extern const CATUnicodeString MfgFaceMillTool;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgFaceMillTool;

ExportedByMfgItfEnv extern const CATUnicodeString MfgEndMillTool;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgEndMillTool;

ExportedByMfgItfEnv extern const CATUnicodeString MfgBarrelMillTool;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgBarrelMillTool;
ExportedByMfgItfEnv extern const CATUnicodeString MfgLensMillTool;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgLensMillTool;


ExportedByMfgItfEnv extern const CATUnicodeString MfgConicalMillTool;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgConicalMillTool;

ExportedByMfgItfEnv extern const CATUnicodeString MfgThreadMillTool;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgThreadMillTool;

ExportedByMfgItfEnv extern const CATUnicodeString MfgCounterboreMillTool;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgCounterboreMillTool;

ExportedByMfgItfEnv extern const CATUnicodeString MfgBaseLatheTool     ;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgBaseLatheTool;

ExportedByMfgItfEnv extern const CATUnicodeString MfgExternalTool      ;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgExternalTool;

ExportedByMfgItfEnv extern const CATUnicodeString MfgInternalTool      ;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgInternalTool;

ExportedByMfgItfEnv extern const CATUnicodeString MfgGrooveExternalTool;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgGrooveExternalTool;

ExportedByMfgItfEnv extern const CATUnicodeString MfgGrooveFrontalTool ;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgGrooveFrontalTool;

ExportedByMfgItfEnv extern const CATUnicodeString MfgGrooveInternalTool;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgGrooveInternalTool;

ExportedByMfgItfEnv extern const CATUnicodeString MfgThreadExternalTool;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgThreadExternalTool;

ExportedByMfgItfEnv extern const CATUnicodeString MfgThreadInternalTool;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgThreadInternalTool;


// Liste des attributs disponibles sur les outils 
// --------------------------------------------------------------- 
ExportedByMfgItfEnv extern const CATUnicodeString MfgToolNumber;
ExportedByMfgItfEnv extern const CATUnicodeString MfgCornerRadius;
ExportedByMfgItfEnv extern const CATUnicodeString MfgCornerRadius2;
ExportedByMfgItfEnv extern const CATUnicodeString MfgNominalDiameter;
ExportedByMfgItfEnv extern const CATUnicodeString MfgCuttingLength;
ExportedByMfgItfEnv extern const CATUnicodeString MfgOverallLength;
ExportedByMfgItfEnv extern const CATUnicodeString MfgLength;
ExportedByMfgItfEnv extern const CATUnicodeString MfgEffectiveLength;
ExportedByMfgItfEnv extern const CATUnicodeString MfgBodyDiameter;
ExportedByMfgItfEnv extern const CATUnicodeString MfgToolTipLength;
ExportedByMfgItfEnv extern const CATUnicodeString MfgEntryDiameter;
ExportedByMfgItfEnv extern const CATUnicodeString MfgOutsideDiameter;
ExportedByMfgItfEnv extern const CATUnicodeString MfgCuttingAngle;
ExportedByMfgItfEnv extern const CATUnicodeString MfgTaperAngle;
ExportedByMfgItfEnv extern const CATUnicodeString MfgFlatAngle;
ExportedByMfgItfEnv extern const CATUnicodeString MfgSideRadius;
ExportedByMfgItfEnv extern const CATUnicodeString MfgZLength;
ExportedByMfgItfEnv extern const CATUnicodeString MfgLength1;
ExportedByMfgItfEnv extern const CATUnicodeString MfgLength2;
ExportedByMfgItfEnv extern const CATUnicodeString MfgLengthNominalDiam;
ExportedByMfgItfEnv extern const CATUnicodeString MfgChamferDiameter1;
ExportedByMfgItfEnv extern const CATUnicodeString MfgChamferDiameter2;
ExportedByMfgItfEnv extern const CATUnicodeString MfgNonCuttingDiameter;
ExportedByMfgItfEnv extern const CATUnicodeString MfgMinDiameter;
ExportedByMfgItfEnv extern const CATUnicodeString MfgMaxDiameter;
ExportedByMfgItfEnv extern const CATUnicodeString MfgTipLength;
ExportedByMfgItfEnv extern const CATUnicodeString MfgTipAngle;
ExportedByMfgItfEnv extern const CATUnicodeString MfgTipRadius;
ExportedByMfgItfEnv extern const CATUnicodeString MfgToolAngle;
ExportedByMfgItfEnv extern const CATUnicodeString MfgAngle2;
ExportedByMfgItfEnv extern const CATUnicodeString MfgChamferAngle;
//4 new parameters for Chamfer on T-Slotter
//-------------------------------------------------------
ExportedByMfgItfEnv extern const CATUnicodeString MfgTopDiameter;
ExportedByMfgItfEnv extern const CATUnicodeString MfgBottomDiameter;
ExportedByMfgItfEnv extern const CATUnicodeString MfgTopAngle;
ExportedByMfgItfEnv extern const CATUnicodeString MfgBottomAngle1;
//--------------------------------------------------------

//for Barrel Tool
ExportedByMfgItfEnv extern const CATUnicodeString MfgBarrelRadius;
ExportedByMfgItfEnv extern const CATUnicodeString MfgRadialDistance;
ExportedByMfgItfEnv extern const CATUnicodeString MfgVerticalDistance;
ExportedByMfgItfEnv extern const CATUnicodeString MfgBarrelAngle;
ExportedByMfgItfEnv extern const CATUnicodeString MfgShankLength;

ExportedByMfgItfEnv extern const CATUnicodeString MfgNameBas;
ExportedByMfgItfEnv extern const CATUnicodeString MfgType;
ExportedByMfgItfEnv extern const CATUnicodeString MfgToothMat;
ExportedByMfgItfEnv extern const CATUnicodeString MfgNumberOfFlutes;
ExportedByMfgItfEnv extern const CATUnicodeString MfgToothDes;
ExportedByMfgItfEnv extern const CATUnicodeString MfgToothDesC;
ExportedByMfgItfEnv extern const CATUnicodeString MfgToothMatDes;
ExportedByMfgItfEnv extern const CATUnicodeString MfgToothMatDesC;
ExportedByMfgItfEnv extern const CATUnicodeString MfgToolRakeAngle;
ExportedByMfgItfEnv extern const CATUnicodeString MfgRadialToolRakeAngle;
ExportedByMfgItfEnv extern const CATUnicodeString MfgMaxPlungeAngle;
ExportedByMfgItfEnv extern const CATUnicodeString MfgWayOfRotation;
ExportedByMfgItfEnv extern const CATUnicodeString MfgMachQuality;
ExportedByMfgItfEnv extern const CATUnicodeString MfgComposition;
ExportedByMfgItfEnv extern const CATUnicodeString MfgThreadForm;
ExportedByMfgItfEnv extern const CATUnicodeString MfgThreadClass;
ExportedByMfgItfEnv extern const CATUnicodeString MfgThreadFormDesc;
ExportedByMfgItfEnv extern const CATUnicodeString MfgThreadClassDesc;
ExportedByMfgItfEnv extern const CATUnicodeString MfgNumberOfThread;
ExportedByMfgItfEnv extern const CATUnicodeString MfgPitchOfThread;
ExportedByMfgItfEnv extern const CATUnicodeString MfgPitchOfThreadL;
ExportedByMfgItfEnv extern const CATUnicodeString MfgSizeDesign;
ExportedByMfgItfEnv extern const CATUnicodeString MfgBoreAbility;
ExportedByMfgItfEnv extern const CATUnicodeString MfgMaxMilTime;
ExportedByMfgItfEnv extern const CATUnicodeString MfgMaxMilLength;
ExportedByMfgItfEnv extern const CATUnicodeString MfgCoolantSyntax;
ExportedByMfgItfEnv extern const CATUnicodeString MfgWeightSyntax;

ExportedByMfgItfEnv extern const CATUnicodeString MfgCorrSiteType;
ExportedByMfgItfEnv extern const CATUnicodeString MfgCorrSiteNum;
ExportedByMfgItfEnv extern const CATUnicodeString MfgCorrLengthNum;
ExportedByMfgItfEnv extern const CATUnicodeString MfgCorrRadiusNum;
ExportedByMfgItfEnv extern const CATUnicodeString MfgCorrDiameter;
ExportedByMfgItfEnv extern const CATUnicodeString MfgDefaultCorrPoint;
ExportedByMfgItfEnv extern const CATUnicodeString MfgPossibleCorrPoint;


ExportedByMfgItfEnv extern const CATUnicodeString MfgAPTCutterDiameter;
ExportedByMfgItfEnv extern const CATUnicodeString MfgAPTCutterRadius;
ExportedByMfgItfEnv extern const CATUnicodeString MfgAPTCutterHeight;
ExportedByMfgItfEnv extern const CATUnicodeString MfgAPTCutterHorizontalDistance;
ExportedByMfgItfEnv extern const CATUnicodeString MfgAPTCutterVerticalDistance;
ExportedByMfgItfEnv extern const CATUnicodeString MfgAPTCutterTipAngle;
ExportedByMfgItfEnv extern const CATUnicodeString MfgAPTCutterAngle;

ExportedByMfgItfEnv extern const CATUnicodeString MfgBallType;
ExportedByMfgItfEnv extern const CATUnicodeString MfgNumberOfStages;

ExportedByMfgItfEnv extern const CATUnicodeString MfgISOBarDiameter   ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOBarType       ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOClampingSystem;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOApprAngle     ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOHeight        ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOWidth         ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLength        ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgShankWidth       ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgShankHeight      ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgShankLength1     ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgShankLength2     ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgShankCutWidth    ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgTrailingAngle    ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgLeadingAngle     ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgMaxRecessingDepth;
ExportedByMfgItfEnv extern const CATUnicodeString MfgMaxBoringDepth   ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgBarLength1       ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgBarLength2       ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgBarCutRadius     ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgMinimumDiameter  ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgHolderCapability ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgHandAngle        ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgGaugingAngle     ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgMaxCuttingDepth  ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgMaxCuttingWidth  ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgMaxCuttingDiameter;
ExportedByMfgItfEnv extern const CATUnicodeString MfgMinCuttingDiameter;
ExportedByMfgItfEnv extern const CATUnicodeString MfgKappaR         ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgInsertAngle;
ExportedByMfgItfEnv extern const CATUnicodeString MfgInsertLength;
ExportedByMfgItfEnv extern const CATUnicodeString MfgClearanceAngle;
ExportedByMfgItfEnv extern const CATUnicodeString MfgHandStyle      ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgWeightSyntax;

ExportedByMfgItfEnv extern const CATUnicodeString MfgToolCoreDiameter;

// Liste des valeurs disponibles sur les outils 
// --------------------------------------------------------------- 
ExportedByMfgItfEnv extern const CATUnicodeString MfgHighSpeedSteel;
ExportedByMfgItfEnv extern const CATUnicodeString MfgCoatedHighSpeedSteel;
ExportedByMfgItfEnv extern const CATUnicodeString MfgCarbide;
ExportedByMfgItfEnv extern const CATUnicodeString MfgCoatedCarbide;
ExportedByMfgItfEnv extern const CATUnicodeString MfgRightHand;
ExportedByMfgItfEnv extern const CATUnicodeString MfgLeftHand;
ExportedByMfgItfEnv extern const CATUnicodeString MfgRough;
ExportedByMfgItfEnv extern const CATUnicodeString MfgFinish;
ExportedByMfgItfEnv extern const CATUnicodeString MfgEither;
ExportedByMfgItfEnv extern const CATUnicodeString MfgOther;
ExportedByMfgItfEnv extern const CATUnicodeString MfgOnePiece;
ExportedByMfgItfEnv extern const CATUnicodeString MfgInsertHolder;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg1B;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg2B;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg3B;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg5H;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg6H;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg7H;
ExportedByMfgItfEnv extern const CATUnicodeString MfgMetric;
ExportedByMfgItfEnv extern const CATUnicodeString MfgInch;
ExportedByMfgItfEnv extern const CATUnicodeString MfgThrough;

ExportedByMfgItfEnv extern const CATUnicodeString MfgP1;
ExportedByMfgItfEnv extern const CATUnicodeString MfgP2;
ExportedByMfgItfEnv extern const CATUnicodeString MfgP3;
ExportedByMfgItfEnv extern const CATUnicodeString MfgP4;
ExportedByMfgItfEnv extern const CATUnicodeString MfgP5;
ExportedByMfgItfEnv extern const CATUnicodeString MfgP6;
ExportedByMfgItfEnv extern const CATUnicodeString MfgP7;
ExportedByMfgItfEnv extern const CATUnicodeString MfgP8;
ExportedByMfgItfEnv extern const CATUnicodeString MfgP9;
ExportedByMfgItfEnv extern const CATUnicodeString MfgP9R;

ExportedByMfgItfEnv extern const CATUnicodeString MfgSurface;
ExportedByMfgItfEnv extern const CATUnicodeString MfgTraverse;
ExportedByMfgItfEnv extern const CATUnicodeString MfgBoth;



// NES : Probing Stylus
// ----------------------------------------------------------------------------

// Name

ExportedByMfgItfEnv extern const CATUnicodeString MfgStylusTool;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgStylusTool;

ExportedByMfgItfEnv extern const CATUnicodeString MfgBallStylusTool;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgBallStylusTool;

ExportedByMfgItfEnv extern const CATUnicodeString MfgCylinderStylusTool;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgCylinderStylusTool;

// Attributs 

ExportedByMfgItfEnv extern const CATUnicodeString  MfgStylusCylinderLength;
ExportedByMfgItfEnv extern const CATUnicodeString  MfgStylusBallLengthDown;

ExportedByMfgItfEnv extern const CATUnicodeString  MfgStylusType;
ExportedByMfgItfEnv extern const CATUnicodeString  MfgStylusMaterial;


// ----------------------------------------------------------------------------

#endif
