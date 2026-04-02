#ifndef CATIPspDefinePhysicalPart_H
#define CATIPspDefinePhysicalPart_H

//	COPYRIGHT DASSAULT SYSTEMES 2010
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATListOfCATUnicodeString.h"

class IUnknown;
class CATUnicodeString;

extern "C" const IID IID_CATIPspDefinePhysicalPart ;

//------------------------------------------------------------------

/**
 * Interface to get the information required for part placement.
 * <b>Role</b>: Equipment and Systems applications are used to layout 3D AEC designs. 
 * Fluid flow routes are defined using runs. Further detail is provided by adding
 * parts to runs. This interface give the information required for part placement.
 */
class CATIPspDefinePhysicalPart: public IUnknown
{
  public:

 //----------------------------------------------------------------------
 // GetPartNumbers
 //----------------------------------------------------------------------
 /**
  * <dl>
  * <dt><b>GetPartNumbers:</b>
  * <pre>
  * Get part numbers from the specification catalog that match input data.
  *   @param iuStandard [in]
  *      Standard for application attribute values.
  *   @param iuPartType [in]
  *      Type of part desired.
  *   @param iuSpecName [in]
  *      Specification name
  *   @param ipiLogicalLine [in]
  *      Logical line (e.g. piping line)
  *   @param oListPartNumbers [out]
  *      Returned list of part numbers (options) when part number (option) choice is needed.
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *     <dt>E_NOTIMPL</dt>
  *     <dd>Not applicable</dd>
  *   </dl>
  * </pre>
  * </dl>
  */

    virtual HRESULT GetPartNumbers(const CATUnicodeString& iuStandard, 
                                   const CATUnicodeString& iuPartType, 
                                   const CATUnicodeString& iuSpecName,
                                   const IUnknown* ipiLogicalLine,
                                   CATListOfCATUnicodeString& oListPartNumbers) = 0;

 //----------------------------------------------------------------------
 // SetSpecification
 //----------------------------------------------------------------------
 /**
  * Set spec on instance part.
  * <br><b>Role</b>: Interactively, the user can perform spec-driven part placement.
  * The CAA part placement interfaces performs un-spec placement.
  * This method turns a non-spec instance part into a spec part.
  *   @param ipiPlacedInstancePart [in]
  *      The placed instance part on which to set the spec.
  *   @param iuSpec [in]
  *     The spec name to set on the instance part. Must be non-blank
  *   @return HRESULT
  *     <ul>
  *       <li>S_OK: Spec successfully set on part.</li>
  *       <li>E_FAIL: Part already has spec defined or can not set spec on part</li>
  *       <li>E_INVALIDARG: Invalid input.</li>
  *       <li>E_NOTIMPL: Not applicable, part is a non-spec part</li>
  *     </ul>
  */

    virtual HRESULT SetSpecification(const IUnknown* ipiPlacedInstancePart, 
                                     const CATUnicodeString& iuSpec) = 0;
  
};

#endif
