#ifndef CATIDftLeader_H
#define CATIDftLeader_H
// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATMacForIUnknown.h"

#include "CATSymbolType.h"
#include "CATBooleanDef.h"

class CATIDftAssociativePosition;
class CATIDftAssociativeOrientation;
class CATIDftElementWithLeader;

#include "CATDraftingInterfaces.h"
#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftLeader ;
#else
extern "C" const IID IID_CATIDftLeader ;
#endif

/**
* This interface give access to leader points and associativity.
* @see CATIDftElementWithLeader
*/
class ExportedByDraftingItfCPP CATIDftLeader : public IUnknown
{
  
public:
  
  /**
  * Returns the ending symbol of the leader.
  * @param oSymbolType
  */
  virtual HRESULT GetSymbolType (SymbolType *oSymbolType) = 0;

  /**
  * Sets the ending symbol of the leader.
  * @param iSymbolType
  */
  virtual HRESULT SetSymbolType (const SymbolType iSymbolType) = 0;
  
  /**
  * Returns the father element and the anchor point of the leader.
  * <BR>This number is the rank of the point to use in the list returned by
  * <tt>CATIDftElementWithLeader::GetLeaderAnchorPoints()</tt>.
  * @param oElmtWithLeader
  * @param oAnchorPoint
  * @see CATIDftElementWithLeader
  */
  virtual HRESULT GetAnchorElement (CATIDftElementWithLeader **oElmtWithLeader, 
                                    int *oAnchorPoint) = 0;

  /**
  * Returns the anchor point of the leader.
  * <BR>This number is the rank of the point to use in the list returned by
  * <tt>CATIDftElementWithLeader::GetLeaderAnchorPoints()</tt>.
  * @param oAnchorPoint
  * @see CATIDftElementWithLeader
  */
  virtual HRESULT GetAnchorPoint (int *oAnchorPoint) = 0;

  /**
  * Sets the anchor point of the leader.
  * <BR>This number is the rank of the point to use in the list returned by
  * <tt>CATIDftElementWithLeader::GetLeaderAnchorPoints()</tt>.
  * @param iAnchorPoint
  * @see CATIDftElementWithLeader
  */
  virtual HRESULT SetAnchorPoint (const int iAnchorPoint) = 0;
  
  /**
  * Returns the number of points on the leader.
  * @param oNbPoint
  *   Note : the anchor point is not counted.
  */
  virtual HRESULT GetNbPoint (int *oNbPoint) = 0;

  /**
  * Adds a point on the leader.
  * @param iPointBefore
  *   The point will be inserted at the iPointBefore+1 position.
  * <BR>Note : the end point of the leader is ranked 0 and the anchor point is equal to GetNbPoint().
  * @param iPoint
  *   The point to add.
  */
  virtual HRESULT AddPoint (const int iPointBefore, const double iPoint [2]) = 0;

  /**
  * Removes a point on the leader.
  * @param iNoPoint
  *   The point to delete. If <tt>iNoPoint</tt> is set to -1, all points will be deleted.
  */
  virtual HRESULT RemovePoint (const int iNoPoint = -1) = 0;

  /**
  * Modifies a point on the leader.
  * The anchor point (iNoPoint = 0) can't be modified
  * @param iNoPoint
  *   The point to modify.
  * @param iNewPoint
  *   The new point.
  */
  virtual HRESULT ModifyPoint (const int iNoPoint,const double iNewPoint [2]) = 0;

  /**
  * Returns the list of points on the leader including the anchor point.
  * @param oPoints
  *   The point list. X1,Y1,X2,Y2,.....Xn,Yn
  */
  virtual HRESULT GetPoints (double **oPoints) = 0;

  /**
  * Returns a point of the leader.
  * Set iNoPoint to 0 to get the anchor point.
  * @param iNoPoint
  *   The rank of the point.
  * @param oPoint
  */
  virtual HRESULT GetPoint (const int iNoPoint, double oPoint [2]) = 0;
  
