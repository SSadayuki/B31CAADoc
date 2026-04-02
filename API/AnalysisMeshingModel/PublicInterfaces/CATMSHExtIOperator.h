#ifndef CATMSHExtIOperator_h
#define CATMSHExtIOperator_h

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */

#include "CATIMSHMesher.h"

/**
 * Adapter for CATIMSHOperator interface.
 *
 * <b>Role</b>: This class provides a default implementation for any extension of 
 * @href CATIMSHMesher.
 * That means one should derive from this class to implement the operator algorithm
 * to operate the mesh of a <b>Mesh Part</b>.
 * @see CATIMSHOperator.
 */
class ExportedByMSHModel CATMSHExtIOperator : public CATBaseUnknown
{

public: 

/**
 * Constructor.
 */
  CATMSHExtIOperator ();
/**
 * Destructor.
 */
  virtual ~CATMSHExtIOperator ();
/**
 * Read the MeshPart of the operator.
 * @return CATBaseUnknown#Release
 */
  CATIMSHMeshPart * GetMeshPart ();

protected:

/** @nodoc */
  CATMSHExtIOperator ( const CATMSHExtIOperator& From );
/** @nodoc */
  CATMSHExtIOperator& operator= ( const CATMSHExtIOperator& From );

}; 
#endif 
