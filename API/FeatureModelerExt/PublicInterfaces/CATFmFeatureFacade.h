
#ifndef __CATFmFeatureFacade_h__
#define __CATFmFeatureFacade_h__


// COPYRIGHT DASSAULT SYSTEMES 2010

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


 // FeatureModelerExt forwards and headers.
class CATFmAttributeName;
class CATFmAttributeValuationInfo;
class CATFmAttributeValue;
class CATFmContainerFacade;
class CATFmFeatureIterator;
class CATFmPointingFeatureIterator;
class CATFmStartUpFacade;
#include "CATFmCredentials.h"
#include "CATFmAttributeAndValueKind.h"
#include "CATFmAttributeUpdateBehavior.h"
#include "FeatureModelerExt.h" // ExportedByFeatureModelerExt

// Other forwards and headers.
class CATBaseUnknown;
class CATBaseUnknown_var;
class CATString;
class CATUnicodeString;
class CATUuid;
#include "CATDataType.h" // CATUINTPTR
#include "CATSysBoolean.h" // CATBoolean
#include "IUnknown.h" // HRESULT, IID


/**
 * Class representing a Feature.
 * <b>Role</b>: This class is a Facade object providing access to a Feature, according to the provided Accreditations.
 * <br>It gathers in a single place all operations defined at the Feature Modeler level that can be performed on a Feature.
 * <p>LifeCycle information.<br>
 *   The recommended usage is to create Facades as local variables in functions and methods bodies.<br>
 *   Facades expose methods such as @href CATFmFeatureFacade#DeleteSelf and @href CATFmStartUpFacade#Instantiate that can explicitly change the life
 *   cycle of objects they reference, but the mere existence of a Facade should not implicitely influence the life cycle (either logical or C++) of
 *   the object it is bound to. Consequently Facades use weak references to ensure secure operation: attempts to access deleted objects will safely fail.
 *   Facades are then not really intended to be used as global variables or class member data. The life cycle of Facades should not extend
 *   beyond the scope of the function in which they have been created, and cannot be used safely to store a reference to an object over an extended
 *   duration. Most notably, while the correct comparison (see @href CATBaseUnknown#IsEqual ) of 2 <tt>AddRef</tt>'d pointers can descriminate
 *   between two pointers to the same Logically deleted object and two pointers to the distinct Logically deleted objects,the comparison of 2 Facades
 *   does not provide this ability.<br>
 *   Refer to the CAA Encyclopedia Feature Modeler pages to learn how to manage the Life Cycle of your objects.</p>
 * <p><b>Access Control</b> information.<br>
 *   Interactions with Feature Modeler entities, either read-only or read+write, are subject to authorization.<br>
 *   On a Facade with no (or insufficient) Accreditations only the methods related to the Facade binding will succeed.
 *   Such a Facade can most notably be used as an output parameter for a method like @href CATFmFeatureFacade#GetExtension
 *   to retrieve immediatly a pointer to the Feature Extension through @href #GetFeature or @href #QueryInterfaceOnFeature .
 *   All other methods, i.e. those for wich E_ACCESSDENIED is a legal return value, will fail.<br>
 *   To be allowed to interact with a Feature, an application must be registered as the owner of the Feature Catalog defining the Feature.</p>
 * @see CATFmCredentials .
 */
class ExportedByFeatureModelerExt CATFmFeatureFacade
{
public:

  /**
   * Constructs an empty Feature Facade.
   * <br><b>Role</b>: This constructor creates a Facade with no Accreditation and not bound to any Feature.
   * <br>Only the assignment operator can affect the Accreditations Set of a Facade after its construction.
   */
  CATFmFeatureFacade();

  /**
   * Constructs a Feature Facade.
   * <br><b>Role</b>: Creates a Facade with the provided Accreditations Set and not bound to any Feature.
   * @param iAccreditations [in]
   *   The Accreditations Set obtained by the application.
   *   Refer to the Access Control section of the @href CATFmFeatureFacade class documentation.
   *   <br>Only the assignment operator can affect the Accreditations Set of a Facade after its construction.
   *   <br><b>Lifecycle</b>: A Facade keeps a copy of the Accreditations Set. Any change in <tt>iAccreditations</tt>
   *   (RegisterAsCatalogOwner ...) performed after the Facade creation will not affect the Facade.
   */
  CATFmFeatureFacade(const CATFmCredentials & iAccreditations);

  /**
   * Constructs a Feature Facade.
   * <br><b>Role</b>: Creates a Facade with the provided Accreditations Set and bound to a Feature.
   * @param iAccreditations [in]
   *   The Accreditations Set obtained by the application.
   *   Refer to the Access Control section of the @href CATFmFeatureFacade class documentation.
   *   <br>Only the assignment operator can affect the Accreditations Set of a Facade after its construction.
   *   <br><b>Lifecycle</b>: A Facade keeps a copy of the Accreditations Set. Any change in <tt>iAccreditations</tt>
   *   (RegisterAsCatalogOwner ...) performed after the Facade creation will not affect the Facade.
   * @param iFeature [in]
   *   Any interface pointer to the Feature as a <tt>CATBaseUnknown</tt> pointer.
   *   <br><b>Legal values</b>:<ul>
   *     <li>NULL</li>
   *     <li>Any interface pointer on a Feature.</li></ul>
   *   Any other value, such as an interface pointer to a Feature Container, will be handled like a NULL pointer.
   *   <br><b>Lifecycle</b>: Refer to the Lifecycle section of the @href CATFmFeatureFacade class documentation.
   */
  CATFmFeatureFacade(const CATFmCredentials & iAccreditations, CATBaseUnknown * iFeature);

  /**
   * Constructs a Feature Facade.
   * <br><b>Role</b>: Creates a Facade with the provided Accreditations Set and bound to a Feature.
   * @param iAccreditations [in]
   *   The Accreditations Set obtained by the application.
   *   Refer to the Access Control section of the @href CATFmFeatureFacade class documentation.
   *   <br>Only the assignment operator can affect the Accreditations Set of a Facade after its construction.
   *   <br><b>Lifecycle</b>: A Facade keeps a copy of the Accreditations Set. Any change in <tt>iAccreditations</tt>
   *   (RegisterAsCatalogOwner ...) performed after the Facade creation will not affect the Facade.
   * @param iFeature [in]
   *   An Feature Modeler Value.
   *   <br><b>Legal values</b>:<ul>
   *     <li>An empty (i.e. of CATFmKind_void type) Attribute Value.</li>
   *     <li>An Attribute Value of type CATFmKind_feature and of cardinality 1.</li></ul>
   *   Any other value, such as an integer or a list with two or more elements, will be handled like a empty Attribute Value.
   *   <br><b>Lifecycle</b>: Refer to the Lifecycle section of the @href CATFmFeatureFacade class documentation.
   */
  CATFmFeatureFacade(const CATFmCredentials & iAccreditations, const CATFmAttributeValue & iFeature);

  /**
   * Destructor.
   */
  ~CATFmFeatureFacade();


  // Required standard C++ methods.

  /**
   * Copy constructor.
   * <br><b>Role</b>: This method creates an exact copy of a Feature Facade.
   * @param iFeatureFacade [in]
   *   The Facade to copy.
   */
  CATFmFeatureFacade(const CATFmFeatureFacade & iFeatureFacade);

  /**
   * Assignment operator.
   * <br><b>Role</b>: This method transforms this Facade to an exact copy of another Feature Facade.
   * <br>Both the Accreditations Set and the bound Feature are copied.
   * @param iFeatureFacade [in]
   *   The Facade to copy.
   * @return
   *   This Facade.
   */
  CATFmFeatureFacade & operator=(const CATFmFeatureFacade & iFeatureFacade);


