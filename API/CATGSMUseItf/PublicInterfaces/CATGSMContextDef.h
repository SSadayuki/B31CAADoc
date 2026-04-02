/* -*-c++-*- */

#ifndef CATGSMContextDef_H_ 
#define CATGSMContextDef_H_ 


// COPYRIGHT DASSAULT SYSTEMES 2002

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Types of context set on the Surface/Volume features.
 * <p>  LICENSING INFORMATION    
 * <br> Creation of volumes requires GSO License granted 
 * <br> Volume context activation methods to set volume check GSO license configuration
 * <ul> 
 * <li> - Extrude, Revol , Bump, Loft , Sweep volumes  require GSO License </li>
 * <li> - Split, Transformation with volume result option require GSO License </li>
 * </ul> 
 * if GSO License is not granted , option is ignored and creations are done as stantard shapes .
 * <br> 
 * @param CATGSMSurfaceCtxt
 *  Result will be a surface
 * @param CATGSMVolumeCtxt
 *  Result will be a volume
 * @see CATIGSMExtrude, CATIGSMRevol, CATIGSMLoft, CATIGSMSweeUnspec, CATIGSMSweepCircle 
 */
   
typedef enum  { CATGSMSurfaceCtxt = 0 , 
                CATGSMVolumeCtxt  = 1
              } CATGSMFeatureContextType;


#endif
