// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#ifndef CATVizGlobals_H
#define CATVizGlobals_H

/**
 * @nodoc
 * Enum for CATCGRContainer access
 */
enum CATVizCGRMode
{
   CATVizCGRModeRead  = 0x00000001,
   CATVizCGRModeWrite = 0x00000002
};

/**
 * Defines the method used for writing the CGR.
 * <br><b>Role</b>:This context is used in @href CATReadCgr and @href CATWriteCgr .
 * @param CATVizCGRAccessModeDirect
 *   The cgr file will be streamed directly to disk (slower, but no size limitations 
 * @param CATVizCGRAccessModeMemory
 *   The cgr file will be streamed in memory and then to the disk
 */
enum CATVizCGRAccessMode
{
   CATVizCGRAccessModeDirect = 0x00000010,
   CATVizCGRAccessModeMemory = 0x00000020
};

/** 
 * @nodoc 
 * Semantic Level applied on the scene graph and the render
 */
typedef enum
{
   LOW = -1,
   LOD0,
   LOD1,
   LOD2,
   LOD3,
   LSGFACES,
   LSG,
   HIGH
} CATVizSemanticLevel;

/** 
 * @nodoc 
 * Target CGR Release
 */
typedef enum
{
   CGRR8   = 1100830, // Do not use, not fully tested
   CGRR9   = 1100920, // Do not use, not fully tested
   CGRR10  = 1101050, // Do not use, not fully tested
   CGRR11  = 1101110, // Do not use, not fully tested
   CGRR12  = 1101240, // Do not use, not fully tested
   CGRR13  = 1101340, // Do not use, not fully tested
   CGRR14  = 1101430, // Do not use, not fully tested
   CGRR15  = 1101510,
   CGRR16  = 1101610,
   CGRR17  = 1101730,
   CGRR18  = 1101850,
   CGRR19  = 1101910,
   CGRR201 = 2100110,
} CATVizTargetCGR;

/** @nodoc */
#define ALLOCATE_VERTICES      (0x1)
/** @nodoc */
#define GET_VERTICES           (0x2)
/** @nodoc */
#define ALLOCATE_NORMALS       (0x4)
/** @nodoc */
#define GET_NORMALS            (0x8)
/** @nodoc */
#define ALLOCATE_TEXTURES      (0x10)
/** @nodoc */
#define GET_TEXTURES           (0x20)
/** @nodoc */
#define NO_GPU_STORAGE         (0x40)

#endif
