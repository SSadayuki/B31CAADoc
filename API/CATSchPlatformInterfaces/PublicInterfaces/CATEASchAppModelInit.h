#ifndef CATEASchAppModelInit_H
#define CATEASchAppModelInit_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

// System
#include "CATBaseUnknown.h"
#include "CATSchItfCPP.h"

#include "CATBooleanDef.h"

class CATIUnknownList;
class CATDocument;

/**
 * Super class to derive implementation for interface CATISchAppModelInit.
 * <b>Role</b>: Adaptor
 */

class ExportedByCATSchItfCPP CATEASchAppModelInit : public CATBaseUnknown
{
  public:  

  CATDeclareClass;

  /**
   * Constructs an empty CATEASchAppModelInit.
   */
  CATEASchAppModelInit();
  virtual ~CATEASchAppModelInit();

  /**
  * Perform any model initialization.
  * @param iDoc
  *   Pointer to the document concerned.
  */
  virtual HRESULT AppInit (const CATDocument *iDoc);

};

#endif