  // 0. Facades common methods.

  /**
   * Binds the Facade to a Feature.
   * <br>This method does not affect the Accreditations Set of the Facade.
   * @param iFeature [in]
   *   Any interface pointer to the Feature as a <tt>CATBaseUnknown</tt> pointer.
   *   <br><b>Legal values</b>:<ul>
   *     <li>NULL</li>
   *     <li>Any interface pointer on a Feature.</li></ul>
   *   Any other value, such as an interface pointer to a Feature Container, will be handled like a NULL pointer.
   *   <br><b>Lifecycle</b>: Refer to the Lifecycle section of the @href CATFmFeatureFacade class documentation.
   * @return
   *   This Facade.
   */
  CATFmFeatureFacade & operator=(CATBaseUnknown * iFeature);

  /**
   * Binds the Facade to a Feature.
   * <br>This method does not affect the Accreditations Set of the Facade.
   * @param iFeature [in]
   *   An Feature Modeler Value.
   *   <br><b>Legal values</b>:<ul>
   *     <li>An empty (i.e. of CATFmKind_void type) Attribute Value.</li>
   *     <li>An Attribute Value of type CATFmKind_feature and of cardinality 1.</li></ul>
   *   Any other value, such as an integer or a list with two or more elements, will be handled like a empty Attribute Value.
   *   <br><b>Lifecycle</b>: Refer to the Lifecycle section of the @href CATFmFeatureFacade class documentation.
   * @return
   *   This Facade.
   */
  CATFmFeatureFacade & operator=(const CATFmAttributeValue & iFeature);

  /**
   * Compares the bound Feature(s) of two Facades.
   * <br><b>Role</b>: compares the bound Feature(s) of two Facades without taking the Accreditations into account.
   * <br>An Feature is valid if and only if it has neither been Logically deleted nor unloaded.
   * @param iFeature [in]
   *   The Feature Facade to be compared to this.
   * @return
   *   An integer value.
   *   <br><b>Legal values</b>:
   *   <ul><li><tt>TRUE</tt>: if the Facades are either both invalid or both bound to the same valid Feature.</li>
   *       <li><tt>FALSE</tt>: in any other case.</li></ul>
   */
  CATBoolean CompareFeatureWith(const CATFmFeatureFacade & iFeature) const;

  /**
   * Checks the Facade validity.
   * <br>A Feature Facade is valid if and only if it is bound to a Feature that has neither been Logically deleted nor unloaded.
   * @return
   *   An boolean value.
   *   <br><b>Legal values</b>:
   *   <ul><li><tt>TRUE</tt>: if the Facade is valid.</li>
   *       <li><tt>FALSE</tt>: if the Facade is invalid.</li></ul>
   */
  CATBoolean IsValid() const;

  /**
   * Logical-negation (or logical-NOT) operator.
   * <br><b>Role</b>: Checks if the Facade is invalid.
   * <br>A Feature Facade is valid if and only if it is bound to a Feature that has neither been Logically deleted nor unloaded.
   * @return
   *   An integer value.
   *   <br><b>Legal values</b>:
   *   <ul><li><tt>1</tt>: if the Facade is invalid.</li>
   *       <li><tt>0</tt>: if the Facade is valid.</li></ul>
   */
  int operator!() const;

  /**
   * Unbinds the Facade from its bound Feature.
   * <br>This method does not affect the Accreditations Set of the Facade.
   * @return
   *   This Facade.
   */
  CATFmFeatureFacade & Clear();

  /**
   * Retrieves the bound Feature through a user specified interface pointer.
   * <br><b>Role</b>: Use to query Applicative Modeler level interfaces on the bound Feature.
   * @param iIID [in]
   *   The interface identifier for which a pointer is requested.
   * @param oPPV [out, CATBaseUnknown#Release]
   *   The address where the returned pointer to the interface is located.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The query succeeds.</dd>
   *     <dt>E_NOINTERFACE</dt>
   *     <dd>The interface does not exist.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>The object is not valid.</dd>
   *     <dt>E_OUTOFMEMORY</dt>
   *     <dd>A memory allocation failed.</bb>
   *     <dt>E_UNEXPECTED</dt>
   *     <dd>The query failed for any other reason.</dd>
   *   </dl>
   * @see CATBaseUnknown#QueryInterface .
   */
  HRESULT QueryInterfaceOnFeature(const IID & iIID, void ** oPPV) const;

  /**
   * Returns the bound Feature through a CATBaseUnknown smart pointer.
   * <br><b>Role</b>: Use to retrieve an Applicative Modeler level interface on the bound Feature through smart pointers.
   * @return
   *   A smart pointer to the Feature.
   *   <br>Warning: the exact type of the interface returned as a <tt>CATBaseUnknown</tt> pointer
   *   is not part of the specification and may vary. Do not make any assumption about it.
   */
  CATBaseUnknown_var GetFeature() const;

  /**
   * Returns the bound Feature as a value.
   * <br><b>Role</b>: Useful to use the bound Feature as the value of a SpecObject or Component attribute.
   * @return
   *   A Feature Modeler Value.
   */
  CATFmAttributeValue GetFeatureAsValue() const;


  // 1. Identity.

  // 1.1. Typing.

  /**
   * Retrieves the Late Type of a Feature.
   * @param oLateType [out]
   *   A (caller provided) string in which the Late Type of the Feature will be stored.
   *   <br>If the method fails <tt>oLateType</tt> is not modified, it is otherwise overwritten with the retrieved value.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The Late Type has been successfuly retrieved.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid Feature.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this Feature.</dd>
   *  </dl>
   */
  HRESULT GetType(CATUnicodeString & oLateType);

  /**
   * Retireves the Feature Definition (StartUp) of a Feature.
   * @param oDefinition [out]
   *   A (caller provided) Facade that will be bound to the Feature Definition.
   *   <br>Notice that the Credentials of the provided Facade will not be used nor be modified.
   *   <br>If the method fails <tt>oDefinition</tt> is not modified, it is otherwise overwritten with the retrieved value.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The Type Definition has been successfuly retrieved.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid Feature.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this Feature.</dd>
   *  </dl>
   */
  HRESULT GetStartUpFacade(CATFmStartUpFacade & oDefinition);

  // 1.2. Naming.

  /**
   * Retrieves the Display Name of a Feature.
   * @param oDisplayName [out]
   *   A (caller provided) string in which the Display Name of the Feature will be stored.
   *   <br>If the method fails <tt>oDisplayName</tt> is not modified, it is otherwise overwritten with the retrieved value.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The Late Type has been successfuly retrieved.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid Feature.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this Feature.</dd>
   *  </dl>
   */
  HRESULT GetDisplayName(CATUnicodeString & oDisplayName);

  /**
   * Retrieves the Auto-Numbering Provider of a Feature.
   * @param oFeature [out]
   *   A (caller provided) value that will contain the Auto-Numbering Provider of this Feature,
   *   or nothing (an empty Attribute Value) if the bound Feature has no Auto-Numbering Provider.
   *   <br>If the method fails <tt>oFeature</tt> is not modified, it is otherwise overwritten with the retrieved value.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd><tt>oFeature</tt> has been successfuly valuated.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid Feature.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this Feature.</dd>
   *  </dl>
   */
  HRESULT GetAutoNumberingProvider(CATFmAttributeValue & oFeature);

