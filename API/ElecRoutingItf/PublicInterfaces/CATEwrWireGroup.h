#ifndef CATEwrWireGroup_H
#define CATEwrWireGroup_H

// COPYRIGHT DASSAULT SYSTEMES 2004

/** 
 * @CAA2Level L1
 * @CAA2Usage U1
 */

// module declaration
#include "ExportedByCATEwrInterfaces.h"

// for class variable declaration
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"

/**
 * Class dedicated to wire group.
 * <b>Role</b>: This class is used to represent wire group and its attributes
 */
class ExportedByCATEwrInterfaces CATEwrWireGroup
{
public:
  /**
   * The identifier of the WireGroup.
   * <br><b>Mandatory</b>
   */
  CATUnicodeString Id;

  /**
   * The name of the WireGroup.
   * <br><b>Mandatory</b>
   */
  CATUnicodeString Name;

  /**
   * Whether the Wire Group is Generic or Shielded.
   */
  CATUnicodeString WireGroupType;

  /**
   * @nodoc
   * Do not use.
   */
  double Length;

  /**
   * The Diameter attribute corresponds to the diameter of the WireGroup.
   * <br><b>Mandatory</b>
   */
  double Diameter;

  /**
   * The BendRadius attribute corresponds to the maximum curvature of the WireGroup.
   */
  double BendRadius;

  /**
   * The WireLengthCoefficient attribute. 
   */
  
  double WireLengthCoefficient;

  /**
   * The subtype of the WireGroup.
   */
  CATUnicodeString SubType;

  /**
   * The color of the WireGroup.
   */
  CATUnicodeString Color;

  /**
   * The SeparationCode attribute is used in knowledge rules checked in WireGroup routing.
   */
  CATUnicodeString SeparationCode;

  /**
   * The PartNumber attribute corresponds to the part number of the WireGroup.
   */
  CATUnicodeString PartNumber;

  /**
   * The identifier of the first extremity of the Shielded Wire Group.
   */
  CATUnicodeString Id_FirstExtremity;

  /**
   * The identifier of the second extremity of the Shielded Wire Group.
   */
  CATUnicodeString Id_SecondExtremity;

  /**
   * @nodoc
   * Do not use.
   */
  CATBoolean _ifConnectedToTwoDevices;

  /**
   * The identifier of the harness (if exists) containing the WireGroup.
   */
  CATUnicodeString Id_Harness;

  /**
   * List of wire names children of the wire group.
   */
  CATListValCATUnicodeString ListOfSubWires;

  /**
   * List of wire groups names children of the wire group.
   */
  CATListValCATUnicodeString ListOfSubWireGroups;

  /**
   * The identifier of the WireGroup (if exists) immediate father of the WireGroup.
   */
  CATUnicodeString FatherWireGroup;

};

#endif

