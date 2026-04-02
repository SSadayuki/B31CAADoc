/* -*-C++-*- */
#ifndef CATPRINTGENERATOR_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @CAA2Level L1
* @CAA2Usage U2
*/

#define CATPRINTGENERATOR_H
#include "CATPrintBase.h"
#include "CATBaseUnknown.h"
#include "CATPrintTextAttribute.h"
#include "CATPrintLineAttribute.h"
#include "CATPrintFillAttribute.h"
#include "CATPrintMarkerAttribute.h"
#include "CATPrintParameters.h"
#include "CATString.h"
#include "CATMathDef.h"
#include "list.h"

class CATPrintGroupProperties;
class CATPrintListPolygons;
class CATPrintParameters;
class CATPixelImage;
class CATDialog;
class CATDlgWindow;
class CATUnicodeString;
class CATFont;
class CATPrintPolyline;
class CATPrt2DElement;

/**
 * Text support inside generator.
 * @param CATPRINTTEXTSUPPORT_NONE
 *   No text is supported.
 * @param CATPRINTTEXTSUPPORT_DISCRETIZED
 *   All texts are discretized.
 * @param CATPRINTTEXTSUPPORT_EMBEDDED
 *   Texts characteristics like font are embedded.
 */
enum CATPrintTextSupport
{
  CATPRINTTEXTSUPPORT_NONE,
  CATPRINTTEXTSUPPORT_DISCRETIZED,
  CATPRINTTEXTSUPPORT_EMBEDDED
};

/**
 * Text clipping inside generator.
 * @param CATPRINTTEXTCLIPPING_NONE
 *   No text clipping is supported.
 * @param CATPRINTTEXTCLIPPING_RECTANGLE
 *   Only rectangular text clippings are supported.
 * @param CATPRINTTEXTCLIPPING_POLYGON
 *   Polygonal text clippings are supported.
 */
enum CATPrintTextClipping
{
  CATPRINTTEXTCLIPPING_NONE,
  CATPRINTTEXTCLIPPING_RECTANGLE,
  CATPRINTTEXTCLIPPING_POLYGON
};

/**
 * Text clipping state inside generator.
 * @param CATPrintClipping_OUTSIDE
 *   Outside clipping result.
 * @param CATPrintClipping_PARTIALLY_INSIDE
 *   Partially inside clipping result.
 * @param CATPrintClipping_INSIDE
 *   Inside clipping result.
 * @param CATPrintClipping_ERROR
 *   Error clipping result.
 */
enum CATPrintClipping_State
{
  CATPrintClipping_OUTSIDE,
  CATPrintClipping_PARTIALLY_INSIDE,
  CATPrintClipping_INSIDE,
  CATPrintClipping_ERROR
};

/**
* Base class to write generators and usually printer drivers.
* <br>
* <b>Role</b>: Derive from this class and override low-level methods to 
* generate drawing primitives in the desired language.
* <br>Printing is done through calls of high-level methods in user coordinates which 
* are in turn converted in low-level methods calls in device coordinates (note that
* the unit is always the millimeter). 
* <br><br>For instance, when plotting at scale 5, a high-level call :
* <br>      generator->DrawLine(0, 0, 5, 10);    // User coordinates
* <br>will be converted in the sequence
* <br>      generator->DrvMoveTo(0, 0);
* <br>      generator->DrvLineTo(25, 50);        // Device coordinates
* <br>and so one, even for more complex operations (such as text discretization).
*
* <br><br>The following low-level methods must be overridden :
*         @href #DrvBegin, @href #DrvEnd, @href #DrvFormFeed, @href #DrvDefineColor, 
*         @href #DrvSelectDrawColor, @href #DrvSetDrawWidth, @href #DrvMoveTo, @href #DrvLineTo,
*         @href #DrvSelectFillColor, @href #DrvFillArea, @href #DrvDrawBitmap.
* <br>Whereas the following can be overridden if needed :
*         @href #DrvDrawPolyline, @href #DrvDrawArcCircle, @href #DrvDrawArcEllipse, @href #DrvDrawPolyBezier, 
*         @href #DrvSetTextAttribute and @href #DrvDrawText.
*
* @see CATPrintDevice, CATPrintImage, CATPrintParameters
*/

class ExportedByCATPrintBase CATPrintGenerator : public CATBaseUnknown
{
  CATDeclareClass;
public:
  /**
  * Constructs a CATPrintGenerator of a given language.
  * @param iLanguage
  *   The generator language.
  */
  CATPrintGenerator(const CATString& iLanguage);
  virtual ~CATPrintGenerator();

  /**
  * Returns the name of the generated language.
  */
  const CATString& GetLanguage(void) const;

  /**
  * Converts from user coordinates to device coordinates.
  * @param ioX
  *   The x device coordinate from the x user coordinate.
  * @param ioY
  *   The y device coordinate from the y user coordinate.
  */
  virtual void  GetDeviceCoordinates(float& ioX, float & ioY) const;

  /** 
  * Returns current printing scale.
  */
  virtual float GetScale(void) const;

  /**
  * Returns current printing offset from the lower left corner of the sheet.
  * @param oX0
  *   The x offset of the sheet.
  * @param oY0
  *   The y offset of the sheet.
  */
  virtual void  GetOrigin(float& oX0, float& oY0) const;

