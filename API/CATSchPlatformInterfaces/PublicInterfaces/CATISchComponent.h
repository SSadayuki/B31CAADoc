#ifndef CATISchComponent_H
#define CATISchComponent_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATISchGRRComp;
class CATISchAppConnectable;
class CATISchComponent;
class CATISchRoute;
class CATDocument;

extern "C" const IID IID_CATISchComponent ;

/**
 * Interface to manage a Schematic component object. 
 * <b>Role</b>: Defines Schematic component object behaviors
 */
class CATISchComponent : public IUnknown
{

  public: 
    
   /**
  * Make a local component reference in another document by copying an 
  * existing one in the current document.
  * @param iDocumentToPutCopyIn
  *   Pointer to the document to make the copy in
  * @param oSchComp
  *   Pointer to the copy.
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
  virtual HRESULT CreateLocalReference (CATDocument *iDocumentToPutCopyIn, 
    CATISchComponent **oSchComp) = 0; 

  /**
  * Find the Schematic component information for placement.
  * @param iGRR
  *   Pointer to the component graphical representation.
  *   if NULL the "Primary" graphical representation will be used.
  * @param oPlaceInfo
  *   Pointer to an internal class which contains structured information
  *   of a component for placement. This is the <b>input</b> for 
  *   calling CATISchCompatible::IsComponentCompatible
  *   @see CATISchCompatible#IsComponentCompatible
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
  virtual HRESULT QueryConnectAbility (CATISchGRRComp *iGRR, IUnknown **oPlaceInfo) = 0;

  /**
  * Query whether the component is inserted into a route.
  * @param iGRR
  *   Pointer to the component graphical representation.
  * @param oBYes
  *   If TRUE, the component is currently inserted in a route.
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
  virtual HRESULT IsInserted (CATISchGRRComp *iGRR, CATBoolean *oBYes) = 0;

  /**
  * Query whether the component is a reference (as opposed to an instance).
  * @param oBYes
  *   If TRUE, the component is a reference.
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
  virtual HRESULT IsAReference (CATBoolean *oBYes) = 0;

  /**
  * Place a component in space, unconnected to other objects.
  * It will create local reference (from a catalog referenced document)
  * if necessary.
  * @param iGRR
  *   Pointer to the component graphical representation.
  *   if NULL the "Primary" graphical representation will be used.
  * @param iDb6Axis[6]
  *   X-axis of the local axis of the new instance
  *   Y-axis of the local axis of the new instance
  *   X-Y coordinates of the orgin of the new instance.
  *   This axis defines the orientation and location of the new instance
  *   in space.
  * @param oNewComponent
  *   Interface pointer to the new component instance placed.
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
  virtual HRESULT PlaceInSpace (CATISchGRRComp *iGRR,
    const double iDb6Axis[6], CATISchComponent **oNewComponent) = 0;     

  /**
  * Create a component instance. 
  * The reference component must exist <b>in current document</b>
  * @param iGRR
  *   Pointer to the component graphical representation.
  *   if NULL the "Primary" graphical representation will be used.
  * @param iDb6Axis
  *   X-axis of the local axis of the new instance
  *   Y-axis of the local axis of the new instance
  *   X-Y coordinates of the orgin of the new instance.
  *   This axis defines the orientation and location of the new instance
  *   in space.
  *   Optional (could be NULL). If provided, the instance will be
  *   and orientated as defined. Else (1.0,0.0,0.0,1.0,0.0,0.0) is used
  * @param oNewComponent
  *   Interface pointer to the new component instance placed.
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
  virtual HRESULT CreateComponentInst (CATISchGRRComp *iGRR,
    double * iDb6Axis, CATISchComponent **oNewComponent) = 0;    

  /**
  * Place a component connected to another component.
  * An internal structure is prerequisite to calling this method. This
  * structure is obtained from calling 
  * CATISchCompatible::GetBestFitPlaceInfo.
  * @param iPlaceInfo
  *   Pointer to an internal class which contains structured information
  *   of a component for placement. This is the <b>output</b> for 
  *   calling CATISchCompatible::GetBestFitPlaceInfo.
  *   @see CATISchCompatible#GetBestFitPlaceInfo
  * @param oNewComponent
  *   Interface pointer to the new component instance placed.
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
  virtual HRESULT PlaceOnComponentWithInfo (IUnknown *iPlaceInfo,
    CATISchComponent **oNewComponent) = 0;

/**
  * Insert a component into a route.
  * An internal structure is prerequisite to calling this method. This
  * structure is obtained from calling 
  * CATISchCompatible::GetBestFitInsertInfo.
  * @param iInsertInfo
  *   Pointer to an internal class which contains structured information
  *   of a component for placement. This is the <b>output</b> for 
  *   calling CATISchCompatible::GetBestFitInsertInfo.
  *   @see CATISchCompatible#GetBestFitInsertInfo
  * @param oNewComponent
  *   Interface pointer to the new component instance placed.
  * @param oNewRoute
  *   Interface pointer to the new route instance, created when the component
  *   is inserted into the route
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
  virtual HRESULT InsertIntoRouteWithInfo (IUnknown *iInsertInfo,
    CATISchComponent **oNewComponent, CATISchRoute **oNewRoute) = 0;

  /**
  * Place a component connected to another component or insert into a route. 
  * @param iGRR
  *   Pointer to the component graphical representation.
  *   if NULL the "Primary" graphical representation will be used.
  * @param iDb6Axis[6]
  *   X-axis of the local axis of the new instance
  *   Y-axis of the local axis of the new instance
  *   X-Y coordinates of the orgin of the new instance.
  *   This axis defines the orientation and location of the new instance
  *   in space.
  * @param iObjectToConnect
  *   Pointer to a component to connect the new instance to or a route object
  *   to insert new component into.
  * @param oNewComponent
  *   Interface pointer to the new component instance placed.
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
  virtual HRESULT PlaceOnObject (CATISchGRRComp *iGRR,
    const double iDb6Axis[6],CATISchAppConnectable *iObjectToConnect,
    CATISchComponent **oNewComponent) = 0;    

  /**
  * Slide a component (applicable to inserted component only). 
  * The component is moved along the route and remain inserted.
  * @param iGRR
  *   Pointer to the component graphical representation.
  *   if NULL the first insert image found will be used.
  * @param iDb2PtToSlideTo[2]
  *   X-Y coordinates of the point to slide the component to.
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
  virtual HRESULT Slide (CATISchGRRComp *iGRR, 
    const double iDb2PtToSlideTo[2]) = 0;

  /**
  * For component that is connected to another component or is inserted into
  * a route. This method changes the current connections on this component and 
  * connects the component to the next compatible connector (connectors-pair in
  * case of inserted component).
  * @param iGRR
  *   Pointer to the component graphical representation object.
  *   if NULL the first insert image found will be used.
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
  virtual HRESULT FlipConnected (CATISchGRRComp *iGRR) = 0;

  /**
  * Mirror the graphical object of this component.
  * Ths mirror line is the inserted route segment. The current connections on the 
  * component is <b>not</b> changed.
  * case of inserted component).
  * @param iGRR
  *   Pointer to the component graphical representation.
  *   if NULL the first insert image found will be used.
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
  virtual HRESULT FlipOnLine (CATISchGRRComp *iGRR) = 0;

  /**
  * Mirror transform a component's image about the horizontal-axis centered
  * at the local axis of the component. This component should not be connected
  * to any other object.
  * @param iGRR
  *   Pointer to the component graphical representation.
  *   if NULL the first insert image found will be used.
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
  virtual HRESULT FlipHorizontal (CATISchGRRComp *iGRR) = 0;

  /**
  * Mirror transform a component's image about the vertical-axis centered
  * at the local axis of the component. This component should not be connected
  * to any other object.
  * @param iGRR
  *   Pointer to the component graphical representation.
  *   if NULL the first insert image found will be used.
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
  virtual HRESULT FlipVertical (CATISchGRRComp *iGRR) = 0;

 /**
  * Remove all connections of a component with a route.
  * (applicable to inserted component only).
  * @param iGRR
  *   Pointer to the component graphical representation.
  *   if NULL the first insert image found will be used.
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
  virtual HRESULT Uninsert (CATISchGRRComp *iGRR) = 0;

  /**
  * Query whether the component can be slided.
  * @param iGRR
  *   Pointer to the component graphical representation.
  *   if NULL the first insert image found will be used.
  * @param oBYes
  *   If TRUE, the component can be slided.
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
  virtual HRESULT OKToSlide (CATISchGRRComp *iGRR, CATBoolean *oBYes) = 0;

  /**
  * Query whether the component can be placed in free space.
  * @param iGRR
  *   Pointer to the component graphical representation.
  *   if NULL the first insert image found will be used.
  * @param oBYes
  *   If TRUE, the component can be slided.
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
  virtual HRESULT OKToPlaceInSpace (CATISchGRRComp *iGRR, CATBoolean *oBYes) = 0;

  /**
  * Query whether it is OK to connect the component via next compatible connectors.
  * @param iGRR
  *   Pointer to the component graphical representation.
  *   if NULL the first insert image found will be used.
  * @param oBYes
  *   If TRUE, then it is OK to flip the component.
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
  virtual HRESULT OKToFlipConnected (CATISchGRRComp *iGRR, CATBoolean *oBYes) = 0;

  /**
  * Query whether it is OK to flip the component about the inserted route segment.
  * @param iGRR
  *   Pointer to the component graphical representation.
  *   if NULL the first insert image found will be used.
  * @param oBYes
  *   If TRUE, then it is OK to flip the component.
  * @param oDb2LinePt
  *   Absolute X-Y coordinates of a point on the segment. 
  * @param oDb2LineVec
  *   Absolute X-Y component vector along the segment. 
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
  virtual HRESULT OKToFlipOnLine (CATISchGRRComp *iGRR,
    CATBoolean *oBYes, double *oDb2LinePt, double *oDb2LineVec) = 0;

  /**
  * Query whether it is OK to flip the component about the horizontal axis.
  * @param iGRR
  *   Pointer to the component graphical representation.
  *   if NULL the first insert image found will be used.
  * @param oBYes
  *   If TRUE, then it is OK to flip the component.
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
  virtual HRESULT OKToFlipHorizontal (CATISchGRRComp *iGRR, CATBoolean *oBYes) = 0;

  /**
  * Query whether it is OK to flip the component about vertical axis.
  * @param iGRR
  *   Pointer to the component graphical representation.
  *   if NULL the first insert image found will be used.
  * @param oBYes
  *   If TRUE, then it is OK to flip the component.
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
  virtual HRESULT OKToFlipVertical (CATISchGRRComp *iGRR, CATBoolean *oBYes) = 0;

  /**
  * Query whether it is OK to uninsert the component.
  * @param iGRR
  *   Pointer to the component graphical representation.
  *   if NULL the first insert image found will be used.
  * @param oBYes
  *   If TRUE, then it is OK to uninsert the component.
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
  virtual HRESULT OKToUninsert (CATISchGRRComp *iGRR, CATBoolean *oBYes) = 0;

  /**
  * Query whether it is OK to scale the component.
  * @param iGRR
  *   Pointer to the component graphical representation.
  *   if NULL the first image found will be used.
  * @param oBYes
  *   If TRUE, then it is OK to scale the component.
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
  virtual HRESULT OKToScale (CATISchGRRComp *iGRR, CATBoolean *oBYes) = 0;

};
#endif
