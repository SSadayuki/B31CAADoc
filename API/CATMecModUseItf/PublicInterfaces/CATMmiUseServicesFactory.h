#ifndef CATMmiUseServicesFactory_H
#define CATMmiUseServicesFactory_H

// COPYRIGHT DASSAULT SYSTEMES 2009

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATMecModUseItf.h"
#include "CATBaseUnknown.h"
#include "CATIAV5Level.h"

class CATIMmiSubElemProperties_var;
class CATIMmiUseBRepDecodeServices_var;
class CATIMmiUseCreateImport;
class CATIMmiUseLinearBodyServices;
class CATIMmiBRepScanServices;
class CATIMmiViewServices;
class CATIMmiKnolServices;
//-----------------------------------------------------------------------

/**
* Class to access services components.
*
* <br><b>Role</b>: this class give access to basic Mechanical Modeler services.
* For details about behavior of these services, see directly 
* documentation of the service.
*
*/
class ExportedByCATMecModUseItf CATMmiUseServicesFactory
{
public:

  /** 
  * Creates a handler on a CATIMmiSubElemProperties enabling to modify .
  * @param oSubElemProperties 
  *   a <tt>CATIMmiSubElemProperties</tt> handler.
  * @return
  *   <code>S_OK</code> if the service is created.
  *   <br><code>E_FAIL</code> otherwise
  */
  static HRESULT CreateSubElemPropertiesAccess(CATIMmiSubElemProperties_var& oSubElemProperties);

  /** 
  * Creates a handler on a CATIMmiUseBRepDecodeServices.
  * @param oService [out] 
  *   a <tt>CATIMmiUseBRepDecodeServices</tt> handler.
  * @return
  *   <code>S_OK</code> if the service is created.
  *   <br><code>E_FAIL</code> otherwise
  */

  static HRESULT CreateBRepDecodeServices(CATIMmiUseBRepDecodeServices_var& oService);

  #ifdef CATIAR215
  /**
  * @nodoc
  * This method is avaliable in V6 only.
  * Creates a pointer on a CATIMmiUseCreateImport enabling to create an import.
  * @param oInterPartCopy 
  *   a <tt>CATIMmiUseCreateImport</tt> pointer
  * @return
  *   <code>S_OK</code> if service is created.
  *   <br><code>E_FAIL</code> otherwise
  */
  static HRESULT  CreateMmiUseCreateImport(CATIMmiUseCreateImport*& oCreateImport);
#endif

    /** 
  * Creates a pointer on a CATIMmiUseLinearBodyServices.
  * @param oService 
  *   a <tt>CATIMmiUseLinearBodyServices</tt> pointer
  * @return
  *   <code>S_OK</code> if service is created.
  *   <br><code>E_FAIL</code> otherwise
  */
  static HRESULT  CreateMmiUseLinearBodyServices(CATIMmiUseLinearBodyServices*& oService);

  /** 
  * Creates a pointer on a CATIMmiBRepScanServices.
  * @param oService 
  *   a <tt>CATIMmiBRepScanServices</tt> pointer
  * @return
  *   <code>S_OK</code> if service is created.
  *   <br><code>E_FAIL</code> otherwise
  */
  static HRESULT  CreateMmiBRepScanServices(CATIMmiBRepScanServices*& oService);

  /** 
  * Creates a pointer on a CATIMmiViewServices.
  * @param oService 
  *   a <tt>CATIMmiViewServices</tt> pointer
  * @return
  *   <code>S_OK</code> if service is created.
  *   <br><code>E_FAIL</code> otherwise
  */
  static HRESULT  CreateMmiViewServices(CATIMmiViewServices*& oService);

#ifdef CATIAR215
  /** 
  * Creates a pointer on a CATIMmiKnolServices.
  * @param oService 
  *   a <tt>CATIMmiKnolServices</tt> pointer
  * @return
  *   <code>S_OK</code> if service is created.
  *   <br><code>E_FAIL</code> otherwise
  */
  static HRESULT  CreateMmiKnolServices(CATIMmiKnolServices*& oService);
#endif

private:
  // Standard constructors and destructors
  // -------------------------------------
  CATMmiUseServicesFactory ();
  virtual ~CATMmiUseServicesFactory ();

  // Copy constructor and equal operator
  // -----------------------------------
  CATMmiUseServicesFactory (CATMmiUseServicesFactory &);
  CATMmiUseServicesFactory& operator=(CATMmiUseServicesFactory&);

};

//-----------------------------------------------------------------------

#endif
