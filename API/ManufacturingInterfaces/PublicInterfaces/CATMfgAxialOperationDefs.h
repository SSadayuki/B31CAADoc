// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
#include "CATIAV5Level.h"

#ifndef __CATMfgAxialOperationDefs_h__
#define __CATMfgAxialOperationDefs_h__

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

//
// Only Manufacturing can use these strings
//
#include "MfgItfEnv.h"
class CATUnicodeString;

//-----------------------------------------------------------------------------
// Basic numerical constants.
//-----------------------------------------------------------------------------
// Axial operation precision.
// CATAxialEps = 1.e-6
ExportedByMfgItfEnv extern const double CATAxialEps;

// Liste des objets disponibles  Mfg ( Manufacturing ) 
// --------------------------------------------------------------- 

//OTJ - "POWER Option in Operation" Enhancement
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_MOToolPower;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_ToolDefault;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_Fixed;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_Powered;
//OTJ - End
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_ClearTip;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_SecondClearTip;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_RetractClearTip;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_ChamferDiameter;

ExportedByMfgItfEnv extern const CATUnicodeString MfgDecDepthOfCut;
ExportedByMfgItfEnv extern const CATUnicodeString MfgRetractOffset;
ExportedByMfgItfEnv extern const CATUnicodeString MfgDecrementRate;
ExportedByMfgItfEnv extern const CATUnicodeString MfgDecrementLimit;

// Depth
ExportedByMfgItfEnv extern const CATUnicodeString MfgDepth;
ExportedByMfgItfEnv extern const CATUnicodeString MfgDepthMode;

ExportedByMfgItfEnv extern const CATUnicodeString MfgDepthDefault;
ExportedByMfgItfEnv extern const CATUnicodeString MfgDepthDistance;
ExportedByMfgItfEnv extern const CATUnicodeString MfgDepthDiameter;
ExportedByMfgItfEnv extern const CATUnicodeString MfgDepthShoulder;
ExportedByMfgItfEnv extern const CATUnicodeString MfgDepthTip;
ExportedByMfgItfEnv extern const CATUnicodeString MfgDepthBreakThrough;

ExportedByMfgItfEnv extern const CATUnicodeString Mfg_DepthTip;  
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_DepthOffset;  
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_DepthDiameter;  
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_DepthShoulder;  
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_DepthDistance;  
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_DepthBreakThrough; 
//


// Spot Depth
ExportedByMfgItfEnv extern const CATUnicodeString MfgSpotDepth;
ExportedByMfgItfEnv extern const CATUnicodeString MfgSpotDepthMode;

ExportedByMfgItfEnv extern const CATUnicodeString MfgSpotDepthDefault;
ExportedByMfgItfEnv extern const CATUnicodeString MfgSpotDepthDistance;
ExportedByMfgItfEnv extern const CATUnicodeString MfgSpotDepthDiameter;
ExportedByMfgItfEnv extern const CATUnicodeString MfgSpotDepthShoulder;
ExportedByMfgItfEnv extern const CATUnicodeString MfgSpotDepthTip;

ExportedByMfgItfEnv extern const CATUnicodeString Mfg_SpotTip;  
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_SpotOffset;  
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_SpotDiameter;  
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_SpotShoulder;  
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_SpotDistance;  
//



// Plunge 
ExportedByMfgItfEnv extern const CATUnicodeString MfgPlunge;
ExportedByMfgItfEnv extern const CATUnicodeString MfgAxialPlungeMode;

ExportedByMfgItfEnv extern const CATUnicodeString MfgPlungeDiameter;
ExportedByMfgItfEnv extern const CATUnicodeString MfgPlungeDistance;
ExportedByMfgItfEnv extern const CATUnicodeString MfgPlungeDefault;
ExportedByMfgItfEnv extern const CATUnicodeString MfgPlungeShoulder;
ExportedByMfgItfEnv extern const CATUnicodeString MfgPlungeTip;

ExportedByMfgItfEnv extern const CATUnicodeString Mfg_PlungeTip;  
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_PlungeOffset;  
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_PlungeDiameter;  
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_PlungeShoulder;  
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_PlungeDistance;  
// Enables to deactivate plunge for chamfering
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_Plunge_For_Chamfering;
//



// Dwell
ExportedByMfgItfEnv extern const CATUnicodeString MfgDwell;
ExportedByMfgItfEnv extern const CATUnicodeString MfgDwellMode;


ExportedByMfgItfEnv extern const CATUnicodeString MfgDwellTime;
ExportedByMfgItfEnv extern const CATUnicodeString MfgDwellRound;
ExportedByMfgItfEnv extern const CATUnicodeString MfgDwellRoundDouble;
ExportedByMfgItfEnv extern const CATUnicodeString MfgDwellDefault;

