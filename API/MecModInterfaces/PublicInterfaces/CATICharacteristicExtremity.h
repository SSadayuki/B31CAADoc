#ifndef CATICharacteristicExtremity_h
#define CATICharacteristicExtremity_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATIBRepAccess.h"
#include "CATMfBRepDefs.h"
#include "MecModItfCPP.h"

class CATIRSur_var;
class CATICharacteristicExtremity_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATICharacteristicExtremity;
#else
extern "C" const IID IID_CATICharacteristicExtremity;
#endif

/**
 * Interface to get the selecting object associated with an extremity.
 */
class ExportedByMecModItfCPP CATICharacteristicExtremity : public CATIBRepAccess
{
  CATDeclareInterface;
  public:
/**
 * Returns the surface type selecting object associated with the extremity type selecting object.
 */
  virtual CATIRSur_var GetRSur() const = 0;

};

CATDeclareHandler( CATICharacteristicExtremity, CATIBRepAccess ) ;

#endif

