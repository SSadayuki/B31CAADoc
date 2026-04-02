/* -*-c++-*- */
#ifndef CATGSMMaskDef_H_ 
#define CATGSMMaskDef_H_ 


// COPYRIGHT DASSAULT SYSTEMES 2004

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */


/**
 * Types for mask.
 * @param CATGSMMaskType_Unknown
 *  The mask is unknown type.
 * @param CATGSMMaskType_Positions
 *  The mask box is defined by 2 positions.
 * @param CATGSMMaskType_PositionAndDimention
 *  The mask box is defined by center of the box and dimension of each edge.
 * 
 * @see CATIGSMMask
 */
	enum CATGSMMaskType {CATGSMMaskType_Unknown = 0,
						 CATGSMMaskType_Positions = 1,
						 CATGSMMaskType_PositionAndDimention = 2 };

#endif
