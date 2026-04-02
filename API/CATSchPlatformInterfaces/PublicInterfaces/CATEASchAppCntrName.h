#ifndef CATEASchAppCntrName_H
#define CATEASchAppCntrName_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

#include "CATSchItfCPP.h"

// System
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
#include "CATICStringList.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"

/**
 * Super class to derive implementation for interface CATISchAppCntrName.
 * <b>Role</b>: Adaptor
 */

class ExportedByCATSchItfCPP CATEASchAppCntrName : public CATBaseUnknown
{
  public:  

  CATDeclareClass;

  /**
   * Constructs an empty CATEASchAppCntrName.
   */
  CATEASchAppCntrName();
  virtual ~CATEASchAppCntrName();

  /**
  * @deprecated V5R15 
  * Use @href CATEASchAppCntrName#AppListNames2 instead.
  * List connector names allowed.
  * @param oLConnectorNamesAllowed
  *   A list of connector names allowed.
  *   The caller must allocate memory for the first level pointer 
  *   (i.e. oLConnectorNamesAllowed) and release the second level
  *   pointer (i.e. *oLConnectorNamesAllowed) after usage.
  */
  virtual HRESULT AppListNames (CATICStringList **oLConnectorNamesAllowed);

  /**
  * @deprecated V5R15 
  * Use @href CATEASchAppCntrName#GetName2 instead.
  * Get the application connector name.
  * @param oName
  *   The connector name.
  *   The caller must allocate memory for the first level pointer 
  *   (i.e. oName) and release the second level
  *   pointer (i.e. *oName) after usage.
  */
  virtual HRESULT GetName (char **oName);

  /**
  * @deprecated V5R15 
  * Use @href CATEASchAppCntrName#SetName2 instead.
  * Set the application connector name.
  * @param oName
  *   The connector name.
  */
  virtual HRESULT SetName (const char *iName);

  /**
  * List connector names allowed.
  * @param oLConnectorNamesAllowed
  *   A list of connector names allowed.
  */
  virtual HRESULT AppListNames2 (CATListOfCATUnicodeString &oLConnectorNamesAllowed);

  /**
  * Get the application connector name.
  * @param oName
  *   The connector name.
  */
  virtual HRESULT GetName2 (CATUnicodeString &oName);

  /**
  * Set the application connector name.
  * @param oName
  *   The connector name.
  */
  virtual HRESULT SetName2 (const CATUnicodeString &iName);

  private:
  // do not implement
  CATEASchAppCntrName (CATEASchAppCntrName &);
  CATEASchAppCntrName& operator=(CATEASchAppCntrName&);

};

#endif
