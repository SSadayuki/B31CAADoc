#ifndef CAT2DPointRep_H
#define CAT2DPointRep_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


#include "CATViz.h"

#include "CAT2DRep.h"
#include "CAT2DMarkerGP.h"


/**
* Class to create a representation of a 2D Point.
* In fact, it is a 2D Marker composed of one symbol.
* It can be a point but it is not necessary.
* A 2D Marker has a fixed zoom. Its size in pixel does not change.
*/
class ExportedByCATViz CAT2DPointRep : public CAT2DRep
{
 friend class CATDmuStream2DPointRep;
 CATDeclareClass;

 public:

/**
* Default Constructor.
*/
  CAT2DPointRep ();

/**
* Constructs a 2D Point representation.
* @param iPoint
*	The position of the symbol which compose the 2D Point.
* @param iSymbol
*	the type of 2D Point.
*	<br><b>legal values</b>:
*	<ul>
*	<li> CROSS : a cross which looks like a "X".</li>
*	<li> PLUS : a cross which looks like a "+"</li>
*	<li> CONCENTRIC : an unfilled circle</li>
*	<li> COINCIDENT : two unfilled concentric circles</li>
*	<li> FULLCIRCLE : a filled circle</li>
*	<li> FULLSQUARE : a filled square</li>
*	<li> STAR : a star which is the union of a 2D marker CROSS ,a 2D marker PLUS and a 2D marker DOT</li>
*	<li> DOT : a dot </li>
*	<li> SMALLDOT : a smalldot (one pixel)</li>
*	<li> MISC1 : a kind of arrow which points to the bottom-left
*	<pre>
*	     /
*	|  /
*	|/__
*	</pre>
*	</li>
*	<li> MISC2 : a kind of arrow which points to the top-rigth
*	<pre>
*	    ___ 	
*	      /|
*	    /  |
*	  /
*	</pre>
*	</li>
*	<li> FULLCIRCLE2 : a big FULLCIRCLE</li>
*	<li> FULLSQUARE2 : a big FULLSQUARE</li>
*	</ul>
*	<br>By default, the 2D Point represents a CROSS.
*/
  CAT2DPointRep (const CATMathPoint2Df &iPoint, CATSymbolType iSymbol = CROSS);

  
/**
* @nodoc : deprecated constructor.
*/
  CAT2DPointRep (const CATMathPoint2Df &point, CATSymbolType symbol, CATModelIdentificator &iModelid, CATVisuController *iCntl=NULL);
  
  virtual ~CAT2DPointRep();

/** 
* Modifies the position of the 2D Point.
* @param iPoint
*	the position of the 2D point.
*/
  void Modify (const CATMathPoint2Df &iPoint);

/**
* Sets the symbol of the 2D point.
* @param iSymbol
*	<br><b>legal values</b>:
*	<ul>
*	<li> CROSS : a cross which looks like a "X".</li>
*	<li> PLUS : a cross which looks like a "+"</li>
*	<li> CONCENTRIC : an unfilled circle</li>
*	<li> COINCIDENT : two unfilled concentric circles</li>
*	<li> FULLCIRCLE : a filled circle</li>
*	<li> FULLSQUARE : a filled square</li>
*	<li> STAR : a star which is the union of a 2D marker CROSS ,a 2D marker PLUS and a 2D marker DOT</li>
*	<li> DOT : a dot </li>
*	<li> SMALLDOT : a smalldot (one pixel)</li>
*	<li> MISC1 : a kind of arrow which points to the bottom-left
*	<pre>
*	     /
*	|  /
*	|/__
*	</pre>
*	</li>
*	<li> MISC2 : a kind of arrow which points to the top-rigth
*	<pre>
*	    ___ 	
*	      /|
*	    /  |
*	  /
*	</pre>
*	</li>
*	<li> FULLCIRCLE2 : a big FULLCIRCLE</li>
*	<li> FULLSQUARE2 : a big FULLSQUARE</li>
*	</ul>
*/
  void SetSymbol (CATSymbolType iSymbol);

/**
* @nodoc .
*/
  virtual void DrawShading   (CATRender &, int);

 protected:

/**
* @nodoc.
*/
  void BuildPoint (const CATMathPoint2Df &point, CATSymbolType symbol);
 
/**
* @nodoc.
*/
  CAT2DMarkerGP *_geometrie;

};

#endif 









