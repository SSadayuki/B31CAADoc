#ifndef CATSamImagesLayoutDirection_H
#define CATSamImagesLayoutDirection_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
//
// CATSamImagesLayoutDirection : axes to align and distribute images
//
//=============================================================================
// April 2005 Creation
//=============================================================================

/**
  * @CAA2Level L0
  * @CAA2Usage U1
  */

/**
 * Analysis Images layout
 * <b>Role: </b> Analysis Images can be distributed along axes in the viewer.<br> 
 * Use this enumeration in order to choose along which direction to distribute. <br>
 * For example : <br>
 * <b>X value</b>: to distribute in the x direction<br>
 * <b>Y value</b>: to distribute in the y direction<br>
 * <b>Z value</b>: to distribute in the z direction<br>
 * <b>XY value</b>: to distribute in a matrix in the x and y directions<br>
 * <b>XZ value</b>: to distribute in a matrix in the x and z directions<br>
 * <b>YZ value</b>: to distribute in a matrix in the y and z directions<br>
 * <b>NONE value</b>: no distribution (over-lay the images)<br>
 */ 

enum CATSamImagesLayoutDirection 
{
  CATSamImagesLayoutDirection_X,
  CATSamImagesLayoutDirection_Y,
  CATSamImagesLayoutDirection_Z,
  CATSamImagesLayoutDirection_XY,
  CATSamImagesLayoutDirection_XZ,
  CATSamImagesLayoutDirection_YZ,
  CATSamImagesLayoutDirection_NONE,
};
#endif