  /**
  * Override this method to provide specific properties which can be stored and
  * read by the printer manager.
  */
  virtual CATBaseUnknown*  GetProperties(void);

  /**
  * Returns dialog used to fill specific properties.
  * @param oParent
  *   The parent dialog.
  */
  virtual CATDlgWindow*   GetPropertiesDialog(CATDialog* oParent);

  /**
  * @nodoc
  */ 
  int GetRotation() const;

  /**
  * @nodoc
  */
  int IsNurbsSupported();

  /**
  * @nodoc
  */
  virtual void GetPrintTextManagement(CATFont* iFont, const CATUnicodeString& iText, CATPrintTextSupport& oTextSupport, CATPrintTextClipping& oTextClipping);
  
  /**
  * Defines the size of the drawing area.
  * @param iWidth
  *   The width of the drawing area.
  * @param iHeight
  *   The height of the drawing area.
  */
  virtual void SetDrawingSize(float iWidth, float iHeight);

  /**
  * Defines the printing offset from the lower-left corner of the sheet.
  * @param iX0
  *   The x offset of the sheet.
  * @param iY0
  *   The y offset of the sheet.
  */
  virtual void SetOrigin(float iX0, float iY0);

  /**
  * Defines the plotting iScale.
  * @param iScale
  *   The plotting scale.
  */
  virtual void SetScale(float iScale);
  /**
  * Defines the plotting viewport (or clipping area) in user coordinates.
  * @param iX
  *   The x origin of the viewport.
  * @param iY
  *   The y origin of the viewport.
  * @param iWidth
  *   The width of the viewport.
  * @param iHeight
  *   The height of the viewport.
  */
  virtual void SetViewport(float iX, float iY, float iWidth, float iHeight);

  //
  // High-level API.
  //

  // Delimiters

  /**
  * Initializes generation with given parameters.
  * @param iParameters
  *   The generator parameters.
  */
  virtual void Begin(const CATPrintParameters& iParameters);

  /**
  * Initializes generation with given parameters.
  * @param iParameters
  *   The generator parameters.
  * @param iPageTitle
  *   First page title.  
  */
  virtual void Begin(const CATPrintParameters& iParameters, const CATUnicodeString& iPageTitle);

  /**
  * Terminates generation.
  */
  virtual void End(void);

  /**
  * Starts a new page with (eventually) new parameters.
  * @param iParameters
  *   Current printing parameters.  
  */
  virtual void StartNewPage(const CATPrintParameters& iParameters);

  /**
  * Starts a new page with (eventually) new parameters.
  * @param iParameters
  *   Current printing parameters.  
  * @param iPageTitle
  *   New page title.  
  */
  virtual void StartNewPage(const CATPrintParameters& iParameters, const CATUnicodeString& iPageTitle);

  /**
  * @nodoc
  */
  virtual void StartNewPage(void);

  /**
  * @nodoc : deprecated V5R16
  * Begins a group of primitives.
  * The signature of the method has been changed to manage the id as an unicode string
  * @param iId
  *   The id of the group.
  */
  virtual void BeginGroup(int iId);

  /**
  * Begins a group of primitives.
  * @param iId
  *   The id of the group.
  */
  virtual void BeginGroup(const CATUnicodeString& iId);

  /**
  * Ends current group of primitives.
  */
  virtual void EndGroup(void);

  /**
  * Begins a closed figure.
  */
  virtual void BeginClosedFigure(void);

  /**
  * Begins a new region inside the closed figure.
  */
  virtual void StartNewRegion(void);

  /**
  * Ends current closed figure.
  */
  virtual void EndClosedFigure(void);

  /**
  * Begins a clipping of the image from the polygon.
  * @param iNpoints
  *   The number of points in the polygon.
  * @param iCoord
  *   The array of 2*<tt>iNpoints</tt> floats giving the coordinates of the points.
  */
  virtual void BeginDrawScissor(int iNpoints, const float* iCoord);

  /**
  * Ends the clipping the image from the polygon.
  */
  virtual void EndDrawScissor(void);


  // Graphic primitives

  /**
  * Moves the pen to (iX, iY) coordinates without drawing.
  * @param iX
  *   The x coordinate to move to.
  * @param iY
  *   The y coordinate to move to.
  */
  virtual void MoveTo(float iX, float iY);

  /**
  * Draws a line from the current pen position to (iY, iY) with current draw color,
  * line style and line width.
  * @param iX
  *   The x coordinate to draw to.
  * @param iY
  *   The y coordinate to draw to.
  */
  virtual void LineTo(float iX, float iY);

  /**
  * Draws a line between (iX0, iY0) and (iX1, iY1) with current draw color,
  * line style and line width.
  * @param iX0
  *   The x coordinate of the first point.
  * @param iY0
  *   The y coordinate of the first point.
  * @param iX1
  *   The x coordinate of the second point.
  * @param iY1
  *   The y coordinate of the second point.
  */
  virtual void DrawLine(float iX0, float iY0, float iX1, float iY1);

  /**
  * Draws a polyline with current draw color, line style and line width.
  * @param iNpoints
  *   The number of points in the polyline.
  * @param iCoord
  *   The array of 2*<tt>iNpoints</tt> floats giving the coordinates of the points.
  */
  virtual void DrawPolyline(int iNpoints, const float* iCoord);