  /**
   * Set the Auto-Numbering Provider of a Feature.
   * @param iFeature [in]
   *   A value containing the Auto-Numbering Provider for this Feature.
   *   <br>An empty Attribute Value is valid and unsets any previously defined Provider.
   *   <br><b>Legal values</b>:<ul>
   *     <li>An empty (i.e. of CATFmKind_void type) Attribute Value.</li>
   *     <li>An Attribute Value of type CATFmKind_feature and of cardinality 1.</li></ul>
   *   Any other value, such as an integer or a list with two or more elements, will be handled like a empty Attribute Value.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The Auto-Numbering Provider has been successfuly set.
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid Feature.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this Feature.</dd>
   *  </dl>
   */
  HRESULT SetAutoNumberingProvider(const CATFmAttributeValue & iFeature);

  // 1.3. Localization.

  /**
   * Retrieves the Reference of a Feature.
   * @param oReference [out]
   *   A (caller provided) value that will contain the Reference of the bound Feature,
   *   or nothing (an empty Attribute Value) if the bound Feature has been instantiated from a Feature Definition (StartUp).
   *   <br>If the method fails <tt>oReference</tt> is not modified, it is otherwise overwritten with the retrieved value.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd><tt>oReference</tt> has been successfuly valuated.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid Feature.</dd>
   *     <dt>E_FMNOTLOADED</dt>
   *     <dd>The Reference Feature cannot be reached because it is not loaded.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to the bound Feature.</dd>
   *  </dl>
   */
  HRESULT GetReference(CATFmAttributeValue & oReference);

  /**
   * Retrieves the Parent of a Feature.
   * @param oParent [out]
   *   A (caller provided) value that will contain the Parent of this Feature,
   *   or nothing (an empty Attribute Value) if the bound Feature has no aggregating Feature.
   *   <br>If the method fails <tt>oParent</tt> is not modified, it is otherwise overwritten with the retrieved value.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd><tt>oParent</tt> has been successfuly valuated.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid Feature.</dd>
   *     <dt>E_FMNOTLOADED</dt>
   *     <dd>The Parent Feature cannot be reached because it is not loaded.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to either the bound Feature or the Parent Feature.</dd>
   *  </dl>
   */
  HRESULT GetParentFeature(CATFmAttributeValue & oParent);

  /**
   * Retrieves the Root Parent of a Feature.
   * <br><b>Role</b>: This method is quite similar to iterative calls to GetParentFeature.
   * <br>It only differs from successive calls to GetParentFeature by its credential requirements,
   * no accreditations related to the intermediate Features between this and the Root Features are needed.
   * @param oRootParent [out]
   *   A (caller provided) value that will contain the Root Parent of this Feature,
   *   or nothing (an empty Attribute Value) if the bound Feature has no aggregating Feature.
   *   <br>If the method fails <tt>oRootParent</tt> is not modified, it is otherwise overwritten with the retrieved value.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd><tt>oRootParent</tt> has been successfuly valuated.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid Feature.</dd>
   *     <dt>E_FMNOTLOADED</dt>
   *     <dd>The Root Parent Feature cannot be reached because it is not loaded.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to either the bound Feature or to the Root Parent Feature.</dd>
   *  </dl>
   */
  HRESULT GetRootParentFeature(CATFmAttributeValue & oRootParent);

  /**
   * Retrieves the Container of a Feature.
   * @param oContainer [out]
   *   A (caller provided) Facade that will be bound to the Container of this Feature.
   *   <br>Notice that the Credentials of the provided Facade will not be used nor be modified.
   *   <br>If the method fails <tt>oContainer</tt> is not modified, it is otherwise overwritten with the retrieved value.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd><tt>oContainer</tt> has been successfuly valuated.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid Feature.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this Feature.</dd>
   *  </dl>
   */
  HRESULT GetContainerFacade(CATFmContainerFacade & oContainer);


  // 2. Extensibility.

  // 2.1 Extension.

  /**
   * Retrieves the Base Feature of a Feature Extension.
   * @param oFeature [out]
   *   A (caller provided) value that will contain the Base Feature of this Feature Extension.
   *   <br>If the method fails <tt>oFeature</tt> is not modified, it is otherwise overwritten with the retrieved value.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd><tt>oFeature</tt> has been successfuly valuated.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid Feature Extension.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to either this Feature Extension or the Base Feature.</dd>
   *  </dl>
   */
  HRESULT GetBaseFeature(CATFmAttributeValue & oFeature) const;

  /**
   * Retrieves a Feature Extension Id.
   * @param oExtensionId [out]
   *   A string containing the ExtensionId of the Feature Extension.
   *   <br>If the method fails <tt>oExtensionId</tt> is not modified, it is otherwise overwritten with the retrieved value.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd><tt>oExtensionId</tt> has been successfuly valuated.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid Feature Extension.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this Feature Extension.</dd>
   *  </dl>
   */
  HRESULT GetExtensionId(CATString & oExtensionId) const;

  /**
   * Retrieves the Uuid of a Feature Extension.
   * @param oExtensionUuid [out]
   *   A string containing the UUID of the Feature Extension.
   *   <br>If the method fails <tt>oExtensionUuid</tt> is not modified, it is otherwise overwritten with the retrieved value.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd><tt>oExtensionUuid</tt> has been successfuly valuated.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid Feature Extension.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this Feature Extension.</dd>
   *  </dl>
   */
  HRESULT GetExtensionUuid(CATUuid & oExtensionUuid) const;

  // 2.2 Base Feature.

  /**
   * Creates a Feature Extension.
   * @param iExtensionId [in]
   *   The name of the Feature Extension that must be added to the bound Base Feature.
   *   <br><b>Legal values</b>:
   *   <ul>
   *    <li>"`StartUpIdentifier`@`Catalog.CATfct`"</li>
   *    <li>"`StartUpIdentifier`#<number>@`Catalog.CATfct`"</li>
   *    <li>"0u???????-????-????-????????????????@`Catalog.CATfct`"</li>
   *   </ul>
   * @param oExtension [out]
   *   A (caller provided) value that will contain the Feature Extension.
   *   No Feature Extension will be created if an Extension with this Extension Id exists,
   *   in such a case this method simply retrieves the existing Feature Extension.
   *   <br>If the method fails <tt>oExtension</tt> is not modified, it is otherwise overwritten.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>A new Feature Extension has been successfuly added.</dd>
   *     <dt>S_FALSE</dt>
   *     <dd>The existing Feature Extension has been successfuly retrieved.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid Base Feature.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to the Feature Extension Type Definition.</dd>
   *     <dt>LCC_E_FAIL</dt>
   *     <dd>The currently used license does not authorize the requested operation.</dd>
   *  </dl>
   */
  HRESULT AddExtension(const CATString & iExtensionId, CATFmAttributeValue & oExtension) const;

  /**
   * Retrieves a Feature Extension from a Base Feature.
   * @param iExtensionId [in]
   *   The name of the Feature Extension that must be retrieved from this Base Feature.
   *   <br><b>Legal values</b>:
   *   <ul>
   *    <li>"`StartUpIdentifier`@`Catalog.CATfct`"</li>
   *    <li>"`StartUpIdentifier`#<number>@`Catalog.CATfct`"</li>
   *    <li>"0u???????-????-????-????????????????@`Catalog.CATfct`"</li>
   *   </ul>
   * @param oExtension [out]
   *   A (caller provided) value that will contain the Feature Extension.
   *   <br>If method fails, <tt>oExtension</tt> is not modified.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd><tt>oExtension</tt> has been successfuly valuated.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid Base Feature.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to either this Base Feature or the searched Feature Extension.</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>No such Extension has been found on the Base Feature.</dd>
   *  </dl>
   */
  HRESULT GetExtension(const CATString & iExtensionId, CATFmAttributeValue & oExtension) const;