  /**
  * Sets the leader target.
  * @param iTarget
  *   The targeted element.
  * @param iPos
  *   The indication point.
  * @param iInf
  *   Not used yet
  */
  virtual HRESULT SetTarget (IUnknown *iTarget, double iPos[2], const int iInf = 0) = 0;

  /**
  * Returns the element targeted by the leader.
  * @param oTarget
  *   The targeted element.
  * @param oInf
  *   Not used yet
  */
  virtual HRESULT GetTarget (IUnknown **oTarget, int *oInf = 0) const= 0;

  /**
  * Returns an interface to modify a subpart of the leader.
  * @param iSubSet
  *   can be "Symbols","Lines"
  * @param iItfName
  *   An ID on the interface to find.
  * @param oProperties
  *   A pointer to the interface.
  */
  virtual HRESULT GetSubSet (const wchar_t *iSubSet,
                             const IID iItfName,
                             IUnknown **oProperties) = 0;
  /**
   * Add a interruption to a leader.
   * 
   * @param
   * <dl>
   * <dt><tt>iFirstPoint</tt>   : First point coordinates. 
   * <dt><tt>iSecondPoint </tt> : Second point coordinates.
   * </dl>
   * @return
   * <dl>
   * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
   * <dt><tt>E_FAIL </tt> <dd> if the operation failed.
   * </dl>
   */
  virtual HRESULT AddInterruption (const double iFirstPoint[2], const double iSecondPoint[2]) = 0;

  /**
   * Remove a interruption to a leader.
   * 
   * @param
   * <dl>
   * <dt><tt>iNum </tt> : Interruption number to delete.
   * <dt> <dd> - If iNum equals to 0, all interruptions will be removed. 
   * </dl>
   * @return
   * <dl>
   * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
   * <dt><tt>E_FAIL </tt> <dd> if the operation failed.
   * </dl>
   */
  virtual HRESULT RemoveInterruption (const int iNum = 0) = 0;

  /**
   * Get the number of interruptions of leader path.
   * 
   * @param
   * <dl>
   * <dt><tt>oNbInterruption </tt> : Number of interruptions of leader path.
   * </dl>
   * @return
   * <dl>
   * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
   * <dt><tt>E_FAIL </tt> <dd> if the operation failed.
   * </dl>
   */
  virtual HRESULT GetNbInterruption (int* oNbInterruption) = 0;

  /**
   * Get interruptions of leader path.
   * 
   * @param
   * <dl>
   * <dt><tt>oInterruptions</tt> : List of interruptions coordinates (X1,Y1,X2,Y2,.....Xn,Yn).
   * <dt><tt>oNbInterruptions</tt> : Number of interruptions.
   * </dl>
   * @return
   * <dl>
   * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
   * <dt><tt>E_FAIL </tt> <dd> if the operation failed.
   * </dl>
   */
  virtual HRESULT GetInterruptions (double** oInterruptions, int* oNbInterruptions) = 0;

    /**
  * Anchor symbol style.
  * @param NoSymb
  *   No anchor symbol
  * @param AllAround
  *   All-Around style (circle)
  * @param AllOver
  *   All-Over   (2 concentric circles)
  * @param AllAboutWithHorLine
  *   All-About  (square with an horizontal line)
  * @param AllAboutWithVerLine
  *   All-About  (square with a vertical line)
  * @param AllAroundPartial
  *   All-Around (half circle)
  * @param AllOverPartial
  *   All-Over   (2 half concentric circles)
  * @param AllAboutWithHorLinePartial
  *   All-About  (half square with an horizontal line)
  * @param AllAboutWithVerLinePartial
  *   All-About  (half square with a vertical line)
  * @param Flag
  *   All-About  (Flag)
  * @param FlagAndAllAround
  *   All-About  (Flag And AllAround)
  */
  enum AnchorSymbol { NoSymb=0          , 
                      AllAround=1       , AllOver=2       , AllAboutWithHorLine=3       , AllAboutWithVerLine=4        , 
                      AllAroundPartial=5, AllOverPartial=6, AllAboutWithHorLinePartial=7, AllAboutWithVerLinePartial=8 ,
                      Flag=9            , FlagAndAllAround=10 };
  /** 
  * Read the anchor symbol style.
  *
  * @param oAncSymbol [out]
  *   The style of the anchor symbol. @see #AnchorSymbol
  *
  * @return
  * <dl>
  * <dt><tt>S_OK</tt><dd> The anchor symbol style has been successfully read
  * <dt><tt>E_UNEXPECTED</tt><dd> An unexpected error occured
  * </dl>
  */
  virtual HRESULT GetAnchorSymbol(AnchorSymbol &oAncSymbol) = 0;

