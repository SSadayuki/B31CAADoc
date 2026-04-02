#ifndef CATISchRouteSymbol_H
#define CATISchRouteSymbol_H

//	COPYRIGHT DASSAULT SYSTEMES 2007

/**
 * @CAA2Level L1
 * @CAA2Usage U3  
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATISchGRRRoute;

extern "C" const IID IID_CATISchRouteSymbol;

/**
 * Interface to manage a symbol placed on a route. 
 * <b>Role</b>: Defines a route symbol object content.
 */
class CATISchRouteSymbol : public IUnknown
{
  public:   

  /**
  * Get the graphical representation of a schematic route that owns this symbol.
  * @param oGRRRoute
  *   The graphical representation that owns this symbol.
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
  virtual HRESULT GetGRRRoute (CATISchGRRRoute **oGRRRoute) = 0;

  /**
  * Set the symbol's position on the route that own it.
  * @param iSegNum
  *   The route segment number (<= number of segments in the route).
  * @param iSegParm
  *   The parameter along the segment (0.<=iSegParm<=1.).
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
  virtual HRESULT SetPosition (const int &iSegNum, const double &iSegParm) = 0;

  /**
  * Get the symbol's position on the route that own it.
  * @param oSegNum
  *   The route segment number.
  * @param oSegParm
  *   The parameter along the segment (0.<=iSegParm<=1.).
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
  virtual HRESULT GetPosition (int &oSegNum, double &oSegParm) = 0;
  
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
  * Mirror the symbol over the route segment line on which
  * the symbol is positioned.
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
  * line on which the symbol is positioned and going through the
  * symbol's position point on that segment line.
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
