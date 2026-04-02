#ifndef CATMSHExtITesselation_h
#define CATMSHExtITesselation_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U2
 */

#include "CATIMSHTesselation.h"

/**
 * Adapter for CATIMSHTesselation interface.
 *
 * <b>Role</b>: This class provides a default implementation for any extension of 
 * @href CATIMSHTesselation.
 * That means one should derive from this class to implement the vizualisation of
 * a new finite element connectivity.
 * @see CATIMSHConnectivity.
 */
class ExportedByMSHModel CATMSHExtITesselation : public CATBaseUnknown
{

public: 

/**
 * Constructor.
 */
  CATMSHExtITesselation ();
/**
 * Destructor.
 */
  virtual ~CATMSHExtITesselation ();

protected:

/** @nodoc */
  CATMSHExtITesselation ( const CATMSHExtITesselation& From );
/** @nodoc */
  CATMSHExtITesselation& operator= ( const CATMSHExtITesselation& From );
}; 
#endif 
