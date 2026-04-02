#ifndef CAT3DViewport_H
#define CAT3DViewport_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


//
// CATIA Version 5 Release 1 Framework Visualization
// Copyright Dassault Systemes 1996
//------------------------------------------------------------------------------
// Abstract :   defines a 3D bounding object (n planes)
// ----------
//
//------------------------------------------------------------------------------
// Usage :      is used by viewer at draw time to define a box where
// ------       representations are supposed to be seen. 
//              (this is used at culling time to avoid to draw representations
//               which bounding sphere is outside of this box)
//
//------------------------------------------------------------------------------
// Class :      CAT3DViewport
// -------        CATViewport
//                  
//------------------------------------------------------------------------------
#include "CATViz.h"
#include "CATViewport.h"

#include "CAT3DBoundingSphere.h"

#include "CATMathPointf.h"
#include "CATMathVectorf.h"
#include "CATMathDirectionf.h"
#include "CAT4x4Matrix.h"

#ifdef _IRIX_SOURCE
 //Ia64+
#include "CATDataType.h"
//Ia64-
/** @nodoc */
extern CATINTPTR DrawMenb (int);
#endif

/**
 *
 * Class that defines a 2D clipping area.
 *
 */
class ExportedByCATViz CAT3DViewport : public CATViewport
{
 CATDeclareClass;

 public :

 /** @nodoc */
  CAT3DViewport ();
 /** @nodoc */
  CAT3DViewport(const CAT3DViewport &viewport);
 /** @nodoc */
  CAT3DViewport (const int, const float [], const float [], const float [], const float []);
 /** @nodoc */
  CAT3DViewport (const int, const CATMathPointf [], const CATMathDirectionf []);

   /**
    *  Affectation operator.
    *  @param viewport  A reference to3D the CAT3DViewport we want to copy  into this one.
    *  @return A reference to this CATViewport
    */
  CAT3DViewport & operator = (const CAT3DViewport &viewport);

  virtual ~CAT3DViewport ();

  /**
   *  Duplicates the Viewport.
   *  @return the copy of this CATViewport
   */
  virtual CATViewport *Clone() const;
  /**
   * Duplicate a Viewport.
   * @param iViewport A pointer to the pointer on the CATViewport into wich we want to duplicate this CATViewport.
   * @return A pointer to the Duplicated CATviewport
   */
  virtual CATViewport *Clone(CATViewport **) const;

  /** 
   * Add the clipping planes of one CAT3DViewport to this one.
   * @param iFrom the CAT3DViewport of which we add the clipping planes
   */
  CAT3DViewport & operator += (const CAT3DViewport &iFrom);
  /** 
   * Remove the clipping planes of one CAT3DViewport to this one.
   * @param iFrom the CAT3DViewport of which we add the clipping planes
   * Use only if you added that CAT3DViewport clipping planes to this CAT3DViewport, and
   * did not add any other in the meantime.
   */
  CAT3DViewport & operator -= (const CAT3DViewport &iFrom);\
  /**
  * Apply the geometric transformatin defined by the CAT4x4Matrix to the clipping planes.
  *  @param iMatrix the transformation to apply.
  */
  CAT3DViewport & operator *= (const CAT4x4Matrix &iMatrix);
  
  /**
   * Determine wether or not a given CAT3DBoundingSphere lies outside the CAT3DViewport.
   * @param iBox  The CAT3DBoundingSphere we want to test
   * @param iratio
   * @return the result of the test
   */
  inline int IsOutside (const CAT3DBoundingSphere &, const float iratio= 1.f) const;
  /**
   * Determine wether or not a given sphere lies outside the CAT2DViewport.
   * @param iCenter  a pointer to an array of coorinates for the center of the sphere
   * @param iRadius  the radius of the spheres
   * @return the result of the test
   */
  inline int IsOutside (const float * iCenter,const float iRadius) const;
  /**
   * Determine wether or not a given sphere lies inside the CAT2DViewport.
   * @param icenter  a pointer to an array of coorinates for the center of the sphere
   * @param iradius  the radius of the spheres
   * @return the result of the test
   */
  int IsInside  (const float *icenter,const float iradius) const;
  /**
   * Determine wether or not a given CAT3DBoundingSphere lies inside the CAT3DViewport.
   * @param iBox  The CAT3DBoundingSphere we want to test
   * @param iratio
   * @return the result of the test
   */
  int IsInside  (const CAT3DBoundingSphere &, const float iratio= 1.f) const;
  /**
   * Determine wether or not a given point lies inside the CAT2DViewport.
   * @param point  a pointer to an array of coordinates for the point
   * @return the result of the test
   */
  int IsInside  (const float point[3]) const;

