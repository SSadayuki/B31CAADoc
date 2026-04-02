#ifndef CATITPSSemanticGDTTolerance_H
#define CATITPSSemanticGDTTolerance_H

// COPYRIGHT DASSAULT SYSTEMES 2006

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

extern "C" const IID IID_CATITPSSemanticGDTTolerance ;

//------------------------------------------------------------------

/**
* Interface representing Semantic Geometrical Tolerance.
*
*
* @example
*  // example is optional
*  CATITPSSemanticGDTTolerance* piTPSGDTTol = NULL;
*  rc = piTPS->QueryInterface(IID_CATITPSSemanticGDTTolerance,
*                             (void**) &piTPSGDTTol);
*
*/
class CATITPSSemanticGDTTolerance: public IUnknown
{
  public:
};

#endif
