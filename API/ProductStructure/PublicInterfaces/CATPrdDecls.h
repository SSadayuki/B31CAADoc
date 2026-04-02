/* -*-c++-*- */
#ifndef _CATPRDDECL_H_
#define _CATPRDDECL_H_
// COPYRIGHT DASSAULT SYSTEMES  1999

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */


#include "AS0STARTUP.h"
/**
 * @nodoc.
 * internal.
 */	
  ExportedByAS0STARTUP enum FilterMode
{
	FM_NAVIGATION,
	FM_VISUALIZATION
};

/**
 * Representation mode.
 * @param 
 *     representation of 3D kind.
 * @param 
 *     representation of 2D kind.
 * @param 
 *     representation of text kind.
 * @see CATIProduct
 */	
ExportedByAS0STARTUP enum CATRepMode
{
	CATPrd3D,
	CATPrd2D,
	CATPrdText
};


/**
 * @nodoc.
 * internal.
 */ExportedByAS0STARTUP enum CATPrdVersionInfo
{
	CatPrdUnvaluated,
	CatPrdR1pure,
	CatPrdR2instanceR1,
	CatPrdR2
};
#endif
