/* -*-c++-*- */
#ifndef CATI2DCircle_h
#define CATI2DCircle_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IDMCircle2D.h"
#include "CATSketcherInterfaces.h"
class CATI2DPoint_var;
class CATI2DCurve;
class CATI2DConstraint_var;

/**
 * 2D Circle definition.
 * <b>Role</b>: This interface is used to access to 2D Circle parameters.
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DCircle;
#else
extern "C" const IID IID_CATI2DCircle;
#endif

class ExportedByCATSketcherInterfaces CATI2DCircle : public IDMCircle2D
{
  CATDeclareInterface;
  
public:
  /**
   * Defines the circle's parameters.
   * @param <tt>iPoint</tt>
   * [out] The new 2D center point coordinates.
   * @param <tt>iRadius</tt>
   * [out] The new radius.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT SetCircleData(const double *iPoint,
                                double iRadius) = 0;
  
  virtual CATI2DPoint_var GetCenter(int iGenerate=1) = 0;
  
  virtual CATI2DConstraint_var SetCenter(const CATI2DPoint_var& iPoint) = 0;

  virtual HRESULT GetStartAngle(double *oStartAngle) = 0;

  virtual HRESULT GetEndAngle(double *oEndAngle) = 0;

  virtual HRESULT Set3PointsArc(const double *iPt1,
                                const double *iPt2,
                                const double *iPt3,
                                int iTrim=1) = 0;

  virtual HRESULT SetTangentArc(const double *iPt1,
                                const double *iTg1,
                                const double *iPt2,
                                int iTrim=1) = 0;

  virtual HRESULT SetCorner(const CATI2DCurve *iCurve1,
                            const CATI2DCurve *iCurve2,
                            const double *iPoint,
                            const double *iRadius=NULL) = 0;
};

CATDeclareHandler(CATI2DCircle,IDMCircle2D);

#endif
