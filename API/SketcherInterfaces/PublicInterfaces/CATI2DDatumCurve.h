/* -*-c++-*- */
#ifndef CATI2DDatumCurve_h
#define CATI2DDatumCurve_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */ 

#include "CATBaseUnknown.h"
#include "CATSketcherInterfaces.h"
class CATPCurve;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DDatumCurve;
#else
extern "C" const IID IID_CATI2DDatumCurve;
#endif

/**
 * Interface representing a Sketcher datum curve.
 * <br> A CATI2DDatumCurve is a curve which geometry is a CATPSpline, 
 * a CATPNurbs or a CATPCurveEquation.
 * <br> A CATI2DDatumCurve is created by the <tt>CreateUnspec</tt>
 * method of the <tt>CATI2DWFFactory</tt> interface.
 */
class ExportedByCATSketcherInterfaces CATI2DDatumCurve : public IUnknown
{
  CATDeclareInterface;

public:

/**
 * Returns the CATPCurve of <tt>this</tt> datum curve.
 * @param <tt>CATPCurve **opCurve</tt>
 * [out] The pointer to the geometry of <tt>this</tt> datum curve.
 */
  virtual HRESULT GetCurve(CATPCurve **opCurve) = 0;

/**
 * Sets the geometric CATPCurve of <tt>this</tt> datum curve. 
 * @param <tt>CATPCurve *ipCurve</tt>
 * [in] The pointer to the geometry of <tt>this</tt> datum curve.
 * <b>NOTE:</b>
 * These enable the Client to modify the geometry of a datum curve.
 */
  virtual HRESULT SetCurve(CATPCurve *ipCurve) = 0;
};

#endif
