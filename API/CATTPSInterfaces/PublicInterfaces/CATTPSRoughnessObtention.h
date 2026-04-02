#ifndef CATTPSRoughnessObtention_H
#define CATTPSRoughnessObtention_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Roughness Obtention mode.
 * <pre>
 * <r>             ----------                ----------                 ----------
 * <r>            |                         |                          |
 * <r>           |                         |                          |
 * <r>          |                    -----|                          |
 * <r>     |   |                     |   |                      | O |
 * <r>      | |                       | |                        | |
 * <r>       |                         |                          |
 * <r> 
 * <r>     NotDefined                MachiningMandatory        MachiningForbiden
 * </pre>
 */
enum CATTPSRoughnessObtention
{
  CATTPSROUnsupported = -1,
  CATTPSRONotDefined = 0,
  CATTPSROMachiningMandatory = 1,
  CATTPSROMachiningForbidden = 2
};

#endif