  /**
  * Draws disjoint a polyline with current draw color, line style and line width.
  * @param iNpoints
  *   The number of points in the polyline.
  * @param iCoord
  *   The array of 2*<tt>iNpoints</tt> floats giving the coordinates of the points.
  */
  virtual void DrawDisjointPolyline(int iNpoints, const float* iCoord);

  /**
  * Draws a circle arc with current draw color, line style and line width.
  * @param iX0
  *   The center x coordinate of the arc.
  * @param iY0
  *   The center y coordinate of the arc.
  * @param iRadius
  *   The radius of the arc.
  * @param iStartAngle
  *   The start angle of the arc in radians. 
  *   <br><b>Legal values</b>: The default is 0.
  * @param iEndAngle
  *   The end angle of the arc in radians.
  *   <br><b>Legal values</b>: The default is <tt>CAT2PI</tt>
  * @param iFill
  *   The filling mode of the arc.
  *   <br><b>Legal values</b>: 1 to fill the arc (chord-style), 0 to draw the outline only. 0 is the
  *   default.
  */
  virtual void DrawArcCircle(float iX0, float iY0, float iRadius, 
    float iStartAngle = 0.f, float iEndAngle = CAT2PI, int iFill = 0);

  /**
  * Draws an ellipse arc with current draw color, line style and line width.
  * @param iX0, iY0
  *   The center coordinates of the arc.
  * @param iHradius
  *   The horizontal radius.
  * @param iVradius
  *   The vertical radius.
  * @param iStartAngle, iEndAngle
  *   The start and end angles of the arc (radians).
  * @param iSlope
  *   The angle between the largest axis of the ellipse and the horizontal.
  *   <br><b>Legal values</b>:  The default is 0.
  * @param iFill
  *   The filling mode of the arc.
  *   <br><b>Legal values</b>: 1 to fill the arc (chord-style), 0 to draw the outline only. 0 is the
  *   default.
  */
  virtual void DrawArcEllipse(float iX0, float iY0, float iHradius, float iVradius, 
    float iStartAngle = 0.f, float iEndAngle = CAT2PI, float iSlope = 0.f, int iFill = 0);

  /**
  * Draws a polybezier curve of order 3 with current draw color, line style and line width.
  * @param iNpoints
  *   The number of points defining the polybezier.
  * @param iCoord
  *   The array of 2*<tt>iNpoints</tt> floats giving the coordinates of the points.
  */
  virtual void DrawPolyBezier(int iNpoints, const float *iCoord);

  /**
  * Draws a polybezier curve of order 2 with current draw color, line style and line width.
  * @param iNpoints
  *   The number of points defining the polybezier.
  * @param iCoord
  *   The array of 2*<tt>iNpoints</tt> floats giving the coordinates of the points.
  */
  virtual void DrawPolyQuadraticBezier(int iNpoints, const float *iCoord);

  /**
  * @nodoc
  */
  virtual void DrawNurbs(const int iOrder, const float *iControls, const int iNb_controls, const float *iNodes, const int iNb_nodes, const float iStart_param, const float iEnd_param, const float *iWeights);

  /**
  * Fills a polypolygon with current fill color using the even/odd method.
  * @param iNoutlines
  *   The number of polygons in the polypolygon.
  * @param iNcorners
  *   The array of <tt>iNOutlines</tt> integers giving the number of corners in each polygon.
  * @param iCoord
  *   The array of floats giving the coordinates of alls corners of each polygon.
  */
  virtual void FillArea(int iNoutlines, const int* iNcorners, const float* iCoord);

  /**
  * Fills a simple area with current fill color using the even/odd method.
  * @param iNcorners
  *   The number of corners in the polygon.
  * @param iCoord
  *   The array of 2*<tt>iNcorners</tt> floats giving the coordinates of the corners.
  */
  virtual void FillPolygon(int iNcorners, const float* iCoord);

  /**
  * Draws a polypolygon with current fill color and the using the even/odd method,
  * the edge color is the draw color if needed.
  * @param iNoutlines
  *   The number of polygons in the polypolygon.
  * @param iNcorners
  *   The array of <tt>iNOutlines</tt> integers giving the number of corners in each polygon.
  * @param iCoord
  *   The array of floats giving the coordinates of alls corners of each polygon.
  */
  virtual void DrawPolyPolygon(int iNoutlines, const int* iNcorners, const float* iCoord);

  /**
  * Draws a simple area with current fill color and the using the even/odd method,
  * the edge color is the draw color if needed.
  * @param iNcorners
  *   The number of corners in the polygon.
  * @param iCoord
  *   The array of 2*<tt>iNcorners</tt> floats giving the coordinates of the corners.
  */
  virtual void DrawPolygon(int iNcorners, const float* iCoord);

  /**
  * Fills a rectangle between (iX0, iY0) to (iX1, iY1) with current fill color.
  * @param iX0
  *   The x coordinate of the first point.
  * @param iY0
  *   The y coordinate of the first point.
  * @param iX1
  *   The x coordinate of the second point.
  * @param iY1
  *   The y coordinate of the second point.
  */
  virtual void FillRectangle(float iX0, float iY0, float iX1, float iY1);

