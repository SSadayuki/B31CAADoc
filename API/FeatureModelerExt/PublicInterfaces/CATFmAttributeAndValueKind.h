
#ifndef __CATFmAttributeAndValueKind_h__
#define __CATFmAttributeAndValueKind_h__


// COPYRIGHT DASSAULT SYSTEMES 2010

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


/**
 * Enumeration representing the types of value supported by Feature Modeler.
 * <br/>This enumeration contains the types that can be held by a @href CATFmAttributeValue and by a feature attribute.
 * <br/>It can be retrieved through @href CATFmAttributeValue#Kind method or @href CATFmFeatureFacade#GetAttributeValuationInfo .
 * @param CATFmKind_void
 *   Represents a null (unset) type.
 * @param CATFmKind_boolean
 *   Represents a boolean type.
 * @param CATFmKind_byte
 *   Represents a byte type.
 *   <br/>It can be mapped to unsigned char C type (8 bits).
 * @param CATFmKind_int
 *   Represents an integer type.
 *   <br/>It can be mapped to signed int C type (32 bits).
 * @param CATFmKind_double
 *   Represents a double type.
 *   <br/>It can be mapped to double C type (64 bits).
 * @param CATFmKind_string
 *   Represents a string type.
 *   <br/>It can be mapped to the CATUnicodeString class.
 * @param CATFmKind_any
 *   Represents a compound type.
 *   <br/>A compound type is a list of different types.
 * @param CATFmKind_feature
 *   Represents a link to a feature type.
 *   <br/>It can be mapped to a pointer on a feature instance.
 * @param CATFmKind_external
 *   Represents an external link type.
 *   <br/>It can be mapped to a pointer on a CATOmbObjectInContext instance.
 * @see CATFmAttributeValue , CATFmFeatureFacade , CATFmAttributeValuationInfo .
 */
enum CATFmAttributeAndValueKind
{
  CATFmKind_void,
  CATFmKind_boolean,
  CATFmKind_byte,
  CATFmKind_int,
  CATFmKind_double,
  CATFmKind_string,
  CATFmKind_any,
  CATFmKind_feature,
  CATFmKind_external
};


#endif // __CATFmAttributeAndValueKind_h__
