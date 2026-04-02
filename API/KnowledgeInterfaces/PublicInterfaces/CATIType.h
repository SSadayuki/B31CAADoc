#ifndef CATIType_h
#define CATIType_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/** 
* @CAA2Level L1
* @CAA2Usage U3
*/

// inherited class 
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"

// load module
#include "CATLifSpecs.h"

// OLE IID
#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByCATLifSpecs IID_CATIType;
#else
extern "C" const IID IID_CATIType;
#endif


class CATIType_var;

/**
 * Interface dedicated to describing the type of an instance.
 *
 * <b>Role</b>: This type is shown to the user but does not necessarily 
 * reflect the internal structure of an instance : as such, it is
 * an <b>exposed</b> type.<br>
 * A type is defined by an internal name and a NLS name that is shown to 
 * the user.<br>
 * A type is created through CATITypeDictionary services.
 *
 * @see CATIInstance
 * @see CATITypeDictionary
 */
 
class ExportedByCATLifSpecs CATIType : public CATBaseUnknown
{

public :
	/**
	* Returns the name of the type (internal identifier).
	*
	* This name is the one used to find a type by its name in CATITypeDictionary services.
	* @return internal name of the type.
	*/
	virtual CATUnicodeString  Name    () const =0;

	/**
	* Returns the NLS name of the type.
	*
	* @return NLS name of the type.
	*/
	virtual CATUnicodeString UserName () const = 0;

	/**
	* Tests if this type is a subtype of (derives from) the given one.
	*
	* @param iType type to compared to.
	* @return True if this type is a subtype of the other, else False.
	*/
	virtual boolean IsaSortOf (const CATIType_var &iType) const = 0;

	/**
	* Returns the supertype (the type this type derives).
	*
	* An AddRef is done.
	* @return the supertype.
	*/
	virtual CATIType* SuperType() const = 0;

private:
  CATDeclareInterface;

}; 

CATDeclareHandler(CATIType, CATBaseUnknown);

#endif