  /**
  * Draws a bitmap at the given position with the given orientation.
  * @param iX
  *   The x coordinate of the lower left corner of the bitmap.
  * @param iY
  *   The y coordinate of the lower left corner of the bitmap.
  * @param iOrientation
  *   The bitmap rotation.
  *   <br><b>Legal values</b>: 0->0 deg, 1->90 deg, 2->180 deg, 3->270 deg.
  * @param iPixelImage
  *   The pointer to a CATPixelImage object.
  */
  virtual void DrawBitmap(float iX, float iY, int iOrientation, const CATPixelImage* iPixelImage);

  /**
  * Draws a text at given coordinates.
  * @param iX
  *   The x coordinate of the anchor point.
  * @param iY
  *   The y coordinate of the anchor point.
  * @param iText
  *   The text to draw.
  */
  virtual void DrawGeometricText(float iX, float iY, const CATUnicodeString& iText);

  /**
  * Draws a marker at given coordinates.
  * @param iX
  *   The x coordinate of the anchor point.
  * @param iY
  *   The y coordinate of the anchor point.
  * @param iMarker
  *   The type of marker. See <tt>CATPrintMarkerAttribute</tt> for available marker attribute.
  * @param iSize
  *   The size of the marker. 
  *   <br><b>Legal values</b>: Defaut is 0, then uses the standard size.
  */
  virtual void DrawMarker(float iX, float iY, CATPrintMarkerAttribute iMarker, float iSize = 0.0);

  /**
  * Draw the edge closing the closed figure.
  */
  virtual void DrawConnectingEdge(void);


  // Graphic primitives attributes

  /**
  * Defines a color in the palette in rgb coordinates.
  * @param iIndex
  *   The index in the color table.
  *   <br><b>Legal values</b>: Between 0 and 255.
  * @param iRed 
  *   The red color in RGB coordinates.
  *   <br><b>Legal values</b>: Between 0 and 1.
  * @param iGreen
  *   The green color in RGB coordinates.
  *   <br><b>Legal values</b>: Between 0 and 1.
  * @param iBlue
  *   The blue color in RGB coordinates.
  *   <br><b>Legal values</b>: Between 0 and 1.
  */
  virtual void DefineColor(int iIndex, float iRed, float iGreen, float iBlue);

  /**
  * Selects the current drawing color.
  * @param iIndex
  *   The index of the current drawing color.
  *   <br><b>Legal values</b>: Between 0 and 255.
  */
  virtual void SelectDrawColor(int iIndex);

  /**
  * @nodoc
  */   
  virtual void SetDrawColorTransparency(float iAlpha);

  /**
  * Selects the current fill mode.
  * @param iFillMode
  *   The current fill mode.
  *   <br><b>Legal values</b>: It can be set to either 
  *   <tt>CATPRINTFILL_EMPTY</tt> for empty fill mode, the closed primitive will not be filled,
  *   <tt>CATPRINTFILL_SOLID</tt> for solid fill mode, the closed primitives will be painted with the current fill color,
  *   <tt>CATPRINTFILL_PATTERN</tt> for pattern fill mode, the closed primitives will be painted with the current pattern.
  */
  virtual void SetFillMode(CATPrintFillMode iFillMode);

  /**
  * Selects the current edge mode.
  * @param iEdgeMode
  *   The current edge mode.
  *   <br><b>Legal values</b>: It can be set to either 
  *   <tt>CATPRINTEDGE_NONE</tt> for none edge, the closed primitive edges are not drawn,
  *   <tt>CATPRINTEDGE_SOLID</tt> for solid edge mode, the closed primitive edges are not drawn with the draw color.
  */
  virtual void SetEdgeMode(CATPrintEdgeMode iEdgeMode);

  /**
  * @nodoc
  */   
  virtual void SetPattern(const CATPixelImage* iPattern, float iPlanarS[4], float iPlanarT[4]);

  /**
  * Selects the current filling color.
  * @param iIndex
  *   The index of the current filling color.
  *   <br><b>Legal values</b>: Between 0 and 255.
  */
  virtual void SelectFillColor(int iIndex);

  /**
  * @nodoc
  */   
  virtual void SetFillColorTransparency(float iAlpha);

  /**
  * Selects the current draw width.
  * @param iWidth
  *   The current draw width. 
  */
  virtual void SetDrawWidth(float iWidth);

  /**
  * Selects the current line cap style.
  * @param iLineCap
  *   The current line cap style.
  *   <br><b>Legal values</b>: It can be set to either 
  *   <tt>CATPRINTLINE_ENCAP_FLAT</tt> for flat cap style,
  *   <tt>CATPRINTLINE_ENCAP_SQUARE</tt> for square cap style,
  *   <tt>CATPRINTLINE_ENCAP_ROUND</tt> for round cap style.
  */
  virtual void SetLineCap(CATPrintLineAttribute iLineCap);

  /**
  * Selects the current line join style.
  * @param iLineJoin
  *   The current line join style.
  *   <br><b>Legal values</b>: It can be set to either 
  *   <tt>CATPRINTLINE_JOIN_MITER</tt> for miter join style,
  *   <tt>CATPRINTLINE_JOIN_ROUND</tt> for round join style,
  *   <tt>CATPRINTLINE_JOIN_BEVEL</tt> for bevel join style.
  */
  virtual void SetLineJoin(CATPrintLineAttribute iLineJoin);

