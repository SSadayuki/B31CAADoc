/* -*-c++-*- */

#ifndef CATGSMConnectDef_H_ 
#define CATGSMConnectDef_H_ 


// COPYRIGHT DASSAULT SYSTEMES 2002

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/** 
 * Types for connect curve direction.
 * @param  CATGSMConnectNorm
 *     Connect type usual. 
 * @param  CATGSMConnectSim
 *     Connect type similar curve.
 * @see CATIGSMConnect
 */
typedef enum  {   CATGSMConnectNorm = 0 , 
CATGSMConnectSim    = 1 } CATGSMConnectType;

#endif
