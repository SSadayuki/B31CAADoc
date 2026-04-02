/* -*-c++-*- */
#ifndef CATGSOWrapSurfaceDef_H
#define CATGSOWrapSurfaceDef_H 

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */


/**
 * Types for deformation. 
 * <b>Role</b>:  Used for WrapSurface creation and modifications
 * Notes: <br>
 *   Enumerations used as parameters in interfaces of manipulation of a wrap surface. <br>
 *   This surface is a WrapSurface feature created by the CATIGSOFactory. <br>
 * @param CATGSOWrapSurface3D
 *     3D deformation
 * @param CATGSOWrapSurfaceNormal
 *     Normal deformation
 * @param CATGSOWrapSurfaceDirection
 *     Deformation with direction  
 *
 * @see CATIGSOWrapSurface, CATIGSOFactory 
 */
enum CATGSOWrapSurfaceRefDirType { CATGSOWrapSurface3D = 1 ,
                                   CATGSOWrapSurfaceNormal = 2 ,
                                   CATGSOWrapSurfaceDirection = 3 };


#endif
