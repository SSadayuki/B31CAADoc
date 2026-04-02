/* -*-c++-*- */
#ifndef CAT2DOffsetDefs_h
#define CAT2DOffsetDefs_h

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

enum CAT2DOffsetPropagType
{
  OffsetPropagType_None    = 0,
  OffsetPropagType_Point   = 1,
  OffsetPropagType_Tangent = 2
};

enum CAT2DOffsetCornerType
{
  OffsetCornerType_Sharp   = 1,
  OffsetCornerType_Round   = 2
};  

enum CAT2DOffsetModeType
{
  OffsetModeType_None      = 0,
  OffsetModeType_Intersect = 1,
  OffsetModeType_Project   = 2
};

#endif
