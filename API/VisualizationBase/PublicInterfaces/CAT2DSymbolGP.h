#ifndef CAT2DSymbolGP_H
#define CAT2DSymbolGP_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


#include "CATViz.h"

#include "CATDynamicGP.h"
#include "CATSymbolType.h"

class CATStreamer;

/**
* Class to create a dynamic graphic primitive of a 2D Symbol.
*/
class ExportedByCATViz CAT2DSymbolGP : public CATDynamicGP
{
 CATDeclareClass;

 public :

/**
* Constructs a default graphic primitive of a two dimensional symbol.
*/
   CAT2DSymbolGP ();

/**
* Constructs a 2D symbol Graphic primitive.
* @param iPoints
*	the position of the graphic primitive in a 2D space (in model coordinates).
* @param iSize
*	the size of the 2D symbol.
* @param iSymbol
*	the type of 2D Symbol.
*	<br><b>legal values</b>:
*	<ul>
*	<li>UNFILLED_CIRCLE : an unfilled circle</li>
*	<li>BLANKED_CIRCLE : a circle composed of an unfilled circle and a circle filled with the background color.</li>
*	<li>FILLED_CIRCLE : a filled circle.</li>
*	<li>CROSSED_CIRCLE : a BLANKED_CIRCLE symbol with a cross which looks like a "X".</li>
*	<li>BLANKED_SQUARE : a square composed of an unfilled square and a square filled with the background color.</li>
*	<li>FILLED_SQUARE : a filled square.</li>
*	<li>BLANKED_TRIANGLE : a triangle composed of an unfilled triangle and a triangle filled with the background color.</li>
*	<li>FILLED_TRIANGLE : a filled triangle.</li>
*	<li>MANIPULATOR_SQUARE : a square composed of a white unfilled square and a black filled square</li>
*	<li>MANIPULATOR_DIAMOND : a square rotated of 45 degrees  composed of a white unfilled square and a black filled square</li>
*	<li>MANIPULATOR_CIRCLE : a circle composed of a white unfilled circle and a black filled circle</li>
*	<li>MANIPULATOR_TRIANGLE : a triangle composed of a white unfilled triangle and a black filled triangle</li>
*	</ul>
* @param iZoom
*	the type of size values.
*	<br><b>legal values</b>: 
*	<ul><li>0 :
*		size is expressed in millimeters.</li>
*	<li>1 :
*		size is expressed in model unit.</li>
*	</ul>
*/
   CAT2DSymbolGP (const float iPoints[2], const float iSize, SymbolType iSymbol, const int iZoom = 0);


/** 
* Draws a 2D Symbol.
* @param iRender
*	the render used to draw the 2D Symbol.
* @param iViewpoint
*	the viewpoint used to draw the 2D Symbol.
* @param iViewport
*	the viewport used to draw the 2D Symbol.
*/
   virtual void ImmediateDraw (CATRender & iRender, const CATViewpoint * iViewpoint, const CATViewport * iViewport);   

/** @nodoc
 *  Streams the graphic primitive of a two dimensional symbol.
 * <br><b>Role:</b>This method streams a <tt>CAT2DSymbolGP</tt> .
 *  @param   oStr
 *    The streamer used to stream the <tt>CAT2DSymbolGP</tt>.
 *  @param   iSavetype
 *    <br><b>legal values</b>
 *    <ul>
 *         <li>0 the name of the GP will not be saved</li>
 *         <li>1 the name of the GP will be saved</li>
 *    </ul>
 */
   virtual void Stream(CATStreamer& oStr,int iSavetype=0);
   
/** @nodoc
 *  Unstreams the graphic primitive of a two dimensional symbol.
 * <br><b>Role:</b>This method unstreams a <tt>CAT2DSymbolGP</tt> .
 *  @param   iStr
 *    The streamer used to unstream the <tt>CAT2DSymbolGP</tt>.
 */
   virtual void UnStream(CATStreamer& iStr);

   /** @nodoc */ 
   virtual int DetailCulling(CATRender *iRender);

 protected :

   virtual ~CAT2DSymbolGP();
     
   int _zoom;
   float _points[2], _size;
   SymbolType _symbol;

};

#endif
