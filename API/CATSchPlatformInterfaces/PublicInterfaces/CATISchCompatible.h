#ifndef CATISchCompatible_H
#define CATISchCompatible_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATIUnknownList;
class CATISchAppConnector;
class CATISchGRR;
class CATISchGRRComp;

extern "C" const IID IID_CATISchCompatible ;

/**
 * Interface to query for compatible object to connect to. 
 * <b>Role</b>: Defines connection rules for Schematic basic set of objects.
 */
class CATISchCompatible : public IUnknown
{
  public: 
  
  /**
  * Query whether an object is compatible to be connected to a route.
  * This method is used when routing a route.
  * @param iRouteCntrClassType
  *   Class type of a schematic route connector.
  * @param iGRRTarget
  *   Pointer to the graphical image of a target component or 
  *   to the primitive of a target route   
  * @param oLOKCntrs
  *   A list of compatible and available connectors on the component or route 
  *   (members are CATISchAppConnector interface pointers)
  *   This is used as an <b>input</b> to GetBestCntrForRoute
  *   @see #GetBestCntrForRoute
  * @param oBYes
  *   If TRUE, the component is OK to be connected to a route.
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
  virtual HRESULT IsTargetOKForRoute (const char *iRouteCntrClassType,
    CATISchGRR *iGRRTarget, CATIUnknownList **oLOKCntrs, CATBoolean *oBYes) = 0;

  /**
  * Query whether an object is compatible to be connected to another component.
  * This method is used when placing a component.
  * @param iGRRTarget
  *   Pointer to the graphical image of the component in question (the
  *   target component to be connected to)
  * @param iCompInfo
  *   Pointer to an internal class which contains structured information
  *   of "this" component for placement. This is an <b>output</b> of  
  *   CATISchComponent::QueryPlaceAbility
  *   @see CATISchComponent#QueryPlaceAbility
  * @param oPlaceCompatInfo
  *   Pointer to an internal class which contains structured information
  *   for "this" component <b>and</b> target component (the one in question) 
  *   This is used as an <b>input</b> to GetBestFitPlaceInfo
  *   @see #GetBestFitPlaceInfo
  * @param oBYes
  *   If TRUE, the component is OK to be connected to a route.
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
  virtual HRESULT IsTargetOKForPlace (CATISchGRRComp *iGRRTarget,
    const IUnknown *iCompInfo, IUnknown **oPlaceCompatInfo,
    CATBoolean *oBYes) = 0; 

  /**
  * Query whether an object is compatible to be inserted into a route.
  * This method is used when placing a component.
  * @param iCompInfo
  *   Pointer to an internal class which contains structured information
  *   of "this" component for placement. This is an <b>output</b> of  
  *   CATISchComponent::QueryPlaceAbility
  *   @see CATISchComponent#QueryPlaceAbility
  * @param oInsertCompatInfo
  *   Pointer to an internal class which contains structured information
  *   for "this" component <b>and</b> target route (the one in question)
  *   This is used as an <b>input</b> to GetBestFitInsertInfo
  *   @see #GetBestFitInsertInfo
  * @param oBYes
  *   If TRUE, the component is OK to be connected to a route.
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
  virtual HRESULT IsTargetOKForInsert (const IUnknown *iCompInfo, 
    IUnknown **oInsertCompatInfo, CATBoolean *oBYes) = 0; 

  /**
  * Find the best-fit connector(s) to be used for placing a component
  * and connecting it to another.
  * @param iDb2PlacementPt
  *   X-Y coordinates of the target component
  *   graphical selection point.
  * @param iPlaceCompatInfo
  *   Pointer to an internal class which contains structured information
  *   This is an <b>output</b> of IsTargetOKForPlace 
  *   @see #IsTargetOKForPlace.
  * @param ioPlaceInfo
  *   Pointer to an internal class which contains structured information
  *   for how to place a component.   
  *   Caller must initialize this pointer to NULL when calling this
  *   code the <b>first</b> time. 
  *   This is used as an <b>input</b>
  *   to CATISchComponent::PlaceOnComponentWithInfo   
  *   @see CATISchComponent#PlaceOnComponentWithInfo.
  * @param iBYesCycleAllSolns
  *   default is FALSE, and ioPlaceInfo is an output for the best fit 
  *   solution. This solution will connect the compatible Target
  *   connector closest to the iDb2PlacementPt (call this CntrTgt)
  *   and the source connector that is closest to the origin
  *   (in position relative to ditto axis).
  *   If iBYesCycleAllSolns =TRUE, then the implementation 
  *   will calculate all possible solutions
  *   and allow the caller to recall this code with the
  *   same ioPlaceInfo, 
  *   <b> if and only if the compatible Target connector
  *   closest to the iDb2PlacementPt is the same as the previous 
  *   one </b>. 
  *   By doing this, this code will set the 
  *   internal data ioPlaceInfo accordingly, so that when used in
  *   PlaceOnComponentWithInfo, the next solution will be used.
  *   For example, say there are 3 possible solutions and we call them
  *   solution1, solution2 and solution3. Call this code the first
  *   time and PlaceOnComponentWithInfo will use solution1. Call this
  *   code the second time (provided that CntrTgt remains the same)
  *   and solution2 will be used. The third time, solution3. The 
  *   fourth time, solution1 and so one. 
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
  virtual HRESULT GetBestFitPlaceInfo (const double iDb2PlacementPt[2],
    IUnknown *iPlaceCompatInfo,
    IUnknown **ioPlaceInfo, CATBoolean iBYesCycleAllSolns = FALSE) = 0; 

  /**
  * Find the best-fit connector(s) to be used for inserting a component
  * into a route.
  * @param iDb2PlacementPt
  *   X-Y coordinates of the target component
  *   graphical selection point.
  * @param iInsertCompatInfo
  *   Pointer to an internal class which contains structured information
  *   This is an <b>output</b> of IsTargetOKForInsert
  *   @see #IsTargetOKForInsert.
  * @param ioInsertInfo
  *   Pointer to an internal class which contains structured information
  *   for how to inesrt a component into a route. 
  *   Caller must initialize this pointer to NULL when calling this
  *   code the <b>first</b> time. 
  *   This is used as an <b>input</b>
  *   to CATISchComponent::InsertIntoRouteWithInfo   
  *   @see CATISchComponent#InsertIntoRouteWithInfo.
  * @param iBYesCycleAllSolns
  *   default is FALSE, and ioInsertInfo is an output for the best fit 
  *   solution. When there are more than one internal flows that can
  *   be used for insertion, this routine will choose the best solution in
  *   the following order:
  *   <dl>
  *     <dd> linear internal flow parallel to x-axis </dd>
  *     <dd> linear internal flow parallel to y-axis </dd>
  *     <dd> corner internal flow </dd>
  *     <dd> others </dd>
  *   </dl>
  *   If iBYesCycleAllSolns =TRUE, then the implementation 
  *   will calculate all possible solutions
  *   and allow the caller to recall this code with the
  *   same ioInsertInfo.
  *   <b> if and only if current input iDB2PlacementPt is the
  *   the same as the previous one </b>. Otherwise, the insertion position
  *   of the component on the route is different and the previously
  *   calculated solutions are all invalid for the current call.
  *      
  *   If the iDB2PlacementPt is the same as the previous one
  *   and iBYesCycleAllSolns is TRUE, this code will set the 
  *   internal data ioInsertInfo accordingly, so that when used in
  *   InsertIntoRouteWithInfo, the next solution will be used.
  *   For example, say there are 3 possible solutions and we call them
  *   solution1, solution2 and solution3. Call this code the first
  *   time and InsertIntoComponentWithInfo will use solution1. Call this
  *   code the second time (provided that CntrTgt remains the same)
  *   and solution2 will be used. The third time, solution3. The 
  *   fourth time, solution1 and so one. 
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
  virtual HRESULT GetBestFitInsertInfo (const double iDb2PlacementPt[2],
    IUnknown *iInsertCompatInfo,
    IUnknown **ioInsertInfo, CATBoolean iBYesCycleAllSolns = FALSE) = 0;     

  /**
  * Find the best-fit connector to be used to connect a route to.
  * @param iDb2PlacementPt
  *   X-Y coordinates of the target (component or route) graphic selection point.
  * @param iGRR
  *   Pointer to the graphical image of a component or 
  *   to the primitive of a route   
  * @param iLOKCntrs
  *   A list of compatible and available connectors on the component. 
  *   Members are CATISchAppConnector interface pointers. 
  *   This is an <b>Output</b> of IsTargetOKForRoute
  *   @see #IsTargetOKForRoute
  * @param oDb2CntrPt
  *   X-Y coordinates of the best-fit connector point.
  * @param oBestCntr
  *   Best-fit connector
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
  virtual HRESULT GetBestCntrForRoute (const double iDb2PlacementPt[2],
    CATISchGRR *iGRR, CATIUnknownList *iLOKCntrs, double *oDb2CntrPt,
     CATISchAppConnector **oBestCntr) = 0; 

};
#endif
