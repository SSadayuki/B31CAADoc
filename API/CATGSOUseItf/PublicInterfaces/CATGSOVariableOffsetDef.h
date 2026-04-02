/* -*-c++-*- */
#ifndef CATGSOVariableOffsetDef_H
#define CATGSOVariableOffsetDef_H 

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
* @CAA2Level L0
* @CAA2Usage U3
*/


/**
 * Types for constraints. 
 * <b>Role</b>:  Used for VariableOffset creation and modifications
 * Notes: <br>
 *   Enumerations used as parameters in interfaces of manipulation of a VariableOffset surface. <br>
 *   This surface is a VariableOffset feature created by the CATIGSOFactory. <br>
 *
 * @see CATIGSOVariableOffsetGetAccess, CATIGSOFactory 
 */
enum ConstraintType
{
	VO_VARIABLE_SURFACE		= 0,	//Variable Constraint on a surface
	VO_VARIABLE_WIRE		= 1,	//Variable Constraint on an edge
	VO_CONSTANT_SURFACE		= 2,	//Constant Constraint on a surface
	VO_CONSTANT_WIRE_BORDER	= 3,	//Constant Constraint on a Border edge
	VO_CONSTANT_WIRE_INNER	= 4		//Constant Constraint on an Inner edge
};

/**
 * Macro for testing constraints global type. 
 * <b>Role</b>:  Used for VariableOffset creation and modifications
 * Notes: <br>
 *   Macro that tests that the constraint type is constant sub type. <br>
 * @see ConstraintType
 */
#define VO_CONSTANT(cstType)							\
	(													\
		( (cstType) == VO_CONSTANT_SURFACE		) ||	\
		( (cstType) == VO_CONSTANT_WIRE_BORDER	) ||	\
		( (cstType) == VO_CONSTANT_WIRE_INNER	)		\
	)

/**
 * Macro for testing constraints global type. 
 * <b>Role</b>:  Used for VariableOffset creation and modifications
 * Notes: <br>
 *   Macro that tests that the constraint type is variable sub type. <br>
 * @see ConstraintType
 */
#define VO_VARIABLE(cstType)							\
	(													\
		( (cstType) == VO_VARIABLE_SURFACE		) ||	\
		( (cstType) == VO_VARIABLE_WIRE			)		\
	)

/**
 * Macro for testing constraints global type. 
 * <b>Role</b>:  Used for VariableOffset creation and modifications
 * Notes: <br>
 *   Macro that tests that the constraint type is surface based sub type. <br>
 * @see ConstraintType
 */
#define VO_SURFACE(cstType)								\
	(													\
		( (cstType) == VO_VARIABLE_SURFACE		) ||	\
		( (cstType) == VO_CONSTANT_SURFACE		)		\
	)

/**
 * Macro for testing constraints global type. 
 * <b>Role</b>:  Used for VariableOffset creation and modifications
 * Notes: <br>
 *   Macro that tests that the constraint type is wire based sub type. <br>
 * @see ConstraintType
 */
#define VO_WIRE(cstType)								\
	(													\
		( (cstType)	== VO_VARIABLE_WIRE			)		\
		( (cstType) == VO_CONSTANT_WIRE_BORDER	) ||	\
		( (cstType) == VO_CONSTANT_WIRE_INNER	)		\
	)

#endif
