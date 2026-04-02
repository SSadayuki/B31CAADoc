#ifndef CATITPSProjectedExtension_H
#define CATITPSProjectedExtension_H

// COPYRIGHT DASSAULT SYSTEMES 2018

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATBaseUnknown.h"

class CATListValCATBaseUnknown_var ;

extern "C" const IID IID_CATITPSProjectedExtension ;

/**
* This interface is implemented by CATTPSToleranceWithDRF, CATTPSToleranceWithoutDRF and (in case
* ISO 5459:2011 standard) by Datum features.
* <b>Role</b>: The Projected Tolerance zone symbol (P) is used in conjunction with Extended Cylinder 
* CG representation. Hence, this interface is devoted to set/reset the projected Tolerance Zone. 
* <br />At setting time, this handle allows to set the Projected Tolerance zone definition or the collection
* of Projected Tolerance zones for pattern situation in Datum Feature definition (ISO only).
* <br />This interface is also trigger to show/hide (P) modifier within Datum Reference Frame.
* <br /><em>Notice: </em>most of the methods call is not accurate in case GetModifierDisplay is returning a FALSE value.
* <br />Interface is valid for both Standards, ISO and ASME.
*/

class CATITPSProjectedExtension : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * <br /><strong>Role</strong>: Activates or resets display of (P) modifier for current object.
     * <br /><strong><em>Important notice<em/></strong>: When this method is called, end user has to know that
     * error diagnosis may appear onto Datum System entities where this Extension (applied onto a Datum Simple)
     * is participating to the definition. This is the regular behavior (similar to the interactive Apps);
     * this requires end user to edit case by case all the impacted Datum System to accept propagation change. 
     *  @param iValue [ in ]
     *    Optional argument: TRUE is given to set this option active (default value);
     *    FALSE has to be provided otherwise.
     *    <br />On Projected Tolerance zone an a projected tolerance zone feature must be
     *    assign to the current entity; this is performed thanks to SetProjectedExtension.
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
    virtual HRESULT SetModifierDisplay( const CATBoolean iValue = TRUE ) = 0;

    /**
    * <br /><strong>Role</strong>: Checks if Projected modifier, (P) is displayed.
    *  @param oValue [ out ]
    *    States if Projected Tolerance zone option is applied when TRUE value is returned;
    *    at the opposite oValue is FALSE.
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
    virtual HRESULT GetModifierDisplay( CATBoolean& oValue ) const = 0;

    /**
    * <br /><strong>Role</strong>: Assigns the mandatory CATIProjectedToleranceZone extension.
    *  @param iListOfProjectedTolZone [ in ]
    *    List of Projected tolerance zones enables to deal with single datum feature as
    *    well as collection. This method is to be called just after activation of the
    *    (P) modifier thanks to SetModifierDisplay (with TRUE flag).
    *    Content of the list are features supporting CATIProjectedToleranceZone behavior,
    *    @href CATIProjectedToleranceZone.
    *  @return
    *   An HRESULT value. 
    *   <br /><strong>Legal values</strong>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>On success</dd>
    *     <dt>E_FAIL </dt>
    *     <dd>Otherwise; the FTA annotation will be
    *         invalid with semantic rule reporting missing extension</dd>
    *   </dl>
    */
    virtual HRESULT SetProjectedExtension( const CATListValCATBaseUnknown_var & iListOfProjectedTolZone ) = 0 ;

    /**
    * <br /><strong>Role</strong>: Retrieves the Projected Tolerance zone associated with current feature.
    *  @param oListOfProjectedTolZone [ out ]
    *    List of Projected tolerance zones bound to current feature. Length of the list
    *    is most of the time equals to 1, except when Datum feature is a pattern.
    *    Content of the list are features supporting CATIProjectedToleranceZone behavior,
    *    @href CATIProjectedToleranceZone.
    *  @return S_OK on success, E_FAIL otherwise.
    */
    virtual HRESULT GetProjectedExtension( const CATListValCATBaseUnknown_var & oListOfProjectedTolZone ) const = 0 ;

    /**
    * <br /><strong>Role</strong>: Sets display of (P) modifier when object is involved in Datum Reference Frame.
    *  @param iValue [ in ]
    *    Optional argument: TRUE is given to set this option active (default value);
    *    FALSE has to be provided otherwise.
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
    virtual HRESULT SetDisplayInDRF( const CATBoolean iValue = TRUE ) = 0;

    /**
    * <br /><strong>Role</strong>: Checks if Projected modifier, (P) is displayed when object is involved in Datum Reference Frame.
    *  @param oValue [ out ]
    *    States if (P) modifier is displayed in DRF when TRUE value is returned;
    *    at the opposite oValue is FALSE.
    *  return
    *   An HRESULT value. 
    *   <br /><strong>Legal values</strong>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>The value has been correctly retrieved</dd>
    *     <dt>E_FAIL </dt>
    *     <dd>Otherwise</dd>
    *   </dl>
    */
    virtual HRESULT GetDisplayInDRF( CATBoolean& oValue ) const = 0;
};

CATDeclareHandler (CATITPSProjectedExtension, CATBaseUnknown);

#endif
