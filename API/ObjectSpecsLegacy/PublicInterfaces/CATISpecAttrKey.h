/* -*-c++-*- */
#ifndef CATISpecAttrKey_H
#define CATISpecAttrKey_H

// COPYRIGHT DASSAULT SYSTEMES  1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATBaseUnknown.h"

class CATISpecObject;
class CATUnicodeString;
#include "CATISpecDeclarations.h"

#include "AC0SPBAS.h"
extern ExportedByAC0SPBAS IID IID_CATISpecAttrKey ;


/**
* Interface to access an attribute's value. 
* <br><b>Role:</b> It is similar to CATISpecAttribute but this interface 
* is not attached to a particular SpecObject : it is an abstraction 
* of the attribute (i.e. generally the startup attribute). 
* <br>Key can be used instead of the attribute name for all instances 
* of that startup. 
*
* @see CATISpecAttrAccess, CATISpecObject
*/

class ExportedByAC0SPBAS CATISpecAttrKey : public CATBaseUnknown
{
  CATDeclareInterface;
  public:
  /**
   * Returns the feature holding the attribute.
   * @return CATBaseUnknown#Release
   */
    virtual CATISpecObject* 			GetOwner() const = 0;

  /**
   * Returns the type of the elements in a list attribute, i.e. tk_integer, tk_specobject, etc.
   * <br>WARNING: on an attribute that is NOT a list, this method will return tk_list !
   */
    virtual CATAttrKind				GetListType() const = 0;

  /**
   * Returns the type of an attribute,  i.e. tk_integer, tk_specobject, etc.
   * <br>WARNING: on an attribute that is a list, this method will return tk_list. You should then use GetListType to get the underlying type.
   */
    virtual CATAttrKind				GetType() const = 0;

  /**
   * Returns the name of the attribute.
   */
    virtual CATUnicodeString              	GetName() const = 0;


};

CATDeclareHandler( CATISpecAttrKey , CATBaseUnknown );
#endif
