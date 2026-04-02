#ifndef CAT2DPolygonGP_H
#define CAT2DPolygonGP_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
* @CAA2Level L1
* @CAA2Usage U1
*/

#include "CATViz.h"
#include "CATGraphicPrimitive.h"

class CATStreamer;

#ifndef NOFILL
/** @nodoc */
#define NOFILL 0
/** @nodoc */
#define FILL   1
#endif

/**
* Class to create the graphic primitive of a 2D polygon.
* <b>Role</b>: <pre>
*           Example of a CAT2DPolygon with 4 points :
*
*             point 1 X--------------------X point 2
*                     |                    |
*                     |                    |
*             point 4 X--------------------X point 3
*              </pre>
*/
class ExportedByCATViz CAT2DPolygonGP : public CATGraphicPrimitive
{
  CATDeclareClass;

public :

  /**
  * Default constructor.
  */
  CAT2DPolygonGP ();

  /**
  * Constructs a 2D polygon graphic primitive from a list of points.
  * The last point is linked to the first point.
  * @param iPoints
  *   Array containing the x, y  coordinates for
  *   each point of the polygon. Its size is equal
  *   to two times the number of points. So, the coordinates
  *   x, y of the first point are respectively stored in iPoints[0], and  iPoints[1],
  *   the coordinates x, y of the second point, in iPoints[2], iPoints[3], and so on...
  * @param iNbPoints
  *   The number of points used to define the polygon.
  * @param iFill
  *	the integer which allows to construct a 2D polygon
  *	just with edges or filled with graphic attributes.
  *	<br><b>legal values</b>: 
  *	<ul><li>NOFILL : just edges are drawn.</li>
  *	<li>FILL : the 2D circle arc or the 2D circle is filled
  *				with graphic attributes.</li></ul>
  *	The default value is FILL.
  */
  CAT2DPolygonGP (const float iPoints[], const int iNbPoints, const int iFill = FILL);


  /** @nodoc */
  CAT2DPolygonGP (const int nbContour, const int *NbOfPtPerContour, const float *Coord);

  /**
  * Draws the 2D line.
  * @param iRender
  *    The render through which the 2D polygon is drawn.
  */
  virtual void Draw (CATRender & iRender);   

  /**
  * Retrieves polygon parameters.
  * @param oPoints
  *   Array containing the x, y  coordinates for
  *   each point of the polygon. Its size is equal
  *   to two times the number of points. So, the coordinates
  *   x, y of the first point are respectively stored in iPoints[0], and  iPoints[1],
  *   the coordinates x, y of the second point, in iPoints[2], iPoints[3], and so on...
  * @param oNbPoint
  *   The number of points used to define the polygon.
  * @param oFill
  *	the integer which allows to construct a 2D polygon
  *	just with edges or filled with graphic attributes.
  *	<br><b>legal values</b>: 
  *	<ul><li>NOFILL : just edges are drawn.</li>
  *	<li>FILL : the 2D circle arc or the 2D circle is filled
  *				with graphic attributes.</li></ul>
  * @param oNbTriangle
  *	The number of group of triangles which compose the 2D polygon after the tesselation.
  * @param oType
  *	Array which contain the type of each group of triangles.
  *	<br><b>legal values</b>:
  *	<ul>
  *		<li>0 : single triangles</li>
  *		<li>1 : triangle strip</li>
  *		<li>2 : triangle fan</li>
  *		<li>4 : same as 0</li>
  *		<li>5 : same as 1</li>
  *		<li>6 : same as 2</li>
  *	</ul>
  *	Its size is equal to <tt>oNbTriangles</tt>.
  * @param oTriangles
  *	Array which contain the number of vertex for each group of triangles.
  *	Its size is equal to <tt>oNbTriangles</tt>.
  * @param oVertex
  *	Array of indices of vertex which compose the 2D polygon.<br>
  *	This array is composed of various arrays which represent one group of triangles.
  *	And each group of triangles have a type defined by the array "oType".
  *	<ul>
  *	<li>
  *		If the group is made of single triangles, indices are written 
  *		like in the following sample :
  *	<pre>
  *	1              4
  *	|\           /|
  *	| \         / |
  *	|  \       /  |
  *	|   \     /   |
  *	|____\   /____|
  *	2     3  5    6  
  *	</pre>
  *	</li>
  *	<li>
  *		if the group is a triangle strip, indices are written like in the following sample :
  *	<pre>
  *	1     3      4
  *	-------------
  *	\     |\     |\
  *	 \    | \    | \
  *	  \   |  \   |  \
  *	   \  |   \  |   \
  *	    \ |    \ |    \
  *	     \|_____\|_____\
  *	      2      5       6
  *	</pre>
  *	</li>
  *	<li>
  *		if the group is a triangle fan, indices are written like in the following sample :
  *	<pre>
  *	2      1
  *	 _______    
  *	|     /|\
  *	|    / | \
  *	|   /  |  \
  *	|  /   |   \
  *	| /    |    \
  *	|/_____|_____\
  *	3      4      5
  *	</pre>
  *	</li>
  *	</ul>
  */
  inline void Get (float **oPoints, int *oNbPoint, int *oFill,
    int * oNbTriangle, int ** oType, int ** oTriangles,
    int ** oVertex) const;

  /**
  * Returns whether or not the 2D polygon is filled.
  */
  inline int IsFilled();

  /** @nodoc */
  virtual void GetContour(int* nbContour, int** nbPtPerContour);

  /**
  * @nodoc
  * Streaming
  */
  virtual void Stream(CATStreamer& oStr,int iSavetype=0);

  /**
  * @nodoc
  * Streaming
  */  
  virtual void UnStream(CATStreamer& iStr);

  /**
  * @nodoc
  */
  virtual int DetailCulling(CATRender *render);



protected :

  virtual ~CAT2DPolygonGP();

  //--------------------------------------------------------------------------------

private :

  float *_points;
  int   *_type, *_triangle, *_vertex;
  int   _nb_points, _nb_triangle;
  int   _fill;

};

//--------------------------------------------------------------------------------

inline void CAT2DPolygonGP::Get(float **points, int *nb_points, int *fill, int *nb_triangle, int **type, int **triangle, int **vertex) const
{
  *points    = _points;
  *nb_points = _nb_points;
  *fill      = _fill;

  *nb_triangle = _nb_triangle;
  *type        = _type;
  *triangle    = _triangle;
  *vertex      = _vertex;
}

inline int CAT2DPolygonGP::IsFilled()
{
  return _fill;
}

#endif
