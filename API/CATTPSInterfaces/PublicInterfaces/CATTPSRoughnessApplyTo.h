#ifndef CATTPSRoughnessApplyTo_H
#define CATTPSRoughnessApplyTo_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Applicability of the Roughness specification.
 * <pre>
 * <r>             ----------                O---------
 * <r>            |                         |          
 * <r>           |                         |           
 * <r>          |                         |            
 * <r>     |   |                     |   |             
 * <r>      | |                       | |              
 * <r>       |                         |               
 * <r> 
 * <r>     SpecifiedSurfaceOnly     AllPartSurfaces
 * <r>
 * <r>                                       O
 * <r>            |                         |          
 * <r>           |                         |           
 * <r>          |                         |            
 * <r>     |   |                     |   |             
 * <r>      | |                       | |              
 * <r>       |                         |               
 * <r> 
 * <r>     BasicSurface             AllBasicSurfaces
 * </pre>
 */

enum CATTPSRoughnessApplyTo
{
  CATTPSRAUnsupported = -1,
  CATTPSRASpecifiedSurfaceOnly = 0,
  CATTPSRAAllPartSurfaces = 1,
  CATTPSRABasicSurface = 2,
  CATTPSRAAllBasicSurfaces = 3
};

#endif
