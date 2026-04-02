#ifndef CATIMfInfiniteResult_h
#define CATIMfInfiniteResult_h

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMfInfiniteResult;
#else
extern "C" const IID IID_CATIMfInfiniteResult;
#endif

/**
 * Interface to filter features whose topological result is infinite.
 * <b>Role</b>: Query this interface on the geometrical feature to be checked. 
 * The query will succeed if all the domains
 * of the resulting body are infinite (infinite lines or planes).
 */
class ExportedByMecModItfCPP CATIMfInfiniteResult : public CATBaseUnknown
{
  CATDeclareInterface;
public:
};

CATDeclareHandler(CATIMfInfiniteResult, CATBaseUnknown);

#endif
