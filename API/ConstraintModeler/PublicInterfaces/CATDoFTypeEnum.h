#ifndef CATDoFTypeEnum_H
#define CATDoFTypeEnum_H
//
// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

/**
 * Degrees of freedom analysis: indicates type of freedom.
 * <B>Role</B>: used by the @href CATIDegreesOfFreedom#GetDegreesOfFreedom
 * @param  DoF_Translation
 * indicates that the corresponding degree of freedom is a Translation
 * @param  DoF_Rotation 
 * indicates that the corresponding degree of freedom is a Rotation
 * @param  DoF_Screw
 * indicates that the corresponding degree of freedom
 * is a Screw (rotation + translation along axis of rotation)
 * @param  DoF_NotComputed
 * indicates problem that the degree(s) of freedom have not been computed on this. Please check that the method GetNbDegreesOfFreedom  has been called on smart pointer this, or that this call has not failed.
 * @param  DoF_NotDefinedType
 * indicates problem on the corresponding degree of freedom (for example it does not exist)
 */
typedef enum CATDoFTypeEnum
{
	DoF_Translation= 0,
	DoF_Rotation   = 1,
	DoF_Screw = 2,
	DoF_NotComputed = 3,
	DoF_NotDefinedType = 4
} CATDoFTypeEnum;

#endif 






