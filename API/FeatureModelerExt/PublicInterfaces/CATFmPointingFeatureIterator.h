
#ifndef __CATFmPointingFeatureIterator_h__
#define __CATFmPointingFeatureIterator_h__


// COPYRIGHT DASSAULT SYSTEMES 2010

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


// FeatureModelerExt forwards and headers.
class CATFmAttributeName;
class CATFmAttributeValue;
class CATFmFeatureFacade;
#include "FeatureModelerExt.h" // ExportedByFeatureModelerExt

// Other forwards and headers.
#include "CATDataType.h" // CATUINTPTR
#include "IUnknown.h" // HRESULT


/**
 * Class representing a set of (Feature + Attribute Name) couples.
 * <b>Role</b>: Iterators are used as output arguments by methods that return a variable number of objects, like the scanning methods.
 * <br> @href CATFmFeatureFacade#ScanPointingFeatures is an example of such use.
 * <p>LifeCycle information.<br>
 *   The logical Life Cycle of many objects, such as Features or Containers, is not managed using strong ( @href CATBaseUnknown#AddRef ,
 *   @href CATBaseUnknown#AddRelease ) reference. Features can be deleted in several ways (for instance using @href CATFmFeatureFacade#DeleteSelf )
 *   no matter how many <tt>AddRef</tt>'d pointers reference it. Inversly releasing all available pointers to a Feature or a Container does not
 *   induce their logical deletion. They can disappear either by explicit deleteion or because their container (Container, 3D Shape, Technological
 *   Representation...) is unloaded or closed.<br>
 *   Iterators are not intended to take any active part in the logical Life Cycle of the objects they reference.
 *   They however use weak references to ensure safe operation, attempts to access deleted objects will safely fail.
 *   They are consequently not intended to be used as class member data.</p>
 */
class ExportedByFeatureModelerExt CATFmPointingFeatureIterator
{
public:
  /**
   * Constructs an empty (Feature + Attribute Name) Iterator.
   * <br><b>Role</b>: Creates an iterator that will be used as an output argument of a method.
   * @see CATFmFeatureFacade .
   */
  CATFmPointingFeatureIterator();

  /**
   * Destructor.
   */
  ~CATFmPointingFeatureIterator();


  // Required standard C++ methods.

  /**
   * Copy constructor.
   * <br><b>Role</b>: This method creates an exact copy of a (Feature + Attribute Name) Iterator.
   * @param iIterator [in]
   *   The Iterator to copy.
   */
  CATFmPointingFeatureIterator(const CATFmPointingFeatureIterator & iIterator);

  /**
   * Assignment operator.
   * <br><b>Role</b>: This method transforms this Iterator to an exact copy of another (Feature + Attribute Name) Iterator.
   * @param iIterator [in]
   *   The Iterator to copy.
   */
  CATFmPointingFeatureIterator & operator=(const CATFmPointingFeatureIterator & iIterator);

  // 1. Iteration.

  /**
   * Iterates to the next (Feature + Attribute Name) couple.
   * @param oFeature [out]
   *   A (caller provided) Facade that will contain the Feature of the next (Feature + Attribute Name) couple.
   *   <br>Notice that the Credentials of the provided Facade will not be used nor be modified.
   *   <br>If the method fails <tt>oFeature</tt> is not modified, it is otherwise overwritten with the retrieved value.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The Facade is now bound to next Feature.</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>The iteration is over.</dd>
   *  </dl>
   */
  HRESULT Next(CATFmFeatureFacade & oFeature);

  /**
   * Iterates to the next Feature.
   * @param oFeature [out]
   *   A (caller provided) value that will contain the next Feature.
   *   <br>If the method fails <tt>oFeature</tt> is not modified, it is otherwise overwritten with the retrieved value.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The Facade is now bound to next Feature.</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>The iteration is over.</dd>
   *  </dl>
   */
  HRESULT Next(CATFmAttributeValue & oFeature);

  /**
   * Retrieves the Attribute Name of the current (Feature + Attribute Name) couple.
   * @param oPointingAttribute [out]
   *   A (caller provided) AttributeName object that will contain the Attribute Name.
   *   <br>If the method fails <tt>oPointingAttribute</tt> is not modified, it is otherwise overwritten with the retrieved value.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The Attribute Name has been retrieved.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials did not grant sufficient access to the current pointing Feature.</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>The iteration is over.</dd>
   *  </dl>
   */
  HRESULT GetCurrentPointingAttributeName(CATFmAttributeName & oPointingAttribute);

private:
  CATUINTPTR m_Data[1];
};


#endif // __CATFmFeatureIterator_h__
