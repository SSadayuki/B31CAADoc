/* -*-c++-*- */
#ifndef CATGSMPositionTransfoDef_H_ 
#define CATGSMPositionTransfoDef_H_ 

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Types for position mode.
 * @param CATGSMPositionMode_NoneOrPositioned  
 *       none or positionned 
 * @param CATGSMPositionMode_ExplicitSweep
 *       explicit sweep  
 * @param CATGSMPositionMode_Develop
 *       develop mode  
 *	== DO  NOT USE following modes in this version ==      
 * @param CATGSMPositionMode_PosPointInverted  
 *       point position inverted  
 * @param CATGSMPositionMode_PosDirInverted 
 *       direction position inverted
 * @param CATGSMPositionMode_PosPointIdentical
 *		 point position identical  
 * @param CATGSMPositionMode_PosDirIdentical
 *		 direction position identical  
 * @see CATIGSMPositionTransfo, CATIGSMSweepUnspec, CATIGSMFactory
 */ 

enum CATGSMPositionMode { CATGSMPositionMode_NoneOrPositioned = 0, 
                          CATGSMPositionMode_ExplicitSweep = 1,
                          CATGSMPositionMode_Develop = 2, 
                          CATGSMPositionMode_PosPointInverted = 8, 
                          CATGSMPositionMode_PosDirInverted = 16,
						  CATGSMPositionMode_PosPointIdentical = 32,
						  CATGSMPositionMode_PosDirIdentical = 64};
   
/**
 * Types for axis inversion. 
 * @param CATGSMAxisInversionMode_None 
 *    no axis inversion
 * @param CATGSMAxisInversionMode_Y 
 *    Y inversion axis
 * @param CATGSMAxisInversionMode_X 
 *    X inversion axis
 * @param CATGSMAxisInversionMode_Both
 *    Both (X and Y) invesion axis
 * 
 * @see CATIGSMPositionTransfo, CATIGSMSweepUnspec, CATIGSMFactory
 */ 
enum CATGSMAxisInversionMode { CATGSMAxisInversionMode_None = 0,
                               CATGSMAxisInversionMode_Y = 1,
                               CATGSMAxisInversionMode_X = 2,
                               CATGSMAxisInversionMode_Both = 3 };

/**
 * Types for axis computation mode.
 * @param CATGSMPositionDirCompMode_None
 *    No X axis specified
 * @param CATGSMPositionDirCompMode_Tangent
 *    The X axis is implicitly the tangent of the profile at the origin
 * @param CATGSMPositionDirCompMode_User
 *    User defined X axis
 * 
 * @see CATIGSMPositionTransfo, CATIGSMSweepUnspec
 */ 
enum CATGSMPositionDirCompMode { CATGSMPositionDirCompMode_None = 0,
                                 CATGSMPositionDirCompMode_Tangent = 1,
                                 CATGSMPositionDirCompMode_User = 2 };

#endif