  /**
   * Get the number of planes.
   * @return the number of planes
   */
  inline int GetNbPlanes() const;
  /**
   * Get the clipping planes equations.
   * @param oa an array of float representing the a param in the plane equation
   * @param ob an array of float representing the b param in the plane equation
   * @param oc an array of float representing the c param in the plane equation
   * @param od an array of float representing the d param in the plane equation
   *  The planes equations are of the form a.x+b.y+c.z+d = 0
   */
  inline void GetPlanes (float **oa, float **ob, float **oc, float **od);

 /** @nodoc */
  virtual int SizeOf();

#ifdef _IRIX_SOURCE
 /** @nodoc */
inline  int IsOutside (const float *box_center, const float *box_dim ) const;
 /** @nodoc */
inline  int IsOutside (const CATMathPointf &min_point, const CATMathPointf &max_point ) const;
 /** @nodoc */
inline int IsOutside (const float x, const float y, const float z ) const;
#endif

 private :

 /** @nodoc */
   int _nbPlanes;
 /** @nodoc */
   float a[12],b[12],c[12],d[12];

 /** @nodoc */
   CATMathVectorf    _working_vector;
 /** @nodoc */
   CATMathDirectionf _working_direction;

};

inline int CAT3DViewport::GetNbPlanes() const
{
 return ( _nbPlanes);
}
struct CATMyBox
{
 CATMathPointf minPoint, maxPoint;
};

inline void CAT3DViewport::GetPlanes(float **oa, float **ob, float **oc, float **od)
{
 *oa = &a[0];
 *ob = &b[0];
 *oc = &c[0];
 *od = &d[0];
}

inline int CAT3DViewport::IsOutside ( const CAT3DBoundingSphere &bs3D,
                                      const float ratio ) const
{
      if ( bs3D._state == EMPTY ) return (1);
 else if ( bs3D._state == INFINIT || bs3D._state == CONTAIN ) return (0);
 else
 {
#ifdef _IRIX_SOURCE
static CATINTPTR d101 = -1;
  if ((d101 < 0) && (DrawMenb(0) == 1))
   d101=DrawMenb(101);

  if (d101<=0)
  {
   float x = bs3D._center.x;
   float y = bs3D._center.y;
   float z = bs3D._center.z;
   float rayon;
  
   if(bs3D._radius_mm>(1e-6))
    rayon=bs3D._radius+bs3D._radius_mm*ratio;
   else
    rayon=bs3D._radius; 
 
   // Dans le cas du IsOutside on ne prend que les 6 plans de base, les plans
   // additionnels comme les clipping planes ne sont pas a prendre en compte
   for ( int i = 5; i >= 0 ; i-- )
   { 
    if ( a[i]*x + b[i]*y + c[i]*z + d[i] - rayon > 0 )
    {
      return(1);
    }
   }
  }
  else if (d101 && bs3D.GetBox())
  {
   CATMyBox *bbox = (CATMyBox*)bs3D.GetBox();
  
   int   i, isect;
   float xmin, ymin, zmin, xmax, ymax, zmax, offset;

   
   //printf("CAT3DViewport::IsOutside // ratio (%.4f)\n", ratio);
   //printf("Bounding Box -> min (%.4f,%.4f,%.4f) // max (%.4f,%.4f,%.4f)\n", bbox->minPoint.x, bbox->minPoint.y, bbox->minPoint.z, bbox->maxPoint.x, bbox->maxPoint.y, bbox->maxPoint.z);
   //printf("Bound Sphere -> center (%.4f,%.4f,%.4f) // radius (%.4f) // radius_mm (%.4f)\n", bs3D._center.x, bs3D._center.y, bs3D._center.z, bs3D._radius, bs3D._radius_mm);
   //printf("--\n");
   
   // Dans le cas du IsOutside on ne prend que les 6 plans de base, les plans
   // additionnels comme les clipping planes ne sont pas a prendre en compte
   if (bbox)
   {
    for ( i = 5; i >= 0; i-- )
    {
     isect  = 0;
     offset = - d[i];

    
     //printf("Clipping Plane Equation (%.4f,%.4f,%.4f,%.4f,)\n", a[i], b[i], c[i], d[i]);
    
     xmin = a[i] * bbox->minPoint.x;
     ymin = b[i] * bbox->minPoint.y;
     zmin = c[i] * bbox->minPoint.z;

     if (xmin+ymin+zmin <= offset)
        isect++;
    
     xmax = a[i] * bbox->maxPoint.x;
     ymax = b[i] * bbox->maxPoint.y;
     zmax = c[i] * bbox->maxPoint.z;

     if (xmax+ymax+zmax <= offset)
        isect++;
    
     if (xmin+ymin+zmax <= offset)
        isect++;
    
     if (xmin+ymax+zmin <= offset)
        isect++;
    
     if (xmin+ymax+zmax <= offset)
        isect++;
    
     if (xmax+ymin+zmin <= offset)
        isect++;
    
     if (xmax+ymin+zmax <= offset)
        isect++;
    
     if (xmax+ymax+zmin <= offset)
        isect++;

     //printf("isect = %d\n", isect);
    
     if (isect == 0)
     {
      return(1);
     }
    }
   }
   //printf("--\n");
  }
#else
  {
   float x = bs3D._center.x;
   float y = bs3D._center.y;
   float z = bs3D._center.z;
   float rayon;
  
   if(bs3D._radius_mm>(1e-6))
    rayon=bs3D._radius+bs3D._radius_mm*ratio;
   else
    rayon=bs3D._radius; 
 
   // Dans le cas du IsOutside on ne prend que les 6 plans de base, les plans
   // additionnels comme les clipping planes ne sont pas a prendre en compte
   for ( int i = 5; i >= 0 ; i-- )
   { 
    if ( a[i]*x + b[i]*y + c[i]*z + d[i] - rayon > 0 ) return (1);
   }
  }
#endif
 }

 return (0);
}


