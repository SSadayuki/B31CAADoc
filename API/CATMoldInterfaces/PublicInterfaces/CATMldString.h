// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

//=============================================================================
//
// Class CATMldString:
//
//=============================================================================
// Usage Notes:
//
//=============================================================================
// Mars 2000 - Creation: CQO
// June 2000 lch ; Add strLeaderPin... & strLocatingRing...
// June 2000 pic ; Add strings for MoldBase and MoldBaseElement feature
// June 2000 cqo ; Add strings for Runner feature
// June 2000 cqo ; Add strings for MldPlane feature
// July 2000 hdp ; Add strings for Mold & MoldedPart
// Sept 2000 hdp ; Add strCooling
// Oct  2000 lch ; Add strCorePin
// Oct  2000 cqo ; Add strings for submarine gate
//  11/11/2000 : fdm; Ajout menu Edit Component
//  28/11/2000 : jcb; Ajout strUserPlate
//  12/03/2001 : cqo; Ajout strGateProfilUpperEndLength, 
//					  strGateProfilLowerEndLength et strGateProfilHeight
//  14/03/2001 : lch; Add strORing
//  02/05/2001 : cqo; Add strGateProfile
//  07/06/2001 : fdm; Deplacement dans CATMoldInterfaces
//  02/10/2001 : lch; Add strSlider, strRetainer, strPlug
//  07/11/2001 : pic; Add MoldBase and MoldBaseElement Dimension attributs
//	27/11/2001 : pic; Add MoldBase and MoldBaseElement Geometric attributs
//  18/02/2002 : fdm ; Delete strCreationRelease
//  27/02/2002 : pic; Gestion des StripperPlates.
//  15/03/2002 : fdm; Open CAA
//  07/05/2002 : fdm ; Add CAA documentation
//  23/05/2002 : fdm ; Add CAA documentation
//  02/10/2002 : fdm ; MLK-81025 
//  01/10/2002 : fdm; R11: Replace enum component type by the feature string (CATMldString.h)
//  08/11/2002 : pic; Drilled by components.
//  19/11/2002 : fdm; R11: FinalGenerationHoles
//  19/11/2002 : bga; Add strComponentNewInstance .
//  08/04/2003 : bga; R12 : Add strBaffle
//  28/04/2003 : fdm; R12: Add simplified 2D
//  06/05/2003 : fdm; R12: Doc CAA
//  09/07/2003 : fdm; R13: Add strMoldCatalogDir
//  06/11/2003 : fdm; R14: MoldBase improvement : Add strNone
//  26/11/2003 : fdm; R14: MoldBase improvement Fusion Creation & Edition
//  03/12/2003 : lch; R14: Add strComponentRecopy.
//  08/01/2004 : fdm; R14: MoldBase improvement : Add strBlock
//  12/01/2004 : fdm; R14: MoldBase improvement:strMoldBlock
//  15/01/2004 : lch; R14: Add strComponentReplace.
//  05/04/2004 : fdm; R14: Decoupage CATMldString en 2
//  04/11/2004 : mlh; R14: Add strTlgItf
//=============================================================================
//

#ifndef _CATMldString_H
#define _CATMldString_H

#include "CATMoldInterfaces.h"

#include <CATUnicodeString.h>

/*
 * Here is a description of the string constants used in the MoldDesign. 
 */

