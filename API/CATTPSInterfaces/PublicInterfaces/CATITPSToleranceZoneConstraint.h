#ifndef CATITPSToleranceZoneConstraint_H
#define CATITPSToleranceZoneConstraint_H

// COPYRIGHT DASSAULT SYSTEMES 2018

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATBaseUnknown.h"

extern "C" const IID IID_CATITPSToleranceZoneConstraint ;

/**
 * This interface is implemented by CATTPSToleranceWithoutDRF features (form only cause for instance pattern internal position is not concerned).
 * <b>Role</b>: Interface to Manage Tolerance Zone Constraint specification (starting from ISO 1101:2017 Standard).
 */

class CATITPSToleranceZoneConstraint : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * <br /><strong>Role</strong>: Sets OZ Constraint, OffSet Zone according to given argument.
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
    virtual HRESULT SetOZConstraint( const CATBoolean iValue = TRUE ) = 0 ;

    /**
     * <br /><strong>Role</strong>: Retrieves OZ Constraint, OffSet Zone application status.
     * <br /><strong>Precondition</strong>: ISO Standard applied.
     *  @param oValue
     *   Tells if OZ Constraint is displayed when TRUE value is returned; at the opposite oValue is FALSE.
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
    virtual HRESULT GetOZConstraint( CATBoolean& oValue ) const = 0 ;  

    /**
    * <br /><strong>Role</strong>: Sets VA Constraint, Variable Angle according to given argument.
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
    virtual HRESULT SetVAConstraint( const CATBoolean iValue = TRUE ) = 0 ;

    /**
    * <br /><strong>Role</strong>: Retrieves VA Constraint, Variable Angle application status.
    * <br /><strong>Precondition</strong>: ISO Standard applied.
    *  @param oValue
    *   Tells if VA Constraint is displayed when TRUE value is returned; at the opposite oValue is FALSE.
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
    virtual HRESULT GetVAConstraint( CATBoolean& oValue ) const = 0 ;  

    /**
    * <br /><strong>Role</strong>: Sets >< Constraint, Orientation Only according to given argument.
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
    virtual HRESULT SetOrientationOnlyConstraint( const CATBoolean iValue = TRUE ) = 0 ;

    /**
    * <br /><strong>Role</strong>: Retrieves >< Constraint, Orientation Only application status.
    * <br /><strong>Precondition</strong>: ISO Standard applied.
    *  @param oValue
    *   Tells if >< Constraint is displayed when TRUE value is returned; at the opposite oValue is FALSE.
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
    virtual HRESULT GetOrientationOnlyConstraint( CATBoolean& oValue ) const = 0 ;  
};

CATDeclareHandler( CATITPSToleranceZoneConstraint, CATBaseUnknown ) ;

#endif
