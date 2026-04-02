#ifndef CATITPSOrientationCstOnly_H
#define CATITPSOrientationCstOnly_H

// COPYRIGHT DASSAULT SYSTEMES 2018

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATBoolean.h"
#include "CATBaseUnknown.h"
#include "CATTPSDatumOrderInFrame.h"

extern "C" const IID IID_CATITPSOrientationCstOnly ;

/**
* This interface is implemented by Datum System features.
* <b>Role</b>: Interface to manage Variable Distance Modifier, "><", relevant for ISO Standard only.
* <br />The "><" symbol inside a box within a reference frame definition allows
* to specify that datum contribute in blocking orientation degrees of freedom only.
*/

class CATITPSOrientationCstOnly : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
    * <br /><strong>Role</strong>: Manages "><" modifier application into DRF box defined by iDRFBoxContext.
    * <br /><strong>Precondition</strong>: ISO Standard applied.
    *  @param iDRFBoxContext [ in ]
    *    First, Second or the Third Box of the DRF to investigate.
    *  @param iValue         [ in ]
    *    Optional argument: TRUE (default value) is given to set this option active;
    *    FALSE has to be provided otherwise.
    * @return
    *   An HRESULT value. 
    *   <br /><strong>Legal values</strong>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>This value is meaningful of proper execution</dd>
    *     <dt>S_FALSE</dt>
    *     <dd>This value is possibly returned when requested application is already current
    *         status when calling this method; in other words, nothing has been done as
    *         "><" modifier was applied as expected</dd>
    *     <dt>E_FAIL </dt>
    *     <dd>In case iDRFBoxContext is out of range; for instance trying to
    *         read Tertiary for reference frame A|B</dd>
    *   </dl>
    */
    virtual HRESULT SetModifier( const CATTPSDatumOrderInFrame iDRFBoxContext, const CATBoolean iValue = TRUE ) = 0;

    /**
    * <br /><strong>Role</strong>: Retrieves "><" modifier application into DRF box defined by iDRFBoxContext.
    * <br /><strong>Precondition</strong>: ISO Standard applied.
    *  @param iDRFBoxContext [ in ]
    *    First, Second or the Third Box of the DRF to investigate.
    *  @param oValue         [ out ]
    *    States if "><" option is applied when TRUE value is returned; at the opposite
    *    oValue is FALSE.
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
    virtual HRESULT GetModifier( const CATTPSDatumOrderInFrame iDRFBoxContext, CATBoolean& oValue ) const = 0;  
};

CATDeclareHandler (CATITPSOrientationCstOnly, CATBaseUnknown);

#endif
