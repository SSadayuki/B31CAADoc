#ifndef CATITPSISOAssociatedTolerancedFeature_H
#define CATITPSISOAssociatedTolerancedFeature_H

// COPYRIGHT DASSAULT SYSTEMES 2018

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATTPSISO1101CapitalizedSymb.h"

class CATUnicodeString;

extern "C" const IID IID_CATITPSISOAssociatedTolerancedFeature;

/**
 * This interface is implemented by CATTPSToleranceWithDRF and CATTPSToleranceWithoutDRF features.
 * <b>Role</b>: Manages associated toleranced feature either localy assigned or inherited form the Annotation Set default definition.
 * Interface meaningful for ISO Standard only (up from 1101:2017 revision).
 */
class CATITPSISOAssociatedTolerancedFeature : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * <br /><strong>Role</strong>: Retrieves the applied associated toleranced feature (either form local definition of from Annotation Set default).
     * <br /><strong>Precondition</strong>: ISO Standard applied.
     *   @param oAssTolFeatureValue
     *     Value of the specification for associated toleranced feature.
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
    virtual HRESULT GetAssociatedTolFeature ( CATTPSISO1101CapitalizedSymb & oAssTolFeatureValue ) const = 0;

    /**
     * <br /><strong>Role</strong>: Sets the associated toleranced feature; definition is therefore becoming local (overloading) subsequently to this call. 
     * <br /><strong>Precondition</strong>: ISO Standard applied.
     *   @param iAssTolFeatureValue
     *     New specification for associated toleranced feature.
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
    virtual HRESULT SetAssociatedTolFeature ( const CATTPSISO1101CapitalizedSymb iAssTolFeatureValue ) = 0;
};

CATDeclareHandler (CATITPSISOAssociatedTolerancedFeature, CATBaseUnknown);

#endif
