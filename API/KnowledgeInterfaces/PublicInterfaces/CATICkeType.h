#ifndef CATICkeType_h
#define CATICkeType_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/** 
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// inherited class 
#include "CATBaseUnknown.h"

// load module
#include "KnowledgeItf.h"

// forwards definition
//#include "CATISpecObject.h"
#include "CATICkeForwards.h"
class CATICkeMKSUnit_var;

// OLE IID
#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByKnowledgeItf IID_CATICkeType;
#else
extern "C" const IID IID_CATICkeType;
#endif

/**   
 * Interface dedicated to parameters type management.
 * <b>Role</b>: This interface is used to classify parameters from their types.<br>
 * It concerns simple types as StringType, RealType, BooleanType and IntegerType<br>
 * or  dimension types such as AngleType, LengthType, etc... <br>
 *     that implement specifically CATICkeMagnitude<br>
 * or  enumtypes<br>
 *     that implement specifically CATIEnumere<br>
 * 
 * @see CATICkeMagnitude
 * @see CATIEnumere
 * @see CATIParmDictionary 
*/

class ExportedByKnowledgeItf CATICkeType : public CATBaseUnknown
{

public :
  

/**
 * Returns the name of the type (internal identifier).
 * This name is the one used to find a type by its name in CATParmDictionary methods.<br>
 */
virtual CATUnicodeString  Name    () const =0;

/**
 * Returns a NLS string that represents the type.
 * Must be used to show the type to the users. 
 */
virtual CATUnicodeString  Show    () const =0; 

/**
* Returns the type NLS name.
*/
virtual CATUnicodeString UserName () const = 0;




/**
 * @nodoc
 * Returns the kind of value which is hidden behind the type (Real for a dimension).
 */
virtual CATICkeType_var    GetValueType () const = 0;

/**
 * @nodoc 
 * Returns the MKS equivalent of this type if any.
 */
virtual CATICkeMKSUnit_var MKS () const = 0;



/** 
 * @nodoc do not use. To test if a type is equal to another, simply compare objects.
 * Basic types are available in CATIParmDictionary.
 */
virtual CATCke::Boolean Isa       (const CATICkeType_var &iType) const =0;

/**
 * Tests if this type is a subtype of the one in argument.
 * @param iType type compared to
 * <br><b>Legal values</b>:return value can be 
 * <tt>CATCke::True</tt> if this type is a sub-type of the other, or
 * <tt>CATCke::False</tt> if it isn't
 */
virtual CATCke::Boolean IsaKindOf (const CATICkeType_var &iType) const =0;

/**
 * @nodoc test comparison between this type and CATParmDictionary::RealType. Can also be retreived through CATIParmDictionary.
 */
virtual CATCke::Boolean IsaReal   () const =0;

/**
 * @nodoc test comparison between this type and CATParmDictionary::BooleanType. Can also be retreived through CATIParmDictionary.
 */
virtual CATCke::Boolean IsaBoolean() const =0;

/**
 * @nodoc test comparison between this type and CATParmDictionary::IntegerType. Can also be retreived through CATIParmDictionary.
 */
virtual CATCke::Boolean IsaInteger() const =0;

/**
 * @nodoc test comparison between this type and CATParmDictionary::StringType. Can also be retreived through CATIParmDictionary.
 */
virtual CATCke::Boolean IsaString () const =0;

/**
 * Tests if this type is a subtype of the one in argument.
 * @param iTypeName name of the type compared to
 * <br><b>Legal values</b>:return value can be 
 * <tt>CATCke::True</tt> if this type is a sub-type of the other, or
 * <tt>CATCke::False</tt> if it isn't
 */
virtual CATCke::Boolean IsaKindOf (const CATUnicodeString &iTypeName) const =0;


 
private:

  CATDeclareInterface;

}; 

CATDeclareHandler(CATICkeType, CATBaseUnknown);

#endif



