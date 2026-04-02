#ifndef CATIRdgWorld_h
#define CATIRdgWorld_h

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATRdgItfCPP.h"
#include "CATBaseUnknown.h"
#include "sequence_CATBaseUnknown_ptr.h"
#include "CATBooleanDef.h"


class CATIRdgCamera;
class CATIRdgEnvironment;
class CATIRdgBag;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATRdgItfCPP IID IID_CATIRdgWorld;
#else
extern "C" const IID IID_CATIRdgWorld;
#endif

/** 
 * Interface for scene description.
 * <b>Role</b>:
 * This is the interface that every type of environment implements.
 * It is used to access the data needed for rendering.
 */

class ExportedByCATRdgItfCPP CATIRdgWorld : public CATBaseUnknown
{
/** @nodoc */
  CATDeclareInterface;

  public:

/**
 * Returns the rendered camera.
 * @param oCamera
 *   The camera to use. After use, a Release() must be made.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetCamera(CATIRdgCamera **oCamera) = 0;

/**
 * Returns the rendered lights.
 * @param oLights
 *   The lights to use. After use, a Release() must be made 
 *   on each element and the list must be deleted.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetLights(CATLISTP(CATBaseUnknown) **oLights) = 0;

/**
 * Returns the rendered environment.
 * @param oEnvironment
 *   The environment to use. After use, a Release() must be made.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetEnvironment(CATIRdgEnvironment **oEnvironment) = 0;

/**
 * Returns the geometry roots.
 * @param oRoots
 *   The roots. After use, a Release() must be made 
 *   on each element and the list must be deleted.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetRootObjects(CATLISTP(CATBaseUnknown) **oRoots) = 0;

/**
 * Returns the number of frames to compute.
 * @param oFrames
 *   The frame count.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetFrameCount(int &oFrames) = 0;

/**
 * Requests the scene update to a given frame.
 * @param iFrame
 *   The frame position to be set.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT SetFrame(int iFrame) = 0;
};

/** @nodoc */
CATDeclareHandler(CATIRdgWorld,CATBaseUnknown);

#endif
