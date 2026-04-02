#ifndef CATITPSISOCharacteristic_H
#define CATITPSISOCharacteristic_H

// COPYRIGHT DASSAULT SYSTEMES 2018

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATTPSISO1101CapitalizedSymb.h"

class CATUnicodeString;

extern "C" const IID IID_CATITPSISOCharacteristic;

/**
 * This interface is implemented by CATTPSToleranceWithDRF and CATTPSToleranceWithoutDRF features.
 * <b>Role</b>: Manages GDT Characteristics mode either localy assigned or inherited form the Annotation Set default definition.
 * Interface meaningful for ISO Standard only (up from 1101:2017 revision).
 */
class CATITPSISOCharacteristic : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * <br /><strong>Role</strong>: Retrieves the GDT Characteristic mode (either form local definition of from Annotation Set default).
     * <br /><strong>Precondition</strong>: ISO Standard applied.
     *   @param oCharacteristicModeValue
     *     Value of the GDT Characteristic mode.
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
    virtual HRESULT GetMode ( CATTPSISO1101CapitalizedSymb & oCharacteristicModeValue ) const = 0;

    /**
     * <br /><strong>Role</strong>: Sets the GDT Characteristic mode; definition is therefore becoming local (overloading) subsequently to this call. 
     * <br /><strong>Precondition</strong>: ISO Standard applied.
     *   @param iCharacteristicModeValue
     *     New specification for GDT Characteristic mode.
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
    virtual HRESULT SetMode ( const CATTPSISO1101CapitalizedSymb iCharacteristicModeValue ) = 0;
};

CATDeclareHandler (CATITPSISOCharacteristic, CATBaseUnknown);

#endif