  /**
  * Selects the current line style.
  * @param iType
  *   The current line style.
  *   <br><b>Legal values</b>: It can be set to either 
  *   <tt>CATPRINTLINE_SOLID</tt> for solid line style,
  *   <tt>CATPRINTLINE_DOT</tt> for dot line style, 
  *   <tt>CATPRINTLINE_DASH</tt> for dash line style,
  *   <tt>CATPRINTLINE_DASHDOT</tt> for dashdot line style,
  *   <tt>CATPRINTLINE_PHANTOM</tt> for phantom line style, 
  *   <tt>CATPRINTLINE_USER</tt> for user line style.
  * @param iPatternLength
  *   The length of the description for user line style. 
  *   <br><b>Legal values</b>: The default is 0.
  * @param iDescription
  *   The description for user line style.                 
  */
  virtual void SetLineStyle(CATPrintLineAttribute iType, float iPatternLength = 0.0, const float* iDescription = NULL);

  /**
  * @nodoc
  */
  virtual void SetLineStyle(int iType);

  /**
  * Defines current text attributes. Texts are drawn with current draw color.
  * @param iAttribute
  *   See <tt>CATPrintTextAttribute</tt> for available text attributes.
  * @param iValue
  *   See <tt>CATPrintTextAttribute</tt> for available text values corresponding to iAttribute.
  */
  virtual void SetTextAttribute(CATPrintTextAttribute iAttribute, float iValue);

  /**
  * Defines current text font.
  * @param iAttribute
  *   <b>Legal values</b>: It must be CATPRINTTEXT_TYPEFACE.
  * @param iFont
  *   See CATFont for more informations.
  */
  virtual void SetTextAttribute(CATPrintTextAttribute iAttribute, CATFont *iFont);

  /**
  * @nodoc
  */
  virtual void SetGroupProperties(CATPrintGroupProperties& properties);

  /**
  * Sets the polygon filling rule.
  * @param iFillRule
  *   The current polygon filling rule.
  *   <br><b>Legal values</b>: It can be set to either 
  *   <tt>CATPrintFill_EvenOdd</tt> for filling parts of polygon with odd winding number
  *   <tt>CATPrintFill_NonZero</tt> for filling parts of polygon with non-zero winding number
  */
  virtual void SetPolygonFillRule(CATPrintFillRule iFillRule);

protected:  

  /**
  * @nodoc
  */
  void SetNurbsSupport(int iNurbsSupport);

  /**
  * @nodoc
  */
  int IsClosedFigureSupported();

  /**
  * @nodoc
  */
  void SetClosedFigureSupport(int iClosedFigureSupport);

  /**
  * @nodoc
  */
  virtual float ComputeBSplineBase(const int iI, const int iK, const float iT, const float *iNodes);

  //
  // Low-level API
  //

  // Delimiters

  /**
  * Initializes generator with print parameters.
  * @param iParameters
  *   The generator parameters.
  */
  virtual void DrvBegin(const CATPrintParameters& iParameters) = 0;

  /**
  * Initializes generator with print parameters.
  * @param iParameters
  *   The generator parameters.
  * @param iPageTitle
  *   First page title.  
  */
  virtual void DrvBegin(const CATPrintParameters& iParameters, const CATUnicodeString& iPageTitle);

  /**
  * Terminates generation.
  */
  virtual void DrvEnd(void) = 0;

  /**
  * Starts a new page.
  */
  virtual void DrvFormFeed(void) = 0;

  /**
  * Starts a new page.
  * @param iPageTitle
  *   First page title.  
  */
  virtual void DrvFormFeed(const CATUnicodeString& iPageTitle);

  /**
  * @nodoc : deprecated V5R16
  * Begins a group of primitives.
  * The signature of the method has been changed to manage the id as an unicode string
  * @param iId
  *   The id of the group.
  */
  virtual void DrvBeginGroup(int iId);

  /**
  * Begins a group of primitives.
  * @param iId
  *   The id of the group.
  */
  virtual void DrvBeginGroup(const CATUnicodeString& iId);

  /**
  * Ends current group of primitives.
  */
  virtual void DrvEndGroup(void);

  /**
  * Begins a closed figure.
  */
  virtual void DrvBeginClosedFigure(void);

  /**
  * Begins a new region inside the closed figure.
  */
  virtual void DrvStartNewRegion(void);

  /**
  * Ends current closed figure.
  */
  virtual void DrvEndClosedFigure(void);


  // Graphic primitives

  /**
  * Moves the pen to (iX, iY) in device coordinates without drawing.
  * @param iX
  *   The x coordinate to move to.
  * @param iY
  *   The y coordinate to move to.
  */
  virtual void DrvMoveTo(float iX, float iY) = 0;
  /**
  * Draws a line from the current pen position to (iX, iY) in device coordinates with current draw color,
  * line type and draw width.
  * @param iX
  *   The x coordinate to draw to.
  * @param iY
  *   The y coordinate to draw to.
  */
  virtual void DrvLineTo(float iX, float iY) = 0;

  /**
  * Draws a polyline with current draw color, line style and line width.
  * @param iNpoints
  *   The number of points in the polyline.
  * @param iCoord
  *   The array of 2*<tt>iNpoints</tt> floats giving the coordinates of the points.
  * @param iDisjoint
  *   Tells if the polyline is disjoint or not
  */
  virtual void DrvDrawPolyline(int iNpoints, const float* iCoord, const int iDisjoint);

