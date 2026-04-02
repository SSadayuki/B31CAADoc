#ifndef CATISchRoute_H
#define CATISchRoute_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

// CATSchPlatformInterfaces
#include "CATSchGeneralEnum.h"

class CATISchAppConnector;
class CATISchAppConnection;
class CATISchRoute;
class CATISchGRRRoute;

extern "C" const IID IID_CATISchRoute ;

/**
 * Interface to manage a Schematic route object. 
 * <b>Role</b>: Defines Schematic route object behaviors
 */
class CATISchRoute : public IUnknown
{
  public:   
  
  /**
  * Compress a the defining points of a route, removing coincident points.
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
  virtual HRESULT Compress () = 0;

  /**
  * Add a list of point to a route. 
  * Modify the route according to the route mode
  * @param iGRR
  *   graphical primitive of the route to add points to
  *   (if NULL, assume there is only one graphical primitive)
  * @param iLDbPtPathToAdd
  *   A list of X-Y coordinates of points to be added. 2 doubles per point.
  * @param iSizeOfPath
  *   Total number of points in the list. 2 times the number of points.
  * @param iAfterWhichPtNum
  *   The point number to add the points after. Use 0 to indicate adding
  *   before the first point.
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
  virtual HRESULT AddPoints (
    CATISchGRRRoute *iGRR, double *iLDb2PtPathToAdd,
    const int iSizeOfPath, const int iAfterWhichPtNum) = 0;
    
  /**
  * Remove points from route. 
  * Modify the route according to the route mode.
  * @param iGRR
  *   graphical primitive of the route to remove the points from
  *   (if NULL, assume there is only one graphical primitive)
  * @param iNumOfPtsToRemove
  *   The number of points to be removed
  * @param iAfterWhichPtNum
  *   The point number at which to start removing the point.  
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
  virtual HRESULT RemovePoints (
    CATISchGRRRoute *iGRR, const int iNumOfPtsToRemove,
    const int iAfterWhichPtNum) = 0;

  /**
  * Change the position of the extremity of the route. 
  * 
  * @param iGRR
  *   graphical primitive of the route to reshape
  *   (if NULL, assume there is only one graphical primitive)
  * @param iRouteCntr
  *   Route connector whose position is to be modified (CATISchAppConnector
  *   interface pointer).
  * @param iDb2DeltaXY
  *   Delta X-Y coordinates of the extremity move
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
  virtual HRESULT ReshapeExtremity(CATISchGRRRoute *iGRR, 
                                   CATISchAppConnector *iRouteCntr,                            
                                   const double iDb2DeltaXY[2]) = 0;

  /**
  * Change the position of the extremity of the route. 
  * Modify the route according to the route mode.
  * @param iERouteMode
  *   Routing mode.
  *   @see CATSchRouteMode
  * @param iGRR
  *   graphical primitive of the route to reshape
  *   (if NULL, assume there is only one graphical primitive)
  * @param iRouteCntr
  *   Route connector whose position is to be modified (CATISchConnector
  *   interface pointer).
  * @param iDb2PtToMoveCntrTo
  *   X-Y coordinates of the point to move the connector to.
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
  virtual HRESULT ReshapeExtremity (const CATSchRouteMode iERouteMode,
    CATISchGRRRoute *iGRR, CATISchAppConnector *iRouteCntr,
    const double iDb2PtToMoveCntrTo[2]) = 0;

  /**
  * Get the defining points of a route.
  * @param iGRR
  *   graphical primitive of the route get the path from
  *   (if NULL, assume there is only one graphical primitive)
  * @param oLDbPtPath
  *   A list of X-Y coordinates of points. 2 doubles per point.
  * @param oSizeOfPath
  *   Total number of points in the list. 2 times the number of points.
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
  virtual HRESULT GetPath (CATISchGRRRoute *iGRR, 
    double **oLDb2PtPath, int *oSizeOfPath) = 0;
  
  /**
  * Set the defining points of a route.
  * @param iGRR
  *   graphical primitive of the route to set the path on
  *   (if NULL, assume there is only one graphical primitive)
  * @param iLDbPtPath
  *   A list of X-Y coordinates of points to be set. 2 doubles per point.
  * @param iSizeOfPath
  *   Total number of points in the list. 2 times the number of points.
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
  virtual HRESULT SetPath (CATISchGRRRoute *iGRR, 
    double *iLDb2PtPath, const int iSizeOfPath) = 0;

  /**
  * Break a route into 2 pieces. The old route is shortened and a new
  * route is created.
  * @param iGRR
  *   graphical primitive of the route to be broken
  *   (if NULL, assume there is only one graphical primitive)
  * @param iDb2Pt1
  *   X-Y coordinates of point 1 to break the route at (this point is
  *   <b>mandatory</b>).
  * @param iDb2Pt2
  *   X-Y coordinates of point 2 to break the route at (this point is
  *   <b>optional</b>). If provided the points in between point 1 and this
  *   point will be eliminated. Point 1 is the last point of the shortened
  *   old route and point 2 is the first point of the new route. If this point
  *   is not provided (sends in a NULL). point 1 and point 2 are the same.
  * @param oNewSchRoute
  *   The new Schematic route object
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
  virtual HRESULT Break (CATISchGRRRoute *iGRR, 
    const double iDb2Pt1[2], double *iDb2Pt2, CATISchRoute **oNewSchRoute) = 0;    

  /**
  * Concatenate 2 routes into one. Only works for those that have only one
  * line graphic object. The first route is elongated and is modified.
  * The second route is deleted.
  * @param iSchRoute1Cntr
  *   Connector of this route
  *   to concatenate with the second route.
  * @param iSchRoute2
  *   Second route to be concatenate to the first. iSchRoute2 will be deleted.
  * @param iSchRoute2Cntr
  *   Connector of second route to concatenate with the first route.
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
  virtual HRESULT Concatenate (CATISchAppConnector *iSchRoute1Cntr,
    CATISchRoute *iSchRoute2, CATISchAppConnector *iSchRoute2Cntr) = 0;

  /**
  * Concatenate 2 routes into one. Only works for those that have only one
  * line graphic object. The first route is elongated and is modified.
  * The second route is unchanged.
  * @param iSchRoute1Cntr
  *   Connector of this route
  *   to concatenate with the second route.
  * @param iSchRoute2
  *   Second route to be concatenate to the first. iSchRoute2 will be unchanged.
  * @param iSchRoute2Cntr
  *   Connector of second route to concatenate with the first route.
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
  virtual HRESULT ConcatenateKeepRoute2 (CATISchAppConnector *iSchRoute1Cntr,
    CATISchRoute *iSchRoute2, CATISchAppConnector *iSchRoute2Cntr) = 0;

  /**
  * Create a branch from this route.
  * @param iGRRMain
  *   graphical primitive of the "this" route to branch from
  *   (if NULL, assume there is only one graphical primitive)
  * @param iSchBranchRoute
  *   The route to create a branch connection to (from this route)
  * @param iSchBranchRouteCntr
  *   The extremity connector of the branch
  * @param oBranchCntn
  *   The branch connection created
  * @param oNewBranchCntr
  *   The new branch connector created on "this" route
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
  virtual HRESULT Branch (CATISchGRRRoute *iGRRMain,
    CATISchRoute *iSchBranchRoute, CATISchAppConnector *iSchBranchRouteCntr,
    CATISchAppConnection **oBranchCntn, CATISchAppConnector **oNewBranchCntr) = 0;

  /**
  * Query whether it is OK to modify (add or remove) the points.
  * @param iGRR
  *   graphical primitive of the route to query.
  *   (if NULL, assume there is only one graphical primitive)
  * @param oBYes
  *   If TRUE, then it is OK to add or remove the points from the route
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
  virtual HRESULT OKToModifyPoints (CATISchGRRRoute *iGRR, CATBoolean *oBYes) = 0;

  /**
  * Query whether it is OK to break.
  * @param iGRR
  *   graphical primitive of the route to query.
  *   (if NULL, assume there is only one graphical primitive)
  * @param oBYes
  *   If TRUE, then it is OK to break the route
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
  virtual HRESULT OKToBreak (CATISchGRRRoute *iGRR, CATBoolean *oBYes) = 0;

  /**
  * Query whether it is OK to concatenate.
  * @param iGRR
  *   graphical primitive of the route to query.
  *   (if NULL, assume there is only one graphical primitive)
  * @param oBYes
  *   If TRUE, then it is OK to concatenate the route with another
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
  virtual HRESULT OKToConcatenate (CATISchGRRRoute *iGRR, CATBoolean *oBYes) = 0;

  /**
  * Query whether it is OK to create a branch.
  * @param iGRR
  *   graphical primitive of the route to query.
  *   (if NULL, assume there is only one graphical primitive)
  * @param iBranchClassType
  *   Class type of the branch to create.
  * @param oBYes
  *   If TRUE, then it is OK to create a branch from a route
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
  virtual HRESULT OKToBranch (CATISchGRRRoute *iGRR, const char* iBranchClassType,
    CATBoolean *oBYes) = 0;

  /**
  * Get extremity connectors of the route.
  * @param iGRR
  *   graphical primitive of the route to query.
  *   (if NULL, assume there is only one graphical primitive)
  * @param oRouteCntr1
  *   Route connector at first extremity
  * @param oRouteCntr2
  *   Route connector at second extremity
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
  virtual HRESULT GetExtremityCntrs (CATISchGRRRoute *iGRR,
    CATISchAppConnector **oRouteCntr1, CATISchAppConnector **oRouteCntr2) = 0;
};
#endif
