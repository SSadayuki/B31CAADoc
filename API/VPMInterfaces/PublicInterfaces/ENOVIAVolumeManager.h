#ifndef ENOVIAVolumeManager_H
#define ENOVIAVolumeManager_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
 
// =================================================================
// Includes
// =================================================================
// System
#include "GUIDVPMInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATCORBABoolean.h"

// =================================================================
// Forward classes declaration
// =================================================================
class CATMathPoint;
class CATSiIn3DMap;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIAVolumeManager;
#else
extern "C" const IID IID_ENOVIAVolumeManager;
#endif

//------------------------------------------------------------------
/**
 * Interface to manage the volume property of Object.
 * <br><b>Role</b>: Bounding Volume is the Volume of a cubical Bounding Box
 * defined by its two extreme points (These points are defined as CATMathPoints). 
 */
class ExportedByGUIDVPMInterfaces ENOVIAVolumeManager : public CATBaseUnknown
{
    CATDeclareInterface;

    public:
    //
    // =======================================================
    // Method(s) 
    // =======================================================

/**
 * @nodoc
 */
    virtual HRESULT ActivateBoundingVolumeComputing()=0;

/**
 * @nodoc
 */
    virtual HRESULT DeactivateBoundingVolumeComputing()=0;

/**
 * @nodoc
 */
    virtual HRESULT IsBoundingVolumeComputingActivated()=0;

/**
 * @nodoc
 */
    virtual HRESULT RemoveBoundingVolumeComputing()=0;

/**
 * Retrieves Bounding Volume attribute values associated to the Object.
 * @param pcorner1
 *   The CATMathPoint for the lower corner of Bounding Box.
 * @param pcorner2
 *   The CATMathPoint for the upper corner of Bounding Box.
 */
    virtual HRESULT get_BoundingVolume(CATMathPoint *& pcorner1,CATMathPoint *& pcorner2)=0;

/**
 * @nodoc
 */
    virtual HRESULT ComputeBoundingVolume()=0;

/**
 * @nodoc
 */
    virtual HRESULT PropagateBoundingVolume()=0;

/**
 * @nodoc
 */
    virtual HRESULT NotifyVolumeModification()=0;

/**
 * @nodoc
 */
    virtual HRESULT SaveSpaceMap(CATSiIn3DMap* SpaceMap)=0;

/**
 * @nodoc
 * it is the caller's responsibility to Release the spacemap object returned by this method.
 */
    virtual HRESULT get_SpaceMap(CATSiIn3DMap *& SpaceMap)=0;

/**
 * @nodoc
 * it is the caller's responsibility to Release the spacemap object returned by this method.
 */
    virtual HRESULT ComputeSpaceMap(CATSiIn3DMap *& SpaceMap)=0;

/**
 * @nodoc
 */
    virtual HRESULT DeleteSpaceMap()=0;

/**
 * @nodoc
 */
    virtual HRESULT CheckClearence(double Clearance,
			           ENOVIAVolumeManager *VolumeManager,
			           boolean & Check)=0;
};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
/** @nodoc */
CATDeclareHandler(ENOVIAVolumeManager, CATBaseUnknown);

#endif

