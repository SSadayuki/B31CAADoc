#ifndef CATGSMCanonicalDetectionDef_H_ 
#define CATGSMCanonicalDetectionDef_H_ 

// COPYRIGHT DASSAULT SYSTEMES 1999-2004

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Types for detection of canonical surfaces. 
 * <b>Role</b>:  Used for loft creation and modifications
 * Notes: <br>
 *   Enumerations used as parameters in interfaces of manipulation of a lofted surface. <br>
 *   This lofted surface is a Loft feature created by the CATIGSMFactory. <br>
 * @param CATGSMNoDetection 
 *   No detection of canonical surface is performed.  
 * @param CATGSMPlaneOnlyDetection
 *   Detection of planar surfaces is performed.
 * @param CATGSMCanonicalDetection
 *   Detection of canonical surfaces is performed.
 *
 * @see CATIGSMLoft, CATIGSMFactory 
 */
enum CATGSMCanonicalSurfaceDetection { CATGSMNoDetection = 0,
  CATGSMPlaneOnlyDetection = 1,
  CATGSMCanonicalDetection = 2 };

/**
 * @deprecated V5R14  CATGSMCanonicalSurfaceDetection
 * Types for detection of Plane surfaces. 
 * <b>Role</b>:  Used for loft creation and modifications, use CATGSMCanonicalSurfaceDetection instead 
 */
//enum CATGSMPlanarSurfaceDetection { CATGSMNoPlaneDetection = 0,
 // CATGSMPlaneDetection = 1 };
   

#endif
