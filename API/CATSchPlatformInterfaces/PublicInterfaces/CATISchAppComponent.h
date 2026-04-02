#ifndef CATISchAppComponent_H
#define CATISchAppComponent_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"

class CATISchComponent;
class CATISchAppConnectable;
class CATISchRoute;
class CATISchGRR;
class CATDocument;
class CATICStringList;

extern "C" const IID IID_CATISchAppComponent ;

/**
 * Interface to manage an application component object. 
 * <b>Role</b>: Defines application component object behaviors
 */
class CATISchAppComponent : public IUnknown
{
  public:  
  
  /**
  * Create a component instance.
  * @param oNewAppCompInst
  *   Interface pointer (CATISchAppComponent) to the new <b>application</b>
  *   component instance placed.
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
  virtual HRESULT AppCreateComponentInst (IUnknown **oNewAppCompInst) = 0;

  /**
  * Create Local Reference object. Given a reference object (the "this"),
  * This method make a copy of the reference into another document.
  * @param iDocToCopyTo
  *   Pointer to a document to copy the reference to,
  * @param oNewAppCompRef
  *   Interface pointer (CATISchAppComponent) to the new <b>application</b>
  *   component Reference copied.
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
  virtual HRESULT AppCreateLocalReference (CATDocument *iDocToCopyTo,
    IUnknown **oNewAppCompRef) = 0;

  /**
  * @deprecated V5R15 
  * Use @href CATISchAppComponent#AppListGRRNames2 instead.
  * Find all the valid graphical representation names
  * of an application component.
  * @param oLGRRNames
  *   A list of all the valid graphical representation names
  *   with this connector for connections.
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
  virtual HRESULT AppListGRRNames (CATICStringList **oLGRRNames) = 0;

  /**
  * @deprecated V5R15 
  * Use @href CATISchAppComponent#AppGetDefaultGRRName2 instead.
  * Get the default graphical representation names
  * of an application component.
  * @param oGRRDefaultName
  *   The default name to be used for the graphical representation
  *   of a component
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
  virtual HRESULT AppGetDefaultGRRName (char **oGRRDefaultName) = 0;

  /**
  * Find all the valid graphical representation names
  * of an application component.
  * @param oLGRRNames
  *   A list of all the valid graphical representation names
  *   with this connector for connections.
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
  virtual HRESULT AppListGRRNames2 (CATListOfCATUnicodeString &oLGRRNames) = 0;

  /**
  * Get the default graphical representation names
  * of an application component.
  * @param oGRRDefaultName
  *   The default name to be used for the graphical representation
  *   of a component
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
  virtual HRESULT AppGetDefaultGRRName2 (CATUnicodeString &oGRRDefaultName) = 0;


  /**
  * Post process after placing an application component instance. 
  * @param iNewCompInst
  *   The newly placed component instance
  *   (CATISchComponent interface pointer).
  * @param iCntbleConnectedTo
  *   The connectable that the placed component is connected to or 
  *   placed onto
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
  virtual HRESULT AppPostPlaceProcess (CATISchComponent *iNewCompInst, 
    CATISchAppConnectable *iCntblConnectedTo) = 0;
 
  /**
  * Post process after sliding a component.
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
  virtual HRESULT AppPostSlideProcess () = 0;

  /**
  * Post process after reconnecting a component to
  * a different compatible configuration.
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
  virtual HRESULT AppPostFlipConnectedProcess () = 0;

  /**
  * Post process after flipping an inserted component
  * about the inserted line segment of the route.
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
  virtual HRESULT AppPostFlipOnLineProcess () = 0;

  /**
  * Post process after flipping a component in "x".
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
  virtual HRESULT AppPostFlipHorizontalProcess () = 0;

  /**
  * Post process after flipping a component in "y".
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
  virtual HRESULT AppPostFlipVerticalProcess () = 0;

  /**
  * Post process after uninserting a component, disconnecting
  * it from a route.
  * @param iOldAppRoute1
  *   One of the route that was connected 
  *   to one connector of the inserted
  *   component before the operation.
  * @param iOldAppRoute2
  *   The other route 
  *   that was connected to the other connector 
  *   of the inserted component before the operation.
  *   This would be NULL if the component was connected at extremity.
  * @param iNewAppRoute
  *   The new route 
  *   created after the operation. 
  *   This would be NULL if the component was connected at extremity.
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
  virtual HRESULT AppPostUninsertProcess (CATISchRoute *iOldAppRoute1,
    CATISchRoute *iOldAppRoute2, CATISchRoute *iNewAppRoute) = 0;    

  /**
  * Post process after switching a component's graphic representation.
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
  virtual HRESULT AppPostSwitchGraphicProcess (CATISchGRR *iGRR) = 0;

  /**
  * Query whether the application component can be placed in free space.
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
  virtual HRESULT AppOKToPlaceInSpace (CATBoolean *oBYes) = 0;

  /**
  * Query whether the application component can be slided.
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
  virtual HRESULT AppOKToSlide (CATBoolean *oBYes) = 0;

  /**
  * Query whether it is OK to reconnect a component to
  * a different compatible configuration.
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
  virtual HRESULT AppOKToFlipConnected (CATBoolean *oBYes) = 0;

  /**
  * Query whether it is OK to flip a component about
  * its inserted line.
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
  virtual HRESULT AppOKToFlipOnLine (CATBoolean *oBYes) = 0;

  /**
  * Query whether it is OK to flip the application component about X.
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
  virtual HRESULT AppOKToFlipVertical (CATBoolean *oBYes) = 0;

  /**
  * Query whether it is OK to flip the application component about Y.
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
  virtual HRESULT AppOKToFlipHorizontal (CATBoolean *oBYes) = 0;

  /**
  * Query whether it is OK to uninsert the application component.
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
  virtual HRESULT AppOKToUninsert (CATBoolean *oBYes) = 0;

  /**
  * Query whether it is OK to scale the application component.
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
  virtual HRESULT AppOKToScale (CATBoolean *oBYes) = 0;
};
#endif
