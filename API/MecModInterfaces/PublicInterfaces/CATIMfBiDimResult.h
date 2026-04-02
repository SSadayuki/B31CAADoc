#ifndef CATIMfBiDimResult_h
#define CATIMfBiDimResult_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP  IID IID_CATIMfBiDimResult;
#else
extern "C" const IID IID_CATIMfBiDimResult;
#endif

/**
 * Interface to filter features whose topological result is two dimensional.
 * <b>Role</b>: Query this interface on the geometrical feature to be checked. 
 * The query will succeed if all the domains
 * of the resulting body are two dimensional.
 */
class ExportedByMecModItfCPP  CATIMfBiDimResult : public CATBaseUnknown
{
  CATDeclareInterface;
public:
};

CATDeclareHandler(CATIMfBiDimResult, CATBaseUnknown);

#endif
