#ifndef CATIRib_H
#define CATIRib_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include <PartItf.h>
#include <CATISweep.h>

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATIRib;
#else
extern "C" const IID IID_CATIRib;
#endif

/**
 * Class to manage Rib feature.
 * <b>Role</b>: Rib shape is made up of a profile swept along a center curve.
 * Profile and centercurve are represented by sketches.
 * <br>Rib shape is a positive shape: it adds material to the mechanical body it
 * belongs to.
 * <br>The behavior of this interface is defined in the CATISweep interface.
 * @see CATISweep, CATISlot
 */

class ExportedByPartItf CATIRib : public CATISweep
{
   CATDeclareInterface;
   
   public:
};

CATDeclareHandler(CATIRib, CATISweep);

#endif // CATIRib_H
