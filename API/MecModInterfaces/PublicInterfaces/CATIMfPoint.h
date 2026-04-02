#ifndef CATIMfPoint_H_ 
#define CATIMfPoint_H_ 

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// COPYRIGHT DASSAULT SYSTEMES 1999  

#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMfPoint;
#else
extern "C" const IID IID_CATIMfPoint;
#endif

/**
 * Interface to filter features whose associated topology is a point.
 * <b>Role</b>: Query this interface on a mechanical feature.
 * If the query succeeds, the associated topology is a point.
 */

class ExportedByMecModItfCPP CATIMfPoint : public CATBaseUnknown
{
  CATDeclareInterface;
  public:
};

CATDeclareHandler( CATIMfPoint, CATBaseUnknown ) ;

#endif
