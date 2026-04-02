/* -*-c++-*- */
#ifndef CATI2DParabola_h
#define CATI2DParabola_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATSketcherInterfaces.h"

/**
 * 2D Parabola Definition.
 * <b>Role</b>: This interface describes a parabola in 2D space. Its methods
 * provide access to the parabola's parameters, which fully describe the parabola.
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DParabola;
#else
extern "C" const IID IID_CATI2DParabola;
#endif

class ExportedByCATSketcherInterfaces CATI2DParabola : public CATBaseUnknown
{
  CATDeclareInterface;

public: 
  /**
   * Returns the parabola's parameters.
   * @param <tt>oPoint</tt>
   * [out] The 2D center point coordinates.
   * @param <tt>oAxis</tt>
   * [out] The 2D axis direction coordinates.
   * @param <tt>oFocalDistance</tt>
   * [out] The focal distance of the parabola.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT GetParabolaData(double *oPoint,double *oAxis,double *oFocalDistance) = 0;
  /**
   * Defines the parabola's parameters.
   * @param <tt>iPoint</tt>
   * [in] The 2D center point coordinates.
   * @param <tt>iAxis</tt>
   * [in] The 2D axis direction coordinates.
   * @param <tt>iFocalDistance</tt>
   * [in] The focal distance of the parabola.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT SetParabolaData(const double *iPoint,const double *iAxis,double iFocalDistance) = 0;
};

CATDeclareHandler(CATI2DParabola,CATBaseUnknown);

#endif
