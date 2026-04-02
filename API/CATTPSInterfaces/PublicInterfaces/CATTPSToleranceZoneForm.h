#ifndef CATTPSToleranceZoneForm_H
#define CATTPSToleranceZoneForm_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Enum for Tolerance Zone Form values.
 *@param LineSegment:
 *   Line zone defined by straight line segment.
 *@param SurfaceDefinedByDisc:
 *   Surface zone defined by a disc (inside area of a circle).
 *@param SurfaceDefinedByCircularAnnulus:
 *   Surface zone defined by a circular annulus (area between 2 concentric circles).
 *@param SurfaceDefinedByStraightPlanarStrip:
 *   Surface zone defined by a straight planar strip (area between 2 parallel straight lines).
 *@param SurfaceGeneratedByLineShift:
 *   Surface zone defined by the 2 lines enveloping all the same diameters circles the centers of which are situated on a given line (area between 2 lines).
 *@param SurfaceGeneratedByCircleShift:
 *   Cylindrical surface zone defined by the shift of a circle in a direction that is perpendicular to the plane of the circle.
 *@param VolumeDefinedByCylinder:
 *   Inside volume zone of a cylinder.
 *@param VolumeDefinedByCylindricalAnnulus:
 *   Volume zone defined by a cylindrical annulus (volume between 2 coaxial cylinders).
 *@param VolumeDefinedBySphere:
 *   Inside volume zone of a sphere.
 *@param VolumeDefinedByRectangularPrism:
 *   Inside volume zone of a rectangular section prism.
 *@param VolumeGeneratedByPlaneShift:
 *   Inside volume zone defined by a plan shift (volume between 2 parallel planes).
 *@param VolumeGeneratedByDiscShift:
 *   Volume zone defined by the shift of a disc in a direction that is perpendicular to the plane of the disc (inside volume zone of a cylinder).
 *@param VolumeGeneratedBySurfaceShift:
 *   Volume zone defined by the 2 surfaces enveloping all the same diameters spheres the centers of which are situated on a given surface (inside volume of the 2 surfaces).
 *@param VolumeDefinedBySphericalAnnulus:
 *   Volume zone defined by a spherical annulus (volume between 2 concentric spheres).
 *@param VolumeGeneratedBy2PerpendicularPlaneShift:
 *   Inside volume zone of a rectangular section prism.
 *@param VolumeDefinedByNPlaneShift:
 *   Set of n inside volume zones defined by the shift of n planes (union volume of the volumes between n couples of parallel planes).
 *@param VolumeDefinedByNCircles:
 *   Set of n surface zones defined by n same diameters discs (union surface of the inside areas of n circles).
 *@param VolumeDefinedByNSpheres:
 *   Set of n inside volume zones of n spheres (union volume of the inside volumes of n spheres).
 *@param VolumeDefinedByNLines:
 *   Set of n line zones defined by n same length straight line segments (union line of n straight line segments).
 *@param VolumeDefinedByNCylinders
 *   Set of n inside volume zones of n cylinders (union volume of the inside volumes of n cylinders).
 */
enum CATTPSToleranceZoneForm
{
  CATTPSTZFUnsupported = -1,
  CATTPSTZFNotDefined = 0,
  CATTPSTZFLineSegment = 1,
  CATTPSTZFSurfaceDefinedByDisc = 2,
  CATTPSTZFSurfaceDefinedByCircularAnnulus = 3,
  CATTPSTZFSurfaceDefinedByStraightPlanarStrip = 4,
  CATTPSTZFSurfaceGeneratedByLineShift = 5,
  CATTPSTZFVolumeDefinedByRectangularPrism = 6,
  CATTPSTZFVolumeDefinedByCylinder = 7,
  CATTPSTZFVolumeDefinedByCylindricalAnnulus = 8,
  CATTPSTZFVolumeGeneratedByPlaneShift = 9,
  CATTPSTZFVolumeGeneratedBySurfaceShift = 10,
  CATTPSTZFVolumeDefinedBySphere = 11,
  CATTPSTZFSurfaceGeneratedByCircleShift = 12,
  CATTPSTZFVolumeGeneratedByDiscShift = 13,

  CATTPSTZFVolumeDefinedBySphericalAnnulus = 14,
  CATTPSTZFVolumeGeneratedBy2PerpendicularPlaneShift = 15,
  CATTPSTZFVolumeDefinedByNPlaneShift = 16,
  CATTPSTZFVolumeDefinedByNCircles = 17,
  CATTPSTZFVolumeDefinedByNSpheres = 18,
  CATTPSTZFVolumeDefinedByNLines = 19,
  CATTPSTZFVolumeDefinedByNCylinders = 20

};

#endif