ExportedByMfgItfEnv extern const  CATUnicodeString Mfg_Dwell;
ExportedByMfgItfEnv extern const  CATUnicodeString Mfg_DwellRounds;
ExportedByMfgItfEnv extern const  CATUnicodeString Mfg_DwellRoundsDouble;
ExportedByMfgItfEnv extern const  CATUnicodeString Mfg_DwellTime;
//



// Lift
ExportedByMfgItfEnv extern const CATUnicodeString MfgLift;
ExportedByMfgItfEnv extern const CATUnicodeString MfgLiftMode;


ExportedByMfgItfEnv extern const CATUnicodeString MfgLiftOff;
ExportedByMfgItfEnv extern const CATUnicodeString MfgNoLiftOff;
ExportedByMfgItfEnv extern const CATUnicodeString MfgLiftOffDistance;  
ExportedByMfgItfEnv extern const CATUnicodeString MfgLiftOffPolar;  

ExportedByMfgItfEnv extern const CATUnicodeString Mfg_LiftX;  
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_LiftY;  
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_LiftZ;  
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_LiftAngle;  
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_LiftWay;  
//


// Delta Depth
ExportedByMfgItfEnv extern const CATUnicodeString MfgDeltaDepth;
ExportedByMfgItfEnv extern const CATUnicodeString MfgDeltaDepthMode;


ExportedByMfgItfEnv extern const CATUnicodeString MfgDeltaDepthDefault;
ExportedByMfgItfEnv extern const CATUnicodeString MfgDeltaDepthDistance;
ExportedByMfgItfEnv extern const CATUnicodeString MfgDeltaDepthDiameter;
ExportedByMfgItfEnv extern const CATUnicodeString MfgDeltaDepthShoulder;
ExportedByMfgItfEnv extern const CATUnicodeString MfgDeltaDepthTip;
ExportedByMfgItfEnv extern const CATUnicodeString MfgDeltaDepthIncrement;

ExportedByMfgItfEnv extern const CATUnicodeString Mfg_DeltaTip;  
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_DeltaOffset;  
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_DeltaDiameter;  
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_DeltaShoulder;  
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_DeltaDistance;  
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_DeltaIncrement; 
//


// Activity Compensation
//Ces sont les choix de compensateurs outils visibles dans le panel Strategy de l'activite.
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_FirstCompensation;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_SecondCompensation;

#ifdef CATIAV5R6
// attribut Spiral Mode for CircularMilling
ExportedByMfgItfEnv extern const CATUnicodeString MfgCircularMillingMode;

ExportedByMfgItfEnv extern const CATUnicodeString MfgCircularMillingStandard;
ExportedByMfgItfEnv extern const CATUnicodeString MfgCircularMillingHelical;

ExportedByMfgItfEnv extern const CATUnicodeString MfgHelix;
ExportedByMfgItfEnv extern const CATUnicodeString MfgHelixMode;

ExportedByMfgItfEnv extern const CATUnicodeString MfgHelixPitch;
ExportedByMfgItfEnv extern const CATUnicodeString MfgHelixAngle;

ExportedByMfgItfEnv extern const CATUnicodeString Mfg_HelixPitch;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_HelixAngle;

ExportedByMfgItfEnv extern const CATUnicodeString MfgCycleOutput;

// Attributs de Machine different (Thread) Depths
ExportedByMfgItfEnv extern const CATUnicodeString MfgResultMachining;
ExportedByMfgItfEnv extern const CATUnicodeString MfgResultThreadMachining;

// Attribut de Machine different Diameters
ExportedByMfgItfEnv extern const CATUnicodeString MfgMachineDifferentDiameters;

// Attribut de Machine Blind / Through
ExportedByMfgItfEnv extern const CATUnicodeString MfgMachineBlindThrough;

// Attribut de Relimitation de l'origine du trou
ExportedByMfgItfEnv extern const CATUnicodeString MfgRelimitHoleOrigin;

// Attribut d'inversion (locale a l'operation) de l'ordonnancement du Pattern
ExportedByMfgItfEnv extern const CATUnicodeString MfgInversePatternOrdering;

// SK5 - "Drill Through Stock" Enhancement
ExportedByMfgItfEnv extern const CATUnicodeString MfgDrillThroughStock;
// SK5 - End

// SK5 - "Spot Drill to Part" Enhancement
ExportedByMfgItfEnv extern const CATUnicodeString MfgSpotDrillToPart;
// SK5 - End
#endif

