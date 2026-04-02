/* -*-c++-*- */
#ifndef CATI2DProperties_h
#define CATI2DProperties_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CAT2DProperties.h"
#include "CATSketcherInterfaces.h"

/**
 * Element Type Management.
 * The Elt2DType_AXIS type is automatically managed by the
 * SetCurrentCenterLine() method on the Sketch.
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DProperties;
#else
extern "C" const IID IID_CATI2DProperties;
#endif

class ExportedByCATSketcherInterfaces CATI2DProperties : public CATBaseUnknown
{
  CATDeclareInterface;

public:
  virtual HRESULT GetEltType(CAT2DEltType *oType) = 0;

  virtual HRESULT SetEltType(const CAT2DEltType iType) = 0;

  virtual HRESULT GetEltType(octet *oType) = 0;
};

CATDeclareHandler(CATI2DProperties,CATBaseUnknown);

#endif
