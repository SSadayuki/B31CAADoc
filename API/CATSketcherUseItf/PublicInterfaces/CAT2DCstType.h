/* -*-c++-*- */
#ifndef CAT2DCstType_h
#define CAT2DCstType_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

enum CAT2DCstGenericType
{
  Cst2DGenericType_ERROR        = 255,
  Cst2DGenericType_All          = 0,
  Cst2DGenericType_Dimensioning = 1,
  Cst2DGenericType_Geometrical  = 2
};

enum CAT2DCstType
{
  Cst2DType_ERROR             = 255,
  Cst2DType_Distance          = 1,
  Cst2DType_Angle             = 2,
  Cst2DType_Concentric        = 3,
  Cst2DType_Radius            = 4,
  Cst2DType_Parallel          = 5,
  Cst2DType_Perpend           = 6,
  Cst2DType_On                = 7,
  Cst2DType_Tangent           = 8,
  Cst2DType_Symmetry          = 9,
  Cst2DType_Length            = 10,
  Cst2DType_Reference         = 11,
  Cst2DType_Horizontal        = 12,
  Cst2DType_Vertical          = 100,
  Cst2DType_MajorRadius       = 101,
  Cst2DType_MinorRadius       = 102,
  Cst2DType_Begin             = 104,
  Cst2DType_End               = 105,
  Cst2DType_MiddlePoint       = 106,
  Cst2DType_Depend            = 107,
  Cst2DType_EquidistantPoint  = 108,
  Cst2DType_CylinderRadius    = 109,
  Cst2DType_SetDepend         = 122,
  Cst2DType_CurvilinearDistance = 130,
  Cst2DType_ProfileOffset     = 132,
  Cst2DType_EqualDimension    = 133
};

#endif