  /**
  * Draws a circle arc in device coordinates  with current draw color, line style and line width.
  * @param iX0
  *   The x center coordinates of the arc.
  * @param iY0
  *   The y center coordinates of the arc.
  * @param iRadius
  *   The radius of the arc.
  * @param iStartAngle
  *   The start angle of the arc in radians. 
  * @param iEndAngle
  *   The end angle of the arc in radians.
  * @param iFill
  *   The filling mode of the arc.
  */
  virtual void DrvDrawArcCircle(float iX0, float iY0, float iRadius, float iStartAngle, float iEndAngle, int iFill);

  /**
  * Draws an ellipse arc in device coordinates with current draw color, line style and line width.
  * @param iX0
  *   The x center coordinates of the arc.
  * @param iY0
  *   The y center coordinates of the arc.
  * @param iHradius
  *   The horizontal radius.
  * @param iVradius
  *   The vertical radius.
  * @param iStartAngle
  *   The start angle of the arc in radians.
  * @param iEndAngle
  *   The end angle of the arc in radians.
  * @param iSlope
  *   The angle between the largest axis of the ellipse and the horizontal.
  * @param iFill
  *   The filling mode of the arc.
  */
  virtual void DrvDrawArcEllipse(float iX0, float iY0, float iHradius, float iVradius, float iStartAngle, float iEndAngle, float iSlope, int iFill);

  /**
  * Draws a polybezier curve of order 3 in device coordinates with current draw color, line style and line width.
  * @param iNpoints
  *   The number of points defining the polybezier.
  * @param iCoord
  *   The array of 2*<tt>iNpoints</tt> floats giving the coordinates of the points.
  */   
  virtual void DrvDrawPolyBezier(int iNpoints, const float *iCoord);

  /**
  * Draws a polybezier curve of order 2 with current draw color, line style and line width.
  * @param iNpoints
  *   The number of points defining the polybezier.
  * @param iCoord
  *   The array of 2*<tt>iNpoints</tt> floats giving the coordinates of the points.
  */
  virtual void DrvDrawPolyQuadraticBezier(int iNpoints, const float *iCoord);

  /**
  * @nodoc
  */
  virtual void DrvDrawNurbs(const int iOrder, const float *iControls, const int iNb_controls, const float *iNodes, const int iNb_nodes, const float iStart_param, const float iEnd_param, const float *iWeights);

  /**
  * Fills a polypolygon in device coordinates with current fill color.
  * @param iNoutlines
  *   The number of polygons in the polypolygon.
  * @param iNcorners
  *   The array of <tt>iNOutlines</tt> integers giving the number of corners in each polygon.
  * @param iCoord
  *   The array of floats giving the coordinates of alls corners of each polygon.
  */
  virtual void DrvFillArea(int iNoutlines, const int* iNcorners, const float* iCoord) = 0;

  /**
  * Draws a polypolygon with current fill color and the using the even/odd method,
  * the edge color is the draw color if needed.
  * @param iNoutlines
  *   The number of polygons in the polypolygon.
  * @param iNcorners
  *   The array of <tt>iNOutlines</tt> integers giving the number of corners in each polygon.
  * @param iCoord
  *   The array of floats giving the coordinates of alls corners of each polygon.
  */
  virtual void DrvDrawPolyPolygon(int iNoutlines, const int* iNcorners, const float* iCoord);

  /**
  * Draws a simple area with current fill color and the using the even/odd method,
  * the edge color is the draw color if needed.
  * @param iNcorners
  *   The number of corners in the polygon.
  * @param iCoord
  *   The array of 2*<tt>iNcorners</tt> floats giving the coordinates of the corners.
  */
  virtual void DrvDrawPolygon(int iNcorners, const float* iCoord);

  /**
  * Draws a bitmap in device coordinates at the given position.
  * @param iX
  *   The x coordinates of the lower left corner of the bitmap.
  * @param iY
  *   The y coordinates of the lower left corner of the bitmap.
  * @param iPixelImage
  *   The pointer to a CATPixelImage object.
  */
  virtual void DrvDrawBitmap(float iX, float iY, const CATPixelImage* iPixelImage) = 0;

  /**
  * Draws text in device coordinates.
  * @param iX
  *   The x coordinate of the anchor point.
  * @param iY
  *   The y coordinate of the anchor point.
  * @param iText
  *   The text to draw.
  */
  virtual void DrvDrawText(float iX, float iY, const CATUnicodeString& iText); 

  /**
  * Draw the edge closing the closed figure.
  */
  virtual void DrvDrawConnectingEdge(void);


  // Graphic primitives attributes

  /**
  * Defines a color in the palette in rgb coordinates.
  * @param iIndex
  *   The index in the color table.
  *   <br><b>Legal values</b>: Between 0 and 255.
  * @param iRed
  *   The red color in RGB coordinates.
  *   <br><b>Legal values</b>: Between 0 and 1.
  * @param iGreen
  *   The green color in RGB coordinates.
  *   <br><b>Legal values</b>: Between 0 and 1.
  * @param iBlue
  *   The blue color in RGB coordinates.
  *   <br><b>Legal values</b>: Between 0 and 1.
  */
  virtual void DrvDefineColor(int iIndex, float iRed, float iGreen, float iBlue) = 0;
  /**
  * Selects the current drawing color.
  * @param iIndex
  *   The index of the current drawing color.
  *   <br><b>Legal values</b>: Between 0 and 255.
  */
  virtual void DrvSelectDrawColor(int iIndex) = 0;

