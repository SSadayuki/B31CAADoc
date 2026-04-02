#ifndef CATITPSStatisticalTolerancing_H
#define CATITPSStatisticalTolerancing_H

// COPYRIGHT DASSAULT SYSTEMES 2012

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATTPSItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATTPSItfCPP IID IID_CATITPSStatisticalTolerancing;
#else
extern "C" const IID IID_CATITPSStatisticalTolerancing ;
#endif

/**
 * This interface is implemented by CATTPSDimension, CATTPSToleranceWithDRF and CATTPSToleranceWithoutDRF features.
 * Interface to manage Statistical Tolerancing symbol.
 * <b>Role</b>: This symbol indicates that a tolerance is based on statistical toleranincg. 
 * The assigning of tolerances to related components of an assembly is on the basis of sound 
 * statistics (such as the assembly tolerance is equal to the square root of the sum of the 
 * squares of the individual tolerances). Where the tolerances assigned by arithmetic stacking 
 * are restrictive, statistical tolerancing may be uses for increased individual feature tolerance.
 */

class ExportedByCATTPSItfCPP CATITPSStatisticalTolerancing : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Sets Statistical Tolerancing symbol.
     *  @param iValue
     *   Statistical Tolerancing.
     *  returns S_OK when the value has been correctly set, 
     *  returns E_FAIL otherwise.
     */
    virtual HRESULT SetStatisticalTolerancing (const CATBoolean iValue) = 0;

    /**
     * Retrieves Statistical Tolerancing symbol.
     *  @param oValue
     *   Statistical Tolerancing.
     *  returns S_OK when the value has been correctly retrieved, 
     *  returns E_FAIL otherwise.
     */
    virtual HRESULT GetStatisticalTolerancing (CATBoolean& oValue) const = 0;  

};

CATDeclareHandler (CATITPSStatisticalTolerancing, CATBaseUnknown);

#endif
