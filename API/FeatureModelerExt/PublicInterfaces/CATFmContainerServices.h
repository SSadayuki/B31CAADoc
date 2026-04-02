
#ifndef __CATFmContainerServices_h__
#define __CATFmContainerServices_h__


// COPYRIGHT DASSAULT SYSTEMES 2010

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


// FeatureModelerExt forwards and headers.
class CATFmContainerFacade;
class CATFmCredentials;
#include "FeatureModelerExt.h" // ExportedByFeatureModelerExt

// Other forwards and headers.
class CATBaseUnknown;
class CATUnicodeString;
#include "IUnknown.h" // HRESULT


/**
 * Class grouping Feature Modeler services related to containers.
 */
class ExportedByFeatureModelerExt CATFmContainerServices
{
public:

  /**
   * Creates an Applicative container.
   * @param iAccreditations [in]
   *   The application accreditation set.
   * @param iContext [in]
   *   The context can be given as a pointer to a feature (use @href CATFmFeatureFacade#GetFeature ), to a container
   *   (use @href CATFmFeatureContainer#GetContainer ) or through a CATIPsiRepresentationReference pointer and
   *   will be used to find where the container has to be created (a Shape, a Technological Representation...).
   * @param iContainerType [in]
   *   The type of the container to be created.
   *   <br>This can be either:<ul>
   *   <li>An application choosen Late Type (naming convention must be followed) in which case it will be
   *   possible to implement the @href CATInit interface</li>
   *   <li>The "CATFeatCont" Late Type. Implement the @href CATInit interface on DS "CATFeatCont" Late Type is forbidden.</li></ul>
   * @param iContainerName [in]
   *   A user choosen name for the container. This name must be unique among all the containers of its context,
   *   following the naming convention is consequently recommended.
   * @param oContainerFacade [out]
   *   A (caller provided) facade to handle the created container.
   *   <br>Notice that the Credentials of the provided Facade will not be used nor be modified.
   *   <br>If the method fails, <tt>oContainerFacade</tt> is not modified.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The operation completed successfully.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials provided through <tt>iAccreditations</tt> do not authorize this operation.</dd>
   *     <dt>E_INVALIDARG</dt>
   *     <dd>Either iContainerType or iContainerName is not valid.</dd>
   *     <dt>E_POINTER</dt>
   *     <dd>iContext cannot be mapped to location where a container can be created.</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   * @see CATFmCredentials , CATFmContainerFacade .
   */
  static HRESULT CreateApplicativeContainer(const CATFmCredentials & iAccreditations, CATBaseUnknown * iContext, const CATUnicodeString & iContainerType, const CATUnicodeString & iContainerName, CATFmContainerFacade & oContainerFacade);

  /**
  * Loads all Feature Containers.
  * @param iAccreditations [in]
  *   The application accreditation set.
  * @param iContext [in]
  *   The context can be given as a pointer to a feature (use @href CATFmFeatureFacade#GetFeature ), to a container
  *   (use @href CATFmFeatureContainer#GetContainer ) or through a CATIPsiRepresentationReference pointer and
  *   will be used to find where the containers have to be loaded (a Shape, a Technological Representation...).
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>The operation completed successfully.</dd>
  *     <dt>S_FALSE</dt>
  *     <dd>The operation was uneccesarry.</dd>
  *     <dt>E_ACCESSDENIED</dt>
  *     <dd>Credentials provided through <tt>iAccreditations</tt> do not authorize this operation.</dd>
  *     <dt>E_POINTER</dt>
  *     <dd>iContext cannot be mapped to location where a container can be created.</dd>
  *     <dt>Other</dt>
  *     <dd>Another failure has occured.</dd>
  *  </dl>
  * @see CATFmCredentials .
  */
  static HRESULT LoadAllFeatureContainers(const CATFmCredentials & iAccreditations, CATBaseUnknown * iContext);

};


#endif // __CATFmContainerServices_h__
