/* -*-c++-*- */
#ifndef CAT2DGeoStatus_h
#define CAT2DGeoStatus_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

enum CAT2DGeoStatus
{
  Geo2DStatus_Unknown     =  0,
  Geo2DStatus_Radius      =  1,
  Geo2DStatus_MajorRadius =  2,
  Geo2DStatus_MinorRadius =  4,
  Geo2DStatus_Angle       =  8,
  Geo2DStatus_Position    = 16
};

#endif
