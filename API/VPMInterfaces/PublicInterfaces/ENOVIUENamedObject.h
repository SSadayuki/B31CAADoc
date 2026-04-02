// -*-C++-*-
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2002
//=============================================================================

#ifndef ENOVIUENamedObject_h
#define ENOVIUENamedObject_h

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "GUIDVPMInterfaces.h"
#include "CATBaseUnknown.h"

class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIUENamedObject;
#else
extern "C" const IID IID_ENOVIUENamedObject;
#endif


class ExportedByGUIDVPMInterfaces ENOVIUENamedObject : public CATBaseUnknown
{
  CATDeclareInterface;

public:
  /**
   * Retrieves the object's (short) Name.
   * @param oName
   *   The Name.
   */
  virtual HRESULT get_Name(CATUnicodeString& oName)=0;

  /**
   * Retrieves the object's long Name.
   * @param oName
   *   The Name.
   */
  virtual HRESULT get_LongName(CATUnicodeString& oName)=0;

};

CATDeclareHandler(ENOVIUENamedObject, CATBaseUnknown);
#endif
