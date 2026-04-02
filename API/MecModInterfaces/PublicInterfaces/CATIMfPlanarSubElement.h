#ifndef CATIMfPlanarSubElement_h
#define CATIMfPlanarSubElement_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "MecModItfCPP.h"
#include "CATIMfBRep.h"

class CATISpecObject_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMfPlanarSubElement;
#else
extern "C" const IID IID_CATIMfPlanarSubElement;
#endif

/**
 * Interface to get a planar subelement BRep feature.
 */
class ExportedByMecModItfCPP CATIMfPlanarSubElement : public CATIMfBRep
{
  CATDeclareInterface;
  public:

/**
 * Returns the support.
 * @return
 * This support is a <tt>CATIMfFsur</tt> BRep feature.
 */
  virtual CATISpecObject_var  GetFeatSupport() const = 0;

};

CATDeclareHandler( CATIMfPlanarSubElement, CATIMfBRep ) ;

#endif


