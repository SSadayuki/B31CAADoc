#ifndef CATIArrSegment_H
#define CATIArrSegment_H
// COPYRIGHT DASSAULT SYSTEMES 1999
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */


#include "CATArrangementItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATRouSetPointNames.h"
#include "CATCkeListOfInterface.h"

class CATIArrNode_var;
class CATIArrSegmentsString_var;
class CATIMovable_var;

class CATMathPoint;
class CATMathPointf;
class CATMathDirection;
class CATMathDirectionf;
class CATMathLine;
class CATMathPlane;



#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATArrangementItfCPP IID IID_CATIArrSegment;
#else
extern "C" const IID IID_CATIArrSegment;
#endif

/**
 * Interface to the Segment subobject of SegmentsStrings.
 * <b>Role:</b>
 * The segments define the path of a SegmentsString.
 * Related nodes define the start and end limits of this segment (the 
 * nodes are constrained by their related segments).
 * A related Section (optoinal) defines the cross sectional shape of this segment.
 * This segment has a required line connector defining the support line, 
 * and optional line connectors defining the derived lines are the Section SetPoints.
 */
class ExportedByCATArrangementItfCPP CATIArrSegment : public CATBaseUnknown
{
  /** @nodoc */
  CATDeclareInterface;

public:
    
  /**
   * Retrieve nodes at start and end of this segment.
   * @param ohNode1
   *   Node at start of this segment (NULL_var if none).
   * @param ohNode2
   *   Node at end of this segment (NULL_var if none).
   */
  virtual HRESULT GetNodes ( CATIArrNode_var& ohNode1,
                             CATIArrNode_var& ohNode2 ) = 0;


  
  /**
   * Retrieve the support line geometry.
   * @param ihRelAxis
   *    The relative axis object for the geometry (NULL_var means relative to parent).
   * @param oLine
   *    The geometric line.
   */
  virtual HRESULT GetSupportLine( const CATIMovable_var & ihRelAxis, 
                                  CATMathLine & oLine ) = 0;


 
  /**
   * Retrieve the orientation plane geometry.
   * @param ihRelAxis
   *    The relative axis object for the geometry (NULL_var means relative to parent).
   * @param oPlane
   *    The geometric argument as CATMathPlane.
   */
  virtual HRESULT GetOrientationPlane( const CATIMovable_var & ihRelAxis, 
                                       CATMathPlane & oPlane ) = 0;

  /**
   * Retrieve the line geometry for the centerline of this segment.
   * @param ihRelAxis
   *    The relative axis object for the geometry (NULL_var means relative to parent).
   * @param oLine
   *    The geometric line at the section centerline.
   */
  virtual HRESULT GetCenterLine( const CATIMovable_var & ihRelAxis, CATMathLine & oLine ) = 0;


  /**
   * Retrieves the SetPoint name.
   * @param oPointName
   *   The current SetPoint name.
   */
  virtual HRESULT GetSectionSetPoint ( CATRouSetPointNames& oPointName ) = 0;

  /**
   * ListParams.
   * @param oListParams
   *   A list of CKE parameters.
   */  
  virtual HRESULT ListParams ( CATCkeListOf(Parm)& oListParams ) = 0;
  


  /**
   * Retrieve center line geometry (limited by adjacent center lines or extremity nodes)
   * as a CATMathLine in the forward direction of the SegmentsString containing this segment,
   * described in a CATIMovable relative axis.
   *
   * @param ihRelAxis
   *    The relative axis object for the geometry (NULL_var means relative to parent).
   * @param oLine
   *    The geometric argument as CATMathLine where the 0.0 and 1.0
   *    parameters are at the ends of the LimitedCenterLine.
   */
  virtual HRESULT GetLimitedCenterLine( const CATIMovable_var & ihRelAxis, 
                                        CATMathLine & oLine ) = 0;

  /**
   * Retrieve center line geometry (limited by adjacent bends) as a CATMathLine in the
   * forward direction of the SegmentsString containing this segment, described in a
   * CATIMovable relative axis (KO if no bends):
   *
   * Also outputs parameters to create 2 CAT3DArcCircleRep arcs representing
   * the bend center line arcs.
   *
   * @param ihRelAxis
   *    The relative axis object for the geometry (NULL_var means relative to parent).
   * @param oLine
   *    The geometric argument as CATMathLine where the 0.0 and 1.0
   *    parameters are at the ends of the LimitedCenterLine.
   * @param oArcCentr[]
   *    The center points of the 2 circles
   * @param oArcNormal[]
   *    The normal directions of the 2 circles
   * @param oArcRadius[]
   *    The radii of the 2 circles
   * @param oArc0Axis[]
   *    The 0 degree axis direction of the 2 circles
   * @param oBegAng[]
   *    The begin angles of the 2 circles
   * @param oEndAng[]
   *    The end   angles of the 2 circles
   */
  virtual HRESULT GetTurnLimitedCenterLine( const CATIMovable_var & ihRelAxis,
                                            CATMathLine       &oLine,
                                            CATMathPointf      oArcCentr[],
                                            CATMathDirectionf  oArcNormal[],
                                            float              oArcRadius[],
                                            CATMathDirectionf  oArc0Axis[],
                                            float              oBegAng[],
                                            float              oEndAng[] ) = 0;

  /**
  * Retrieve support line geometry (limited by adjacent bends) as a CATMathLine in the
  * forward direction of the SegmentsString containing this segment, described in a
  * CATIMovable relative axis (KO if no bends):
  *
  * Also outputs parameters to create 2 CAT3DArcCircleRep arcs representing
  * the bend support line arcs.
  *
  * @param ihRelAxis
   *    The relative axis object for the geometry (NULL_var means relative to parent).
  * @param oLine
  *    The geometric argument as CATMathLine where the 0.0 and 1.0
  *    parameters are at the ends of the LimitedSupportLine.
  * @param oArcCentr[]
  *    The center points of the 2 circles
  * @param oArcNormal[]
  *    The normal directions of the 2 circles
  * @param oArcRadius[]
  *    The radii of the 2 circles
  * @param oArc0Axis[]
  *    The 0 degree axis direction of the 2 circles
  * @param oBegAng[]
  *    The begin angles of the 2 circles
  * @param oEndAng[]
  *    The end   angles of the 2 circles
  */
  virtual HRESULT GetTurnLimitedSupportLine( const CATIMovable_var & ihRelAxis,
                                             CATMathLine       &oLine,
                                             CATMathPointf      oArcCentr[],
                                             CATMathDirectionf  oArcNormal[],
                                             float              oArcRadius[],
                                             CATMathDirectionf  oArc0Axis[],
                                             float              oBegAng[],
                                             float              oEndAng[] ) = 0;
    

  /**
   * Get SegmentString for this object.
   * @param oArrString
   *   CATIArrSegmentsString.
   */
  virtual HRESULT GetString ( CATIArrSegmentsString_var& oArrString ) = 0;
};

CATDeclareHandler( CATIArrSegment, CATBaseUnknown );

#endif
