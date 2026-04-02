#ifndef CATISweepLimit_H
#define CATISweepLimit_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATIPrtSimpleLimit.h>

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATISweepLimit;
#else
extern "C" const IID IID_CATISweepLimit;
#endif

/**
 * Class to manage sweep limit.
 * <b>Role</b>: Behavior of this interface is defined in the 
 * CATIPrtSimpleLimit.
 * @see CATIPrtSimpleLimit
 */

class ExportedByPartItf CATISweepLimit : public CATIPrtSimpleLimit
{
   CATDeclareInterface;
   
public:
};

CATDeclareHandler(CATISweepLimit, CATIPrtSimpleLimit);

#endif // CATISweepLimit_H
