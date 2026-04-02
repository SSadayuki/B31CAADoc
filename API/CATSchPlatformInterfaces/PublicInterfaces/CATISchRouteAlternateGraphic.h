#ifndef CATISchRouteAlternateGraphic_H
#define CATISchRouteAlternateGraphic_H

//	COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"

#include "CATSchGeneralEnum.h"

class CATIUnknownList;
class CATISchGRR;

extern "C" const IID IID_CATISchRouteAlternateGraphic ;

/**
 * Interface to manage Schematic component's association with its
 * alternate graphic representation objects.  
 * <b>Role</b>: To modify component's links to its
 * alternate graphical representations.
 */
class CATISchRouteAlternateGraphic : public IUnknown
{
  public:  
  
  /**
  * Add an alternate graphical primitive to a route.
  * The alternate graphical style is determined by the application.
  * The @see CATISchAppRouteAlternateGraphic interface must be implemented
  * on the Schematic component in order to specify the graphic style.
  * The @see CATISchAppAssembly interface must also be implemented on 
  * on the Schematic component in order to identify the component as an
  * assembly.
  *
  * @param iInitialXYPosition
  *   The initial position for calculating the display of the graphic.
  *   If NULL, the start point will be calculated based on the route
  *   graphic path of the first assembly member to this Schematic component.
  * @param oAddedGRR
  *   The route alternate graphical primitive that is added to the route.
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
  virtual HRESULT AddAlternateGraphic (const  double *iInitialXYPosition, CATISchGRR **oAddedGRR ) = 0;

  /**
  * Remove an alternate graphical primitive from a route.
  * @param iGRRToBeRemoved
  *   The route alternate graphic to be removed from the route.  The input
  *   graphic will be removed as long as there are at least two alternate
  *   graphics of that style on the route.
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
  virtual HRESULT RemoveAlternateGraphic (CATISchGRR *iGRRToBeRemoved) = 0;

  /**
  * Lists the alternate graphics of a route.  The list contains all 
  * objects of the same alternate graphic style.  The style is determined
  * by the appliction. The @see CATISchAppRouteAlternateGraphic interface 
  * must be implemented on the Schematic component in order to specify the 
  * graphic style.
  * @param oLGRR
  *   A list of the alternate graphic objects.
  *   
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
  virtual HRESULT ListAlternateGraphics (CATIUnknownList **oLGRR) = 0;

  /**
  * Removes all alternate graphical primitives.
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
  virtual HRESULT RemoveAllAlternateGraphics() = 0;

  /**
  * Removes all alternate graphical primitives of the given style.
  * @param iStyle
  *   An enum of the style of alternate graphic to remove.
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
  virtual HRESULT RemoveAllAlternateGraphicsOfStyle(const CATSchRouteAlternateGraphicStyle &iStyle) = 0;

};
#endif
