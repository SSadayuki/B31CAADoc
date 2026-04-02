#ifndef CATISlot_H
#define CATISlot_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#include <PartItf.h>
#include <CATISweep.h>

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByPartItf IID IID_CATISlot;
#else
extern "C" const IID IID_CATISlot;
#endif

/**
 * Class to manage Slot feature.
 * <b>Role</b>: Slot shape is made up of a profile swept along a center curve.
 * Profile and centercurve are represented by sketches.
 * <br>Slot shape is a negative shape: it removes material from the mechanical body it
 * belongs to.
 * <br>The behavior of this interface is defined in the CATISweep interface.
 * @see CATISweep, CATIRib
 */
 class ExportedByPartItf CATISlot : public CATISweep
{
   CATDeclareInterface;

   public:
};

CATDeclareHandler(CATISlot, CATISweep);

#endif // CATISlot_H
