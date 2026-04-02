/* -*-c++-*- */
#ifndef CATISketchExternalReferences_h
#define CATISketchExternalReferences_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATSketcherInterfaces.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherInterfaces IID IID_CATISketchExternalReferences;
#else
extern "C" const IID IID_CATISketchExternalReferences;
#endif

/**
 * Interface to manage the external references of a sketch.
 * <b>Role</b>: This interface is used to manage the external references of a sketch.
 * @see CATI2DHybConstraint, CATI2DOperator, CATI2DOutParameters.
 */

class ExportedByCATSketcherInterfaces CATISketchExternalReferences : public CATBaseUnknown
{
  CATDeclareInterface;

public:
  /**
   * Activates the hybrid constraints reload at the next sketch edition/update
   * @return <tt>HRESULT</tt>
   */
  virtual HRESULT SynchronizeHybConstraints() = 0;
};

#endif
