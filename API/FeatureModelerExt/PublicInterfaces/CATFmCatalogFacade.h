
#ifndef __CATFmCatalogFacade_h__
#define __CATFmCatalogFacade_h__


// COPYRIGHT DASSAULT SYSTEMES 2011

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


// FeatureModelerExt forwards and headers.
class CATFmCredentials;
#include "FeatureModelerExt.h" // ExportedByFeatureModelerExt
#include "CATFmEventSubscriberMethod.h"

// Other forwards and headers.
class CATUnicodeString;
#include "CATDataType.h" // CATUINTPTR
#include "CATSysBoolean.h" // CATBoolean
#include "IUnknown.h" // HRESULT

/**
 * Class representing a Catalog.
 * <b>Role</b>: This class is a Facade object providing access to a Catalog, according to the provided Accreditations. <br>
 * It gathers in a single place all operations defined at the Feature Modeler level that can be performed on a Catalog.
 * <p>LifeCycle information.<br>
 *   The recommended usage is to create Facades as local variables in functions and methods bodies.<br>
 *   Catalog Facades are valid during the whole PLM Session in which they have been bound.
 *   They are nevertheless not really intended to be used as global variables or class member data. The life cycle of Facades should not extend
 *   beyond the scope of the function in which they have been created.<p>
 * <p><b>Access Control</b> information.<br>
 *   Interactions with Feature Modeler entities, either read-only or read+write, are subject to authorization.<br>
 *   On a Facade with no (or insufficient) Accreditations only the methods related to the Facade binding will succeed.
 *   All other methods, i.e. those for wich E_ACCESSDENIED is a legal return value, will fail.<br>
 *   To be allowed to interact with a Catalog, an application must be registered as the owner of the Catalog.</p>
 * @see CATFmCredentials .
 */

class ExportedByFeatureModelerExt CATFmCatalogFacade
{
public :

  /**
   * Constructs an empty Catalog Facade.
   * <br><b>Role</b>: This constructor creates a Facade with no accreditation and not bound to any Catalog.
   * <br>Only the assignment operator can affect the Credentials Set of a Facade after its construction.
   */
  CATFmCatalogFacade();

  /** 
   * Constructs a Catalog Facade.
   * <br><b>Role</b>: Creates a Facade with the provided Credentials and not bound to any Catalog.
   * <br>Only the assignment operator can affect the Credentials Set of a Facade after its construction.
   * @param iAccreditations [in]
   *   The set of Accreditations obtained by the application.
   *   <br>These Accreditations will be used to authorize or not any operation attempted on the bound Catalog.
   *   <br><b>Lifecycle</b>: A Facade keeps a copy of the set of accreditations it created with.
   *   Any addition of accreditations performed on the Crendentials object after the Facade has been created will not be reflected.
   */
  CATFmCatalogFacade(const CATFmCredentials & iAccreditations);

  /**
   * Constructs a Catalog Facade.
   * <br><b>Role</b>: This constructor creates a Facade with the provided credentials and bound to a Catalog.
   * <br>Only the assignment operator can affect the Credentials Set of a Facade after its construction.
   * @param iAccreditations [in]
   *   The set of Accreditations obtained by the application.
   *   <br>These Accreditations will be used to authorize or not any operation attempted on the bound Catalog.
   *   <br><b>Lifecycle</b>: A Facade keeps a copy of the set of accreditations it created with.
   *   Any addition of accreditations performed on the Credentials object after the Facade has been created will not be reflected.
   * @param iCatalogName [in]
   *   The name of the Catalog to bind, with its extension.
   * @see #BindTo .
   */
  CATFmCatalogFacade(const CATFmCredentials & iAccreditations, const CATUnicodeString & iCatalogName);

  /**
   * Destructor.
   */
  ~CATFmCatalogFacade();

  // Required standard C++ methods.

  /**
   * Copy constructor.
   * <br><b>Role</b>: This method creates an exact copy of a Catalog Facade.
   * @param iCatalogFacade [in]
   *   The Facade to copy.
   */
  CATFmCatalogFacade(const CATFmCatalogFacade & iCatalogFacade);  

