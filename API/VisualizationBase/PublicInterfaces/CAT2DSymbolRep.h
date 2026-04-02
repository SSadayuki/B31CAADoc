#ifndef CAT2DSymbolRep_H
#define CAT2DSymbolRep_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


#include "CATViz.h"

#include "CAT2DRep.h"
#include "CATSymbolType.h"

class CAT2DSymbolGP;


/**
* Class to create a representation of a 2D Symbol.
*/  
class ExportedByCATViz CAT2DSymbolRep : public CAT2DRep
{
 public:

/**
* Default constructor.
*/
  CAT2DSymbolRep ();

/**
* Constructs a 2D symbol representation.
* @param iPoint
*	the position of the representation in a 2D space (in model coordinates).
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
*	<ul><li> 0 :
*		size is expressed in millimeters.</li>
*	<li> 1 :
*		size is expressed in model unit.</li>
*	</ul>
*/
  CAT2DSymbolRep (const CATMathPoint2Df &iPoint, const float iSize, CATSymbolType iSymbol, const int iZoom = 0);

  virtual ~CAT2DSymbolRep ();

 /**
 * @nodoc
 */
  virtual void DrawShading   (CATRender &, int);

/**
* Modifies the position of the 2D symbol.
* @param iPoint
*	the new position of the 2D symbol.
*/
  void Modify (const CATMathPoint2Df &iPoint);

 protected:

/**
* @nodoc
*/
  void BuildSymbol( const CATMathPoint2Df &point, const float size_in_mm, CATSymbolType symbol, const int zoom);
 /**
* @nodoc
*/ 
  CAT2DSymbolGP *_geometrie;

/**
* @nodoc
*/
  CATSymbolType _Symbol;

/**
* @nodoc
*/
  float _Size;

/**
* @nodoc
*/
  int _Zoom;
};

#endif 









