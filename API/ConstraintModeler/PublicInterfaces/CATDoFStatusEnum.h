#ifndef CATDoFStatusEnum_H
#define CATDoFStatusEnum_H
// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

/**
 * Degrees of freedom analysis result.
 * <B>Role</B>: used by the @href CATIDegreesOfFreedom#GetNbDegreesOfFreedom
 * @param DoF_Acceptable  
 * The analysis of 'this' has succedeed. 
 * @param DoF_KONotABloc   
 * 'this' is not a @href CATIBloc. Asking for degrees of freedom analysis makes no sense.
 * @param DoF_KONoFather
 * 'this' has no parent. Hence 'this' can not be in a constraint network and can not be analyzed.
  * @param DoF_KONotRigid
 * 'this' is a flexible Assembly. Hence there is no sense to ask for degrees of freedom on 'this'.
 * @param DoF_KONotUpdated
 * 'this' is not updated: one constraint at least is not satisfied. The analysis can not be performed.
 */

typedef enum CATDoFStatusEnum
{
    DoF_Acceptable  =0,
    DoF_KONotABloc  =1,
    DoF_KONoFather  =2,
	DoF_KONotRigid  =3,
    DoF_KONotUpdated=4,
    DoF_KOOther     =5

} CATDoFStatusEnum;


#endif 






