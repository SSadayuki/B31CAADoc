#ifndef CATIRenderingShootingFactory_h
#define CATIRenderingShootingFactory_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATRscItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATIRenderingShooting.h"
#include "CATListOfCATBaseUnknown.h"



#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATRscItfCPP IID IID_CATIRenderingShootingFactory;
#else
extern "C" const IID IID_CATIRenderingShootingFactory;
#endif

/** 
  * Interface to manage shooting objects.
  * @see CATIRenderingShooting
  */


class ExportedByCATRscItfCPP CATIRenderingShootingFactory : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/** 
 *  Create a new shooting object
 * @param iName
 *   The shooting name 
 * @return
 *    A new shooting object
 */
    virtual HRESULT CreateShooting(const CATUnicodeString &iName, CATIRenderingShooting** oShooting) = 0;

/** 
 *  Returns a list of existing shooting objects in the current document
 * @param oListOfShootings
 *    The list of all shootings belonging to the document.
 *    The list is defined and managed by the caller.
 * @return
 *    HRESULT
 * @see CATLISTP(CATBaseUnknown)
 */
    virtual HRESULT ListShootings(CATLISTP(CATBaseUnknown)& oListOfShootings) = 0;

};

CATDeclareHandler(CATIRenderingShootingFactory, CATBaseUnknown);

#endif
