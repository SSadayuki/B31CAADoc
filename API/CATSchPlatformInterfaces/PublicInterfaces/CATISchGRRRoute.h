#ifndef CATISchGRRRoute_H
#define CATISchGRRRoute_H

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

extern "C" const IID IID_CATISchGRRRoute ;

class CATISchGRRRoute;
class CATISchRouteSymbol;
class CATISchGRR;
class CATIUnknownList;

/**
 * Interface to manage a Schematic route graphic object. 
 * <b>Role</b>: Defines Schematic route graphic object content.
 */
class CATISchGRRRoute : public IUnknown
{

  public:   
  
  /**
  * Compress a the defining points of a route graphic, removing coincident points.
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
  * Compress the defining points of a route graphic, removing coincident points.
  * @param iUnsetGaps
  *   Whether to unset gaps (in all the effected routes: this route and
  *   other routes intersecting it) or not
  *        = SchUnsetGapsOn   : unset gaps
  *        = SchUnsetGapsOff  : don't unset gaps
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
  virtual HRESULT Compress2 (CATSchRouteUnsetGapsMode iUnsetGaps = SchUnsetGapsOn) = 0;

  /**
  * Add a list of point to a route. 
  * @param iLDbPtPathToAdd
  *   A list of X-Y coordinates of the points to be added. 
  *   2 doubles per point.
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
  virtual HRESULT AddPoints (double *iLDb2PtPathToAdd,
    const int iSizeOfPath, const int iAfterWhichPtNum) = 0;
    
  /**
  * Remove points from route graphic. 
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
  virtual HRESULT RemovePoints (const int iNumOfPtsToRemove,
    const int iAfterWhichPtNum) = 0;

  /**
  * Get the defining points of a route graphic.
  * @param oLDbPtPath
  *   A list of X-Y coordinates of the points. 2 doubles per point.
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
  virtual HRESULT GetPath (double **oLDb2PtPath, 
    int *oSizeOfPath) = 0;
  
  /**
  * Set the defining points of a route graphic.
  * @param iLDbPtPath
  *   A list of X-Y coordinates of the points to be set. 2 doubles per point.
  * @param iSizeOfPath
  *   Total number of points in the list. 2 times the number of points.
  * @param iCompress 
  *   Whether to compress the route (i.e., remove duplicate pts, colinear
  *   segments, etc.) or not
  *        = SchCompressOn   : compress
  *        = SchCompressOff  : don't compress
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
  virtual HRESULT SetPath (double *iLDb2PtPath, const int iSizeOfPath,                                                 
    CATSchRouteCompressMode iCompress = SchCompressOn) = 0;

  /**
  * Set the defining points of a route graphic.
  * @param iLDbPtPath
  *   A list of X-Y coordinates of the points to be set. 2 doubles per point.
  * @param iSizeOfPath
  *   Total number of points in the list. 2 times the number of points.
  * @param iCompress 
  *   Whether to compress the route (i.e., remove duplicate pts, colinear
  *   segments, etc.) or not
  *        = SchCompressOn   : compress
  *        = SchCompressOff  : don't compress
  * @param iUnsetGaps
  *   Whether to unset gaps (in all the effected routes: this route and
  *   other routes intersecting it) or not
  *        = SchUnsetGapsOn   : unset gaps
  *        = SchUnsetGapsOff  : don't unset gaps
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
  virtual HRESULT SetPath2 (double *iLDb2PtPath, const int iSizeOfPath,                                                 
    CATSchRouteCompressMode iCompress = SchCompressOn,
    CATSchRouteUnsetGapsMode iUnsetGaps = SchUnsetGapsOn) = 0;

  /**
  * Break a route graphic into 2 pieces. The old graphic is shortened and a new
  * graphic is created.
  * @param iDb2Pt1
  *   X-Y coordinates of point 1 to break the route at (this point is
  *   <b>mandatory</b>).
  * @param iDb2Pt2
  *   X-Y coordinates of point 2 to break the route at (this point is
  *   <b>optional</b>). If provided the points in between point 1 and this
  *   point will be eliminated. Point 1 is the last point of the shortened
  *   old route and point 2 is the first point of the new route. If this point
  *   is not provided (i.e. sends in a NULL). point 1 and point 2 are the same.
  * @param oNewGRRRoute
  *   The new line string graphic created (CATISchGRRRoute interface pointer)
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
  virtual HRESULT Break (const double iDb2Pt1[2], double *iDb2Pt2, 
    CATISchGRRRoute **oNewGRRRoute) = 0;

  /**
  * Concatenate 2 route graphic objects into one. 
  * The first route graphic is elongated and the second object is deleted.
  * @param iWhichEnd1
  *   =1 at start point; =2 at end point
  * @param iGRRRoute2
  *   Second route graphic object (CATISchGRRRoute interface pointer)
  *   to be concatenated to the first. This route graphic will be deleted.
  * @param iWhichEnd2
  *   =1 at start point; =2 at end point
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
  virtual HRESULT Concatenate (const int iWhichEnd1, 
    CATISchGRRRoute *iGRRRoute2, const int iWhichEnd2) = 0;

  /**
  * Concatenate 2 route graphic objects into one. 
  * The first route graphic is elongated and the second object is unchanged.
  * @param iWhichEnd1
  *   =1 at start point; =2 at end point
  * @param iGRRRoute2
  *   Second route graphic object (CATISchGRRRoute interface pointer)
  *   to be concatenated to the first. This route graphic will be unchanged.
  * @param iWhichEnd2
  *   =1 at start point; =2 at end point
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
  virtual HRESULT ConcatenateKeepGRR2 (const int iWhichEnd1, 
    CATISchGRRRoute *iGRRRoute2, const int iWhichEnd2) = 0;

  /**
  * Get the start point of the route graphic. 
  * @param oDb2StartPt
  *   X-Y coordinates of the start point of the route graphic object.
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
  virtual HRESULT GetStartPoint (double *oDb2StartPt) = 0;

  /**
  * Set the start point of the route graphic.
  * @param iDb2StartPt
  *   X-Y coordinates of the start point of the route graphic object to be set.
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
  virtual HRESULT SetStartPoint (const double iDb2StartPt[2]) = 0;

  /**
  * Get the end point of the route graphic. 
  * @param oDb2EndPt
  *   X-Y coordinates of the end point of the route graphic object.
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
  virtual HRESULT GetEndPoint (double *oDb2EndPt) = 0;

  /**
  * Set the end point of the route graphic. 
  * @param iDb2EndPt
  *   X-Y coordinates of the end point of the route graphic object to be set.
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
  virtual HRESULT SetEndPoint (const double iDb2EndPt[2]) = 0;

  /**
  * Place a symbol on the route.
  * @param iSegNum
  *   The route segment number to place the symbol on.
  * @param iSegParm
  *   The parameter along the segment used to place the symbol on (0.<=iSegParm<=1.).
  * @param iGRRSymbol
  *   The graphical primitive (detail) to be used for the symbol.
  * @param oRouteSymbol
  *   The created route symbol (ditto).
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
  virtual HRESULT CreateRouteSymbol (
     const int &iSegNum, const double &iSegParm, const CATISchGRR *iGRRSymbol,
     CATISchRouteSymbol **oRouteSymbol) = 0;

  /**
  * List route symbols on the route.
  * @param oLRouteSymbol
  *   A list of route symbols.
  *   (members are CATISchRouteSymbol interface pointers).
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
  virtual HRESULT ListRouteSymbols (CATIUnknownList **oLRouteSymbol) = 0;

  /**
  * Set the defining points of a route graphic.
  * @param iLDbPtPath
  *   A list of X-Y coordinates of the points to be set. 2 doubles per point.
  * @param iSizeOfPath
  *   Total number of points in the list. 2 times the number of points.
  * @param iCompress 
  *   Whether to compress the route (i.e., remove duplicate pts, colinear
  *   segments, etc.) or not
  *        = SchCompressOn   : compress
  *        = SchCompressOff  : don't compress
  * @param iUnsetGaps
  *   Whether to unset gaps (in all the effected routes: this route and
  *   other routes intersecting it) or not
  *        = SchUnsetGapsOn   : unset gaps
  *        = SchUnsetGapsOff  : don't unset gaps
  * @param iRouteSymbolUpdate
  *   Whether to update route symbols' positions
  *        = SchSymbolUpdateOff  : don't update route symbols
  *        = SchSymbolUpdateOn   : update route symbols
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
  virtual HRESULT SetPath3 (double *iLDb2PtPath, const int iSizeOfPath,                                                 
    CATSchRouteCompressMode iCompress = SchCompressOn,
    CATSchRouteUnsetGapsMode iUnsetGaps = SchUnsetGapsOn,
    CATSchRouteSymbolUpdateMode iRouteUpdateSymbols = SchSymbolUpdateOn) = 0;

};
#endif
