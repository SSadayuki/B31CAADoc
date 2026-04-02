#ifndef CATIMmiUsePointOnEdge_H
#define CATIMmiUsePointOnEdge_H

// COPYRIGHT DASSAULT SYSTEMES 2009

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


#include "CATMecModUseItf.h"
#include "CATBaseUnknown.h"

class CATIMmiUseMfBRep_var;
class CATMathPoint;
class CATEdge_var;
class CATPointOnCurve_var;
class CATCurve_var;
class CATWire_var;
class CATIMmiUsePointOnEdge_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModUseItf IID IID_CATIMmiUsePointOnEdge;
#else
extern "C" const IID IID_CATIMmiUsePointOnEdge ;
#endif

//------------------------------------------------------------------

/**
 * Interface to manage a point on edge BRep feature.
 * A point on edge BRep feature is made of a Redge feature support and a ratio.
 * It is used to capture radius values for variable radius fillets.
 * @see CATIMmiBRepFactory
 */

class ExportedByCATMecModUseItf CATIMmiUsePointOnEdge: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
/**
 * Returns the Redge feature support.
 */
  virtual HRESULT GetPOESupport(CATIMmiUseMfBRep_var& oFeat) const = 0;

/**
 * Returns the global ratio.
 */  
  virtual HRESULT GetPOERatio(double& oRatio) const = 0;

/**
 * Sets the global ratio.
 * @param iRatio
 * Ratio.
 */
  virtual HRESULT SetPOERatio(const double iRatio) = 0;

/**
 * Computes the glogal ratio from a 3D point.
 * @param iPoint
 * Point.
 */
  virtual HRESULT GetPOERatioFromPoint(const CATMathPoint& iPoint, double& oRatio) const = 0;

/**
 * Returns 1 if the points on edge are same.
 * @param iToCompare
 * Point on edge BRep feature to be compared to <tt>this</tt>.
 */
  virtual HRESULT IsPOESame(const CATIMmiUsePointOnEdge_var &iToCompare, CATBoolean& oResult) const = 0;

/**
 * Reads the local ration and the associated edge.
 * @param oLocalEdge
 * CATEdge.
 * @param oLocalRatio
 * Local ratio.
 */
  virtual HRESULT GetPOELocalRatio(CATEdge_var &oLocalEdge,
                             double &oLocalRatio) const = 0;

/**
 * Computes the local ratio and the associated edge from a 3D point.
 * @param iPoint
 * Point.
 * @param oLocalEdge
 * Edge associated with the local ratio.
 * @param oLocalRatio
 * Local ratio.
 */
  virtual HRESULT GetPOELocalRatioFromPoint(const CATMathPoint& iPoint,
                                      CATEdge_var &oLocalEdge,
                                      double &oLocalRatio) const = 0;  

/**
 * Reads the wire and the orientation of the local edge according to the wire.
 * @param oWire
 * Topological wire.
 * @param oLocalEdge
 * Edge associated with the local ratio.
 * @param oOrientationEdgeWire
 * Equal to 1 if the intrinsic orientation of the edge fits with the wire orientation, 
 * otherwise equal to -1.
 */
  virtual HRESULT GetPOEWire(CATWire_var &oWire,
                       CATEdge_var &oLocalEdge,
                       int &oOrientationEdgeWire) = 0;

/**
 * Reads the point on curve, the curve, the edge and the orientation of the curve according to the edge.
 * @param oPointOnCurve
 * Point on curve.
 * @param oLocalCurve
 * Local curve.
 * @param oLocalEdge
 * Local edge.
 * @param oOrientationEdgeCurve
 * Equal to 1 if the intrinsic orientation of the edge fits with the curve orientation, 
 * otherwise equal to -1.
 */
  virtual HRESULT GetPOEPointOnCurve(CATPointOnCurve_var &oPointOnCurve, 
                               CATCurve_var &oLocalCurve, 
                               CATEdge_var &oLocalEdge, 
                               int &oOrientationEdgeCurve) = 0; 

/**
 * Reads the local edge and the generic naming orientation of the edge.
 * @param oLocalEdge
 * Local edge.
 * @param oGNEdgeOrientation
 * Equal to 1 if the intrinsic orientation of the edge fits with its generic naming orientation, 
 * otherwise equal to -1.
 */
  virtual HRESULT GetPOEGNOrientation(CATEdge_var &oLocalEdge,
                                int &oGNEdgeOrientation) = 0;

};
CATDeclareHandler(CATIMmiUsePointOnEdge,CATBaseUnknown);

//------------------------------------------------------------------

#endif
