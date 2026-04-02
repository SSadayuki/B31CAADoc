#ifndef ENOVIUEVolumeComputing_H
#define ENOVIUEVolumeComputing_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

// =================================================================
// Includes
// =================================================================
#include "GUIDVPMInterfaces.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIUEVolumeComputing;
#else
extern "C" const IID IID_ENOVIUEVolumeComputing;
#endif
//------------------------------------------------------------------
/**
 * User Exit to manage the items used to calculate object volume.
 * <br><b>Role</b>: Interface to be implemented in order to define 
 * the participation of the item inside the volume calculation.
 */
class ExportedByGUIDVPMInterfaces ENOVIUEVolumeComputing : public CATBaseUnknown
{
    CATDeclareInterface;

    public:
    //return:


/**
 * Method to define the participation of the item inside the volume calculation.
 * @return
 * An HRESULT.
 * <br><b>Legal values</b>:
 * <dl>
 *    <dt>S_OK
 *    <dd>The item participates in the volume calculation.
 *    <dt>S_FALSE
 *    <dd>The item does not participate in the volume calculation.
 *    <dt>FAILED
 *    <dd>An ERROR occured.
 * </dl>
 */
    virtual HRESULT Participate()=0;
};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
/** @nodoc */
CATDeclareHandler(ENOVIUEVolumeComputing, CATBaseUnknown);

#endif

