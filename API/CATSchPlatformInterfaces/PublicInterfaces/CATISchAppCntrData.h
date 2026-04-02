#ifndef CATISchAppCntrData_H
#define CATISchAppCntrData_H

//	COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATEASchAppCntrData
 */

// System
#include "IUnknown.h"
#include "CATListOfCATUnicodeString.h"

extern "C" const IID IID_CATISchAppCntrData ;

/**
 * Interface to manage specific application information on a connector.
 * Applications must derive implementation of this interface 
 * from the adapter class CATEASchAppCntrData.
 * <b>Role</b>: Manage application connector information.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */

class CATISchAppCntrData : public IUnknown
{
  public:  

  /**
  * Set application data.
  * @param iLAppData 
  *   A list of character string data.
  */
  virtual HRESULT AppSetApplicationData (const CATListOfCATUnicodeString &iLAppData) = 0;

  /**
  * Get application data.
  * @param iLAppData 
  *   A list of character string data.
  * @param iLAppNlsData 
  *   A list of character string data.
  */
  virtual HRESULT AppGetApplicationData (CATListOfCATUnicodeString &iLAppData,
    CATListOfCATUnicodeString &iLAppNlsData) = 0;

  /**
  * Get a list valid potential application data that can be set.
  * @param iLAppData 
  *   A list of character string data.
  * @param iLAppNlsData 
  *   A list of character string data.
  */
  virtual HRESULT AppListPotentialData (CATListOfCATUnicodeString &iLAppData,
    CATListOfCATUnicodeString &iLAppNlsData) = 0;


};
#endif
