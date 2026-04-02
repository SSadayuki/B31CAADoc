#ifndef CATITPSVariableDistance_H
#define CATITPSVariableDistance_H

// COPYRIGHT DASSAULT SYSTEMES 2018

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATBoolean.h"
#include "CATBaseUnknown.h"
#include "CATTPSDatumOrderInFrame.h"

class CATListValCATBaseUnknown_var;

extern "C" const IID IID_CATITPSVariableDistance ;

/**
 * This interface is implemented by Datum System features.
 * <b>Role</b>: Interface to manage Variable Distance Modifier, [DV], relevant for ISO Standard only.
 * <br />The [DV] symbol inside a box within a reference frame definition allows
 * linear distance in between the members of the collection of datum features to vary.
 * <br /> ISO defined the concept of collections (group) of Datum Features; this notion is not directly
 * accessible in CAA. Current API is returning a list of Datum Features composing a collections.
 * Parsing procedure of the DRF structure for any Getxx methods is based on the groups as they
 * are defined with the studied Datum System. Hence possible collections are not detected (but they are
 * not either searched for).
 */

class CATITPSVariableDistance : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
    * Runs an analysis of the specified DRF box to see if DV modifier is applied
    * several times within the considered box.
    * @param iDRFBoxContext [ in ]
    *   First, Second or the Third Box of the DRF to investigate.
    * @param oNbrOfHit      [ in ]
    *   Number of Datum Features (or groups) supporting DV modifier.
    *   This count constitutes the limit in iterative calls Getxx provided here
    *   along with this interface (legal range goes from 1 to oNbrOfHit)
    * @return
    *   An HRESULT value. 
    *   <br /><strong>Legal values</strong>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>This value reports a proper execution.</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>In case DV modifier does not apply (for instance single Datum Feature), this value
    *         is returned.</dd>
    *     <dt>E_FAIL </dt>
    *     <dd>If Datum System is not supporting DV modifier.</dd>
    *     <dd>In case iDRFBoxContext is out of range; for instance trying to
    *         read Tertiary for reference frame A|B.</dd>
    *   </dl>
    */
    virtual HRESULT GetModifierCount( const CATTPSDatumOrderInFrame    iDRFBoxContext,
                                      int                            * oNbrOfHit ) const = 0;

    /**
    * Retrieves the list of datum features in the group corresponding to considered box
    * at given index.
    * @param iDRFBoxContext        [ in ]
    *   First, Second or the Third Box of the DRF to investigate.
    * @param iIndexInBox           [ in ]
    *   Index in between 1 and limit returned by @href GetModifierCount.
    * @param oScopeOfDatumFeatures [ out ]
    *   List of the Datum Features to be impacted by application of Distance Variable
    *   condition modifier. This list is necessary a sub list of the call
    *   @href CATITPSReferenceFrame#GetDatumFeatureInBox.
    * @return
    *   An HRESULT value. 
    *   <br /><strong>Legal values</strong>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>This value reports a proper execution.</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>When requested application is already current status when calling this method;
    *         in other words, nothing has been done as [DV] modifier was applied as expected</dd>
    *     <dt>E_FAIL </dt>
    *     <dd>In case iDRFBoxContext is out of range; for instance trying to
    *         read Tertiary for reference frame A|B.</dd>
    *   </dl>
    */
    virtual HRESULT GetListOfDatum( const CATTPSDatumOrderInFrame   iDRFBoxContext,
                                    int                             iIndexInBox,
                                    CATListValCATBaseUnknown_var  & oScopeOfDatumFeatures ) const = 0;
    
    /**
     * <br /><strong>Role</strong>: Manages [DV] modifier application into DRF box defined by iDRFBoxContext.
     * <br />Pay attention when this method is called (most of the time when turning of a DV modifier), this
     * can result in collections rework (parenthesis scopes are simplified when possible); it is strongly
     * recommended to run @href GetModifierCount to get refreshed information about DRF structuration.
     * <br /><strong>Precondition</strong>: ISO Standard applied.
     *  @param iDRFBoxContext          [ in ]
     *    First, Second or the Third Box of the DRF to investigate.
     *  @param iValue                  [ in ]
     *    Optional argument: TRUE (deafult value) is given to set this option active;
     *    FALSE has to be provided otherwise.
     *  @param opiScopeOfDatumFeatures [ in ]
     *    Optional argument: when not provided application of DV modifier applies on the group
     *    constituted by all the datums of the considered box. When explicitly given, the list of
     *    Datum Feature must be a sub-list of the list sent back using
     *    @href CATITPSReferenceFrame#GetDatumFeatureInBox. Moreover, this order in the sub-list
     *    argument must follow the order in the Datum Reference frame.
     * @return
     *   An HRESULT value. 
     *   <br /><strong>Legal values</strong>:
     *   <dl>
     *     <dt>S_OK</dt>
     *     <dd>This value reports a proper execution</dd>
     *     <dt>S_FALSE</dt>
     *     <dd>When requested application is already current status when calling this method;
     *         in other words, nothing has been done as [DV] modifier was applied as expected</dd>
     *     <dt>E_FAIL </dt>
     *     <dd>In case iDRFBoxContext is out of range; for instance trying to
     *         read Tertiary for reference frame A|B</dd>
     *   </dl>
     */
    virtual HRESULT SetModifier( const CATTPSDatumOrderInFrame        iDRFBoxContext,
                                 const CATBoolean                     iValue,
                                 const CATListValCATBaseUnknown_var * ipiScopeOfDatumFeatures = NULL ) = 0;

    /**
     * <br /><strong>Role</strong>: Retrieves [DV] modifier application into DRF box defined by iDRFBoxContext.
     * <br /><strong>Precondition</strong>: ISO Standard applied.
     *  @param iDRFBoxContext [ in ]
     *    First, Second or the Third Box of the DRF to investigate.
     *  @param oValue         [ out ]
     *    States if [DV] option is applied when TRUE value is returned; at the opposite
     *    oValue is FALSE.
     *  @param ipIndexInBox   [ in ]
     *    Optional argument: when not provided, returned value is global to the entire group of
     *    Datum Features constituting current Datum System box. When expressed, value is to be lower
     *    than limit read with call to @href CATITPSVariableDistance#GetModifierCount.
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
    virtual HRESULT GetModifier( const CATTPSDatumOrderInFrame   iDRFBoxContext,
                                 CATBoolean                    & oValue,
                                 int                           * ipIndexInBox = NULL ) const = 0;  
};

CATDeclareHandler (CATITPSVariableDistance, CATBaseUnknown);

#endif