  /**
   * Deletes a Feature Extension.
   * @param iExtension [in]
   *   A value containing the Feature Extension that must be removed from its Base Feature.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The Feature Extension has been successfuly deleted.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid Base Feature.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this Base Feature or the Feature Extension to be removed.</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>iExtension has not been found on the Base Feature.</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   */
  HRESULT RemoveExtension(const CATFmAttributeValue & iExtension) const;

  /**
   * Scans the model for Feature Extensions related to a Base Feature.
   * <br><b>Role</b>: This method allows to scan the Feature Extensions found of this Base Feature.
   * <br>If the Credentials provided to the Facade grant access to the Base feature the iterator will expose all Extensions,
   * <br>the iterator will otherwise only expose the Feature Extensions the provided Credentials grant access to.
   * @param oExtensionsIterator [out]
   *   A (caller provided) Iterator that will be filled with the Feature Extensions related to the bound Base Feature.
   *   <br>If the method fails <tt>oExtensionsIterator</tt> is not modified, it is otherwise overwritten with the retrieved value.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The Iterator has been successfuly populated.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid Base Feature.</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   * @see CATFmFeatureIterator .
   */
  HRESULT ScanExtensions(CATFmFeatureIterator & oExtensionsIterator) const;

  /**
   * Scans a Feature Container for Feature Extensions related to a Base Feature.
   * <br><b>Role</b>: This method combines a call to: @href ScanExtensions with additionnal filtering performed
   * on the container name.
   * The accreditation requirements for this method are consquently the same as those for @href ScanExtensions .
   * @param iContainerName [in]
   *   The name of the container, as in the resource file describing an extension or
   *   in @href CATFmContainerServices#CreateApplicativeContainer <tt>(... iName ...)</tt>.
   * @param oExtensionsIterator [out]
   *   A (caller provided) Iterator that will be filled with the Feature Extensions related to the bound Base Feature.
   *   <br>If the method fails <tt>oExtensionsIterator</tt> is not modified, it is otherwise overwritten with the retrieved value.
   * @return
   *   An HRESULT value.
   * @see CATFmFeatureIterator .
   */
  HRESULT ScanExtensionsInContainer(const CATString & iContainerName, CATFmFeatureIterator & oExtensionsIterator) const;


  // 3. Attributes valuation and value.

  /**
   * Retrieves valuation informations of attribute iAttributeName.
   * @param iAttributeName [in]
   *   The attribute name for which attribute valuation info must be retrieved.
   * @param oAttributeValuationInfo [out]
   *   Data structure containing attribute valuation informations.
   *   <br>Notice that it contains informations on immediate or inherited value, not on the target of a redirected value.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Attribute valuation informations has been retrieved.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid feature.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this attribute.</dd>
   *     <dt>E_FMKEYNOTFOUND</dt>
   *     <dd>Attribute <tt>iAttributeName</tt> does not exist on this feature.</dd>
   *  </dl>
   */
  HRESULT GetAttributeValuationInfo(const CATFmAttributeName& iAttributeName, CATFmAttributeValuationInfo& oAttributeValuationInfo) const;

  /**
   * Retrieves value of attribute iAttributeName.
   * <br><b>Role</b>: This method allows to retrieve the whole value held by a feature attribute of any type and cardinality.
   * @param iAttributeName [in]
   *   The attribute for which value must be retrieved.
   * @param oAttributeValue [out]
   *   Retrieved attribute value.
   *   <br>If method fails, <tt>oAttributeValue</tt> is not modified.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Value has been retrieved.</dd>
   *     <dt>S_FALSE</dt>
   *     <dd>Value has been retrieved but attribute is unset, oAttributeValue will contain a default value (0 for numerical values, empty string for string values, empty list for lists).</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid feature.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this attribute.</dd>
   *     <dt>E_FMKEYNOTFOUND</dt>
   *     <dd>Attribute <tt>iAttributeName</tt> does not exist on this feature.</dd>
   *     <dt>E_FMREDIRECTED</dt>
   *     <dd>Attribute is redirected but is target cannot be retrieved.</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   */
  HRESULT GetValue(const CATFmAttributeName& iAttributeName, CATFmAttributeValue& oAttributeValue) const;

  /**
   * Sets value of attribute iAttributeName.
   * <br><b>Role</b>:This method allows to set the value of an attribute.
   * <br>After a call to this method, attribute value will become immediate (according to @href #GetAttributeValuationInfo ).
   * <br>This method can be used for all types of attributes, list or not.
   * <br>This method cannot be used on a redirected attribute (use @href #RemoveRedirectedValuation to break redirection).
   * <br>New value type and attribute value type must be <b>strictly</b> equal (for example, CATFmKind_int and CATFmKind_byte are incompatible).
   * <br>SetValue can cause the propagation of an update impact.
   * <br>For aggregation attributes:
   * <ul>
   *   <li>Aggregation rules will be checked.</li>
   *   <li>Objects becoming not aggregated will be destroyed ( @href #DetachComponent can be used as an alternative).</li>
   * </ul>
   * In case of failure, attribute will keep its old value.
   * @param iAttributeName [in]
   *   The attribute for which value must be set.
   * @param iAttributeValue [in]
   *   The value which must be set.
   *   <br>This value must have the same type as the attribute and a cardinality compatible with attribute cardinality.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Value has been modified.</dd>
   *     <dt>S_FALSE</dt>
   *     <dd>Operation has been successfully performed but let the feature unchanged.<br>No update impact has been propagated.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid feature.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this attribute.</dd>
   *     <dt>E_FMKEYNOTFOUND</dt>
   *     <dd>Attribute <tt>iAttributeName</tt> does not exist on this feature.</dd>
   *     <dt>E_INVALIDARG</dt>
   *     <dd>iAttributeValue has type CATFmKind_void.</dd>
   *     <dt>E_FMPARAMETER</dt>
   *     <dd>Attribute represents a Knowledge parameter. Use @href #GetKnowledgeParameter and Knowledge API to modify its value.</dd>
   *     <dt>E_FMNOTALIST</dt>
   *     <dd>Attribute is not a list but iAttributeValue has a size different of 1.</dd>
   *     <dt>E_FMTYPEMISMATCH</dt>
   *     <dd><tt>iAttributeValue</tt> type is not strictly equal to the one of the attribute.</dd>
   *     <dt>E_FMOPERATIONNOTALLOWED</dt>
   *     <dd>Operation is not allowed because:
   *       <ul>
   *         <li>Attribute is redirected (use @href #RemoveRedirectedValuation to break redirection).</li>
   *         <li>Input value contains a NULL feature and attribute is not using array mode.</li>
   *         <li>Input value contains a feature which belongs to another stream unit.</li>
   *         <li>Operation leads to an obvious update cycle or to an update error.</li>
   *       </ul>
   *     </dd>
   *     <dt>E_FMAGGREGATIONERROR</dt>
   *     <dd>Operation leads to an aggregation rule violation:
   *       <ul>
   *         <li>A target feature is yet aggregated by another feature.</li>
   *         <li>A target feature is yet aggregated by another attribute of this feature.</li>
   *         <li>A target feature is duplicated in input value.</li>
   *         <li>A target feature is a direct or indirect father of this feature.</li>
   *         <li>A target feature is this feature.</li>
   *       </ul>
   *     </dd>
   *     <dt>E_FMPRIVATEVALUE</dt>
   *     <dd>Value is private on an inherited feature.</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   */
  HRESULT SetValue(const CATFmAttributeName& iAttributeName, const CATFmAttributeValue& iAttributeValue);

