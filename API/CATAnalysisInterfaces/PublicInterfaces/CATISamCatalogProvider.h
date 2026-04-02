#ifndef CATISamCatalogProvider_H
#define CATISamCatalogProvider_H
// COPYRIGHT DASSAULT SYSTEMES 2003
//===================================================================
//
/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */
//
#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"
#include "CATIContainer.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamCatalogProvider ;
#else
extern "C" const IID IID_CATISamCatalogProvider ;
#endif

/**
 * Add a CATfct file to a container.
 */

class ExportedByCATAnalysisInterface CATISamCatalogProvider: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Associate an Applicative feature catalog to the late type.
 * Warning : this method will be called on the late type of the StartUp. 
 * @param iName The startup name.<br>
 * @param ipiContainer The container on which the catalog needs to be retrieved.
 * This pointer needs to be used in order to load the catalog by using 
 * the @see AccessCatalog global function.
 *
 * @return Error code.
 * <br><b>Legal values</b>: 
 * <ul>
 * <li><font color="red">S_OK</font color="red"> Catalog Loaded. </li>
 * <li><font color="red">S_FALSE</font color="red"> Unknown Startup.</li>
 * <li><font color="red">E_FAIL</font color="red"> Internal Error.</li>
 * </ul>
 * @see CATISamAnalysisModelFactory.
 */

    virtual HRESULT AssociateCatalog(CATUnicodeString iName,
                                     const CATIContainer* ipiContainer) = 0;
};

//------------------------------------------------------------------

CATDeclareHandler( CATISamCatalogProvider, CATBaseUnknown );

#endif
