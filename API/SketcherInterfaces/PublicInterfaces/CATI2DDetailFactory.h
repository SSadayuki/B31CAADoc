/* -*-c++-*- */
#ifndef CATI2DDetailFactory_h
#define CATI2DDetailFactory_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATSketcherInterfaces.h"

/**
 * Provides the client with the functionality for creating 2D detail.
 * <b>Role</b>: This interface is the factory used to instanciate a 2D detail.
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATI2DDetailFactory;
#else
extern "C" const IID IID_CATI2DDetailFactory;
#endif

class ExportedByCATSketcherInterfaces CATI2DDetailFactory : public IUnknown
{
  CATDeclareInterface;

public:

  /**
   * Create a 2D Detail.
   * @param <tt>iIID</tt>
   * [in] The interface identifier for which a pointer is requested.
   * @param <tt>oDetail</tt>
   * [out] The address where the returned pointer to the interface is located.
   * @param <tt>iUserType</tt>
   * [in] For future use (default value is 0).
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT CreateDetail(const IID &iid, IUnknown **oDetail, const int iUserType=0) = 0;
};

#endif