  /**
   * Unsets the value of an attribute.
   * <br><b>Role</b>: This method allows to unset the value of a "primitive" attribute.
   * <br>After a call to this method, attribute value will become immediate and will not be seen as set anymore (according to @href #GetAttributeValuationInfo ).
   * <br>This method can be used only on attributes (list or not) of primitive types:
   * <ul>
   *   <li>CATFmKind_boolean</li>
   *   <li>CATFmKind_byte</li>
   *   <li>CATFmKind_int</li>
   *   <li>CATFmKind_double</li>
   *   <li>CATFmKind_string</li>
   * </ul>
   * <br>This method cannot be used on a redirected attribute (use @href #RemoveRedirectedValuation to break redirection).
   * <br>UnsetValue can cause the propagation of an update impact.
   * @param iAttributeName [in]
   *   The attribute for which value must be unset.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Value has been modified.</dd>
   *     <dt>S_FALSE</dt>
   *     <dd>Operation has been successfully performed but let the feature unchanged.<br>No update impact has been propagated.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid feature.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this attribute.</dd>
   *     <dt>E_FMKEYNOTFOUND</dt>
   *     <dd>Attribute <tt>iAttributeName</tt> does not exist on this feature.</dd>
   *     <dt>E_FMPARAMETER</dt>
   *     <dd>Attribute represents a Knowledge parameter. Use @href #GetKnowledgeParameter and Knowledge API to unset its value.</dd>
   *     <dt>E_FMOPERATIONNOTALLOWED</dt>
   *     <dd>The operation is not allowed because:
   *       <ul>
   *         <li>Attribute is redirected (use @href #RemoveRedirectedValuation to break redirection).</li>
   *         <li>Attribute is not primitive and does not support unset.</li>
   *       </ul>
   *     </dd>
   *     <dt>E_FMPRIVATEVALUE</dt>
   *     <dd>Value is private on an inherited feature.</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   *  @see CATFmAttributeAndValueKind .
   */
  HRESULT UnsetValue(const CATFmAttributeName& iAttributeName);

  /**
   * Restores inheritance on an attribute.
   * <br><b>Role</b>:This method removes immediate value so that further calls to @href #GetValue or @href #GetValueAtIndex will return the value inherited from reference feature.
   * <br>After a call to this method, attribute value will become inherited (according to @href #GetAttributeValuationInfo ).
   * <br>This method does not work on aggregation attributes (use @href #Synchronize ).
   * <br>RestoreInheritance can cause the propagation of an update impact.
   * @param iAttributeName [in]
   *   The attribute for which inheritance must be restored.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Attribute value is now inherited.</dd>
   *     <dt>S_FALSE</dt>
   *     <dd>Operation has been successfully performed but let the feature unchanged.<br>No update impact has been propagated</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid feature.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this attribute.</dd>
   *     <dt>E_FMKEYNOTFOUND</dt>
   *     <dd>Attribute <tt>iAttributeName</tt> does not exist on this feature.</dd>
   *     <dt>E_FMPARAMETER</dt>
   *     <dd>Attribute represents a Knowledge parameter.</dd>
   *     <dt>E_FMOPERATIONNOTALLOWED</dt>
   *     <dd>Attribute represents an aggregation relation.</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   */
  HRESULT RestoreInheritance(const CATFmAttributeName& iAttributeName);


  /**
   * Retrieves target feature and attribute of a redirected attribute.
   * <br><b>Role</b>: This method allows to retrieve the target feature and attribute of an attribute which has been redirected by @href #SetRedirectedValuation .
   * <br>Notice that redirected attribute can be inherited.
   * @param iAttributeName [in]
   *   The attribute for which redirection target must be retrieved.
   * @param oRedirectedFeature [out]
   *   The target feature of the redirected attribute.
   * @param oRedirectedAttributeName [out]
   *   The target attribute of the redirected attribute.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Redirection target have been successfully retrieved.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid feature.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this attribute.</dd>
   *     <dt>E_FMKEYNOTFOUND</dt>
   *     <dd>Attribute <tt>iAttributeName</tt> does not exist on this feature.</dd>
   *     <dt>E_FMPRIVATEVALUE</dt>
   *     <dd>Value is private on an inherited feature.</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>Attribute is not redirected.</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   */
  HRESULT GetRedirectedValuation(const CATFmAttributeName& iAttributeName, CATFmAttributeValue& oRedirectedFeature, CATFmAttributeName& oRedirectedAttributeName) const;

  /**
   * Creates a redirection from one attribute to another.
   * <br><b>Role</b>:This method creates a redirection link to another attribute so that further calls to @href #GetValue , @href #GetValueAtIndex will return the value held by target attribute.
   * <br>After a call to this method, attribute value will become redirected (according to @href #GetAttributeValuationInfo ).
   * <br>This method can be used on all types of attribute (list or not) with the exception of aggregation attributes (notice that target attribute can be an aggregation attribute) and external attributes.
   * <br>Target attribute must be of the same type as the redirected attribute. They must also be both list attribute or both single attribute.
   * <br>SetRedirectedValuation can cause the propagation of an update impact.
   * @param iAttributeName [in]
   *   The attribute to redirect.
   * @param iTargetFeature [in]
   *   The target feature of the redirection.
   * @param iTargetAttributeName [in]
   *   The target attribute of the redirection.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Value has been modified.</dd>
   *     <dt>S_FALSE</dt>
   *     <dd>Operation has been successfully performed but let the feature unchanged.<br>No update impact has been propagated</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid feature.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this attribute or target attribute.</dd>
   *     <dt>E_FMKEYNOTFOUND</dt>
   *     <dd>Attribute <tt>iAttributeName</tt> does not exist on this feature or target attribute does not exist on target feature.</dd>
   *     <dt>E_FMPARAMETER</dt>
   *     <dd>Attribute represents a Knowledge parameter.</dd>
   *     <dt>E_INVALIDARG</dt>
   *     <dd><tt>iTargetFeature</tt> does not contain one non NULL feature or <tt>iTargetAttributeName</tt> is empty.</dd>
   *     <dt>E_FMOPERATIONNOTALLOWED</dt>
   *     <dd>Operation is not allowed because:
   *       <ul>
   *         <li>Attribute represents an aggregation or an external link.</li>
   *         <li>Redirected and target attribute have incompatible types.</li>
   *         <li>Redirection leads to an obvious redirection cycle.</li>
   *       </ul>
   *     </dd>
   *     <dt>E_FMPRIVATEVALUE</dt>
   *     <dd>Value is private on an inherited feature.</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   */
  HRESULT SetRedirectedValuation(const CATFmAttributeName& iAttributeName, const CATFmAttributeValue& iTargetFeature, const CATFmAttributeName& iTargetAttributeName);

  /**
   * Breaks the redirection to another attribute.
   * <br><b>Role</b>:This method allows to break a redirection link created by @href #SetRedirectedValuation .
   * <br>After a call to this method, attribute value will become immediate (according to @href #GetAttributeValuationInfo ).
   * <br>Depending on the attribute type, attribute will take the following value:
   * <ul>
   *   <li>For simple types immediate value will become unset.</li>
   *   <li>For list of complex types, an empty list will be assigned.</li>
   *   <li>For single complex types, a NULL pointer will be assigned.</li>
   * </ul>
   * <br>This method can be used only on a redirected attribute.
   * <br>RemoveRedirectedValuation can cause the propagation of an update impact.
   * @param iAttributeName [in]
   *   The attribute for which redirection must be broken.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Redirection has been broken.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid feature.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this attribute.</dd>
   *     <dt>E_FMKEYNOTFOUND</dt>
   *     <dd>Attribute <tt>iAttributeName</tt> does not exist on this feature.</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>Attribute is not redirected.</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   */
  HRESULT RemoveRedirectedValuation(const CATFmAttributeName& iAttributeName);


