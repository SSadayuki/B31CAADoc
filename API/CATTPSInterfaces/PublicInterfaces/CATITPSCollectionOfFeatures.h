#ifndef CATITPSCollectionOfFeatures_H
#define CATITPSCollectionOfFeatures_H

// COPYRIGHT DASSAULT SYSTEMES 2018

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATBaseUnknown.h"

extern "C" const IID IID_CATITPSCollectionOfFeatures ;

/**
 * This interface is implemented by CATTPSToleranceWithDRF and CATTPSToleranceWithoutDRF features.
 * <b>Role</b>: Interface to Manage Collection of Features specification (typing interface whatever is the standard)
 * and CZ Modifier display.
 * <br />The CZ Modifier symbol (stating Collection of Features) is placed just after
 * the GDT tolerance zone to explicitly express that specification is constituted by a single
 * tolerance zone whithin each toleranced entity of the Collection it belongs to.
 * Hence, this modifier (represented by a CZ string) is applicable only to the toleranced element,
 * but not applicable to DRF.
 */

class CATITPSCollectionOfFeatures : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
    * <br /><strong>Role</strong>: Sets CZ Display according to given argument.
    * <br /><strong>Precondition</strong>: ISO Standard applied.
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
    virtual HRESULT SetCZDisplay( const CATBoolean iValue = TRUE ) = 0 ;

    /**
    * <br /><strong>Role</strong>: Retrieves CZ Display modifier applicability.
    * <br /><strong>Precondition</strong>: ISO Standard applied.
    *  @param oValue
    *   States if CZ Modifier is displayed when TRUE value is returned; at the opposite
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
    virtual HRESULT GetCZDisplay( CATBoolean& oValue ) const = 0 ;  

};

CATDeclareHandler( CATITPSCollectionOfFeatures, CATBaseUnknown ) ;

#endif
