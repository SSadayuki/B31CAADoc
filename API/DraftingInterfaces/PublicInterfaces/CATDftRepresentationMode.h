/**
* @quickReview AQR 03:03:31
*/

#ifndef CATDftRepresentationMode_H
#define CATDftRepresentationMode_H
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
// COPYRIGHT DASSAULT SYSTEMES 1999
//--------------------------------------------------------------------------
// CATDftRepresentationMode Enum
// vpe - 04/02 
//--------------------------------------------------------------------------

    /**
     * Representation mode of a generative view.
     *
     * @param EXACT
     *  
     * @param POLYHEDRIC
     *  
     */
enum CATDftRepresentationMode
{ 
	EXACT		= 0, 
	POLYHEDRIC	= 1,
  HRV = 2
};
                         
#endif
