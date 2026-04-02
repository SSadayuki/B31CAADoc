#ifndef CATIRevolLimit_H
#define CATIRevolLimit_H
// COPYRIGHT DASSAULT SYSTEMES 2015

/**
 * @CAA2Required
 */


#include <PartItf.h>
#include <CATIPrtAngularLimit.h>


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIRevolLimit;
#else
extern "C" const IID IID_CATIRevolLimit;
#endif


/**
 * Interface which characterizes the revol limit behavior.
 */
class ExportedByPartItf CATIRevolLimit : public CATIPrtAngularLimit
{
  CATDeclareInterface;

  public:
};

CATDeclareHandler (CATIRevolLimit, CATIPrtAngularLimit); 

#endif // CATIRevolLimit_H

