#ifndef CATISchGRRFactory_H
#define CATISchGRRFactory_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATIUnknownList;
class CATISchGRRRoute;
class CATISchGRRZone;
class CATISchGRRCntr;
class CATISchGRRRouteEllipse;

extern "C" const IID IID_CATISchGRRFactory ;

/**
 * Interface to create graphical representations for Schematic basic set 
 * of objects. 
 * <b>Role</b>: This is the factory for schematic object's graphical 
 * representations.
 */
class CATISchGRRFactory : public IUnknown
{
  public:   
  
  /**
  * Create the graphical representation of a Schematic Route.
  * @param iLDbPtPath
  *   A list of X-Y coordinates of points defining the Route. 
  *   2 doubles per point.
  * @param iSizeOfPath
  *   Total number of points in the list. 2 times the number of points.
  * @param oGRRRoute
  *   The graphical representation of the Route 
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
  virtual HRESULT CreateGRRRoute (
    double *iLDbLinePath, int iSizeOfPath, CATISchGRRRoute **oGRRRoute) = 0;

  /**
  * Create the graphical representation of a Schematic Connector.
  * @param oGRRCntr
  *   The graphical representation of the connector 

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
  virtual HRESULT CreateGRRCntr (
    CATISchGRRCntr **oGRRCntr) = 0;

  /**
  * Create the graphical representation of a Schematic Group.
  * @param iLPrimitives
  *   A list of 2D drafting detail pointers 
  *   Members are CATI2DDetail interface poiners.
  * @param oGRRGroup
  *   The graphical representation of the Group
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
  virtual HRESULT CreateGRRGroup (CATIUnknownList *iLPrimitive, 
    IUnknown **oGRRGroup) = 0;

/**
  * Create the graphical representation of a Schematic Zone.
  * @param iLPrimitives
  *   A list of 2D drafting object pointers defining the zone boundaries.
  * @param oGRRZone
  *   The graphical representation of the Zone
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
  virtual HRESULT CreateGRRZone (CATIUnknownList *iLPrimitive, 
    CATISchGRRZone **oGRRZone) = 0;

  /**
  * Create the graphical representation of a Schematic Route Ellipse.
  * @param iDbXYSeedPt
  *   X-Y coordinate of the seed point for the ellipse.  If NULL,
  *   the seed point will not be set.
  * @param oGRRRouteEllipse
  *   The graphical representation of the Route Ellipse
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
  virtual HRESULT CreateGRRRouteEllipse (double *iDbXYSeedPt, CATISchGRRRouteEllipse **oGRRRouteEllipse) = 0;

};
#endif
