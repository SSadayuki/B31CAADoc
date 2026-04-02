#ifndef CATSchMultiImageEnum_H
#define CATSchMultiImageEnum_H

//	COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Status of the image in MIO.
 * <b>Role</b>: In Multi-Image-Object concept, to specify the status 
 * of the image.
 */
enum CATSchMIOImageStatus  // Should be mapped to PSP enum 
{
  SchImageIsUpToDate        = 0,  
  SchImageMasterNotFound    = 1,
  SchImageMasterDocNotFound = 2,
  SchImageInvalidReference  = 3,
  SchImageAttrsNotUpToDate  = 4
};

#endif
