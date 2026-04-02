#ifndef CATIPRINTABLE_H
#define CATIPRINTABLE_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "CATPrintBase.h"
#include "CATBaseUnknown.h"
class CATPrintImage;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATPrintBase IID IID_CATIPrintable;
#else
extern "C" const IID IID_CATIPrintable;
#endif

/**
 * Interface for printable objects.
 */
class ExportedByCATPrintBase CATIPrintable : public CATBaseUnknown
{
    CATDeclareInterface;

public:

/**
 * Creates a CATPrintImage from the printable object.
 * @return 
 *   The image created.
 */
    virtual CATPrintImage* CreatePrintableImage( void ) = 0;
};

CATDeclareHandler(CATIPrintable, CATBaseUnknown);

#endif
