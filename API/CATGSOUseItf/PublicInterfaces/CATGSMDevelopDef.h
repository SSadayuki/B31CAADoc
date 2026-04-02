/* -*-C++-*- */
#ifndef CATGSMDevelopDef_H_
#define CATGSMDevelopDef_H_

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */


/**
 * Types for develop.
 * <b>Role</b>:  Used for Develop algorithme at creation and modification.
 * @param CATGSMDevelopMethod_DevDev
 *       Develop-Develop
 * @param CATGSMDevelopMethod_DevProj
 *       Develop-Projection
 * @param CATGSMDevelopMethod_DevSpec
 *       Develop-Develop (invert mode)
 * @param CATGSMDevelopMethod_None
 *       None
 * @see CATIGSMDevelop, CATIGSOFactory
 */
enum CATGSMDevelopMethod { CATGSMDevelopMethod_DevDev  = 0,
                           CATGSMDevelopMethod_DevProj = 1,
                           CATGSMDevelopMethod_DevSpec = 2,
                           CATGSMDevelopMethod_None    = 10 };

#endif
