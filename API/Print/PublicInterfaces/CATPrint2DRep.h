#ifndef CATPRINT2DREP_h
#define CATPRINT2DREP_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATPrint.h"
#include "CAT2DBagRep.h"

class CATBaseUnknown;
class CATPrintParameters;
class CATVizDisplayContext;

/**
 * Class to create a 2D-rep from a printable object for display purposes.
 * @see CAT2DBagRep
 */
class ExportedByCATPrint CATPrint2DRep : public CAT2DBagRep  
{

public:

/**
 * Constructs a CATPrint2DRep.
 * @param iUnknown
 *   The printable object which implements the @href CATIPrintable interface.
 * @param iParameters
 *   The parameters to print the object.
 */
	CATPrint2DRep(CATBaseUnknown* iUnknown, const CATPrintParameters& iParameters);

/**
 * @nodoc
 */
	CATPrint2DRep(CATBaseUnknown* iUnknown, const CATPrintParameters& iParameters, CATVizDisplayContext* vdc);
};

#endif 








