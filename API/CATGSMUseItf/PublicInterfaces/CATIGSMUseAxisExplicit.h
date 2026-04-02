#ifndef CATIGSMUseAxisExplicit_H
#define CATIGSMUseAxisExplicit_H

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATBaseUnknown.h"
#include "CATGSMUseItfExportedBy.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUseAxisExplicit;
#else
extern "C" const IID IID_CATIGSMUseAxisExplicit;
#endif

/**
 * Interface to manage stacked axis feature definition.
 * <b>Role</b>: Allows you to access data of the stacked axis feature.
 * @see CATIGSMUseFactory#CreateAxisExplicit
 */
class ExportedByCATGSMUseItf CATIGSMUseAxisExplicit : public CATBaseUnknown
{
   CATDeclareInterface;
public:
 
  /**
    * Gets the reference number  of the defined stacked axis.
	* <BR>It will be 1 for X axis, 2 for Y axis, 3 for Z axis
    *   @param oxisReferenceNumber
    *      reference number
    */
 virtual    HRESULT GetAxisReferenceNumber(int & oAxisReferenceNumber) = 0;

  /**
    * Sets the reference number  of the defined stacked axis.
	* <br>It will be 1 for X axis, 2 for Y axis, 3 for Z axis
    *   @param iAxisReferenceNumber
    *      reference number
    */
 virtual    HRESULT SetAxisReferenceNumber(const int& iAxisReferenceNumber) = 0;


};
CATDeclareHandler (CATIGSMUseAxisExplicit, CATBaseUnknown);
#endif 