inline int CAT3DViewport::IsOutside (const float *center, 
                                     const float radius) const
{
  int i;
  
  // Dans le cas du IsOutside on ne prend que les 6 plans de base, les plans
  // additionnels comme les clipping planes ne sont pas a prendre en compte
  for(i=5;i>=0;i--)
  {
    if(a[i]*center[0]+b[i]*center[1]+c[i]*center[2]+d[i]-radius>0)
      return 1;
  }

  return 0;
}

#ifdef _IRIX_SOURCE
inline int CAT3DViewport::IsOutside (const float x, const float y, const float z ) const
{
   // Dans le cas du IsOutside on ne prend que les 6 plans de base, les plans
   // additionnels comme les clipping planes ne sont pas a prendre en compte
   for (int i = 5; i >= 0; i-- )
   {
    if ((a[i] *x+b[i] * y+c[i] * z + d[i]) > 0)
   	return 1;
   }
   return 0;
}

inline int CAT3DViewport::IsOutside (const CATMathPointf &min_point, const CATMathPointf &max_point ) const
{
// if (( min_point == NULL )||( max_point == NULL )) return (1);
// else
 {
   int   i, isect;
   float xmin, ymin, zmin, xmax, ymax, zmax, offset;

   // Dans le cas du IsOutside on ne prend que les 6 plans de base, les plans
   // additionnels comme les clipping planes ne sont pas a prendre en compte
   for ( i = 5; i >= 0; i-- )
   {
    isect  = 0;
    offset = - d[i];
    
    xmin = a[i] * (min_point.x);
    ymin = b[i] * (min_point.y);
    zmin = c[i] * (min_point.z);

    if (xmin+ymin+zmin <= offset)
        isect++;
    
    xmax = a[i] * (max_point.x);
    ymax = b[i] * (max_point.y);
    zmax = c[i] * (max_point.z);

    if (xmax+ymax+zmax <= offset)
        isect++;
    
    if (xmin+ymin+zmax <= offset)
        isect++;
    
    if (xmin+ymax+zmin <= offset)
        isect++;
    
    if (xmin+ymax+zmax <= offset)
        isect++;
    
    if (xmax+ymin+zmin <= offset)
        isect++;
    
    if (xmax+ymin+zmax <= offset)
        isect++;
    
    if (xmax+ymax+zmin <= offset)
        isect++;

    if (isect == 0)
        return(1);
   }
 }
 return (0);
}

inline int CAT3DViewport::IsOutside (const float *box_center, const float *box_dim ) const
{
 if (( box_center == NULL )||( box_dim == NULL )) return (1);
 else
 {
   int   i, isect;
   float xmin, ymin, zmin, xmax, ymax, zmax, offset;

   // Dans le cas du IsOutside on ne prend que les 6 plans de base, les plans
   // additionnels comme les clipping planes ne sont pas a prendre en compte
   for ( i = 5; i >= 0; i-- )
   {
    isect  = 0;
    offset = - d[i];
    
    xmin = a[i] * (box_center[0] - box_dim[0]);
    ymin = b[i] * (box_center[1] - box_dim[1]);
    zmin = c[i] * (box_center[2] - box_dim[2]);

    if (xmin+ymin+zmin <= offset)
        isect++;
    
    xmax = a[i] * (box_center[0] + box_dim[0]);
    ymax = b[i] * (box_center[1] + box_dim[1]);
    zmax = c[i] * (box_center[2] + box_dim[2]);

    if (xmax+ymax+zmax <= offset)
        isect++;
    
    if (xmin+ymin+zmax <= offset)
        isect++;
    
    if (xmin+ymax+zmin <= offset)
        isect++;
    
    if (xmin+ymax+zmax <= offset)
        isect++;
    
    if (xmax+ymin+zmin <= offset)
        isect++;
    
    if (xmax+ymin+zmax <= offset)
        isect++;
    
    if (xmax+ymax+zmin <= offset)
        isect++;

    if (isect == 0)
        return(1);
   }
 }
 return (0);
}
#endif
#endif
