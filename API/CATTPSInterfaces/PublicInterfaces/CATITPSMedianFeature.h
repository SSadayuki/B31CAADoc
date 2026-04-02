#ifndef CATITPSMedianFeature_H
#define CATITPSMedianFeature_H

// COPYRIGHT DASSAULT SYSTEMES 2018

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATBaseUnknown.h"

extern "C" const IID IID_CATITPSMedianFeature ;

/**
* This interface is implemented by CATTPSToleranceWithDRF and CATTPSToleranceWithoutDRF features.
* <b>Role</b>: Interface to Manage Median Feature symbol relevant for ISO Standard only.
* <br />The Median Feature symbol is placed just after the GDT tolerance zone to explicitly 
* express that specification applies to the median element. When set, this tolerance is applied to
* center element(s) of sphere(s) or cylinder(s) or revolute(s) or Elongated round Pin(s)/Hole(s)
* or Rectangular/square Pin(s)/Hole(s) or Rectangular/square round Pin(s)/Hole(s).
* <br />Hence, this modifier (represented by a circle surrounded A) is applicable only to the toleranced
* element, but not applicable to DRF.
*/

class CATITPSMedianFeature : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
    * <br /><strong>Role</strong>: Sets Median Feature option.
    * <br /><strong>Precondition</strong>: ISO Standard applied.
    *  @param iValue [ in ]
    *   TRUE is given to set this option active; FALSE has to be provided otherwise.
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
    virtual HRESULT SetMedianFeature (const CATBoolean iValue) = 0;

    /**
    * <br /><strong>Role</strong>: Retrieves Median Feature option.
    * <br /><strong>Precondition</strong>: ISO Standard applied.
    *  @param oValue [ out ]
    *    States if Median Feature option is applied when TRUE value is returned; at the opposite
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
    virtual HRESULT GetMedianFeature (CATBoolean& oValue) const = 0;
};

CATDeclareHandler (CATITPSMedianFeature, CATBaseUnknown);

#endif
