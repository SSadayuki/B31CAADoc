/* -*-c++-*- */
#ifndef CATGSMClosingPointDef_H_ 
#define CATGSMClosingPointDef_H_ 

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Information on closing point when a closed curve is set to a feature. 
 * <b>Role</b>:  Used for loft and blend creation and modifications
 * Notes: <br>
 *   Enumerations used as parameters in interfaces of manipulation of a lofted surface and blend surface. <br>
 *   This lofted surface is a Loft feature created by the CATIGSMFactory. <br>
 *   This blend surface is a Blend feature created by the CATIGSMFactory. <br>
 *   When a closed curve is set to one of this feature, a closing point can be created or retrieved. 
 * @param CATGSMNoClosingPoint
 *    No closing point has been created nor retrieved. 
 * @param CATGSMClosingPointVertex
 *    A closing point has been created as a vertex.
 * @param CATGSMClosingPointExtremumCreated
 *    A closing point has been created as an extremum.
 * @param CATGSMClosingPointExtremumRetrieved
 *    A closing point has been retrieved as an extremum.
 * 
 * @see CATIGSMLoft, CATIGSMBlend, CATIGSMFactory 
 */
enum CATGSMClosingPointCreationDiag { CATGSMNoClosingPoint = 0
                         , CATGSMClosingPointVertex
                         , CATGSMClosingPointExtremumCreated
                         , CATGSMClosingPointExtremumRetrieved
                        };

#endif
