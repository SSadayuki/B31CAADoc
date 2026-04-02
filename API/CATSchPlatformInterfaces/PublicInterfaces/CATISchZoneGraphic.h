#ifndef CATISchZoneGraphic_H
#define CATISchZoneGraphic_H

//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
class CATIUnknownList;
class CATISchGRRZone;

extern "C" const IID IID_CATISchZoneGraphic ;

/**
 * Interface to manage schematic zone's association with its
 * graphical representations.  
 * <b>Role</b>: To modify schematic zone's links to its
 * graphical representations.
 */
class CATISchZoneGraphic : public IUnknown
{
  public:
  
  /**
  * Add a graphical representation to a zone.
  * @param iGRRToAdd
  *   The graphical representation to be added to the zone.
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
  virtual HRESULT AddGraphicalRepresentation (CATISchGRRZone *iGRRToAdd) = 0;

  /**
  * Remove a graphical representation from a zone.
  * @param iGRRToRemove
  *   The graphical representation to be removed from the zone.
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
  virtual HRESULT RemoveGraphicalRepresentation (CATISchGRRZone *iGRRToRemove) = 0;

  /**
  * List all graphical representations of a zone.
  * @param oLGRR
  *   A list of graphical representations
  *   (members are CATISchGRRZone interface pointers).
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
  virtual HRESULT ListGraphicalRepresentations (CATIUnknownList **oLGRR) = 0;
};
#endif
