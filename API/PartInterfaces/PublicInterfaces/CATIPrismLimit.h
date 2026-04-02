#ifndef CATIPrismLimit_H
#define CATIPrismLimit_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATIPrtLimit.h>


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIPrismLimit;
#else
extern "C" const IID IID_CATIPrismLimit;
#endif

/**
 * Interface which characterizes the prism limit behavior.
 */
class ExportedByPartItf CATIPrismLimit : public CATIPrtLimit
{
  CATDeclareInterface;

  public:
};

CATDeclareHandler (CATIPrismLimit, CATIPrtLimit); 

#endif // CATIPrismLimit_H