  /**
   * Retrieves value of attribute iAttributeName at a specified index.
   * <br><b>Role</b>:This method is similar to @href #GetValue, the difference is that it allows to retrieve only a specific item in a list.
   * <br>Notice that you should preferably use @href #GetValue for iterations on list attributes.
   * @param iAttributeName [in]
   *   The attribute for which value must be retrieved.
   * @param iIndex [in]
   *   Index of the item of the list to retrieve. Must be in the range [1,size].
   * @param oAttributeValue [out]
   *   Retrieved attribute value.
   *   <br>If method fails, oAttributeValue is not modified.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Value has been retrieved.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid feature.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this attribute.</dd>
   *     <dt>E_FMKEYNOTFOUND</dt>
   *     <dd>Attribute <tt>iAttributeName</tt> does not exist on this feature.</dd>
   *     <dt>E_FMOUTOFBOUND</dt>
   *     <dd>Index is not in the correct range.</dd>
   *     <dt>E_FMNOTALIST</dt>
   *     <dd>Attribute is not a list.</dd>
   *     <dt>E_FMREDIRECTED</dt>
   *     <dd>Attribute is redirected but is target cannot be retrieved.</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   */
  HRESULT GetValueAtIndex(const CATFmAttributeName& iAttributeName, int iIndex, CATFmAttributeValue & oAttributeValue) const;

  /**
   * Locates a value in an attribute.
   * <br><b>Role</b>:This method allows to locate the <b>first</b> occurence of a value in an attribute value.
   * <br>You can specify the range and the direction of the search thanks to optional parameters <tt>iFirstIndex</tt> and <tt>iLastIndex</tt>.
   * <br>by default the list is scanned starting from its first element to its last element.
   * <br>Notice that a <b>linear search</b> is performed.
   * @param iAttributeName [in]
   *   The attribute to scan.
   * @param iValue [in]
   *   The value to locate.
   * @param oIndex [out]
   *   The index where the value has been found.
   * @param iFirstIndex [in]
   *   Starting index of the search.
   *   <br>Must be in the range [0,size]
   *   <br>Specific value 0 means last item of the list.
   *   <br><tt>iFirstIndex</tt> can be less than <tt>iLastIndex</tt> in which case search is made downward.
   * @param iLastIndex [in]
   *   Last index of the search.
   *   <br>Must be in the range [0,size]
   *   <br>Specific value 0 means last item of the list.
   *   <br><tt>iFirstIndex</tt> can be less than <tt>iLastIndex</tt> in which case search is made downward.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Value has been found at index <tt>oIndex</tt>.</dd>
   *     <dt>S_FALSE</dt>
   *     <dd>Value has not been found. 0 has been assigned to <tt>oIndex</tt>.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid feature.</dd>
   *     <dt>E_INVALIDARG</dt>
   *     <dd>iValue is a list or iValue is of type CATFmKind_void or CATFmKind_any.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this attribute.</dd>
   *     <dt>E_FMKEYNOTFOUND</dt>
   *     <dd>Attribute <tt>iAttributeName</tt> does not exist on this feature.</dd>
   *     <dt>E_FMOUTOFBOUND</dt>
   *     <dd><tt>iFirstIndex</tt> or <tt>iLastIndex</tt> is not in the correct range.</dd>
   *     <dt>E_FMNOTALIST</dt>
   *     <dd>Attribute is not a list.</dd>
   *     <dt>E_FMREDIRECTED</dt>
   *     <dd>Attribute is redirected but is target cannot be retrieved.</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   */
  HRESULT LocateValue(const CATFmAttributeName& iAttributeName, const CATFmAttributeValue& iValue, int& oIndex, int iFirstIndex = 1, int iLastIndex = 0) const;

  /**
   * Replaces value of attribute iAttributeName at a given index.
   * <br><b>Role</b>: This method allows to replace a given index of a list attribute by a new value.
   * <br>This method can be used only on list attributes (for single attributes, use @href #GetValue ).
   * <br>This method cannot be used on a redirected attribute (use @href #RemoveRedirectedValuation to break redirection).
   * <br>New value type and attribute value type must be strictly equal (for example, @href CATFmKind_int and @href CATFmKind_byte are incompatible).
   * <br>ReplaceValueAtIndex can cause the propagation of an update impact.
   * <br>For aggregation attributes:
   * <ul>
   *   <li>Aggregation rules will be checked.</li>
   *   <li>Objects becoming not aggregated will be destroyed ( @href #DetachComponent can be used as an alternative).</li>
   * </ul>
   * <br>In case of failure, attribute will keep its old value.
   * <br>Notice that in order to change all the elements of a list, you should preferably use @href #SetValue .
   * @param iAttributeName [in]
   *   The attribute on which a value must be replaced.
   * @param iIndex [in]
   *   The index to modify. Must be in the range [1,size].
   * @param iValue [in]
   *   The value which must be set.
   *   <br>This value must have the same type as the attribute and cardinality 1.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Value has been modified.</dd>
   *     <dt>S_FALSE</dt>
   *     <dd>Operation has been successfully performed but let the feature unchanged.<br>No update impact has been propagated.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid feature.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this attribute.</dd>
   *     <dt>E_FMKEYNOTFOUND</dt>
   *     <dd>Attribute <tt>iAttributeName</tt> does not exist on this feature.</dd>
   *     <dt>E_FMOUTOFBOUND</dt>
   *     <dd>Index is not in the correct range.</dd>
   *     <dt>E_INVALIDARG</dt>
   *     <dd><tt>iValue</tt> has type @href CATFmKind_void or a cardinality not equal to 1.</dd>
   *     <dt>E_FMNOTALIST</dt>
   *     <dd>Attribute is not a list.</dd>
   *     <dt>E_FMTYPEMISMATCH</dt>
   *     <dd><tt>iValue</tt> type is not strictly equal to the one of the attribute.</dd>
   *     <dt>E_FMOPERATIONNOTALLOWED</dt>
   *     <dd>The operation is not allowed because:
   *       <ul>
   *         <li>Attribute is redirected (use @href #RemoveRedirectedValuation to break redirection).</li>
   *         <li>Input value contains a NULL feature and attribute is not using array mode.</li>
   *         <li>Input value contains a feature which belongs to another stream unit.</li>
   *         <li>Operation leads to an obvious update cyle.</li>
   *       </ul>
   *      </dd>
   *     <dt>E_FMAGGREGATIONERROR</dt>
   *     <dd>Operation leads to an aggregation rule violation:
   *       <ul>
   *         <li>Target feature is yet aggregated by another feature.</li>
   *         <li>Target feature is yet aggregated by another attribute of this feature.</li>
   *         <li>Target feature is yet aggregated by this attribute at another index.</li>
   *         <li>Target feature is a direct or indirect father of this feature.</li>
   *         <li>Target feature is this feature.</li>
   *       </ul>
   *     </dd>
   *     <dt>E_FMPRIVATEVALUE</dt>
   *     <dd>Value is private on an inherited feature.</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   */
  HRESULT ReplaceValueAtIndex(const CATFmAttributeName& iAttributeName, int iIndex, const CATFmAttributeValue& iValue);

