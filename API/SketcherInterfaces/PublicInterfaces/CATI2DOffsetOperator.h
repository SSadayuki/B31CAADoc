/* -*-c++-*- */
#ifndef CATI2DOffsetOperator_h
#define CATI2DOffsetOperator_h

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATI2DOffset.h"

/**
 * The methods of this interface handle an offset use-edge operator (the offset reference element 
 * does not belong to the sketch).
 */

#include "CATSketcherInterfaces.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DOffsetOperator;
#else
extern "C" const IID IID_CATI2DOffsetOperator;
#endif

class ExportedByCATSketcherInterfaces CATI2DOffsetOperator : public CATI2DOffset
{
  CATDeclareInterface;

public:

  /**
   * Retrieves the propagation type.
   * @param oPropagType
   * [out] The propagation type.
   * <br>e.g.: <code>OffsetPropagType_Point</code>
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT GetPropagationType(int *oPropagType) = 0;
  /**
   * Sets the propagation type.
   * @param iPropagType
   * [in] The relimitation type.
   * <br>e.g.: <code>OffsetPropagType_Tangent</code>
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT SetPropagationType(int iPropagType) = 0;

  /**
   * Retrieves the optional init geometry.
   * @param <tt>iIID</tt>
   * [in] The interface identifier for which a pointer is requested.
   * @param <tt>oGeom</tt>
   * [out] The address where the returned pointer to the interface is located.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT GetInitGeometry(const IID& iIID, CATBaseUnknown **oGeom) = 0;
  /**
   * Sets the optional init geometry.
   * @param iGeom
   * [in] The init geometry.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT SetInitGeometry(CATBaseUnknown *iGeom) = 0;

  /**
   * Retrieves the use-edge offset operation mode (project or intersect the external geometry to offset).
   * @param oMode
   * [out] The use-edge operation mode.
   * <br>e.g.: <code>OffsetModeType_Intersect</code>
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT GetOperMode(int *oMode) = 0;
  /**
   * Sets the use-edge offset operation mode.
   * @param iMode
   * [in] The use-edge operation mode.
   * <br>e.g.: <code>OffsetModeType_Project</code>
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT SetOperMode(int iMode) = 0;
};

CATDeclareHandler(CATI2DOffsetOperator,CATI2DOffset);
#endif
