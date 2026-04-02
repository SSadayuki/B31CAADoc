#ifndef CATISchAppModelInit_H
#define CATISchAppModelInit_H

//	COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATEASchAppModelInit
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATIUnknownList;
class CATDocument;

extern "C" const IID IID_CATISchAppModelInit ;

/**
 * Interface to manage an application model initialization.
 * Applications must derive implementation of this interface 
 * from the adapter class CATEASchAppModelInit on an application ID.
 * <b>Role</b>: Initialize application model.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */

class CATISchAppModelInit : public IUnknown
{
  public:  

  /**
  * Initialize application model.
  * @param iDoc
  *   Pointer to the document concerned.
  */
  virtual HRESULT AppInit (const CATDocument *iDoc) = 0;

};
#endif
