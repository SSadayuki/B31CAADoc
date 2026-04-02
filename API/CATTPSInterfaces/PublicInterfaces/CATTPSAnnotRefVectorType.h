#ifndef CATTPSAnnotRefVectorType_H
#define CATTPSAnnotRefVectorType_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Describes type of reference vector for annotation plane and point operators.
 * used in CATITPSOperatorAnnotPlane and in CATITPSOperatorPtVector.
 */
enum CATTPSAnnotRefVectorType
{
  CATTPSARVTUnsupported = -1,
  CATTPSARVTNotDefined = 0,
  CATTPSARVTFaceNormal = 1,
  CATTPSARVTEdgeTangent = 2
};

#endif
