
#ifndef __CATFmAttributeUpdateBehavior_h__
#define __CATFmAttributeUpdateBehavior_h__


// COPYRIGHT DASSAULT SYSTEMES 2010

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


/**
 * Enumeration representing the update behavior of an attribute of a feature.
 * <br/>Update behavior of a feature attribute can be retrieved through @href CATFmFeatureFacade#GetAttributeValuationInfo (see @href CATFmAttributeValuationInfo m_UpdateBehavior data member).
 * <br/>It can be dynamically modified through @href CATFmFeatureFacade#SetUpdateBehavior .
 * @param CATFmNeutral
 *   Modification of the attribute value will not affect update status of its feature.
 * @param CATFmIn
 *   Modification of the attribute value will affect update status of its feature.
 *   <br/>When modified, the feature update status is changed to not up to date.
 *   <br/>If a feature B is pointed through a CATFmIn attribute of a feature A, then:
   * <ul>
   * <li>The update of the pointing feature A will call the update of the pointed feature B.</li>
   * <li>B going not up to date will cause A to become also not up to date.</li>
   * </ul>
 * @param CATFmOut
 *   Modification of the attribute value will not affect update status of its feature.
 *   <br/>If a CATFmIn attribute a of a feature A is remotely valuated by a CATFmOut attribute b of a feature B,
 *   then the update of A will call the update of B and then the update of b.
 * @see CATFmFeatureFacade , CATFmAttributeValuationInfo .
 */
enum CATFmAttributeUpdateBehavior
{
  CATFmNeutral,
  CATFmIn,
  CATFmOut
};


#endif // __CATFmAttributeUpdateBehavior_h__