  /**
   * Assignment operator.
   * <br><b>Role</b>: This method transforms this Facade to an exact copy of another Catalog Facade.
   * <br>Both the Credentials and the bound Catalog are copied.
   * @param iCatalogFacade [in]
   *   The Facade to assign.
   * @return
   *   This Facade.
   */
  CATFmCatalogFacade & operator=(const CATFmCatalogFacade & iCatalogFacade); 

  // 0. Facades common methods.

  /**
   * Binds the Facade to a Catalog.
   * <br>This method does not affect the Accreditations Set of the Facade.
   * @param iCatalogName
   *   The name of the catalog.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The Catalog has been found and the Facade bound to it.</dd>
   *     <dt>E_INVALIDARG</dt>
   *     <dd>The Catalog can not been found.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this Catalog.</dd>
   *   </dl>
   */
  HRESULT BindTo(const CATUnicodeString & iCatalogName);

  /**
   * Compares the bound Catalogs of two Facades.
   * <br><b>Role</b>: compares the bound Catalogs of two Facades without taking the Accreditations into account.
   * @param iCatalogFacade [in]
   *   The Catalog to be compared to this.
   * @return
   *   A boolean value.
   *   <br><b>Legal values</b>:
   *   <ul><li><tt>TRUE</tt>: if the Facades are either both invalid or both bound to the same Catalog.</li>
   *       <li><tt>FALSE</tt>: in any other case.</li></ul>
   */
  CATBoolean CompareCatalogWith(const CATFmCatalogFacade & iCatalogFacade) const;

  /**
   * Checks the Facade validity.
   * <br>A Catalog Facade remains valid until the PLM session is closed.
   * @return
   *   A boolean value.
   *   <br><b>Legal values</b>:
   *   <ul><li><tt>TRUE</tt>: if the Facade is valid.</li>
   *       <li><tt>FALSE</tt>: if the Facade is invalid.</li></ul>
   */
  CATBoolean IsValid() const;

  /**
   * Logical-negation (or logical-NOT) operator.
   * <br><b>Role</b>: Checks if the Facade is invalid.
   * <br>A Catalog Facade remains valid until the PLM session is closed.
   * @return
   *   An integer value.
   *   <br><b>Legal values</b>:
   *   <ul><li><tt>1</tt>: if the Facade is invalid.</li>
   *       <li><tt>0</tt>: if the Facade is valid.</li></ul>
   */
  int operator!() const;

  /**
   * Unbinds the Facade from its bound Catalog.
   * <br>This method does not affect the Accreditations Set of the Facade.
   * @return
   *   This Facade.
   */
  CATFmCatalogFacade & Clear();

  // 1. Identity.

  /**
   * Retrieves the name of the bound Catalog.
   * @param oCatalogName [out]
   *   A (caller provided) string in which the name of the Catalog will be stored.
   *   <br>If the method fails <tt>oCatalogName</tt> is not modified, it is otherwise overwritten with the retrieved value.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The Catalog name has been successfuly retrieved.</dd>
   *     <dt>E_INVALIDARG</dt>
   *     <dd>The Facade is not bound to a valid Catalog.</dd>
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>Credentials do not grant access to this Catalog.</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   */
  HRESULT GetCatalogName(CATUnicodeString & oCatalogName) const;

  // 2. Events Subscribing.

  /**
   * Subscribes to events on all startups located in the bound Catalog.
   * <br><b>Role</b>: Subscribes to all kinds of events occurring on all late types of startups located in the bound Catalog.
   * <br> The unsubscribing task is automatically done when the event subscriber instance dies.
   * @param iEventSubscriber
   *   An instance of a user-defined class aimed at handling events.
   * @param iProcessingMethod
   *   The method to call when an event is received.
   * @return
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The subscription has been successfully done.</dd>
   *     <dt>E_INVALIDARG</dt>
   *     <dd>The Facade is not bound to a valid Catalog.</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>Another failure has occured.</dd>
   *   </dl>
   * @see CATFmEventSubscriberMethod .
   */
  HRESULT Subscribe(CATBaseUnknown & iEventSubscriber, CATFmEventSubscriberMethod iProcessingMethod);

private:
  CATUINTPTR m_Data[2];
};

#endif