  /**
   * Inserts a value at a given index of a list attribute.
   * <br><b>Role</b>:This method allows to insert an element at a given index in a list attribute.
   * <br>This method has the same restrictions as @href #ReplaceValueAtIndex .
   * <br>Notice that <tt>iIndex</tt> can be equal to size+1 in which case <tt>iValue</tt> is appended at the end of the list.
   * @param iAttributeName
   *   The attribute on which a value must be inserted.
   * @param iIndex
   *   The index to modify. Must be in the range [1,size+1].
   * @param iValue
   *   The value to insert.
   *   <br>This value must have the same type as the attribute and cardinality 1.
   * @return
   *   An HRESULT value.
   *   <br>Return code values are the same as for @href #ReplaceValueAtIndex .
   */
  HRESULT InsertValue(const CATFmAttributeName& iAttributeName, int iIndex, const CATFmAttributeValue & iValue);

  /**
   * Appends a value at the end of a list attribute.
   * <br><b>Role</b>:This method allows to append a value at the end of a list attribute.
   * <br>It is a shortcut for @href #InsertValue at index size+1 and has the same behavior and restrictions.
   * @param iAttributeName
   *   The attribute on which a value must be inserted.
   * @param iValue
   *   The value to append.
   *   <br>This value must have the same type as the attribute and cardinality 1.
   * @return
   *   An HRESULT value.
   *   <br>Return code values are the same as for @href #ReplaceValueAtIndex .
   */
  HRESULT AppendValue(const CATFmAttributeName& iAttributeName, const CATFmAttributeValue & iValue);

  /**
   * Removes an index from a list attribute.
   * <br><b>Role</b>:This method allows to remove a given index in a list attribute.
   * @param iAttributeName
   *   The attribute for which an index must be removed.
   * @param iIndex
   *   The index to remove. Must be in the range [1,size].
   * @return
   *   An HRESULT value.
   *   <br>Return code values are the same as for @href #ReplaceValueAtIndex .
   */
  HRESULT RemovePosition(const CATFmAttributeName& iAttributeName, int iIndex);

  /**
   * Swaps two index in a list attribute.
   * <br><b>Role</b>:This method allows to swap the content of two index of a list attribute.
   * <br>For instance:
   * <pre>list is [ A B C D ].</pre>
   * after a call to SwapPositions(2,4),
   * <pre>list is [ A D C B ].</pre>
   * @param iAttributeName [in]
   *   The attribute for which index must be swapped.
   * @param iIndex1 [in]
   *   First index. Must be in the range [1,size].
   * @param iIndex2 [in]
   *   Second index. Must be in the range [1,size].
   * @return
   *   An HRESULT value.
   *   <br>Return code values are the same as for @href #ReplaceValueAtIndex .
   *   <br>Notice that if <tt>iIndex1</tt> and <tt>iIndex2</tt> are equal and the value is immediate, then S_FALSE will be returned.
   */
  HRESULT SwapPositions(const CATFmAttributeName& iAttributeName, int iIndex1, int iIndex2);

  /**
   * Moves an index in the list to another position.
   * <br><b>Role</b>:This method allows to move the content of an index of a list attribute to another index.
   *<br>For instance:
   * <pre>List is [ A B C D E ].</pre>
   * after a call to MoveInPosition(4,2),
   * <pre>List is [ A D B C E ], D has been moved to position 2.</pre>
   * whereas
   * <br>after a call to MoveInPosition(2,4),
   * <pre>List is [ A C D B E ], B has been moved to position 4.</pre>
   * @param iAttributeName [in]
   *   The attribute for which an item must be moved.
   * @param iSourceIndex [in]
   *   The index of the item to move. Must be in the range [1,size].
   * @param iTargetIndex [in]
   *   The index where the item must be moved. Must be in the range [1,size].
   * @return
   *   An HRESULT value.
   *   <br>Return code values are the same as for @href #ReplaceValueAtIndex .
   *   <br>Notice that if <tt>iSourceIndex</tt> and <tt>iTargetIndex</tt> are equal and the value is immediate, then S_FALSE will be returned.
   */
  HRESULT MoveInPosition(const CATFmAttributeName& iAttributeName, int iSourceIndex, int iTargetIndex);

  /**
   * Sets the update behavior of an attribute.
   * <br><b>Role</b>:By default update behavior of an attribute is inherited from the startup, it is nevertheless possible to change it
   * dynamically on instances through this method.
   * <br>This operation should be used preferably for upgrade purpose.
   * <br>Changing the behavior to @href #CATFmIn or @href #CATFmOut is forbidden during update algorithms and has an update impact on this feature or linked features.
   * @param iAttributeName [in]
   *   The attribute on which update behavior must overriden.
   * @param iUpdateBehavior [in]
   *   The update behavior to assign.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Update behaviour has been overriden.</dd>
   *     <dt>S_FALSE</dt>
   *     <dd>Operation has been successfully performed but let the feature unchanged.<br>No update impact has been propagated.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid feature.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this attribute.</dd>
   *     <dt>E_FMKEYNOTFOUND</dt>
   *     <dd>Attribute <tt>iAttributeName</tt> does not exist on this feature.</dd>
   *     <dt>E_FMOPERATIONNOTALLOWED</dt>
   *     <dd> @href #Update or @href #IsUpToDate algorithm is currently called on this feature.</dd>
   *     <dt>E_FMPRIVATEVALUE</dt>
   *     <dd>Value is private on an inherited feature.</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   */
  HRESULT SetUpdateBehavior(const CATFmAttributeName& iAttributeName, CATFmAttributeUpdateBehavior iUpdateBehavior);

  /**
   * Breaks an aggregation relation without deleting aggregated object.
   * <br><b>Role</b>: This method allows to remove a feature from an aggregation attribute without calling its deletion.
   * <br>It can be used in order to change the father of a feature.
   * <dl>
   *   <dt>For a single attribute:<dt/>
   *    <dl>
   *      <dt>It will replace target feature by a NULL value.<dt/>
   *    </dl>
   *   <dt>For a list attribute:
   *    <dl>
   *     <dt>If array mode is on,  it will replace target feature by a NULL value.<dt/>
   *     <dt>If array mode is off, it will remove the index.<dt/>
   *    </dl>
   *   </dt>
   * </dl>
   * @param iAttributeName [in]
   *   The attribute for which a component must be detached.
   * @param iIndex [in]
   *   The index of the component to detach. Must be in the range [1,size] for a list attribute, equal to 1 for a single attribute.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Component has been detached.</dd>
   *     <dt>S_FALSE</dt>
   *     <dd>Operation has been successfully performed but let the feature unchanged.<br>No update impact has been propagated.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid feature.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this attribute.</dd>
   *     <dt>E_FMKEYNOTFOUND</dt>
   *     <dd>Attribute <tt>iAttributeName</tt> does not exist on this feature.</dd>
   *     <dt>E_FMOUTOFBOUND</dt>
   *     <dd>Index is not in the correct range.</dd>
   *     <dt>E_FMTYPEMISMATCH</dt>
   *     <dd>Attribute is not an aggregation attribute.</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   */
  HRESULT DetachComponent(const CATFmAttributeName& iAttributeName, int iIndex);

