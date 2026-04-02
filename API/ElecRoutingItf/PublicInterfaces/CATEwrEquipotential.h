#ifndef CATEwrEquipotential_H
#define CATEwrEquipotential_H

// COPYRIGHT DASSAULT SYSTEMES 2003

/** 
 * @CAA2Level L1
 * @CAA2Usage U1
 */

// module declaration
#include "ExportedByCATEwrInterfaces.h"

// inherited from
#include "CATBaseObject.h"

// for class variable declaration
#include "CATUnicodeString.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATListOfCATUnicodeString.h"

/**
 * This class is used to describe an equipotential.
 */
class ExportedByCATEwrInterfaces CATEwrEquipotential : public CATBaseObject
{
  CATDeclareClass; 	

public:

  /**
   * The identifier of the equipotential.
   * <br><b>Mandatory</b>
   */
  CATUnicodeString Id;

  /**
   * The name of the equipotential.
   * <br><b>Mandatory</b>
   */
  CATUnicodeString Name;

  /**
   * The Diameter attribute corresponds to an estimation of the diameter of the wires 
   * which will realize the equipotential.
   */
  double Diameter;

  /**
   * The subtype of the equipotential.
   */
  CATUnicodeString SubType;

  /**
   * The SeparationCode attribute is used in knowledge rules checked in equipotential routing.
   */
  CATUnicodeString SeparationCode;

  /**
   * The RoutingPriority attribute is used in equipotential routing.
   */
  CATUnicodeString RoutingPriority;

  /**
   * The WirePartNumber attribute corresponds to the part number of the wire which will realize
   * the equipotential. When valuated, it overrides the Diameter attribute.
   */
  CATUnicodeString WirePartNumber;

  /**
   * This list contains the identifier of the extremities of the equipotential.
   * it must contain at least two extremities.
   * <br><b>Mandatory</b>
   */
  CATListValCATUnicodeString Extremities; // Identifier of the extremities

  /**
   * @nodoc
   * Reserved for internal use: Do not use
   */
  CATListValCATBaseUnknown_var Extremities3D;
  
  /**
   * @nodoc
   */
  CATEwrEquipotential();

  /**
   * @nodoc
   */
  ~CATEwrEquipotential();
};

#endif
