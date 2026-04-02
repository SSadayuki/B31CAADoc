/* -*-c++-*- */
#ifndef CATI2DAxis_h
#define CATI2DAxis_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATSketcherInterfaces.h"

class CATISpecObject_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DAxis;
#else
extern "C" const IID IID_CATI2DAxis;
#endif

class ExportedByCATSketcherInterfaces CATI2DAxis : public CATBaseUnknown
{
  CATDeclareInterface;

public: 

  virtual HRESULT Get2DAxisData(double *pRootPoint, double *pHAxis, double *pVAxis) = 0;
  
  virtual HRESULT Set2DAxisData(const double *pRootPoint, const double *pHAxis, const double *pVAxis) = 0;
  
  virtual CATISpecObject_var GetOriginPoint() = 0;
  virtual CATISpecObject_var GetHDirection() = 0;
  virtual CATISpecObject_var GetVDirection() = 0;
};

CATDeclareHandler(CATI2DAxis,CATBaseUnknown);

#endif
