/* -*-c++-*- */
#ifndef CATI2DOffset_h
#define CATI2DOffset_h

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
class CATICkeParm;

/**
 * The methods of this interface handle offset geometrical elements.
 */

#include "CATSketcherInterfaces.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DOffset;
#else
extern "C" const IID IID_CATI2DOffset;
#endif

class ExportedByCATSketcherInterfaces CATI2DOffset : public CATBaseUnknown
{
  CATDeclareInterface;

public:

  /**
   * Retrieves the reference geometry that is offseted.
   * @param <tt>iIID</tt>
   * [in] The interface identifier for which a pointer is requested.
   * @param <tt>oGeom</tt>
   * [out] The address where the returned pointer to the interface is located.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT GetReferenceGeometry(const IID& iIID, CATBaseUnknown **oGeom) = 0;
  /**
   * Sets the reference geometry to offset.
   * @param iGeom
   * [in] The reference geometry.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT SetReferenceGeometry(CATBaseUnknown *iGeom) = 0;

  /**
   * Retrieves the relimitation type.
   * @param oCornerType
   * [out] The relimitation definition type.
   * <br>e.g.: <code>OffsetCornerType_Round</code>
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT GetCornerType(int *oCornerType) = 0;
  /**
   * Sets the relimitation type.
   * @param iCornerType
   * [in] The relimitation definition type.
   * <br>e.g.: <code>OffsetCornerType_Sharp</code>
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT SetCornerType(int iCornerType) = 0;

  /**
   * Retrieves the offset value as a literal.
   * @param oOffsetParm
   * [out] The offset parameter.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT GetOffsetParm(CATICkeParm **oOffsetParm) = 0;
};

CATDeclareHandler(CATI2DOffset,CATBaseUnknown);
#endif
