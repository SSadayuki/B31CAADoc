// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================

#ifndef __CATMfgToolAssemblyConstant_h__
#define __CATMfgToolAssemblyConstant_h__
/**
* @CAA2Level L1
* @CAA2Usage U3
*/

//
// Only Manufacturing can use these strings
//
#include "MfgItfEnv.h"

class CATUnicodeString;


// Liste des types disponibles sur les outils assembles
// ---------------------------------------------------------------
ExportedByMfgItfEnv extern const CATUnicodeString MfgBaseToolAssembly;
ExportedByMfgItfEnv extern const CATUnicodeString MfgMillAndDrillToolAssembly;
ExportedByMfgItfEnv extern const CATUnicodeString MfgLatheToolAssembly;

// Ajout de la nouvelle dénomination due au passage sous ASM Products
// FAP 25/03/03
//-------------------------------------------------------------------
ExportedByMfgItfEnv extern const CATUnicodeString CATEMfgLatheToolAssembly;

// Liste des attributs disponibles sur les outils assembles
// ---------------------------------------------------------------
ExportedByMfgItfEnv extern const CATUnicodeString MfgHolderLength1;
ExportedByMfgItfEnv extern const CATUnicodeString MfgHolderLength2;
ExportedByMfgItfEnv extern const CATUnicodeString MfgHolderLength3;
ExportedByMfgItfEnv extern const CATUnicodeString MfgDiameter1;
ExportedByMfgItfEnv extern const CATUnicodeString MfgDiameter2;
ExportedByMfgItfEnv extern const CATUnicodeString MfgDiameter3;
ExportedByMfgItfEnv extern const CATUnicodeString MfgDiameter4;
ExportedByMfgItfEnv extern const CATUnicodeString MfgDiameter5;
ExportedByMfgItfEnv extern const CATUnicodeString MfgDiameter6;
ExportedByMfgItfEnv extern const CATUnicodeString MfgTlSetLength;
ExportedByMfgItfEnv extern const CATUnicodeString MfgTlSetX;
ExportedByMfgItfEnv extern const CATUnicodeString MfgTlSetY;
ExportedByMfgItfEnv extern const CATUnicodeString MfgTlSetZ;
ExportedByMfgItfEnv extern const CATUnicodeString MfgOrientAngle;
ExportedByMfgItfEnv extern const CATUnicodeString MfgNumberOfComponents;
ExportedByMfgItfEnv extern const CATUnicodeString MfgHolderStages;
ExportedByMfgItfEnv extern const CATUnicodeString MfgAssGage1;
ExportedByMfgItfEnv extern const CATUnicodeString MfgAssGage2;
ExportedByMfgItfEnv extern const CATUnicodeString MfgToolAssPower;
ExportedByMfgItfEnv extern const CATUnicodeString MfgConeLength;
ExportedByMfgItfEnv extern const CATUnicodeString MfgConeDiameter1;
ExportedByMfgItfEnv extern const CATUnicodeString MfgConeDiameter2;
ExportedByMfgItfEnv extern const CATUnicodeString MfgConeDiameter3;
ExportedByMfgItfEnv extern const CATUnicodeString MfgConeDiameter4;
ExportedByMfgItfEnv extern const CATUnicodeString MfgConeDiameter5;

ExportedByMfgItfEnv extern const CATUnicodeString MfgPowered;
ExportedByMfgItfEnv extern const CATUnicodeString MfgFixed;

ExportedByMfgItfEnv extern const CATUnicodeString MfgTurretNumber;


// Liste des attributs disponibles sur les outils assembles de tournage
// --------------------------------------------------------------------
ExportedByMfgItfEnv extern const CATUnicodeString MfgLatheMachineCompatibility;
ExportedByMfgItfEnv extern const CATUnicodeString MfgToolSetupAngle;
ExportedByMfgItfEnv extern const CATUnicodeString MfgInvertedAssembly;
ExportedByMfgItfEnv extern const CATUnicodeString MfgPreferedOutputPoint1;
ExportedByMfgItfEnv extern const CATUnicodeString MfgPreferedOutputPoint2;
ExportedByMfgItfEnv extern const CATUnicodeString MfgPreferedOutputPoint3;

ExportedByMfgItfEnv extern const CATUnicodeString MfgUndefined;
#endif
