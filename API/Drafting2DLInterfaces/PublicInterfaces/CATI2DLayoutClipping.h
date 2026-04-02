// COPYRIGHT Dassault Systemes 2008
/**
* @CAA2Level L1
* @CAA2Usage U3
*/
//===================================================================
//
// CATI2DLayoutClipping.h
// Define the CATI2DLayoutClipping interface
//===================================================================

#ifndef CATI2DLayoutClipping_H
#define CATI2DLayoutClipping_H

#include "CATDrafting2DLInterfaces.h"
#include "CATBaseUnknown.h"
#include "CAT2DLClippingProfileMode.h"
#include "CATBoolean.h"

class CATMathPoint2D;
class CATListPtrCATMathPoint2D;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATDrafting2DLItfCPP IID IID_CATI2DLayoutClipping;
#else
extern "C" const IID IID_CATI2DLayoutClipping ;
#endif

//------------------------------------------------------------------

/**
* This interface manages the clipping applied by a 2D Layout View.
*
* <br><b>Role</b>: This interface is implemented by the 2DLView 
* <p>
*
* @example
* <pre>
*  CATI2DLayoutClipping* pi2DLClipping = NULL;
*  rc = my2DLVIew-&gt;QueryInterface(IID_CATI2DLayoutClipping,
*                                     (void**) &amp;pi2DLClipping);
* </pre>
*
* @href CATI2DLayoutView
*/

