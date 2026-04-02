#ifndef CATMSHExtIShapeFunction_h
#define CATMSHExtIShapeFunction_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */

#include "CATIMSHShapeFunction.h"

/**
 * Adapter for CATIMSHShapeFunction interface.
 *
 * <b>Role</b>: This class provides a default implementation for any extension of 
 * @href CATIMSHShapeFunction.
 * That means one should derive from this class to implement the shape functions of
 * a new finite element connectivity.
 * @see CATIMSHConnectivity.
 */
class ExportedByMSHModel CATMSHExtIShapeFunction : public CATBaseUnknown
{

public: 

/**
 * Constructor.
 */
  CATMSHExtIShapeFunction ();
/**
 * Destructor.
 */
  virtual ~CATMSHExtIShapeFunction ();

protected:

/** @nodoc */
  CATMSHExtIShapeFunction ( const CATMSHExtIShapeFunction& From );
/** @nodoc */
  CATMSHExtIShapeFunction& operator= ( const CATMSHExtIShapeFunction& From );
}; 
#endif 
