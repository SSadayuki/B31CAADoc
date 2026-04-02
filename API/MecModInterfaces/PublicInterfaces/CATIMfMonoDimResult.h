#ifndef CATIMfMonoDimResult_h
#define CATIMfMonoDimResult_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP  IID IID_CATIMfMonoDimResult;
#else
extern "C" const IID IID_CATIMfMonoDimResult;
#endif

/**
 * Interface to filter features whose topological result is mono dimensional.
 * <b>Role</b>: Query this interface on the geometrical feature to be checked. 
 * The query will succeed if all the domains
 * of the resulting body are mono dimensional.
 */
class ExportedByMecModItfCPP  CATIMfMonoDimResult : public CATBaseUnknown
{
  CATDeclareInterface;
public:
};

CATDeclareHandler(CATIMfMonoDimResult, CATBaseUnknown);

#endif
