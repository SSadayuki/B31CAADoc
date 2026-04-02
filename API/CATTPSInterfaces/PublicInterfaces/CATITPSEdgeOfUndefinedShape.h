#ifndef CATITPSEdgeOfUndefinedShape_H
#define CATITPSEdgeOfUndefinedShape_H

// COPYRIGHT DASSAULT SYSTEMES 2019

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"

extern "C" const IID IID_CATITPSEdgeOfUndefinedShape;

/**
 * Interface to EdgeOfUndefinedShape object.
 * <b>Role</b>: Objects that implement this typing interface are non semantic
 * Edge of undefined shape Symbol informations. This type belongs to non semantic super type.
 * <p>
 * Non semantic means without respect of any norm. No check are performed on
 * the annotation frame. It can contains invalid or inconsistent informations.
 */
class CATITPSEdgeOfUndefinedShape : public CATBaseUnknown
{
  CATDeclareInterface;
  
  public:

};
CATDeclareHandler(CATITPSEdgeOfUndefinedShape, CATBaseUnknown);
#endif
