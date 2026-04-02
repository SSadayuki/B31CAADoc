#ifndef CATEASchAppCntrData_H
#define CATEASchAppCntrData_H

// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

#include "CATSchItfCPP.h"

// System
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
#include "CATListOfCATUnicodeString.h"

/**
 * Super class to derive implementation for interface CATISchAppCntrData.
 * <b>Role</b>: Adaptor
 */

class ExportedByCATSchItfCPP CATEASchAppCntrData : public CATBaseUnknown
{
  public:  

  CATDeclareClass;

  /**
   * Constructs an empty CATEASchAppCntrData.
   */
  CATEASchAppCntrData();
  virtual ~CATEASchAppCntrData();

  /**
  * Set application data.
  * @param iLAppData 
  *   A list of character string data.
  */
  virtual HRESULT AppSetApplicationData (const CATListOfCATUnicodeString &iLAppData);

  /**
  * Get application data.
  * @param iLAppData 
  *   A list of character string data.
  * @param iLAppNlsData 
  *   A list of character string data.
  */
  virtual HRESULT AppGetApplicationData (CATListOfCATUnicodeString &iLAppData,
    CATListOfCATUnicodeString &iLAppNlsData);

  /**
  * Get a list valid potential application data that can be set.
  * @param iLAppData 
  *   A list of character string data.
  * @param iLAppNlsData 
  *   A list of character string data.
  */
  virtual HRESULT AppListPotentialData (CATListOfCATUnicodeString &iLAppData,
    CATListOfCATUnicodeString &iLAppNlsData);


  private:
  // do not implement
  CATEASchAppCntrData (CATEASchAppCntrData &);
  CATEASchAppCntrData& operator=(CATEASchAppCntrData&);

};

#endif
