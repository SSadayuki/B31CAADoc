#ifndef CATICharacteristicPlanarSubElement_h
#define CATICharacteristicPlanarSubElement_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATIBRepAccess.h"
#include "CATMfBRepDefs.h"
#include "MecModItfCPP.h"
class CATIRSur_var;
class CATICharacteristicPlanarSubElement_var;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATICharacteristicPlanarSubElement;
#else
extern "C" const IID IID_CATICharacteristicPlanarSubElement;
#endif

/**
 * Interface to get the selecting object associated with a planar subelement.
 */
class ExportedByMecModItfCPP CATICharacteristicPlanarSubElement : public CATIBRepAccess
{
  CATDeclareInterface;
  public:

/**
 * Returns the surface type selecting object associated with the planar subelement type selecting object.
 */
  virtual CATIRSur_var GetRSur() const = 0;

};

CATDeclareHandler( CATICharacteristicPlanarSubElement, CATIBRepAccess ) ;

#endif

