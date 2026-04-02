
#ifndef __CATFmContainerFacade_h__
#define __CATFmContainerFacade_h__


// COPYRIGHT DASSAULT SYSTEMES 2010

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


// FeatureModelerExt forwards and headers.
class CATFmFeatureIterator;
#include "CATFmCredentials.h"
#include "FeatureModelerExt.h" // ExportedByFeatureModelerExt

// Other forwards and headers.
class CATBaseUnknown;
class CATBaseUnknown_var;
#include "CATDataType.h" // CATUINTPTR
#include "CATSysBoolean.h" // CATBoolean
#include "IUnknown.h" // HRESULT, IID


/**
 * Class representing a Feature Container.
 * <b>Role</b>: This class is a Facade object providing access to a Feature Container, according to the provided Accreditations.
 * <br>It gathers in a single place all operations defined at the Feature Modeler level that can be performed on a Feature Container.
 * <p><b>Lifecycle</b> information.<br>
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
 *   Such a Facade can most notably be used as an output parameter for a method like @href CATFmFeatureFacade#GetContainerFacade
 *   to retrieve immediatly a pointer to the Feature Container through @href #GetContainer or @href #QueryInterfaceOnContainer .
 *   All other methods, i.e. those for wich E_ACCESSDENIED is a legal return value, will fail.<br>
 *   To be allowed to create Feature Containers, instantiate its own Features in a Feature Container and scan a Feature Container for
 *   its own Features, an application must be registered as being based on Feature Modeler.</p>
 * @see CATFmCredentials .
 */
class ExportedByFeatureModelerExt CATFmContainerFacade
{
public:

  /**
   * Constructs an empty Feature Container Facade.
   * <br><b>Role</b>: This constructor creates a Facade with no Accreditation and not bound to any Feature Container.
   * <br>Only the assignment operator can affect the Accreditations Set of a Facade after its construction.
   */
  CATFmContainerFacade();

  /**
   * Constructs a Feature Container Facade.
   * <br><b>Role</b>: This constructor creates a Facade with the provided Accreditations Set and not bound to any Feature Container.
   * @param iAccreditations [in]
   *   The Accreditations Set obtained by the application.
   *   Refer to the Access Control section of the @href CATFmContainerFacade class documentation.
   *   <br>Only the assignment operator can affect the Accreditations Set of a Facade after its construction.
   *   <br><b>Lifecycle</b>: A Facade keeps a copy of the Accreditations Set. Any change in <tt>iAccreditations</tt>
   *   (RegisterAsCatalogOwner ...) performed after the Facade creation will not affect the Facade.
   */
  CATFmContainerFacade(const CATFmCredentials & iAccreditations);

  /**
   * Constructs a Feature Container Facade.
   * <br><b>Role</b>: This constructor creates a Facade with the provided Accreditations Set and bound to a Feature Container.
   * @param iAccreditations [in]
   *   The Accreditations Set obtained by the application.
   *   Refer to the Access Control section of the @href CATFmContainerFacade class documentation.
   *   <br>Only the assignment operator can affect the Accreditations Set of a Facade after its construction.
   *   <br><b>Lifecycle</b>: A Facade keeps a copy of the Accreditations Set. Any change in <tt>iAccreditations</tt>
   *   (RegisterAsCatalogOwner ...) performed after the Facade creation will not affect the Facade.
   * @param iContainer [in]
   *   Any interface on the Container, as a <tt>CATBaseUnknown</tt> pointer.
   *   <br><b>Legal values</b>:<ul>
   *     <li>NULL</li>
   *     <li>Any interface pointer on a Feature Container.</li></ul>
   *   Any other value, such as an interface on an object that is not a Feature Container, will be handled like a NULL pointer.
   *   <br><b>Lifecycle</b>: Refer to the Lifecycle section of the @href CATFmContainerFacade class documentation.
   */
  CATFmContainerFacade(const CATFmCredentials & iAccreditations, CATBaseUnknown * iContainer);

  /**
   * Destructor.
   */
  ~CATFmContainerFacade();


  // Required standard C++ methods.

  /**
   * Copy constructor.
   * <br><b>Role</b>: This method creates an exact copy of a Feature Container Facade.
   * @param iContainerFacade [in]
   *   The Facade to copy.
   */
  CATFmContainerFacade(const CATFmContainerFacade & iContainerFacade);

  /**
   * Assignment operator.
   * <br><b>Role</b>: This method transforms this Facade to an exact copy of another Feature Container Facade.
   * <br>Both the Credentials and the bound Feature Container are copied.
   * @param iContainerFacade [in]
   *   The Facade to copy.
   */
  CATFmContainerFacade & operator=(const CATFmContainerFacade & iContainerFacade);


  // 0. Facades common methods.

  /**
   * Binds the Facade to a Feature Container.
   * <br>This method does not affect the Accreditations Set of the Facade.
   * @param iContainer [in]
   *   Any interface pointer to the Container as a <tt>CATBaseUnknown</tt> pointer.
   *   <br><b>Legal values</b>:<ul>
   *     <li>NULL</li>
   *     <li>Any interface pointer on a Feature Container.</li></ul>
   *   Any other value, such as an interface on an object that is not a Feature Container, will be handled like a NULL pointer.
   *   <br><b>Lifecycle</b>: Refer to the Lifecycle section of the @href CATFmContainerFacade class documentation.
   * @return
   *   This Facade.
   */
  CATFmContainerFacade & operator=(CATBaseUnknown * iContainer);

