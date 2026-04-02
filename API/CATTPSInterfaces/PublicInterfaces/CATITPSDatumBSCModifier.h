#ifndef CATITPSDatumBSCModifier_H
#define CATITPSDatumBSCModifier_H

// COPYRIGHT DASSAULT SYSTEMES 2018

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBoolean.h"
#include "CATBaseUnknown.h"
#include "CATTPSDatumOrderInFrame.h"

class CATITPSDatumSimple ;

extern "C" const IID IID_CATITPSDatumBSCModifier;

/**
* This interface is implemented by Datum Reference Frame features.
* <b>Role</b>: Interface for managing Datum Feature Simulator at the Basic location of the Datum Feature
* Modifier employed inside the current Reference Frame.
* <br />This interface is only valid for ASME 2009 standard (does not exist in ISO).
* <br />
* <br />Note that this modifier can be displayed displayed as BSC or BASIC in the Feature Control 
* Frame without semantic difference; this interface is able whatever is the employed notation
* to retrieve the relevant information. The setter call will result into the BSC application
* in case this modifier was not present in the modified Datum Reference Frame.
* <br />
* <br />@href CATTPSDatumOrderInFrame to know how to state what box in Datum Reference Frame end
* user is interested in.
*/
class CATITPSDatumBSCModifier : public CATBaseUnknown
{
  CATDeclareInterface ;

  public:

    /**
    * <br /><strong>Role</strong>: Sets Datum Feature Simulator at the Basic location modifier.
    * <br /><strong>Precondition</strong>: ASME 2009 Standard applied.
    * @param iDRFBoxContext       [ in ]
    *   Rank in the boxes involved in Reference frame.
    * @param ipiDatumToSupportBSC [ in ]
    *   Datum on which new modifier status is to be applied; list of datum belonging to a given
    *   box in the reference frame is obtained using @href CATITPSReferenceFrame#GetDatumFeatureInBox.
    * @param iApplyBSC            [ in ]
    *   TRUE is given to display this modifier, FALSE at the contrary.
    * @return
    *   An HRESULT value. 
    *   <br /><strong>Legal values</strong>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Is meaningful of proper execution</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>when requested application is already current status when calling this method;
    *         in other words, nothing has been done as BSC status was applied as expected</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>In case iDRFBoxContext is out of range; for instance trying to read Tertiary for reference frame A|B</dd>
    *   </dl>
    */
    virtual HRESULT SetModifier( const CATTPSDatumOrderInFrame   iDRFBoxContext,
                                 CATITPSDatumSimple            * ipiDatumToSupportBSC,
                                 CATBoolean                      iApplyBSC = TRUE ) = 0 ;

    /**
    * <br /><strong>Role</strong>: Retrieves Datum Feature Simulator at the Basic location modifier value.
    * <br /><strong>Precondition</strong>: ASME 2009 Standard applied.
    * @param iDRFBoxContext       [ in ]
    *   Rank in the boxes involved in Reference frame.
    * @param ipiDatumToSupportBSC [ in ]
    *   Datum on which new modifier status is to be applied; list of datum belonging to a given
    *   box in the reference frame is obtained using @href CATITPSReferenceFrame#GetDatumFeatureInBox.
    * @param oBSCModifierValue    [ out ]
    *   TRUE is returned when BSC or BASIC modified is set on given Datum, FALSE at the contrary.
    * @return
    *   An HRESULT value. 
    *   <br /><strong>Legal values</strong>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Is meaningful of proper execution</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>In case iDRFBoxContext is out of range; for instance trying to read Tertiary for reference frame A|B</dd>
    *   </dl>
    */
    virtual HRESULT GetModifier( const CATTPSDatumOrderInFrame   iDRFBoxContext,
                                 CATITPSDatumSimple            * ipiDatumToSupportBSC,
                                 CATBoolean                    & oBSCModifierValue ) const = 0 ; 
};
CATDeclareHandler(CATITPSDatumBSCModifier, CATBaseUnknown);
#endif
