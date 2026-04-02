#ifndef CATIDrwEltWithLeader_H
#define CATIDrwEltWithLeader_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATBaseUnknown.h"
#include "CATLISTP_CATMathPoint2D.h"
#include "CATLISTP_CATMathDirection2D.h"
#include "CATMathPoint2D.h"
#include "CATListOfInt.h"
#include "CATListOfDouble.h"

class CATIDrwLeader_var;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwEltWithLeader ;
#else
extern "C" const IID IID_CATIDrwEltWithLeader ;
#endif
/**
* Interface on CATIDrwLeader list manager.
* @see CATIDrwLeader
*/
class ExportedByDraftingItfCPP CATIDrwEltWithLeader : public CATBaseUnknown
{
  CATDeclareInterface;
  
public:
  
  /**
  * Returns a particular leader.
  * @param iNoLeader
  *   The rank of the leader.
  * @return
  *   A CATIDrwLeader interface on the leader
  * @see CATIDrwLeader
  */
  virtual CATIDrwLeader_var GetLeader (int iNoLeader) = 0;
  /**
  * Returns the number of leader on the element.
  * @return 
  *   The number of leader on the element.
  */
  virtual int GetNbLeader () = 0;
  
  /**
  * Add a leader to the element.
  * @param iLeader
  *   A interface on the leader to add.
  */
  virtual void AddLeader (CATIDrwLeader_var iLeader) = 0;
  /**
  * @nodoc
  */
  virtual void RemoveLeader (CATIDrwLeader_var iLeader) = 0;
  /**
  * Remove a leader.
  * @param iNoLeader
  *   Rank of the leader to delete.
  */
  virtual void RemoveLeader (int iNoLeader) = 0;
  
  /**
  * Gives all the possible points to use as a nchor point for leaders.
  * @param iPointListe
  *   The list of all points. Their rank in the list is the number you give 
  *   to the CATIDrwLeader::SetAnchorPoint method.
  * @param iPointIsValid
  *   The list of all rank that are allowed to use.
  * @see CATIDrwLeader#SetAnchorPoint
  */
  virtual void GetLeaderAnchorPoints ( CATLISTP(CATMathPoint2D) &iPointListe,
    CATListOfInt &iPointIsValid) = 0;
  /**
  * Returns a anchor point to use as a nchor point for leaders.
  * @param NoPoint
  *   The rank of the anchor point on the element.
  * @return
  *   The coordinates of the point.
  * @see CATIDrwLeader#GetAnchorPoint
  */
  virtual CATMathPoint2D GetLeaderAnchorPoint (int NoPoint) = 0;
  
  /**
  * Returns a anchor point to use as a nchor point for leaders.
  * @param oListDelta
  *   List of the delta without view scale put on each possible anchor point
  */
  virtual HRESULT GetAnchorDeltas(CATListOfDouble & oListDelta) = 0;

  /**
  * Returns a anchor point to use as a nchor point for leaders.
  * @param oListDelta
  *   List of the delta without view scale put on each possible anchor point
  * @param oListV
  *   List of the vector for each delta
  */
  virtual HRESULT GetAnchorDeltasAndVectors(CATListOfDouble & oListDelta,
                                            CATLISTP(CATMathDirection2D) & oListV) = 0;

  /**
  *  Hide/Show all leaders.
  * @param iShowMode
  *   0 : HideLeaders 
  *   <br>1 : ShowLeaders
  */
  virtual void SetLeadersVisualization (int iShowMode) = 0;
  /**
  *  Returns the visualization mode of leaders.
  * @return
  *   0 : Leaders are hidden
  * <br>1 : Leaders are shown
  */
  virtual int GetLeadersVisualization () = 0;
  
};
CATDeclareHandler(CATIDrwEltWithLeader, CATBaseUnknown);
#endif
