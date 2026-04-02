//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
#ifndef ENOVIDisplayableValue_H_
#define ENOVIDisplayableValue_H_

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"
#include "CATUnicodeString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIDisplayableValue;
#else
extern "C" const IID IID_ENOVIDisplayableValue;
#endif

class ExportedByGUIDVPMInterfaces ENOVIDisplayableValue : public CATBaseUnknown 
{
  CATDeclareInterface;
  
  public:
  /**
 * Return the object as a displayable string.
 * @param oName
 *   Object Name.
 */

  virtual HRESULT get_Value(CATUnicodeString& oName)=0;

};

CATDeclareHandler( ENOVIDisplayableValue, CATBaseUnknown );
#endif
