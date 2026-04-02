#ifndef CATITPSUnitBasisRefinement_H
#define CATITPSUnitBasisRefinement_H

// COPYRIGHT DASSAULT SYSTEMES 2018

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBoolean.h"
#include "CATBaseUnknown.h"
#include "CATTPSUnitBasisArea.h"
#include "CATTPSToleranceValueType.h"

class CATICkeParm;

extern "C" const IID IID_CATITPSUnitBasisRefinement;

/**
* This interface is implemented by CATTPSToleranceWithDRF and CATTPSToleranceWithoutDRF features.
* <b>Role</b>: Interface for Unit Basis tolerance refinement management.
* <br />Geometrical specifications may be applied such a unit basis refinement with respect to its tolerance value;
* this is a means of limiting an abrupt surface/curve variation within a relatively small area/length of the feature.
* <br /><em>Notice: </em>most of the methods are returning a failure execution code in case the application status of unit basis is off.
*/
class CATITPSUnitBasisRefinement : public CATBaseUnknown
{
  CATDeclareInterface ;

  public:

    /**
     * <br /><strong>Role</strong>: Sets the unit basis application according to given boolean argument.
     * @param iApplyUnitBasis [ in ]
     *   Optional argument: Switch value to set On if TRUE (default value) or
     *   Off conversely the unit basis area on underlying geometrical tolerance.
     * @return
     *   An HRESULT value. 
     *   <br /><strong>Legal values</strong>:
     *   <dl>
     *     <dt>S_OK</dt>
     *     <dd>In case of success</dd>
     *     <dt>E_FAIL </dt>
     *     <dd>Otherwise</dd>
     *   </dl>
     */
    virtual HRESULT Apply( CATBoolean iApplyUnitBasis = TRUE ) = 0;

    /**
    * <br /><strong>Role</strong>: Retrieves the application status of unit basis.
    * @param oUnitBasisStatus [ out ]
    *   Value is TRUE set if unit basis is to consider or FALSE otherwise.
    * @return
    *   An HRESULT value. 
    *   <br /><strong>Legal values</strong>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>In case of success</dd>
    *     <dt>E_FAIL </dt>
    *     <dd>Otherwise</dd>
    *   </dl>
    */
    virtual HRESULT GetApplicationStatus( CATBoolean & oUnitBasisStatus ) const = 0;

    /**
     * <br /><strong>Role</strong>: Sets the form of the unit basis.
     * Notice: ISO standard does not manage circular form area; consequently this method
     * returns a failure execution code on such an invocation.
     *  @param iAreaForm [ in ]
     *    Form of the unit basis.
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
    virtual HRESULT SetAreaForm( const CATTPSUnitBasisArea iAreaForm ) = 0;

    /**
     * <br /><strong>Role</strong>: Gets the form of the unit basis.
     *  @param oAreaForm [ out ]
     *    Form of the unit basis.
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
    virtual HRESULT GetAreaForm( CATTPSUnitBasisArea& oAreaForm ) const = 0; 

     /**
     * <br /><strong>Role</strong>: Sets the size(s) of the unit basis.
     *  @param ipiSize1 [ in ]
      *    Size of the first dimension of the unit basis. Argument is enough for unidirectional
      *    tolerance zone, or in case unit basis definition relies on a single dimension.
      *  @param ipiSize2 [ in ]
      *    Optionbal argument: pay attention to provide this argument when unit basis has
      *    a rectangular shape.
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
    virtual HRESULT SetAreaSize( const CATICkeParm * ipiSize1, const CATICkeParm * ipiSize2 = NULL ) = 0;

    /**
     * <br /><strong>Role</strong>: Gets the size of the the unit basis.
     *  @param opiSize1 [ out, CATBaseUnknown#Release ]
     *    Size of first dimension of the unit basis.
     *  @param opiSize2 [ out, CATBaseUnknown#Release ]
     *    Optional argument: useful only when unit basis is rectangular. When missing and
     *    unit basis shape is Rectangular, this method aborts.
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
    virtual HRESULT GetAreaSize( CATICkeParm ** opiSize1, CATICkeParm ** opiSize2 = NULL ) const = 0;

    /**
    * <br /><strong>Role</strong>: Sets the tolerance refinement.
    * @param iTolRefinementActivation [ in ]
    *    Optional argument: Switch value to set On if TRUE (default value) or Off conversely.
    * @return
    *   An HRESULT value. 
    *   <br /><strong>Legal values</strong>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>In case of success</dd>
    *     <dt>E_FAIL </dt>
    *     <dd>Otherwise</dd>
    *   </dl>
    */
    virtual HRESULT SetToleranceRefinement( CATBoolean iTolRefinementActivation = TRUE ) = 0;

    /**
    * <br /><strong>Role</strong>: Retrieves the activation status of tolerance refinement on unit basis.
    * @param oUnitBasisStatus [ out ]
    *   Value is TRUE set if unit basis estrictive tolerance is applied or FALSE otherwise.
    * @return
    *   An HRESULT value. 
    *   <br /><strong>Legal values</strong>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>In case of success</dd>
    *     <dt>E_FAIL </dt>
    *     <dd>Otherwise</dd>
    *   </dl>
    */
    virtual HRESULT GetToleranceRefinementStatus( CATBoolean & oTolRefinementActivation ) const = 0;

    /**
    * <br /><strong>Role</strong>: Sets the value type of tolerance zone.     
    *  @param iType [ in ]
    *    value type.
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
    virtual HRESULT SetToleranceValueType( const CATTPSToleranceValueType iType ) = 0;

    /**
    * <br /><strong>Role</strong>: Retrieve the value type of tolerance zone.     
    *  @param oType [ out ]
    *    value type.
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
    virtual HRESULT GetToleranceValueType( CATTPSToleranceValueType& oType ) const = 0;

    /**
    * <br /><strong>Role</strong>: Sets the tolerance refinement value.
    *  @param ipiRestrictiveTolerance [ in ]
    *    Knowledge parameter containing value definition to apply as tolerance restriction
    *    per unit basis. Magnitude of this parameter is expected to match with CATTPSToleranceValueType;
    *    thus if CATTPSTolNumericalValue a length parameter is awaited while a string
    *    parameter is convenient for CATTPSTolTabulatedValue tolerance.
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
    virtual HRESULT SetRefinementTolValue( const CATICkeParm * ipiRestrictiveTolerance ) = 0;

    /**
    * <br /><strong>Role</strong>: Gets the tolerance refinement value.
    *  @param opiRestrictiveTolerance [ out, CATBaseUnknown#Release ]
    *    Knowledge parameter defines the restrictive tolerance value; its type is
    *    depending on CATTPSToleranceValueType (length for numerical or string for tabulated).
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
    virtual HRESULT GetRefinementTolValue( CATICkeParm ** opiRestrictiveTolerance ) const = 0;
};
CATDeclareHandler(CATITPSUnitBasisRefinement, CATBaseUnknown);
#endif

