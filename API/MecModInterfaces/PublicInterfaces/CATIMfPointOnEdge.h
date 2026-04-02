#ifndef CATIMfPointOnEdge_h
#define CATIMfPointOnEdge_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATMathPoint.h"
#include "CATMfBRepDefs.h" 
#include "CATMfBRepInternalDefs.h"


class CATEdge_var;
class CATIMfPointOnEdge_var;
class CATISpecObject_var;
class CATNamingReference;
class CATPointOnCurve_var;
class CATWire_var;
class CATCurve_var;
class CATIFVertexAccess_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMfPointOnEdge;
#else
extern "C" const IID IID_CATIMfPointOnEdge;
#endif

/**
 * Interface to manage a point on edge BRep feature.
 * A point on edge BRep feature is made of a <tt>CATIMfRedge</tt> support and a ratio.
 * It is used to capture radius values for variable radius fillets.
 * @see CATIMfBRepFactory
 */
class ExportedByMecModItfCPP CATIMfPointOnEdge : public CATBaseUnknown
{
  CATDeclareInterface;

  public:
/**
 * Returns the <tt>CATIMfRedge</tt> support.
 */
  virtual CATISpecObject_var GetSupport() const = 0;

/**
 * Returns the global ratio.
 */  
  virtual double GetRatio() const = 0;

/**
 * Sets the global ratio.
 * @param iRatio
 * Ratio.
 */
  virtual void SetRatio(const double iRatio) = 0;

/**
 * Computes the glogal ratio from a 3D point.
 * @param iPoint
 * Point.
 */
  virtual double GetRatioFromPoint(const CATMathPoint iPoint) const = 0;

/**
 * Reads the sick point in case of update error.
 * @param oPoint
 * Point.
 */
  virtual int GetSickMathPoint(CATMathPoint & oPoint) const = 0;

/**
 * Returns 1 if the points on edge are same.
 * @param iToCompare
 * Point on edge BRep feature to be compared to <tt>this</tt>.
 */
  virtual int IsSame(const CATIMfPointOnEdge_var &iToCompare) const = 0;

/**
 * Reads the local ration and the associated edge.
 * @param oLocalEdge
 * CATEdge.
 * @param oLocalRatio
 * Local ratio.
 */
  virtual void GetLocalRatio(CATEdge_var &oLocalEdge,
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
  virtual void GetLocalRatioFromPoint(const CATMathPoint& iPoint,
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
  virtual void GetWire(CATWire_var &oWire,
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
  virtual void GetPointOnCurve(CATPointOnCurve_var &oPointOnCurve, 
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
  virtual void GetGNOrientation(CATEdge_var &oLocalEdge,
                                int &oGNEdgeOrientation) = 0;

/**
 * @nodoc
 * Internal use.
 */
  virtual void Init(const CATISpecObject_var &FeatSupport,
                    const double Ratio) = 0 ;

/**
 * @nodoc
 * Internal use.
 */
  virtual CATMfBRepVersion GetBRepVersion() = 0;

/**
 * @nodoc
 * Returns the journaling information.
 */
  virtual CATNamingReference* GetNamingReference() const = 0;

/**
 * @nodoc
 * Deleted on upper levels
 */  
  virtual double GetRatioFromVertex(const CATIFVertexAccess_var& vertex) = 0;
  
};

CATDeclareHandler( CATIMfPointOnEdge, CATBaseUnknown ) ;

#endif








