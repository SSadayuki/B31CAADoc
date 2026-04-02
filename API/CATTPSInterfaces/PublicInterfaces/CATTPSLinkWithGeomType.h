#ifndef CATTPSLinkWithGeomType_H
#define CATTPSLinkWithGeomType_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

 /**
  * Enum which is used to defined the type of default annotation :
  *   - In manual mode, face are defined by the user with an interactive
  *     selection.
  *   - In automatic mode, faces are retrieved with an algorythm.
  */

enum CATTPSLinkWithGeomType
{
  CATTPSLWGUndefined   = -1,
  CATTPSLWGManual      =  0,
  CATTPSLWGAutomatic   =  1
};
#endif
