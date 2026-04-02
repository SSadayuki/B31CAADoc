#ifndef CATTPSToleranceThreadGeometry_H
#define CATTPSToleranceThreadGeometry_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

// COPYRIGHT Dassault Systemes 2012
//===================================================================
//
// CATITPSThreadGeometrySpecification.h interface
    /**
     * Enum to describe the Thread Geometry Specification.
     * @param PitchCylinder  
     *   represent pitch diameterof a thread.
     * @param MajorDiameter  
     *   represent major diameter of a thread.
     * @param MinorDiameter  
     *   represent minor diameter of a thread.
     */
//===================================================================

enum CATTPSToleranceThreadGeometry
{
  CATTPSTolUndefined = 0,
  CATTPSTolPitchCylinder = 1,
  CATTPSTolMajorDiameter = 2,
  CATTPSTolMinorDiameter = 3
};

#endif
