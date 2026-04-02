#ifndef CATElbDevice_H
#define CATElbDevice_H

// COPYRIGHT DASSAULT SYSTEMES 2003

/** 
 * @CAA2Level L1
 * @CAA2Usage U1
 */

// module declaration
#include "ExportedByCATElbInterfaces.h"

// for class variable declaration
#include "CATUnicodeString.h"

/**
 * The CATElecDevice type is an enumeration of electrical device type.
 */
typedef enum {Equipment, ConnectorShell, Connector, Splice, Pin, Cavity} CATElecDevice;

/**
 * This class is used to describe a device.
 */
class ExportedByCATElbInterfaces CATElbDevice
{
public:
  /**
   * The identifier of the device.
   * <br><b>Mandatory</b>
   */
  CATUnicodeString Id;

  /**
   * The name of the device.
   * <br><b>Mandatory</b>
   */
  CATUnicodeString Name;

  /**
   * The device type.
   * <br><b>Mandatory</b><br>
   * @see CATElecDevice
   */
  CATElecDevice Type;

  /**
   * The PartNumber attribute corresponds to the part number of the device.
   */
  CATUnicodeString PartNumber;

  /**
   * The subtype of the device.
   */
  CATUnicodeString SubType;

  /**
   * The color of the device.
   */
  CATUnicodeString Color;

  /**
   * It is the identifier of the harness; only if the device is in an harness (Connector, Splice).
   */
  CATUnicodeString HarnessId;
};

#endif
