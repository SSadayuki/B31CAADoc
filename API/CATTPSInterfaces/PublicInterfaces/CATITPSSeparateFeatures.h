#ifndef CATITPSSeparateFeatures_H
#define CATITPSSeparateFeatures_H

// COPYRIGHT DASSAULT SYSTEMES 2018

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATBaseUnknown.h"

extern "C" const IID IID_CATITPSSeparateFeatures ;

/**
 * This interface is implemented by CATTPSToleranceWithDRF and CATTPSToleranceWithoutDRF features.
 * <b>Role</b>: Interface to Manage Separate Features specification (typing interface whatever is the standard).
 * <br />The SZ Modifier symbol (stating Separate Zones) is placed just after the Nx additional text applied to
 * the GDT to explicitly express that specification is constituted by a several independant
 * tolerance zones for each toleranced entity of the Collection it belongs to.
 */

class CATITPSSeparateFeatures : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
    * <br /><strong>Role</strong>: Sets SZ Display according to given argument.
    * <br /><strong>Precondition</strong>: ISO Standard applied (Starting from ISO 1101:2017).
    *  @param iValue [ in ]
    *    TRUE is given to set this option active; FALSE has to be provided otherwise.
    *  @return
    *   An HRESULT value. 
    *   <br /><strong>Legal values</strong>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>The value has been correctly set</dd>
    *     <dt>E_FAIL </dt>
    *     <dd>Otherwise</dd>
    *   </dl>
    */
    virtual HRESULT SetSZDisplay( const CATBoolean iValue = TRUE ) = 0 ;

    /**
    * <br /><strong>Role</strong>: Retrieves SZ Display modifier applicability.
    * <br /><strong>Precondition</strong>: ISO Standard applied (Starting from ISO 1101:2017).
    *  @param oValue
    *   States if SZ Modifier is displayed when TRUE value is returned; at the opposite
    *   oValue is FALSE.
    *  @return
    *   An HRESULT value. 
    *   <br /><strong>Legal values</strong>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>The value has been correctly retrieved</dd>
    *     <dt>E_FAIL </dt>
    *     <dd>Otherwise</dd>
    *   </dl>
    */
    virtual HRESULT GetSZDisplay( CATBoolean& oValue ) const = 0 ;  
};

CATDeclareHandler( CATITPSSeparateFeatures, CATBaseUnknown ) ;

#endif
