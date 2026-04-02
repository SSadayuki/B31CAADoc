/* -*-c++-*- */
#ifndef CATI2DDitto_h
#define CATI2DDitto_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATSketcherInterfaces.h"

/**
 * Interface of 2D Ditto.
 * <b>Role</b>: This interface is used to access 2D ditto properties.
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DDitto;
#else
extern "C" const IID IID_CATI2DDitto;
#endif

class ExportedByCATSketcherInterfaces CATI2DDitto : public CATBaseUnknown
{
  CATDeclareInterface;

public: 

  /**
   * Returns the associated detail.
   * @param <tt>iIID</tt>
   * [in] The interface identifier for which a pointer is requested.
   * @param <tt>oDetail</tt>
   * [out] The address where the returned pointer to the interface is located.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT GetDetail(const IID &iIID, IUnknown **oDetail) = 0;

  /**
   * Define the position matrix of the ditto.
   * @param <tt>iMatrix</tt>
   * [in] The new position matrix of the ditto.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT Set2DAxisMatrix(const double iMatrix[6]) = 0;

  /**
   * Read the position matrix of the ditto.
   * @param <tt>oMatrix</tt>
   * [out] The current position matrix of the ditto.
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT Get2DAxisMatrix(double oMatrix[6]) = 0;
};
CATDeclareHandler(CATI2DDitto,CATBaseUnknown);

#endif
