#ifndef CATSamCoordinateSystem_H
#define CATSamCoordinateSystem_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
//
// CATSamCoordinateSystem : les differents systemes d axes
//
//=============================================================================
// Octobre 2001 Creation
//=============================================================================

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Analysis Images modification.
 * <b>Role: </b> Analysis <i>Images</i> have a default definition.<br> 
 * But modifications may be done using the CATISamImage interface : <br> 
 * Use this enumeration in order to define the coordinate system used for the current axis system.<br>
 * @see CATISamImage
 */ 

enum CATSamCoordinateSystem
{
  CATSamCoordinateSystem_Undefined   = 0 ,
  CATSamCoordinateSystem_Cartesian   = ( 1<<0 ),
  CATSamCoordinateSystem_Cylindrical = ( 1<<1 ),
  CATSamCoordinateSystem_Spherical   = ( 1<<2 )
};
#endif
