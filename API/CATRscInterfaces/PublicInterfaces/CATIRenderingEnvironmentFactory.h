#ifndef CATIRenderingEnvironmentFactory_h
#define CATIRenderingEnvironmentFactory_h

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
#include "CATListOfCATBaseUnknown.h"



#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATRscItfCPP IID IID_CATIRenderingEnvironmentFactory;
#else
extern "C" const IID IID_CATIRenderingEnvironmentFactory;
#endif

/** 
  * Interface to manage environment objects.
  * @see CATIRenderingEnvironment
  */


class ExportedByCATRscItfCPP CATIRenderingEnvironmentFactory : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/** 
 *  Create a new environment object
 * @param iName
 *   The environment name 
 * @param iType
 *   The environment type 
 * <br><b>Legal values</b>:
 * <br>CubicalEnvironment for a cubical environment.
 * <br>SphericalEnvironment for a spherical environment.
 * <br>CylindricalEnvironment for a cylindrical environment.
 * @return
 *    A new environment object
 * @see CATRenderingEnvironmentType
 */
    virtual HRESULT CreateEnvironment(const CATUnicodeString &iName, const CATRenderingEnvironmentType iType, CATIRenderingEnvironment** oEnvironment) = 0;

/** 
 *  Returns a list of existing environment objects in the current document
 * @param oListOfEnvironments
 *    The list of all environments belonging to the document.
 *    The list is defined and managed by the caller.
 * @return
 *    HRESULT
 * @see CATLISTP(CATBaseUnknown)
 */
    virtual HRESULT ListEnvironments(CATLISTP(CATBaseUnknown)& oListOfEnvironments) = 0;

};

CATDeclareHandler(CATIRenderingEnvironmentFactory, CATBaseUnknown);

#endif
