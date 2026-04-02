#ifndef CATIVisuHierarchy_h
#define CATIVisuHierarchy_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "CATBaseUnknown.h"
#include "MecModItfCPP.h"
class CATVisuFeatureIterator;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIVisuHierarchy;
#else
extern "C" const IID IID_CATIVisuHierarchy;
#endif

/**
 * Interface to define the visual hierarchy of a mechanical feature.
 * <b>Role</b>: Implement this interface if you want to override the default
 * feature hierarchy used to visualize. Both GetVisualizedChildren and
 * GetVisualizingParent return an iterator you should implement by deriving
 * CATVisuFeatureIterator.
 * @see CATVisuFeatureIterator
 */
class ExportedByMecModItfCPP CATIVisuHierarchy : public CATBaseUnknown
{
  CATDeclareInterface;

public:
  /**
   * Returns an iterator to parse the children that should be visualized.
   * @param oIterator
   * The iterator on all visualized children. Delete the iterator after use.
   */
  virtual HRESULT GetVisualizedChildren(CATVisuFeatureIterator *&oIterator) = 0;

  /**
   * Returns an iterator to parse the parents that visualize an object.
   * @param oIterator
   * The iterator on all visualizing parents. Delete the iterator after use.
   */
  virtual HRESULT GetVisualizingParent(CATVisuFeatureIterator *&oIterator) = 0;
};
CATDeclareHandler(CATIVisuHierarchy, CATBaseUnknown);

#endif