/**
<table BORDER COLS=2 WIDTH="100%" >
<tr>
<td>&nbsp;strMoldFeatCatalog</td>

<td>MoldDesign.feat</td>
</tr>

<tr>
<td>&nbsp;strMoldContainer</td>

<td>CATMldCont</td>
</tr>

<tr>
<td></td>

<td>&nbsp;</td>
</tr>

<tr>
<td>Feature component</td>

<td>&nbsp;</td>
</tr>

<tr>
<td>strComponent</td>

<td>MoldComponent</td>
</tr>

<tr>
<td>strAnglePin</td>

<td>AnglePin</td>
</tr>

<tr>
<td>strBaffle</td>

<td>Baffle</td>
</tr>

<tr>
<td>strBushing</td>

<td>Bushing</td>
</tr>

<tr>
<td>strCapScrew</td>

<td>CapScrew</td>
</tr>

<tr>
<td>strCorePin</td>

<td>CorePin</td>
</tr>

<tr>
<td>strCountScrew</td>

<td>CountersunkScrew</td>
</tr>

<tr>
<td>strDowelPin</td>

<td>DowelPin</td>
</tr>

<tr>
<td>strEjector</td>

<td>Ejector</td>
</tr>

<tr>
<td>strEjectorPin</td>

<td>EjectorPin</td>
</tr>

<tr>
<td>strEjectorSleeve</td>

<td>EjectorSleeve</td>
</tr>

<tr>
<td>strEyeBolt</td>

<td>EyeBolt</td>
</tr>

<tr>
<td>strFlatEjector</td>

<td>FlatEjector</td>
</tr>

<tr>
<td>strGuidePin</td>

<td>GuidePin</td>
</tr>

<tr>
<td>strInsert</td>

<td>Insert</td>
</tr>

<tr>
<td>strInterlock</td>

<td>Interlock</td>
</tr>

<tr>
<td>strKnockOut</td>

<td>KnockOut</td>
</tr>

<tr>
<td>strLeaderPin</td>

<td>LeaderPin</td>
</tr>

<tr>
<td>strLocatingRing</td>

<td>LocatingRing</td>
</tr>

<tr>
<td>strLockScrew</td>

<td>LockingScrew</td>
</tr>

<tr>
<td>strORing</td>

<td>ORing</td>
</tr>

<tr>
<td>strPlug</td>

<td>Plug</td>
</tr>

<tr>
<td>strRetainer</td>

<td>Retainer</td>
</tr>

<tr>
<td>strSleeve</td>

<td>Sleeve</td>
</tr>

<tr>
<td>strSlider</td>

<td>Slider</td>
</tr>

<tr>
<td>strSpring</td>

<td>Spring</td>
</tr>

<tr>
<td>strSprueBushing</td>

<td>SprueBushing</td>
</tr>

<tr>
<td>strSpruePuller</td>

<td>SpruePuller</td>
</tr>

<tr>
<td>strStopDisc</td>

<td>StopDisc</td>
</tr>

<tr>
<td>strStopPin</td>

<td>StopPin</td>
</tr>

<tr>
<td>strSupportPillar</td>

<td>SupportPillar</td>
</tr>

<tr>
<td>strUserComponent</td>

<td>UserComponent</td>
</tr>

<tr>
<td></td>

<td></td>
</tr>

<tr>
<td>Edition component</td>

<td></td>
</tr>

<tr>
<td>&nbsp;strComponentCreate</td>

<td>ComponentCreate</td>
</tr>

<tr>
<td>&nbsp;strComponentEdition</td>

<td>ComponentEdition</td>
</tr>

<tr>
<td>&nbsp;strComponentNewInstance</td>

<td>ComponentNewInstance</td>
</tr> 

</table>
**/
ExportedByCATMoldInterfaces extern const CATUnicodeString

  strMoldFeatCatalog,
  strMoldContainer,

  // Component
  strComponent,
  strAnglePin,
  strBaffle,
  strBushing,
  strCapScrew,
  strCorePin,
  strCountScrew,
  strDowelPin,
  strEjector,
  strEjectorPin,
  strEjectorSleeve,
  strEyeBolt,
  strFlatEjector,
  strGuidePin,
  strInsert,
  strInterlock,
  strKnockOut,
  strLeaderPin,
  strLocatingRing,
  strLockScrew,
  strORing,
  strPlug,
  strRetainer,
  strSleeve,
  strSlider,
  strSpring,
  strSprueBushing,
  strSpruePuller,
  strStopDisc,
  strStopPin,
  strSupportPillar,
  strUserComponent,
  strUserPlate,
  strClampingPlate,
  strUpperBar,
  strUpperBar1,
  strUpperBar2,
  strCavitySupportPlate,
  strCavityPlate,
  strCorePlate,
  strCoreSupportPlate,
  strRiserBar,
  strRiserBar1,
  strRiserBar2,
  strSettingPlate,
  strEjectorPlateA,
  strEjectorPlateB,
  strStripperPlate,

// Edition component
  strComponentCreate,
  strComponentEdition,
  strComponentNewInstance,
  strComponentRecopy,
  strComponentReplace,


// Simplified 2D
  strSimplified3DTo2D,
  strSimplified2DTo3D,

// contexte Interface
  strTlgItf,

// SplitPart
  strSplitPartInterface
  ;

#endif // CATMldString_H
