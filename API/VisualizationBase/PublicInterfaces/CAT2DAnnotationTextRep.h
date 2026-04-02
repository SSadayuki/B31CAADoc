#ifndef CAT2DAnnotationTextRep_H
#define CAT2DAnnotationTextRep_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


#include "CATViz.h"
#include "CAT2DRep.h"
#include "CAT2DAnnotationTextGP.h"

class CATUnicodeString;
class CATMathPoint2Df;


/**
* Class to create a representation of a 2D annotation text.
* <b>Role</b>:
* These representations have not a continuous zoom. There are various possible 
* zoom values and current zoom is the zoom which is the nearest of possible zoom values.
*/
class ExportedByCATViz CAT2DAnnotationTextRep : public CAT2DRep
{
	CATDeclareClass;
 public:

/**
* Constructs a 2D annotation text Graphic primitive.
* @param iPoint
*	the position of the representation in a 2D space
* @param iString
*	the string of characters which composes the text of 
*	the 2DAnnotationTextRep
* @param iPosition
*	the position of <tt>iPoint</tt> with respect to string of the 2DAnnotationTextRep
*	<br><b>legal values</b>:<pre>
*   TOP_LEFT          TOP_CENTER       TOP_RIGHT
*            +------------+-----------+
*            !                        !
*            !        BASE_CENTER     !
*  BASE_LEFT +            +           + BASE_RIGHT
*            !                        !
*            +------------+-----------+
* BOTTOM_LEFT       BOTTOM_CENTER      BOTTOM_RIGHT</pre>
* @param iHeight
*	the height of the representation
	<br><b>legal values</b>: the default value is NULL.
* @param iContour
*	the integer which allows or does not allow to construct a contour around 
*	the representation.
*	<br><b>legal values</b>:<br>
*	0 : no contour is constructed around the graphic primitive.<br>
*	1 : a contour is constructed around the graphic primitive.
* @param iContour1
*	the graphic attribute which
*	defines graphic properties of top and left segments of the contour around
*	the representation.
*	<br><b>legal values</b>: the default value is NULL.
* @param iContour2
*	the graphic attribute which
*	defines graphic properties of bottom and right segments of the contour around
*	the representation.
*	<br><b>legal values</b>: the default value is NULL.
*/
CAT2DAnnotationTextRep (const float iPoint[2], const CATUnicodeString &iString, AnchorPoint iPosition = BASE_LEFT, const float iHeight = 0.f,
                          const int iContour =  0, const CATGraphicAttributeSet *iContour1 = NULL, const CATGraphicAttributeSet *iContour2 = NULL);
  
virtual ~CAT2DAnnotationTextRep ();


/**
* @nodoc
*/
virtual void DrawShading   (CATRender & iRender, int iInside);

//------------------------------------------------------------------------------

 protected:
/**
* Dynamic Graphic Primitive associated to Representation.
*/
  CAT2DAnnotationTextGP *_geometrie;
};

#endif 









