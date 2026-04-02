#ifndef CATITPSSetISODefaultSpecifications_H
#define CATITPSSetISODefaultSpecifications_H

// COPYRIGHT DASSAULT SYSTEMES 2018

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBoolean.h"
#include "CATBaseUnknown.h"
#include "CATTPSLinearSizeOperatorISO.h"
#include "CATTPSAngularSizeOperatorISO.h"
#include "CATTPSISO1101CapitalizedSymb.h"

class CATUnicodeString;

extern "C" const IID IID_CATITPSSetISODefaultSpecifications;

/**
* This interface is implemented by the Annotation Set feature.
* <b>Role</b>: Manages default operators (size and geometrical tolerances) driven by the Annotation Set.
 * Interface meaningful for ISO Standard only (up from 14405 revision).
 */
class CATITPSSetISODefaultSpecifications : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
    * Enum to define the toleranced feature filtering area possible ranges.
    * @param All  
    *   Filtering policy applies to All form, location, orientation and run-out specifications.
    * @param Form  
    *   Filtering policy applies to form specifications; when All is active too on the set, such an
    *   activation is a way to overload All policy for Form GDTs.
    * @param Orientation  
    *   Filtering policy applies to orientation specifications; when All is active too on the set,
    *   such an activation is a way to overload All policy for Orientation GDTs.
    * @param Location  
    *   Filtering policy applies to location specifications; when All is active too on the set,
    *   such an activation is a way to overload All policy for Location GDTs.
    */
    enum GDTFeatureFilteringScope {
      All,
      Form,
      Orientation,
      Location
    };

    /**
     * <br /><strong>Role</strong>: Retrieves the default linear size operator.
     * <br /><strong>Precondition</strong>: ISO Standard applied.
     *   @param oDefaultOperator
     *     Value of the linear size operator.
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
    virtual HRESULT GetLinearSizeOperator ( CATTPSLinearSizeOperatorISO & oDefaultOperator ) const = 0;

    /**
     * <br /><strong>Role</strong>: Sets the default linear size operator. 
     * <br /><strong>Precondition</strong>: ISO Standard applied.
     *   @param iDefaultOperator
     *     New default linear size operator of the annotation set.
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
    virtual HRESULT SetLinearSizeOperator ( const CATTPSLinearSizeOperatorISO iDefaultOperator ) = 0;

    /**
     * <br /><strong>Role</strong>: Retrieves the default angular size operator.
     * <br /><strong>Precondition</strong>: ISO Standard applied.
     *   @param oDefaultOperator
     *     Value of the angular size operator.
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
    virtual HRESULT GetAngularSizeOperator ( CATTPSAngularSizeOperatorISO & oDefaultOperator ) const = 0;

    /**
     * <br /><strong>Role</strong>: Sets the default angular size operator. 
     * <br /><strong>Precondition</strong>: ISO Standard applied.
     *   @param iDefaultOperator
     *     New default angular size operator of the annotation set.
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
    virtual HRESULT SetAngularSizeOperator ( const CATTPSAngularSizeOperatorISO iDefaultOperator ) = 0;

    /**
     * <br /><strong>Role</strong>: Retrieves the default specification elements for form association.
     * <br /><strong>Precondition</strong>: ISO Standard applied.
     *   @param oFormDefaultSpecElt
     *     Value of the default specification elements for form association.
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
    virtual HRESULT GetFormAssociationDefaultSpecElement ( CATTPSISO1101CapitalizedSymb & oFormDefaultSpecElt ) const = 0;

    /**
     * <br /><strong>Role</strong>: Sets the default specification elements for form association. 
     * <br /><strong>Precondition</strong>: ISO Standard applied.
     *   @param iFormDefaultSpecElt
     *     New the default specification elements for form association.
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
    virtual HRESULT SetFormAssociationDefaultSpecElement ( const CATTPSISO1101CapitalizedSymb iFormDefaultSpecElt ) = 0;

    /**
     * <br /><strong>Role</strong>: Returns activation status of one specific toleranced feature filtering.
     * <br /><strong>Precondition</strong>: ISO Standard applied.
     *   @param iFocusedScope
     *     Indicates the facet of the GDT toleranced feature filtering according to GDTFeatureFilteringScope enumeration.
     *   @param oActiveStatus
     *     TRUE is sent back if the set is defining a default filtering policy for toleranced feature applied on
     *     the scope of GDTs corresponding to iFocusedScope. Given this condition, end-user can reasonably invoke
     *     @href CATITPSSetISODefaultSpecifications#GetGDTFeatureFiltering, @href CATITPSSetISODefaultSpecifications#SetAllGDTFeatureFiltering.
     *     <br />FALSE is sent back otherwise.
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
    virtual HRESULT GetGDTFeatureFilteringApplication ( const GDTFeatureFilteringScope iFocusedScope, CATBoolean & oActiveStatus ) const = 0;

    /**
     * <br /><strong>Role</strong>: Activates/Deactivates the default specification elements for all semantic GDT toleranced feature filtering. 
     * <br /><strong>Precondition</strong>: ISO Standard applied.
     *   @param iFocusedScope
     *     Indicates the facet of the GDT toleranced feature filtering according to GDTFeatureFilteringScope enumeration.
     *   @param iActivationStatus
     *     Optional argument provided as TRUE value to activate GDT filtering policy; pass it to FALSE in case, you need
     *     to remove default filtering capability.
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
    virtual HRESULT SetGDTFeatureFilteringApplication ( const GDTFeatureFilteringScope iFocusedScope, CATBoolean iActivationStatus = TRUE ) = 0;

    /**
     * <br /><strong>Role</strong>: Retrieves the default specification for one specific toleranced feature filtering.
     * <br /><strong>Precondition</strong>: ISO Standard applied.
     * Method is sucessful in case GetGDTFeatureFilteringApplication is stating a TRUE activation status for the same iFocusedScope,
     * @href CATITPSSetISODefaultSpecifications#GetGDTFeatureFilteringApplication.
     *   @param iFocusedScope
     *     Indicates the facet of the GDT toleranced feature filtering according to GDTFeatureFilteringScope enumeration.
     *   @param oGDTTolerancedFeatureFiltering
     *     Value of the default specification elements for toleranced feature filtering area within the scope of GDTs
     *     corresponding to iFocusedScope.
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
    virtual HRESULT GetGDTFeatureFiltering ( const GDTFeatureFilteringScope iFocusedScope, CATUnicodeString & oGDTTolerancedFeatureFiltering ) const = 0;

    /**
     * <br /><strong>Role</strong>: Sets the default specification for one specific toleranced feature filtering. 
     * <br /><strong>Precondition</strong>: ISO Standard applied.
     * Method is sucessful in case GetGDTFeatureFilteringApplication is stating a TRUE activation status for the same iFocusedScope,
     * @href CATITPSSetISODefaultSpecifications#GetGDTFeatureFilteringApplication.
     *   @param iFocusedScope
     *     Indicates the facet of the GDT toleranced feature filtering according to GDTFeatureFilteringScope enumeration.
     *   @param ipGDTTolerancedFeatureFiltering
     *     New default specification elements for toleranced feature filtering area within the scope of GDTs
     *     corresponding to iFocusedScope.
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
    virtual HRESULT SetGDTFeatureFiltering ( const GDTFeatureFilteringScope iFocusedScope, const CATUnicodeString * ipGDTTolerancedFeatureFiltering ) = 0;
};

CATDeclareHandler (CATITPSSetISODefaultSpecifications, CATBaseUnknown);

#endif
