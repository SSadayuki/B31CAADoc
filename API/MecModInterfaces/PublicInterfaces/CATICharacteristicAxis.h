#ifndef CATICharacteristicAxis_h
#define CATICharacteristicAxis_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATIBRepAccess.h"
#include "CATMfBRepDefs.h"
#include "MecModItfCPP.h"

class CATIRSur_var;
class CATICharacteristicAxis_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATICharacteristicAxis;
#else
extern "C" const IID IID_CATICharacteristicAxis;
#endif

/**
 * Interface to get the selecting object associated with an axis.
 */
class ExportedByMecModItfCPP CATICharacteristicAxis : public CATIBRepAccess
{
  CATDeclareInterface;
  public:

/**
 * Returns the surface type selecting object associated with the axis type selecting object.
 */
  virtual CATIRSur_var GetRSur() const = 0;

};

CATDeclareHandler( CATICharacteristicAxis, CATIBRepAccess ) ;

#endif

