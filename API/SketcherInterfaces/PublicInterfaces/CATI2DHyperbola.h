/* -*-c++-*- */
#ifndef CATI2DHyperbola_h
#define CATI2DHyperbola_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATSketcherInterfaces.h"

/**
 * 2D Hyperbola definition.
 * <b>Role</b>: This interface describes a hyperbola in 2D space. Its methods
 * provide access to the hyperbola's parameters, which fully describe the hyperbola.
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DHyperbola;
#else
extern "C" const IID IID_CATI2DHyperbola;
#endif

class ExportedByCATSketcherInterfaces CATI2DHyperbola : public CATBaseUnknown
{
  CATDeclareInterface;

public:
  /**
   * Returns the hyperbola's parameters.
   * @param <tt>oPoint</tt>
   * [out] The 2D center point coordinates.
   * @param <tt>oAxis</tt>
   * [out] The 2D axis direction coordinates.
   * @param <tt>oRadius1</tt>
   * [out] The radius of the hyperbola.
   * @param <tt>oRadius2</tt>
   * [out] The imaginary radius of the hyperbola.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT GetHyperbolaData(double *oPoint,double *oAxis,double *oRadius1,double *oRadius2) = 0;
  /**
   * Defines the hyperbola's parameters.
   * @param <tt>iPoint</tt>
   * [in] The 2D center point coordinates.
   * @param <tt>iAxis</tt>
   * [in] The 2D axis direction coordinates.
   * @param <tt>iRadius1</tt>
   * [in] The radius of the hyperbola.
   * @param <tt>iRadius2</tt>
   * [in] The imaginary radius of the hyperbola.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT SetHyperbolaData(const double *iPoint,const double *iAxis,double iRadius1,double iRadius2) = 0;
};

CATDeclareHandler(CATI2DHyperbola,CATBaseUnknown);

#endif
