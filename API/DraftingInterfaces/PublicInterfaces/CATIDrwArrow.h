// COPYRIGHT DASSAULT SYSTEMES 1999
/**
* @CAA2Level L0
* @CAA2Usage U3
*/

#ifndef CATIDrwArrow_H
#define CATIDrwArrow_H

#include "CATBaseUnknown.h"
class CATIDrwAssociativePosition;
class CATIDrwAssociativePosition_var;

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwArrow ;
#else
extern "C" const IID IID_CATIDrwArrow ;
#endif
/**
 * Interface of the drawing arrow.
 * <b>Role</b>: The arrow is an annotation used to mark a position.
 *.It can be associative to an element (2D or 3D geometry).
 */
class ExportedByDraftingItfCPP CATIDrwArrow : public CATBaseUnknown
{
   CATDeclareInterface;
   
public:
   
  /** 
   * Gets the arrow's bottom position.
   * @Param oXBottom
   *   The x coordinate of the arrow bottom.
   * @Param oYBottom
   *   The y coordinate of the arrow bottom.
   */
   virtual void GetBottomPosition(double &oXBottom,double &oYBottom) = 0;
  /** 
   * Moves the arrow's bottom position.
   * If the reference is not null, the position is the projection of the 
   * input coordinates on the element.
   * @Param iXBottom
   *   The x coordinate of the arrow bottom.
   * @Param iYBottom
   *   The y coordinate of the arrow bottom.
   * @Param iReference
   *   The element to be marked up
   */
   virtual void MoveBottomTo(double iXBottom, double iYBottom, const CATBaseUnknown * iReference = NULL) = 0;
  /** 
   * Gets the arrow's head position.
   * @Param oXHead
   *   The x coordinate of the arrow head.
   * @Param oYHead
   *   The y coordinate of the arrow head.
   */
   virtual void GetHeadPosition(double &oXHead, double &oYHead) = 0;
  /** 
   * Moves the arrow's head position.
   * If the reference is not null, the position is the projection of the 
   * input coordinates on the element.
   * @Param iXHead
   *   The x coordinate of the arrow head.
   * @Param iYHead
   *   The y coordinate of the arrow head.
   * @Param iReference
   *   The element to be marked up
   */
   virtual void MoveHeadTo(double iXHead, double iYHead, const CATBaseUnknown * iReference = NULL) = 0;
   /** nodoc */
   virtual CATIDrwAssociativePosition_var GetBottomAssocPos() = 0;
   /** nodoc */
   virtual CATIDrwAssociativePosition_var GetHeadAssocPos() = 0;
   /** nodoc */
   virtual void SetBottomAssocPos(CATIDrwAssociativePosition *ipBottomAssPos) = 0;
   /** nodoc */
   virtual void SetHeadAssocPos(CATIDrwAssociativePosition *ipHeadAssPos) = 0;
  /** 
   * Gets the arrow style.
   * The return value is > 0 if the arrow is zoomable..
   */
   virtual int GetArrowStyle () = 0;
  /** 
   * Sets the arrow style.
   * @Param iArrowStyle
   *   The value must be greater than 0 for a zoomable arrow.
   */
   virtual void SetArrowStyle (int iArrowStyle) = 0;
  /** 
   * Gets the arrow symbol length.
   */
   virtual double GetArrowLength() = 0;
  /** 
   * Sets the symbol arrow length.
   * @Param iArrowLength
   *   The arrow symbol length.
   */
   virtual void SetArrowLength( double iArrowLength ) = 0;
};
CATDeclareHandler(CATIDrwArrow, CATBaseUnknown);
#endif



