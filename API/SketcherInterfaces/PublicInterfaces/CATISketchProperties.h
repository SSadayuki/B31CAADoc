/* -*-c++-*- */
#ifndef CATISketchProperties_h
#define CATISketchProperties_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CAT2DProperties.h"
#include "CAT2DSolvingMode.h"
#include "CATSketcherInterfaces.h"

/**
 * Sketch Default Geometry Type Management.
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATISketchProperties;
#else
extern "C" const IID IID_CATISketchProperties;
#endif

class ExportedByCATSketcherInterfaces CATISketchProperties : public CATBaseUnknown
{
  CATDeclareInterface;

public: 
  
  virtual HRESULT GetDefaultEltType(CAT2DEltType *oType, boolean *oPermanent=NULL) = 0;

  virtual HRESULT SetDefaultEltType(const CAT2DEltType iType, const boolean *iPermanent=NULL) = 0;

  virtual HRESULT GetEvaluationMode(CAT2DSolvingMode *oMode) = 0;

  virtual HRESULT SetEvaluationMode(const CAT2DSolvingMode iMode) = 0;
};

CATDeclareHandler(CATISketchProperties,CATBaseUnknown);

#endif
