/* -*-c++-*- */
#ifndef CATIGSMBoundaryDefs_H
#define CATIGSMBoundaryDefs_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Types  for boundary propagation.
 * @param    BOUNDARY_ALL_CONTOUR   
 *      Boundary for all edges 
 * @param    BOUNDARY_POINT_PROPAG
 *      Boundary propagation for edges on connexe point 
 * @param    BOUNDARY_TANGENT_PROPAG 
 *      Boundary propagation for edges  tangent at point  breaks  
 * @param    BOUNDARY_NO_PROPAG     
 *      Boundary not propagation from the current edge
 * @param    BOUNDARY_FROM_SPEC    
 *      Boundary of all feature 
 * 
 * @see CATIGSMFactory
 */
typedef enum
{
   BOUNDARY_ALL_CONTOUR    = 0,
   BOUNDARY_POINT_PROPAG   = 1,
   BOUNDARY_TANGENT_PROPAG = 2,
   BOUNDARY_NO_PROPAG      = 3,
   BOUNDARY_FROM_SPEC      = 4
}
CATIGSMBoundaryPropag;

/**
 * Constant for boundary propagation.
 * @param    CATIGSMBOUNDARYNBPROPAG 
 *    Max number of propagate elements 
 */

#define CATIGSMBOUNDARYNBPROPAG  5
#endif
