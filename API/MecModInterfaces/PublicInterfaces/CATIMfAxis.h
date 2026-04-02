#ifndef CATIMfAxis_h
#define CATIMfAxis_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "MecModItfCPP.h"
#include "CATIMfBRep.h"

class CATISpecObject_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMfAxis;
#else
extern "C" const IID IID_CATIMfAxis;
#endif

/**
 * Interface to get an axis BRep feature.
 */
class ExportedByMecModItfCPP CATIMfAxis : public CATIMfBRep
{
  CATDeclareInterface;
  public:

/**
 * Returns the support.
 * @return
 * This support is a <tt>CATIMfFsur</tt> BRep feature.
 */
  virtual CATISpecObject_var GetFeatSupport() const =0;

};

CATDeclareHandler( CATIMfAxis, CATIMfBRep ) ;

#endif








