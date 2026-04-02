#ifndef CATISchDropOffView_H
#define CATISchDropOffView_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
class CATIUnknownList;
class CATIDftView;

extern "C" const IID IID_CATISchDropOffView ;

/**
 * Interface to manage drafting views within the schematics environment.
 * <b>Role</b>: Manages drafting views within a schematics diagram.
 */
class CATISchDropOffView : public IUnknown
{
  public:   
  
  /**
  * Adds a drafting view to the schematics diagram.
  * @param iView
  *   pointer to drafting view to add
  * @param oView
  *   pointer to newly added drafting in this document
  * @param iDb2PosXY
  *   pointer to XY coordinate for placement, if NULL, the position is the same 
  *   as that of the input view.
  * @param iDb1Scale
  *   scale of view added, if NULL, scale is assumed to be that of the input view.
  * @param iDb1Angle
  *   The view orientation, if NULL, orientation is assumed to be that of the input view.
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
  virtual HRESULT AddDropOffView( CATIDftView *iView, CATIDftView **oView, double *iDb2PosXY=NULL,
    double *iDb1Scale = NULL, double*iDb1Angle = NULL) = 0;

  /**
  * Removes a drafting view from the schematics diagram.
  * @param iViewToRemove
  *   pointer to drafting view to remove
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
  virtual HRESULT RemoveDropOffView( CATIDftView *iViewToRemove ) = 0;

  /**
  * Lists drafting views in this schematics diagram.
  * @param oLDropOffViews
  *   A list of drafting views
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
  virtual HRESULT ListDropOffViews(CATIUnknownList **oLDropOffViews ) = 0;

};
#endif
