#ifndef CATITPSISOTolerancedFeatureFilter_H
#define CATITPSISOTolerancedFeatureFilter_H

// COPYRIGHT DASSAULT SYSTEMES 2018

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"

class CATUnicodeString;

extern "C" const IID IID_CATITPSISOTolerancedFeatureFilter;

/**
 * This interface is implemented by CATTPSToleranceWithDRF and CATTPSToleranceWithoutDRF features.
 * <b>Role</b>: Manages toleranced feature applied filter either localy assigned or inherited form the Annotation Set default definition.
 * Interface meaningful for ISO Standard only (up from 1101:2017 revision).
 */
class CATITPSISOTolerancedFeatureFilter : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * <br /><strong>Role</strong>: Retrieves the applied toleranced feature filtering (either form local definition of from Annotation Set default).
     * <br /><strong>Precondition</strong>: ISO Standard applied.
     *   @param oGDTTolerancedFeatureFiltering
     *     Value of the specification for toleranced feature filter.
     *  @return
     *   An HRESULT value. 
     *   <br /><strong>Legal values</strong>:
     *   <dl>
     *     <dt>S_OK</dt>
     *     <dd>This value has been correctly retrieved</dd>
     *     <dt>E_FAIL </dt>
     *     <dd>Otherwise</dd>
     *   </dl>
     */
    virtual HRESULT GetGDTFeatureFiltering ( CATUnicodeString & oGDTTolerancedFeatureFiltering ) const = 0;

    /**
     * <br /><strong>Role</strong>: Sets the toleranced feature filtering; definition is therefore becoming local (overloading) subsequently to this call. 
     * <br /><strong>Precondition</strong>: ISO Standard applied.
     *   @param ipGDTTolerancedFeatureFiltering
     *     New specification for toleranced feature filtering.
     *  @return
     *   An HRESULT value. 
     *   <br /><strong>Legal values</strong>:
     *   <dl>
     *     <dt>S_OK</dt>
     *     <dd>Assignment properly achieved</dd>
     *     <dt>E_FAIL </dt>
     *     <dd>Otherwise</dd>
     *   </dl>
     */
    virtual HRESULT SetGDTFeatureFiltering ( const CATUnicodeString * ipGDTTolerancedFeatureFiltering ) = 0;
};

CATDeclareHandler (CATITPSISOTolerancedFeatureFilter, CATBaseUnknown);

#endif
