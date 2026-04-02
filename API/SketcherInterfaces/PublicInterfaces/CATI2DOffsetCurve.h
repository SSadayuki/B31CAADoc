/* -*-c++-*- */
#ifndef CATI2DOffsetCurve_h
#define CATI2DOffsetCurve_h

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATI2DOffset.h"

/**
 * Interface to filter offset curves.
 * <b>Role</b>: Query this interface on a sketched geometry. If the query succeeds,
 * the feature is an offset curve which reference geometry is a sketched parametric curve 
 * that belongs to the sketch.
 */

#include "CATSketcherInterfaces.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DOffsetCurve;
#else
extern "C" const IID IID_CATI2DOffsetCurve;
#endif

class ExportedByCATSketcherInterfaces CATI2DOffsetCurve : public CATI2DOffset
{
  CATDeclareInterface;

public:
};

CATDeclareHandler(CATI2DOffsetCurve,CATI2DOffset);
#endif
