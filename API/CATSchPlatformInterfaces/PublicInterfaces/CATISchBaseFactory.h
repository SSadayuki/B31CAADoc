#ifndef CATISchBaseFactory_H
#define CATISchBaseFactory_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"
#include "CATSchGeneralEnum.h"

class CATISchComponent;
class CATISchRoute;
class CATISchZone;
class CATIUnknownList;
class CATISchGRRComp;
class CATISchAppConnector;
class CATISchCompGroupExt;
class CATISchNetworkAnalysis;

extern "C" const IID IID_CATISchBaseFactory ;

/**
 * Interface to create Schematic basic set of objects.
 * <b>Role</b>: This is the factory for schematic base set of objects.
 */
class CATISchBaseFactory : public IUnknown
{
  public:  
  
  /**
  * Create a Schematic Component reference.
  * @param iAppComponentRef
  *   Application component reference (at least a feature)
  *   @see CATISchAppObjectFactory#AppCreateCompRef
  * @param iLGRR
  *   A list of graphical representations.
  * @param oSchComp
  *   Pointer to the new component.
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
  virtual HRESULT CreateSchComponent (IUnknown *iAppComponentRef,
    CATIUnknownList *iLGRR, CATISchComponent **oSchComp) = 0;

  /**
  * Create a Schematic Route object with primitives.
  * @param iAppRoute
  *   Application route (at least a feature)
  *   @see CATISchAppObjectFactory#AppCreateRoute
  * @param iLGRR
  *   A list of graphical primitives.
  *   pointer).
  * @param oSchRoute
  *   Pointer to the new route
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
  virtual HRESULT CreateSchRouteByPrim (IUnknown *iAppRoute,
    CATIUnknownList *iLGRR, CATISchRoute **oSchRoute) = 0;

  /**
  * Create a Schematic Route object with a list of points.
  * @param iAppRoute
  *   Application route (at least a feature)
  *   @see CATISchAppObjectFactory#AppCreateRoute
  * @param iLDbPt
  *   A list of X-Y coordinates of points. 2 doubles per point.
  * @param iSizeOfPath
  *   Total number of points in the list. 2 times the number of points.
  * @param oSchRoute
  *   Pointer to the new route
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
  virtual HRESULT CreateSchRouteByPoints (IUnknown *iAppRoute,
    double *iLDbPt, const int iSizeOfPath, CATISchRoute **oSchRoute) = 0;

  /**
  * Create a route and connect its extremity connectors to input objects.
  * @param iAppRoute
  *   Application route (at least a feature)
  *   @see CATISchAppObjectFactory#AppCreateRoute
  * @param iCntrCompFrom
  *   Pointer to component connector to connect starting end of the route to
  *   If NULL, no connection is made at this end.
  * @param iCntrCompTo
  *   Pointer to component connector to connect end of the route to
  *   If NULL, no connection is made at this end.
  * @param iGRRCompFrom
  *   Pointer to first component graphical image, if NULL, the PRIMARY image 
  *   associated with component will be used
  * @param iGRRCompTo
  *   Pointer to second component graphical image, if NULL, the PRIMARY image 
  *   associated with component will be used
  * @param iLDb2PtPath
  *   A list of X-Y coordinates of points to be used for the route image. 
  *   2 doubles per point. Not used if iERouteMode=SchRouteMode_AroundObject
  *   input a NULL for this case
  * @param iSizeOfPath
  *   Total number of points in the list. 2 times the number of points.
  * @param iERouteMode
  *   Route mode to use. Only used when iLDb2PtPath is NULL.
  * @param oSchRoute
  *   Pointer to the new route 
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
  virtual HRESULT CreateRouteAndConnectToObjects (
    IUnknown *iAppRoute, CATISchAppConnector *iCntrCompFrom,
    CATISchAppConnector *iCntrCompTo, CATISchGRRComp *iGRRCompFrom, 
    CATISchGRRComp *iGRRCompTo, double *iLDb2PtPath, const int iSizeOfPath,
    CATSchRouteMode iERouteMode, CATISchRoute **oSchRoute) = 0;

  /**
  * Create a Schematic Component Group object.
  * @param iAppGroup
  *   Application group object (at least a feature)
  *   Optional, it could be NULL. If NULL, one will be created by the platform
  * @param iLGRR
  *   A list of graphical representation. Optional, it could be NULL.
  * @param iLMembers
  *   A list of initial members. Optional, it could be NULL.
  * @param oSchGroup
  *   Pointer to the new group.
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
  virtual HRESULT CreateSchCompGroup (IUnknown *iAppGroup,
    CATIUnknownList *iLGRR, CATIUnknownList *iLMember,
    CATISchCompGroupExt **oSchGroup) = 0;

  /**
  * Create a Schematic Zone object.
  * @param iAppZone
  *   Application zone object (at least a feature)
  *   @see CATISchAppObjectFactory#AppCreateZone
  * @param iLGRR
  *   A list of graphical representation.
  * @param oSchZone
  *   Pointer to the new zone.
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
  virtual HRESULT CreateSchZone (IUnknown *iAppZone,
    CATIUnknownList *iLGRR, CATISchZone **oSchZone) = 0;


  /**
  * Create schematic networks for query. These are volatile objects and will not
  * be saved in the model.
  * @param iLCntbl
  *   A list of related objects that belong to the network (CATISchAppConnectable pointers). 
  *   These objects do not need to be connected.
  *   This method will do the analysis and returns the network(s) containing these objects.
  * @param iLCntbl
  *   A list of graphical images interface (CATISchGRR) pointers. Each member corresponds
  *   to the members in iLCntbl.
  * @param oNetwork [out, IUnknown#Release]
  *   Pointer to the network analysis interface pointers.
  */
  virtual HRESULT CreateNetwork (const CATIUnknownList *iLCntbls,
    const CATIUnknownList *iLGRRs, CATIUnknownList **oLNetAnalysis) = 0;

 /**
  * Delete a schematic object.  
  * @param iObject
  *   interface pointer to the object to be deleted 
  */
  virtual HRESULT DeleteObject (const IUnknown *iObject) = 0;

};
#endif
