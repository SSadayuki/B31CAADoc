#ifndef CATITPSProjectedToleranceZone_H
#define CATITPSProjectedToleranceZone_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

class CATMathPoint;
class CATMathVector;
class CATITPSList;

extern "C" const IID IID_CATITPSProjectedToleranceZone;

/**
 * Interface for accessing projected tolerance zone informations of a TPS.
 *
 *         ========|   Position      Length     
 *         /       |<----------->|<----------->|
 *  Toleranced     |             |             |
 *  Surface  - - - +------->     +=============+
 *      \          |\       \               \
 *        \        | Origin Direction       Projected Tolerance Zone
 *         ========|
 */
class CATITPSProjectedToleranceZone : public IUnknown
{
  public:

    /**
     * Retrieves reference axis of the projected tolerance zone.
     * The returned point and vector define a axis system that is used to 
     * defined the 3D position of the tolerance zone.
     * <br><b>Lifecycle rules deviation</b>: oOrigin must be a pointer 
     * on an already allocated CATMathPoint instance. In the same way 
     * oDirection must be a pointer on an already allocated CATMathVector
     * instance.
     */
    virtual HRESULT GetProjectedTolZoneReference (
                                         CATMathPoint * oOrigin,
                                         CATMathVector * oDirection) const = 0;

    /**
     * Retrieves position of the projected tolerance zone (in millimeters).
     * The position defines the starting point of the tolerance zone.
     * This point can be computed by using Origin and Direction of the axis.
     */
    virtual HRESULT GetProjectedTolZonePosition (double * oPosition) const = 0;

    /**
     * Retrieves length of the projected tolerance zone (in millimeters).
     * The length defines the ending point of the tolerance zone. 
     * This point can be computed by using Origin and Direction of the axis.
     */
    virtual HRESULT GetProjectedTolZoneLength (double * oLength) const = 0;

   /**
    * Retrieves the Dimensions of the ProjectedToleranceZone.
    */
    virtual HRESULT GetProjectedTolZoneDimensions (CATITPSList **opiDimensionsList) const = 0;

};
#endif
