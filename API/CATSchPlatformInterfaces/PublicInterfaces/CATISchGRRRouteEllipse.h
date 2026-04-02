#ifndef CATISchGRRRouteEllipse_H
#define CATISchGRRRouteEllipse_H

//	COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

extern "C" const IID IID_CATISchGRRRouteEllipse ;

class CATISchGRRRouteEllipse;

/**
 * Interface to manage a Schematic route graphic object. 
 * <b>Role</b>: Defines Schematic route graphic object content.
 */
class CATISchGRRRouteEllipse : public IUnknown
{

  public:   
  
  /**
  * Get the seed point of the route graphic ellipse.
  * @param oDb2XY
  *   X-Y coordinates of the seed point for the ellipse.
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
  virtual HRESULT GetSeedPoint (double *oDb2XY) = 0;

  /**
  * Set the seed point of the route graphic ellipse. 
  * @param iDb2EndPt
  *   X-Y coordinates of the seed point for the ellipse.
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
  virtual HRESULT SetSeedPoint (const double iDb2XY[2]) = 0;

  /**
  * Check whether the Seed point has been set.
  * @param oBYes
  *   TRUE if the seed point has been initialized.
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
  virtual HRESULT HasSeedPoint (CATBoolean *oBYes) = 0;

};
#endif
