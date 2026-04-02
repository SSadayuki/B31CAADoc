#ifndef CATIRdgEnvironment_h
#define CATIRdgEnvironment_h

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATRdgItfCPP.h"
#include "CATIRdgBase.h"
#include "CATBooleanDef.h"


class CATString;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATRdgItfCPP IID IID_CATIRdgEnvironment;
#else
extern "C" const IID IID_CATIRdgEnvironment;
#endif

/** 
 * Interface for environments.
 * <b>Role</b>:
 * This is the interface that every environment implements.
 * It is used to access the data needed for rendering.
 */

class ExportedByCATRdgItfCPP CATIRdgEnvironment : public CATIRdgBase
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
    enum CATEnvironmentType { Box=1, Sphere=2, Cylinder=3 };

/**
 * Returns the environment type.
 * @param oType
 *   The environment type.
 *   <ul> light type.
 *   <li> Box </li>
 *   <li> Sphere </li>
 *   <li> Cylinder </li>
 *   </ul>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetShapeType(CATIRdgEnvironment::CATEnvironmentType &oType) = 0;

/**
 * Returns the box environment size.
 * @param oLength
 *   The length value (in mm).
 * @param oWidth
 *   The width value (in mm).
 * @param oHeight
 *   The height value (in mm).
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetBoxSize(double &oLength, double &oWidth, double &oHeight) = 0;

/**
 * Returns the sphere environment size.
 * @param oRadius
 *   The radius value (in mm).
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetSphereSize(double &oRadius) = 0;

/**
 * Returns the cylinder environment size.
 * @param oRadius
 *   The radius value (in mm).
 * @param oHeight
 *   The height value (in mm).
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetCylinderSize(double &oRadius, double &oHeight) = 0;

/**
 * Returns the wall count.
 * @param oCount
 *   The count of walls.
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetWallCount(int &oCount) = 0;

/** @nodoc */
    enum CATLocation { North=1, South=2, West=3, East=4, Top=5, Bottom=6 };

/**
 * Returns the wall visibility status.
 * @param iWall
 *   The wall location.
 * @param oStatus
 *   The wall status.
 *   <ul> wall status.
 *   <li> TRUE  wall is visible </li>
 *   <li> FALSE wall is not visible </li>
 *   </ul>
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetWallStatus(CATIRdgEnvironment::CATLocation iWall, CATBoolean &oStatus) = 0;

/**
 * Returns the wall data.
 * @param iWall
 *   The wall location.
 * @param oColor
 *   The RGBA color. Each color component ranges
 *   from <code>0.</code> to <code>1.</code>. 
 * @param oShadows
 *   The shadows status.
 *   <ul> shadows status.
 *   <li> TRUE  wall can be shadowed </li>
 *   <li> FALSE wall is not shadowed </li>
 *   </ul>
 * @param oTexture
 *   The path of the texture file.
 * @param oOffset
 *   The texture offsets on U and V axis.
 * @param oScale
 *   The texture scales on U and V axis.
 * @param oFlip
 *   The texture flip status on U and V axis.
 *   <ul> flip status.
 *   <li> TRUE  texture is flipped </li>
 *   <li> FALSE texture is not flipped </li>
 *   </ul>
 * @param oAngle
 *   The texture rotation angle (in degrees).
 * @return
 *   An HRESULT value.
 *   <br><b> Legal values</b>:
 *   <li><tt>S_OK</tt> the operation succeeded </li>
 *   <li><tt>E_FAIL</tt> otherwise </li>.
 */
    virtual HRESULT GetWall(CATIRdgEnvironment::CATLocation iWall, 
                            double      oColor[4],
                            CATBoolean &oShadows,
                            CATString  &oTexture,
                            double      oOffset[2],
                            double      oScale[2],
                            CATBoolean  oFlip[2],
                            double     &oAngle) = 0;
};

/** @nodoc */
CATDeclareHandler(CATIRdgEnvironment,CATIRdgBase);

#endif
