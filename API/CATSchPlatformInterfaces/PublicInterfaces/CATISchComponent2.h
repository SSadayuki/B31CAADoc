#ifndef CATISchComponent2_H
#define CATISchComponent2_H

//	COPYRIGHT DASSAULT SYSTEMES 2001

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

extern "C" const IID IID_CATISchComponent2 ;
/**
 * Interface to manage a Schematic component object. 
 * <b>Role</b>: Defines Schematic component object behaviors
 */

class CATISchComponent2 : public IUnknown
{
  public:

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
  * @param iDoc
  *   Pointer to a document to create the object in. If NULL, the
  *   document associated with the current Editor will be used.
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
    const double iDb6Axis[6], CATDocument *iDoc,
    CATISchComponent **oNewComponent) = 0;     


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
  * @param iDoc
  *   Pointer to a document to create the object in. If NULL, the
  *   document associated with the current Editor will be used.
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
    CATDocument *iDoc, CATISchComponent **oNewComponent) = 0;    


};
#endif