  /**
  * @nodoc
  */
  virtual void DrvSetDrawColorTransparency(float iAlpha);

  /**
  * Selects the current fill mode.
  * @param iFillMode
  *   The current fill mode.
  *   <br><b>Legal values</b>: It can be set to either 
  *   <tt>CATPRINTFILL_EMPTY</tt> for empty fill mode, the closed primitive will not be filled,
  *   <tt>CATPRINTFILL_SOLID</tt> for solid fill mode, the closed primitives will be painted with the current fill color,
  *   <tt>CATPRINTFILL_PATTERN</tt> for pattern fill mode, the closed primitives will be painted with the current pattern.
  */
  virtual void DrvSetFillMode(CATPrintFillMode iFillMode);

  /**
  * Selects the current edge mode.
  * @param iEdgeMode
  *   The current edge mode.
  *   <br><b>Legal values</b>: It can be set to either 
  *   <tt>CATPRINTEDGE_NONE</tt> for none edge, the closed primitive edges are not drawn,
  *   <tt>CATPRINTEDGE_SOLID</tt> for solid edge mode, the closed primitive edges are not drawn with the draw color.
  */
  virtual void DrvSetEdgeMode(CATPrintEdgeMode iEdgeMode);

  /**
  * @nodoc
  */
  virtual void DrvSetPattern(const CATPixelImage* iPattern, float iPlanarS[4], float iPlanarT[4]);

  /**
  * Selects the current filling color.
  * @param iIndex
  *   The index of the current filling color.
  *   <br><b>Legal values</b>: Between 0 and 255.
  */
  virtual void DrvSelectFillColor(int iIndex) = 0;

  /**
  * @nodoc
  */
  virtual void DrvSetFillColorTransparency(float iAlpha);

  /**
  * Selects the current draw width.
  * @param iWidth
  *   The current draw width. 
  */
  virtual void DrvSetDrawWidth(float iWidth) = 0;

  /**
  * Selects the current line cap style.
  * @param iLineCap
  *   The current line cap style.
  *   <br><b>Legal values</b>: It can be set to either 
  *   <tt>CATPRINTLINE_ENCAP_FLAT</tt> for flat cap style,
  *   <tt>CATPRINTLINE_ENCAP_SQUARE</tt> for square cap style,
  *   <tt>CATPRINTLINE_ENCAP_ROUND</tt> for round cap style.
  */
  virtual void DrvSetLineCap(CATPrintLineAttribute iLineCap);

  /**
  * Selects the current line join style.
  * @param iLineJoin
  *   The current line join style.
  *   <br><b>Legal values</b>: It can be set to either 
  *   <tt>CATPRINTLINE_JOIN_MITER</tt> for miter join style,
  *   <tt>CATPRINTLINE_JOIN_ROUND</tt> for round join style,
  *   <tt>CATPRINTLINE_JOIN_BEVEL</tt> for bevel join style.
  */
  virtual void DrvSetLineJoin(CATPrintLineAttribute iLineJoin);

  /**
  * Selects the current line style.
  * @param iType
  *   The current line style.
  *   <br><b>Legal values</b>: It can be set to either 
  *   <tt>CATPRINTLINE_SOLID</tt> for solid line style,
  *   <tt>CATPRINTLINE_DOT</tt> for dot line style, 
  *   <tt>CATPRINTLINE_DASH</tt> for dash line style,
  *   <tt>CATPRINTLINE_DASHDOT</tt> for dashdot line style,
  *   <tt>CATPRINTLINE_PHANTOM</tt> for phantom line style, 
  *   <tt>CATPRINTLINE_USER</tt> for user line style.
  * @param iPatternLength
  *   The length of the description for user line style. 
  *   <br><b>Legal values</b>: The default is 0.
  * @param iDescription
  *   The description for user line style.                 
  */
  virtual void DrvSetLineStyle(CATPrintLineAttribute iType, float iPatternLength = 0.0, const float* iDescription = NULL);

  /**
  * @nodoc
  */
  virtual void DrvSetLineStyle(int iType);

  /**
  * Defines text attributes. Texts are drawn with current draw color.
  * @param iAttribute
  *   See <tt>CATPrintTextAttribute</tt> for available text attributes.
  * @param iValue
  *   See <tt>CATPrintTextAttribute</tt> for available text values corresponding to iAttribute.
  */
  virtual void DrvSetTextAttribute(CATPrintTextAttribute iAttribute, float iValue);

  /**
  * Defines current text font.
  * @param iAttribute
  *   <b>Legal values</b>: It must be CATPRINTTEXT_TYPEFACE.
  * @param iFont
  *   See CATFont for more informations.
  */
  virtual void DrvSetTextAttribute(CATPrintTextAttribute iAttribute, CATFont *iFont);

  /**
  * @nodoc
  */
  virtual void DrvSetGroupProperties(CATPrintGroupProperties& properties);

  /**
  * Sets the polygon filling rule.
  * @param iFillRule
  *   The current polygon filling rule.
  *   <br><b>Legal values</b>: It can be set to either 
  *   <tt>CATPrintFill_EvenOdd</tt> for filling parts of polygon with odd winding number
  *   <tt>CATPrintFill_NonZero</tt> for filling parts of polygon with non-zero winding number
  */
  virtual void DrvSetPolygonFillRule(CATPrintFillRule iFillRule);

protected:

