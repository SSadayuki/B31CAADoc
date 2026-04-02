#ifndef CATRenderingEnum_H
#define CATRenderingEnum_H
// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U1
 */

/**
 * Type of rendering light.
 */
typedef enum CATRenderingLightType
{
  SpotLight          = 0,
  PointLight         = 1,
  DirectionalLight   = 2,
  RectangleAreaLight = 3,
  DiskAreaLight      = 4,
  SphereAreaLight    = 5,
  CylinderAreaLight  = 6
} CATRenderingLightType;

/**
 * Type of a size measure.
 * @param Length
 *  Length of a rectangular object
 * @param Width
 *  Width of a a rectangular object
 * @param Radius
 *  Radius of a spherical, cylindrical or disk object
 * @param Height
 *  Height of a cylindrical object
 */
typedef enum CATRenderingSize
{
  Length = 0,
  Width  = 1,
  Radius = 2,
  Height = 3
} CATRenderingSize;

/**
 * Type of rendering environment.
 */
typedef enum CATRenderingEnvironmentType
{
  CubicalEnvironment     = 0,
  SphericalEnvironment   = 1,
  CylindricalEnvironment = 2  
} CATRenderingEnvironmentType;

/**
 * Type of rendering environment wall.
 */
typedef enum CATRenderingWallType
{
  North  = 0,
  South  = 1,
  West   = 2, 
  East   = 3,
  Top    = 4,
  Bottom = 5
} CATRenderingWallType;

#endif // CATRenderingEnum_H






