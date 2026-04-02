#ifndef CATIRenderingLightFactory_h
#define CATIRenderingLightFactory_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATRscItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATRenderingEnum.h"
#include "CATIRenderingLight.h"
#include "CATListOfCATBaseUnknown.h"



#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATRscItfCPP IID IID_CATIRenderingLightFactory;
#else
extern "C" const IID IID_CATIRenderingLightFactory;
#endif

/** 
  * Interface to manage light objects.
  * @see CATIRenderingLight
  */


class ExportedByCATRscItfCPP CATIRenderingLightFactory : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/** 
 *  Create a new light object
 * @param iName
 *   The light name 
 * @param iType
 *   The light type 
 * <br><b>Legal values</b>:
 * <br>SpotLight for a spot light.
 * <br>PointLight for a point light.
 * <br>DirectionalLight for a directionnal light.
 * <br>RectangleAreaLight for a rectangle area light.
 * <br>DiskAreaLight for a disk area light.
 * <br>SphereAreaLight for a spherical area light.
 * <br>CylindricAreaLight for a cylindrical area light.
 * @return
 *    A new light object
 * @see CATRenderingLightType
 */
    virtual HRESULT CreateLight(const CATUnicodeString &iName, const CATRenderingLightType iType, CATIRenderingLight** oLight) = 0;

/** 
 *  Returns a list of existing light objects in the current document
 * @param oListOfLights
 *    The list of all lights belonging to the document.
 *    The list is defined and managed by the caller.
 * @return
 *    HRESULT
 * @see CATLISTP(CATBaseUnknown)
 */
    virtual HRESULT ListLights(CATLISTP(CATBaseUnknown)& oListOfLights) = 0;

};

CATDeclareHandler(CATIRenderingLightFactory, CATBaseUnknown);

#endif
