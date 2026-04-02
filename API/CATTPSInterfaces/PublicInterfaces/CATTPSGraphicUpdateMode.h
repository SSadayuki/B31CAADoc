#ifndef CATTPSGraphicUpdateMode_H
#define CATTPSGraphicUpdateMode_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Describes the domain of a TPS visualization refresh.
 * @see CATITPSServices
 */
enum CATTPSGraphicUpdateMode
{
  TPSGraph           = 0,
  TPSVisu            = 1,
  TPSGraphAndVisu    = 2,
  TPSVisuDelete      = 3,
  TPSVisu2D          = 4,
  TPSVisuRelatedSurf = 5,
  TPSVisuMirror      = 6,
  TPSSetGraphAndVisu = 7 // graph nodes and visu of the TPSSet and all its TPSs
};

#endif
