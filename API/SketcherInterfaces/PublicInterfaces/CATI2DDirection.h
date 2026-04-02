/* -*-c++-*- */
#ifndef CATI2DDirection_h
#define CATI2DDirection_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATSketcherInterfaces.h"

/**
 * Interface for 2D direction edition.
 * <b>Role</b>: This interface describes the direction in 2D space. The methods
 * provides edition of the direction's parameters, which fully describe it.
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DDirection;
#else
extern "C" const IID IID_CATI2DDirection;
#endif

class ExportedByCATSketcherInterfaces CATI2DDirection : public CATBaseUnknown
{
  CATDeclareInterface;

public: 
  /**
   * Returns the informations that fully describes the direction.
   * @param <tt>double *iPoint</tt>
   * [out] The 2D origin point coordinates.
   * @param <tt>double *iDirection</tt>
   * [out] The 2D direction coordinates (normalized).
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT GetDirectionData(double *iPoint, double *iDirection) = 0;
  /**
   * Defines the informations that fully describes the direction.
   * @param <tt>const double *iPoint</tt>
   * [in] The 2D origin point coordinates.
   * @param <tt>const double *iDirection</tt>
   * [in] The 2D direction coordinates (will be normalized).
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT SetDirectionData(const double *iDirection) = 0;
};

CATDeclareHandler(CATI2DDirection,CATBaseUnknown);

#endif
