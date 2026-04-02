#ifndef CATITPSContinuousFeature_H
#define CATITPSContinuousFeature_H

// COPYRIGHT DASSAULT SYSTEMES 2018

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"

extern "C" const IID IID_CATITPSContinuousFeature;

/**
 * Typing interface to represent Continuous Feature characteristics applied on Dimension.
 * This interface implies that symbol CF is represented after the dimension value; it
 * indicates that several features of size have to be treated as a single feature of size.
 * <br />This interface is only valid for ASME 2009 standard (does not exist in ISO).
 */
class CATITPSContinuousFeature : public CATBaseUnknown
{
  CATDeclareInterface ;

  public:
};
CATDeclareHandler(CATITPSContinuousFeature, CATBaseUnknown);
#endif