  /**
   * Compares the bound Feature Container(s) of two Facades.
   * <br><b>Role</b>: compares the bound Feature Container(s) of two Facades without taking the Accreditations into account.
   * <br>An Feature Container is valid if and only has neither been Logically deleted nor unloaded.
   * @param iContainerFacade [in]
   *   The Feature Container Facade to be compared to this.
   * @return
   *   An integer value.
   *   <br><b>Legal values</b>:
   *   <ul><li><tt>TRUE</tt>: if the Facades are either both invalid or both bound to the same valid Feature Container.</li>
   *       <li><tt>FALSE</tt>: in any other case.</li></ul>
   */
  CATBoolean CompareContainerWith(const CATFmContainerFacade & iContainerFacade) const;

  /**
   * Checks the Facade validity.
   * <br>A Feature Container Facade is valid if and only if it is bound to a Feature Container that has neither been Logically deleted nor unloaded.
   * @return
   *   An integer value.
   *   <br><b>Legal values</b>:
   *   <ul><li><tt>TRUE</tt>: if the Facade is valid.</li>
   *       <li><tt>FALSE</tt>: if the Facade is invalid.</li></ul>
   */
  CATBoolean IsValid() const;

  /**
   * Logical-negation (or logical-NOT) operator.
   * <br><b>Role</b>: Checks if the Facade is invalid.
   * <br>A Feature Container Facade is valid if and only if it is bound to a Feature Container that has neither been Logically deleted nor unloaded.
   * @return
   *   An integer value.
   *   <br><b>Legal values</b>:
   *   <ul><li><tt>1</tt>: if the Facade is invalid.</li>
   *       <li><tt>0</tt>: if the Facade is valid.</li></ul>
   */
  int operator!() const;

  /**
   * Unbinds the Facade from its bound Feature Container.
   * <br>This method does not affect the Accreditations Set of the Facade.
   * @return
   *   This Facade.
   */
  CATFmContainerFacade & Clear();

  /**
   * Retrieves the bound Feature Container through a user specified interface pointer.
   * <br><b>Role</b>: Use to query Applicative Modeler level interfaces on the bound Feature Container.
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
   *     <dt>E_FAIL</dt>
   *     <dd>The object is not valid.</dd>
   *     <dt>E_OUTOFMEMORY</dt>
   *     <dd>A memory allocation failed.</bb>
   *     <dt>E_UNEXPECTED</dt>
   *     <dd>The query failed for any other reason.</dd>
   *   </dl>
   * @see CATBaseUnknown#QueryInterface .
   */
  HRESULT QueryInterfaceOnContainer(const IID & iIID, void ** oPPV) const;

  /**
   * Returns the bound Feature Container through a CATBaseUnknown smart pointer.
   * <br><b>Role</b>: Use to retrieve an Applicative Modeler level interface on the bound Feature Container through smart pointers.
   * @return
   *   A smart pointer to the Feature Container.
   *   <br>Warning: the exact type of the interface returned as a <tt>CATBaseUnknown</tt> pointer
   *   is not part of the specification and may vary. Do not make any assumption about it.
   */
  CATBaseUnknown_var GetContainer() const;


  // 1. Content iterators.

  /**
   * Scans the bound Container for Root Features.
   * <br><b>Role</b>: This method fills an iterator with the Root Features found in a Container. "Root" Features are not-aggregated Features.
   * <br>An application declared as being based on Feature Modeler will be able to find the Features defined in its registered catalogs (according
   * to the provided Accreditations Set).
   * @param oIterator [out]
   *   A (caller provided) Iterator that will be filled with the Features of this Container.
   *   <br>If the method fails <tt>oIterator</tt> is not modified, it is otherwise overwritten with the retrieved value.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The Iterator has been successfuly populated.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this Feature Container.</dd>
   *     <dt>E_INVALIDARG</dt>
   *     <dd>Facade is not bound to a valid Container.</dd>
   *     <dt>E_FMNOTLOADED</dt>
   *     <dd>This Container is not loaded.</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   * @see CATFmFeatureIterator .
   */
  HRESULT ScanRootFeatures(CATFmFeatureIterator & oIterator);

  /**
   * Scans the bound Container for Features.
   * <br><b>Role</b>: This method fills an iterator with the Features found in a Container, either Root or not. "Root" Features are not-aggregated Features.
   * <br>An application declared as being based on Feature Modeler will be able to find the Features defined in its registered catalogs (according
   * to the provided Accreditations Set).
   * @param oIterator [out]
   *   A (caller provided) Iterator that will be filled with the Features of this Container.
   *   <br>If the method fails <tt>oIterator</tt> is not modified, it is otherwise overwritten with the retrieved value.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The Iterator has been successfuly populated.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this Feature Container.</dd>
   *     <dt>E_INVALIDARG</dt>
   *     <dd>Facade is not bound to a valid Container.</dd>
   *     <dt>E_FMNOTLOADED</dt>
   *     <dd>This Container is not loaded.</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   * @see CATFmFeatureIterator .
   */
  HRESULT ScanFeatures(CATFmFeatureIterator & oIterator);

private:
  CATUINTPTR m_Data[2];
};


#endif // __CATFmContainerFacade_h__

