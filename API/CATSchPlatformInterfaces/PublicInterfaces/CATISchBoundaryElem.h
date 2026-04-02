#ifndef CATISchBoundaryElem_H
#define CATISchBoundaryElem_H

//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"

class CATIUnknownList;

extern "C" const IID IID_CATISchBoundaryElem ;

/**
 * Interface for the definition of a boundary element. 
 * <b>Role</b>: Returns boundary element definition
 */
class CATISchBoundaryElem : public IUnknown
{
  public:
  
  /**
  * Get the definition points (segments end points) of one side of the
  * boundary. If the side is a curve, these points are the end points 
  * of the chords approximating the curve.
  * @param oLDbPts
  *   A list of X-Y coordinates of the points. 2 doubles per point.
  * @param oSizeOfList
  *   Total number of points in the list. 2 times the number of points.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetBoundaryPoints (double **oLDbPts, int *oSizeOfList) = 0;

  /**
  * Get the end points (segments end points) of one side of the
  * boundary.
  * @param oLDb4Pts
  *   An array of 4 doubles.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetEndPoints (double *oLDb4Pts) = 0;

  /**
  * Get the list of owners of this zone.
  * @param oLGRRZoneOwners
  *   A list of GRRZone which has included this boundary element.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT ListGRRZoneOwners (CATIUnknownList **oLGRRZoneOwners) = 0;

};
#endif
