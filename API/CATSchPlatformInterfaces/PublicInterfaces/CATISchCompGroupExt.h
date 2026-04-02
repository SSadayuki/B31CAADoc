#ifndef CATISchCompGroupExt_H
#define CATISchCompGroupExt_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

extern "C" const IID IID_CATISchCompGroupExt ;

/**
 * Interface to manage Schematic component's group extension data.
 * <b>Role</b>: To get position data of the component group.
 */
class CATISchCompGroupExt : public IUnknown
{
  public:   
  
  /**
  * Get the placement axis for the component group.
  * @param oDb6PlaceMatrix
  *   Placement matrix of the component group (an array of 6 doubles)
  *   See @href CATISchCompLocation#GetTransformation2D
  *   for explanation of this argument.
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
  virtual HRESULT GetPlacementAxis (double *oDb6PlaceMatrix) = 0;

  /**
  * Set the placement axis for the component group.
  * @param iDb6PlaceMatrix
  *   Placement matrix of the component group (an array of 6 doubles)
  *   See @href CATISchCompLocation#GetTransformation2D
  *   for explanation of this argument.
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
  virtual HRESULT SetPlacementAxis (const double oDb6PlaceMatrix[6]) = 0;


};
#endif
