#ifndef CATPspWPCheckViolation_H
#define CATPspWPCheckViolation_H

//===================================================================
// COPYRIGHT Dassault Systemes 2010
/**
  * @CAA2Level L1
  * @CAA2Usage U2
  */
//===================================================================
//
// CATPspWPCheckViolation.h
// C++ meta class representing the validation check violation.
//
//===================================================================
//
// Usage notes:
//
// There exist a subtype for each validation check.  The subtype 
// contains the relevant data members used to print the report.
// 
// Use this violation type to report violation on Objects in a Workpackage
// while processing the workpackage in ValidateRootObject().
// The new violation type uses the ValidateRootObject and it only
// needs to query the Workpackage to retrieve the information once and use them 
// for the rest of the products. This leads to better performance than using
// calling ValidateObject() multiple times to report violation on each 
// individual object/Products in a workpackage. 
//===================================================================

//  CATPlanrShipInterfaces
#include "CATPspItfCPP.h"
#include "CATPspValidationDeclarations.h"
#include "CATPspCheckViolation.h"

//  System
#include "CATBaseUnknown.h"
#include "CATString.h"
#include "CATUnicodeString.h"

class CATListValCATUnicodeString;

/**
 * Sub class of CATPspCheckViolation (Super class) to derive validation check violation object
 * <b>Role</b>: Meta class
 *    Always subtype from this object
 */

class ExportedByCATPspItfCPP CATPspWPCheckViolation : public CATPspCheckViolation
{
  public: 
      
   /**
    * Constructor
    * <br><b>Role</b>: Initialize the class.
    * @param iType
    *   The type of this validation check (e.g. CATDVSpec).
    * @param iCheck
    *   Validation check name (e.g. Spec01)   
    * @param iResource
    *   .CATNls resource name
    */

    CATPspWPCheckViolation( const CATUnicodeString& iType,
                            const CATUnicodeString& iCheck,
                            const CATUnicodeString& iResource );
    virtual ~CATPspWPCheckViolation();  
   
   /**
    * Get the violated object.
    * <br><b>Role</b>: Get the violated object.
    * @param opiObj [out, CATBaseUnknown#Release]
    *     Violated object (e.g. Loft)
    *   @return
    *   An HRESULT value.
    *   <br><b>Legal values</b>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>operation is successful</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>operation failed</dd>
    *   </dl>
    */
    virtual HRESULT GetObject( CATBaseUnknown*& opiObj );

    /**
    * Set the violated object.
    * <br><b>Role</b>: Set the violated object.
    * @param ipiObj 
    *     Violated object (e.g. Loft)
    *   @return
    *   An HRESULT value.
    *   <br><b>Legal values</b>:
    *   <dl>
    *     <dt>S_OK</dt>
    *     <dd>operation is successful</dd>
    *     <dt>E_FAIL</dt>
    *     <dd>operation failed</dd>
    *   </dl>
    */
		virtual HRESULT SetObject( const CATBaseUnknown* ipiObj );
		
  private:

		CATBaseUnknown*                       _piObject;

    // do not implement
    CATPspWPCheckViolation (CATPspWPCheckViolation &);
    CATPspWPCheckViolation& operator=(CATPspWPCheckViolation&);
};

#endif