// CYCLE Syntax management
ExportedByMfgItfEnv extern const CATUnicodeString MfgCycleInstruction;
ExportedByMfgItfEnv extern const CATUnicodeString MfgCycleUserSyntax;
ExportedByMfgItfEnv extern const CATUnicodeString MfgCycleOffInstruction;
ExportedByMfgItfEnv extern const CATUnicodeString MfgCycleOffUserSyntax;

// New CXR17
// Attributes for Thread Milling : Machining Mode, Machining Strategy
ExportedByMfgItfEnv extern const CATUnicodeString MfgThreadMillingMode;
ExportedByMfgItfEnv extern const CATUnicodeString MfgThreadMillingMonoPass;
ExportedByMfgItfEnv extern const CATUnicodeString MfgThreadMillingOptimizedPass;

ExportedByMfgItfEnv extern const CATUnicodeString MfgThreadMillingStrategy;
ExportedByMfgItfEnv extern const CATUnicodeString MfgThreadMillingTopBottom;
ExportedByMfgItfEnv extern const CATUnicodeString MfgThreadMillingBottomTop;

// Point to Point : Mode de Positionnement sur les Drives 
//  1:To / 2:On / 3:Past
ExportedByMfgItfEnv extern const CATUnicodeString MfgPtDrivePosMode;
// Point to Point : Mode d'arret sur les Checks 
//  1:To / 2:On / 3:Past  / 4:TgtDS
ExportedByMfgItfEnv extern const CATUnicodeString MfgPtCheckStopMode;

// nouveaux attributs V5R10 :
// Point to Point : Mode de deplacement relatif Go Delta
ExportedByMfgItfEnv extern const CATUnicodeString MfgPtDeltaMode;

// Valeurs possible pour MfgPtDeltaMode
//  1:Coordinates
ExportedByMfgItfEnv extern const CATUnicodeString MfgPtDeltaDXYZ;
//  2:Horizontal 
ExportedByMfgItfEnv extern const CATUnicodeString MfgPtDeltaDX;
//  3:Vertical 
ExportedByMfgItfEnv extern const CATUnicodeString MfgPtDeltaDY;
//  4:ParallelToLine
ExportedByMfgItfEnv extern const CATUnicodeString MfgPtDeltaParallelLine;
//  5:NormalToLine
ExportedByMfgItfEnv extern const CATUnicodeString MfgPtDeltaNormalLine;
//  6:AngleToLine
ExportedByMfgItfEnv extern const CATUnicodeString MfgPtDeltaAngleLine;

// Point to Point : Distance de deplacement relatif suivant X absolu
ExportedByMfgItfEnv extern const CATUnicodeString MfgPtDeltaX;
// Point to Point : Distance de deplacement relatif suivant Y absolu
ExportedByMfgItfEnv extern const CATUnicodeString MfgPtDeltaY;
// Point to Point : Distance de deplacement relatif suivant Z absolu
ExportedByMfgItfEnv extern const CATUnicodeString MfgPtDeltaZ;
// Point to Point : Distance de deplacement relatif suivant Reference line
ExportedByMfgItfEnv extern const CATUnicodeString MfgPtDeltaDistance;
// Point to Point : Angle de deplacement relatif suivant Reference line
ExportedByMfgItfEnv extern const CATUnicodeString MfgPtDeltaAngle;

// Point to Point : sous-type de Site portant les data specifiques au GoDelta
ExportedByMfgItfEnv extern const CATUnicodeString MfgPtToPtDeltaSite;

// Point to Point : Feature geometrique portant la geometrie liee au motion Position
// (Part / Drive / Check)
ExportedByMfgItfEnv extern const CATUnicodeString MfgPtToPtPDCFeature;

// Point to Point : Feature geometrique portant la geometrie liee au motion GoDelta
ExportedByMfgItfEnv extern const CATUnicodeString MfgPtToPtDeltaFeature;

//DeepHole Drilling
ExportedByMfgItfEnv extern const CATUnicodeString MfgDeepHoleLeadIn;
ExportedByMfgItfEnv extern const CATUnicodeString MfgDeepHoleLeadOut;
ExportedByMfgItfEnv extern const CATUnicodeString MFG_DEEPHOLE_FEED;

ExportedByMfgItfEnv extern const CATUnicodeString MfgDrillingLeadIn;
ExportedByMfgItfEnv extern const CATUnicodeString MfgDrillingLeadOut;
ExportedByMfgItfEnv extern const CATUnicodeString MfgDrillingFeed;

ExportedByMfgItfEnv extern const CATUnicodeString MfgDeepHoleNoRetract;

#endif
