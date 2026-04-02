#ifndef CATISchDisplay_H
#define CATISchDisplay_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"
#include "CATPathElement.h"
#include "CATRepPath.h"

class CATRep;
class CATISchGRR;

extern "C" const IID IID_CATISchDisplay ;

/**
 * Interface to manage the "look" of a graphic representation of 
 * Schematic basic set of objects. 
 * <b>Role</b>: To modify the visualization attributes such 
 * as highlight and show-hide
 */
class CATISchDisplay : public IUnknown
{
  public:   
  
  /**
  * Highlight or de-highlight an object's graphic representation.
  * @param iBOn
  *   if TRUE, highlight. Else de-highlight.
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
  virtual HRESULT Highlight (CATBoolean iBOn) = 0;

  /**
  * Show or hide an object's graphic representation.
  * @param iBOn
  *   if TRUE, show the graphic representation. Else hide it.
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
  virtual HRESULT Show (CATBoolean iBOn) = 0;

  /**
  * Get the bounding box of the graphic representation.
  * @param oDb4BoxCorner
  *   An array of 4 doubles. 
  *   member 1-2 is the X-Y coordinates of the lower left corner
  *   point of the bounding box.
  *   member 3-4 is the X-Y coordinates of the upper right corner
  *   point of the bounding box. 
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
  virtual HRESULT GetBoundingBox (double *oDb4BoxCorner) = 0;

  /**
  * Get the display of the graphic representation.
  * @see CATI2DGeoVisu#BuildRep
  * @param oRep
  *   pointer to CATRep of the display.
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
  virtual HRESULT BuildRep (CATRep **oRep) = 0;

  //---------------------------------------------------------------------------
  // BuildHighlightLook should be implemented only on the "Route" object.
  //                                          ****
  // History: VSO (1/11/01)
  //   To resolve problem with highlighting route in a trap box under SELECT.
  //   We want the GRRCntr and GRRRoute to be both highlighted when a route
  //   is selected anywhere (at the connector or at the line itself). The 
  //   easiest way is to intercept the BuildHighlightLook on the "Route"
  //   and not to propagate down the leaf of the CATPathElement. That way,
  //   the rep of the route (being a CAT2DBagRep with the rep of GRRCntr and
  //   the rep of GRRRoute) will become the leaf of the CATRepPath, and both
  //   the GRRCntr and GRRRoute will be highlighted.
  //   We do not need this for the component, because when a component is 
  //   trapped, the ditto is highlighted by the drafting.
  //---------------------------------------------------------------------------
  
  /**
  * Get the display of the graphic representation.
  * @see CATI2DGeoVisu#BuildHighlightLook
  * @param iModelPath
  *   CATPathElement of the selected object
  * @param oRepPath
  *   CATRepPath of the selected object
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
  virtual HRESULT BuildHighlightLook (
      const CATPathElement &iModelPath, CATRepPath &oRepPath) = 0;      
  
  /**
  * Set the color of the graphic representation of objects.
  * @param iRed
  * The red component of the color.
  * <b>Legal values</b>: <tt>iRed</tt> ranges from 0 to 255.
  * @param iGreen
  * The green component of the color.
  * <b>Legal values</b>: <tt>iGreen</tt> ranges from 0 to 255.
  * @param iBlue
  * The blue component of the color.
  * <b>Legal values</b>: <tt>iBlue</tt> ranges from 0 to 255.
  * @param iGRR
  * The specific graphic image to change graphic properties. If 
  * NULL, all the images associated with the object will be changed.
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
  virtual HRESULT SetColor (int iRed,  int iGreen,  int iBlue,
    CATISchGRR *iGRR=NULL) = 0; 

  /**
  * Get the color of the graphic representation of objects.
  * @param iGRR
  * The specific graphic image to get the graphic properties from. If
  * NULL, the first image associated with the object will be used.
  * @param oRed
  *   Red component of color
  * @param oGreen
  *   Green component of color
  * @param oBlue
  *   Blue component of color
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
  virtual HRESULT GetColor (CATISchGRR *iGRR,
    int *oRed, int *oGreen, int *oBlue) = 0; 

  /**
  * Set the line type of the graphic representation of objects.
  * @param iLinetype
  * The line type.
  * <b>Legal values</b>: <tt>iLinetype</tt> ranges from 1 to 63.<ul>
  * <li>1 = Solid.
  * <li>2 = Dotted.
  * <li>3 = Dashed. 
  * <li>4 = Dot-dashed.
  * <li>5 = Phantom.
  * <li>6 = Small-dotted.
  * <li>7 = JIS Axis.
  * <li>8 to 63 = Solid or application dependant.</ul>
  * @param iGRR
  * The specific graphic image to change graphic properties. If 
  * NULL, all the images associated with the object will be changed.
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
  virtual HRESULT SetLineType (int iLinetype, CATISchGRR *iGRR=NULL) = 0;

  /**
  * Get the line type of the graphic representation of objects.
  * @param iGRR
  * The specific graphic image to get the graphic properties from. If
  * NULL, the first image associated with the object will be used.
  * @param oLinetype
  * The line type.
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
  virtual HRESULT GetLineType (CATISchGRR *iGRR, int *oLineType) = 0;

  /**
  * Set the line thickness of the graphic representation of objects.
  * @param iThickness
  * The thickness index.
  * <b>Legal values</b>: <tt>iThickness</tt> range from 1 to 16.
  */
  virtual HRESULT SetThickness (int iThickness, CATISchGRR *iGRR=NULL) = 0;

  /**
  * Get the line thickness of the graphic representation of objects.
  * @param iGRR
  * The specific graphic image to get the graphic properties from. If
  * NULL, the first image associated with the object will be used.
  * @param oThickness
  * The thickness index.
  */
  virtual HRESULT GetThickness (CATISchGRR *iGRR, int *oThichness) = 0;

};
#endif
