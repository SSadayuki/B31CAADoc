#ifndef CAT2DQuadStripGP_H
#define CAT2DQuadStripGP_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


#include "CATViz.h"
#include "CATGraphicPrimitive.h"


/**
* Class to create a dynamic graphic primitive of a 2D strip.
* <b>Role</b>: Each vertices of the 2D strip may each have a different color.
*/ 
class ExportedByCATViz CAT2DQuadStripGP : public CATGraphicPrimitive
{
 CATDeclareClass;
  
  public:

/**
* Constructs a 2D quadstrip dynamic graphic primitive.
* @param iPoints
*    Array of point coordinates: XYXYXY...
*    Its size is equal to two times the number of points.
* @param iNb_points
*	total number of points of the 2D quadstrip.
* @param iVertexcolors
*	Array of vertex colors : RGBRGBRGB....
*	Its size is equal to three times the number of points.
*/
    CAT2DQuadStripGP (const float iPoints[],
		      const int iNb_points,
		      const float iVertexcolors[]);
    
    
/**
* Draws the dynamic graphic primitive with a render.
* @param iRender
*	the render used to draw the dynamic graphic primitive.
*/
    virtual void Draw (CATRender & iRender);   
    
    
/**
* Retrieves data about the 2D Marker.
* @param oPoints
*    Array of point coordinates: XYXYXY...
*    Its size is equal to two times the number of points.
* @param oNb_point
*	total number of points of the 2D quadstrip.
* @param oVertexcolors
*	Array of vertex colors : RGBRGBRGB....
*	Its size is equal to three times the number of points.
*/
    inline void Get (float **oPoints, int *oNb_point, float **oVertexcolors) const;
    
    
  protected:
    
    virtual ~CAT2DQuadStripGP();
    
    
  private:
    
    float *_points;
    float *_vertexcolors;
    int   _nb_points;
                   
};




//******************************************************************************
//*** INLINED METHODS: *********************************************************
//******************************************************************************

    
inline void CAT2DQuadStripGP::Get (float **points,
				   int *nb_points,
				   float **vertexcolors) const
{
  *points       = _points;
  *nb_points    = _nb_points;
  *vertexcolors = _vertexcolors;
}


#endif
