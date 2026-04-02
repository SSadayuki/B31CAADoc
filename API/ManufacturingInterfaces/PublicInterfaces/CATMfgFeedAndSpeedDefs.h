// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
#include "CATIAV5Level.h"
#ifndef __CATMfgFeedAndSpeedDefs_h__
#define __CATMfgFeedAndSpeedDefs_h__

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

//
// Only Manufacturing can use these strings
//
#include "MfgItfEnv.h"
class CATUnicodeString;


// Liste des objets disponibles  Mfg ( Manufacturing ) 
// --------------------------------------------------------------- 

//*****************************************************************************
//				FEEDS AND SPEEDS
//*****************************************************************************
// Magnitudes
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_LinearSpindleMagnitude;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_AngularSpindleMagnitude;

ExportedByMfgItfEnv extern const CATUnicodeString Mfg_LinearFeedrateMagnitude;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_AngularFeedrateMagnitude;

ExportedByMfgItfEnv extern const CATUnicodeString Mfg_GlobalSpindleMagnitude;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_GlobalSpindleOutput;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_GlobalFeedrateMagnitude;

// Spindle
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_SpindleSpeed;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_SpindleSpeedMode;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_SpindleSpeedValue;

//

// Finishing Spindle
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_FinishingSpindleSpeed;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_FinishingSpindleSpeedMode;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_FinishingSpindleSpeedValue;
//

// Low Spindle
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_LowSpindleSpeed;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_LowSpindleSpeedMode;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_LowSpindleSpeedValue;
//

// Chamfering Spindle
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_ChamferingSpindleSpeed;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_ChamferingSpindleSpeedMode;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_ChamferingSpindleSpeedValue;
//

// Plunge Feedrate
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_PlungeFeedrate;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_PlungeFeedrateMode;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_PlungeFeedrateValue;
//

// Approach Feedrate
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_ApproachFeedrate;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_ApproachFeedrateMode;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_ApproachFeedrateValue;
//


// Machining Feedrate
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_MachiningFeedrate;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_MachiningFeedrateMode;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_MachiningFeedrateValue;
//

// Finishing Feedrate
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_FinishingFeedrate;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_FinishingFeedrateMode;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_FinishingFeedrateValue;
//


// Retract Feedrate
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_RetractFeedrate;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_RetractFeedrateMode;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_RetractFeedrateValue;

// LocalFeedrate
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_LocalFeedrate;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_LocalFeedrateMode;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_LocalFeedrateValue;


#ifdef CATIAV5R6
// Chamfering Feedrate
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_ChamferingFeedrate;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_ChamferingFeedrateMode;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_ChamferingFeedrateValue;
#endif

#ifdef CATIAV5R7
// Lathe Machining Feedrate
ExportedByMfgItfEnv extern const CATUnicodeString MfgLatheMachiningFeedrate;
ExportedByMfgItfEnv extern const CATUnicodeString MfgLatheMachiningFeedrateMode;
ExportedByMfgItfEnv extern const CATUnicodeString MfgLatheMachiningFeedrateValue;
#endif

#ifdef CATIAV5R10
// Lathe RAPID Feedrate
ExportedByMfgItfEnv extern const CATUnicodeString MfgLatheRapidFeedrate;
ExportedByMfgItfEnv extern const CATUnicodeString MfgLatheRapidFeedrateMode;
ExportedByMfgItfEnv extern const CATUnicodeString MfgLatheRapidFeedrateValue;

// Light loading feedrate for lathe ramping
ExportedByMfgItfEnv extern const CATUnicodeString MfgLatheLightLoadingFeedrate;
ExportedByMfgItfEnv extern const CATUnicodeString MfgLatheLightLoadingFeedrateMode;
ExportedByMfgItfEnv extern const CATUnicodeString MfgLatheLightLoadingFeedrateValue;

ExportedByMfgItfEnv extern const CATUnicodeString MfgLatheNbOfFeedSteps;

