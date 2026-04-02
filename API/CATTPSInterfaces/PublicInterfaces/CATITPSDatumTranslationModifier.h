#ifndef CATITPSDatumTranslationModifier_H
#define CATITPSDatumTranslationModifier_H

// COPYRIGHT DASSAULT SYSTEMES 2018

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBoolean.h"
#include "CATBaseUnknown.h"
#include "CATTPSDatumOrderInFrame.h"

extern "C" const IID IID_CATITPSDatumTranslationModifier;

/**
* This interface is implemented by Datum Reference Frame features.
* <b>Role</b>: Interface for managing Datum Feature Simulator Translation Modifier applied onto Datum
* Feature employed within a Reference Frame.
* <br />This interface is only valid for ASME 2009 standard (does not exist in ISO).
* <br />
* <br /><em>Important notice: </em>this modifier is only valid for Secondary or Tertiary boxes of the DRF. 
* <br />
* <br />@href CATTPSDatumOrderInFrame to know how to state what box in Datum Reference Frame end
* user is interested in.
*/
class CATITPSDatumTranslationModifier : public CATBaseUnknown
{
  CATDeclareInterface ;

  public:

    /**
    * <br /><strong>Role</strong>: Sets Datum Feature Simulator Translation Modifier in this current Datum Reference Frame.
    * <br /><strong>Precondition</strong>: ASME 2009 Standard applied.
    * @return
    *   An HRESULT value. 
    *   <br /><strong>Legal values</strong>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>Is meaningful of proper execution</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>when requested application is already current status when calling this method;
    *         in other words, nothing has been done as per Translation modifier</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>In case iDRFBoxContext is out of range; for instance trying to read Tertiary for reference frame A|B</dd>
    *   </dl>
    */
    virtual HRESULT SetModifier( const CATTPSDatumOrderInFrame iDRFBoxContext = ::CATTPSDOIFSecondary, CATBoolean iApplyTranslation = TRUE ) = 0 ;

    /**
    * <br /><strong>Role</strong>: Retrieves Datum Feature Simulator Translation Modifier value.
    * <br /><strong>Precondition</strong>: ASME 2009 Standard applied.
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
    virtual HRESULT GetModifier( const CATTPSDatumOrderInFrame iDRFBoxContext, CATBoolean & oTranslationModifierValue ) const = 0 ; 
};
CATDeclareHandler(CATITPSDatumTranslationModifier, CATBaseUnknown);
#endif
