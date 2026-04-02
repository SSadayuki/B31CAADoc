/* -*-c++-*- */
#ifndef CATISketchAutoConstraint_h
#define CATISketchAutoConstraint_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CAT2DCstSearchMode.h"
#include "CATSketcherInterfaces.h"
class CATListValCATI2DWFGeometry_var;
class CATRawCollint;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATISketchAutoConstraint;
#else
extern "C" const IID IID_CATISketchAutoConstraint;
#endif

class ExportedByCATSketcherInterfaces CATISketchAutoConstraint : public CATBaseUnknown
{
  CATDeclareInterface;

public:                                      
  virtual HRESULT DeduceConstraints(const CATListValCATI2DWFGeometry_var &iListRef,
                                    const CATListValCATI2DWFGeometry_var &iListAxis,
                                    const CATListValCATI2DWFGeometry_var &iListGeom,
                                    const CAT2DCstSearchMode iSearchMode,
                                    const double *iLinRes,
                                    const double *iAngRes,
                                    const CATRawCollint *iListType) = 0;
};

CATDeclareHandler(CATISketchAutoConstraint,CATBaseUnknown);

#endif
