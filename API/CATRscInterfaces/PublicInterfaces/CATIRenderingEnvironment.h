#ifndef CATIRenderingEnvironment_h
#define CATIRenderingEnvironment_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATRscItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATRenderingEnum.h"
#include "CATIRenderingEnvironmentWall.h"



#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATRscItfCPP IID IID_CATIRenderingEnvironment;
#else
extern "C" const IID IID_CATIRenderingEnvironment;
#endif

/** 
  * Interface to manage environment objects.
  * Each environment object is composed of several environment walls objects.
  * @see CATIRenderingEnvironmentWall
  */


class ExportedByCATRscItfCPP CATIRenderingEnvironment : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 *  Returns the name of a environment object.
 */
    virtual CATUnicodeString GetName() const = 0;

/** 
 *  Set the name of a environment object
 */
    virtual HRESULT SetName(const CATUnicodeString &iName) = 0;

/**
 *  Returns the type of a environment object.
 * <br><b>Legal values</b>:
 * <br>CubicalEnvironment for a cubical environment.
 * <br>SphericalEnvironment for a spherical environment.
 * <br>CylindricalEnvironment for a cylindrical environment.
 */
    virtual CATRenderingEnvironmentType GetType() const = 0;

/**
 *  Returns the status of a environment object.
 * @return
 *   An boolean value. 
 * <br><b>Legal values</b>:
 * <br>TRUE if environment is active.
 * <br>FALSE if environment is desactivated.
 */
    virtual CATBoolean GetStatus() const = 0;

/** 
 *  Set the status of a environment object
 * @param iStatus
 *   The environment status 
 * <br><b>Legal values</b>:
 * <br>TRUE if environment is active.
 * <br>FALSE if environment is desactivated.
 */
    virtual HRESULT SetStatus(const CATBoolean iStatus) = 0;

/**
 *  Returns the origin coordinates of a environment object.
 * @return
 *   Double values. 
 */
    virtual void GetOrigin(double &oXcoordinate, double &oYcoordinate, double &oZcoordinate) const = 0;

/**
 *  Sets the origin coordinates of a environment object.
 * @param iXcoordinate
 *   X coordinate of the origin point 
 * @param iYcoordinate
 *   Y coordinate of the origin point 
 * @param iZcoordinate
 *   Z coordinate of the origin point 
 */
    virtual HRESULT SetOrigin(const double iXcoordinate, const double iYcoordinate, const double iZcoordinate) const = 0;

/**
 *  Returns the vertical axis coordinates of a environment object.
 * @return
 *   Double values. 
 */
    virtual void GetVerticalAxis(double &oXcoordinate, double &oYcoordinate, double &oZcoordinate) const = 0;

/**
 *  Sets the vertical axis coordinates of a environment object.
 * @param iXcoordinate
 *   X coordinate of the vertical axis 
 * @param iYcoordinate
 *   Y coordinate of the vertical axis 
 * @param iZcoordinate
 *   Z coordinate of the vertical axis
 * N.B. The target coordinates are useless for point lights or spherical area lights.
 */
    virtual HRESULT SetVerticalAxis(const double iXcoordinate, const double iYcoordinate, const double iZcoordinate) const = 0;

/**
 *  Returns a size value of an environment object.
 * @param iSizeType
 * <br><b>Legal values</b>:
 * <br>Length for a rectangular environment.
 * <br>Width for a rectangular environment.
 * <br>Radius for a spherical environment.
 * <br>Height for a cylindrical environment.
 * @return
 *    oSize: The size value.
 */
    virtual void GetEnvironmentSize(CATRenderingSize iSizeType, double &oSize) const = 0;

/**
 *  Sets a size value of a environment object.
 * @param iSizeType
 * <br><b>Legal values</b>:
 * <br>Length for a rectangular environment.
 * <br>Width for a rectangular environment.
 * <br>Radius for a spherical environment.
 * <br>Height for a cylindrical environment.
 * @param iSize
 *   The size value.
 */
    virtual HRESULT SetEnvironmentSize(CATRenderingSize iSizeType, const double iSize) const = 0;

/**
 *  Returns a wall of a environment object.
 * @param iWallType: The wall type
 * <br><b>Legal values</b>:
 *   <br>North for the north wall (for cubical and cylindrical environments).
 *   <br>South for the south wall (for cubical and cylindrical environments).
 *   <br>West for the west wall (for cubical environments).
 *   <br>East for the east wall (for cubical environments).
 *   <br>Top for the ceilar wall (for cubical, cylindrical and spherical environments).
 *   <br>Bottom for the bottom wall (for cubical, cylindrical and spherical environments).
 * @return
 *    The environment wall object of the environment.
 */
    virtual CATIRenderingEnvironmentWall* GetWall(CATRenderingWallType iWallType) const = 0;

};

CATDeclareHandler(CATIRenderingEnvironment, CATBaseUnknown);

#endif
