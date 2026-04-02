#ifndef CATITTRSGeometry_H
#define CATITTRSGeometry_H

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"

class CATGeometry;
class CATBody;

extern "C" const IID IID_CATITTRSGeometry;

/**
 * Interface dedicated to ask features implementing this interface in order to
 * get associated geometry/topology.
 */
class CATITTRSGeometry: public IUnknown
{
  public:

    /**
     * Get topology of specifical feature
     *   @param opCellList
     *     the result list containing cell. this list could not exists as far
     *     as unreferenced pointer is given and will be generated.
     */
    virtual HRESULT GetTopology (CATLISTV(CATBaseUnknown_var) ** opCellList) = 0;

    /**
     * Get geometry of specifical feature
     *   @param opGeomList
     *     the result list containing cell. this list could not exists as far
     *     as unreferenced pointer is given and will be generated.
     */
    virtual HRESULT GetGeometry (CATLISTV(CATBaseUnknown_var) ** opGeomList) = 0;

    /**
     * Get body of specifical feature
     *   @param opiBody
     *     the result body containing cell.
     */
    virtual HRESULT GetBody (CATBody ** opiBody) = 0;

};
#endif