  /** 
  * Set the anchor symbol style.
  *
  * @param iAncSymbol [in]
  *   The style of the anchor symbol. @see #AnchorSymbol
  *
  * @return
  * </dl>
  * <dt><tt>S_OK</tt><dd> The anchor symbol style has been successfully set
  * <dt><tt>E_INVALIDARG</tt><dd> This style is not supported
  * <dt><tt>E_UNEXPECTED</tt><dd> An unexpected error occured
  * </dl>
  */
  virtual HRESULT SetAnchorSymbol(AnchorSymbol iAncSymbol) = 0;

  /**
   * Get the status of AllAround.
   * 
   * @param
   * <dl>
   * <dt><tt>oAllAround</tt> : TRUE mean to display AllAround.
   * </dl>
   * @return
   * <dl>
   * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
   * <dt><tt>E_FAIL </tt> <dd> if the operation failed.
   * </dl>
   */
  virtual HRESULT GetAllAround (CATBoolean* oAllAround) = 0;

  /**
   * Set the status of AllAround.
   * 
   * @param
   * <dl>
   * <dt><tt>iAllAround</tt> : TRUE mean to display AllAround.
   * </dl>
   * @return
   * <dl>
   * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
   * <dt><tt>E_FAIL </tt> <dd> if the operation failed.
   * </dl>
   */
  virtual HRESULT SetAllAround (CATBoolean iAllAround = FALSE) = 0;

  /**
   * Get the status of MoveMode.
   * 
   * @param
   * <dl>
   * <dt><tt>oMoveMode</tt> : TRUE mean to move with annotation.
   * </dl>
   * @return
   * <dl>
   * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
   * <dt><tt>E_FAIL </tt> <dd> if the operation failed.
   * </dl>
   */
  virtual HRESULT GetMoveMode (CATBoolean* oMoveMode) = 0;

  /**
   * Set the status of MoveMode.
   * 
   * @param
   * <dl>
   * <dt><tt>iMoveMode</tt> : TRUE mean to move with annotation.
   * </dl>
   * @return
   * <dl>
   * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
   * <dt><tt>E_FAIL </tt> <dd> if the operation failed.
   * </dl>
   */
  virtual HRESULT SetMoveMode (CATBoolean iMoveMode = FALSE) = 0;

};
#endif



/*  QUE FAIT-ON DE TOUT CA ?
  virtual HRESULT GetOrientType(int *oOrientType) = 0;
  virtual HRESULT SetOrientType (int iOrientType) = 0;
  
  virtual HRESULT GetOrientAngle (double *oAngle) = 0;
  virtual HRESULT SetOrientAngle (double iAngle) = 0;


  * Returns a graphic interface on a subpart of the leader.
  * @param iSubSet
  *   can be "All","Symbol","Lines".
  * @param oGraphProperties
  *   A pointer to the interface.
  * @see CATIDftLineicProperties

  //*****TODO***** Properties de line
  virtual HRESULT GetGraphicProperties (IUnknown **oGraphProperties) = 0;
*/
