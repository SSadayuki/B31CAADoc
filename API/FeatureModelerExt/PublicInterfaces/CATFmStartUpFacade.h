
#ifndef __CATFmStartUpFacade_h__
#define __CATFmStartUpFacade_h__


// COPYRIGHT DASSAULT SYSTEMES 2010

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


 // FeatureModelerExt forwards and headers.
class CATFmFeatureFacade;
class CATFmContainerFacade;
class CATFmAttributeName;
#include "CATFmCredentials.h"
#include "FeatureModelerExt.h" // ExportedByFeatureModelerExt

// Other forwards and headers.
class CATUnicodeString;
#include "CATDataType.h" // CATUINTPTR
#include "CATSysBoolean.h" // CATBoolean
#include "IUnknown.h" // HRESULT


/**
 * Class representing a Feature Definition (StartUp).
 * <b>Role</b>: This class is a Facade object providing access to a Feature Definition, according to the provided Accreditations.
 * <br>It gathers in a single place all operations defined at the Feature Modeler level that can be performed on a Feature Definition.
 * <p>LifeCycle information.<br>
 *   The recommended usage is to create Facades as local variables in functions and methods bodies.<br>
 *   Feature Definition Facades are valid during the whole PLM Session in which they have been bound.
 *   They are nevertheless not really intended to be used as global variables or class member data. The life cycle of Facades should not extend
 *   beyond the scope of the funtion in which they have been created.<p>
 * <p><b>Access Control</b> information.<br>
 *   Interactions with Feature Modeler entities, either read-only or read+write, are subject to authorization.<br>
 *   On a Facade with no (or insufficient) Accreditations only the methods related to the Facade binding will succeed.
 *   Such a Facade can most notably be used as an output parameter for a method like @href CATFmFeatureFacade#GetStartUpFacade
 *   to compare it immediatly with another Feature Definition through @href #CompareStartUpWith .
 *   All other methods, i.e. those for wich E_ACCESSDENIED is a legal return value, will fail.<br>
 *   To be allowed to instantiate a Feature, an application must be registered as the owner of the Feature Catalog defining the Feature.</p>
 * @see CATFmCredentials .
 */
class ExportedByFeatureModelerExt CATFmStartUpFacade
{
public:

  /**
   * Constructs an empty Feature Definition (StartUp) Facade.
   * <br><b>Role</b>: This constructor creates a Facade with no Accreditation and not bound to any Feature Definition.
   * <br>Only the assignment operator can affect the Credentials Set of a Facade after its construction.
   */
  CATFmStartUpFacade();

  /**
   * Constructs a Feature Definition (StartUp) Facade.
   * <br><b>Role</b>: This constructor creates a Facade with the provided credentials and not bound to any Feature Definition.
   * <br>Only the assignment operator can affect the Credentials Set of a Facade after its construction.
   * @param iAccreditations [in]
   *   The set of Accreditations obtained by the application.
   *   <br>These Accreditations will be used to authorize or not any operation attempted on the bound Feature Definition (StartUp).
   *   <br><b>Lifecycle</b>: A Facade keeps a copy of the set of accreditations it was created with.
   *   Any addition of accreditations performed on the Crendentials object after the Facade has been created will not be reflected.
   */
  CATFmStartUpFacade(const CATFmCredentials & iAccreditations);

  /**
   * Constructs a Feature Definition (StartUp) Facade.
   * <br><b>Role</b>: This constructor creates a Facade with the provided credentials and bound to a Feature Definition.
   * <br>Only the assignment operator can affect the Credentials Set of a Facade after its construction.
   * <br>For debugging/troubleshooting purpose, using the previous constructor followed by an explicit call to BindTo(...) method 
   * is a better option as the BindTo(...) method returns distinct HRESULT values depending on the error cause.
   * @param iAccreditations [in]
   *   The set of Accreditations obtained by the application.
   *   <br>These Accreditations will be used to authorize or not any operation attempted on the bound Feature Definition (StartUp).
   *   <br><b>Lifecycle</b>: A Facade keeps a copy of the set of accreditations it was created with.
   *   Any addition of accreditations performed on the Crendentials object after the Facade has been created will not be reflected.
   * @param iIdentification
   *   An identification of the Feature Definition.
   *   <br><b>Legal values</b>:
   *   <ul><li><tt>"`StartUpIdentifier`@`Catalog.CATfct`"</tt></li>
   *       <li><tt>"`StartUpIdentifier`#<number>@`Catalog.CATfct`"</tt></li>
   *       <li><tt>"0u???????-????-????-????????????????@`Catalog.CATfct`"</tt></li></ul>
   * @see #BindTo .
   */
  CATFmStartUpFacade(const CATFmCredentials & iAccreditations, const CATUnicodeString & iIdentification);

  /**
   * Destructor.
   */
  ~CATFmStartUpFacade();


  // Required standard C++ methods.

  /**
   * Copy constructor.
   * <br><b>Role</b>: This method creates an exact copy of a Feature Definition (StartUp) Facade.
   * @param iStartUpFacade [in]
   *   The Facade to copy.
   */
  CATFmStartUpFacade(const CATFmStartUpFacade & iStartUpFacade);

  /**
   * Assignment operator.
   * <br><b>Role</b>: This method transforms this Facade to an exact copy of another Feature Definition (StartUp) Facade.
   * <br>Both the Credentials and the bound Feature Definition are copied.
   * @param iStartUpFacade [in]
   *   The Facade to copy.
   * @return
   *   This Facade.
   */
  CATFmStartUpFacade & operator=(const CATFmStartUpFacade & iStartUpFacade);


