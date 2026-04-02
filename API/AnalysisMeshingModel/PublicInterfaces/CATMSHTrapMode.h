#ifndef CATMSHTrapMode_h
#define CATMSHTrapMode_h

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1 
 * @CAA2Usage U1 
 */

/**
 * Type of the selection trap.
 * @param CATMSHTrapUndefined
 *   Undefined mode
 * @param CATMSHTrapIntersecting
 *   Intersecting trap: an object will be considered in the trap as long as it intersects the trap contour
 * @param CATMSHTrapIncluding
 *   Inclusive trap: an object will be considered in the trap only if it is completely included in the trap
 * @see CATMSHSelectionTrap
 */

enum CATMSHTrapMode 
{
  CATMSHTrapUndefined ,
  CATMSHTrapIntersecting ,
  CATMSHTrapIncluding
};
#endif
