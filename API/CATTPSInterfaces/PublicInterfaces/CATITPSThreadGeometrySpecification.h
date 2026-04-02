#ifndef CATITPSThreadGeometrySpecification_H
#define CATITPSThreadGeometrySpecification_H

// COPYRIGHT DASSAULT SYSTEMES 2012

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATTPSItfCPP.h"
#include "CATTPSToleranceThreadGeometry.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATTPSItfCPP IID IID_CATITPSThreadGeometrySpecification;
#else
extern "C" const IID IID_CATITPSThreadGeometrySpecification ;
#endif

/**
 * This interface is implemented by CATTPSDatum, CATTPSToleranceWithDRF and CATTPSToleranceWithoutDRF features.
 * Interface to manage the Specification for thread geometry.
 * <b>Role</b>: GD&T and datum specified for screw threads apply to the axis derived from the pitch 
 * cylinder. "MD" or "LD" symbol can be utilized to specify that they are applied on the major diameter or 
 * the minor diameter.
 */


class ExportedByCATTPSItfCPP CATITPSThreadGeometrySpecification 
                                                        : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Sets Thread Geometry Specification.
     *  @param iSpec
     *   Thread Geometry Specification.
     *  returns S_OK when the Specification has been correctly set, 
     *  returns E_FAIL otherwise.
     */
    virtual HRESULT SetSpecification (
                                const CATTPSToleranceThreadGeometry iSpec) = 0;

    /**
     * Retrieves Thread Geometry Specification.
     *  @param oSpec
     *   Thread Geometry Specification.
     *  returns S_OK when the Specification has been correctly retrieved, 
     *  returns E_FAIL otherwise.
     */
    virtual HRESULT GetSpecification (
                              CATTPSToleranceThreadGeometry & oSpec) const = 0;
 

};

CATDeclareHandler (CATITPSThreadGeometrySpecification, CATBaseUnknown);

#endif
