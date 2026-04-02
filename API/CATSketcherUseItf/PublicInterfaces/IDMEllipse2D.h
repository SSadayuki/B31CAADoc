/* -*-c++-*- */
#ifndef IDMEllipse2D_h
#define IDMEllipse2D_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATSketcherUseItf.h"

/**
 * OLE for Design and Modeling 2D Ellipse Definition.
 * <b>Role</b>: This interface describes the ellipse in 2D space. Its single method
 * provides access to the ellipse's parameters, which fully describe the ellipse.
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherUseItf IID IID_IDMEllipse2D;
#else
extern "C" const IID IID_IDMEllipse2D;
#endif

class ExportedByCATSketcherUseItf IDMEllipse2D : public CATBaseUnknown
{
  CATDeclareInterface;

public:                                      

/**
 * Returns the ellipse's parameters.
 * @param <tt>double *pCenterPoint</tt>
 * [out] Outputs the centre point of the ellipse.
 * @param <tt>double *pMajorAxis</tt>
 * [out] Outputs the ellipse orientation as a 2D vector. The length of the vector is the major radius.
 * @param <tt>double *pMinorMajorRatio</tt>
 * [out] Outputs the ratio of the length of the minor axis over the major axis.
 */
  virtual HRESULT GetEllipseData(double *pCenterPoint,double *pMajorAxis,double *pMinorMajorRatio) = 0;
};

CATDeclareHandler(IDMEllipse2D,CATBaseUnknown);

#endif
