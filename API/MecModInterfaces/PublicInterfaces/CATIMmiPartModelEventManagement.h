// COPYRIGHT DASSAULT SYSTEMES  2000 

#ifndef _CATIMmiPartModelEventManagement_h
#define _CATIMmiPartModelEventManagement_h

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "MecModItfCPP.h"

/**
* Interface to set the model event management of a part feature.
* <b>Role</b>: The default behavior of a part feature is to delay the
*              transmission of some model events it has to dispatch.
*              This interface lets you make an immediate flush of
*              the stored model events.
*/

#ifndef LOCAL_DEFINITION_FOR_IID
	extern ExportedByMecModItfCPP IID IID_CATIMmiPartModelEventManagement;
#else
	extern "C" const IID IID_CATIMmiPartModelEventManagement;
#endif

class ExportedByMecModItfCPP CATIMmiPartModelEventManagement : public CATBaseUnknown
{
  CATDeclareInterface;
  
public:
  
  /**
  * Flushes the stored model events.
  */
  virtual HRESULT CommitNow() = 0;
  
};

CATDeclareHandler(CATIMmiPartModelEventManagement,CATBaseUnknown);

#endif
