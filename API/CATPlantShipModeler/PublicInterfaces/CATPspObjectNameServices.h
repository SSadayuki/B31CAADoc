// COPYRIGHT DASSAULT SYSTEMES  2002+ 
/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */
//=============================================================================
//
// CATPspObjectNameServices.h
//
//=============================================================================

/**
 * Tools to query Plant Ship object's names.
 * <b>Role</b>: To query an object's class type and name.
 */

#ifndef CATPspObjectNameServices_H
#define CATPspObjectNameServices_H

#include "CATPspUtilities.h"
#include "CATUnicodeString.h"

//-----------------------------------------------------------------------------
class ExportedByCATPspUtilities CATPspObjectNameServices
{
  public:

  /**
  * Get the object class type.
  * @param iObject
  *   The object.
  * @return
  *   The class type.
  */
  static CATUnicodeString GetObjectClassType ( const IUnknown *iObject );
  
  /**
  * Get the Knowledgeware Internal Name.
  * @param iObject
  *   The object.
  * @return
  *   The Internal Name as defined in the Knowledgeware Type Dictionary.
  */
  static CATUnicodeString GetObjectInternalName ( const IUnknown *iObject );

  /**
  * Get the Display Name (NLS name).
  * @param iObject
  *   The object.
  * @return
  *   The Display Name or NLS Name.
  */
  static CATUnicodeString GetObjectDisplayName ( const IUnknown *iObject );

};
#endif
