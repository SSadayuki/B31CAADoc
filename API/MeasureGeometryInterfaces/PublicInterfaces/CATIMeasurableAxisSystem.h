// COPYRIGHT Dassault Systemes 2001
//===================================================================
//
// CATIMeasurableAxisSystem.h
//   This interface allows to get measurements on an axis system.
//
//===================================================================
#ifndef CATIMeasurableAxisSystem_H
#define CATIMeasurableAxisSystem_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATMeasureGeometryInterfaces.h"
#include "CATIMeasurable.h"

class CATMathAxis;

extern ExportedByCATMeasureGeometryInterfaces IID IID_CATIMeasurableAxisSystem ;

//------------------------------------------------------------------


/**
 * Get measurements on an axis system.
 */
class ExportedByCATMeasureGeometryInterfaces CATIMeasurableAxisSystem: public CATIMeasurable
{
  CATDeclareInterface;

  public:

    /**
     * Get the position of the the axis system.
     * @param ioAxis
     *    The position with respect to absolute axis system.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetAxis (CATMathAxis & ioAxis) const=0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATIMeasurableAxisSystem, CATBaseUnknown );

#endif
