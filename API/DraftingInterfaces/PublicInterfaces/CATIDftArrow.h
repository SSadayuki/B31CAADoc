#ifndef CATIDftArrow_H
#define CATIDftArrow_H
//==============================================================================
//                                   CATIA - Version 5
// COPYRIGHT DASSAULT SYSTEMES 2001
//------------------------------------------------------------------------------
// FILENAME    :    CATIDftArrow.h
// LOCATION    :    DraftingInterfaces\PublicInterfaces
// AUTHOR      :    LCF
// DATE        :    May 2001
//------------------------------------------------------------------------------
// DESCRIPTION :    Definition of interface for Arrow object
//
// INHERITANCE :    IUnknown
//------------------------------------------------------------------------------
// COMMENTS    :    Creation
//                  
//------------------------------------------------------------------------------
// MODIFICATIONS    user       date      purpose
//------------------------------------------------------------------------------

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#include "IUnknown.h"

#include "CATDraftingInterfaces.h"
#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftArrow;
#else
extern "C" const IID IID_CATIDftArrow;
#endif

#include "CATDftArrowEnum.h"
#include "CATBooleanDef.h"

/**
* Interface which manages the arrows created in CATDrawing documnent.
*/
class ExportedByDraftingItfCPP CATIDftArrow : public IUnknown
{
  
public:

  /**
   * Get arrow head or tail symbol.
   *
   * @param
   * <dl>
   * <dt><tt>oSymbolType </tt> : Symbol type.
   * <dt><tt>iExtremity </tt>  : Head (CATDftArrowHead) or Tail (CATDftArrowTail).
   * </dl>
   * @return
   * <dl>
   * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
   * <dt><tt>E_FAIL </tt> <dd> if the operation failed.
   * </dl>
   */
  virtual HRESULT GetSymbolType (int* oSymbolType, const CATDftArrowExtremity iExtremity = CATDftArrowHead) = 0;

  /**
   * Set arrow head or tail symbol.
   *
   * @param
   * <dl>
   * <dt><tt>iSymbolType </tt> : Symbol type.
   * <dt><tt>iExtremity </tt>  : Head (CATDftArrowHead) or Tail (CATDftArrowTail).
   * </dl>
   * @return
   * <dl>
   * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
   * <dt><tt>E_FAIL </tt> <dd> if the operation failed.
   * </dl>
   */
  virtual HRESULT SetSymbolType (const int iSymbolType, const CATDftArrowExtremity iExtremity = CATDftArrowHead) = 0;
  
  /**
   * Get the number of points of arrow path.
   *
   * @param
   * <dl>
   * <dt><tt>oNbPoint </tt> : Number of points of arrow path.
   * </dl>
   * @return
   * <dl>
   * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
   * <dt><tt>E_FAIL </tt> <dd> if the operation failed.
   * </dl>
   */
  virtual HRESULT GetNbPoint (int* oNbPoint) = 0;

  /**
   * Add a point to an arrow.
   *
   * @param
   * <dl>
   * <dt><tt>iNum </tt> : Point number. Point will be inserted at iNum+1 position.
   * <dt> <dd> - If iNum equals 0, point is inserted as first point.
   * <dt> <dd> - If iNum equals the arrow number of points, point is inserted as last point.
   * <dt><tt>iPoint</tt> : Point coordinates to add.
   * </dl>
   * @return
   * <dl>
   * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
   * <dt><tt>E_FAIL </tt> <dd> if the operation failed.
   * </dl>
   */
  virtual HRESULT AddPoint (const int& iNum, const double iPoint[2]) = 0;

  /**
   * Remove a point from an arrow.
   *
   * @param
   * <dl>
   * <dt><tt>iNum </tt> : Point number to delete.
   * <dt> <dd> - If iNum equals to 0, all points will be removed. 
   * </dl>
   * @return
   * <dl>
   * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
   * <dt><tt>E_FAIL </tt> <dd> if the operation failed.
   * </dl>
   */
  virtual HRESULT RemovePoint (const int iNum = 0) = 0;

  /**
   * Modify a point of an Arrow.
   * 
   * @param
   * <dl>
   * <dt><tt>iNum </tt> : Point number to modify.
   * <dt><tt>iPoint</tt> : New point coordinates. 
   * </dl>
   * @return
   * <dl>
   * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
   * <dt><tt>E_FAIL </tt> <dd> if the operation failed.
   * </dl>
   */
  virtual HRESULT ModifyPoint (const int iNum, const double iPoint[2]) = 0;

