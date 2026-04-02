/* -*-c++-*- */
#ifndef CATI2DEllipse_h
#define CATI2DEllipse_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IDMEllipse2D.h"
#include "CATSketcherInterfaces.h"

class CATI2DPoint_var;
class CATI2DConstraint_var;

/**
 * 2D Ellipse definition.
 * <b>Role</b>: This interface describes the ellipse in 2D space. Its methods
 * provide access to the ellipse's parameters, which fully describe the ellipse.
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DEllipse;
#else
extern "C" const IID IID_CATI2DEllipse;
#endif

class ExportedByCATSketcherInterfaces CATI2DEllipse : public IDMEllipse2D
{
  CATDeclareInterface;

public:
  /**
   * Defines the ellipse's parameters.
   * @param <tt>iPoint</tt>
   * [in] The centre point of the ellipse.
   * @param <tt>iMajorAxis</tt>
   * [in] The ellipse orientation as a 2D vector. The length of the vector is the major radius.
   * @param <tt>iMinorMajorRatio</tt>
   * [in] The ratio of the length of the minor axis over the major axis.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT SetEllipseData(const double *iPoint,const double *iMajorAxis,double iMinorMajorRatio) = 0;
  /**
   * Returns the ellipse's center.
   * @param <tt>iGenerate</tt>
   * [in] Optional parameter which force center point creation if it does not exists.
   * @return <tt>CATI2DPoint_var</tt>
   * A handler on the returned center point.
   */
  virtual CATI2DPoint_var GetCenter(int iGenerate=1) = 0;
  /**
   * Defines the ellipse's center.
   * @param <tt>iPoint</tt>
   * [in] A handler on the point to define as center.
   * @return <tt>CATI2DConstraint_var</tt>
   * A handler on the 2D constraint which links the center point and the ellipse (concentricity).
   */
  virtual CATI2DConstraint_var SetCenter(const CATI2DPoint_var& iPoint) = 0;
};

CATDeclareHandler(CATI2DEllipse,IDMEllipse2D);

#endif
