#ifndef CATPspCheckViolation_H
#define CATPspCheckViolation_H

//===================================================================
// COPYRIGHT Dassault Systemes 2006
/**
  * @CAA2Level L1
  * @CAA2Usage U2
  */
//===================================================================
//
// CATPspCheckViolation.h
// C++ meta class representing the validation check violation.
//
//===================================================================
//
// Usage notes:
//
// There exist a subtype for each validation check.  The subtype 
// contains the relevant data members used to print the report.
//
//===================================================================

//  CATPlanrShipInterfaces
#include "CATPspItfCPP.h"
#include "CATPspValidationDeclarations.h"

//  System
#include "CATBaseUnknown.h"
#include "CATString.h"
#include "CATUnicodeString.h"

class CATListValCATUnicodeString;

/**
 * Super class to derive validation check violation object
 * <b>Role</b>: Meta class
 *    Always subtype from this object
 */

class ExportedByCATPspItfCPP CATPspCheckViolation : public CATBaseUnknown
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

    CATPspCheckViolation( const CATUnicodeString& iType,
                          const CATUnicodeString& iCheck,
                          const CATUnicodeString& iResource );
    virtual ~CATPspCheckViolation();  

   /**
    * Check if object is a violation.
    * <br><b>Role</b>: Determine if this object violates the input check.
    *   @param iCheck
    *     Validation check name (e.g. Spec01)   
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
    virtual HRESULT IsAViolationOf( const CATUnicodeString& iCheck );

   /**
    * Get the validation type.
    * <br><b>Role</b>: Get the validation type associated with this check violation.
    *   @param oType
    *     Validation type (e.g. CATDVSpec)
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
    virtual HRESULT GetValidationType( CATUnicodeString& oType );

   /**
    * Get the validation check name.
    * <br><b>Role</b>: Get the validation check name associated with this check violation.
    *   @param oCheck
    *     Validation check name (e.g. Spec01)
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
    virtual HRESULT GetValidationCheck( CATUnicodeString& oCheck );

   /**
    * Get the validation check NLS name.
    * <br><b>Role</b>: Get the natural language validation check name associated with this check violation.
    *   @param oName
    *     Validation check NLS name (e.g. Out-of-spec)
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
    virtual HRESULT GetValidationCheckName( CATUnicodeString& oName );

   /** DO NOT USE -- TO BE DELETED
    * Get the check violation data
    *   @param oDesc
    *     Description of data
    *   @param oValue
    *     Data value
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
    virtual HRESULT GetCheckViolationData( CATListValCATUnicodeString& oDesc,
                                           CATListValCATUnicodeString& oValue );

   /**
    * Get check violation data.
    * <br><b>Role</b>: Get the data associated with this violation.
    *   @param oRow
    *     The number of rows in oLValues
    *   @param oLValues
    *     The array of values. A violation may consist of multiple rows of data.
    *     Delete array when no longer needed.
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
    virtual HRESULT GetCheckViolationData( int& oRow, 
                                           CATListValCATUnicodeString** oLValues );

    /**
     * Get the number of violation data rows.
     * <br><b>Role</b>: Get the number of rows of data that exist for this violation. 
     *   Note: A violation check may result in multiple rows of data.
     * @return
     *   An int value. The number of rows
     */
    virtual int GetRowCount();

  protected:

   /**
    * Get the NLS description for a given key
    * @param iDescKey
    *   Key within the NLS file
    * @param oDescription
    *   NLS message associated with iDescKey
    *   @return
    *   An int value.
    *   <br><b>Legal values</b>:
    *   <dl>
    *     <dt>0</dt>
    *     <dd>empty string</dd>
    *     <dt>1</dt>
    *     <dd>Description found</dd>
    *   </dl>
    */
    int GetDescription( const CATUnicodeString& iDescKey,
                        CATUnicodeString& oDescription );

    /**
     * Validation check type.
     *   The type of this validation check (e.g. CATDVSpec).
     */
    CATUnicodeString          _uValidationType;

    /**
     * Validation check name.
     *   Validation check name (e.g. Spec01)   
     */
    CATUnicodeString          _uValidationCheck;

    /**
     * Natural language resource.
     *   The name of a resource that holds strings in the local language.
     */
    CATString                 _uResource;

  private:

    // do not implement
    CATPspCheckViolation (CATPspCheckViolation &);
    CATPspCheckViolation& operator=(CATPspCheckViolation&);
};

#endif
