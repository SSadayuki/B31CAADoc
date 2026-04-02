#ifndef CATIArrNode_H
#define CATIArrNode_H
// COPYRIGHT DASSAULT SYSTEMES 1999
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATArrangementItfCPP.h"
#include "CATRouNodeGeomStatus.h"
#include "CATBooleanDef.h"
#include "CATCkeListOfInterface.h"
#include "CATMathDef.h"

// Class declarations
class CATMathPoint;
class CATIArrSegmentsString_var;
class CATIArrSegment_var;
class CATIMovable_var;
class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATArrangementItfCPP IID IID_CATIArrNode;
#else
extern "C" const IID IID_CATIArrNode;
#endif

/**
 * Interface on Nodes of a Segment .
 * <b>Role</b>: To get the node, segment data.
 */

class ExportedByCATArrangementItfCPP CATIArrNode : public CATBaseUnknown
{

  CATDeclareInterface;

public:
	  
  /**
   * Get Segments in this string connected at this node.
   * @param oSegment1
   * @param oSegment2
   */
  virtual HRESULT GetSegments ( CATIArrSegment_var& oSegment1,
                                CATIArrSegment_var& oSegment2 ) = 0;
  
  
  /**
   * Retrieve geometry as CATMathPoint, described in a CATIMovable relative axis.
   * @param ihRelAxis
   *    The relative axis object (NULL_var means relative to parent).
   * @param oPoint
   *    The geometric argument as CATMathPoint.
   */
  virtual HRESULT GetPoint( const CATIMovable_var& ihRelAxis, CATMathPoint& oPoint ) = 0;
  
  
  /**
   * Query if this is a extremity node.
   * @return
   *   CATBoolean.
   */
  virtual HRESULT IsExtremity ( CATBoolean& oStatus ) = 0;

  
  /**
   * Query if a node is broken(not buildable).
   * @return
   *   CATBoolean.
   */
  virtual HRESULT IsBroken ( CATBoolean& oStatus ) = 0;

  /**
   * GetBendRadius. Will return the default value of 0.0 if param doesn't exist.
   * @return
   *   double
   */  
  virtual HRESULT GetBendRadius ( double& oBendRadius ) = 0;
  
  /**
   * GetBendRuleData. Will retrieve the turn data based on rule used.
   * @param oUseRule
   *    =0 override.  This is the mode for ALL spatial routing
   *    =1 rules were used
   * @param oBendNumberOfMiter
   *    number of miters for this turn
   * @param oBendDiamFactor
   *    a multiplier to apply to the bend diameter 
   * @param oBendPartType
   *    =NULL string: use turn radius 
   *    =non-NULL: use the part type defined in this string e.g. ELBOW. 
   */  
  virtual HRESULT GetBendRuleData ( int& oUseRule, int& oBendNumberOfMiter,
                     double& oBendDiamFactor, CATUnicodeString& oBendPartType ) = 0;


  
  /**
   * ListParams.
   * @param oListParams
   *   A list of CKE parameters.
   */  
  virtual HRESULT ListParams ( CATCkeListOf(Parm)& oListParams ) = 0;

 
  
  /**
   * GetCenterLinePoint.
   * @param ihRelAxis
   *    The relative axis object (NULL_var means relative to parent).
   * @param oPoint1
   *    IF CenterLines intersect
   *      CATMathPoint at intersection of previous and next centerlines.
   *    ELSE
   *      CATMathPoint of node projected onto previous CenterLine.
   * @param oPoint2
   *    IF CenterLines intersect
   *      CATMathPoint equal to oPoint1.
   *    ELSE
   *      CATMathPoint of node projected onto next CenterLine.
   * @param oStatus
   *    See CATRouNodeGeomStatus.h for SupportLine/CenterLine intersect values.
   */
  virtual HRESULT GetCenterLinePoint ( const CATIMovable_var &ihRelAxis,
                                       CATMathPoint          &oPoint1,
                                       CATMathPoint          &oPoint2,
                                       CATRouNodeGeomStatus  &oStatus ) = 0;

    
  /**   
   * CalculateAngle.
   * @param oAngleDegree
   *    CATAngle turn from previous Segment to next Segment.
   * @param oStatus
   *    See CATRouNodeGeomStatus.h for SupportLine/CenterLine intersect values.
   */
  virtual HRESULT CalculateAngle ( CATAngle &oAngleDegree, CATRouNodeGeomStatus &oStatus ) = 0;


  /**
   * Get SegmentString for this object.
   * @param oArrString
   *   CATIArrSegmentsString.
   */
  virtual HRESULT GetString ( CATIArrSegmentsString_var& oArrString ) = 0;
  
};

CATDeclareHandler( CATIArrNode, CATBaseUnknown );

#endif