  //-------------------------------------------------------------
  //--- Toolbox
  //-------------------------------------------------------------

  /**
  * @nodoc
  */    
  void UpdateParameters(const CATPrintParameters& iParameters);
  /**
  * @nodoc
  */    
  void DisplayBanner(void);
  /**
  * @nodoc
  */ 
  void SortPolyline(float eps = 0.f);
  /**
  * @nodoc
  */ 
  int  IsAnguleux(const float iCoord[6], float* oSag);
  /**
  * @nodoc
  */ 
  int  IsHardPolyline(int iNpoints, const float* iCoord, float* oSag);
  /**
  * @nodoc
  */ 
  int  ConvertPolylineToConic(int iNpoints, const float* iCoord, float iSag=0.0);
  /**
  * @nodoc
  */ 
  int  ConvertPolylineToArcCircle(int iNpoints, const float* iCoord, float iSag=0.0);
  /**
  * @nodoc
  */ 
  void FillPatternPolygon(int iNOutlines, const int* iNCorners, const float* iCoord);
  /**
  * @nodoc
  */ 
  CATPrintGenerator & operator =(const CATPrintGenerator & generator);

  //--- Attributes
  /**
  * @nodoc
  */   
  CATPrintParameters _parameters;
  /**
  * @nodoc
  */   
  float _vpX0, _vpY0, _vpX1, _vpY1,       // viewport extent
    _x0, _y0;                         // origin
  /**
  * @nodoc
  */   	
  float  _scale,                          // scale
    _drawWidth, _drawHeight;         // draw width & height
  /**
  * @nodoc
  */   
  int   _rotation,                        // 0=0°, 1=90°, 2=180°, 3=270°, 4=best_rotation
    _pageNumber;                      // page number
  /**
  * @nodoc
  */             
  int    _clipping;                       // Clipping on/off
  /**
  * @nodoc
  */   
  CATFont *_font;
  /**
  * @nodoc
  */
  list<CATPrintPolyline> _listePolyline;
  /**
  * @nodoc
  */
  list<CATPrintPolyline> _listePolylineTri;
  /**
  * @nodoc
  */   
  int _currentDrawColor, _currentFillColor;
  /**
  * @nodoc
  */   
  float _currentDrawColorTransparency, _currentFillColorTransparency;
  /**
  * @nodoc
  */   
  float _lineWidth;
  /**
  * @nodoc
  */   
  CATPrintFillMode _fillMode;
  /**
  * @nodoc
  */   
  CATPrintEdgeMode _edgeMode;
  /**
  * @nodoc
  */   
  const CATPixelImage* _currentPattern;
  /**
  * @nodoc
  */   
  float _planarS[4];
  /**
  * @nodoc
  */   
  float _planarT[4];

  /**
  * @nodoc  Scissor Polygon
  */  
  int _scissorNbPoint;

  /**
  * @nodoc  Scissor Polygon
  */  
  float* _scissorPolygon;
  /**
  * @nodoc  Scissor Polygon
  */  
  CATPrintListPolygons* _pScissorPolygons;//_scissorPolygon is poitining the first element of _pScissorPolygons.

  /**
  * @nodoc  Polygon fill rule
  */  
  CATPrintFillRule _polygonFillRule;

private:

  CATPrintGenerator() {}
  CATPrintGenerator(const CATPrintGenerator& generator) { operator=(generator); }

  void GetPaperScissor(float paperScissor[10]);
  CATPrintClipping_State Clipping2D(CATPrt2DElement *elem, void* &oList);
  CATPrintClipping_State ClipPolyPolygon(int iNOutlines, const int* iNCorners, const float *iCoords, int& oNOutlines, int*& oNCorners, float*& oCoords);

  void DrawCurrentPolyline();
  void MoveToDrv(float iX, float iY);
  void LineToDrv(float iX, float iY);

  void MoveClosedFigureToDrv(float iX, float iY);
  void LineClosedFigureToDrv(float iX, float iY);

//void DrawBitmapPolylineForDBG(float iXCenter, float iYCenter, float iWidth, float iHeight);

  const CATString _language;
  float   _refWidth, _refHeight;
  double* _gamma;

  // Text attributes
  float _textHeight, _textExpansion, _textSpacing, _textOrientation, _textSlant;
  float _upAngle, _baseAngle;
  int   _textHJust, _textVJust, _textWeight, _textPitch, _textKerning, _textVersion;
  CATPrintTextAttribute _textTypeface, _textAlignment;

  // Line attributes
  float _drawLastX, _drawLastY;
  int _lineFontType, _lineDrawType;

  CATPrintLineAttribute _oldLineType;

  int _currentPolylineIndex, _currentPolylineSize;
  float *_currentPolyline;

  // Nurbs
  int _isNurbsSupported;

  // ClosedFigure
  int _isClosedFigureSupported;
  int _isClosedFigureState;


  // Closed Figure
  int _currentClosedFigurePolygonCount;
  int _currentClosedFigurePolygonCornerCountTabSize;
  int* _currentClosedFigurePolygonCornerCountTab;

  int _currentClosedFigurePolygonCornerCoordSize;
  int _currentClosedFigurePolygonCornerCoordCount;
  float* _currentClosedFigurePolygonCornerCoord;

  // Page title
  CATUnicodeString _pageTitle;

  CATBoolean _lineWidthToUpdate;
};

#endif









