#ifndef ENOVINamedObject_H_
#define ENOVINamedObject_H_

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// =================================================================
// Includes
// =================================================================
#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"
#include "CATTypUtilit.h"
#include "CATUnicodeString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVINamedObject;
#else
extern "C" const IID IID_ENOVINamedObject;
#endif
//------------------------------------------------------------------
/**
 * Interface to get the Name of the Object.
 */
class ExportedByGUIDVPMInterfaces ENOVINamedObject : public CATBaseUnknown 
{
/**
 * @nodoc
 */
  CATDeclareInterface;
  public:

/**
 * Retrieves the Name.
 * @param oName
 *   The Name.
 */
  virtual HRESULT get_Name(CATUnicodeString& oName)=0;

/**
 * Retrieves the Long Name.
 * @param oName
 *   The Name.
 */
  virtual HRESULT get_LongName(CATUnicodeString& oName)=0;
};


//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
/** @nodoc */
CATDeclareHandler( ENOVINamedObject, CATBaseUnknown );
#endif
