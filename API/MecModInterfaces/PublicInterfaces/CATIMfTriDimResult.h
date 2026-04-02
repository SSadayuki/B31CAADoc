#ifndef CATIMfTriDimResult_h
#define CATIMfTriDimResult_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP  IID IID_CATIMfTriDimResult;
#else
extern "C" const IID IID_CATIMfTriDimResult;
#endif

/**
 * Interface to filter features whose topological result is three dimensional.
 * <b>Role</b>: Query this interface on the geometrical feature to be checked. 
 * The query will succeed if all the domains
 * of the resulting body are three dimensional.
 */
class ExportedByMecModItfCPP  CATIMfTriDimResult : public CATBaseUnknown
{
  CATDeclareInterface;
public:
};

CATDeclareHandler(CATIMfTriDimResult, CATBaseUnknown);

#endif
