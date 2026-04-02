#ifndef CATIDrwLeader_H
#define CATIDrwLeader_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

class CATMathPoint2D;
class CATListPtrCATMathPoint2D;
class CATIDrwAssociativePosition_var;
class CATIDrwAssociativeOrientation_var;
class CATISpecObject;
class CATISpecObject_var;

#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
#include "CATDrwAssDefs.h"

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwLeader ;
#else
extern "C" const IID IID_CATIDrwLeader ;
#endif

/**
* Interface of leader objects.
* @see CATIDrwEltWithLeader
*/
class ExportedByDraftingItfCPP CATIDrwLeader : public CATBaseUnknown
{
  CATDeclareInterface;
  
  
public:
  
  /**
  * Sets the ending symbol.
  * @param iSymbolType
  *   The symbol type.
  */
  virtual void SetSymbolType (int &SymbolType) = 0;
  /**
  * Gets the ending symbol.
  * @return
  *   The symbol type.
  */
  virtual int GetSymbolType () = 0;
  
  /**
  * Set the anchor point of the leader on the annotation.
  * @see CATIDrwEltWithLeader#GetLeaderAnchorPoints
  */
  virtual void SetAnchorPoint (int &iAnchorPoint) = 0;
  /**
  * Get the anchor point of the leader on the annotation.
  * @see CATIDrwEltWithLeader#GetLeaderAnchorPoints
  */
  virtual int GetAnchorPoint() = 0;

  /**
  * Get the anchor point of the leader on the annotation.
  * @see CATIDrwEltWithLeader#GetLeaderAnchorPoints
  */
  virtual void GetAnchorPoint(int & oNum, int & oFixed) = 0;
  
  /**
  * Add a point to a leader.
  * @param iPointBefore
  *   The rank of the preceding point : 0 to GetNbPoint(). 
  *   <br>0 means anchor point.
  *   <br>GetNbPoint() means append at the end of leader
  */
  virtual void AddPoint (int &iPointBefore, double &iXpos, double &iYpos) = 0;

  /**
  * Returns the number of points of a leader.
  * <br>The anchor point is not taken into account.
  * @return
  *   The number of points.
  */
  virtual int GetNbPoint () = 0;

  /**
  * Returns points of a leader.
  * <br>The anchor point is not in the list.
  * @return 
  *   The mathematical anchor point list.
  */
  virtual CATListPtrCATMathPoint2D GetPoints () = 0;

  /**
  * Returns a particular point of a leader.
  * <br>To get the anchor point set NoPoint to 0.
  * @param iNoPoint
  *   Tha anchor point index.
  * @return 
  *   The anchor point at index iNoPoint. 
  */
  virtual CATMathPoint2D GetPoint (int iNoPoint) = 0;
  
  /**
  * Modifies a particular point of a leader.
  * <br>NoPoint is from 1 to GetNbPoint().
  * @param iNoPoint
  *   The leader point to be modified
  * @param iNewX
  *   The new X coordinate of this point
  * @param iNewY
  *   The new Y coordinate of this point
  */
  virtual void ModifyPoint (int iNoPoint,double iNewX,double iNewY) = 0;
  
  /**
  * Erase a particular point of a leader.
  * @param iNoPoint
  * <br>NoPoint is from 1 to GetNbPoint().
  * <br>-1 means erase all points.
  */
  virtual void RemovePoint (int iNoPoint) = 0;
  
  /**
  * @nodoc
  */
  virtual void SetAssocPos (CATIDrwAssociativePosition_var &EndPoint) = 0;
  /**
  * @nodoc
  */
  virtual CATIDrwAssociativePosition_var GetAssocPos() = 0;
  
  /**
  * @nodoc
  */
  virtual void SetAssocOrient (CATIDrwAssociativeOrientation_var &Orient) = 0;
  /**
  * @nodoc
  */
  virtual CATIDrwAssociativeOrientation_var GetAssocOrient () = 0;
  
  /**
  * @nodoc
  */
  virtual void SetOrientType (int OrientType) = 0;
  /**
  * @nodoc
  */
  virtual int GetOrientType() = 0;
  
  /**
  * @nodoc
  */
  virtual void SetOrientAngle (double Angle) = 0;
  /**
  * @nodoc
  */
  virtual double GetOrientAngle () = 0;

  /**
  * @nodoc
  */
  virtual void SetAttachElem(CATISpecObject *iAttachElem) = 0;

  /**
  * @nodoc
  */
  virtual CATISpecObject_var GetAttachElem () = 0;

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

  /**
  * Puts a positional link between the leader extremity and a reference.
  * @param iRef
  *    The reference. All elements which implements the CATIDrwMarkupable interface can
  *    be used (annotations, geometry, ...).
  * @param iPosBehavior
  *    Relative or absolute.
  * @param iProjMode
  *    The projection mode (On curve, follow hot points, Extensionlines of dimensions...).
  *    <br>Default : projected on the curve.
  * @return
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> Positional link has been created
  * <dt> <tt>E_FAIL</tt>   <dd> No positional link created
  * </dl>
  */
  virtual HRESULT SetAssociativePosition(CATBaseUnknown *ipRef, CATAssPositioningBehavior iPosBehavior=Ass_Relative,
                                         CATAssProjectingMode iProjMode=Ass_Contour) = 0;

  /**
  * Puts orientation link between the leader extremity and a reference.
  * @param iRef
  *    The reference. All elements which implements the CATIDrwMarkupable interface can
  *    be used (annotations, geometry, ...).
  * @param iProjMode
  *    The projection mode (On curve, follow hot points, Extensionlines of dimensions...).
  *    <br>Default : projected on the curve.
  * @return
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd>  Orientation link has been created
  * <dt> <tt>E_FAIL</tt>   <dd> No orientation link created
  * </dl>
  */
  virtual HRESULT SetAssociativeOrientation(CATBaseUnknown *ipRef, CATAssProjectingMode iProjMode=Ass_Contour) = 0;
};
CATDeclareHandler(CATIDrwLeader, CATBaseUnknown);
#endif