  // 0. Facades common methods.

  /**
   * Binds the Facade to a Feature Definition (StartUp).
   * <br>This method does not affect the Accreditations Set of the Facade.
   * @param iIdentification
   *   An identification of the Feature Definition.
   *   <br><b>Legal values</b>:
   *   <ul><li><tt>"`StartUpIdentifier`@`Catalog.CATfct`"</tt></li>
   *       <li><tt>"`StartUpIdentifier`#<number>@`Catalog.CATfct`"</tt></li>
   *       <li><tt>"0u???????-????-????-????????????????@`Catalog.CATfct`"</tt></li></ul>
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The Feature Definition has been found and the Facade bound to it.</dd>
   *     <dt>E_INVALIDARG</dt>
   *     <dd>The Feature Definition has not been found.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this Feature Definition.</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>Another failure has occured.</dd>
   *   </dl>
   */
  HRESULT BindTo(const CATUnicodeString & iIdentification);

  /**
   * Compares the bound Feature Definition(s) of two Facades.
   * <br><b>Role</b>: compares the bound Feature Definition(s) (StartUp) of two Facades without taking the Accreditations into account.
   * <br>An Feature Definition remains valid until the PLM session is closed.
   * @param iStartUpFacade [in]
   *   The Feature Definition Facade to be compared to this.
   * @return
   *   An integer value.
   *   <br><b>Legal values</b>:
   *   <ul><li><tt>TRUE</tt>: if the Facades are either both invalid or both bound to the same valid Feature Definition.</li>
   *       <li><tt>FALSE</tt>: in any other case.</li></ul>
   */
  CATBoolean CompareStartUpWith(const CATFmStartUpFacade & iStartUpFacade) const;

  /**
   * Checks the Facade validity.
   * <br>An Feature Definition (StartUp) Facade remains valid until the PLM session is closed.
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
   * <br>An Feature Definition (StartUp) Facade remains valid until the PLM session is closed.
   * @return
   *   An integer value.
   *   <br><b>Legal values</b>:
   *   <ul><li><tt>1</tt>: if the Facade is invalid.</li>
   *       <li><tt>0</tt>: if the Facade is valid.</li></ul>
   */
  int operator!() const;

  /**
   * Unbinds the Facade from its bound Feature Definition.
   * <br>This method does not affect the Accreditations Set of the Facade.
   * @return
   *   This Facade.
   */
  CATFmStartUpFacade & Clear();


  // 1. Identity.

  /**
   * Retrieves the Late Type of a Feature Definition.
   * @param oLateType [out]
   *   A (caller provided) string in which the Late Type associated to the Feature Definition will be stored.
   *   The Late Type associated to the Feature Definition is the Late Type of the instances of Feature Definition.
   *   <br>If the method fails <tt>oLateType</tt> is not modified, it is otherwise overwritten with the retrieved value.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The Late Type has been successfuly retrieved.</dd>
   *     <dt>E_INVALIDARG</dt>
   *     <dd>Facade is not bound to a valid Feature Definition (StartUp).<br>The validity of any Facade can be checked with its Isvalid() method.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this Feature Definition.</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   */
  HRESULT GetTypeName(CATUnicodeString & oLateType) const;


  // 2. Instantiation.

  /**
   * Instantiates a Feature.
   * @param iContainer [in]
   *   A valid Facade bound to the container in which an Instance of this Feature Definition must be created.
   * @param oInstance [out]
   *   A (caller provided) Facade that will bound to the created Instance.
   *   <br>Notice that the Credentials of the provided Facade will not be used nor be modified.
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
   *     <dd>This Facade is not bound to a valid Feature Definition (StartUp).<br>The validity of any Facade can be checked with its Isvalid() method.</dd>
   *     <dt>LCC_E_FAIL</dt>
   *     <dd>The currently used license does not authorize the requested operation.</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   */
  HRESULT InstantiateIn(const CATFmContainerFacade & iContainer, CATFmFeatureFacade & oInstance) const;

  /**
   * Instantiates a Feature.
   * <br><b>Role</b>: Instantiates a Feature and aggregates the new instance under an existing Feature.
   * @param iContainer [in]
   *   A valid Facade bound to the container in which an Instance of this Feature Definition must be created.
   * @param iParent [in]
   *   A valid Facade bound to the Feature that will agregate the new Instance.
   * @param iKey [in]
   *   The name of the component (or list of components) typed attribute that will be used for aggregation.
   *   In case of a list, the new Feature is added at the end of the list. The attribute value must otherwise be empty.
   * @param oInstance [out]
   *   A (caller provided) Facade that will bound to the created Instance.
   *   <br>Notice that the Credentials of the provided Facade will not be used nor be modified.
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
   *     <dd>This Facade is not bound to a valid Feature Definition (StartUp).</dd>
   *     <dt>E_FMTYPEMISMATCH</dt>
   *     <dd>Attribute is not an aggregation attribute.</dd>
   *     <dt>LCC_E_FAIL</dt>
   *     <dd>The currently used license does not authorize the requested operation.</dd>
   *     <dt>Other</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   */
  HRESULT InstantiateUnder(const CATFmContainerFacade & iContainer, CATFmFeatureFacade & iParent, const CATFmAttributeName & iKey, CATFmFeatureFacade & oInstance) const;

private:
  CATUINTPTR m_Data[2];
};


#endif // __CATFmStartUpFacade_h__
