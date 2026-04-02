#ifndef CATPspCntrFlowNames_H
#define CATPspCntrFlowNames_H

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * Connector Flow Reality.
 * @param CatPspCntrFlowReality_Undefined
 *   The flow reality is undefined.
 * @param CatPspCntrFlowReality_InDirection
 *   The flow reality is IN.
 * @param CatPspCntrFlowReality_OutDirection
 *   The flow reality is OUT.
 * @param CatPspCntrFlowReality_InOutDirection
 *   The flow reality is IN and OUT.
 */
enum   CATPspCntrFlowReality
{ 
  
   CatPspCntrFlowReality_Undefined      = 0,
   CatPspCntrFlowReality_InDirection    = 1,
   CatPspCntrFlowReality_OutDirection   = 2,
   CatPspCntrFlowReality_InOutDirection = 3

};

/**
 * Connector Flow Capability.
 * @param CatPspCntrFlowCapability_Undefined
 *   The flow capability is undefined.
 * @param CatPspCntrFlowCapability_InDirection
 *   The flow capability is IN.
 * @param CatPspCntrFlowCapability_OutDirection
 *   The flow capability is OUT.
 * @param CatPspCntrFlowCapability_InOutDirection
 *   The flow capability is IN and OUT.
 */
enum   CATPspCntrFlowCapability   
{ 
  
   CatPspCntrFlowCapability_Undefined      = 0,
   CatPspCntrFlowCapability_InDirection    = 1,
   CatPspCntrFlowCapability_OutDirection   = 2,
   CatPspCntrFlowCapability_InOutDirection = 3

};

#endif
