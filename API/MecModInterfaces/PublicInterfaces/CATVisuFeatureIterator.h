#ifndef CATVisuFeatureIterator_h
#define CATVisuFeatureIterator_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

class CATISpecObject;

/**
 * Class to use as an iterator over a set of feature.
 * <b>Role</b>: This class is used as an output parameter of CATIVisuHierarchy methods.
 * Users of CATIVisuHierarchy run the iterator to get all features with the 'Next' method.
 * If one intends to implement CATIVisuHierarchy, he will have to derive 
 * CATVisuFeatureIterator and implement the 'Next' method.
 * CATIVisuHierarchy must allocate the output iterator with the C++ new operator.
 * Users of CATIVisuHierarchy will have to delete the iterator after use.
 */
class CATVisuFeatureIterator
{
public:
  /**
   * Constructor. This class can not be instantiated.
   */
  CATVisuFeatureIterator() {}
  virtual ~CATVisuFeatureIterator() {}

  /**
   * Returns the next object of the iteration, NULL if it is over.
   * <br>The returned feature life cycle is monitored by the iterator.
   * So, to use the returned feature <b>longer</b> than the iterator
   * AddRef the returned value and Release when it is not needed any more.
   */
  virtual CATISpecObject *Next() = 0;

private:
  // NOT implemented, to prevent default
  /** @nodoc */
  CATVisuFeatureIterator(const CATVisuFeatureIterator&);
  /** @nodoc */
  CATVisuFeatureIterator& operator=(const CATVisuFeatureIterator&);
};

#endif