class ExportedByCATDrafting2DLItfCPP CATI2DLayoutClipping: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  /**
  * Sets the mode of the clipping profile.
  * <br><b> Precondition</b> The corresponding data must be defined before the clipping mode activation.
  * @param iClipProfileMode
  * The mode to use
  * @return
  * S_OK is succeeded, E_XXX if failed (that can happen when switching to
  * a mode whose data are not yet initialized)
  * @sample <br> Activating circle clipping when IsClipCircleDefined returns
  * FALSE will fail. You first have to call SetClipCircle, and then use
  * SetClipProfileMode.
  */
  virtual HRESULT SetClipProfileMode(CAT2DLClippingProfileMode iClipProfileMode)=0;

  /**
  * <b>Role</b>Gets the mode of clipping profile.
  * @param oClipProfileMode
  * [out] the mode of clipping
  * @return 
  * S_OK is succeeded, E_XXX if failed
  */
  virtual HRESULT GetClipProfileMode(CAT2DLClippingProfileMode &oClipProfileMode)=0;

  /**
  * Sets the data for the circle clipping profile.
  * <br><b> Precondition</b> Geometry defining the profile must be inside the model limits.
  * @param iCenter
  * the center of the circle in view space coordinates.
  * @param iRadius
  * the radius of the circle in view space coordinates.
  * @return
  * S_OK if succeeded, E_XXX if failed (can be invalid inputs)
  */
  virtual HRESULT SetClipCircle(const CATMathPoint2D &iCenter,double iRadius)=0;

  /**
  * Checks if the circle data are defined.
  * @param oDefined
  * [out] the defined state
  * @return
  * S_OK if succeeded, E_XXX if failed
  */
  virtual HRESULT IsClipCircleDefined(CATBoolean &oDefined)=0;

  /**
  * Gets the data for the circle clipping profile.
  * <br><b> Precondition</b> IsClipCircleDefined method must return TRUE before the usage of this method.
  * @param oCenter
  * [out] the center of the circle in view space coordinates.
  * @param iRadius
  * the radius of the circle in view space coordinates.
  * @return
  * S_OK if succeeded, E_XXX if failed
  */
  virtual HRESULT GetClipCircle(CATMathPoint2D &oCenter,double &oRadius)=0;

  /**
  * Sets the data for the polygon clipping profile.
  * <br><b> Precondition</b> Geometry defining the profile must be inside the model limits.
  * @param iList
  * a list of 2D points (in view space coordinates) that represents
  * the polygon. The list represents the vertices of the polygon; each
  * edge is defined by taking a point and the next one. For the last
  * point, an edge is created by taking the last point and the first one
  * (so the polygon is automatically closed without having to append
  * the first point at the end of the list).
  * The polygon must not be complex (it must have non-intersecting 
  * boundaries).
  * 
  * Each point should respect:
  * All the points defining the polygon must be distincted.
  * All the points must be inside the model limits.
  * The list should contain at least 3 points (that will be a triangle).
  * @return
  * S_OK if succeeded, E_XXX if failed (can be invalid inputs)
  */
  virtual HRESULT SetClipPolygon(const CATListPtrCATMathPoint2D &iList)=0;

  /**
  * Checks if the polygon data are defined.
  * @param oDefined
  * [out] the defined state
  * @return
  * S_OK if succeeded, E_XXX if failed
  */
  virtual HRESULT IsClipPolygonDefined(CATBoolean &oDefined)=0;

  /**
  * Gets the data for the polygon clipping profile.
  * <br><b> Precondition</b> IsClipPolygonDefined method must return TRUE before the usage of this method.
  * @param oList
  * [out] a list of 2D points (in view space coordinates) that represents
  * the polygon. The list represents the vertices of the polygon; each
  * edge is defined by taking a point and the next one. For the last
  * point, an edge is created by taking the last point and the first one
  * (so the polygon is automatically closed without having to append
  * the first point at the end of the list).
  * @return
  * S_OK if succeeded, E_XXX if failed
  */
  virtual HRESULT GetClipPolygon(CATListPtrCATMathPoint2D &oList)=0;

  /**
  * Sets the data for the rectangle clipping profile.
  * <br><b> Precondition</b> Geometry defining the profile must be inside the model limits.
  * @param iXMin
  * the xmin.
  * @param iXMax
  * the xmax.
  * @param iYMin
  * the ymin.
  * @param iYMax
  * the ymax.
  * @return
  * S_OK if succeeded, E_XXX if failed (can be invalid inputs).
  */
  virtual HRESULT SetClipRectangle(double iXMin,double iXMax,double iYMin, double iYMax)=0;

  /**
  * Checks if the rectangle data are defined. 
  * @param oDefined
  * [out] the defined state.
  * @return
  * S_OK if succeeded, E_XXX if failed.
  */
  virtual HRESULT IsClipRectangleDefined(CATBoolean &oDefined)=0;

  /**
  * Gets the data for the rectangle clipping profile.
  * <br><b> Precondition</b> IsClipRectangleDefined method must return TRUE before the usage of this method.
  * @param oXMin
  * [out] the xmin.
  * @param oXMax
  * [out] the xmax.
  * @param oYMin
  * [out] the ymin.
  * @param oYMax
  * [out] the ymax.
  * @return
  * S_OK if succeeded, E_XXX if failed (can be invalid inputs).
  */
  virtual HRESULT GetClipRectangle(double &oXMin,double &oXMax,double &oYMin, double &oYMax)=0;

  /**
  * Sets the offset of the back clipping plane from the view plane.
  * @param iOffset
  * The offset of the back clipping plane.
  * <br><b> Precondition</b> ioffset must be a positive value.
  * @return
  * S_OK if succeeded, E_XXX if failed (can be invalid inputs).
  */
  virtual HRESULT SetBackClippingOffset(double iOffset)=0;

  /**
  * Checks if the the offset of the back clipping plane is defined. 
  * @param oDefined
  * [out] the defined state.
  * @return
  * S_OK if succeeded, E_XXX if failed.
  */
  virtual HRESULT IsBackClippingOffsetDefined(CATBoolean &oDefined)=0;

  /**
  * Gets the offset of the back clipping plane from the view plane.
  * @param oOffset
  * [out] The offset of the back clipping plane.
  * @return
  * S_OK if succeeded, E_XXX if failed (can be invalid inputs).
  */
  virtual HRESULT GetBackClippingOffset(double &oOffset)=0;

  /**
  * Sets the activation of the back clipping plane.
  * @param iActivation
  * the activation, TRUE to activate, FALSE to deactivate.
  * @return
  * S_OK if succeeded, E_XXX if failed.
  */
  virtual HRESULT SetBackClippingActivation(CATBoolean iActivation)=0;

  /**
  * Gets the activation of the back clipping plane.
  * @param oActivation
  * [out] the activation, TRUE to activate, FALSE to deactivate.
  * @return
  * S_OK if succeeded, E_XXX if failed.
  */
  virtual HRESULT GetBackClippingActivation(CATBoolean &oActivation)=0;

  /**
  * Sets the clipping profile display on or off.
  * @param iDisplayed
  * if TRUE displayed, if FALSE NOT displayed.
  * @return
  * S_OK if succeeded, E_XXX if failed.
  */
  virtual HRESULT SetClipProfileDisplay(CATBoolean iDisplayed)=0;

  /**
  * Gets the clipping profile display status.
  * @param oDisplayed
  * [out] the display status of the clipping profile.
  * @return
  * S_OK if succeeded, E_XXX if failed.
  */
  virtual HRESULT GetClipProfileDisplay(CATBoolean &oDisplayed)=0;

  /**
  * Sets the clipping profile line type.
  * @param iLineType
  * type of the clipping profile line (1 <= iLineType <= 63).
  * @return
  * S_OK if succeeded, E_XXX if failed.
  */
  virtual HRESULT SetClipProfileLineType(unsigned int iLineType)=0;

  /**
  * Gets the clipping profile line type.
  * @param oLineType
  * [out] type of the clipping profile line.
  * @return
  * S_OK if succeeded, E_XXX if failed.
  */
  virtual HRESULT GetClipProfileLineType(unsigned int &oLineType)=0;

  /**
  * Sets the clipping profile line width.
  * @param iWidth
  * width of the clipping profile line (1 <= iLineType <= 55).
  * @return
  * S_OK if succeeded, E_XXX if failed.
  */
  virtual HRESULT SetClipProfileLineWidth(unsigned int iWidth)=0;

  /**
  * Gets the clipping profile line width.
  * @param oWidth
  * [out] width of the clipping profile line.
  * @return
  * S_OK if succeeded, E_XXX if failed.
  */
  virtual HRESULT GetClipProfileLineWidth(unsigned int &oWidth)=0;

  /**
  * Sets the clipping profile color.
  * @param iRed iGreen iBlue
  * 3-uple color for clipping profile (each color in [0,255]).
  * @return
  * S_OK if succeeded, E_XXX if failed.
  */
  virtual HRESULT SetClipProfileLineColor(unsigned int iRed,unsigned int iGreen,unsigned int iBlue)=0;

  /**
  * Gets the clipping profile color.
  * @param oRed oGreen oBlue
  * [out] 3-uple color for clipping profile. 
  * @return
  * S_OK if succeeded, E_XXX if failed.
  */
  virtual HRESULT GetClipProfileLineColor(unsigned int &oRed,unsigned int &oGreen,unsigned int &oBlue)=0;
};
CATDeclareHandler(CATI2DLayoutClipping,CATBaseUnknown);

#endif
