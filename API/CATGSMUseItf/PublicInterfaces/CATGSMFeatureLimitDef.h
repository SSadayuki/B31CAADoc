/* -*-c++-*- */

#ifndef CATGSMFeatureLimitDef_H_
#define CATGSMFeatureLimitDef_H_


// COPYRIGHT DASSAULT SYSTEMES 2004

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Types for Limit types.
 * @param CATGSMFeatureLimitType_Unknown
 *     Unknown limit type.
 * @param CATGSMFeatureLimitType_Dimension
 *     If Limit type is Dimension, it implies that limit is defined by length.
 * @param CATGSMFeatureLimitType_UptoElement
 *     If Limit type is UptoElement, it implies that limit is defined by a geometrical element.
 * @see CATIGSMExtrude
 */
typedef enum 
{ 
  CATGSMFeatureLimitType_Unknown       = 0,
  CATGSMFeatureLimitType_Dimension     = 1,
  CATGSMFeatureLimitType_UptoElement   = 2 
} 
CATGSMFeatureLimitType;


#endif
