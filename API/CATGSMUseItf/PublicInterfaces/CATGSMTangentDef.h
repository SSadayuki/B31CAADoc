/* -*-c++-*- */
#ifndef CATGSMTangentDef_H
#define CATGSMTangentDef_H 

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Types for Tangent definition. 
 * <b>Role</b>:  Used for tangent creation and modifications, specifies if the tangent is computed :
 * @param CATGSMComputedTangent 
 *    tangent is computed.
 * @param CATGSMNotComputedTangent
 *    tangent is not computed.
 * Notes: <br>
 *   Enumerations used as parameters in interfaces of manipulation of a Loft surface. <br>
 *   This surfaces are features created by the CATIGSMFactory. <br>
 * @see CATIGSMLoft, CATIGSMFactory
 */
enum CATGSMComputedTangentType { CATGSMComputedTangent = 1
                         , CATGSMNotComputedTangent
   };

#endif