// Boolean Attributes to decide if MfgLathexxxFeedrate must be taken into account
ExportedByMfgItfEnv extern const CATUnicodeString MfgLatheModifRAPID;
#endif

#ifdef CATIAV5R19
// Transition feedrate
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_TransitionFeedrateSel;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_TransitionFeedrateType;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_TransitionLocalFeedrate;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_TransitionLocalFeedrateMode;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_TransitionLocalFeedrateValue;

ExportedByMfgItfEnv extern const CATUnicodeString Mfg_TransitionMachiningFeedType;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_TransitionApproachFeedType;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_TransitionLeadInFeedType;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_TransitionRetractFeedType;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_TransitionLiftOffFeedType;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_TransitionRapidFeedType;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_TransitionLocalFeedType;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_TransitionFinishingFeedType;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_TransitionAirCuttingFeedType;
#endif
//

//*****************************************************************************
//				FEEDS AND SPEEDS OUTILS ET PLAQUETTES	
//*****************************************************************************
// Outils Axiaux (pas de notion ebauche / finition)
ExportedByMfgItfEnv extern const CATUnicodeString MfgVC;
ExportedByMfgItfEnv extern const CATUnicodeString MfgVCNew;
ExportedByMfgItfEnv extern const CATUnicodeString MfgVCNewSP;
ExportedByMfgItfEnv extern const CATUnicodeString MfgSZ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgSZGlobal;
ExportedByMfgItfEnv extern const CATUnicodeString MfgPP;

// Outils Milling "finition" (et vitesse finition tournage)
ExportedByMfgItfEnv extern const CATUnicodeString MfgVCFinish;
ExportedByMfgItfEnv extern const CATUnicodeString MfgVCFinishNew;
ExportedByMfgItfEnv extern const CATUnicodeString MfgVCFinishNewSP;
ExportedByMfgItfEnv extern const CATUnicodeString MfgSZFinish;
ExportedByMfgItfEnv extern const CATUnicodeString MfgSZFinishGlobal;
ExportedByMfgItfEnv extern const CATUnicodeString MfgAAFinish;
ExportedByMfgItfEnv extern const CATUnicodeString MfgARFinish;

// Outils Milling "ebauche" (et vitesse ebauche tournage)
ExportedByMfgItfEnv extern const CATUnicodeString MfgVCRough;
ExportedByMfgItfEnv extern const CATUnicodeString MfgVCRoughNew;
ExportedByMfgItfEnv extern const CATUnicodeString MfgVCRoughNewSP;
ExportedByMfgItfEnv extern const CATUnicodeString MfgSZRough;
ExportedByMfgItfEnv extern const CATUnicodeString MfgSZRoughGlobal;
ExportedByMfgItfEnv extern const CATUnicodeString MfgAARough;
ExportedByMfgItfEnv extern const CATUnicodeString MfgARRough;

// Plaquettes (ecroutage specifique Tournage)
ExportedByMfgItfEnv extern const CATUnicodeString MfgVCEcrout;
ExportedByMfgItfEnv extern const CATUnicodeString MfgVCEcroutNew;
ExportedByMfgItfEnv extern const CATUnicodeString MfgSZEcrout;
ExportedByMfgItfEnv extern const CATUnicodeString MfgPPEcrout;
ExportedByMfgItfEnv extern const CATUnicodeString MfgPPRough;

// Boolean Attributes to decide if F&S of MO must be computed automatically when Tool F&S are modified
ExportedByMfgItfEnv extern const CATUnicodeString MfgFeedrateAutoUpd;
ExportedByMfgItfEnv extern const CATUnicodeString MfgSpindleSpeedAutoUpd;

// Maximum Spindle Speed-QIH
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_SpindleMaxSpeed;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_SpindleMaxSpeedMode;
ExportedByMfgItfEnv extern const CATUnicodeString Mfg_SpindleMaxSpeedValue;

#endif
