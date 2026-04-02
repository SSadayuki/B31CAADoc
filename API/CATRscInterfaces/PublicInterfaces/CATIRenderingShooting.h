#ifndef CATIRenderingShooting_h
#define CATIRenderingShooting_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATRscItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATRenderingEnum.h"
#include "CATIRenderingEnvironment.h"
#include "CATI3DCamera.h"
#include "CATLISTV_CATBaseUnknown.h"




#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATRscItfCPP IID IID_CATIRenderingShooting;
#else
extern "C" const IID IID_CATIRenderingShooting;
#endif

/** 
  * Interface to manage shooting objects.
  * @see CATIRenderingShootingFactory
  */


class ExportedByCATRscItfCPP CATIRenderingShooting : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 *  Returns the name of a shooting object.
 */
    virtual CATUnicodeString GetName() const = 0;

/** 
 *  Set the name of a shooting object
 */
    virtual HRESULT SetName(const CATUnicodeString &iName) = 0;

/**
 *  Returns the status of a shooting object.
 * @return
 *   An boolean value. 
 * <br><b>Legal values</b>:
 * <br>TRUE if shooting is active.
 * <br>FALSE if shooting is desactivated.
 * <br>
 * N.B. Only one shooting can be activated in a document.
 */
    virtual CATBoolean GetStatus() const = 0;

/** 
 *  Set the status of a shooting object
 * @param iStatus
 *   The shooting status 
 * <br><b>Legal values</b>:
 * <br>TRUE if shooting is active.
 * <br>FALSE if shooting is desactivated.
 * <br>
 * N.B. Only one shooting can be activated in a document.
 */
    virtual HRESULT SetStatus(const CATBoolean iStatus) = 0;

/**
 *  Returns the environment object used for the shooting.
 * @return
 *    The environment object
 * <br>
 * N.B. If NULL is returned, no environment is used for shooting
 * @see CATIRenderingEnvironment
 */
    virtual CATIRenderingEnvironment* GetEnvironment() const = 0;

/**
 *  Sets the environment object used for the shooting.
 * @param iEnvironment
 *    The environment object used for the shooting
 *    iEnvironment = NULL means that no environment is used for shooting
 * @see CATIRenderingEnvironment
 */
    virtual HRESULT SetEnvironment(const CATIRenderingEnvironment* iEnvironment) = 0;

/**
 *  Returns the camera object used for the shooting.
 * @return
 *    The camera object
 * <br>
 * N.B. If NULL is returned, no camera is used for shooting and current model viewpoint is used
 * @see CATI3DCamera
 */
    virtual CATI3DCamera* GetCamera() const = 0;

/**
 *  Sets the camera object used for the shooting.
 * @param iCamera
 *    The camera object used for the shooting
 *    iCamera = NULL means that the current viewpoint is used for shooting
 * @see CATI3DCamera
 */
    virtual HRESULT SetCamera(const CATI3DCamera* iCamera) = 0;

/**
 * Returns the lights used by the shooting.
 * @return
 *   The active lights list.
 */
    virtual CATListValCATBaseUnknown_var * GetLights() const = 0;

/**
 * Sets the light objects used for the shooting.
 * @param iLightList
 *   The list of active lights for the shooting.
 */
    virtual HRESULT SetLights(const CATListValCATBaseUnknown_var * iLightList) = 0;

/**
 * Render the shooting.
 * Warning: This method sets the shooting as active in the document.
 */
    virtual HRESULT Render() = 0;


};

CATDeclareHandler(CATIRenderingShooting, CATBaseUnknown);

#endif
