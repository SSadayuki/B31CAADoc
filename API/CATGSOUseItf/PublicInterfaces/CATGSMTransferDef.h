#ifndef CATGSMTransferDef_H_
#define CATGSMTransferDef_H_

// COPYRIGHT DASSAULT SYSTEMES 2003
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

/**
 * Define the type of transfer.
 * <b>Role</b>:  Used for identify type of transfer in Fold/Unfold 
 * @param CATGSMTransferUndefined
 *       No transfer mode specified 
 * @param CATGSMFoldedToUnfolded
 *       Develop-Projection
 * @param CATGSMUnfoldedToFolded
 *       Unfolded to folded 
 * @see CATIGSMUnfold, CATIGSOFactory 
 */    

enum CATGSMTypeOfTransfer { CATGSMTransferUndefined, CATGSMFoldedToUnfolded, CATGSMUnfoldedToFolded };
#endif 
