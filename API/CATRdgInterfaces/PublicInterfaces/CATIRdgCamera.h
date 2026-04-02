#ifndef CATIRdgCamera_h
#define CATIRdgCamera_h

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATRdgItfCPP.h"
#include "CATIRdgBase.h"
#include "sequence_CATBaseUnknown_ptr.h"
#include "CATBooleanDef.h"


class CATIRdgCamera;
class CATIRdgEnvironment;
class CATIRdgOptions;
class CATIRdgBag;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATRdgItfCPP IID IID_CATIRdgCamera;
#else
extern "C" const IID IID_CATIRdgCamera;
#endif

/** 
 * Interface for cameras.
 * <b>Role</b>:
 * This is the interface that every camera and viewpoint implements.
 * It is used to access the data needed for rendering.
 */

class ExportedByCATRdgItfCPP CATIRdgCamera : public CATIRdgBase
{
/** @nodoc */
  CATDeclareInterface;

  public:

/**
 * Returns the transformation matrix.
 * @param oTransfo
 *   The matrix. The coefficients are given COLUMN by COLUMN.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetTransfo(double oTransfo[12]) = 0;

/** @nodoc */
    enum CATProjectionType { Perspective=1, Parallel=2 };

/**
 * Returns the projection type.
 * @param oType
 *   The projection type.
 *   <ul> projection type.
 *   <li> Perspective </li>
 *   <li> Parallel </li>
 *   </ul>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetProjectionType(CATIRdgCamera::CATProjectionType &oType) = 0;

/**
 * Returns the focal length of a perspective camera.
 * @param oFocalLength
 *   The focal length (distance from the pinhole 
 *   camera to the viewing plane).
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetFocalLength(double &oFocalLength) = 0;

/**
 * Returns the zoom factor of a parallel camera.
 * @param oZoom
 *   The zoom factor
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetZoom(double &oZoom) = 0;

/**
 * Returns the view Angle
 * @param oAngle
 *   The angle is the aperture of the Camera*
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetViewAngle(double &oAngle) = 0;

/**
 * Returns the focus distance.
 * @param oFocusDistance
 *   The distance where objects appear in focus.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetFocusDistance(double &oFocusDistance) = 0;

/**
 * Returns the clipping planes.
 * @param oNear
 *   The near plane.
 * @param oFar
 *   The far plane.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetClippingPlanes(double &oNear, double &oFar) = 0;
};

/** @nodoc */
CATDeclareHandler(CATIRdgCamera,CATIRdgBase);

#endif
