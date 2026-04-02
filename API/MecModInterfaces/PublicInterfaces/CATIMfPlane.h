#ifndef CATIMfPlane_H_ 
#define CATIMfPlane_H_ 

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// COPYRIGHT DASSAULT SYSTEMES 1999  

#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMfPlane;
#else
extern "C" const IID IID_CATIMfPlane;
#endif

/**
 * Interface to filter features whose associated topology is a plane.
 * <b>Role</b>: Query this interface on a mechanical feature. If the query succeeds,
 * the associated topology is a plane.
 */

class ExportedByMecModItfCPP CATIMfPlane : public CATBaseUnknown
{
  CATDeclareInterface;
  public:
};

CATDeclareHandler( CATIMfPlane, CATBaseUnknown ) ;

#endif
