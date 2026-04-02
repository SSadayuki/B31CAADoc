/* -*-c++-*- */
#ifndef CATI2DCstPoint_h
#define CATI2DCstPoint_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATI2DPoint.h"
#include "CATSketcherInterfaces.h"

class CATI2DDirection_var;
class CATICkeParm_var;

/**
 * 2D Spline Control Point Management.
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DCstPoint;
#else
extern "C" const IID IID_CATI2DCstPoint;
#endif

class ExportedByCATSketcherInterfaces CATI2DCstPoint : public CATI2DPoint
{
  CATDeclareInterface;

public: 
  /**
   * Get Tangent Direction.
   */
  virtual CATI2DDirection_var GetTangent() = 0;
  /**
   * Set Tangent Direction.
   */
  virtual HRESULT SetTangent(const double *iDirection) = 0;
  /**
   * Unset Tangent Direction.
   */
  virtual HRESULT UnsetTangent() = 0;

  /**
   * Get Curvature coordinates.
   */
  virtual HRESULT GetCurvature(double *oCurvature) = 0;

  /**
   * Get Curvature norm as a CATICkeParm.
   */
  virtual HRESULT GetCurvature(const IID &iid,void ** oObj) = 0;

  /**
   * Define Curvature coordinates.
   */
  virtual HRESULT SetCurvature(const double *iCurvature) = 0;

  /**
   * Define Curvature norm as a CATICkeParm.
   */
  virtual HRESULT SetCurvature(const CATICkeParm_var& iparam) = 0;

  /**
   * Unset Curvature.
   */
  virtual HRESULT UnsetCurvature() = 0;
};

CATDeclareHandler(CATI2DCstPoint,CATI2DPoint);

#endif
