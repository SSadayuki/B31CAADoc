#ifndef CATISchAppCntrName_H
#define CATISchAppCntrName_H

//	COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATEASchAppCntrName
 */

// System
#include "IUnknown.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"

class CATICStringList;


extern "C" const IID IID_CATISchAppCntrName ;

/**
 * Interface to manage application connector name.
 * Applications must derive implementation of this interface 
 * from the adapter class CATEASchAppCntrName.
 * <b>Role</b>: Defines application connector name.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */

class CATISchAppCntrName : public IUnknown
{
  public:  

  /**
  * @deprecated V5R15 
  * Use @href CATISchAppCntrName#AppListNames2 instead.
  * List connector names allowed.
  * @param oLConnectorNamesAllowed
  *   A list of connector names allowed.
  *   The caller must allocate memory for the first level pointer 
  *   (i.e. oLConnectorNamesAllowed) and release the second level
  *   pointer (i.e. *oLConnectorNamesAllowed) after usage.
  */
  virtual HRESULT AppListNames (CATICStringList **oLConnectorNamesAllowed) = 0;

  /**
  * @deprecated V5R15 
  * Use @href CATISchAppCntrName#GetName2 instead.
  * Get the application connector name.
  * @param oName
  *   The connector name.
  *   The caller must allocate memory for the first level pointer 
  *   (i.e. oName) and release the second level
  *   pointer (i.e. *oName) after usage.
  */
  virtual HRESULT GetName (char **oName) = 0;

  /**
  * @deprecated V5R15 
  * Use @href CATISchAppCntrName#SetName2 instead.
  * Set the application connector name.
  * @param oName
  *   The connector name.
  */
  virtual HRESULT SetName (const char *iName) = 0;

  /**
  * List connector names allowed.
  * @param oLConnectorNamesAllowed
  *   A list of connector names allowed.
  */
  virtual HRESULT AppListNames2 (CATListOfCATUnicodeString &oLConnectorNamesAllowed) = 0;

  /**
  * Get the application connector name.
  * @param oName
  *   The connector name.
  */
  virtual HRESULT GetName2 (CATUnicodeString &oName) = 0;

  /**
  * Set the application connector name.
  * @param oName
  *   The connector name.
  */
  virtual HRESULT SetName2 (const CATUnicodeString &iName) = 0;

};
#endif
