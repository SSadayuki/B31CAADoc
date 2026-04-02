// COPYRIGHT DASSAULT SYSTEMES 1996
// ===================================================================
#ifndef CATI3DGeometricalElement_h
#define CATI3DGeometricalElement_h

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"  

class CATISpecObject_var;
class CATMathTransformation; 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATI3DGeometricalElement;
#else
extern "C" const IID IID_CATI3DGeometricalElement;
#endif

/**
* Interface to handle the geometrical element.
* <b>Role:</b>This interface is implemented by the features deriving from the
* GeometricalElement3D StartUp and the Sketchers. It is all the features
* returned by the @href CATIBodyRequest interface.
*/
class ExportedByMecModItfCPP CATI3DGeometricalElement : public CATBaseUnknown
{
  CATDeclareInterface;

 public:

};

CATDeclareHandler(CATI3DGeometricalElement,CATBaseUnknown);

#endif

