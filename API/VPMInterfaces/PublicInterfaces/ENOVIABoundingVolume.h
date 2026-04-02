#ifndef ENOVIABoundingVolume_H
#define ENOVIABoundingVolume_H

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

// =================================================================
// Forward classes declaration
// =================================================================

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIABoundingVolume;
#else
extern "C" const IID IID_ENOVIABoundingVolume;
#endif

//------------------------------------------------------------------
/**
 * Interface to manage the Bounding Volume attributes of Objects.
 * <br><b>Role</b>: Bounding Volume is the Volume of a cubical Bounding Box
 * defined by its two extreme points. The two corner points
 * are minpoint described by (oX1,oY1,oZ1) and maxpoint described by (oX2,oY2,oZ2).
 */
class ExportedByGUIDVPMInterfaces ENOVIABoundingVolume : public CATBaseUnknown
{
    CATDeclareInterface;

    public:
    //
    // =======================================================
    // Method(s) 
    // =======================================================

/**
 * Retrieves Bounding Volume attribute values.
 * @param oX1
 *   The X-coordinate of lower corner (min Point) of Bounding Box.
 * @param oY1
 *   The Y-coordinate of lower corner (min Point) of Bounding Box.
 * @param oZ1
 *   The Z-coordinate of lower corner (min Point) of Bounding Box.
 * @param oX2
 *   The X-coordinate of upper corner (max Point) of Bounding Box.
 * @param oY2
 *   The Y-coordinate of upper corner (max Point) of Bounding Box.
 * @param oZ2
 *   The Z-coordinate of upper corner (max Point) of Bounding Box.
 */
    virtual HRESULT  __stdcall get_BoundingVolume
			    (double & oX1,
			     double & oY1,
			     double & oZ1,
			     double & oX2,
			     double & oY2,
			     double & oZ2)=0;

/**
 * @nodoc
 */
    virtual HRESULT  __stdcall put_BoundingVolume
			    (double oX1,
			     double oY1,
			     double oZ1,
			     double oX2,
			     double oY2,
			     double oZ2)=0;

/**
 * @nodoc
 */
    virtual HRESULT  __stdcall ResetBoundingVolume()=0;

/**
 * @nodoc
 */
    virtual HRESULT  __stdcall IsUptodate()=0;
};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
/** @nodoc */
CATDeclareHandler(ENOVIABoundingVolume, CATBaseUnknown);

#endif




