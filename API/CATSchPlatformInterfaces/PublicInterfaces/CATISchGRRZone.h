#ifndef CATISchGRRZone_H
#define CATISchGRRZone_H

//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATISchBoundaryElem;
class CATIUnknownList;

extern "C" const IID IID_CATISchGRRZone ;

/**
 * Interface to manage a Schematic zone graphical representation object. 
 * <b>Role</b>: Defines Schematic zone graphical representation object behaviors
 */
class CATISchGRRZone : public IUnknown
{
  public:
  
  /**
  * Add a boundary element to the zone.
  * @param iZoneBndy
  *   The geometric boundary elements to be added.
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
  virtual HRESULT AddBoundaryElement (CATISchBoundaryElem *iZoneBndyToAdd) = 0;

  /**
  * Remove a boundary element to the zone.
  * @param iZoneBndy
  *   The geometric boundary elements to be added.
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
  virtual HRESULT RemoveBoundaryElement (CATISchBoundaryElem *iZoneBndyToRemove) = 0;

  /**
  * List all boundary elements of this zone graphical representation.
  * @param oLZoneBndy
  *   List of geometric boundaries of this zone graphical representation
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
  virtual HRESULT ListBoundaryElements (CATIUnknownList **oLZoneBndy) = 0;

  /**
  * Check whether the boundary of this zone graphical representation is valid.
  * @param oLZoneBndy
  *   Set to TRUE if the boundary is a closed polygon
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
  virtual HRESULT IsBoundaryValid (CATBoolean *BIsValid) = 0;

};
#endif
