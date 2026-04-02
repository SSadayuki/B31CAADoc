/* -*-c++-*- */
#ifndef CAT2DProperties_h
#define CAT2DProperties_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATSketcherUseItf.h"
#include "CATCORBATypes.h"

enum CAT2DEltType
{
  Elt2DType_GEOM         = 0,
  Elt2DType_CONSTRUCTION = 2,
  Elt2DType_AXIS         = 4,
  Elt2DType_EDGE         = 8,     // Do not use
  Elt2DType_LOCKED       = 16,
  Elt2DType_PHANTOM      = 32,
  Elt2DType_ISOLATED     = 64,
  Elt2DType_NOERASE      = 128
};

ExportedByCATSketcherUseItf extern const octet EltType_GEOM;
ExportedByCATSketcherUseItf extern const octet EltType_AXIS;
ExportedByCATSketcherUseItf extern const octet EltType_CONSTRUCTION;

ExportedByCATSketcherUseItf extern const octet EltType_INACTIVATED;
ExportedByCATSketcherUseItf extern const octet EltType_EDGE;          // Do not use
ExportedByCATSketcherUseItf extern const octet EltType_IMPORTED;      // Do not use
ExportedByCATSketcherUseItf extern const octet EltType_CONTEXTUAL;
ExportedByCATSketcherUseItf extern const octet EltType_PHANTOM;
ExportedByCATSketcherUseItf extern const octet EltType_ISOLATED;
ExportedByCATSketcherUseItf extern const octet EltType_NOMODIFY;
ExportedByCATSketcherUseItf extern const octet EltType_NOERASE;

ExportedByCATSketcherUseItf extern const octet EltType_NOT_SLIDING;

#endif