  /**
   * Retrieves a an interface pointer on a Knowledge parameter.
   * <br><b>Role</b>: This method allow to retrieve a knowledge parameter held by an attribute.
   * <br>A knowledge parameter can be:
   * <ul>
   *   <li>A simple attribute with its sharp_type facet set to a valid Knowledge type.</li>
   *   <li>An object created through Knowledge interfaces ( @href CATICkeParmFactory )
   *       and referenced by a @href CATFmKind_feature attribute.</li>
   * </ul>
   * @param iAttributeName [in]
   *   The attribute name.
   * @param iIID [in]
   *   The interface identifier for which a pointer is requested (for example @href CATICkeParm ).
   * @param oPtr [out, CATBaseUnknown#Release]
   *   The address where the returned pointer to the interface is located.
   *   <br>In case of success, this pointer must be released after use.
   * @param iIndex [in]
   *   The optional index where the parameter must be retrieved.
   *   <br>If the attribute is not a list, default value of <tt>iIndex</tt> must be used,
   *       else <tt>iIndex</tt> must be inside the bounds [1,size] of the attribute value.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>A valid knowledge parameter has been retrieved.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid feature.</dd>
   *     <dt>E_INVALIDARG</dt>
   *     <dd><tt>oPtr</tt> is NULL or attribute is not a list and <tt>iIndex</tt> is not equal to -1.</dd>
   *     <dt>E_FMKEYNOTFOUND</dt>
   *     <dd>Attribute <tt>iAttributeName</tt> does not exist on this feature.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this attribute.</dd>
   *     <dt>E_FMNOTAPARAMETER</dt>
   *     <dd>An object can be found at this place but it is not a Knowledge parameter.</dd>
   *     <dt>E_NOINTERFACE</dt>
   *     <dd>A Knowledge parameter can be retrieved but it does not implement requested interface.</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>A NULL object has been found at this place.</dd>
   *  </dl>
   */
  HRESULT GetKnowledgeParameter(const CATFmAttributeName & iAttributeName, const IID & iIID, void ** oPtr, int iIndex = -1) const;

  // 3.5 Inverses links.

  /**
   * Scans the model for Features pointing the bound Feature.
   * <br><b>Role</b>: This method fills an iterator with the Features pointing the bound Feature.
   * <br>If the Accreditations set on the Facade grant access to the bound feature the iterator will contain all pointing objects,
   * <br>the iterator will otherwise only include the objects the Accreditations grant access to.
   * @param oIterator [out]
   *   A (caller provided) Iterator that will be filled with the Feature Extensions related to this Base Feature.
   *   <br>If the method fails <tt>oIterator</tt> is not modified, it is otherwise overwritten with the retrieved value.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The Iterator has been successfuly populated.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid Base Feature.</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   * @see CATFmPointingFeatureIterator .
   */
  HRESULT ScanPointingFeatures(CATFmPointingFeatureIterator & oIterator) const;


  // 4. Update.

  /**
   * Retrieves a Feature update status.
   * <br><b>Role</b>: This method allows to retrieve the update status of feature.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Feature is up to date.</dd>
   *     <dt>S_FALSE</dt>
   *     <dd>Feature is not up to date.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid feature.</dd>
   *     <dt>E_FMUPDATEERROR</dt>
   *     <dd>An exception has been raised. Exception can be retrieved through @href CATFmGetLastError .</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   */
  HRESULT IsUpToDate();

  /**
   * Updates a Feature.
   * <br><b>Role</b>: This method allows to update a Feature.
   * <br>In case of success @href #IsUpToDate will return S_OK.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Feature has been succesfully updated and is now up to date.</dd>
   *     <dt>S_FALSE</dt>
   *     <dd>Feature was yet up to date.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid feature.</dd>
   *     <dt>E_FMUPDATEERROR</dt>
   *     <dd>An exception has been raised. Exception can be retrieved through @href CATFmGetLastError .</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   */
  HRESULT Update();


  // 5. Life-cyle management (instantiation/deletion).

  /**
   * Instantiates a Feature.
   * @param iContainer [in]
   *   A valid Facade bound to the container in which an Instance of this Feature must be created.
   * @param oInstance [out]
   *   A (caller provided) value that will contain the created Instance.
   *   <br>If the method fails <tt>oInstance</tt> is not modified, it is otherwise overwritten with the retrieved value.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The instantiation succeeded.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this Feature or the container.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>This Facade is not bound to a valid Base Feature.</dd>
   *     <dt>LCC_E_FAIL</dt>
   *     <dd>The currently used license does not authorize the requested operation.</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   */
  HRESULT InstantiateIn(const CATFmContainerFacade & iContainer, CATFmAttributeValue & oInstance) const;

  /**
   * Instantiates a Feature.
   * <br><b>Role</b>: Instantiates a Feature and aggregates the new instance under an existing Feature.
   * @param iContainer [in]
   *   A valid Facade bound to the container in which an Instance of this Feature must be created.
   * @param iParent [in]
   *   A valid Facade bound to the Feature that will agregate the new Instance.
   * @param iAttributeName [in]
   *   The name of the component (or list of components) typed attribute that will be used for aggregation.
   *   In case of a list, the new Feature is added at the end of the list. The attribute value must otherwise be empty.
   * @param oInstance [out]
   *   A (caller provided) value that will contain the created Instance.
   *   <br>If the method fails <tt>oInstance</tt> is not modified, it is otherwise overwritten with the retrieved value.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The instantiation succeeded.</dd>
   *     <dt>E_ABORT</dt>
   *     <dd>The attribute is not a list and there is already a component.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to the bound Feature, the target Container, the target Feature or its attribute.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>This Facade is not bound to a valid Base Feature.</dd>
   *     <dt>E_FMTYPEMISMATCH</dt>
   *     <dd>Attribute is not an aggregation attribute.</dd>
   *     <dt>LCC_E_FAIL</dt>
   *     <dd>The currently used license does not authorize the requested operation.</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   */
  HRESULT InstantiateUnder(const CATFmContainerFacade & iContainer, CATFmFeatureFacade & iParent, const CATFmAttributeName & iAttributeName, CATFmAttributeValue & oInstance) const;

  /**
   * Deletes a Feature.
   * <br><b>Role</b>: This method invokes the deletion of this Feature.
   * <br>This method handles the deletion of aggregated Features as well as "root" (i.e. not aggregated) Features,
   * as long as the provided accreditations allow the modification of the aggregation link on the Parent Feature.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>This Feature has been removed.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this Feature and/or the aggregating Feature attribute if any.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid Base Feature.</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   */
  HRESULT DeleteSelf();


  // 6. Synchronization.

  /**
   * Retrieves the synchronization status of a Feature.
   * <br><b>Role</b>: Checks whether a synchronization is needed on this Feature to match its Reference.
   * @param iAttributeName [in]
   *   The attribute name.
   * @param oSynchronized [out]
   *   The synchronization status of a Feature
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The synchronization status has been computed or retrieved sucessfully and been stored in oSynchronized parameter.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this attribute.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid Base Feature.</dd>
   *     <dt>E_FMTYPEMISMATCH</dt>
   *     <dd>Attribute is not an aggregation attribute.</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   */
  HRESULT IsSynchronized(const CATFmAttributeName & iAttributeName, CATBoolean & oSynchronized);

  /**
   * Synchronizes a Feature.
   * <br><b>Role</b>: When a Feature is instantiated, all its components (i.e. the content of all attributes typed as "component")
   * are (recursively) instantiated.
   * <br>If a component is added on the Reference after the Instance has been created, there is no such component under the instance,
   * opposite to what would be seen on a new instance. Similarly, components deleted from the reference still have alive instances.
   * <br>The Synchronization will add missing components to and remove extraneous components from the instance with respect to its reference.
   * <br><b>Limitation</b>: this method is not recursive on components, as attributes meaningful for a given Feature type and
   * acess rights needed to modify that Feature may likely not be applicable to its components.
   * @param iAttributeName [in]
   *   The attribute name.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The synchronization of this feature succeeded.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this attribute.</dd>
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>Facade is not bound to a valid Base Feature.</dd>
   *     <dt>E_FMTYPEMISMATCH</dt>
   *     <dd>Attribute is not an aggregation attribute.</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   */
  HRESULT Synchronize(const CATFmAttributeName & iAttributeName);

private:
  CATUINTPTR m_Data[2];
};


#endif // __CATFmFeatureFacade_h_
