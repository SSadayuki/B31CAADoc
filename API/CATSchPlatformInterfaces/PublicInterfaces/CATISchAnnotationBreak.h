#ifndef CATISchAnnotationBreak_H
#define CATISchAnnotationBreak_H

//	COPYRIGHT DASSAULT SYSTEMES 2007

/**
 * @CAA2Level L1
 * @CAA2Usage U3  
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

extern "C" const IID IID_CATISchAnnotationBreak;

/**
 * Interface to manage annotation break. 
 * <b>Role</b>: Defines operations on an annotation break.
 */
class CATISchAnnotationBreak : public IUnknown
{
  public:   

  /**
  * Scale the symbol.
  * @param iDbScaleFactor
  *   The scale factor to scale the symbol by.
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
  virtual HRESULT Scale (const double &iDbScaleFactor) = 0;

  /**
  * Mirror the symbol over the route segment line that ends
  * in the connector on which the symbol is placed.
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
  virtual HRESULT FlipOverLine () = 0;

  /**
  * Mirror the symbol over the line orthogonal to the route segment
  * line that ends in the connector on which the symbol is placed
  * and going through the connector's position.
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
  virtual HRESULT FlipOverOrthogonalLine () = 0;

};
#endif
