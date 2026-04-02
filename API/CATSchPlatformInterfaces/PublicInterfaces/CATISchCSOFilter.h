#ifndef CATISchCSOFilter_H
#define CATISchCSOFilter_H

#include "CATSchItfCPP.h"
#include "CATICSOFilter.h"

// COPYRIGHT DASSAULT SYSTEMES 2000
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

/**
 * Interface manage the contextual menu commands for the selected objects.
 * @see CATICSOFilter
 */

class ExportedByCATSchItfCPP CATISchCSOFilter: public CATICSOFilter
{
  CATDeclareInterface;

  public:
};

#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByCATSchItfCPP IID_CATISchCSOFilter;
#else
extern "C" const IID IID_CATISchCSOFilter;
#endif

CATDeclareHandler(CATISchCSOFilter, CATICSOFilter);
//------------------------------------------------------------------

#endif
