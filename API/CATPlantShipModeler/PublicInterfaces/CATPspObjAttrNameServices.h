// COPYRIGHT DASSAULT SYSTEMES  2000+ 
/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */
//=============================================================================
//
// CATPspObjAttrNameServices.h
//
//=============================================================================

/**
 * Tools to query Plant Ship object and attribute names.
 */

#ifndef CATPspObjAttrNameServices_H
#define CATPspObjAttrNameServices_H

#include "CATPspUtilities.h"
#include "CATUnicodeString.h"
#include "CATIContainer.h"
class CATISpecObject_var;

//-----------------------------------------------------------------------------
class ExportedByCATPspUtilities CATPspObjAttrNameServices
{
  public:
 
  /**
  * Get the Spec Modeler Late Type Name given a Knowledgeware Internal Name.
  * @param iObjectInternalName
  *   The Internal Name as defined in the Knowledgeware Type Dictionary.
  * @return
  *   The Spec Modeler Late Type Name.
  */
  static CATUnicodeString GetObjectSpecName( const CATUnicodeString& iObjectInternalName,
          const CATIContainer_var& iCont=NULL_var);

  /**
  * Get the Knowledgeware Internal Name given a Spec Modeler Late Type Name.
  * @param iObjectSpecName
  *   The Spec Modeler Late Type Name.
  * @return
  *   The Internal Name as defined in the Knowledgeware Type Dictionary.
  */
  static CATUnicodeString GetObjectInternalName( const CATUnicodeString& iObjectSpecName,
          const CATIContainer_var& iCont=NULL_var);

  /**
  * Get the Display Name (NLS name) given a Spec Modeler Late Type Name.
  * @param iObjectSpecName
  *   The Spec Modeler Late Type Name.
  * @return
  *   The Display Name or NLS Name.
  */
  static CATUnicodeString GetObjectDisplayName( const CATUnicodeString& iObjectSpecName,
         const CATIContainer_var& iCont = CATIContainer_var(NULL_var) );

  /**
  * Get the Knowledgeware Internal Name given a Spec Object.
  * @param iObject
  *   The Spec object.
  * @return
  *   The Internal Name as defined in the Knowledgeware Type Dictionary.
  */
  static CATUnicodeString GetObjectInternalName( const CATISpecObject_var& iObject );

  /**
  * Get the Display Name (NLS name) given a Spec Modeler Object.
  * @param iObject
  *   The Spec object.
  * @return
  *   The Display Name or NLS Name.
  */
  static CATUnicodeString GetObjectDisplayName( const CATISpecObject_var& iObject );

  /**
  * Get the Knowledgeware Internal Name given a Spec Modeler Attribute Name.
  * @param iAttrInternalName
  *   The Spec Modeler Attribute Name.
  * @return
  *   The Internal Name as defined in the Knowledgeware Type Dictionary.
  */
  static CATUnicodeString GetAttrInternalName(const CATUnicodeString& iAttrSpecName);

  /**
  * Get the Spec Modeler Attribute Name given a Knowledgeware Internal Name.
  * @param iAttrSpecName
  *   The Internal Name as defined in the Knowledgeware Type Dictionary.
  * @return
  *   The Spec Modeler Attribute Name.
  */
  static CATUnicodeString GetAttrSpecName(const CATUnicodeString& iAttrInternalName);

  /**
  * Get the Display Name given an Internal Attribute Name.
  * @param iAttrInternalName
  *   The Internal Attribute Name.
  * @return
  *   The Display Name.
  */
  static CATUnicodeString GetAttrDisplayName( const CATUnicodeString& iAttrInternalName );

  /**
  * Get the R8 Internal Name given an R8 Internal Name.
  * @param iuR7InternalName
  *   The R8 or prior internal name.
  * @return
  *   The R7 Internal Name.
  */
  static CATUnicodeString GetR8InternalName(const CATUnicodeString& iuR7InternalName);

  /**
  * Get the R7 Internal Name given an R7 Internal Name.
  * @param iuR8InternalName
  *   The R7 or prior internal name.
  * @return
  *   The R8 Internal Name.
  */
  static CATUnicodeString GetR7InternalName(const CATUnicodeString& iuR8InternalName);

  private:

};
#endif
