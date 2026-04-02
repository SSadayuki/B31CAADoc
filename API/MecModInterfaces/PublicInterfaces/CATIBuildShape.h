#ifndef CATIBuildShape_h
#define CATIBuildShape_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "CATBaseUnknown.h"
#include "MecModItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIBuildShape;
#else
extern "C" const IID IID_CATIBuildShape;
#endif

/**
 * Interface to implement to extend new mechanical feature types.
 * <b>Role</b>: This interface is called when an update occurs.
 * A new solid feature deriving from the abstract type MechanicalFormFeature
 * should implement this interface.
 */
class ExportedByMecModItfCPP CATIBuildShape : public CATBaseUnknown
{
  CATDeclareInterface;

public:
  /**
   * Builds the local (print) solid of a mechanical feature.
   */
  virtual int BuildShape() = 0;
};

#endif
