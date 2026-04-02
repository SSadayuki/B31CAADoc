#ifndef CATIMfLine_H_ 
#define CATIMfLine_H_ 

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// COPYRIGHT DASSAULT SYSTEMES 1999  

#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMfLine;
#else
extern "C" const IID IID_CATIMfLine;
#endif

/**
 * Interface to filter features whose associated topology is a line.
 * <b>Role</b>: Query this interface on a mechanical feature. If the query
 * succeeds, the topology associated with the feature is a line.
 */

class ExportedByMecModItfCPP CATIMfLine : public CATBaseUnknown
{
  CATDeclareInterface;
  public:
};

CATDeclareHandler( CATIMfLine, CATBaseUnknown ) ;

#endif