  /**
   * Get arrow path.
   * 
   * @param
   * <dl>
   * <dt><tt>oPoints</tt> : List of points coordinates (X1,Y1,X2,Y2,.....Xn,Yn).
   * <dt><tt>oNbPoints</tt> : Number of points.
   * </dl>
   * @return
   * <dl>
   * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
   * <dt><tt>E_FAIL </tt> <dd> if the operation failed.
   * </dl>
   */
  virtual HRESULT GetPoints (double** oPoints, int* oNbPoints) = 0;

  /**
   * Get arrow point coordinates.
   *
   * @param
   * <dl>
   * <dt><tt>iNum</tt> : Point number. 
   * <dt><tt>oPoint  </tt> : Point coordinates. 
   * </dl>
   * @return
   * <dl>
   * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
   * <dt><tt>E_FAIL </tt> <dd> if the operation failed.
   * </dl>
   */
  virtual HRESULT GetPoint (const int iNum, double oPoint[2]) = 0;
  
  /**
   * Set Arrow target elements.
   * 
   * @param
   * <dl>
   * <dt><tt>iTarget</tt> : The target element. 
   * <dt><tt>iPos   </tt> : Position to project on the target element. 
   * <dt><tt>iExtremity </tt>  : Head (CATDftArrowHead) or Tail (CATDftArrowTail).
   * </dl>
   * @return
   * <dl>
   * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
   * <dt><tt>E_FAIL </tt> <dd> if the operation failed.
   * </dl>
   */
  virtual HRESULT SetTarget (IUnknown* iTarget, double iPos[2], const CATDftArrowExtremity iExtremity = CATDftArrowHead) = 0;

  /**
   * Get arrow target elements.
   * 
   * @param
   * <dl>
   * <dt><tt>oTarget</tt> : The target element. 
   * <dt><tt>iExtremity </tt>  : Head (CATDftArrowHead) or Tail (CATDftArrowTail).
   * </dl>
   * @return
   * <dl>
   * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
   * <dt><tt>E_FAIL </tt> <dd> if the operation failed.
   * </dl>
   */
  virtual HRESULT GetTarget (IUnknown** oTarget, const CATDftArrowExtremity iExtremity = CATDftArrowHead) = 0;

  /**
   * Add a interruption to an arrow.
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
   * Remove a interruption to an arrow.
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
   * Get the number of interruptions of arrow path.
   * 
   * @param
   * <dl>
   * <dt><tt>oNbInterruption </tt> : Number of interruptions of arrow path.
   * </dl>
   * @return
   * <dl>
   * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
   * <dt><tt>E_FAIL </tt> <dd> if the operation failed.
   * </dl>
   */
  virtual HRESULT GetNbInterruption (int* oNbInterruption) = 0;

  /**
   * Get interruptions of arrow path.
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
   * Gets the attribute scaleOnExtremities.
   *
   * @param oScaleOnExtremities
   * <dl>
   * <dt><tt>TRUE</tt> : The arrow extremites are on scale.
   * <dt><tt>FALSE</tt> : The arrow extremites are not on scale.
   * </dl>
   * @return
   * <dl>
   * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
   * <dt><tt>S_FALSE</tt> <dd> if the operation succeeded but the attribute was not found.
   * <dt><tt>E_FAIL </tt> <dd> if the operation failed.
   * </dl>
   */
  virtual HRESULT GetScaleOnExtremities(CATBoolean &oScaleOnExtremities) = 0;

  /**
   * Sets the attribute scaleOnExtremities.
   *
   * @param iScaleOnExtremities [in]
   * <dl>
   * <dt><tt>TRUE</tt> : To scale the arrow extremites.
   * <dt><tt>FALSE</tt> : To not scale the arrow extremites.
   * </dl>
   * @return
   * <dl>
   * <dt><tt>S_OK   </tt> <dd> if the operation succeeded.
   * <dt><tt>E_FAIL </tt> <dd> if the operation failed.
   * </dl>
   */
  virtual HRESULT SetScaleOnExtremities(CATBoolean iScaleOnExtremities) = 0;

};
#endif
