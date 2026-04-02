// COPYRIGHT DASSAULT SYSTEMES 2001
//===================================================================
//
// CATIInertia.h
//   This interface allows the management of 3D Markers.
//
//===================================================================
#ifndef CATIPersistent3DMarker_H
#define CATIPersistent3DMarker_H

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATNavigatorItf.h"

#include "CATBaseUnknown.h"

class CATListValCATISpecObject_var;
class CATI3DMarker;

// Deprecated includes and forward declarations
#include "CATIContainer.h"
#include "CATListOfCATI3DMarker.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATNavigatorItf IID IID_CATIPersistent3DMarker;
#else
extern "C" const IID IID_CATIPersistent3DMarker;
#endif

/**
 * Represents the factory for 3D marker objects.
 * <p>
 * The 3D marker object enables the user to annotate the mockup in 3D.
 * <p>
 * A 3D marker object can be deleted using LifeCyleObject interface.
 */
class  ExportedByCATNavigatorItf CATIPersistent3DMarker : public CATBaseUnknown
{
   CATDeclareInterface;

  public:

    /**
     * Creates a 3D marker.
     * @param opMarker
     *    The created 3D marker.
     * @return
     *    HRESULT
     */
    virtual HRESULT CreateMarker(CATI3DMarker *& opMarker) = 0;

    /**
     * Retrieves the list of existing 3D markers.
     * @param ioMarkerList
     *    The list of existing 3D markers.
     * @return
     *    HRESULT
     */
    virtual HRESULT ListMarkers(CATListValCATISpecObject_var & ioMarkerList) = 0;



    // Deprecated methods : DO NOT USE

    /** @nodoc */
     virtual CATLISTV(CATI3DMarker_var) GetMarkers() = 0;
    /** @nodoc */
     virtual CATI3DMarker * AddMarker()= 0;
    /** @nodoc */
     virtual void RemoveMarker(CATI3DMarker * marker)= 0;
    /** @nodoc */
     virtual CATIContainer_var GetMarkerContainer() = 0;
};

CATDeclareHandler(CATIPersistent3DMarker, CATBaseUnknown);

#endif
