/* -*-c++-*- */
#ifndef CATI2DWireFactory_h
#define CATI2DWireFactory_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATSketcherInterfaces.h"
#include "CATListOfInt.h"

class CATPCurve;
class CATListValCATI2DPoint_var;
class CATListValCATI2DCurve_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DWireFactory;
#else
extern "C" const IID IID_CATI2DWireFactory;
#endif

class ExportedByCATSketcherInterfaces CATI2DWireFactory : public CATBaseUnknown
{
  CATDeclareInterface;

public: 

  virtual HRESULT CreateWire(const int                   iClosure,
                             const int                   iNbCurves,
                             const CATPCurve           **iCurves,
                             const int                  *iReportDomains=NULL,
                             CATListValCATI2DPoint_var  *oVertices=NULL,
                             CATListValCATI2DCurve_var  *oEdges=NULL,
                             CATListOfInt               *oSenses=NULL) = 0;
};

CATDeclareHandler(CATI2DWireFactory,CATBaseUnknown);

#endif
