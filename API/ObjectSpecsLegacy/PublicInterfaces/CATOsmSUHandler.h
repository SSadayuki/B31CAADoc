#ifndef CATOsmSUHandler_H_
#define CATOsmSUHandler_H_

// COPYRIGHT DASSAULT SYSTEMES 2007  
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBoolean.h"
#include "CATUnicodeString.h" // default constructor
#include "CATOsmIn.h"

class CATOsmSUHandlerInternal;
class CATISpecObject_var;
class CATIContainer;
/**
 * Provides access to a startup stored in catalogs.
 *<pre>
 *  CATIContainer *piRootContainer;
 *  ...
 *  CATOsmSUHandler CAAOsmNovel("CAAOsmNovel", "CAAOsmClientId", "CAAOsmCatalogSU.CATfct" );
 *  CATISpecObject_var spnew_inst;
 *  rc = CAAOsmNovel.Instanciate(spnew_inst, piRootContainer,"CAAOsmNovel1");
 *  if( FAILED(rc) )
 *  ...  
 *     
 *</pre>
 */
class ExportedByCATOsmIn CATOsmSUHandler 
{
  public:
    /**
     * Prepares the access to a specified startup stored in a given catalog.
     * @param iIdentification
     *   An identification of the Feature Definition.
     *   <br><b>Legal values</b>:
     *   <ul><li><tt>"`StartUpIdentifier`@`Catalog.CATfct`"</tt></li>
     *       <li><tt>"`StartUpIdentifier`#<number>@`Catalog.CATfct`"</tt></li>
     *       <li><tt>"0u???????-????-????-????????????????@`Catalog.CATfct`"</tt></li></ul>
     * @param iClientId the client id related to catalog 
     */
    CATOsmSUHandler(const CATUnicodeString & iIdentification, const CATUnicodeString & iClientId);

    /**
    * Prepares the access to a specified startup stored in a given catalog.
    * @param iLateTypeName the startup late type
    * @param iClientId the client id related to catalog 
    * @param iCatalogName the catalog base name
    */
    CATOsmSUHandler(const CATUnicodeString & iLateTypeName,const CATUnicodeString & iClientId, const CATUnicodeString & iCatalogName);

    ~CATOsmSUHandler();
    /**
     * Creates a new instance of the StartUp.
     * <br><b>Role:</b>From a StartUp, we can create objects inheriting both the type, the
     * values and the attributes of the StartUp. These new objects originating 
     * from the StartUp are called instances.
     * <br>Instances can be created either from a StartUp or from an instance.The  
     * object from which an instance originates is called the reference.
     * @param oObject
     *   The returned instance.
     * @param iContainer
     *   The container in which the instance will be created.
     * @param iName 
     *   The name to be given to the instance.
     *   if NULL, the instance will have the same name as the StartUp's.
     *<ul>
     *<li>S_OK call was successful</li>
     *<li>E_ACCESSDENIED incorrect catalog or invalid client id</li>
     *<li>E_INVALIDARG if the container is NULL</li>
     *<li>E_FAIL invalid startup or cannot instanciate object</li>
     *</ul>
     */
    HRESULT Instanciate(CATISpecObject_var &oObject, CATIContainer *iContainer ,const CATUnicodeString& iName = CATUnicodeString());
    /**
     * Retrieves the startup specified by CATOsmSUHandler constructor.
     * @param oStartup The startup
     *<ul>
     *<li>S_OK call was successful</li>
     *<li>E_ACCESSDENIED incorrect catalog or invalid client id</li>
     *<li>E_FAIL invalid startup</li>
     *</ul>
     */
    HRESULT RetrieveSU(CATISpecObject_var &oStartup);
    /**
     * Checks that the StartUp specified by CATOsmSUHandler constructor is valid.
     * @return HRESULT convention S_OK,E_ACCESSDENIED,E_FAIL
     * *<ul>
     *<li>S_OK call was successful</li>
     *<li>E_ACCESSDENIED incorrect catalog or invalid client id</li>
     *<li>E_FAIL invalid startup</li>
     *</ul>
     */ 
    HRESULT IsValid();
  private:
    CATOsmSUHandlerInternal &internal;
    CATOsmSUHandler(); // forbidden
    CATOsmSUHandler(const CATOsmSUHandler &); // forbidden
    CATOsmSUHandler &operator =(const CATOsmSUHandler &); // forbidden
};  

#endif
