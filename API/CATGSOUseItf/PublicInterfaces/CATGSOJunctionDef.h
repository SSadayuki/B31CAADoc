/* -*-c++-*- */
#ifndef CATGSOJunctionDef_H_ 
#define CATGSOJunctionDef_H_ 
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************


// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @XXX2Level L1
  * @XXX2Usage U1
  */

/**
 * @nodoc 
 * For internal use only : DO NOT USE
 *
 * Types for constraint on Junction surface. 
 * <b>Role</b>:  Used for JunctionSurface creation and modifications
 * Notes: <br>
 *   Enumerations used as parameters in interfaces of manipulation of a junction surface. <br>
 *   This surface is a JunctionSurface feature created by the CATIGSOFactory. <br>
 * @param CATGSOJunctionConstraintCouplingPoint
 *     Constraint will be used to add a coupling point on section.
 * @param CATGSOJunctionConstraintCouplingCurve
 *     Constraint will be used to add/replace a coupling curve between sections.
 * @see CATIGSOJunction, CATIGSOFactory 
 */

enum CATGSOJunctionConstraintType{CATGSOJunctionConstraintCouplingPoint = 0,
								  CATGSOJunctionConstraintCouplingCurve = 1};

/**
 * @nodoc 
 * For internal use only : DO NOT USE
 *
 * Types for Junction.
 * @see CATIGSOJunction, CATIGSOFactory
 */ 

enum CATGSOJunctionCouplingMode{CATGSOJunction_Tangency = 1,
								CATGSOJunction_Curvature = 2,
								CATGSOJunction_Debug = 3};
/**
 * @nodoc 
 * For internal use only : DO NOT USE
 *
 * Constant for Junction automatic coupling.
 * @param    CATGSOJunctionNbTypeCouplingMode 
 *    Max number of coupling mode
 */
#define CATGSOJunctionNbTypeCouplingMode 2
#endif
