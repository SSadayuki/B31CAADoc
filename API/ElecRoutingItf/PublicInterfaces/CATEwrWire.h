#ifndef CATEwrWire_H
#define CATEwrWire_H

// COPYRIGHT DASSAULT SYSTEMES 2003

/** 
 * @CAA2Level L1
 * @CAA2Usage U1
 */

// module declaration
#include "ExportedByCATEwrInterfaces.h"

// for class variable declaration
#include "CATUnicodeString.h"

/**
 * This class is used to describe a wire.
 */
class ExportedByCATEwrInterfaces CATEwrWire
{
public:
  /**
   * The identifier of the wire.
   * <br><b>Mandatory</b>
   */
  CATUnicodeString Id;

  /**
   * The name of the wire.
   * <br><b>Mandatory</b>
   */
  CATUnicodeString Name;

  /**
   * @nodoc
   * Do not use.
   */
  double Length;

  /**
   * The InnerDiameter attribute corresponds to the diameter of the conductor, excluding
   * the insulation.
   */
  double InnerDiameter;

  /**
   * The OuterDiameter attribute corresponds to the diameter of the wire, including
   * the insulation.
   * <br><b>Mandatory</b>
   */
  double OuterDiameter;

  /**
   * The LinearMass attribute corresponds to the linear mass of the wire.
   */
  double LinearMass;

  /**
   * The BendRadius attribute corresponds to the maximum curvature of the wire.
   */
  double BendRadius;

  /**
   * The subtype of the wire.
   */
  CATUnicodeString SubType;

  /**
   * The color of the wire.
   */
  CATUnicodeString Color;

  /**
   * The SeparationCode attribute is used in knowledge rules checked in wire routing.
   */
  CATUnicodeString SeparationCode;

  /**
   * The SignalID of the wire routed.
   */
  CATUnicodeString sSignalId; //rql IR 530434 06:04:03

  /**
   * The PartNumber attribute corresponds to the part number of the wire.
   */
  CATUnicodeString PartNumber;

  /**
   * The identifier of the first extremity.
   * <br><b>Mandatory</b>
   */
  CATUnicodeString Id_FirstExtremity;

  /**
   * The identifier of the second extremity.
   * <br><b>Mandatory</b>
   */
  CATUnicodeString Id_SecondExtremity;

  /**
   * The identifier of the harness (if exists) containing the wire.
   */
  CATUnicodeString Id_Harness;

  /**
   * The identifier of the WireGroup (if exists) immediate father of the wire.
   */
  CATUnicodeString FatherWireGroup;
};

#endif
