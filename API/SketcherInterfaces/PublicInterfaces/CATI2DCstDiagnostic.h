/* -*-c++-*- */
#ifndef CATI2DCstDiagnostic_h
#define CATI2DCstDiagnostic_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CAT2DCstDiag.h"
#include "CATSketcherInterfaces.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DCstDiagnostic;
#else
extern "C" const IID IID_CATI2DCstDiagnostic;
#endif

class ExportedByCATSketcherInterfaces CATI2DCstDiagnostic : public CATBaseUnknown
{
  CATDeclareInterface;

public:
  /**
   * Acces to diagnostic on geometry obtain during last evaluation.
   * Returns Cst2DDiag_Unknown when the diagnostic is not computed.
   */
  virtual HRESULT GetDiagnostic (CAT2DCstDiag *oDiag) = 0;

  /**
   * Acces to underdefined status on geometry obtain during last evaluation.
   * Returns a sum of CATGeo2DStatus that defined the degrees of freedom on geometry.
   * Returns Geo2DStatus_Unknown when the diagnostic is not computed.
   */
  virtual HRESULT GetUnderDefinedStatus (DWORD *oStatusSum) = 0;
};

CATDeclareHandler(CATI2DCstDiagnostic,CATBaseUnknown);

#endif
