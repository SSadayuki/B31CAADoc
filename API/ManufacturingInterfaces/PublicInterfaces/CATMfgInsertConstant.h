// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================

#ifndef __CATMfgInsertConstant_h__
#define __CATMfgInsertConstant_h__
/**
* @CAA2Level L1
* @CAA2Usage U3
*/

//
// Only Manufacturing can use these strings
//
#include "MfgItfEnv.h"

class CATUnicodeString;


// Liste des types disponibles sur les inserts
// ---------------------------------------------------------------
ExportedByMfgItfEnv extern const CATUnicodeString MfgRootInsert;
ExportedByMfgItfEnv extern const CATUnicodeString MfgBaseInsert;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOInsert;

ExportedByMfgItfEnv extern const CATUnicodeString MfgDiamondInsert;
ExportedByMfgItfEnv extern const CATUnicodeString MfgSquareInsert;
ExportedByMfgItfEnv extern const CATUnicodeString MfgTriangularInsert;
ExportedByMfgItfEnv extern const CATUnicodeString MfgRoundInsert;
ExportedByMfgItfEnv extern const CATUnicodeString MfgTrigonInsert;
ExportedByMfgItfEnv extern const CATUnicodeString MfgGrooveInsert;
ExportedByMfgItfEnv extern const CATUnicodeString MfgThreadInsert;

// Ajout de la nouvelle dénomination due au passage sous ASM Products
// FAP 21/02/03
//-------------------------------------------------------------------
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgDiamondInsert;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgSquareInsert;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgTriangularInsert;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgRoundInsert;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgTrigonInsert;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgGrooveInsert;
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgThreadInsert;

// Liste des attributs disponibles sur les inserts
// ---------------------------------------------------------------
ExportedByMfgItfEnv extern const CATUnicodeString MfgNoseRadius;
ExportedByMfgItfEnv extern const CATUnicodeString MfgInscribedDiameter;
ExportedByMfgItfEnv extern const CATUnicodeString MfgInsertThickness;
ExportedByMfgItfEnv extern const CATUnicodeString MfgMachiningQuality;
ExportedByMfgItfEnv extern const CATUnicodeString MfgInsertMaterial;
ExportedByMfgItfEnv extern const CATUnicodeString MfgMaxLifeTime;
ExportedByMfgItfEnv extern const CATUnicodeString MfgDescriptionCode;
ExportedByMfgItfEnv extern const CATUnicodeString MfgInsertHeight   ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgInsertWidth    ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgBottomAngle    ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgLeftFlankAngle ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgRightFlankAngle;
ExportedByMfgItfEnv extern const CATUnicodeString MfgLeftNoseRadius ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgRightNoseRadius;
ExportedByMfgItfEnv extern const CATUnicodeString MfgGrooveType     ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgThreadProfile  ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgThreadDefinition;
ExportedByMfgItfEnv extern const CATUnicodeString MfgThreadAngle    ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgToothX         ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgToothZ         ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgToothH         ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOShape       ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOClearAngle  ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOTolerance   ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOType        ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOCutSize     ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOThickness   ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISONoseRadius  ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOCutCondition;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISODirection   ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgMachType       ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgPitchNumber    ;

// Liste des valeurs disponibles sur les inserts
// ---------------------------------------------------------------
ExportedByMfgItfEnv extern const CATUnicodeString MfgANSICode;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOCode ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgNoCode  ;

ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLatheA;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLatheB;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLatheC;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLatheD;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLatheE;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLatheF;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLatheG;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLatheH;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLatheJ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLatheK;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLatheL;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLatheM;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLatheN;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLatheO;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLatheP;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLatheQ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLatheR;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLatheS;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLatheT;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLatheU;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLatheV;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLatheW;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLatheX;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLatheY;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLatheUndefined;

ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLathe01;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLatheT1;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLathe02;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLathe03;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLatheT3;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLathe04;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLathe05;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLathe06;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLathe07;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLathe09;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLathe12;

ExportedByMfgItfEnv extern const CATUnicodeString MfgCermets           ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgCeramics          ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgCubideBoronNitride;

ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLatheRight;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLatheLeft;
ExportedByMfgItfEnv extern const CATUnicodeString MfgISOLatheNeutral;

ExportedByMfgItfEnv extern const CATUnicodeString MfgLatheRightHand;
ExportedByMfgItfEnv extern const CATUnicodeString MfgLatheLeftHand;
ExportedByMfgItfEnv extern const CATUnicodeString MfgLatheNeutral;

ExportedByMfgItfEnv extern const CATUnicodeString MfgCutOff;
ExportedByMfgItfEnv extern const CATUnicodeString MfgGroove;

#endif
