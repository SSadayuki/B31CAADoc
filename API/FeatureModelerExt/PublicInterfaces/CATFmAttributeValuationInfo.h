
#ifndef __CATFmAttributeValuationInfo_h__
#define __CATFmAttributeValuationInfo_h__


// COPYRIGHT DASSAULT SYSTEMES 2010

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


// FeatureModelerExt forwards and headers.
#include "CATFmAttributeAndValueKind.h"
#include "CATFmAttributeUpdateBehavior.h"
#include "CATFmAttributeValuationMode.h"

// Other forwards and headers.
#include "CATSysBoolean.h" // CATBoolean

/**
 * Class representing the valuation informations of a feature attribute.
 * </br><b>Role</b>: This data structure contains detailed informations on a feature attribute.
 * <br/>This data structure can be retrieved through CATFmFeatureFacade#GetAttributeValuationInfo.
 * @see CATFmFeatureFacade , CATFmAttributeAndValueKind , CATFmAttributeValuationMode , CATFmAttributeUpdateBehavior .
 */
class CATFmAttributeValuationInfo
{
public:
  /**
   * The type of the attribute.
   * For a redirected attribute m_Type is @href CATFmKind_any .
   * @see CATFmAttributeAndValueKind .
   */
  CATFmAttributeAndValueKind   m_Type;

  /**
   * Whether the attribute is a list.
   */
  CATBoolean                   m_IsList;

  /**
   * Whether the attribute value is unset on the feature.
   * Only simple types (CATFmKind_boolean, CATFmKind_octet, CATFmKind_int, CATFmKind_double, CATFmKind_string) support unset values.
   * Depending on valuation mode this data can be irrelevant.
   */
  CATBoolean                   m_IsUnset;

  /**
   * Whether the attribute is private on the feature.
   */
  CATBoolean                   m_IsPrivate;

  /**
   * Whether the attribute represents an aggregation relation, can be true only if m_Type is CATFmKind_feature.
   */
  CATBoolean                   m_IsAggregating;

  /**
   * Valuation mode of the attribute on the feature.
   * @see CATFmAttributeValuationMode .
   */
  CATFmAttributeValuationMode  m_ValuationMode;

  /**
   * Update behavior of the attribute on the feature.
   * @see CATFmAttributeUpdateBehavior .
   */
  CATFmAttributeUpdateBehavior m_UpdateBehavior;

  /**
   * Contains the size of the attribute value.
   * Depending on valuation mode this data can be irrelevant.
   */
  unsigned int                 m_ListSize;
};


#endif // __CATFmAttributeValuationInfo_h__
