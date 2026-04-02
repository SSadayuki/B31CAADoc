/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 1999
#ifndef CATIDftViewMakeUp_H
#define CATIDftViewMakeUp_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#include "CATDraftingInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATMacForIUnknown.h"
#include "CATBooleanDef.h"
#include "CATDftViewLinkType.h"

class CATIDftView;
class CATIView;
class CATIDftSheet;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftViewMakeUp ;
#else
extern "C" ExportedByDraftingItfCPP const IID IID_CATIDftViewMakeUp ;
#endif

/**
  * Interface used to manage the make-up of the view in the sheet.
  * <b>Role</b>: The view make-up manages the display layout of a view 
  * in the sheet.
  * It manages the position, scale, orientation and other display
  * parameters.
  */
class ExportedByDraftingItfCPP CATIDftViewMakeUp: public CATBaseUnknown
{
public:
  
/**
 * Gets the sheet containing this view make-up.
 * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
 * @param oSheet
 *   The father sheet.
 */  
  virtual HRESULT GetSheet(CATIDftSheet **oSheet) const = 0;
  
/**
 * Gets the view scale.
 * @param oScale
 *   The view scale.
 */  
  virtual HRESULT GetScale(double *oScale) const = 0;
  
/**
 * Gets the view orientation in the sheet.
 * @param oOrientation
 *   The view orientation.
 */  
  virtual HRESULT GetAngle(double *oOrientation) const = 0;
  
/**
 * @nodoc
 *  This method is now replaced by @href CATIDftViewMakeUp#GetAxisData
 */ 
  virtual HRESULT GetPosition(double *oX, double *oY) const = 0;
  
/**
 * Sets the view scale.
 * @param iScale
 *   The view scale.
 *   <br><b>Legal Values</b>: The scale is greater than 0.
 */  
  virtual HRESULT SetScale(const double iScale) = 0;
  
/**
 * Sets the view orientation in the sheet.
 * @param iOrientation
 *   The view orientation
 */ 
  virtual HRESULT SetAngle(const double iOrientation) = 0;
  
/**
 * @nodoc
 *  This method is now replaced by @href CATIDftViewMakeUp#SetAxisData
 */ 
  virtual HRESULT SetPosition(const double iX, const double iY) = 0;
    
/**
 * Used to know if the dynamic frame showing the view bounding box is visible.
 * @param oFVisu 
 *   The frame visibility.
 */ 
  virtual HRESULT IsFrameVisible(boolean *oFVisu) const = 0;
  
/**
 * Description : Sets the view frame visibility.
 * @param iFVisu
 *   The frame visibility.
 */ 
  virtual HRESULT SetFrameVisibility(const boolean iFVisu)  = 0;
  
/**
 * Used to know if the view axis is visible.
 * The axis is visible only when the view is in edition.
 * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
 * @param oAxisVisu 
 *   The axis visibility.
 */ 
  virtual HRESULT IsAxisVisible(boolean *oAxisVisu) const = 0;
  
/**
 * Description : Sets the view axis visibility.
 * The axis is visible only when the view is in edition.
 * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
 * @param iAxisVisu
 *   The axis visibility.
 */ 
  virtual HRESULT SetAxisVisibility(const boolean iAxisVisu)  = 0;
    
/**
 * Used to link the view in position with an other one.
 * @param MotherView
 *   The mother view (concerning positionning).
 * @param iLinkType
 *   The link mode.
 * @param iPosRelation
 *   An user defined relation (not used yet).
 */
  virtual HRESULT LinkWith(const CATIDftViewMakeUp *iMotherView, 
                           const CATDftViewLinkType iLinkType = AUTOMATIC, 
                           const IUnknown * iPosRelation = NULL) = 0;
  
/**
 * Removes the view link.
 */
  virtual HRESULT RemoveViewLink() = 0;
  
/**
 * Gets the information concerning the view position rule.
 * @param <tt>CATIDftViewMakeUp **oMother</tt>
 * [out] The mother view (concerning positionning)
 * @param <tt>CATDftViewLinkType *oLinkType</tt>
 * [out] The link mode
 * @param <tt>IUnknown **oPosRelation</tt>
 * [out] The Poitioning relation
 * @return
 * Un <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> if oMother is valuated
 * <dt> <tt>E_FAIL</tt>   <dd> 
 * </dl>
 */
  virtual HRESULT GetViewLink (CATIDftViewMakeUp **oMother, CATDftViewLinkType *oLinkType, 
                               IUnknown **oPosRelation) const = 0;
  
/**
 * Gets the view associated to this make-up.
 * The view may be a drafting view or a detail.
 * @param oView
 *   The associated view.
 */
  virtual HRESULT GetView(CATIView **oView) const = 0;
  
/**
 * Enables the user to get the global scale factor between the scale of the view 
 * and the global scaling applied by the sheet to the views.
 * The relation is viewscale = globalscaling * scalefactor.
 * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
 * @param <tt>double * oScaleFactor</tt>
 * [out] The scale factor of the view.
 * @return
 * Un <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> SUCCESS
 * <dt> <tt>E_FAIL</tt>   <dd> No attribute available.
 * </dl>
 */
  virtual HRESULT GetScaleFactor( double * oScaleFactor ) const = 0;
  
/**
 * Returns the coordinates of the makeup coordinate system origin.
 * It is expressed with respect to the sheet coordinate system.
 * These coordinates, like any length, are measured in millimeters.
 * @param <tt>double * oX</tt>
 * [out] The x coordinate of the makeup.
 * @param <tt>double * oY</tt>
 * [out] The y coordinate of the makeup.
 * @return
 * Un <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>
 * <dt> <tt>E_FAIL</tt>
 * </dl>
 */
  virtual HRESULT GetAxisData( double * oX, double * oY ) = 0;
  
/**
 * Sets the coordinates of the makeup coordinate system origin.
 * It is expressed with respect to the sheet coordinate system.
 * These coordinates, like any length, are measured in millimeters.
 * @param <tt>const double iX</tt>
 * [in] The x coordinate of the makeup.
 * @param <tt>const double iY</tt>
 * [in] The y coordinate of the makeup.
 * @return
 * Un <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>
 * <dt> <tt>E_FAIL</tt>
 * </dl>
 */
  virtual HRESULT SetAxisData( const double iX, const double iY ) = 0;
  
private :
  CATDeclareInterface;
};

CATDeclareHandler(CATIDftViewMakeUp, CATBaseUnknown);

#endif
