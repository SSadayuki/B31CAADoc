
#ifndef __CATFmAttributeValuationMode_h__
#define __CATFmAttributeValuationMode_h__


// COPYRIGHT DASSAULT SYSTEMES 2010

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


/**
 * Enumeration representing the valuation mode of an attribute of a feature.
 * <br/>This enumeration allows to represent the three different ways a value can be found on a feature.
 * <br/>It can be retrieved through @href CATFmFeatureFacade#GetAttributeValuationInfo (see @href CATFmAttributeValuationInfo.m_ValuationMode data member).
 * @param CATFmImmediate
 *   The value can be found directly (locally) on the feature.
 * @param CATFmInherited
 *   The value is inherited from the startup or the reference of the feature.
 * @param CATFmRedirected
 *   The value is redirected to another feature value.
 * @see CATFmFeatureFacade , CATFmAttributeValuationInfo .
 */
enum CATFmAttributeValuationMode
{
  CATFmImmediate,
  CATFmInherited,
  CATFmRedirected
};


#endif // __CATFmAttributeValuationMode_h__
