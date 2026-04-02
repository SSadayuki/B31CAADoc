/* -*-c++-*- */
#ifndef CATI2DDetail_h
#define CATI2DDetail_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATSketcherInterfaces.h"

/**
 * Interface of 2D Detail.
 * <b>Role</b>: This interface is used to identify 2D Detail.
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DDetail;
#else
extern "C" const IID IID_CATI2DDetail;
#endif

class ExportedByCATSketcherInterfaces CATI2DDetail : public CATBaseUnknown
{
  CATDeclareInterface;

public:

};
CATDeclareHandler(CATI2DDetail,CATBaseUnknown);

#endif
