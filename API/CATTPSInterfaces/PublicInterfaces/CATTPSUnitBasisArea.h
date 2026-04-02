#ifndef CATTPSUnitBasisArea_H
#define CATTPSUnitBasisArea_H

// COPYRIGHT DASSAULT SYSTEMES 2018

/**
* @CAA2Level L1
* @CAA2Usage U1
*/

/**
* Enum to describe the form of the unit area when dealing with surfaces.
* @param CATTPSUnitBasisCircularArea  
*   to show Circle in visualization for geometrical specification.
* @param CATTPSUnitBasisSquareArea  
*   to show Square in visualization for geometrical specification.
* @param CATTPSUnitBasisRectangularArea  
*   to show Rectangle in visualization for geometrical specification.
* @param CATTPSUnitBasisLengthxAngle  
*   to show LenghtxAngle in visualization for geometrical specification.
* @param CATTPSUnitBasisAnglexAngle  
*   to show AnglexAngle in visualization for geometrical specification.
*/
enum CATTPSUnitBasisArea
{
  CATTPSUnitBasisCircularArea    = 1,
  CATTPSUnitBasisSquareArea      = 2,
  CATTPSUnitBasisRectangularArea = 3,
  CATTPSUnitBasisLengthxAngle    = 4,
  CATTPSUnitBasisAnglexAngle     = 5
};

#endif
