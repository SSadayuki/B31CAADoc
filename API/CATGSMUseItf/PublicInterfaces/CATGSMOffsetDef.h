/* -*-c++-*- */
#ifndef CATGSMOffsetDef_H_ 
#define CATGSMOffsetDef_H_ 


// COPYRIGHT DASSAULT SYSTEMES 2004

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Types for Offset operations.
 * @param CATGSMOffset_Constant
 *        Classic constant Offset.
 * @param CATGSMOffset_Rough
 *        Rough Offset.
 * @param CATGSMOffset_Smooth
 *        Offset with automatic smoothing.
 * @param CATGSMOffset_SmoothwithDevMax
 *        Offset with smoothing limited by a user deviation.
 *
 * @see CATIGSMOffset, CATIGSMFactory#CreateOffset
 */ 

enum CATGSMOffsetType { CATGSMOffset_Constant = 0,
								CATGSMOffset_Rough = 1,
								CATGSMOffset_Smooth = 2,
								CATGSMOffset_SmoothwithDevMax = 3
								};

/**
 * Types for regularization option.
 * @param CATGSMRegularization_Undefined
 *        Regularization is undefined.
 * @param CATGSMRegularization_Local
 *        Regularization is local.
 * @param CATGSMRegularization_Global
 *        Regularization is global.
 *
 * @see CATIGSMOffset, CATIGSMFactory#CreateOffset
 */

enum CATGSMOffsetRegularisationType {CATGSMRegularization_Undefined = 0,
								CATGSMRegularization_Local = 1,
								CATGSMRegularization_Global = 2};

#endif
