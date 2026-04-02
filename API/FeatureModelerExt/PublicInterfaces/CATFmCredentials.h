
#ifndef __CATFmCredentials_h__
#define __CATFmCredentials_h__


// COPYRIGHT DASSAULT SYSTEMES 2010

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


// FeatureModelerExt forwards and headers.
class CATFmInfrastructureID;
#include "FeatureModelerExt.h" // ExportedByFeatureModelerExt

// Other forwards and headers.
class CATUnicodeString;
#include "IUnknown.h" // HRESULT


/**
 * Class representing an Accreditations Set.
 * <b>Role</b>: Applications must provide Accreditations to be allowed to interact with Feature Modeler entities. 
 * Accreditations are obtained through and stored within this ( @href CATFmCredentials ) class.
 * <p>Accreditations are used to determine what operations are allowed for each object type: Feature, Feature Definition (StartUp) or Container.</p>
 * <p>The registration methods can be called several times. An application with several catalogs will want to claim the ownership for each of them.
 * An application can also be based on several infrastructures (when applicable only) and want to declare itself accordingly.</p>
 * @see CATFmFeatureFacade , CATFmContainerFacade , CATFmStartUpFacade, CATFmContainerServices .
 */
class ExportedByFeatureModelerExt CATFmCredentials
{
public:
  /**
   * Constructs an empty Set of Accreditations.
   */
  CATFmCredentials();

  /**
   * Destructor.
   */
  ~CATFmCredentials();


  // Required standard C++ methods.

  /**
   * Copy constructor.
   * <br><b>Role</b>: This method creates an exact copy of a Credentials object.
   * @param iCredentials [in]
   *   The Credentials object to copy.
   */
  CATFmCredentials(const CATFmCredentials & iCredentials);

  /**
   * Assignment operator.
   * <br><b>Role</b>: This method transforms this Credentials object an exact copy of another Credentials object.
   * @param iCredentials [in]
   *   The Credentials object to copy.
   */
  CATFmCredentials & operator=(const CATFmCredentials & iCredentials);

  /**
   * Addition assignment operator.
   * <br><b>Role</b>: This method adds the Accrediations of another Credentials object to this Credentials object.
   * @param iCredentials [in]
   *   The Credentials object to incorporate.
   */
  CATFmCredentials & operator+=(const CATFmCredentials & iCredentials);


  // 1. Registration.

  /**
   * Registers oneself as an Application based on a given infrastructure.
   * <br><b>Role</b>: This method allows the caller to be known as being based on a given infrastructure.
   * The scope of actions that will be allowed after a successfull registration will depend on each infrastructure.<br>
   * <p>FeatureModeler infrastructure.<br>
   * Being known as a client of Feature Modeler infrastructure grants some rights to access containers.
   * Allowed actions are then:
   * <ul><li>Registering as the owner of a Feature Catalog ( @href #RegisterAsCatalogOwner ).</li>
   *     <li>Instantiation of Features (the ownership of which has been successfully claimed) in any container that has no specific access control.</li>
   *     <li>Scanning any container that has no specific access control for Features (the ownership of which has been successfully claimed).</li></ul></p>
   * <p>Other infrastructures.<br>
   * Refer to each application CAA documentation.</p>
   * @param iInfrastructure [in]
   *   The Infrastructure Id. The Infrastructure Id of Feature Modeler is defined in <tt>CATFmFeatureModelerID.h</tt>.
   *   <br>Whether other Infrastructure Ids exist or not will depend on the level and choosen configuration.
   * @param iPartnerId [in]
   *   The Partner Id. To be valid, it must be a non-empty string containing only (ASCII-7) letters and digits,
   *   and must also not start with a digit.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The operation completed successfully.</dd>
   *     <dt>E_INVALIDARG</dt>
   *     <dd><tt>iPartnerId</tt> is not valid.</dd>
   *     <dt>E_UNEXPECTED</dt>
   *     <dd>The application has already successfully been register with another PartnerId.</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   * @see CATFmContainerFacade .
   */
  HRESULT RegisterAsApplicationBasedOn(const CATFmInfrastructureID & iInfrastructureId, const CATUnicodeString & iPartnerId);

  /**
   * Registers oneself as the owner of a Feature Catalog.
   * <br><b>Role</b>: This method allows the caller to be known as the owner of a given Feature Catalog.
   * Being known by Feature Modeler as the owner of a catalog grants full control rights to the Feature instances.
   * <br>A successful registration as an application based on Feature Modeler (<tt>RegisterAsApplicationBasedOn(CATFmFeatureModelerID, ...)</tt> is required,
   * any attempt to register as a catalog owner would otherwise necessarily fail.
   * @param iCatalogName [in]
   *   The catalog name (without its ".CATfct" extension).
   * @param iCatalogClientId [in]
   *   Authentication of the request. This is the value of the "-client-id" argument used with the CATFctEditorAssistant.
   *   If iCatalogClientId is null, the Partner Id provided to register as an application based on Feature Modeler is used.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The operation completed successfully.</dd>
   *     <dt>E_FMOPERATIONNOTALLOWED</dt>
   *     <dd>The operation can succeed only when registered as an application based on Feature Modeler (see @href #RegisterAsApplicationBasedOn ).</dd>
   *     <dt>E_INVALIDARG</dt>
   *     <dd>iCatalogName is not the name of a valid catalog.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>iCatalogClientId is not correct.</dd>
   *     <dt>E_FMNOPLMSESSION</dt>
   *     <dd>No PLM session has been sucessfully opened.</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *   </dl>
   * @see CATFmFeatureFacade , CATFmStartUpFacade .
   */
  HRESULT RegisterAsCatalogOwner(const CATUnicodeString & iCatalogName, const CATUnicodeString & iCatalogClientId);


private:
  CATUINTPTR m_Data[1];
};



#endif // __CATFmCredentials_h__
